using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameplayHud : MenusController
{
    [Header("Refs")]
    
    [SerializeField] private GameObject m_ButtonsContainer;
    [SerializeField] private GameObject m_WaitingText;
    
    [Header("UI Components")]
    
    [SerializeField] private Button m_SubmitButton;
    [SerializeField] private TMP_Text m_TotalScore;

    private void Start()
    {
        m_SubmitButton.onClick.AddListener(SubmitCards);
    }

    private void SubmitCards()
    {
        try
        {
            GameEvents.GameplayUIEvents.SubmitDecks.Raise();
            m_ButtonsContainer.SetActive(false);
            m_WaitingText.SetActive(true);
        }
        catch (Exception e)
        {
            Debug.LogError(e.StackTrace);
        }
    }
}
