using System;
using System.Collections.Generic;
using System.Linq;
using DanielLochner.Assets.SimpleScrollSnap;
using UnityEngine;

public class StoreUIManager : MonoBehaviour
{
    [SerializeField] private StoreButton storeButtonPrefab;
    [SerializeField] private StoreItemUI itemPrefab;

    [SerializeField] private SimpleScrollSnap _scrollSnap;

    [SerializeField] private Transform storePagesContainer;  
    [SerializeField] private Transform itemsContainer;

    [SerializeField] private List<StoreButton> pooledStoreButtons = new(); 
    [SerializeField] private List<StoreItemUI> pooledStoreItemUI = new();

    private StoreButton _currentSelectedStoreButton;
    private StoreItemUI _currentSelectedItemButton;
    
    private void Awake()
    {
         GameEvents.StoreEvents.OnDisplayStorePage.Register(OnDisplayStorePage);
         GameEvents.StoreEvents.OnStoreInitialize.Register(OnInitializeStore);
         
         GameEvents.StoreEvents.OnStoreItemSelected.Register(OnStoreItemSelected);
    }
    private void OnDestroy()
    {
        GameEvents.StoreEvents.OnDisplayStorePage.UnRegister(OnDisplayStorePage);
        GameEvents.StoreEvents.OnStoreInitialize.UnRegister(OnInitializeStore);
        GameEvents.StoreEvents.OnStoreItemSelected.UnRegister(OnStoreItemSelected);
    }

    private void OnStoreItemSelected(ItemName obj)
    {
        StoreItemUI itemToSelect = pooledStoreItemUI.Find(item => item.itemName == obj);

        if (itemToSelect == null) return;
        
        if(_currentSelectedItemButton != null)
            _currentSelectedItemButton.OnItemUnSelected();
            
        _currentSelectedItemButton = itemToSelect;
        _currentSelectedItemButton.OnItemSelected();
    }

    private void OnInitializeStore(List<StorePageName> obj)
    {
        if (pooledStoreButtons.Count >= obj.Count)
        {
            SetUpStoreButtons(obj);
        }
        else
        {
            int numToAdd = obj.Count - pooledStoreButtons.Count;
            for (int i = 0; i < numToAdd; i++)
            {
                StoreButton button =   Instantiate(storeButtonPrefab, storePagesContainer);
                pooledStoreButtons.Add(button);
            }
            
            SetUpStoreButtons(obj);
        }
    }
    private void SetUpStoreButtons(List<StorePageName> obj)
    {
        
        for (int i = 0; i < pooledStoreButtons.Count; i++)
        {
            if (i >= obj.Count)
            {
                pooledStoreButtons[i].gameObject.SetActive(false);
                continue;
            }
            pooledStoreButtons[i].gameObject.SetActive(true);
            pooledStoreButtons[i].storeName = obj[i];
            pooledStoreButtons[i].SetTitle(obj[i].ToString());
        }
    }
    private void SetupStorePAge(StorePageSO obj)
    {
        for (int i = 0; i < pooledStoreItemUI.Count; i++)
        {
            if (i >= obj.items.Count)
            {
                pooledStoreItemUI[i].gameObject.SetActive(false);
                continue;
            }
            pooledStoreItemUI[i].gameObject.SetActive(true);
            pooledStoreItemUI[i].InitializeItem(obj.items[i].property); 
        }

        switch (obj.pageName)
        {
            case StorePageName.Characters:
                OnStoreItemSelected(GameData.RuntimeData.SELECTED_CHARACTER);
                break;
            case StorePageName.CardBacks:
                OnStoreItemSelected(GameData.RuntimeData.SELECTED_CARD_BACK);
                break;
        }
    }
    private void OnDisplayStorePage(StorePageSO obj)
    {
        List<GameObject> objects = new();
        if (pooledStoreItemUI.Count >= obj.items.Count)
        {
            SetupStorePAge(obj);
        }
        else
        {
            int numToAdd = obj.items.Count - pooledStoreItemUI.Count;
            for (int i = 0; i < numToAdd; i++)
            {
                StoreItemUI item =  Instantiate(itemPrefab, itemsContainer);
                pooledStoreItemUI.Add(item);
                objects.Add(pooledStoreItemUI[i].gameObject);
            }

            if (objects.Any())
                _scrollSnap.AddItems(objects);
            
            SetupStorePAge(obj);
        }
    }

}
