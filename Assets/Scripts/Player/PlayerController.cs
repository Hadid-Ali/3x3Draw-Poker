using System;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public virtual bool IsLocalPlayer => true;
    public virtual int ID => int.MinValue;

    public int CharacterAvatarID
    {
        protected set;
        get;
    }

    public int LocalID
    {
        protected set;
        get;
    }
    
    public string Name
    {
        protected set;
        get;
    }

    protected virtual void Start()
    {
        
    }

    public virtual void AwardPlayerPoints(int reward)
    {
        
    }

    public virtual void SubmitCardData(string data)
    {
        
    }
}
