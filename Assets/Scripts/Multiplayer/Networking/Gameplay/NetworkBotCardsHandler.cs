using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class NetworkBotCardsHandler : MonoBehaviour
{
    [SerializeField] private List<CardData> cards = new();

    private void Awake()
    {
        InitializeDeckForBot();
    }
    
    public void InitializeDeckForBot()
    {
        for (int i = 0; i < 15; i++)
        {
            int randomType = Random.Range(0, 5);
            int randomValue = Random.Range(0, 14);

            cards.Add(new CardData()
            {
                type = (CardType)randomType,
                value = (CardValue)randomValue
            });
        }
    }

    public List<CardData> GetCards()
    {
        return cards;
    }
}
