using System.Collections.Generic;
using UnityEngine;

public class StoreManager : MonoBehaviour
{
    private StorePageName _currentSelectedStore;
    [SerializeField] private ItemName _currentSelectedItem;
    
    [SerializeField] private List<StorePageName> storeNames = new();
    [SerializeField] private List<StorePageSO> storePages = new();

#if UNITY_EDITOR
    private void OnValidate()
    {
        storeNames.Clear();
        
        foreach (var v in storePages)
            storeNames.Add(v.pageName);
    }
#endif    
    

    private void Start()
    {
        GameEvents.StoreEvents.OnStoreButtonClicked.Register(OnStoreButtonClicked);
        GameEvents.StoreEvents.OnStoreItemSelected.Register(OnItemSelected);
        InitializeStore();
    }
    private void OnDestroy()
    {
        GameEvents.StoreEvents.OnStoreButtonClicked.UnRegister(OnStoreButtonClicked);
        GameEvents.StoreEvents.OnStoreItemSelected.UnRegister(OnItemSelected);
    }

    private void OnItemSelected(ItemName obj)
    {
        _currentSelectedItem = obj;

        if ((int)obj > 7)
            GameData.RuntimeData.SELECTED_CARD_BACK = obj;
        else
            GameData.RuntimeData.SELECTED_CHARACTER = obj;
    }

    private void InitializeStore()
    {
        GameEvents.StoreEvents.OnStoreInitialize.Raise(storeNames);
        OnStoreButtonClicked(storeNames[0]);
        GameEvents.StoreEvents.OnStoreButtonClicked.Raise(storeNames[0]); 
        
        print("Launch Phone");
    }



    private void OnStoreButtonClicked(StorePageName obj)
    {
        GameEvents.StoreEvents.OnDisplayStorePage.
            Raise(storePages.Find(x=> x.pageName == obj));

        _currentSelectedStore = obj;
    }
}
