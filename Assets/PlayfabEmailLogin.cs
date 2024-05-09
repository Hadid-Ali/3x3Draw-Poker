using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using PlayFab;
using PlayFab.ClientModels;
using LoginResult = PlayFab.ClientModels.LoginResult;
public class PlayfabEmailLogin : MonoBehaviour
{

    private void ResgisterUser(string username, string user_Email, string user_Password)
    {
        var ResgisterUserRequest = new RegisterPlayFabUserRequest()
        {
            DisplayName = username,
            Email = user_Email,
            Password = user_Password,
            RequireBothUsernameAndEmail = false
        };
        PlayFabClientAPI.RegisterPlayFabUser(ResgisterUserRequest, result =>
        {
            OnRegisterSuccess(result);
            AddOrUpdateContactEmail(result.PlayFabId, user_Email);
        }, OnloginFailed);
    }

    private void OnEmailRecoveryEvent(string user_Email)
    {
        var emailrecoveryreq = new SendAccountRecoveryEmailRequest
        {
            Email = user_Email ,
            TitleId = "EC5BB"
        };
        PlayFabClientAPI.SendAccountRecoveryEmail(emailrecoveryreq, result =>
        {
            Debug.LogError("Recover Email Sent");

            
        }, OnloginFailed);

        
    }


    private void OnEmailLogin(string User_email, string User_pass)
    {
        //var LinkGameCenter = new LinkGameCenterAccountRequest
        //{

        //};
        //PlayFabClientAPI.LinkGameCenterAccount(LinkGameCenter,OnLinkSucess,OnloginFailed);
        var EmailLoginRequst = new LoginWithEmailAddressRequest
        {
            Email = User_email,
            Password = User_pass
        };
        PlayFabClientAPI.LoginWithEmailAddress(EmailLoginRequst, result =>
        {
            OnLoginSucess(result);
        }, OnregisterFail);
    }

    //private void OnLinkSucess(LinkGameCenterAccountResult result)
    //{
    //   GameEvents.MenuEvents.LoginAtMenuEvent.Raise(result.Request.AuthenticationContext.);
    //   GameEvents.MenuEvents.EmailLoginSuccessEvent.Raise();

    //}
    void AddOrUpdateContactEmail(string playFabId, string emailAddress)
    {
        var request = new AddOrUpdateContactEmailRequest
        {
            EmailAddress = emailAddress
        };
        PlayFabClientAPI.AddOrUpdateContactEmail(request, result =>
        {
            Debug.LogError("The player's account has been updated with a contact email");
        }, OnloginFailed);
    }
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

    private void OnRegisterSuccess(RegisterPlayFabUserResult result)
    {
        GameEvents.MenuEvents.LoginAtMenuEvent.Raise(result.PlayFabId);
        GameEvents.MenuEvents.RegisterSuccessEvent.Raise();

    }

    private void OnregisterFail(PlayFabError error)
    {
        Debug.LogError(error);
        GameEvents.MenuEvents.RegisterFailEvent.Raise();

    }

    private void OnEnable()
    {
        GameEvents.MenuEvents.EmailLoginAtMenuEvent.Register(OnEmailLogin);
        GameEvents.MenuEvents.RegisterAtMenuEvent.Register(ResgisterUser);
        GameEvents.MenuEvents.OnEmailRecoverEvent.Register(OnEmailRecoveryEvent);
    }

    private void OnDisable()
    {
        GameEvents.MenuEvents.EmailLoginAtMenuEvent.UnRegister(OnEmailLogin);
        GameEvents.MenuEvents.RegisterAtMenuEvent.UnRegister(ResgisterUser);
        GameEvents.MenuEvents.OnEmailRecoverEvent.UnRegister(OnEmailRecoveryEvent);
    }
}
