using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityAtoms.BaseAtoms;
using UnityEngine;

public class LoadingScreen : UIMenuBase
{
    [SerializeField] private TextMeshProUGUI m_LobbyStatusText;

    private void OnEnable()
    {
        GameEvents.MenuEvents.NetworkStatusUpdated.Register(UpdateLobbyStatus);
    }

    private void OnDisable()
    {
        GameEvents.MenuEvents.NetworkStatusUpdated.UnRegister(UpdateLobbyStatus);
    }

    private void UpdateLobbyStatus(string status)
    {
        m_LobbyStatusText.text = status;
    }
}
