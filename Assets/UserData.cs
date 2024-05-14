using PlayFab.ClientModels;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class UserData : MonoBehaviour
{
   private void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }


     GetUserData m_getuserData = new();
     UpdateUserData m_UpdateUserData = new();
    public static Dictionary<string, UserDataRecord> MyUserData;
  
    private void OnEnable()
    {
        GameEvents.MenuEvents.UpdateUserData.Register(m_UpdateUserData.SetUserData);
        GameEvents.MenuEvents.GetUserData.Register(m_getuserData. GetData);

    }
    private void OnDisable()
    {
        GameEvents.MenuEvents.UpdateUserData.UnRegister(m_UpdateUserData.SetUserData);
        GameEvents.MenuEvents.GetUserData.UnRegister(m_getuserData.GetData);

    }
}
