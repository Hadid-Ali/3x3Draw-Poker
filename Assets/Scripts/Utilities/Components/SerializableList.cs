using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SerializableList<T>
{
    public List<T> Contents;
    
    public SerializableList()
    {
        Contents = new();
    }
}
