using System;
using UnityEngine;

public class NetworkMatchStartRules : MonoBehaviour
{
    [SerializeField] private MatchRule[] rules;

    //Todo :  Implement potential rules in future
    
    // [ContextMenu("Setup")]
    // private void SetupRules()
    // {
    //     for (int i = 0; i < rules.Length; i++)
    //     {
    //         rules[i].joinedPlayersCount = i+1;
    //     }
    // }

    [Serializable]
    public class MatchRule
    {
        //public int joinedPlayersCount;
          
        public int numBots;    
        //public int deckSize; 
    }

    public  int GetBotCount(int playerCount)
    {
        return rules[playerCount - 1].numBots;
    }
    
    

}
