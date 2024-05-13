using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityAtoms.BaseAtoms;
using UnityEngine;
using UnityEngine.UI;
//using UnityEngine.wsa;

public class PlayerLoginScreen : UIMenuBase
{
    [SerializeField] private TMP_InputField m_InputField;
    [SerializeField] private TMP_InputField Email_InputField;
    [SerializeField] private TMP_InputField Password_InputField;
    [SerializeField] private TMP_InputField GaemcenterEmail_InputField;
    [SerializeField] private TMP_InputField GamecenterPassword_InputField;

    [SerializeField] private Button m_LoginButton;
    [SerializeField] private GameObject m_EmailLoginScreen;
    [SerializeField] private GameObject m_GameCenterEmailLoginScreen;
    [SerializeField] private GameObject m_ConnectingScreen;

    private void Start()
    {
        m_InputField.onValueChanged.AddListener(OnFieldValueChange);
        m_LoginButton.onClick.AddListener(OnLoginBtnEvent);

        SetButtonInteractionStatus(false);

        OnFieldValueChange(string.Empty);
        m_InputField.characterLimit = GameData.MetaData.MaximumNameLength;
    }

    protected override void OnContainerEnable()
    {
        base.OnContainerEnable();
        CheckForPreviousLogin();
    }

    private void OnFieldValueChange(string value)
    {
        bool hasValidLenght = value.Length >= GameData.MetaData.MinimumNameLength;
        SetButtonInteractionStatus(!string.IsNullOrEmpty(value) && hasValidLenght);
    }

    private void CheckForPreviousLogin()
    {
        if (GameData.RuntimeData.IS_LOGGED_IN)
        {
            LoginInternal();
        }
    }

    public void ShowEmailLoginScreen()
    {
        m_EmailLoginScreen.SetActive(true);
        m_ConnectingScreen.SetActive(false);
    }

    public void ShowGameCenterEmailLoginScreen()
    {
        m_GameCenterEmailLoginScreen.SetActive(true);
    }
    public void OnLoginBtnEvent()
    {
        string userName = m_InputField.text;

        GameData.RuntimeData.USER_NAME = userName;
        GameData.RuntimeData.IS_LOGGED_IN = true;
        LoginInternal();
    }

    public void OnEmailLoginEvent()
    {
        GameEvents.MenuEvents.EmailLoginAtMenuEvent.Raise(Email_InputField.text, Password_InputField.text);
    }

    public void OnGamecenterLoginEvent()
    {
        GameEvents.MenuEvents.GamecenterLoginAtMenuEvent.Raise(GaemcenterEmail_InputField.text, GamecenterPassword_InputField.text);
    }

    public void OnRegisterEvent()
    {
        GameEvents.MenuEvents.RegisterAtMenuEvent.Raise(Email_InputField.text, Email_InputField.text, Password_InputField.text);
    }
    public void OnFacebookLoginEvent()
    {
        GameEvents.MenuEvents.FacebbokLoginAtMenuEvent.Raise();

    }
    public void Onrecoveremail()
    {
        GameEvents.MenuEvents.OnEmailRecoverEvent.Raise(Email_InputField.text);

    }

    private void ShowConnectionScreen()
    {
        ChangeMenuState(MenuName.ConnectionScreen);

    }
    private void LoginInternal()
    {
        Debug.LogError("login Enternal");
        GameEvents.MenuEvents.LoginAtMenuEvent.Raise(GameData.RuntimeData.USER_NAME);
        ChangeMenuState(MenuName.ConnectionScreen);
    }
    private void ShowConnectingScreen()
    {
        m_ConnectingScreen.SetActive(true);
    }

    private void SetButtonInteractionStatus(bool status)
    {
        m_LoginButton.interactable = status;
    }

    private void OnEnable()
    {
        GameEvents.MenuEvents.FacebookLoginFailEvent.Register(ShowEmailLoginScreen);
        GameEvents.MenuEvents.ShowfakeConnectingScreen.Register(ShowConnectingScreen);
        GameEvents.MenuEvents.EmailLoginFailEvent.Register(ShowEmailLoginScreen);
        GameEvents.MenuEvents.RegisterFailEvent.Register(ShowEmailLoginScreen);
        GameEvents.MenuEvents.FacebookLoginSuccessEvent.Register(ShowConnectionScreen);
        GameEvents.MenuEvents.EmailLoginSuccessEvent.Register(ShowConnectionScreen);
        GameEvents.MenuEvents.RegisterSuccessEvent.Register(ShowConnectionScreen);

    }

    private void OnDisable()
    {
        GameEvents.MenuEvents.EmailLoginFailEvent.UnRegister(ShowEmailLoginScreen);
        GameEvents.MenuEvents.FacebookLoginFailEvent.UnRegister(ShowEmailLoginScreen);
        GameEvents.MenuEvents.RegisterFailEvent.UnRegister(ShowEmailLoginScreen);
        GameEvents.MenuEvents.RegisterSuccessEvent.UnRegister(ShowConnectionScreen);
        GameEvents.MenuEvents.EmailLoginSuccessEvent.UnRegister(ShowConnectionScreen);
        GameEvents.MenuEvents.FacebookLoginSuccessEvent.UnRegister(ShowConnectionScreen);
        GameEvents.MenuEvents.ShowfakeConnectingScreen.UnRegister(ShowConnectingScreen);

    }
}
