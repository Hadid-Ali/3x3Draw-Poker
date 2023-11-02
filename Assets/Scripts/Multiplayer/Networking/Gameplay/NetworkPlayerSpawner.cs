using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NetworkPlayerSpawner : MonoBehaviour
{
    private List<PlayerController> m_JoinedPlayers = new();

    private GameEvent<PlayerController> m_OnPlayerSpawned = new();

    private void Start()
    {
        Dependencies.PlayersContainer = this;
    }

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
        OnPlayerSpawned(playerController);
    }
    
    private void OnPlayerSpawned(PlayerController playerController)
    {
        m_OnPlayerSpawned.Raise(playerController);
    }

    public void ReIteratePlayerSpawns()
    {
        for (int i = 0; i < m_JoinedPlayers.Count; i++)
        {
            OnPlayerSpawned(m_JoinedPlayers[i]);
        }
    }
    
    public PlayerController GetPlayerAgainstID(int ID) => m_JoinedPlayers.Find(player => player.ID == ID);

    public string GetPlayerName(int ID) => GetPlayerAgainstID(ID).Name;
}
