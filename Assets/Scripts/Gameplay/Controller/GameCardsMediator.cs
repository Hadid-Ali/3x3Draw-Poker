using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameCardsMediator : MonoBehaviour
{
    [SerializeField] private DraggableCard m_DraggableCard;
    [SerializeField] private Card m_CardAtHand;

    public static CardData CurrentData
    {
        get; 
        private set;
    }

    private void OnEnable()
    {
        GameEvents.GameplayEvents.CardDragStartEvent.Register(OnCardDragStart);
        GameEvents.GameplayEvents.CardDropEvent.Register(OnCardDrop);
        GameEvents.GameplayEvents.CardReplacedEvent.Register(OnCardDataReplaced);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.CardDragStartEvent.UnRegister(OnCardDragStart);
        GameEvents.GameplayEvents.CardDropEvent.Unregister(OnCardDrop);
        GameEvents.GameplayEvents.CardReplacedEvent.Unregister(OnCardDataReplaced);
    }

    private void OnCardDataReplaced(CardData previousData)
    {
        if (m_CardAtHand == null)
            return;
        
        m_CardAtHand.SetData(previousData, true);
        m_CardAtHand.SetActiveStatus(true);
    }
    
    private void OnCardDragStart(CardData cardData,Card cardDataHolder)
    {
        CurrentData = cardData;
        m_CardAtHand = cardDataHolder;
        
        m_DraggableCard.EnableWithData(cardData);
    }

    private void OnCardDrop()
    {
        m_DraggableCard.SetEnabled(false);
        CurrentData = null;
    }
}