/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUINewPlayerHelp.uc
 * 
 * Stats:
 *	Properties:1
 *	Functions:2
 *
 *******************************************************************************/
class TgUINewPlayerHelp extends TgUISceneDriver_Tooltip
	native;

var UIButton m_CloseButton;

native function PostOpenScene();
native function bool OnCloseButton(const out InputEventParameters EventParms);

defaultproperties
{
	m_bEscapeKeyCloses=true
}