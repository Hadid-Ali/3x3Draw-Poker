using UnityEngine;
using System.Collections.Generic;
using Photon.Pun;

[RequireComponent(typeof(NetworkPlayerSpawner))]
[RequireComponent(typeof(NetworkMatchManager))]
public class NetworkGameplayManager : SceneBasedSingleton<NetworkGameplayManager>
{
    [SerializeField] private NetworkPlayerSpawner m_NetworkPlayerSpawner;
    [SerializeField] private PhotonView m_NetworkGameplayManagerView;

    [SerializeField] private List<NetworkDataObject> m_AllDecks = new();
    
    private void Start()
    {
        m_NetworkPlayerSpawner.SpawnPlayer();
    }

    private void OnEnable()
    {
        GameEvents.GameplayEvents.NetworkSubmitRequest.Register(OnNetworkSubmitRequest);
        GameEvents.GameplayEvents.UserHandsEvaluated.Register(OnRoundScoreEvaluated);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.NetworkSubmitRequest.Unregister(OnNetworkSubmitRequest);
        GameEvents.GameplayEvents.UserHandsEvaluated.Unregister(OnRoundScoreEvaluated);
    }

    private void OnNetworkSubmitRequest(NetworkDataObject networkDataObject)
    {
        string jsonData = NetworkDataObject.Serialize(networkDataObject);

        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(OnNetworkSubmitRequest_RPC),
            RpcTarget.MasterClient, new object[] { jsonData });
    }

    [PunRPC]
    private void OnNetworkSubmitRequest_RPC(string jsonData)
    {
        //Debug.LogError($"Size Received {System.Text.Encoding.ASCII.GetBytes(jsonData).Length}");
        NetworkDataObject dataObject = NetworkDataObject.DeSerialize(jsonData);
        m_AllDecks.Add(dataObject);

        if (m_AllDecks.Count >= GameData.SessionData.CurrentRoomPlayersCount)
        {
            OnNetworkDeckReceived();
        }
    }
    
    private void OnNetworkDeckReceived()
    {
        GameEvents.GameplayEvents.AllUserHandsReceived.Raise(m_AllDecks);
    }

    private void OnRoundScoreEvaluated(Dictionary<int, int> userScores)
    {
        foreach (KeyValuePair<int,int> playerScores in userScores)
        {
            KeyValuePair<int, int> scoreItem = playerScores;
            m_NetworkPlayerSpawner.GetPlayerAgainstID(scoreItem.Key).AwardPlayerPoints(scoreItem.Value);
        }
    }
    

    public void OnGameplayJoined(PlayerController playerController)
    {
        m_NetworkPlayerSpawner.RegisterPlayer(playerController);
    }

    public void SubmitCardsDeck(GameCardsData gameCardsData)
    {
        
    }
}
