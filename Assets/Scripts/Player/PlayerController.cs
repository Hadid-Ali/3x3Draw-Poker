using System;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    protected string m_Name;

    public virtual int ID => int.MinValue;
    
    public virtual string Name
    {
        set => m_Name = value;
        get => m_Name;
    }

    protected virtual void Start()
    {
        
    }
}
