using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class NetworkBotCardsHandler : MonoBehaviour
{
    private static List<CardData> cards = new();

    private void Awake()
    {
        InitializeDeckForBot();
        //GameEvents.NetworkGameplayEvents.UserHandReceivedEvent.Register(DealCards);
        //GameEvents.NetworkEvents.PlayerReceiveCardsData.Register(ReceiveHandData);
    }



    private void OnDestroy()
    {
       // GameEvents.NetworkGameplayEvents.UserHandReceivedEvent.UnRegister(DealCards);
        //GameEvents.NetworkEvents.PlayerReceiveCardsData.UnRegister(ReceiveHandData);
    }

    private void DealCards(CardData[] obj)
    {
        cards.Clear();
        
        for (int i = 0; i < 15; i++)
            cards.Add(obj[i]);
    }

    public void InitializeDeckForBot()
    {
        for (int i = 0; i < 15; i++)
        {
            int randomType = Random.Range(0, 4);
            int randomValue = Random.Range(0, 13);

            cards.Add(new CardData()
            {
                type = (CardType)randomType,
                value = (CardValue)randomValue
            });
        }
    }

    public static List<CardData> GetCards()
    {
        print($"Get Cards : {cards.Count}");
        return cards;
    }
}
