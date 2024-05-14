using PlayFab;
using PlayFab.ClientModels;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetUserData 
{
    public Dictionary<string, UserDataRecord> User_data;
    public void GetData(string myPlayFabId)
    {
        PlayFabClientAPI.GetUserData(new GetUserDataRequest()
        {
            PlayFabId = myPlayFabId,
            Keys = null
        }, result =>
        {
            if (result.Data != null)
            {

               UserData.MyUserData = result.Data;
            }

        }, (error) =>
        {
            Debug.LogError("Got error retrieving user data:");
            Debug.LogError(error.GenerateErrorReport());
        });
    }


    public string GetUSerDataValue(string key)
    {
        if (User_data != null || User_data.ContainsKey(key))
        {
            return User_data[key].Value;
        }
        else
            return null;
    }

  
}
