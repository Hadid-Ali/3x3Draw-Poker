using System;
using System.Security.Cryptography.X509Certificates;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class StoreButton : MonoBehaviour
{
    public StorePageName storeName;
    
    [SerializeField] private Button button;
    [SerializeField] private TextMeshProUGUI title;

#if UNITY_EDITOR
    private void OnValidate()
    {
        string val = storeName.ToString();        
        SetTitle(val);
    }
#endif
    


    private void Start()
    {
        button.onClick.AddListener(LaunchEvent);
    }

    private void OnDestroy()
    {
        button.onClick.RemoveListener(LaunchEvent);
    }

    private void LaunchEvent() => GameEvents.StoreEvents.OnStoreButtonClicked.Raise(storeName); 


    public void SetTitle(string val) => title.SetText(val);
    
    
}
