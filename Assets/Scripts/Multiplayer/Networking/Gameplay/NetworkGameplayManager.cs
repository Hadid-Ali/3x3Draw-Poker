using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;

[RequireComponent(typeof(NetworkPlayerSpawner))]
public class NetworkGameplayManager : SceneBasedSingleton<NetworkGameplayManager>
{
    [SerializeField] private NetworkPlayerSpawner m_NetworkPlayerSpawner;
    [SerializeField] private PhotonView m_NetworkGameplayManagerView;

    [SerializeField] private NetworkMatchManager m_NetworkMatchManager;
    [SerializeField] private List<NetworkDataObject> m_AllDecks = new();

    protected override void SingletonAwake()
    {
        base.SingletonAwake();
        m_NetworkPlayerSpawner.Initialize(OnPlayerSpawned);
    }

    private void Start()
    {
        Debug.LogError("Spawn Player", gameObject); 
        m_NetworkPlayerSpawner.SpawnPlayer();
    }

    private void OnEnable()
    {
        GameEvents.NetworkGameplayEvents.NetworkSubmitRequest.Register(OnNetworkSubmitRequest);
        GameEvents.GameplayEvents.UserHandsEvaluated.Register(OnRoundScoreEvaluated);
        GameEvents.GameplayUIEvents.RestartGame.Register(RestartGame);
    }

    private void OnDisable()
    {
        GameEvents.NetworkGameplayEvents.NetworkSubmitRequest.Unregister(OnNetworkSubmitRequest);
        GameEvents.GameplayEvents.UserHandsEvaluated.Unregister(OnRoundScoreEvaluated);
        GameEvents.GameplayUIEvents.RestartGame.Unregister(RestartGame);
    }

    private void OnPlayerSpawned(PlayerController playerController)
    {
        m_NetworkMatchManager.OnPlayerSpawnedInMatch(playerController);
    }
    
    private void OnNetworkSubmitRequest(NetworkDataObject networkDataObject)
    {
        string jsonData = NetworkDataObject.Serialize(networkDataObject);

        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(OnNetworkSubmitRequest_RPC),
            RpcTarget.All, new object[] { jsonData });
    }

    [PunRPC]
    private void OnNetworkSubmitRequest_RPC(string jsonData)
    {
        NetworkDataObject dataObject = NetworkDataObject.DeSerialize(jsonData);
        m_AllDecks.Add(dataObject);

        Debug.LogError(m_AllDecks.Count);

        if (!PhotonNetwork.IsMasterClient)
            return;
        
        if (m_AllDecks.Count >= GameData.SessionData.CurrentRoomPlayersCount)
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
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(RestartGame_RPC), RpcTarget.Others,
            null);
        RestartInternal();
    }

    [PunRPC]
    public void SyncUserScores_RPC(string data)
    {
        Debug.LogError($"Receive Data {data}");
        
        SerializableList<PlayerScoreObject> playerScores =
            JsonUtility.FromJson<SerializableList<PlayerScoreObject>>(data);
        GameEvents.NetworkGameplayEvents.OnPlayerScoresReceived.Raise(m_AllDecks, playerScores.Contents);
    }

    [PunRPC]
    public void RestartGame_RPC()
    {
        Invoke(nameof(
            RestartInternal), 0.5f);
    }

    private void RestartInternal()
    {
        m_NetworkMatchManager.RestartMatch();   
    }
}
