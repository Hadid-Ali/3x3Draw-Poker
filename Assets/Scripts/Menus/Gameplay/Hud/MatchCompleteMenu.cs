using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MatchCompleteMenu : UIMenuBase
{
    [SerializeField] private List<ScoreWidget> m_ScoreWidgets = new();
    
    [SerializeField] private TextMeshProUGUI m_MatchCompleteTitleText;
    [SerializeField] private TextMeshProUGUI m_MatchCompleteText;
    
    [SerializeField] private float m_WaitBeforeMenuTransition = 3.5f;

    private void OnEnable()
    {
       // GameEvents.GameplayUIEvents.DispatchScores.Register(SetupScores);
        GameEvents.NetworkGameplayEvents.MatchWinnerAnnounced.Register(OnMatchWinnerAnnounced);
    }

    private void OnDisable()
    {
       // GameEvents.GameplayUIEvents.DispatchScores.UnRegister(SetupScores);
        GameEvents.NetworkGameplayEvents.MatchWinnerAnnounced.UnRegister(OnMatchWinnerAnnounced);
    }

    protected override void OnContainerEnable()
    {
        base.OnContainerEnable();
        Invoke(nameof(DisableInternal), m_WaitBeforeMenuTransition);
    }

    private void DisableInternal()
    {
        ChangeMenuState(MenuName.GameOverMenu);
    }

    private void OnMatchWinnerAnnounced(int networkID,bool isWinner)
    {
        m_MatchCompleteTitleText.text = isWinner ? "Winner!!" : "Match Completed";
        m_MatchCompleteText.text = isWinner ? "Winner!!, You Won The Game" : "Sorry you did not win this game";
    }
    
    private void SetupScores( List<KeyValuePair<int, int>> scores)
    {
        for (int i = 0; i < scores.Count(); i++)
        {
            SetScoreOnWidget(scores[i], m_ScoreWidgets[i]);
        }
    }

    private void SetScoreOnWidget(KeyValuePair<int, int> scorePair, ScoreWidget widget)
    {
        string name = Dependencies.PlayersContainer.GetPlayerName(scorePair.Key);
        widget.SetScore($"{name} : {scorePair.Value} pts");
    }

}
