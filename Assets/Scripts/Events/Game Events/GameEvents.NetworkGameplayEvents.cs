using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static partial class GameEvents
{
    public static class NetworkGameplayEvents
    {
        public static GameEvent<NetworkDataObject> NetworkSubmitRequest = new();
        public static GameEvent<List<NetworkDataObject>> AllUserHandsReceived = new();
        public static GameEvent<CardData[]> UserHandReceivedEvent = new();
        public static GameEvent<List<NetworkDataObject>, List<PlayerScoreObject>> OnPlayerScoresReceived = new();
    }
}