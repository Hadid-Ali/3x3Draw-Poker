using System;
using UnityEngine;
using System.Collections;

//--------------------------------------------

// card suits
public enum CardType
{
	TYPE_HEARTS,
	TYPE_SPADES,
	TYPE_DIAMONDS,
	TYPE_CLUBS,
	TYPES_NO
}

//--------------------------------------------

// card values
public enum CardValue
{
	VALUE_2,
	VALUE_3,
	VALUE_4,
	VALUE_5,
	VALUE_6,
	VALUE_7,
	VALUE_8,
	VALUE_9,
	VALUE_10,
	VALUE_J,
	VALUE_Q,
	VALUE_K,
	VALUE_A,
	VALUES_NO
}

//--------------------------------------------

[System.Serializable]
public class CardData 
{
	// card suit and value (set in the Inspector)
	public CardType type = CardType.TYPE_HEARTS;
	public CardValue value = CardValue.VALUE_2;
	
	// if was dealt or not from the deck (used only for library cards)
	private bool m_dealt = false;

	public bool dealt
	{
		get => m_dealt;
		set => m_dealt = value;
	}

	//----------------------------------

	// used to make a copy of another card
	public void CopyInfoFrom(CardData other)
	{
		type = other.type;
		value = other.value;
	}

	public override string ToString()
	{
		return $"{value} of {type}";
	}
}

//--------------------------------------------