using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NetworkMatchManager : MonoBehaviour
{
    [SerializeField] private NetworkGameplayManager m_NetworkGameplayManager;
    [SerializeField] private NetworkCardsDealer m_CardsDealer;

    public void OnPlayerSpawnedInMatch(PlayerController playerController)
    {
        if (!PhotonNetwork.IsMasterClient)
            return;
        
        if (playerController.IsLocalPlayer)
        {
            m_CardsDealer.DealCardsToLocalPlayer();
        }
        else
        {
            m_CardsDealer.DealCardsToNetworkPlayer(playerController);
        }
    }
    
}
