using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public class MatchCompleteMenu : UIMenuBase
{
    [SerializeField] private List<ScoreWidget> m_ScoreWidgets = new();
    
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
        widget.SetScore($"name : {scorePair.Value} pts");
    }
}
