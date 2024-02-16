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

    private void OnDestroy()
    {
        
    }
    
}
