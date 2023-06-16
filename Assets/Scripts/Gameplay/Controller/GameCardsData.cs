using System;
using System.Collections.Generic;
using UnityEngine;

public class GameCardsData : SceneBasedSingleton<GameCardsData>
{
    [SerializeField] private CardsDeck[] m_Decks;

    public List<CardData[]> GetDecksData()
    {
        List<CardData[]> data = new();
        Array.ForEach(m_Decks,deck => data.Add(deck.CardsData));

        return data;
    }
}
