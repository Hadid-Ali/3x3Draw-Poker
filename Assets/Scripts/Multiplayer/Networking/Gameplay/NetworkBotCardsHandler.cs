using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class NetworkBotCardsHandler : MonoBehaviour
{
    private static List<CardData> cards = new();
    [SerializeField] public List<CardData> cardsSerialize = new();
    [SerializeField] private NetworkGameplayManager _networkGameplayManager;

    private void Awake()
    {
        if (!_networkGameplayManager)
            _networkGameplayManager = GetComponent<NetworkGameplayManager>();
        
        //InitializeDeckForBot();
        GameEvents.NetworkGameplayEvents.UserHandReceivedEvent.Register(ReceiveHandData);
    }
    private void OnDestroy()
    {
        GameEvents.NetworkGameplayEvents.UserHandReceivedEvent.Register(ReceiveHandData);
    }

    private void ReceiveHandData(CardData[] obj, int ID)
    {
        if(ID != _networkGameplayManager.ID)
            return;
        
        cards.AddRange(obj);
        cardsSerialize.AddRange(cards);
        print($"Cards Added in bot {cards.Count}");
    }


    public void InitializeDeckForBot()
    {
        for (int i = 0; i < 15; i++)
        {
            int randomType = Random.Range(0, 4);
            int randomValue = Random.Range(0, 13);

            cards.Add(new CardData()
            {
                type = (CardType)randomType,
                value = (CardValue)randomValue
            });
        }
    }

    public static List<CardData> GetCards()
    {
        print($"Get Cards : {cards.Count}");
        return cards;
    }
}
