using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingsMenu : UIMenuBase
{
    [SerializeField] private VideoControllerUIHandler m_HowToPlayVideoObject;
    
    [SerializeField] private ButtonWidget m_PrivacyPolicyButton;
    [SerializeField] private ButtonWidget m_TermsOfUsageButton;
    
    [SerializeField] private ButtonWidget m_FindOutMoreButton;
    [SerializeField] private ButtonWidget m_HowToPlayButton;
    
    [SerializeField] private ButtonWidget m_BackButton;
    [SerializeField] private ButtonWidget m_CloseButton;

    [SerializeField] private ButtonWidget m_SoundButton;
    [SerializeField] private Image soundImage;

    [SerializeField] private Sprite soundOn;
    [SerializeField] private Sprite soundOff;
    

    private void Start()
    {
        m_PrivacyPolicyButton.SubscribeAction(OnPrivacyPolicyButton);
        m_TermsOfUsageButton.SubscribeAction(OnTermsOfUsageButton);
        
        m_BackButton.SubscribeAction(OnBackButton);
        m_CloseButton.SubscribeAction(OnCloseButton);
        
        m_FindOutMoreButton.SubscribeAction(FindOutMore);
        m_HowToPlayButton.SubscribeAction(StartHowToPlayVideo);
        
        m_HowToPlayVideoObject.Initialize();
        m_SoundButton.SubscribeAction(SetMute);
    }

    private void OnEnable()
    {
        UpdateSoundImage();
    }

    private void UpdateSoundImage()
    {
        int currentStatus = PlayerPrefs.GetInt(GameData.MetaData.MuteString,1);
        soundImage.sprite = currentStatus == 1 ? soundOn : soundOff;
    }

    private void SetMute()
    {
        int currentStatus = PlayerPrefs.GetInt(GameData.MetaData.MuteString,1); 
        
        PlayerPrefs.SetInt(GameData.MetaData.MuteString, currentStatus == 1 ? 0 : 1);

        AudioListener.pause = currentStatus == 1;
        
        UpdateSoundImage();
    }

    private void StartHowToPlayVideo()
    {
        m_HowToPlayVideoObject.Show();
    }
    
    private void FindOutMore()
    {
        Application.OpenURL(GameData.MetaData.AppWebsiteLink);
    }

    private void OnPrivacyPolicyButton()
    {
        Application.OpenURL(GameData.MetaData.PrivacyPolicyLink);
    }

    private void OnTermsOfUsageButton()
    {
        Application.OpenURL(GameData.MetaData.TermsOfUsageLink);
    }
    
    private void OnBackButton()
    {
        ChangeMenuState(MenuName.MainMenu);
    }

    private void OnCloseButton()
    {
        OnBackButton();
    }
}
