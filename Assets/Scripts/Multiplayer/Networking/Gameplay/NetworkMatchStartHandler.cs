using UnityEngine;
using Photon.Pun;

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
        
        if (CurrentPlayersCount >= GameData.MetaData.MinimumRequiredPlayers)
        {
            GameEvents.TimerEvents.ExecuteActionRequest.Raise("Starting The Match",GameData.MetaData.WaitBeforeAutomaticMatchStart, StartMatchInternal);
            m_IsAutoStartRequestSent = true;
        }
    }

    private void CheckForMaximumPlayersCount()
    {
        if (CurrentPlayersCount >= m_MaxPlayers)
        {
            TerminateAutoMatchStartRequest();
            StartMatchInternal();
        }
    }

    public void OnPlayerLeftRoom()
    {
        if (CurrentPlayersCount < GameData.MetaData.MinimumRequiredPlayers)
            TerminateAutoMatchStartRequest();
    }

    private void TerminateAutoMatchStartRequest()
    {
        GameEvents.TimerEvents.CancelActionRequest.Raise();
        m_IsAutoStartRequestSent = false;
    }

    public void StartMatchInternal()
    {
        GameData.SessionData.CurrentRoomPlayersCount = CurrentPlayersCount;
        GameEvents.NetworkEvents.PlayersJoined.Raise();
        PhotonNetwork.CurrentRoom.IsOpen = false;
    }
}
