/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIOpenTerritories.uc
 * 
 * Stats:
 *	Properties:5
 *	Functions:5
 *
 *******************************************************************************/
class TgUIOpenTerritories extends TgUISceneDriver
	native;

var UILabel m_MinOpenTimeLabel;
var UILabel m_MaxOpenTimeLabel;
var UILabel m_MessageLabel;
var UIEditBox m_MinutesEdit;
var UIButton m_OpenButton;

native function FixupTgUIScene();
native function FixupWidgets();
native function bool OnOpenClicked(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	m_OpenButton.__OnRawInputKey__Delegate = OnOpenClicked;
	return @NULL(201327872);
	@NULL(-54271)
	OnSceneInputKeyDelegate != @NULL(34079232);
}

function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms)
{
	// End:0x43 Loop:False
	if(EventParms.InputKeyName == 'Escape' && (EventParms.EventType == 0))
	{
		CloseTgUIScene();
		return true;
	}
	return true;
}
