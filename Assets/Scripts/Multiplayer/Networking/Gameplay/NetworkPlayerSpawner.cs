using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NetworkPlayerSpawner : MonoBehaviour
{
    [SerializeField] private Transform[] m_SpawnPoints;

    private List<PlayerController> m_JoinedPlayers = new();

    public void SpawnPlayer()
    {
        int playerID = PhotonNetwork.LocalPlayer.ActorNumber;
        Transform spawnPoint = m_SpawnPoints[playerID - 1];

        PhotonNetwork.Instantiate($"PlayerAvatar", spawnPoint.position,
            spawnPoint.rotation);
    }

    public void RegisterPlayer(PlayerController playerController)
    {
        m_JoinedPlayers.Add(playerController);
    }

    public PlayerController GetPlayerAgainstID(int ID) => m_JoinedPlayers.Find(player => player.ID == ID);
}
