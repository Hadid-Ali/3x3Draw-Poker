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
    
    private void Start()
    {
        m_NetworkPlayerSpawner.SpawnPlayer();
    }
    
/// <summary>
/// Gets Called To Register Players On Master Side
/// </summary>
/// <param name="playerController"></param>
    public void OnGameplayJoined(GameObject playerController)
    {
        m_NetworkPlayerSpawner.RegisterPlayer(playerController);
    }
    
    public void MarkPlayerWinner(int ID)
    {
     //   m_NetworkPlayerSpawner.GetPlayerAgainstID(ID).MarkAsWinner();
    }

    public void MarkPlayerLost(int ID,int position)
    {
       // m_NetworkPlayerSpawner.GetPlayerAgainstID(ID).MarkAsLoser(position);
    }
    
    public void MarkPlayerReached(int ID)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            MarkReached(ID);
        }
        else
        {
            NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(MarkReached),
                RpcTarget.MasterClient, new object[] { ID });
        }
    }

    [PunRPC]
    private void MarkReached(int ID)
    {
        m_NetworkMatchManager.MarkPlayerReached(ID);
    }
}
