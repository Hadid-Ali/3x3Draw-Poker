using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardsDeck : MonoBehaviour
{
   [SerializeField] private CardContainer[] m_CardContainers;

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
}
