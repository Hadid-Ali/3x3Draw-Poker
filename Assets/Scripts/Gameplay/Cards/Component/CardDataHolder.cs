using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class CardDataHolder : MonoBehaviour
{
    private CardData m_TempData;
    
    private Action m_OnCardClear;
    private Action<CardData> m_SetCardDataInternal;
    
    public CardData CardData { get; private set; }

    public void Initialize(Action onCardClear, Action<CardData> onSetCardData)
    {
        m_OnCardClear = onCardClear;
        m_SetCardDataInternal = onSetCardData;
    }

    public void SetCardData(CardData cardData, bool isPersistent)
    {
        SetCardDataInternal(cardData);

        m_TempData = cardData;

        if (!isPersistent)
            return;
        
        SaveData();
    }

    public void SaveData()
    {
        CardData = m_TempData;
    }

    public void RefreshData()
    {
        if (CardData == null)
            return;
        
        SetCardDataInternal(CardData);
    }

    public void ClearCardData()
    {
        m_OnCardClear.Invoke();
    }

    private void SetCardDataInternal(CardData cardData)
    {
        m_SetCardDataInternal.Invoke(cardData);
    }
}
