using System.Collections.Generic;
using UnityEngine;

public class PlayerUIViewListenerObject : PlayerViewListenerObject
{
    [SerializeField] private List<PlayerScoreUIObject> m_ScoreObjects = new();

    protected override void Awake()
    {
        base.Awake();
        GameEvents.GameplayEvents.PlayerScoreReceived.Register(OnPlayerScoreReceived);
    }

    protected override void OnDestroy()
    {
        base.OnDestroy();
        GameEvents.GameplayEvents.PlayerScoreReceived.UnRegister(OnPlayerScoreReceived);
    }

    private void OnPlayerScoreReceived(int score, int playerId)
    {
        PlayerScoreUIObject scoreObject = m_ScoreObjects.Find(obj => obj.PositionIndex == playerId);
        scoreObject.SetContainerStatus(true);
        scoreObject.SetScore(score);
    }
    
    protected override void OnLocalPlayerJoined(PlayerViewDataObject viewDataObject)
    {
        print($"Local player joined with id :  {viewDataObject.LocalID}");
        
        PlayerScoreUIObject scoreObject = m_ScoreObjects.Find(obj => obj.PositionIndex == viewDataObject.LocalID);
        scoreObject.SetContainerStatus(true);
        scoreObject.SetName(viewDataObject.Name);
        print( $"Name is {viewDataObject.Name}");

    }
}
