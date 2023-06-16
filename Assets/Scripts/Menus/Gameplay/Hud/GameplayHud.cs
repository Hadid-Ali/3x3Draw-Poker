using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityAtoms.BaseAtoms;
using UnityEngine;
using UnityEngine.UI;

public class GameplayHud : MonoBehaviour
{
    [Header("Refs")]
    
    [SerializeField] private GameObject m_ButtonsContainer;

    [Header("UI Components")]
    
    [SerializeField] private Button m_SubmitButton;
    [SerializeField] private Button m_EvaluateButton;
    
    [SerializeField] private TMP_Text m_TotalScore;

    private void Start()
    {
        m_SubmitButton.onClick.AddListener(SubmitCards);
        m_EvaluateButton.onClick.AddListener(EvaluateCards);
    }
    
    private void SubmitCards()
    {
        GameEvents.GameplayUIEvents.SubmitDecks.Raise();
    }

    private void EvaluateCards()
    {
        GameEvents.GameplayUIEvents.EvaluateDeck.Raise();
    }
}
