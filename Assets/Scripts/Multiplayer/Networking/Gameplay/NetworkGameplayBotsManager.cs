using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using UnityEditor;
using UnityEngine.Serialization;


public class NetworkGameplayBotsManager : NetworkGameplayManager
{
    [SerializeField] private NetworkBotCardsHandler cardsHandler;

    public static int BotID;
    public override void Awake()
    {
        base.Awake();
        isBot = true;
        
    }

    protected override void OnNetworkSubmitRequest(NetworkDataObject networkDataObject)
    {
        NetworkDataObject _Object =  new NetworkDataObject(cardsHandler.GetCards(), BotID);
        string jsonData = NetworkDataObject.Serialize(_Object);

        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(OnNetworkSubmitRequest_RPC),
            RpcTarget.All, new object[] { jsonData });
        
        print("Bot Evaluation working");
        print($"Bot ID is : {BotID}");
        
    }
}
