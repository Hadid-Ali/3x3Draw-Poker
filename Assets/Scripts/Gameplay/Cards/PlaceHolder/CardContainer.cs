using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardContainer : MonoBehaviour
{
   [SerializeField] private CardDataHolder m_Card;
   
   [field: SerializeField] public CardData CardData { get; private set; }

   public void SetData(CardData cardData)
   {
      CardData = cardData;
      m_Card.SetCardData(cardData, true);
   }

   public void ClearCardData()
   {
      m_Card.ClearCardData();
   }
}
