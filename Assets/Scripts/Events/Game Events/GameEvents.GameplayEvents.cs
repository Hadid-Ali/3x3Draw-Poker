using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static partial class GameEvents
{
    public static class GameplayEvents
    {
        public static GameEvent<CardData,CardDataHolder> CardDragStartEvent = new();
        public static GameEvent CardDropEvent = new();
        
        public static GameEvent<CardData> CardReplacedEvent = new();
    }
}
