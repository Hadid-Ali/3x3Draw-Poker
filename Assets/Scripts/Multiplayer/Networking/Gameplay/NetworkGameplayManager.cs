using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

[RequireComponent(typeof(NetworkPlayerSpawner))]
[RequireComponent(typeof(NetworkMatchManager))]
public class NetworkGameplayManager : SceneBasedSingleton<NetworkGameplayManager>
{
    [SerializeField] private NetworkPlayerSpawner m_NetworkPlayerSpawner;
    [SerializeField] private NetworkMatchManager m_NetworkMatchManager;
    
    [SerializeField] private PhotonView m_NetworkGameplayManagerView;

    private List<NetworkDataObject> m_AllDecks = new();
    
    private void Start()
    {
        m_NetworkPlayerSpawner.SpawnPlayer();
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
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(OnNetworkSubmitRequest_RPC),
            RpcTarget.MasterClient, new[] { networkDataObject });
    }

    [PunRPC]
    private void OnNetworkSubmitRequest_RPC(NetworkDataObject networkDataObject)
    {
        m_AllDecks.Add(networkDataObject);
    }
    
    public void OnGameplayJoined(PlayerController playerController)
    {
        m_NetworkPlayerSpawner.RegisterPlayer(playerController);
    }

    public void SubmitCardsDeck(GameCardsData gameCardsData)
    {
        
    }
}
