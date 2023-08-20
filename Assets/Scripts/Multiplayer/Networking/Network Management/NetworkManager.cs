using UnityAtoms.BaseAtoms;
using UnityEngine;

public partial class NetworkManager : MonobehaviourSingleton<NetworkManager>
{
    [SerializeField] private StringEvent m_NetworkStatusEvent;
    [SerializeField] private NetworkSceneManager m_NetworkSceneManager;

    [field: SerializeField] public RegionsRegistry RegionsRegistry { get; private set; }
    
    public void LoadGameplay()
    {
        m_NetworkSceneManager.LoadGameplayScene(1f);
    }

    public void SetStatus(string status)
    {
        if (m_NetworkStatusEvent != null)
            m_NetworkStatusEvent.Raise(status);
    }
}
