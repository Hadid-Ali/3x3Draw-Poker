using Photon.Pun;
using UnityEngine;


public class NetworkGameplayBotsManager : NetworkGameplayManager
{
    [SerializeField] private NetworkBotCardsHandler cardsHandler;

    public override void Awake()
    {
        base.Awake();
        isBot = true;
        
    }
    protected override void OnNetworkSubmitRequest(NetworkDataObject networkDataObject)
    {
        string jsonData = NetworkDataObject.Serialize(networkDataObject);

        NetworkManager.NetworkUtilities.RaiseRPC(m_NetworkGameplayManagerView, nameof(OnNetworkSubmitRequest_RPC),
            RpcTarget.All, new object[] { jsonData });
    }
    


    
}
