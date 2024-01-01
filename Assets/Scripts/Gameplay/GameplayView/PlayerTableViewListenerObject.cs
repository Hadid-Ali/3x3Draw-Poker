using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTableViewListenerObject : PlayerViewListenerObject
{
    [SerializeField] private List<PlayerTablePosition> m_TablePositions = new();
    
    protected override void OnLocalPlayerJoined(PlayerViewDataObject viewDataObject)
    {
        PlayerTablePosition position =
            m_TablePositions.Find(player => player.TablePositionIndex == viewDataObject.LocalID);
        position.SetAvatarIndex(viewDataObject.AvatarID);
    }
}
