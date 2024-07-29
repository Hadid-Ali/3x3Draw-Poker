using System.Collections.Generic;
using UnityEngine;

public class StoreManager : MonoBehaviour
{
    private StorePageName _currentSelectedStore;
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
        InitializeStore();
    }

    private void InitializeStore()
    {
        GameEvents.StoreEvents.OnStoreInitialize.Raise(storeNames);
        OnStoreButtonClicked(storeNames[0]);
    }

    private void OnDestroy()
    {
        GameEvents.StoreEvents.OnStoreButtonClicked.UnRegister(OnStoreButtonClicked);
    }

    private void OnStoreButtonClicked(StorePageName obj)
    {
        GameEvents.StoreEvents.OnDisplayStorePage.
            Raise(storePages.Find(x=> x.pageName == obj));

        _currentSelectedStore = obj;
    }
}
