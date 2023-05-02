using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class CardsDeck : MonoBehaviour
{
   [SerializeField] private DeckName m_DeckName;
   [SerializeField] private Card[] m_Cards;

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

   private void OnDeckUpdated()
   {
      HandType handType = CardsManager.EvaluateDeck(CardsData);
      GameEvents.GameplayEvents.CardDeckUpdated.Raise(m_DeckName, handType);
   }
}
