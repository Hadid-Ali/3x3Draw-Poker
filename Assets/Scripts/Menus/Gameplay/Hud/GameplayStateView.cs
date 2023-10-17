using System.Collections;
using UnityEngine;

public class GameplayStateView : MonoBehaviour
{
    [Header("Components")]
    
    [SerializeField] private CanvasGroup m_GameCardsContainer;
    [SerializeField] private GameObject m_CasinoViewObject;
    [SerializeField] private ResultUIView mResultUIView;
    
    [Header("Properties")]
    
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
        switch (gameplayState)
        {
            case GameplayState.Casino_View:
                SwitchToCasinoView();
                break;

            case GameplayState.Cards_View:
                StartCoroutine(SwitchToCardsView());
                break;
            
            case GameplayState.Result_Deck_View:
                SwitchToResultantView();
                break;
        }
    }

    private void SwitchToCasinoView()
    {
        SetCasinoViewObjectState(true);
        SetGameplayCardsViewState(false);
        SetResultView(false);
    }

    private IEnumerator SwitchToCardsView()
    {
        SetResultView(false);
        SetCasinoViewAnimatorState(false);

        yield return m_CardsContainerWait;

        SetGameplayCardsViewState(true);
        SetCasinoViewObjectState(false);
    }

    private void SwitchToResultantView()
    {
        SetResultView(true);
        SetGameplayCardsViewState(false);
        SetCasinoViewObjectState(false);
    }

    private void SetResultView(bool status)
    {
        mResultUIView.SetActiveState(status);
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
