using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NetworkMatchStartHandler : MonoBehaviour
{
    private bool m_IsAutoStartRequestSent = false;
    private int m_MaxPlayers = 0;

    private int CurrentPlayersCount => PhotonNetwork.PlayerList.Length;

    public void SetMaxPlayersCount(int count)
    {
        m_MaxPlayers = count;
    }
    
    public void OnPlayerEnteredInRoom()
    {
        CheckForMinimumPlayersCount();
        CheckForMaximumPlayersCount();
    }

    private void CheckForMinimumPlayersCount()
    {
        if (m_IsAutoStartRequestSent)
            return;
        
        if (CurrentPlayersCount >= GameData.MetaData.MinimumRequiredPlayers &&
            PhotonNetwork.IsMasterClient)
        {
            GameEvents.TimerEvents.ExecuteActionRequest.Raise(GameData.MetaData.WaitBeforeAutomaticMatchStart, StartMatchInternal);
            m_IsAutoStartRequestSent = true;
        }
    }

    private void CheckForMaximumPlayersCount()
    {
        if (CurrentPlayersCount >= m_MaxPlayers && PhotonNetwork.IsMasterClient)
        {
            TerminateAutoMatchStartRequest();
            StartMatchInternal();
        }
    }

    public void OnPlayerLeftRoom()
    {
        if (CurrentPlayersCount < GameData.MetaData.MinimumRequiredPlayers && PhotonNetwork.IsMasterClient)
            TerminateAutoMatchStartRequest();
    }

    private void TerminateAutoMatchStartRequest()
    {
        GameEvents.TimerEvents.CancelActionRequest.Raise();
        m_IsAutoStartRequestSent = false;
    }

    private void StartMatchInternal()
    {
        GameData.SessionData.CurrentRoomPlayersCount = CurrentPlayersCount;
        GameEvents.NetworkEvents.PlayersJoined.Raise();
        PhotonNetwork.CurrentRoom.IsOpen = false;
    }
}
