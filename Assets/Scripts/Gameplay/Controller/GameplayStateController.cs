using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameplayStateController : MonoBehaviour
{
    [SerializeField] private GameplayState m_GameplayState = GameplayState.Casino_View;
    [SerializeField] private float m_WaitBeforeCardsFocus = 2f;
    
    void Start()
    {
       GameEvents.GameFlowEvents.RoundStart.Raise();
    }

    private void OnEnable()
    {
        GameEvents.GameFlowEvents.RoundStart.Register(LoadCardsView);
    }

    private void OnDisable()
    {
        GameEvents.GameFlowEvents.RoundStart.UnRegister(LoadCardsView);
    }

    private void LoadCardsView()
    {
        ChangeState(GameplayState.Casino_View);
        Invoke(nameof(ChangeToCardsView), m_WaitBeforeCardsFocus);
    }
    
    private void ChangeToCardsView()
    {
        ChangeState(GameplayState.Cards_View);
    }

    private void ChangeState(GameplayState gameplayState)
    {
        if (m_GameplayState == gameplayState)
            return;
        
        m_GameplayState = gameplayState;
        GameEvents.GameplayEvents.GameplayStateSwitched.Raise(gameplayState);
        OnGameStateChanged(gameplayState);
    }

    private void OnGameStateChanged(GameplayState gameplayState)
    {
        Debug.LogError($"Gameplay State {gameplayState}");
    }
}
