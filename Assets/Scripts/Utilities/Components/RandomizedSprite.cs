using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomizedSprite : MonoBehaviour
{
    [SerializeField] private SpriteRenderer m_SpriteRenderer;
    [SerializeField] private Sprite[] m_SpritesToAssign;
    
    void Start()
    {
        AssignRandomSprite();
    }

    private void AssignRandomSprite()
    {
        m_SpriteRenderer.sprite = m_SpritesToAssign[Random.Range(0, m_SpritesToAssign.Length)];
    }
}
