/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUILoadItemProfile.uc
 * 
 * Stats:
 *	Properties:3
 *	Functions:5
 *
 *******************************************************************************/
class TgUILoadItemProfile extends TgUISceneDriver
	native;

var UIButton m_LoadDefButton;
var UIButton m_LoadOffButton;
var UIButton m_LoadHybButton;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
event FixupWidgetsUC()
{
	m_LoadDefButton.__OnRawInputKey__Delegate = OnDialogButtonKey;
	self
	@NULL(201327872)
	@NULL(-54271)
	OnDialogButtonKey != self;
	@NULL(-54271)
	OnDialogButtonKey != @NULL(34079232);
}

function bool OnDialogButtonKey(const out InputEventParameters EventParms)
{
	local string sWidgetTag;
	local TgPlayerController PC;

	PC = TgPlayerController(m_HUDParent.PlayerOwner);
	// End:0x27 Loop:False
	if(PC == none)
	{
		return false;
	}
	// End:0x12f Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1))
	{
		sWidgetTag = string(UIButton(EventParms.UIObjectReference).WidgetTag);
		// BlockSize:0
		switch(sWidgetTag)
		{
			// End:0xc4
			case "profile_select_01":
				PC.LoadItemProfile(1);
				CloseTgUIScene();
				return true;
			// End:0xf8
			case "profile_select_02":
				PC.LoadItemProfile(2);
				CloseTgUIScene();
				return true;
			// End:0x12c
			case "profile_select_03":
				PC.LoadItemProfile(3);
				CloseTgUIScene();
				return true;
			// End:0xffff
			default:
			}
			return false;
}

defaultproperties
{
	m_bEscapeKeyCloses=true
}