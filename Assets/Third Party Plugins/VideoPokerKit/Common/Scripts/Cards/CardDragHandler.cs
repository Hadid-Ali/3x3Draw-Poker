using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class CardDragHandler : MonoBehaviour, IPointerEnterHandler, IDropHandler, IPointerExitHandler, IDragHandler,IBeginDragHandler
{
    [SerializeField] private CardDataHolder m_CurrentCardHandler;

    private void OnEnable()
    {
        
    }

    private void OnDisable()
    {
        
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (GameCardsMediator.CurrentData == null || GameCardsMediator.CurrentData.IsNull)
            return;
        
        SetCardData(GameCardsMediator.CurrentData, false);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        OnPointerExitCell();
    }

    protected virtual void OnPointerExitCell()
    {
        m_CurrentCardHandler.RefreshData();
    }
    
    public void OnDrag(PointerEventData eventData)
    {
        
    } 
    
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (GameCardsMediator.CurrentData != null)
            return;
        
        GameEvents.GameplayEvents.CardDragStartEvent.Raise(m_CurrentCardHandler.CardData, m_CurrentCardHandler);
    }

    public void OnDrop(PointerEventData eventData)
    {
        Debug.LogError(transform.parent);
        GameEvents.GameplayEvents.CardReplacedEvent.Raise(m_CurrentCardHandler.CardData);
        m_CurrentCardHandler.SaveData();
    }

    protected virtual void SetCardData(CardData cardData, bool isPersistent)
    {
        m_CurrentCardHandler.SetCardData(cardData, isPersistent);
    }
}
