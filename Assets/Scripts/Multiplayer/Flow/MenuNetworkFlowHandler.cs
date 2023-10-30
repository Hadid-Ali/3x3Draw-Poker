using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuNetworkFlowHandler : NetworkFlowHandler
{
    protected override void OnPlayersJoined()
    {
        NetworkManager.Instance.LoadGameplay();
    }
}
