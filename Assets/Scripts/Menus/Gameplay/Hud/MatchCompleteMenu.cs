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
    [SerializeField] private ButtonWidget m_GoToMenuButton;

    private void Start()
    {
        m_GoToMenuButton.SubscribeAction(OnGoToMenuClick);
    }

    private void OnEnable()
    {
        GameEvents.GameplayUIEvents.DispatchScores.Register(SetupScores);
    }

    private void OnDisable()
    {
        GameEvents.GameplayUIEvents.DispatchScores.UnRegister(SetupScores);
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

    private void OnGoToMenuClick()
    {
        SceneManager.LoadScene("GameMenu");
    }
}
