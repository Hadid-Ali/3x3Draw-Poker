using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CreateAssetMenu(fileName = "StorePageSO", menuName = "ScriptableObject/Store/StorePageSO")]
public class StorePageSO : ScriptableObject
{
    public StorePageName pageName;
    public List<ItemSO> items = new List<ItemSO>();
    
    #region Utility

    [ContextMenu("Set ItemName as FileName")]
    private void SetItemNameAsFileName()
    {
        SetFileName(pageName.ToString());
    }

    private void SetFileName(string val)
    {
        string assetPath =  AssetDatabase.GetAssetPath(this.GetInstanceID());
        AssetDatabase.RenameAsset(assetPath, val);
        AssetDatabase.SaveAssets();
    }
    #endregion
}
