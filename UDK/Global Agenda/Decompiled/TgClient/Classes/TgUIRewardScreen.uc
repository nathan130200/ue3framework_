/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIRewardScreen.uc
 * 
 * Stats:
 *	Properties:5
 *	Functions:10
 *
 *******************************************************************************/
class TgUIRewardScreen extends TgUISceneDriver_Tooltip
	native;

var UIButton m_CloseButton;
var float m_PreviousTickTime;
var float m_fAutoDismissTime;
var float m_fRevealTime;
var bool m_bStartAutoDismissOnOpen;

native function bool OnSceneKeyPressed(const out InputEventParameters EventParms);
native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function BeginAutoDismiss();
native function SetTimeToReveal();
native function RevealHiddenReward();
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyPressed;
	m_CloseButton
	none
	)
	m_CloseButton.__OnRawInputKey__Delegate = OnCloseButton;
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
}

defaultproperties
{
	m_fAutoDismissTime=4.00
	m_bStartAutoDismissOnOpen=true
}