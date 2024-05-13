using Facebook.Unity;
using PlayFab;
using PlayFab.ClientModels;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.NetworkInformation;
using UnityEngine;
using LoginResult = PlayFab.ClientModels.LoginResult;
public class FacebookLogin : MonoBehaviour
{
    private string _message;



    public void LoginWithFacebbok()
    {
        SetMessage("Initializing Facebook..."); // logs the given message and displays it on the screen using OnGUI method
        FB.Init(OnFacebookInitialized);
        //var linkFBReq = new LinkFacebookAccountRequest
        //{

        //};
        //PlayFabClientAPI.LinkFacebookAccount(linkFBReq, OnLinkFBSuccess, OnlinkFBFail);

    }
    //private void OnLinkFBSuccess(LinkFacebookAccountResult result)
    //{
    //    Debug.LogError(result);
    //}

    //private void OnlinkFBFail(PlayFabError error)
    //{ Debug.LogError(error); }
    private void OnFacebookInitialized()
    {
        SetMessage("Logging into Facebook...");

        // Once Facebook SDK is initialized, if we are logged in, we log out to demonstrate the entire authentication cycle.
        if (FB.IsLoggedIn)
            FB.LogOut();

        FB.LogInWithReadPermissions(null, OnFacebookLoggedIn);
        // We invoke basic login procedure and pass in the callback to process the result
    }

    private void OnFacebookLoggedIn(ILoginResult result)
    {
        // If result has no errors, it means we have authenticated in Facebook successfully
        if (result == null || string.IsNullOrEmpty(result.Error))
        {
            SetMessage("Facebook Auth Complete! Access Token: " + AccessToken.CurrentAccessToken.TokenString + "\nLogging into PlayFab...");

            /*
             * We proceed with making a call to PlayFab API. We pass in current Facebook AccessToken and let it create
             * and account using CreateAccount flag set to true. We also pass the callback for Success and Failure results
             */
            PlayFabClientAPI.LoginWithFacebook(new LoginWithFacebookRequest { CreateAccount = true, AccessToken = AccessToken.CurrentAccessToken.TokenString },
                OnPlayfabFacebookAuthComplete, OnPlayfabFacebookAuthFailed);

        }
        else
        {
            // If Facebook authentication failed, we stop the cycle with the message
            SetMessage("Facebook Auth Failed: " + result.Error + "\n" + result.RawResult, true);
        }
    }

    // When processing both results, we just set the message, explaining what's going on.
    private void OnPlayfabFacebookAuthComplete(LoginResult result)
    {
        SetMessage("PlayFab Facebook Auth Complete. Session ticket: " + result.PlayFabId);
        GameEvents.MenuEvents.LoginAtMenuEvent.Raise(result.PlayFabId);
        GameEvents.MenuEvents.FacebookLoginSuccessEvent.Raise();

    }

    private void OnPlayfabFacebookAuthFailed(PlayFabError error)
    {
        SetMessage("PlayFab Facebook Auth Failed: " + error.GenerateErrorReport(), true);
    }

    private void SetMessage(string message, bool error = false)
    {
        _message = message;
        if (error)
            Debug.LogError(_message);
        else
            Debug.LogError(_message);
    }

    private void OnEnable()
    {
        GameEvents.MenuEvents.FacebbokLoginAtMenuEvent.Register(LoginWithFacebbok);

    }

    private void OnDisable()
    {
        GameEvents.MenuEvents.FacebbokLoginAtMenuEvent.UnRegister(LoginWithFacebbok);

    }
}
