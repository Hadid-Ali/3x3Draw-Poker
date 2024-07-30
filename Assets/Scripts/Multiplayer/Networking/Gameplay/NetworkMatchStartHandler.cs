using System;
using UnityEngine;
using Photon.Pun;

public class NetworkMatchStartHandler : MonoBehaviour
{
    [SerializeField] private PhotonView _view;
    
    private bool m_IsAutoStartRequestSent = false;

    private string _matchStartTitle = "Starting The Match";

    private int CurrentPlayersCount => PhotonNetwork.PlayerList.Length;

    private void Awake()
    {
        GameEvents.NetworkEvents.PlayerJoinedRoom.Register(OnPlayerEnteredInRoom);
    }

    private void OnDestroy()
    {
        GameEvents.NetworkEvents.PlayerJoinedRoom.Register(OnPlayerEnteredInRoom);
    }

    public void OnPlayerEnteredInRoom()
    {
     //   if(!PhotonNetwork.IsMasterClient)
       //     return;
        
        CheckForMinimumPlayersCount();
        CheckForMaximumPlayersCount();
    }

    private void CheckForMinimumPlayersCount()
    {
        if (m_IsAutoStartRequestSent)
            return;
        
        if (CurrentPlayersCount >= GameData.MetaData.MinimumRequiredPlayers)
        { 
            GameEvents.TimerEvents.ExecuteActionRequest.Raise(new TimerDataObject()
            {
                Title = _matchStartTitle,
                TimeDuration = GameData.MetaData.WaitBeforeAutomaticMatchStart,
                ActionToExecute =  StartMatchInternal,
                TickTimeEvent = TimerTick,
                IsNetworkGlobal = true
            });
            m_IsAutoStartRequestSent = true;
        }
    }

    private void CheckForMaximumPlayersCount()
    {
        if (CurrentPlayersCount >= GameData.MetaData.MaximumPlayers)
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

    public void TimerTick(string time)
    {
        _view.RPC(nameof(GlobalTimerTick), RpcTarget.All, time);
    }

    [PunRPC]
    public void GlobalTimerTick(string time)
    {
        print($"time : {time}");
        GameEvents.NetworkEvents.MatchStartTimer.Raise(time);
    }
    
    public void StartMatchInternal()
    {
        if (PhotonNetwork.IsMasterClient)
            PhotonNetwork.CurrentRoom.IsOpen = false;
        
        m_IsAutoStartRequestSent = false;
        
        _view.RPC(nameof(LoadScene), RpcTarget.All);
    }

    [PunRPC]
    private void LoadScene()
    {
        NetworkManager.Instance.LoadGameplay("PokerGame");
    }
}
