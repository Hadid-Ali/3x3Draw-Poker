using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using UnityEngine;

public class NetworkGameplayScoreHandler : MonoBehaviour
{
    [SerializeField] private NetworkGameplayManager m_NetworkGameplayHandler;
    
    private Dictionary<int,int> m_PlayerScoreObjects = new();
    private GameEvent<int, int, int> m_OnPlayerWin = new();

    private int m_RecievedScores = 0;
    
    private void OnEnable()
    {
        GameEvents.GameplayEvents.RoundCompleted.Register(OnRoundCompleted);
        GameEvents.GameFlowEvents.RoundStart.Register(OnRoundStart);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.RoundCompleted.UnRegister(OnRoundCompleted);
        GameEvents.GameFlowEvents.RoundStart.UnRegister(OnRoundStart);
    }

    public void Initialize(Action<int, int, int> onPlayerWin)
    {
        m_OnPlayerWin.Register(onPlayerWin);
    }

    private void OnRoundStart()
    {
        m_RecievedScores = 0;
    }

    public int GetUserScore(int playerID) => m_PlayerScoreObjects[playerID];

    public void SyncNetworkScoreObjectOverNetwork()
    {
        Debug.LogError($"Score {GameData.RuntimeData.TOTAL_SCORE}");
        
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayHandler.NetworkViewComponent,nameof(SyncNetworkPlayerScoreReceived_RPC),RpcTarget.All,new object[]
        {
            Dependencies.PlayersContainer.GetLocalPlayerNetworkID(),
            GameData.RuntimeData.TOTAL_SCORE
        });
    }

    [PunRPC]
    public void SyncNetworkPlayerScoreReceived_RPC(int photonViewID, int score)
    {
        int localID = Dependencies.PlayersContainer.GetPlayerLocalID(photonViewID);
        m_PlayerScoreObjects[photonViewID] = score;

        Debug.LogError($"Score {score} ID {localID}");
        GameEvents.GameplayEvents.PlayerScoreReceived.Raise(score, localID);

        m_RecievedScores++;
        Debug.LogError($"Received Scores Count {m_RecievedScores}");

        if (PhotonNetwork.IsMasterClient && m_RecievedScores >= GameData.SessionData.CurrentRoomPlayersCount)
            CheckForWinner();
    }

    //TODO: Implement Tie Breaker
    private void CheckForWinner()
    {
        Debug.LogError("Checking For Winner");
        
        IOrderedEnumerable<KeyValuePair<int, int>> scoresOrderedByDescending = m_PlayerScoreObjects.OrderByDescending(pair => pair.Value);
        IEnumerable<KeyValuePair<int, int>> entries = m_PlayerScoreObjects.Where(pair => pair.Value >= GameData.MetaData.TotalScoreToWin);
        
        List<KeyValuePair<int, int>> keyValuePairs = entries.ToList();

        if (!keyValuePairs.Any())
            return;

        keyValuePairs = scoresOrderedByDescending.ToList();
        
        int highestScore = keyValuePairs.FirstOrDefault().Value;
        List<KeyValuePair<int, int>> highestKVPs = keyValuePairs.FindAll(pair => pair.Value == highestScore);

        if (highestKVPs.Count > 1)
        {
            return;
        }

        int thirdID = keyValuePairs.Count > 2 ? keyValuePairs[2].Key : GameData.MetaData.NullID;
        m_OnPlayerWin.Raise(highestKVPs.First().Key, keyValuePairs[1].Key, thirdID);
        
        DispatchSortedScores();
    }

    private void OnRoundCompleted()
    {
        SyncNetworkScoreObjectOverNetwork();
    }

    private void DispatchSortedScores()
    {
        List<KeyValuePair<int, int>> sortedScores = m_PlayerScoreObjects.ToList();
        sortedScores.OrderByDescending(pair => pair.Value);
        
        GameEvents.GameplayUIEvents.DispatchScores.Raise(sortedScores);
    }
}
