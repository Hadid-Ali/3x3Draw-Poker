using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Mime;
using ExitGames.Client.Photon;
using UnityEngine;
using Photon.Pun;

[RequireComponent(typeof(NetworkPlayerSpawner))]
[RequireComponent(typeof(NetworkMatchManager))]
public class NetworkGameplayManager : SceneBasedSingleton<NetworkGameplayManager>
{
    [SerializeField] private NetworkPlayerSpawner m_NetworkPlayerSpawner;
    [SerializeField] private NetworkMatchManager m_NetworkMatchManager;
    
    [SerializeField] private PhotonView m_NetworkGameplayManagerView;

    [SerializeField] private List<NetworkDataObject> m_AllDecks = new();
    
    private void Start()
    {
        m_NetworkPlayerSpawner.SpawnPlayer();
    //    PhotonPeer.RegisterType(typeof(NetworkDataObject),Byte.MaxValue, SerializeMethod.)
    }

    private void OnEnable()
    {
        GameEvents.GameplayEvents.NetworkSubmitRequest.Register(OnNetworkSubmitRequest);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.NetworkSubmitRequest.Unregister(OnNetworkSubmitRequest);
    }

    private void OnNetworkSubmitRequest(NetworkDataObject networkDataObject)
    {
        string jsonData = NetworkDataObject.Serialize(networkDataObject);

        Debug.LogError($"{jsonData}");   
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(OnNetworkSubmitRequest_RPC),
            RpcTarget.MasterClient, new object[] { jsonData });
    }

    [PunRPC]
    private void OnNetworkSubmitRequest_RPC(string jsonData)
    {
        Debug.LogError($"Size Received {System.Text.Encoding.ASCII.GetBytes(jsonData).Length}");
        NetworkDataObject dataObject = NetworkDataObject.DeSerialize(jsonData);
        m_AllDecks.Add(dataObject);
    }
    
    public void OnGameplayJoined(PlayerController playerController)
    {
        m_NetworkPlayerSpawner.RegisterPlayer(playerController);
    }

    public void SubmitCardsDeck(GameCardsData gameCardsData)
    {
        
    }
}
