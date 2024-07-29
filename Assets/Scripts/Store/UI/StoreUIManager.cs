using System;
using System.Collections.Generic;
using UnityEngine;

public class StoreUIManager : MonoBehaviour
{
    [SerializeField] private StoreButton storeButtonPrefab;
    [SerializeField] private StoreItemUI<ItemProperty> itemPrefab;

    [SerializeField] private Transform storePagesContainer;  
    [SerializeField] private Transform itemsContainer;

    [SerializeField] private List<StoreButton> pooledStoreButtons = new(); 
    [SerializeField] private List<StoreItemUI<ItemProperty>> pooledStoreItemUI = new(); 
    
    public List<StorePageSO> storePages = new();
    
    private void Start()
    {
         GameEvents.StoreEvents.OnDisplayStorePage.Register(OnDisplayStorePage);
         GameEvents.StoreEvents.OnStoreInitialize.Register(OnInitializeStore);
            
    }
    private void OnDestroy()
    {
        GameEvents.StoreEvents.OnDisplayStorePage.UnRegister(OnDisplayStorePage);
        GameEvents.StoreEvents.OnStoreInitialize.UnRegister(OnInitializeStore);
    }

    private void OnInitializeStore(List<StorePageName> obj)
    {
        if (pooledStoreButtons.Count >= obj.Count)
        {
                return;
        }

        int objectsToSpawn = pooledStoreButtons.Count - obj.Count;
        
        for (int i = 0; i < objectsToSpawn; i++)
        {
            StoreButton button = pooledStoreButtons[i];
            
            if(button == null) Instantiate(storeButtonPrefab, storePagesContainer);
            
            button.storeName = obj[i];
            button.SetTitle(obj[i].ToString());
            pooledStoreButtons.Add(button);
        }

    }
    

    private void OnDisplayStorePage(StorePageSO obj)
    {
        if (pooledStoreItemUI.Count >= obj.items.Count)
        {
            return;
        }
        
        for (int i = 0; i < obj.items.Count; i++)
        {
            StoreItemUI<ItemProperty> item = pooledStoreItemUI[i];
            
            if(item == null) Instantiate(itemPrefab, itemsContainer);
            
            item.InitializeItem(obj.items[i].property);
            pooledStoreItemUI.Add(item);
        }
    }

}
