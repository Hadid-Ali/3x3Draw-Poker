using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NetworkGameplayScoreHandler : MonoBehaviour
{
    [SerializeField] private NetworkGameplayManager m_NetworkGameplayHandler;
    
    private Dictionary<int,int> m_PlayerScoreObjects = new();
    
    private void OnEnable()
    {
        GameEvents.GameplayEvents.RoundCompleted.Register(OnRoundCompleted);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.RoundCompleted.UnRegister(OnRoundCompleted);
    }

    private void OnRoundCompleted()
    {
        SyncNetworkScoreObjectOverNetwork();
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
    public void SyncNetworkPlayerScoreReceived_RPC(int photonViewID,int score)
    {
        int localID = Dependencies.PlayersContainer.GetPlayerLocalID(photonViewID);
        m_PlayerScoreObjects[photonViewID] = score;

        Debug.LogError($"Score {score} ID {localID}");
        GameEvents.GameplayEvents.PlayerScoreReceived.Raise(score, localID);
    }
}
