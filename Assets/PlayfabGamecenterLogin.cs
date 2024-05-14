using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using UnityEngine.SocialPlatforms.GameCenter;

using PlayFab.ClientModels;
using LoginResult = PlayFab.ClientModels.LoginResult;
using static Online.GameCenterSignature;
using Online;
public class PlayfabGamecenterLogin : MonoBehaviour
{
    private void OnGamecenterLogin(string User_email,string User_pass)
    {
        //var LinkGameCenter = new LinkGameCenterAccountRequest
        //{

        //};
        //PlayFabClientAPI.LinkGameCenterAccount(LinkGameCenter,OnLinkSucess,OnloginFailed);
        var GameceterLoginRequst = new LoginWithGameCenterRequest
        {
          PlayerId=User_email,
          CreateAccount=true
        };
        GameEvents.MenuEvents.ShowfakeConnectingScreen.Raise();

        PlayFabClientAPI.LoginWithGameCenter(GameceterLoginRequst, OnLoginSucess, OnloginFailed);
        Debug.LogError("Gamecenter login");
       

    }

    //private void OnLinkSucess(LinkGameCenterAccountResult result)
    //{
    //   GameEvents.MenuEvents.LoginAtMenuEvent.Raise(result.Request.AuthenticationContext.);
    //   GameEvents.MenuEvents.EmailLoginSuccessEvent.Raise();

    //}
    private void OnLoginSucess(LoginResult result)
    {
        GameEvents.MenuEvents.LoginAtMenuEvent.Raise(result.PlayFabId);
        GameEvents.MenuEvents.EmailLoginSuccessEvent.Raise();

    }

    private void OnloginFailed(PlayFabError error)
    {
        Debug.LogError(error);
        GameEvents.MenuEvents.EmailLoginFailEvent.Raise();

    }
   

    private void OnEnable()
    {
        GameEvents.MenuEvents.GamecenterLoginAtMenuEvent.Register(OnGamecenterLogin);
    }

    private void OnDisable()
    {
        GameEvents.MenuEvents.GamecenterLoginAtMenuEvent.UnRegister(OnGamecenterLogin);
    }
}
