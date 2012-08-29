/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_KillDisplay.uc
 * 
 * Stats:
 *	Properties:5
 *	Functions:5
 *
 *******************************************************************************/
class TgUIPrimaryHUD_KillDisplay extends Object
	native;

var TgUIPrimaryHUD_Settings m_Settings;
var bool m_bKilledTargetDisplay;
var UILabel m_KilledTargetLabel;
var int m_KilledTargetTime;
var TgUISceneDriver m_PrimaryScene;

native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native function AddNewKilledTarget(string Target, string KillerName, bool KillerWasPlayer);
native function AddNewDisplayMessage(string Message);

defaultproperties
{
	m_Settings=TgSettings0
}