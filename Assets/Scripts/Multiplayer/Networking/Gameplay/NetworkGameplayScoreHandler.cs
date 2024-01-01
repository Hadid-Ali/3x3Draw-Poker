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
    private GameEvent<int> m_OnPlayerWin = new();
    
    private void OnEnable()
    {
        GameEvents.GameplayEvents.RoundCompleted.Register(OnRoundCompleted);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.RoundCompleted.UnRegister(OnRoundCompleted);
    }

    public void Initialize(Action<int> onPlayerWin)
    {
        m_OnPlayerWin.Register(onPlayerWin);
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

        CheckForWinner();
    }

    //TODO: Implement Tie Breaker
    private void CheckForWinner()
    {
        if (!PhotonNetwork.IsMasterClient)
            return;
        
        var entries = m_PlayerScoreObjects.Where(pair => pair.Value >= GameData.MetaData.TotalScoreToWin);
        List<KeyValuePair<int, int>> keyValuePairs = entries.ToList();

        if (!keyValuePairs.Any())
            return;

        keyValuePairs = new(keyValuePairs.OrderByDescending(pair => pair.Value));
        int highestScore = keyValuePairs.FirstOrDefault().Value;

        List<KeyValuePair<int, int>> highestKVPs = keyValuePairs.FindAll(pair => pair.Value == highestScore);

        if (highestKVPs.Count > 1)
        {
            return;
        }

        m_OnPlayerWin.Raise(highestKVPs.First().Key);
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
