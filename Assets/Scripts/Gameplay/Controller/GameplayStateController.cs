using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameplayStateController : MonoBehaviour
{
    [SerializeField] private GameplayState m_GameplayState = GameplayState.Casino_View;
    [SerializeField] private float m_WaitBeforeCardsFocus = 2f;
    
    void Start()
    {
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
    }
}