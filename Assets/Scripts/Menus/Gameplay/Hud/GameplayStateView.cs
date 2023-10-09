using System;
using System.Collections;
using UnityEngine;

public class GameplayStateView : MonoBehaviour
{
    [Header("Components")]
    
    [SerializeField] private CanvasGroup m_GameCardsContainer;
    [SerializeField] private GameObject m_CasinoViewObject;
    
    [SerializeField] private Animator m_CasinoViewAnimator;
    
    
    [SerializeField] private float m_WaitForCardsToShow = 2f;

    private WaitForSeconds m_CardsContainerWait;
    
    private int m_ScaleInParamter => Animator.StringToHash("ScaleIn");
    private int m_ScaleOutParamter => Animator.StringToHash("ScaleOut");

    private void Start()
    {
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
                SetCasinoViewObjectState(true);
                SetGameplayCardsViewState(false);
                break;

            case GameplayState.Cards_View:
                SetCasinoViewAnimatorState(false);

                yield return m_CardsContainerWait;

                SetGameplayCardsViewState(true);
                SetCasinoViewObjectState(false);

                break;
        }

        yield return null;
    }
    
    private void SetGameplayCardsViewState(bool state)
    {
        m_GameCardsContainer.alpha = state ? 1 : 0;
        m_GameCardsContainer.interactable = state;
        GameEvents.GameplayEvents.GameplayCardsStateChanged.Raise(state);
    }

    private void SetCasinoViewAnimatorState(bool scaleOut)
    {
        m_CasinoViewAnimator.SetTrigger(scaleOut ? m_ScaleOutParamter : m_ScaleInParamter);
    }

    private void SetCasinoViewObjectState(bool state)
    {
        m_CasinoViewObject.SetActive(state);
    }
}
