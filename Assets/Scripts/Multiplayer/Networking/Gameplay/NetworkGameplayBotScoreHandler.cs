using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityEngine;

public class NetworkGameplayBotScoreHandler : NetworkGameplayScoreHandler
{
    [SerializeField] private NetworkGameplayManager MasterClientManager;
    
    
    //So this can be called through master photon view
    //For some reason its not broadcasting RPC to class
    public override void SyncNetworkScoreObjectOverNetwork()
    {
        int _Totalscore = m_NetworkGameplayHandler.isBot
            ? GameData.RuntimeData.BOT_TOTAL_SCORE
            : GameData.RuntimeData.TOTAL_SCORE;
        int _id = m_NetworkGameplayHandler.isBot
            ? Dependencies.PlayersContainer.GetBotID()
            : Dependencies.PlayersContainer.GetLocalPlayerNetworkID();


        NetworkManager.NetworkUtilities.RaiseRPC(MasterClientManager.NetworkViewComponent,
            nameof(SyncNetworkPlayerScoreReceived_RPC), RpcTarget.All, new object[]
            {
                _id,
                _Totalscore
            });
    }
}
