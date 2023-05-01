using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class CardDataHolder : MonoBehaviour
{
    [SerializeField] private Card m_CardComponent;

    private CardData m_TempData;

    public CardData CardData { get; private set; }

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
        SetCardDataInternal(CardData);
    }

    public void ClearCardData()
    {
        m_CardComponent.ClearAfterDeal();
    }

    private void SetCardDataInternal(CardData cardData)
    {
        m_CardComponent.SetCardData(cardData);
    }
}
