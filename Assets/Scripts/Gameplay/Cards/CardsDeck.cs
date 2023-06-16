using System;
using UnityEngine;

public class CardsDeck : MonoBehaviour
{
   [SerializeField] private DeckName m_DeckName;
   [SerializeField] private Card[] m_Cards;

   private void OnEnable()
   {
      GameEvents.GameplayUIEvents.EvaluateDeck.Register(EvaluateDeckInternal);
   }

   private void OnDisable()
   {
      GameEvents.GameplayUIEvents.EvaluateDeck.Unregister(EvaluateDeckInternal);
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

   public void PrintDeck()
   {
      Array.ForEach(CardsData, card => Debug.LogError($"Data : {card}"));
      CardType type = CardsData[0].type;
   }
   
   public void OnDeckUpdated()
   {
      EvaluateDeckInternal();
   }

   private void EvaluateDeckInternal()
   {
      HandType handType = CardsManager.EvaluateDeck(CardsData);
      GameEvents.GameplayEvents.CardDeckUpdated.Raise(m_DeckName, handType);  
   }
}
