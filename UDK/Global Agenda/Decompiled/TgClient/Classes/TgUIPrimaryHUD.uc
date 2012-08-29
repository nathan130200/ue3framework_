/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Structs:3
 *	Properties:56
 *	Functions:24
 *
 *******************************************************************************/
class TgUIPrimaryHUD extends TgUISceneDriver
	native
	config(UI);

const NUM_WEAPON_STATUS_BARS = 2;

enum eATTENTIONBAR_TYPE
{
	ONELINE_ATTENTION,
	TWOLINE_ATTENTION,
	eATTENTIONBAR_TYPE_MAX
};

struct native WeaponStatusStruct
{
	var UIImage wssReticuleWeaponStatus;
	var UILabel wssReticuleHealth;
	var UILabel wssReticuleEnergy;
	var UILabel wssReticuleHealthAlert;
	var UILabel wssReticuleEnergyAlert;
	var UILabel wssReticuleRange;
	var UILabel wssReticuleTargetName;
	var UIImage wssReticuleTargetHealth;
	var UIImage wssReticuleTargetShield;

	structdefaultproperties
	{
		wssReticuleWeaponStatus=none
		wssReticuleHealth=none
		wssReticuleEnergy=none
		wssReticuleHealthAlert=none
		wssReticuleEnergyAlert=none
		wssReticuleRange=none
		wssReticuleTargetName=none
		wssReticuleTargetHealth=none
		wssReticuleTargetShield=none
	}
};

struct native sAttentionBar
{
	var UIPanel m_Panel;
	var UILabel m_Notice;
	var UILabel m_Instructions;
	var bool m_bActive;

	structdefaultproperties
	{
		m_Panel=none
		m_Notice=none
		m_Instructions=none
		m_bActive=false
	}
};

struct native sAttentionPanel
{
	var UIPanel m_OuterPanel;
	var sAttentionBar m_AttentionBar[2];

	structdefaultproperties
	{
		m_OuterPanel=none
		m_AttentionBar[0]=(m_Panel=none,m_Notice=none,m_Instructions=none,m_bActive=false)
		m_AttentionBar[1]=(m_Panel=none,m_Notice=none,m_Instructions=none,m_bActive=false)
	}
};

var TgHUD_Game m_TgHUDGame;
var TgUIPrimaryHUD_DeviceBar m_DeviceBar;
var TgUIPrimaryHUD_ActiveItem m_ActiveItem;
var TgUIPrimaryHUD_TeamPanel m_TeamPanel;
var TgUIPrimaryHUD_MiniMap m_MiniMap;
var TgUIPrimaryHUD_KillDisplay m_KillDisplay;
var TgUIPrimaryHUD_BuffBar m_BuffBar;
var TgUIPrimaryHUD_BuffBar m_DebuffBar;
var TgUIPrimaryHUD_Clock m_KismetClock;
var TgUIPrimaryHUD_MissionInfo m_MissionInfo;
var TgUIPrimaryHUD_DialogQuery m_Dialog;
var TgUIPrimaryHUD_BeaconStatus m_BeaconStatusIndicator;
var TgUIPrimaryHUD_DangerBox m_DangerBox;
var TgUIPrimaryHUD_RaidTimer m_RaidClock;
var TgUIPrimaryHUD_VMTree m_VMTree;
var TgUIPrimaryHUD_AgentInfo m_AgentInfo;
var TgUIPrimaryHUD_CombatAlert m_CombatAlert;
var TgUIPrimaryHUD_QuestTracking m_QuestTracking;
var UISafeRegionPanel m_AspectPanel;
var TgUIReticule m_ReticuleLogic;
var UIPanel m_ReticuleBaseline;
var UIPanel m_CrosshairBaseline;
var UIImage m_ReticuleCrosshair;
var float m_fLastReticuleTargetTime;
var UILabel m_MapNameLabel;
var UIImage m_SpeakingIcon;
var UIImage m_FullscreenFadeIn;
var sAttentionPanel m_AttentionPanel;
var WeaponStatusStruct m_ReticuleWeaponStatus[2];
var MaterialInstanceConstant m_ReticuleTargetHealthMIC;
var MaterialInstanceConstant m_ReticuleTargetShieldMIC;
var globalconfig bool m_bHideReticuleLabels;
var globalconfig bool m_bSuppressOverhealing;
var globalconfig bool m_bDisplayDeployableHealth;
var globalconfig bool m_bDisplayCombatText;
var globalconfig bool m_bHideEnemyTags;
var globalconfig bool m_bHideObjectives;
var globalconfig bool m_bHideObjectiveNames;
var globalconfig bool m_bHideTeamPanel;
var globalconfig bool m_nReticuleStatusBarIndex;
var bool m_bIsFading;
var globalconfig int m_nEnableFullHitEffect;
var UIImage m_ItemProfileChangeAlert;
var UIImage m_BoostIcon;
var float m_fFadeTimeStart;
var float m_fFadeTime;
var Vector2D m_FadeAlpha;
var LinearColor m_FadeColor;
var string m_PresetMapName;
var string m_PresetZoneName;
var string m_PresetSubzoneName;
var UILabel m_MapZoneNameAlert;
var UILabel m_MapNameAlert;
var UILabel m_MapSubZoneNameAlert;
var float m_fZoneNameAlertTime;
var float m_fMapNameAlertTime;

native function PostInitSceneDriver();
native function FixupWidgets();
native function bool TickTgUIScene();
native function PreCloseScene();
native function PostOpenScene();
native function RegisterCallbacks();
native function ToggleMapNameDisplay();
native function OnSpeaking(bool bSpeaking);
native function UpdateAlerts();
native function SetUIClockTimer(byte ClockStateBitfield, float TimerDuration);
native function SetReticuleVisibility(bool CrossHairVisibility, bool WeaponStatusVisibility);
native function SwitchReticuleStatusBar(int ReticuleToUse);
native function UpdateReticuleLabelValues();
native function UpdateTargetHealthBar();
native function UpdateReticleOffset(float OffsetDistanceFromCenterX, float OffsetDistanceFromCenterY);
native noexport function UpdateHUDCooldowns(int DeviceEqpPt, int DeviceMode, float SetupTime, float RechargeTime, optional float StartupTime)
{
	StartupTime = 0.00;				
}

native function TriggerUIBarsFullUpdate();
native function UpdateEquipTimer(bool IsActive, float EquipTime);
native function TempToggleElement(TgGame.TgObject.TG_HIDEABLE_HUD_ELEMENT Element, bool bVisible);
native function SetOmegaVisibility(bool bVisible);
native noexport function SetFade(bool bEnableFading, optional Color FadeColor, optional Vector2D FadeAlpha, optional float FadeTime);
native function UpdateFade();
native function bool OnPrimaryHUDKeyDelegate(const out InputEventParameters EventParms);
event FixupUIDeviceBarsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnPrimaryHUDKeyDelegate;
}

defaultproperties
{
	m_ReticuleTargetHealthMIC=MaterialInstanceConstant'HUD_A.MAT_Healthbar.MIC_Player_HealthbarB'
	m_ReticuleTargetShieldMIC=MaterialInstanceConstant'HUD_A.MAT_Healthbar.MIC_Target_ShieldB'
	m_bSuppressOverhealing=true
	m_bDisplayCombatText=true
	m_bHideTeamPanel=true
	m_nReticuleStatusBarIndex=true
	m_nEnableFullHitEffect=1
	m_FadeColor=(R=0.00,G=0.00,B=0.00,A=1.00)
	m_bHookChat=true
}