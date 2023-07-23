using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NetworkCardsDealer : MonoBehaviour
{
    [SerializeField] private DecksHandler m_DecksHandler;

    private int m_HandSize;

    private void Start()
    {
        m_HandSize = GameData.MetaData.DeckSize * GameData.MetaData.DecksCount;
    }

    public void DealCardsToLocalPlayer()
    {
        DealCardsToLocalPlayer(m_DecksHandler.GetRandomHand(m_HandSize));
    }

    public void DealCardsToLocalPlayer(CardData[] cardsData)
    {
        GameEvents.GameplayEvents.UserHandReceivedEvent.Raise(cardsData);
    }
    
    public void DealCardsToNetworkPlayer(PlayerController playerController)
    {
        NetworkHandObject handObject = new(m_DecksHandler.GetRandomHand(m_HandSize));
        string serializedHand = NetworkHandObject.Serialize(handObject);

        playerController.SubmitCardData(serializedHand);
    }
}
