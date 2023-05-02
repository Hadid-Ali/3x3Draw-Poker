using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class CardsDeck : MonoBehaviour
{
   [SerializeField] private DeckName m_DeckName;
   [SerializeField] private Card[] m_Cards;

   private void Awake()
   {
      // for (int i = 0; i < m_Cards.Length; i++)
      // {
      //    m_Cards[i].InitializeWithAction(OnDeckUpdated);
      // }
   }

   public CardData[] CardsData
   {
      get
      {
         CardData[] cards = new CardData[m_Cards.Length];

         for (int i = 0; i < m_Cards.Length; i++)
         {
            cards[i] = m_Cards[i].CardData;
         }

         return cards;
      }
   }

   public void OnDeckUpdated()
   {
      HandType handType = CardsManager.EvaluateDeck(CardsData);
      GameEvents.GameplayEvents.CardDeckUpdated.Raise(m_DeckName, handType);
   }
}
