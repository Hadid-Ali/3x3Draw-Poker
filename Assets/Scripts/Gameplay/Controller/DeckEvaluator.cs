using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DeckEvaluator : MonoBehaviour
{
    [SerializeField] private CardsDeck m_CardsDeck;
    [SerializeField] private TMP_Text m_DeckType;
    
    [ContextMenu("Evaluate Deck")]
    public void EvaluateDeck()
    {
        m_DeckType.text = CardsManager.EvaluateDeck(m_CardsDeck.CardsData).ToString();
    }
}
