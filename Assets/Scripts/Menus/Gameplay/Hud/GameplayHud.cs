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
    [SerializeField] private GameObject m_WaitingText;

    [SerializeField] private GameObject m_GameCardsContainer;
    
    [Header("UI Components")]
    
    [SerializeField] private Button m_SubmitButton;
    [SerializeField] private Button m_EvaluateButton;
    
    [SerializeField] private TMP_Text m_TotalScore;

    [SerializeField] private float m_WaitForCardsToShow = 2f;

    private WaitForSeconds m_CardsContainerWait;
    
    private void Start()
    {
        m_SubmitButton.onClick.AddListener(SubmitCards);
        m_EvaluateButton.onClick.AddListener(EvaluateCards);
        m_CardsContainerWait  = new WaitForSeconds(m_WaitForCardsToShow);
    }

    private void OnEnable()
    {
        GameEvents.GameplayEvents.GameplayStateSwitched.Register(OnGameplayStateSwitched);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.GameplayStateSwitched.Unregister(OnGameplayStateSwitched);
    }

    private void OnGameplayStateSwitched(GameplayState gameplayState)
    {
        StartCoroutine(OnGameplayStateSwitchedInternal(gameplayState));
    }

    private IEnumerator OnGameplayStateSwitchedInternal(GameplayState gameplayState)
    {
        switch (gameplayState)
        {
            case GameplayState.Casino_View:
                SetGameplayCardsViewState(false);
                break;
            
            case GameplayState.Cards_View:
                yield return m_CardsContainerWait;
                SetGameplayCardsViewState(true);
                break;
        }
        
        yield return null;
    }

    private void SetGameplayCardsViewState(bool state)
    {
        m_GameCardsContainer.SetActive(state);
        GameEvents.GameplayEvents.GameplayCardsStateChanged.Raise(state);
    }
    
    private void SubmitCards()
    {
        m_ButtonsContainer.SetActive(false);
        m_WaitingText.SetActive(true);
        GameEvents.GameplayUIEvents.SubmitDecks.Raise();
    }

    private void EvaluateCards()
    {
        GameEvents.GameplayUIEvents.EvaluateDeck.Raise();
    }
}
