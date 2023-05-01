using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameCardsMediator : MonoBehaviour
{
    [SerializeField] private DraggableCard m_DraggableCard;
    [SerializeField] private CardDataHolder m_CardAtHand;

    private static CardData _CurrentData;
    
    public static CardData CurrentData
    {
        get => _CurrentData;
        set
        {
            _CurrentData = value;
            Debug.LogError("Setting Value");
        }
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
        
        m_CardAtHand.SetCardData(previousData, true);
    }
    
    private void OnCardDragStart(CardData cardData,CardDataHolder cardDataHolder)
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