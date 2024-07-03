using UnityEngine;

public class MainMenu : UIMenuBase
{
    [SerializeField] private ButtonWidget m_PlayButton;
    [SerializeField] private ButtonWidget m_PlayOfflineButton;
    [SerializeField] private ButtonWidget m_SettingsButton;

    private void Start()
    {
        m_PlayButton.SubscribeAction(LoginBtnEvent);
        m_SettingsButton.SubscribeAction(OnSettingsButton);
        m_PlayOfflineButton.SubscribeAction(StartOffline);
    }

    private void StartOffline()
    {
        GameEvents.NetworkEvents.StartOfflineMatch.Raise();
    }

    private void OnSettingsButton()
    {
        ChangeMenuState(MenuName.SettingsMenu);
    }
    
    public void LoginBtnEvent()
    {
        ChangeMenuState(MenuName.LoginScreen);
    }
}