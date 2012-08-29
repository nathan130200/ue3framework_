/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIDevSpawnBot.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:8
 *	Functions:35
 *
 *******************************************************************************/
class TgUIDevSpawnBot extends TgUISceneDriver
	native;

const NUM_VISIBLE_BOTSLOTS = 18;

struct native sBotScrollButton
{
	var UIButton m_ScrollHigher;
	var UIButton m_ScrollLower;
	var int m_CurrentStartIdx;
	var int m_ActiveSelectPos;
	var bool m_bScrollTriggered;
	var bool m_bScrollingActive;
	var bool m_bScrollingHigher;
	var float m_fTimeStarted;
	var float m_fTimeOfLastScroll;

	structdefaultproperties
	{
		m_ScrollHigher=none
		m_ScrollLower=none
		m_CurrentStartIdx=0
		m_ActiveSelectPos=0
		m_bScrollTriggered=false
		m_bScrollingActive=false
		m_bScrollingHigher=false
		m_fTimeStarted=0.00
		m_fTimeOfLastScroll=0.00
	}
};

var UILabelButton m_BotListWidgets[18];
var UIButton m_SpawnBotButton;
var UIButton m_CloseButton;
var sBotScrollButton m_ScrollSet;
var TgDataInterface m_DataInterface;
var TgDataSet m_DataSet;
var int m_SlotSelected;
var bool m_bNeedsRefresh;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function PopulateWidgets();
native function bool AttemptSpawn();
native function UpdateScrolling();
event SetupDataInterface()
{
	m_DataSet = new class'TgDataSet';
	m_DataInterface = new class'TgDataInterface';
	m_DataInterface.GetLocalBotList(m_DataSet);
	m_SlotSelected = -1;
	m_bNeedsRefresh = true;
}

function ScrollChange(bool bHigher)
{
	m_ScrollSet.m_bScrollTriggered = true;
	m_ScrollSet.m_bScrollingHigher = bHigher;
}

function StartScrolling(bool bHigher)
{
	m_ScrollSet.m_bScrollTriggered = true;
	m_ScrollSet.m_bScrollingHigher = bHigher;
	m_ScrollSet.m_bScrollingActive = true;
	m_ScrollSet.m_fTimeStarted = m_TimeOfTick;
}

function StopScrolling()
{
	m_ScrollSet.m_bScrollingActive = false;
	m_ScrollSet.m_bScrollTriggered = false;
}

function bool OnScrollHigherButton(const out InputEventParameters EventParms)
{
	// End:0x8d Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton')
	{
		// End:0x66 Loop:False
		if(EventParms.EventType == 0 || (EventParms.EventType == 3))
		{
			StartScrolling(true);
			return true;
		}
		// End:0x8d
		else
		{
			// End:0x8d Loop:False
			if(EventParms.EventType == 1)
			{
				StopScrolling();
				return true;
			}
		}
	}
	return false;
}

function bool OnScrollLowerButton(const out InputEventParameters EventParms)
{
	// End:0x8d Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton')
	{
		// End:0x66 Loop:False
		if(EventParms.EventType == 0 || (EventParms.EventType == 3))
		{
			StartScrolling(false);
			return true;
		}
		// End:0x8d
		else
		{
			// End:0x8d Loop:False
			if(EventParms.EventType == 1)
			{
				StopScrolling();
				return true;
			}
		}
	}
	return false;
}

function bool OnSpawnBotSceneKey(const out InputEventParameters EventParms)
{
	// End:0x4b Loop:False
	if(EventParms.InputKeyName == 'MouseScrollUp' && (EventParms.EventType == 0))
	{
		ScrollChange(false);
		return true;
	}
	// End:0x123
	else
	{
		// End:0x96 Loop:False
		if(EventParms.InputKeyName == 'MouseScrollDown' && (EventParms.EventType == 0))
		{
			ScrollChange(true);
			return true;
		}
		// End:0x123
		else
		{
			// End:0xdc Loop:False
			if(EventParms.InputKeyName == 'Escape' && (EventParms.EventType == 0))
			{
				CloseTgUIScene();
				return true;
			}
			// End:0x123
			else
			{
				// End:0x123 Loop:False
				if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
				{
					StopScrolling();
					return true;
				}
			}
		}
	}
	return false;
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x63 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
	// End:0xaa
	else
	{
		// End:0xaa Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
		{
			StopScrolling();
			return true;
		}
	}
	return false;
}

function bool OnSpawnBotButton(const out InputEventParameters EventParms)
{
	// End:0x70 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x6b Loop:False
		if(AttemptSpawn())
		{
			CloseTgUIScene();
		}
		return true;
	}
	// End:0xb7
	else
	{
		// End:0xb7 Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
		{
			StopScrolling();
			return true;
		}
	}
	return false;
}

function bool OnBotListBase(name Key, Core.Object.EInputEvent Event, int Index)
{
	// End:0x4f Loop:False
	if(Key == 'LeftMouseButton' && (Event == 0 || (Event == 3)))
	{
		m_SlotSelected = Index;
		m_bNeedsRefresh = true;
		return true;
	}
	// End:0x80
	else
	{
		// End:0x80 Loop:False
		if(Key == 'LeftMouseButton' && (Event == 1))
		{
			StopScrolling();
			return true;
		}
	}
	return false;
}

function bool OnBotList1(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 0);
}

function bool OnBotList2(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 1);
}

function bool OnBotList3(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 2);
}

function bool OnBotList4(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 3);
}

function bool OnBotList5(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 4);
}

function bool OnBotList6(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 5);
}

function bool OnBotList7(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 6);
}

function bool OnBotList8(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 7);
}

function bool OnBotList9(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 8);
}

function bool OnBotList10(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 9);
}

function bool OnBotList11(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 10);
}

function bool OnBotList12(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 11);
}

function bool OnBotList13(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 12);
}

function bool OnBotList14(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 13);
}

function bool OnBotList15(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 14);
}

function bool OnBotList16(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 15);
}

function bool OnBotList17(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 16);
}

function bool OnBotList18(const out InputEventParameters EventParms)
{
	return OnBotListBase(EventParms.InputKeyName, EventParms.EventType, 17);
}

event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSpawnBotSceneKey;
	MetaCastToken-MetaCastToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.MetaCastToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_CloseButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		// BlockSize:3072
		OnCloseButton != m_BotListWidgets;
		{
			// BlockSize:3072
			OnBotList1 != m_BotListWidgets;
			{
				OnBotList2 != default.@NULL(1298689);
				__OnRawInputKey__Delegate
				OnBotList3
				UnknownExprToken(0x03)
				m_BotListWidgets
				// BlockSize:3072
				switch(@NULL(-54271))
				{
					// BlockSize:3072
					OnBotList4 != return m_BotListWidgets;
					{
						// BlockSize:53505
						OnBotList5 != switch(MetaCastToken(ArgumentOutOfRangeException));
						{
							@NULL(423886848)
							m_BotListWidgets[6];
							// BlockSize:3072
							switch(@NULL(-54271))
							{
								// End:0xd101 Loop:False
								OnBotList7 != if(MetaCastToken(ArgumentOutOfRangeException));
								{
									@NULL(423886848)
									m_BotListWidgets[8];
									// BlockSize:3072
									switch(@NULL(-54271))
									{
										OnBotList9 != assert(@NULL(201327872));
										// End:0xd101
										OnBotList10 != case MetaCastToken(ArgumentOutOfRangeException):;
											@NULL(423886848)
											m_BotListWidgets[11];
											// BlockSize:3072
											switch(@NULL(-54271))
											{
												// BlockSize:3072
												OnBotList12 != ;
												{
													// BlockSize:3072
													m_BotListWidgets = switch(@NULL(-54271))
													{
														// BlockSize:3072
														OnBotList16 != switch(@NULL(-54271))[m_BotListWidgets];
														{
															{
																m_ScrollSet.m_ScrollLower
																// BlockSize:3072
																switch(@NULL(-54271))
																{
																	OnScrollLowerButton != @NULL(0);
																}
}
