using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ResultHand : MonoBehaviour
{
    [Header("Refs")]
    
    [SerializeField] private ResultDeck m_CardsDeck;
    
    [SerializeField] private GameObject m_HandObjectContainer;
    [SerializeField] private GameObject m_LoserHandOverlay;
    [SerializeField] private GameObject m_WinnerNameOverlay;
    
    [Header("Texts")]
    
    [SerializeField] private TextMeshProUGUI m_NameText;
    [SerializeField] private TextMeshProUGUI m_ScoreText;


    private void SetVisibilityStatus(bool status)
    {
        m_HandObjectContainer.SetActive(status);
    }

    private void SetLoserOverlayStatus(bool status)
    {
        m_LoserHandOverlay.SetActive(status);
    }

    private void SetWinnerNameOverlayStatus(bool status)
    {
        m_WinnerNameOverlay.SetActive(status);
    }
}
