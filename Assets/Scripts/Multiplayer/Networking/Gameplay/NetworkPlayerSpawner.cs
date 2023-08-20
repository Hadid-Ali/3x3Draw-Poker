using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NetworkPlayerSpawner : MonoBehaviour
{
    private List<PlayerController> m_JoinedPlayers = new();

    private GameEvent<PlayerController> m_OnPlayerSpawned = new();

    public void Initialize(Action<PlayerController> onPlayerSpawned)
    {
        m_OnPlayerSpawned.Register(onPlayerSpawned);
    }
    
    public void SpawnPlayer()
    {
        PhotonNetwork.Instantiate($"Network/Player/Avatars/PlayerAvatar", Vector3.zero, 
            Quaternion.identity);
    }

    public void RegisterPlayer(PlayerController playerController)
    {
        m_JoinedPlayers.Add(playerController);
        m_OnPlayerSpawned.Raise(playerController);
    }
    
    public PlayerController GetPlayerAgainstID(int ID) => m_JoinedPlayers.Find(player => player.ID == ID);
}
