using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class DeckDragHandler : MonoBehaviour, IPointerEnterHandler, IDropHandler, IPointerExitHandler,IBeginDragHandler,IDragHandler
{
    private bool m_Dragging = false;
    private int m_LastHoverDeck;
    
    // IEnumerator Start()
    // {
    //     int i = transform.childCount;
    //     yield return new WaitForSeconds(3f);
    //     Transform g = transform.GetChild(0);
    //     
    //     g.SetSiblingIndex(2);
    // }

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
            print("ni ho rha kia");
            if (col.gameObject.CompareTag("Deck"))
            {
                print(col.gameObject);
                m_LastHoverDeck = col.transform.GetSiblingIndex();
            }
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        m_LastHoverDeck = -1;
    }

    private void OnMouseUp()
    {
        
    }

    public void OnDrag(PointerEventData eventData)
    {
        throw new NotImplementedException();
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        throw new NotImplementedException();
    }

    public void OnDrop(PointerEventData eventData)
    {
        throw new NotImplementedException();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        throw new NotImplementedException();
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        m_Dragging = true; 
    }
}
