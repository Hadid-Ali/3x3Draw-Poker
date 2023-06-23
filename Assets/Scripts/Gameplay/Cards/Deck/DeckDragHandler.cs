using UnityEngine;
using UnityEngine.EventSystems;

public class DeckDragHandler : MonoBehaviour, IBeginDragHandler,IPointerDownHandler,IPointerUpHandler
{
    [SerializeField] private CardsDeckViewHandler m_ViewHandler;
    
    private bool m_Dragging = false;
    private int m_LastHoverDeck;

    private void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            m_Dragging = false;
            if (m_LastHoverDeck != -1)
                transform.SetSiblingIndex(m_LastHoverDeck);
        }
    }

    private void OnTriggerStay2D(Collider2D col)
    {
        if (m_Dragging)
        {
            if (col.gameObject.CompareTag("Deck"))
            {
                m_LastHoverDeck = col.transform.GetSiblingIndex();
            }
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        m_LastHoverDeck = -1;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        m_Dragging = true;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        m_ViewHandler.SetFocused(true);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        m_ViewHandler.SetFocused(false);
    }
}
