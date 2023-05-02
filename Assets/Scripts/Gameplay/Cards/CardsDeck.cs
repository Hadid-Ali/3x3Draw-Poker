using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardsDeck : MonoBehaviour
{
   [SerializeField] private CardContainer[] m_CardContainers;
   [SerializeField] private DeckName m_DeckName;

   public CardData[] CardsData
   {
      get
      {
         CardData[] cards = new CardData[m_CardContainers.Length];

         for (int i = 0; i < m_CardContainers.Length; i++)
         {
            cards[i] = m_CardContainers[i].CardData;
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
