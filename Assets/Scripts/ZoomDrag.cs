using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ZoomDrag : MonoBehaviour, IDragHandler
{
    public Transform tranformToZoom;

    private Vector2 mousePosition = new Vector2();
    private Vector2 startPosition = new Vector2();
    private Vector2 differencePoint = new Vector2();


    bool canDrag = false;

    Vector3 position;

    float currentX;
    float currentY;

    private void Awake()
    {
        position = tranformToZoom.position;
        currentX = tranformToZoom.position.x;
        currentY = tranformToZoom.position.y;
    }

    private void OnEnable()
    {
        canDrag = true;

    }

    private void OnDisable()
    {
        canDrag = false;
    }

    public void ResetZoom()
    {
        tranformToZoom.DOScale(Vector3.one, 0.1f);
        tranformToZoom.DOLocalMove(Vector3.zero, 0.1f);
    }

    public void ResetOriginalPos()
    {
        tranformToZoom.position = position;
    }

    // Update is called once per frame
    void Update()
    {
        if (canDrag == false)
            return;

        if (Input.GetMouseButton(0))
        {
            UpdateMousePosition();
        }
        if (Input.GetMouseButtonDown(0))
        {
            UpdateStartPosition();
            UpdateDifferencePoint();
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        /*Minus the difference point so you can pick the 
        element from the edges, without any jerk*/

        transform.position = mousePosition - differencePoint;
        //tranformToZoom.position = new Vector3(Mathf.Clamp(tranformToZoom.position.x, currentX, currentX - 150), Mathf.Clamp(tranformToZoom.position.y, currentY, currentY + 150), tranformToZoom.position.z);
    }

    public void SetPostionManual()
    {
        tranformToZoom.GetComponent<RectTransform>().DOAnchorPos(new Vector2(-290f, -269f), 0);
    }
    private void UpdateMousePosition()
    {
        //mousePosition.x = Input.mousePosition.x;
        mousePosition.y = Input.mousePosition.y;
    }

    private void UpdateStartPosition()
    {
        startPosition.x = transform.position.x;
        startPosition.y = transform.position.y;
    }

    private void UpdateDifferencePoint()
    {
        differencePoint = mousePosition - startPosition;
    }

    public void ZoomIn()
    {
        //float zoom = transform.localScale.x + 0.3f;

        //if (zoom > 1.5f)
        //    zoom = 1.5f;

        //transform.DOScale(new Vector3(zoom, zoom, zoom), 0.1f);
    }

    public void ZoomOut()
    {
        //float zoom = transform.localScale.x - 0.3f;

        //if (zoom < 1f)
        //    zoom = 1f;

        //transform.DOScale(new Vector3(zoom, zoom, zoom), 0.1f);
        //transform.DOLocalMove(Vector3.zero, 0.3f);
    }
}
