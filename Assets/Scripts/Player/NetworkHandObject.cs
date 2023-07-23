using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class NetworkHandObject : MonoBehaviour
{
    public CardData[] PlayerHand;

    public NetworkHandObject( CardData[]  cardsData)
    {
        PlayerHand = cardsData;
    }

    public static string Serialize(NetworkHandObject networkHandObject)
    {
        return JsonUtility.ToJson(networkHandObject);
    }

    public static NetworkHandObject DeSerialize(string dataString)
    {
        return JsonUtility.FromJson<NetworkHandObject>(dataString);
    }
}
