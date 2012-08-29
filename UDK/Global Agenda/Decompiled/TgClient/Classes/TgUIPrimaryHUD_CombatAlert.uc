/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_CombatAlert.uc
 * 
 * Stats:
 *	Properties:8
 *	Functions:4
 *
 *******************************************************************************/
class TgUIPrimaryHUD_CombatAlert extends Object
	native;

var TgUIPrimaryHUD_Settings m_Settings;
var UIPanel m_BasePanel;
var TgUISceneDriver m_PrimaryScene;
var bool m_bNeedsUpdate;
var UILabel m_HeaderLabel;
var UILabel m_AlertNumberLabel;
var UILabel m_ActivateLabel;
var SoundCue m_CombatAlertSoundCue;

native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native function OnHexAssignmentUpdated();
native function UpdateLabels();

defaultproperties
{
	m_Settings=TgSettings0
	m_CombatAlertSoundCue=SoundCue'SND_B_UI.A_CUE_UI_AvA_Alert'
}