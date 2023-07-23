using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class DecksHandler : MonoBehaviour
{
    [Header("The deck"),SerializeField] private List<CardData> m_CardsRegistry;
    private int m_CurrentNumberOfDecksToUse = 1;

    private List<CardData> m_CurrentGameDeck = new();

    private void Start()
    {
        SetDecksCount(1);
    }

    public CardData GetRandomCard()
    {
        int index = Random.Range(0, m_CurrentGameDeck.Count);
        
        CardData data = m_CurrentGameDeck[index];
        m_CurrentGameDeck.RemoveAt(index);

        return data;
    }
    
    public void SetDecksCount(int count)
    {
        m_CurrentNumberOfDecksToUse = count;
        SetupCurrentGameDeck();
    }
    
    void SetupCurrentGameDeck()
    {
        for (int i = 0; i < m_CurrentNumberOfDecksToUse; i++)
        {
            m_CurrentGameDeck.AddRange(m_CardsRegistry);
        }
    }

    public CardData[] GetRandomHand(int cardsAmount)
    {
        List<CardData> handsData = new();

        for (int i = 0; i < cardsAmount; i++)
        {
            handsData.Add( GetRandomCard());
        }

        return handsData.ToArray();
    }
}
