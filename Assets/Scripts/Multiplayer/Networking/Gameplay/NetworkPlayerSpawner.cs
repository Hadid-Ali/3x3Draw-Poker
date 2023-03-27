using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NetworkPlayerSpawner : MonoBehaviour
{
    [SerializeField] private Transform[] m_SpawnPoints;

    private List<GameObject> m_JoinedPlayers = new();

    public void SpawnPlayer()
    {
        int playerID = PhotonNetwork.LocalPlayer.ActorNumber;
        Transform spawnPoint = m_SpawnPoints[playerID - 1];

        PhotonNetwork.Instantiate($"Network/Player{playerID}", spawnPoint.position,
            spawnPoint.rotation);
    }

    public void RegisterPlayer(GameObject playerController)
    {
        //m_JoinedPlayers.Add(playerController);
    }

    public GameObject GetPlayerAgainstID(int ID) => m_JoinedPlayers[0];
}
