/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_BeaconStatus.uc
 * 
 * Stats:
 *	Properties:9
 *	Functions:5
 *
 *******************************************************************************/
class TgUIPrimaryHUD_BeaconStatus extends Object
	native;

var TgUIPrimaryHUD_Settings m_Settings;
var MaterialInstanceConstant m_BeaconStatusMIC;
var UIImage m_BeaconStatusImage;
var UILabel m_BeaconHolderLabel;
var UILabel m_ReviveLengthLabel;
var bool m_bInitialized;
var TgGame.TgTeamBeaconManager.BeaconStatus m_CurrentStatus;
var float m_CurrentDeployAmount;
var float m_CurrentFlashProgressionAmount;

native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native function UpdateBeaconHUDStatus(TgGame.TgTeamBeaconManager.BeaconStatus NewStatus);
native function TgRepInfo_TaskForce GetLocalPlayerTaskForce();
native function UpdateBeaconDirection(Vector NewLoc);

defaultproperties
{
	m_Settings=TgSettings0
	m_BeaconStatusMIC=MaterialInstanceConstant'HUD_A.BSI.MIC_GUI_HUD_BeaconStatusIndicatorB'
	m_CurrentDeployAmount=1.00
}