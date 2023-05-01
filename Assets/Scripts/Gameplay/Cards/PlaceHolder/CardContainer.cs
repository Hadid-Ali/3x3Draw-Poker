using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardContainer : MonoBehaviour
{
   [SerializeField] private CardDataHolder m_Card;

   public CardData CardData => m_Card.CardData;

   public void SetData(CardData cardData)
   {
      m_Card.SetCardData(cardData, true);
   }

   public void ClearCardData()
   {
      m_Card.ClearCardData();
   }
}
