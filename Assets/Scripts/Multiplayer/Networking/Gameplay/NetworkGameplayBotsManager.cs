using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Photon.Pun;
using UnityEditor;


public class NetworkGameplayBotsManager : NetworkGameplayManager
{
    public override void Awake()
    {
        base.Awake();
        isBot = true;
    }
}
