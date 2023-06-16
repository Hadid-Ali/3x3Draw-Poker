using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static partial class GameEvents
{
    public static class GameplayEvents
    {
        public static GameEvent<CardData, Card> CardDragStartEvent = new();
        public static GameEvent CardDropEvent = new();
        
        public static GameEvent<CardData> CardReplacedEvent = new();
        public static GameEvent<DeckName, HandType> CardDeckUpdated = new();

        public static GameEvent<NetworkDataObject> NetworkSubmitRequest = new();
    }
}
