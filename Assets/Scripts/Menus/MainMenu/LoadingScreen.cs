using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityAtoms.BaseAtoms;
using UnityEngine;

public class LoadingScreen : MainMenuBase
{
    [SerializeField] private StringEvent m_LobbyStatusEvent;
    [SerializeField] private TextMeshProUGUI m_LobbyStatusText;

    private void OnEnable()
    {
        m_LobbyStatusEvent.Register(UpdateLobbyStatus);
    }

    private void OnDisable()
    {
        m_LobbyStatusEvent.Unregister(UpdateLobbyStatus);
    }

    private void UpdateLobbyStatus(string status)
    {
        m_LobbyStatusText.text = status;
    }
}
