using UnityEngine;
using System.Collections;
using UnityEngine.Serialization;

public class Card : MonoBehaviour 
{
	[SerializeField] private SpriteRenderer m_CardFaceSprite;
	
	//public GameObject holdMarkerObj;

	private Transform m_CardTransform;

	public CardData CardData { get; private set; }
	
	AudioSource flipSound;
	
	void Start ()
	{
		m_CardTransform = transform;
		flipSound = GetComponent<AudioSource>();
	}

	//----------------------------------------------------

	public void SetCardData(CardData cardData)
	{
		// set a link to a deck card, so that we know what 
		// card we need to work with
		CardData = cardData;
	}

	//----------------------------------------------------

	// this function is not starting the flipping animation, 
	// instead it is called as an event FROM THE flipping animation which is already runnning
	public void StartFlippingCard()
	{		
		CopyInfoFrom(CardData);
		SetCardRotation(0);
		flipSound.Play();
	}

	//----------------------------------------------------

	void CopyInfoFrom(CardData other)
	{
		CardData.type = other.type;
		CardData.value = other.value;
		CardData.sprite = other.sprite;
		CardData.hold = other.hold;

		// update sprite
		UpdateCardFaceSprite();
	}

	//----------------------------------------------------

	public void UpdateCardFaceSprite()
	{
		m_CardFaceSprite.sprite = CardData.sprite;
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
		CardData.hold = false;
		// hide hold marker
		Debug.LogError("Reset Hold");
	}

	//--------------------------------------------------

	public bool IsHolded()
	{
		return CardData.hold;
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
		CardData.hold = !CardData.hold;
		
		// play HOLD animation if needed
		if(CardData.hold)
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
