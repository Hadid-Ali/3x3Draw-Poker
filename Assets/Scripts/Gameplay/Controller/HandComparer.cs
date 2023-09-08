using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public class HandComparer : MonoBehaviour
{
     [SerializeField] private List<HandData> m_HandData = new();
     [SerializeField] private TMP_Text m_LabelText;
    
    private void OnEnable()
    {
        GameEvents.GameplayEvents.CardDeckUpdated.Register(OnDeckUpdated);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.CardDeckUpdated.UnRegister(OnDeckUpdated);
    }

    public void ClearAllDecks()
    {
        m_HandData.Clear();
    }
    
    public void OnDeckUpdated(DeckName deckName, HandTypes handType)
    {
        m_HandData.Add(new HandData()
        {
            HandType = handType,
            HandID = deckName.ToString()
        });

        if (m_HandData.Count < 3)
            return;
        
        SortData();
    }
    
    public void SortData()
    {
        m_HandData = m_HandData.OrderBy(data => (int)data.HandType).ToList();
        m_LabelText.text = $"{m_HandData[0].HandID} is the Winner";
    }
}
