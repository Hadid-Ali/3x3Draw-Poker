using System;
using UnityEngine;
using System.Collections;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class Card : MonoBehaviour 
{
	[SerializeField] protected Image m_CardFaceImage;
	[SerializeField] private Transform m_CardTransform;

	[SerializeField] private AudioSource flipSound;
	[SerializeField] private CardDataHolder m_CardDataHandler;

	private CardData m_CardData = new();
	public CardData CardData => m_CardData;
	
	protected virtual void Start ()
	{
		m_CardTransform = transform;
		flipSound = GetComponent<AudioSource>();
	}

	public void SetData(CardData cardData,bool isPersistent)
	{
		m_CardDataHandler.SetCardData(cardData, isPersistent);
	}

	public void SetActiveStatus(bool status)
	{
		m_CardFaceImage.enabled = status;
	}

	//----------------------------------------------------

	public void SetCardData(CardData cardData)
	{
		m_CardData = cardData;
		CopyInfoFrom(cardData);
		StartFlippingCard();
	}

	//----------------------------------------------------

	// this function is not starting the flipping animation, 
	// instead it is called as an event FROM THE flipping animation which is already runnning
	public void StartFlippingCard()
	{		
		SetCardRotation(0);
		flipSound.Play();
	}

	//----------------------------------------------------

	void CopyInfoFrom(CardData other)
	{
		try
		{
			m_CardData.type = other.type;
			m_CardData.value = other.value;
			m_CardData.sprite = other.sprite;
			m_CardData.hold = other.hold;

			UpdateCardFaceSprite(other.sprite);
		}
		catch (Exception e)
		{
			Debug.LogError(gameObject, gameObject);
			throw;
		}
	}

	//----------------------------------------------------

	public void UpdateCardFaceSprite(Sprite sprite)
	{
		m_CardFaceImage.sprite = sprite;
	}
	

	//----------------------------------------------------

	public void SetResultsState(bool bWin)
	{
		// if it's a winner card, we start a specific animation for the card (flashing)
		// otherwise we play a 'not winner' fade-out animation

		// if(bWin)
		// 	animator.SetTrigger ("trResultsWin");
		// else
		// 	animator.SetTrigger ("trResultsIgnore");
	}

	//----------------------------------------------------

	public void DealWithDelay(float delay)
	{
		Deal (); // start dealing in an instant
	}


	//----------------------------------------------------

	public void Deal()
	{
		StartFlippingCard();
		SoundsManager.the.dealCardSound.Play();
		Invoke(nameof(OnCardDealt), 1f);
	}

	//--------------------------------------------------

	public void ResetHold()
	{
		// disable HOLD
		m_CardData.hold = false;
		// hide hold marker
		Debug.LogError("Reset Hold");
	}

	//--------------------------------------------------

	public bool IsHolded()
	{
		return m_CardData.hold;
	}

	//--------------------------------------------------

	public void ClearAfterDeal()
	{
		// // we vanish only from some states (not from dealing)
		// AnimatorStateInfo stateInfo = animator.GetCurrentAnimatorStateInfo (0);
		// if (stateInfo.IsName ("CardIdle") || 
		//     stateInfo.IsName ("CardHold") || 
		//     stateInfo.IsName ("CardResultsIgnore") || stateInfo.IsName ("CardResultsWin"))
		// {
		// 	animator.SetTrigger ("trVanish");
		// }
		Debug.LogError("Clear After Deal");
	}

	//--------------------------------------------------

	public void	VanishAndDealAgainWithDelay(float delay)
	{
		ClearAfterDeal();
		DealWithDelay(delay);
	}

	private void SetCardRotation(float rotation)
	{
		m_CardTransform.rotation = Quaternion.Euler(new Vector3(0f, rotation, 0f));
	}
	
	//--------------------------------------------------

	void OnMouseDown()
	{
		// if we click the card (each card has a collider attached), toggle HOLD
		if(MainGame.the.gameState == MainGame.STATE_WAIT_HOLD)
			ToggleHold();
	}

	//--------------------------------------------------

	public void ToggleHold()
	{
		// change hold status
		m_CardData.hold = !m_CardData.hold;
		
		// play HOLD animation if needed
		if(m_CardData.hold)
		{
			// start playing the HOLD animation
			Debug.LogError("Hold");
			// play HOLD sound
			SoundsManager.the.holdSound.Play ();
		}
	}

	//--------------------------------------------------

	// this callback is called from the DEAL animation (as an Animation event)
	void OnCardDealt()
	{
		MainGame.the.CardAnimationFinished();
	}

	//--------------------------------------------------
}
