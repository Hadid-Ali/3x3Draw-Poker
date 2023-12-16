using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NetworkGameplayScoreHandler : MonoBehaviour
{
    [SerializeField] private NetworkGameplayManager m_NetworkGameplayHandler;
    
    private List<NetworkPlayerScoreObject> m_PlayerScoreObjects = new();
    
    private void OnEnable()
    {
        GameEvents.GameplayEvents.RoundCompleted.Register(OnRoundCompleted);
    }

    private void OnDisable()
    {
        GameEvents.GameplayEvents.RoundCompleted.UnRegister(OnRoundCompleted);
    }

    private NetworkPlayerScoreObject GetPlayerScoreObject() => new()
    {
        PlayerID = Dependencies.PlayersContainer.GetLocalPlayerID(),
        TotalScore = GameData.RuntimeData.TOTAL_SCORE
    };
    
    private void OnRoundCompleted()
    {
        Debug.LogError("Setup Round Completed");
        SyncNetworkScoreObjectOverNetwork(GetPlayerScoreObject());
    }

    public int GetUserScore(int playerID) =>
        m_PlayerScoreObjects.Find(player => player.PlayerID == playerID).TotalScore;
    
    public void SyncNetworkScoreObjectOverNetwork(NetworkPlayerScoreObject playerScoreObject)
    {
        string data = NetworkPlayerScoreObject.Serialize(playerScoreObject);
        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayHandler.NetworkViewComponent,nameof(SyncNetworkPlayerScoreReceived_RPC),RpcTarget.All,new object[]
        {
            data
        });
    }

    [PunRPC]
    public void SyncNetworkPlayerScoreReceived_RPC(string scoreObjectString)
    {
        NetworkPlayerScoreObject scoreObject = NetworkPlayerScoreObject.DeSerialize(scoreObjectString);
        NetworkPlayerScoreObject currentObject = m_PlayerScoreObjects.Find(obj => obj.PlayerID == scoreObject.PlayerID);

        if (currentObject == null)
        {
            m_PlayerScoreObjects.Add(scoreObject);
        }
        else
        {
            currentObject.TotalScore = scoreObject.TotalScore;
        }
    }
}
