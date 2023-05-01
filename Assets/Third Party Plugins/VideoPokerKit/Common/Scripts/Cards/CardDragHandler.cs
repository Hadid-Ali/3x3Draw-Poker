using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class CardDragHandler : MonoBehaviour, IPointerEnterHandler, IDropHandler, IPointerExitHandler,IBeginDragHandler,IDragHandler
{
    [SerializeField] private Card m_Card;
    [SerializeField] private CardDataHolder m_CurrentCardHandler;
    
    public void OnDrag(PointerEventData eventData)
    {
    }
    
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (GameCardsMediator.CurrentData != null)
            return;

        m_Card.SetActiveStatus(false);
        GameEvents.GameplayEvents.CardDragStartEvent.Raise(m_CurrentCardHandler.CardData, m_Card);
    }
    
    public void OnPointerEnter(PointerEventData eventData)
    {
        if (GameCardsMediator.CurrentData == null || GameCardsMediator.CurrentData.IsNull)
            return;
        
        SetCardData(GameCardsMediator.CurrentData, false);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        m_CurrentCardHandler.RefreshData();
    } 
    
    public void OnDrop(PointerEventData eventData)
    {
        GameEvents.GameplayEvents.CardReplacedEvent.Raise(m_CurrentCardHandler.CardData);
        m_CurrentCardHandler.SaveData();
    }

    protected virtual void SetCardData(CardData cardData, bool isPersistent)
    {
        m_CurrentCardHandler.SetCardData(cardData, isPersistent);
    }
}
