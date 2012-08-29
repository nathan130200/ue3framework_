/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIReleaseMenus.uc
 * 
 * Stats:
 *	Constants:2
 *	Structs:1
 *	Properties:14
 *	Functions:14
 *
 *******************************************************************************/
class TgUIReleaseMenus extends TgUISceneDriver
	native;

const KILLED_BY_FADE_START = 4.0f;
const KILLED_BY_FADE_TIME = 1.0f;

struct native sBasicReleaseDialog
{
	var bool m_bActive;
	var UIPanel m_Panel;
	var float m_TimeReleaseDataSet;
	var float m_SecondsBeforeAutorelease;
	var bool m_bCanReleaseNow;
	var UIButton m_ReleaseNowButton;
	var UILabel m_TimeLabel;

	structdefaultproperties
	{
		m_bActive=false
		m_Panel=none
		m_TimeReleaseDataSet=0.00
		m_SecondsBeforeAutorelease=0.00
		m_bCanReleaseNow=false
		m_ReleaseNowButton=none
		m_TimeLabel=none
	}
};

var sBasicReleaseDialog m_ReleaseDialog;
var UIImage m_DeathView;
var UILabel m_KilledByLabel;
var UILabel m_KilledByWeapon;
var UILabel m_KilledByHealth;
var UILabel m_SpectateLabel;
var TgPawn_Character m_SpectatePawn;
var UIPanel m_BasePanel;
var bool m_bHideScene;
var bool m_bKillLabelFade;
var bool m_bFadeDone;
var float m_fKillDisplayTime;
var TgUIPrimaryHUD_MissionInfo m_MissionInfo;
var TgUIPrimaryHUD_RaidTimer m_RaidClock;

native function PostInitSceneDriver();
native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function UserManuallyReleased();
native function UpdateReleaseDialog();
native noexport function SetReleaseData(bool bActive, optional float fReleaseTime, optional bool bCanManuallyRelease)
{
	fReleaseTime = 0.00;
	bCanManuallyRelease = false;		
}

native function SetDeathZoomInfo(DeathZoomInfo Info);
native function bool IsReleaseDialogActive();
native function ToggleHideScene(bool hideFlag);
native function SetSpectateText();
function bool OnBasicReleaseDialogButtonKey(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 1 || (EventParms.EventType == 3)))
	{
		UserManuallyReleased();
		return true;
	}
	return false;
}

event FixupWidgetsUC()
{
	m_ReleaseDialog.m_ReleaseNowButton.__OnRawInputKey__Delegate = OnBasicReleaseDialogButtonKey;
}
