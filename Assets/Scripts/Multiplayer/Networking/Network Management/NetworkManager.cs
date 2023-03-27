using System;
using System.Collections;
using System.Collections.Generic;
using Photon.Pun;
using UnityAtoms.BaseAtoms;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NetworkManager : MonobehaviourSingleton<NetworkManager>
{
    [SerializeField] private StringEvent m_NetworkStatusEvent;
    [SerializeField] private NetworkSceneManager m_NetworkSceneManager;

    [field: SerializeField] public RegionsRegistry RegionsRegistry { get; private set; }
    
    public void LoadGameplay()
    {
        m_NetworkSceneManager.LoadGameplayScene(1f);
    }

    public void SetStatus(string status)
    {
        if (m_NetworkStatusEvent != null)
            m_NetworkStatusEvent.Raise(status);
    }
    
    public class NetworkUtilities
    {
        public static void RaiseRPC(PhotonView view,string methodName,RpcTarget rpcTarget,object[] RPC_Params)
        {
            view.RPC(methodName, rpcTarget, RPC_Params);
        }   
    }
}
