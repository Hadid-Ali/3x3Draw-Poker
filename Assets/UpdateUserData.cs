using PlayFab;
using PlayFab.ClientModels;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class UpdateUserData 
{
   public void SetUserData(Dictionary<string, string> data,Action OnSuccess)
    {
        PlayFabClientAPI.UpdateUserData(new UpdateUserDataRequest()
        {
            Data = data
        },
        result =>OnSuccess(),
        error =>
        {
            Debug.LogError(error.GenerateErrorReport());
        });
    }


   
}
