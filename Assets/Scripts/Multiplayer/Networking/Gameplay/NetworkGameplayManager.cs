using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;

[RequireComponent(typeof(NetworkPlayerSpawner))]
public class NetworkGameplayManager : MonoBehaviour
{
    public int BotCount {private set; get;}
    [SerializeField] private NetworkPlayerSpawner m_NetworkPlayerSpawner;
    [SerializeField] protected PhotonView m_NetworkGameplayManagerView;
    [SerializeField] private NetworkMatchManager m_NetworkMatchManager;
    
    [SerializeField] private NetworkGameplayScoreHandler m_NetworkScoreHandler;
    [SerializeField] private NetworkMatchStartRules m_MatchStartRules;
    
    private List<NetworkDataObject> m_AllDecks = new();
    public PhotonView NetworkViewComponent => m_NetworkGameplayManagerView;

    public virtual void Awake()
    {
        m_NetworkPlayerSpawner.Initialize(OnPlayerSpawned);
        m_NetworkScoreHandler.Initialize(OnPlayerWin);
    }
    
    private void Start()
    {
        StartMatchInternal();
    }

    private void OnEnable()
    {
        GameEvents.NetworkGameplayEvents.NetworkSubmitRequest.Register(OnNetworkSubmitRequest);
        GameEvents.NetworkGameplayEvents.PlayerJoinedGame.Register(OnGameplayJoined);
        GameEvents.GameplayEvents.UserHandsEvaluated.Register(OnRoundScoreEvaluated);
        GameEvents.GameFlowEvents.RestartRound.Register(RestartGame);
    }

    private void OnDisable()
    {
        GameEvents.NetworkGameplayEvents.NetworkSubmitRequest.UnRegister(OnNetworkSubmitRequest);
        GameEvents.NetworkGameplayEvents.PlayerJoinedGame.UnRegister(OnGameplayJoined);
        GameEvents.GameplayEvents.UserHandsEvaluated.UnRegister(OnRoundScoreEvaluated);
        GameEvents.GameFlowEvents.RestartRound.UnRegister(RestartGame);
    }

    private void OnPlayerWin(int networkViewID,int runnerUpID,int secondRunnerUpID)
    {
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView,nameof(AnnounceWinner_RPC),RpcTarget.All,new object[]
        {
            networkViewID,
            runnerUpID,
            secondRunnerUpID
        });
    }

    private void StartMatchInternal()
    {
        if (!PhotonNetwork.IsMasterClient)
            return;
        
        StartMatch();
    }

    private void OnPlayerSpawned(PlayerController playerController)
    {
        m_NetworkMatchManager.OnPlayerSpawnedInMatch(playerController);
    }
    
    public virtual void OnNetworkSubmitRequest(NetworkDataObject networkDataObject)
    {
        string jsonData = NetworkDataObject.Serialize(networkDataObject);

        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(OnNetworkSubmitRequest_RPC),
            RpcTarget.All, new object[] { jsonData });
    }

    private HashSet<int> m_AlreadyCheckedDecks = new ();
    
    [PunRPC]
    public void OnNetworkSubmitRequest_RPC(string jsonData)
    {
        NetworkDataObject dataObject = NetworkDataObject.DeSerialize(jsonData);
        
        if(!m_AlreadyCheckedDecks.Contains(dataObject.PhotonViewID))
            m_AllDecks.Add(dataObject);
        
        m_AlreadyCheckedDecks.Add(dataObject.PhotonViewID);
        Debug.LogError(m_AllDecks.Count);

        if (!PhotonNetwork.IsMasterClient)
            return;
        
        if (m_AllDecks.Count == GameData.SessionData.CurrentRoomPlayersCount)
        {
            OnNetworkDeckReceived();
        }
    }
    
    private void OnNetworkDeckReceived()
    {
        GameEvents.NetworkGameplayEvents.AllUserHandsReceived.Raise(m_AllDecks);
    }

    private void OnRoundScoreEvaluated(Dictionary<int, PlayerScoreObject> userScores)
    {
        
        SyncUserScoresOverNetwork(new SerializableList<PlayerScoreObject>()
        {
            Contents = userScores.Values.ToList()
        });
        
        foreach (KeyValuePair<int, PlayerScoreObject> playerScores in userScores)
        {
            KeyValuePair<int, PlayerScoreObject> scoreItem = playerScores;
            m_NetworkPlayerSpawner.GetPlayerAgainstID(scoreItem.Key).AwardPlayerPoints(scoreItem.Value.Score);
        }
        
    }

    private void SyncUserScoresOverNetwork(SerializableList<PlayerScoreObject> playerScores)
    {
        string dataString = JsonUtility.ToJson(playerScores);
        
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView,nameof(SyncUserScores_RPC),RpcTarget.All,new object[]
        {
            dataString
        });
    }

    public void OnGameplayJoined(PlayerController playerController)
    {
        m_NetworkPlayerSpawner.RegisterPlayer(playerController);
    }

    public void RestartGame()
    {
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(RestartGame_RPC), RpcTarget.All,
            null);

        GameData.RuntimeData.CURRENT_BOTS_FOR_SPAWNING = 0;
    }

    public void StartMatch()
    {
        BotCount = m_MatchStartRules.GetBotCount(GameData.SessionData.CurrentRoomPlayersCount);
        
        GameData.SessionData.CurrentRoomPlayersCount += BotCount;
        GameData.RuntimeData.CURRENT_BOTS_FOR_SPAWNING = BotCount;
        int count = GameData.SessionData.CurrentRoomPlayersCount;
        
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(StartMatch_RPC),
            RpcTarget.AllBuffered, new object[]
            {
                count
            });

    }

    [PunRPC]
    private void AnnounceWinner_RPC(int winnerNetworkViewID, int runnerUpNetworkViewID, int secondRunnerUpNetworkViewID)
    {
        List<int> scoresList = new List<int>()
        {
            winnerNetworkViewID,
            runnerUpNetworkViewID
        };

        if (secondRunnerUpNetworkViewID != GameData.MetaData.NullID)
            scoresList.Add(secondRunnerUpNetworkViewID);

        GameEvents.NetworkGameplayEvents.MatchWinnersAnnounced.Raise(scoresList,
            Dependencies.PlayersContainer.GetLocalPlayerNetworkID() == winnerNetworkViewID);

        GameEvents.GameFlowEvents.MatchOver.Raise();
    }

    [PunRPC]
    public void StartMatch_RPC(int count)
    {
        GameData.SessionData.CurrentRoomPlayersCount = count;
    }
    
    [PunRPC]
    public void SyncUserScores_RPC(string data)
    {
        SerializableList<PlayerScoreObject> playerScores =
            JsonUtility.FromJson<SerializableList<PlayerScoreObject>>(data);
        
        GameEvents.NetworkGameplayEvents.PlayerScoresReceived.Raise(m_AllDecks, playerScores.Contents);
    }

    [PunRPC]
    public void RestartGame_RPC()
    {
        ResetMatch();
        m_NetworkMatchManager.RestartMatch();
        Invoke(nameof(DelayedReIteratePlayers), 1f);
    }
    
    
    private void ResetMatch()
    {
        m_AllDecks.Clear();   
        m_AlreadyCheckedDecks.Clear();
    }

    private void DelayedReIteratePlayers()
    {
        m_NetworkPlayerSpawner.ReIteratePlayerSpawns();
    }
}
