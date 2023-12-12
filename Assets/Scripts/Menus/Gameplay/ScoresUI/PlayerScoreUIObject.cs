using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerScoreUIObject : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI m_NameText;
    [SerializeField] private TextMeshProUGUI m_ScoreText;

    public void SetName(string text)
    {
        m_NameText.text = text;
    }

    public void SetScore(int score)
    {
        m_ScoreText.text = $"{score.ToString()}$";
    }
}
