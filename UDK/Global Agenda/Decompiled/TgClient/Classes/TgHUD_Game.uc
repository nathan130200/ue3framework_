/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgHUD_Game.uc
 * 
 * Stats:
 *	Constants:8
 *	Enums:1
 *	Structs:2
 *	Properties:106
 *	Functions:209
 *
 *******************************************************************************/
class TgHUD_Game extends TgHUD
	hidecategories(Navigation)
	native
	config(Game)
	transient;

const TG_CLASS_LIST_DATASTORE_NAME = "ClassesList";
const TG_ANY_YES_NO_DATASTORE_NAME = "AnyYesNoList";
const NUM_OBJECTIVES_TO_POSTRENDER = 6;
const ED_LEFT_MARGIN = 5;
const ED_LEFT_MARGIN_OFFSET = 150;
const ED_LINE_SPACE = 12;
const ED_TOP_MARGIN = 200;
const ED_TAB = 120;

enum eUIVolumeQuestVisType
{
	eHudVisNone,
	eHudVisQuestAvl,
	eHudVisQuestTurnin,
	eHudVisQuestObj,
	eUIVolumeQuestVisType_MAX
};

struct native DigitData
{
	var int LeftPos;
	var int TopPos;
	var int Width;
	var int Height;

	structdefaultproperties
	{
		LeftPos=0
		TopPos=0
		Width=0
		Height=0
	}
};

struct native DamageDirectionInfo
{
	var float FadeTime;
	var float FadeValue;
	var MaterialInstanceConstant MatConstant;
	var Vector OriginalHitDirection;

	structdefaultproperties
	{
		FadeTime=0.00
		FadeValue=0.00
		MatConstant=none
		OriginalHitDirection=(X=0.00,Y=0.00,Z=0.00)
	}
};

var const Texture2D m_BarTexture;
var const Texture2D m_CutoutTexture;
var const Texture2D m_ColorTexture;
var const Texture2D m_TargetTexture;
var DigitData m_DigitInfo[10];
var Color m_HUDTeamColor;
var int m_nTextPanelWidth;
var int m_nTextPanelHeight;
var int m_nTeamPanelWidth;
var int m_nTeamPanelHeight;
var int m_nTeamIconHeight;
var PlayerReplicationInfo m_NamedPlayer;
var float m_NameTime;
var Material m_LockAlertMat;
var MaterialInstanceConstant m_LockAlertMIC;
var int m_nEDLastUpdated;
var bool m_bDrawPawnHUD;
var bool m_bBlockPawnHUD;
var bool m_bDrawTaskForce;
var bool m_bShowHUDTargetExtraInfo;
var bool m_bRotatingRadarMap;
var bool m_bFadeOutHitEffect;
var globalconfig bool m_bEnableHitEffect;
var bool m_bFadeOutZoomEffect;
var DOFAndBloomEffect m_HitBlurEffect;
var MaterialEffect m_HitMaterialEffect;
var name c_CurrentScopeMaterialName;
var transient MaterialInstanceConstant m_HitEffectMaterialInstance;
var float m_HitEffectFadeTime;
var float m_MaxHitEffectIntensity;
var LinearColor m_MaxHitEffectColor;
var MaterialEffect m_SniperZoomEffect;
var DOFAndBloomEffect m_ZoomBlurEffect;
var float m_ZoomEffectFadeTime;
var float m_CurrentZoomFOV;
var float m_EndZoomFOV;
var float m_StartZoomFOV;
var TgUISceneManager m_UISceneManager;
var TgUIPrimaryHUD m_PrimaryHUD;
var TgUISettingsMenu_Controls m_KeyBindMenu;
var TgUIMainMenu m_MainMenu;
var TgUIReceivedItemScreen m_RewardScreen;
var TgUICampaignMenu_HexMap m_CampaignScreen;
var TgUIAgencyMenu_Facilities m_FacilitiesScreen;
var MaterialEffect m_BinocularZoomMaterialEffect;
var TgUIMissionScene m_MissionScene;
var TgUIMissionScene_Zone m_ZoneMissionScene;
var TgUIAgentProfile_Equip m_AgentEquipScene;
var TgAgencyData m_AgencyData;
var TgAllianceData m_AllianceData;
var TgAchievementData m_AchievementData;
var TgAttentionData m_AttentionData;
var array<int> m_RecentAchievements;
var transient MaterialInstanceConstant m_ZoomEffectMaterialInstance;
var array<DamageDirectionInfo> c_DamageDirectionData;
var int c_MaxNumOfDamgeDirectionIndicators;
var Material c_DamageDirectionParentMaterial;
var float c_DamageDirectionFadeTime;
var name c_DamageDirectionPositionalParamName;
var float c_DamageDirectionDamageAmount;
var name c_DamageDirectionDamageAmountName;
var name c_DamageDirectionFadeParamName;
var name c_DamageStateName;
var float c_ResolutionScale;
var DamageDirectionInfo c_BodyUnderAttackData;
var Material c_BodyUnderAttackParentMaterial;
var float c_BodyUnderAttackFadeTime;
var DamageDirectionInfo c_BeingLockedData;
var MaterialInstanceConstant c_BeingLockedParentMaterial;
var float c_BeingLockedFadeTime;
var DamageDirectionInfo c_BeingTargetedData;
var MaterialInstanceConstant c_BeingTargetedParentMaterial;
var float c_BeingTargetedFadeTime;
var DamageDirectionInfo c_BeingDetectedData;
var MaterialInstanceConstant c_BeingDetectedParentMaterial;
var float c_BeingDetectedFadeTime;
var DamageDirectionInfo c_ActiveCombatData;
var MaterialInstanceConstant c_ActiveCombatParentMaterial;
var float c_ActiveCombatFadeTime;
var DamageDirectionInfo c_InBombRangeData;
var MaterialInstanceConstant c_InBombRangeParentMaterial;
var float c_InBombRangeFadeTime;
var Vector2D c_RemainingShiftingReticuleDistance;
var Vector2D c_CurrentReticulePos;
var Vector2D c_DestinationReticulePos;
var float c_ShiftingReticuleSpeed;
var TgStatsData c_StatsData;
var TgVoiceMacroTree c_VoiceMacroTree;
var Actor c_SceneTriggerActor;
var Vector m_vWorldMouseLocation;
var Vector m_vWorldMouseDirection;
var Vector m_vMouseHoverLocation;
var Vector m_vMouseHitNormal;
var init array<init Pointer> RewardQueue;
var TgUIChat m_ChatUI;
var SoundCue m_AcceptQuestCue;
var SoundCue m_TurninQuestCue;
var SoundCue m_AbandonQuestCue;
var MaterialInstanceConstant m_QuestHUDTagMIC;
var MaterialInstanceConstant m_CompleteQuestHUDTagMIC;
var MaterialInstanceConstant m_QuestOffscreenTagMIC;
var float m_fLastQuestHUDOpacity[2];
var init string m_CachedMapnameString;
var native const transient array<string> m_endKismetEvents;
var native const transient array<int> m_runOnceBilboards;
var int m_RequestingVendorScene;

native function TriggerDeviceRefresh();
native noexport function UpdateDeviceSlotTimers(int nDeviceInstanceId, int nDeviceMode, float fSetup, float fRecharge, optional float fElaspedCooldown)
{
	fElaspedCooldown = 0.00;				
}

native function UpdateModeEquipTimer(int nIsActive, float fEquipTime);
native function UpdateDeviceBarUIItems();
native function UpdateHiddenDevicesUI();
native function UpdateInHandDevicesUI(TgDevice pDevice);
native noexport function ResetDeviceHudTimersUI(optional int DeviceEqpPoint)
{
	DeviceEqpPoint = -1;
}

native function UseCrosshairForReticule(name CrosshairName);
native function NativePostBeginPlay();
native function InitializeCommonDataStores();
native function InitializeVoiceMacroTree();
native function UpdateUITimer(byte ClockStateBitfield, float TimerDuration);
native function UpdateUITextBox(byte TextBoxBitfield, float Duration, int messageID);
native function GetStringDimensions(Font fontToUse, string checkString, out int StringWidth, out int StringHeight);
native exec function FreemouseOnHUD(bool bFree);
native exec function ChatStartDefault();
native exec function ChatStartSlash();
native exec function ChatStartReply();
native exec function ChatToggleOnTop();
native exec function ChatToggleMode();
native exec function ChatPageUp(bool Active);
native exec function ChatPageDown(bool Active);
native exec function ChatEnd();
native exec function ChatOpacity(float ChatOpacityIn);
native noexport exec function ChatCycleTab(optional bool Increment)
{
	Increment = true;
}

native noexport exec function TgUISceneDriver ToggleManagedScene(name ClassName, optional bool bOpenedFromUIVolume)
{
	bOpenedFromUIVolume = false;	
}

native noexport exec function TgUISceneDriver ToggleManagedSceneByID(TgUIMainMenu.eMenuFunctions funcID, optional bool bOpenedFromUIVolume)
{
	bOpenedFromUIVolume = false;	
}

native exec function TgUISceneDriver OpenManagedSceneByID(TgUIMainMenu.eMenuFunctions funcID);
native exec function OpenTeamScreen();
native function bool CheckDisableWorldRendering();
native function bool ShowDeployableHealthBars();
native function bool ShowCombatText();
native function bool HideEnemyTags();
native function bool HideObjectives();
native function bool HideObjectiveNames();
native function bool CheckShouldSkipEndMission();
native function ResubmitPopups();
native function DrawActorOverlays();
native function DrawObjectiveOverlays(Vector CameraPosition, Vector CameraDir);
native function SetDepthTestingEnabled(Canvas pCanvas, bool bEnable);
native exec function ToggleMapNameDisplay();
native function TgUIMapTransition GetMapTransition();
native function bool GetControllerAndViewport(out TgPlayerController pController, out TgGameViewportClient pViewport);
native function OpenNextRewardScreen();
native function bool IsRewardScreenOpen();
native function SetRewardScreenAutoDismiss(float fSeconds);
native function SetRewardScreenReveal(float fSeconds);
native function DismissRewardScreen();
native function RevealHiddenRewardScreen();
native function UpdateMouseVector();
native function UpdateRangedTargeterState(TgGame.TgPlayerController.ERangedTargetState eNewState);
native noexport function ClientTestStrikeForceAddItem(int nInvId, int nItemId, int nInstanceCount, optional int nTaskTeam)
{
	nTaskTeam = 0;			
}

native noexport function ClientTestStrikeForceRemoveItem(int nInvId, int nInstanceCount, optional int nTaskTeam)
{
	nTaskTeam = 0;		
}

native function ClientTestAddFacility(int nZoneObjectId, int nPosition, int nInvId);
native function ClientTestAddFactoryItem(int nZoneObjectId, int nPosition, int nInvId, int nCount);
native function ClientTestRemoveFactoryItem(int nZoneObjectId, int nPosition, int nQueueId, int nCount);
native function ClientTestAgencyAddItem(int nInvId, int nInstanceCount);
native function ClientTestAgencyRemoveItem(int nInvId, int nInstanceCount, int nItemId);
native function ClientTestAgencyUpdateCurrency(int nCurrencyChange);
native function InitQuestVisuals();
native function CheckStorePrompt();
exec function TestAddFacility(int nZoneObjectId, int nPosition, int nInvId)
{
	ClientTestAddFacility(nZoneObjectId, nPosition, nInvId);
}

exec function TestAddFactoryItem(int nZoneObjectId, int nPosition, int nInvId, int nCount)
{
	ClientTestAddFactoryItem(nZoneObjectId, nPosition, nInvId, nCount);
}

exec function TestRemoveFactoryItem(int nZoneObjectId, int nPosition, int nQueueId, int nCount)
{
	ClientTestRemoveFactoryItem(nZoneObjectId, nPosition, nQueueId, nCount);
}

exec function TestStrikeForceAddItem(int nInvId, int nItemId, int nInstanceCount, int nTaskTeam)
{
	ClientTestStrikeForceAddItem(nInvId, nItemId, nInstanceCount, nTaskTeam);
}

exec function TestStrikeForceRemoveItem(int nInvId, int nInstanceCount, int nTaskTeam)
{
	ClientTestStrikeForceRemoveItem(nInvId, nInstanceCount, nTaskTeam);
}

exec function TestAgencyUpdateCurrency(int nCurrencyChange)
{
	ClientTestAgencyUpdateCurrency(nCurrencyChange);
}

exec function TestAgencyAddItem(int nInvId, int nInstanceCount)
{
	ClientTestAgencyAddItem(nInvId, nInstanceCount);
}

exec function TestAgencyRemoveItem(int nInvId, int nInstanceCount, int nItemId)
{
	ClientTestAgencyRemoveItem(nInvId, nInstanceCount, nItemId);
}

function Vector GetMouseHoverLocation()
{
	return m_vMouseHoverLocation;
}

function Vector GetMouseHitNormal()
{
	return m_vMouseHitNormal;
}

function TgGameViewportClient GetTgGameViewportClient()
{
	// End:0x33 Loop:False
	if(TgPlayerController(Owner) == none || (LocalPlayer(TgPlayerController(Owner).Player) == none))
	{
		return none;
	}
	return TgGameViewportClient(LocalPlayer(TgPlayerController(Owner).Player).ViewportClient);
}

function DrawHUD()
{
	local TgPlayerController PC;

	m_PawnOwner = TgPawn(m_PlayerOwner.ViewTarget);
	// End:0x33 Loop:False
	if(m_PawnOwner == none)
	{
		PlayZoomEffect(false);
		return;
	}
	// End:0x56 Loop:False
	if(m_PawnOwner.PlayerReplicationInfo == none)
	{
		PlayZoomEffect(false);
		return;
	}
	DrawTextPanel();
	// End:0x1ce Loop:False
	if(m_PawnOwner != none)
	{
		// End:0xd9 Loop:False
		if(m_PawnOwner.GetZoomOverlayToDraw() == 1)
		{
			m_CurrentZoomFOV = m_PawnOwner.c_fZoomedFOV;
			m_EndZoomFOV = m_PawnOwner.c_fZoomedEndFOV;
			m_StartZoomFOV = m_PawnOwner.c_fZoomedStartFOV;
			PlayZoomEffect(true, 1);
		}
		// End:0x153
		else
		{
			// End:0x147 Loop:False
			if(m_PawnOwner.GetZoomOverlayToDraw() == 2)
			{
				m_CurrentZoomFOV = m_PawnOwner.c_fZoomedFOV;
				m_EndZoomFOV = m_PawnOwner.c_fZoomedEndFOV;
				m_StartZoomFOV = m_PawnOwner.c_fZoomedStartFOV;
				PlayZoomEffect(true, 2);
			}
			// End:0x153
			else
			{
				PlayZoomEffect(false);
			}
		}
		// End:0x19b Loop:False
		if(m_PawnOwner.c_eZoomState == 1 && (m_PawnOwner.GetZoomOverlayToDraw() != 0))
		{
			PlayZoomBlur();
		}
		// End:0x1ce
		else
		{
			// End:0x1ce Loop:False
			if(m_ZoomBlurEffect != none && (m_bFadeOutZoomEffect == true))
			{
				m_bFadeOutZoomEffect = false;
				m_ZoomBlurEffect.bShowInGame = false;
			}
		}
	}
	// End:0x229 Loop:False
	if(m_PlayerOwner.PlayerReplicationInfo != none)
	{
		// End:0x229 Loop:False
		if(m_PlayerOwner.PlayerReplicationInfo.bIsSpectator || (PlayerOwner.PlayerReplicationInfo.bOnlySpectator))
		{
			DrawSpectatorHud();
		}
	}
	PC = TgPlayerController(Owner);
	// End:0x25d Loop:False
	if(PC.c_nCommandType > 0)
	{
		DrawCommandInfo(PC);
	}
	DisplayDamage();
}

function DrawCommandInfo(TgPlayerController PC)
{
	local string sCommand;

	Canvas.Font = class'Engine'.static.GetSmallFont();
	Canvas.DrawColor = ConsoleColor;
	// BlockSize:4
	switch(PC.c_nCommandType)
	{
		// End:0x5c
		case 1:
			sCommand = "Follow";
			// End:0x89
			break;
		// End:0x70
		case 2:
			sCommand = "Goto";
			// End:0x89
			break;
		// End:0x86
		case 3:
			sCommand = "Attack";
			// End:0x89
			break;
		// End:0xffff
		default:
			Canvas.SetPos(Canvas.ClipX - float(150), 10.00);
			Canvas.DrawText("COMMAND: " $ sCommand, false);
}

simulated function PostBeginPlay()
{
	local int I;

	super(HUD).PostBeginPlay();
	InitializeCommonDataStores();
	InitializeVoiceMacroTree();
	m_AttentionData = new class'TgAttentionData';
	c_StatsData = new class'TgStatsData';
	c_StatsData.Init(self);
	SetTimer(1.00, true);
	m_AgencyData = new class'TgAgencyData';
	m_AgencyData.InitAgencyData();
	m_AllianceData = new class'TgAllianceData';
	m_AchievementData = new class'TgAchievementData';
	m_HitBlurEffect = DOFAndBloomEffect(LocalPlayer(PlayerOwner.Player).PlayerPostProcess.FindPostProcessEffect('HitDOFAndBloomNode'));
	m_HitMaterialEffect = MaterialEffect(LocalPlayer(PlayerOwner.Player).PlayerPostProcess.FindPostProcessEffect('HitMaterialEffect'));
	// End:0x17d Loop:False
	if(m_HitMaterialEffect != none)
	{
		m_HitMaterialEffect.bShowInGame = false;
		m_HitEffectMaterialInstance = new (none) class'MaterialInstanceConstant';
		m_HitEffectMaterialInstance.SetParent(m_HitMaterialEffect.Material);
		m_HitMaterialEffect.Material = m_HitEffectMaterialInstance;
	}
	// End:0x19a Loop:False
	if(m_HitBlurEffect != none)
	{
		m_HitBlurEffect.bShowInGame = false;
	}
	m_ZoomBlurEffect = DOFAndBloomEffect(LocalPlayer(PlayerOwner.Player).PlayerPostProcess.FindPostProcessEffect('ZoomDOFAndBloomNode'));
	// End:0x1f4 Loop:False
	if(m_ZoomBlurEffect != none)
	{
		m_ZoomBlurEffect.bShowInGame = false;
	}
	m_BinocularZoomMaterialEffect = MaterialEffect(LocalPlayer(PlayerOwner.Player).PlayerPostProcess.FindPostProcessEffect('BinocularZoom'));
	// End:0x24e Loop:False
	if(m_BinocularZoomMaterialEffect != none)
	{
		m_BinocularZoomMaterialEffect.bShowInGame = false;
	}
	c_DamageDirectionData.Length = c_MaxNumOfDamgeDirectionIndicators;
	I = 0;
	J0x261:

	// End:0x326 Loop:True
	if(I < c_MaxNumOfDamgeDirectionIndicators)
	{
		c_DamageDirectionData[I].FadeTime = 0.00;
		c_DamageDirectionData[I].FadeValue = 0.00;
		c_DamageDirectionData[I].MatConstant = new (self) class'MaterialInstanceConstant';
		// End:0x31c Loop:False
		if(c_DamageDirectionData[I].MatConstant != none && (c_DamageDirectionParentMaterial != none))
		{
			c_DamageDirectionData[I].MatConstant.SetParent(c_DamageDirectionParentMaterial);
		}
		++ I;
		// This is an implied JumpToken; Continue!
		goto J0x261;
	}
	c_BodyUnderAttackData.FadeTime = 0.00;
	c_BodyUnderAttackData.FadeValue = 0.00;
	c_BodyUnderAttackData.MatConstant = new (self) class'MaterialInstanceConstant';
	// End:0x3b4 Loop:False
	if(c_BodyUnderAttackData.MatConstant != none && (c_BodyUnderAttackParentMaterial != none))
	{
		c_BodyUnderAttackData.MatConstant.SetParent(c_BodyUnderAttackParentMaterial);
	}
	c_BeingLockedData.FadeTime = 0.00;
	c_BeingLockedData.FadeValue = 0.00;
	c_BeingLockedData.MatConstant = new (self) class'MaterialInstanceConstant';
	// End:0x442 Loop:False
	if(c_BeingLockedData.MatConstant != none && (c_BeingLockedParentMaterial != none))
	{
		c_BeingLockedData.MatConstant.SetParent(c_BeingLockedParentMaterial);
	}
	c_BeingTargetedData.FadeTime = 0.00;
	c_BeingTargetedData.FadeValue = 0.00;
	c_BeingTargetedData.MatConstant = new (self) class'MaterialInstanceConstant';
	// End:0x4f9 Loop:False
	if(c_BeingTargetedData.MatConstant != none && (c_BeingTargetedParentMaterial != none))
	{
		c_BeingTargetedData.MatConstant.SetParent(c_BeingTargetedParentMaterial);
		c_BeingTargetedData.MatConstant.SetScalarParameterValue(c_DamageStateName, 1.00);
	}
	c_BeingDetectedData.FadeTime = 0.00;
	c_BeingDetectedData.FadeValue = 0.00;
	c_BeingDetectedData.MatConstant = new (self) class'MaterialInstanceConstant';
	// End:0x5b0 Loop:False
	if(c_BeingDetectedData.MatConstant != none && (c_BeingDetectedParentMaterial != none))
	{
		c_BeingDetectedData.MatConstant.SetParent(c_BeingDetectedParentMaterial);
		c_BeingDetectedData.MatConstant.SetScalarParameterValue(c_DamageStateName, 1.00);
	}
	c_InBombRangeData.FadeTime = 0.00;
	c_InBombRangeData.FadeValue = 0.00;
	c_InBombRangeData.MatConstant = new (self) class'MaterialInstanceConstant';
	// End:0x63e Loop:False
	if(c_InBombRangeData.MatConstant != none && (c_InBombRangeParentMaterial != none))
	{
		c_InBombRangeData.MatConstant.SetParent(c_InBombRangeParentMaterial);
	}
	c_ActiveCombatData.FadeTime = 0.00;
	c_ActiveCombatData.FadeValue = 0.00;
	c_ActiveCombatData.MatConstant = new (self) class'MaterialInstanceConstant';
	// End:0x6cc Loop:False
	if(c_ActiveCombatData.MatConstant != none && (c_ActiveCombatParentMaterial != none))
	{
		c_ActiveCombatData.MatConstant.SetParent(c_ActiveCombatParentMaterial);
	}
	InitializeTgUIScenes();
	NativePostBeginPlay();
}

native function InitializeTgUIScenes();
native function UIScene TriggerOpenTgUIScene(UIScene Scene);
native function bool TriggerCloseTgUIScene(UIScene Scene);
native function Object GetTgUISceneDriver(UIScene Scene);
native function PostRenderSceneTooltips();
native function PostRenderScenes();
event PostRender()
{
	local UISceneClient SceneClient;

	c_ResolutionScale = Canvas.ClipY / float(768);
	SceneClient = class'UIRoot'.static.GetSceneClient();
	PostRenderScenes();
	// End:0x6d Loop:False
	if(SceneClient != none && (SceneClient.IsUIActive(8)))
	{
		PostRenderSceneTooltips();
	}
	// End:0x77
	else
	{
		DrawActorOverlays();
	}
	UpdateDamage();
	super(HUD).PostRender();
}

function DisplayHit(Vector HitDir, int Damage, class<DamageType> DamageType)
{
	PlayHitEffect(float(Damage), HitDir);
}

function DisplayBodyUnderAttack(int Damage)
{
	local float iDam;

	// End:0x5e Loop:False
	if(c_BodyUnderAttackData.FadeTime > float(0))
	{
		c_BodyUnderAttackData.MatConstant.GetScalarParameterValue(c_DamageDirectionDamageAmountName, iDam);
		iDam += float(Damage);
		Clamp(int(iDam), 0, 250);
	}
	// End:0x6b
	else
	{
		iDam = float(Damage);
	}
	c_BodyUnderAttackData.FadeValue = 1.00;
	c_BodyUnderAttackData.FadeTime = c_BodyUnderAttackFadeTime;
	c_BodyUnderAttackData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, 1.00);
	c_BodyUnderAttackData.MatConstant.SetScalarParameterValue(c_DamageDirectionDamageAmountName, iDam);
}

function CancelBodyUnderAttack()
{
	c_BodyUnderAttackData.FadeTime = 0.00;
}

function DisplayBeingLocked()
{
	c_BeingLockedData.MatConstant.SetScalarParameterValue(c_DamageStateName, 1.00);
	c_BeingLockedData.FadeValue = 1.00;
	c_BeingLockedData.FadeTime = c_BeingLockedFadeTime;
	c_BeingLockedData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, 1.00);
}

function CancelBeingLocked()
{
	c_BeingLockedData.FadeTime = 0.00;
}

function DisplayInBombRange()
{
	c_InBombRangeData.MatConstant.SetScalarParameterValue(c_DamageStateName, 1.00);
	c_InBombRangeData.FadeValue = 1.00;
	c_InBombRangeData.FadeTime = c_BeingLockedFadeTime;
	c_InBombRangeData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, 1.00);
}

function CancelInBombRange()
{
	c_InBombRangeData.FadeTime = 0.00;
}

function DisplayBeingTargeted()
{
	c_BeingTargetedData.MatConstant.SetScalarParameterValue(c_DamageStateName, 1.00);
	c_BeingTargetedData.FadeValue = 1.00;
	c_BeingTargetedData.FadeTime = c_BeingTargetedFadeTime;
	c_BeingTargetedData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, 1.00);
}

function CancelBeingTargeted()
{
	c_BeingTargetedData.FadeTime = 0.00;
}

noexport function DisplayBeingDetected(optional int nStateParam)
{
	nStateParam = 1;
	c_BeingDetectedData.MatConstant.SetScalarParameterValue(c_DamageStateName, float(nStateParam));
	c_BeingDetectedData.FadeValue = 1.00;
	c_BeingDetectedData.FadeTime = c_BeingDetectedFadeTime;
	c_BeingDetectedData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, 1.00);
}

function CancelBeingDetected()
{
	c_BeingDetectedData.FadeTime = 0.00;
}

noexport function DisplayActiveCombat(optional int nStateParam)
{
	nStateParam = 1;
	c_ActiveCombatData.MatConstant.SetScalarParameterValue(c_DamageStateName, float(nStateParam));
	c_ActiveCombatData.FadeValue = 1.00;
	c_ActiveCombatData.FadeTime = c_ActiveCombatFadeTime;
	c_ActiveCombatData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, 1.00);
}

function CancelActiveCombat()
{
	c_ActiveCombatData.FadeTime = 0.00;
}

simulated function DisplayDebug(HUD HUD, out float out_YL, out float out_YPos);
event OpenGUIItems()
{
	ShowDeviceBarHUD(true);
}

event CloseGUIItems()
{
	ShowDeviceBarHUD(false);
	PlayZoomEffect(false);
}

function DisplayConsoleMessages();
native noexport function AddConsoleMessage(string M, class<LocalMessage> InMessageClass, PlayerReplicationInfo PRI, optional float Lifetime);
function AddNewKilledTarget(string KilledName, string KillerName, bool KillerWasPlayer)
{
	// End:0x50 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_KillDisplay != none))
	{
		m_PrimaryHUD.m_KillDisplay.AddNewKilledTarget(KilledName, KillerName, KillerWasPlayer);
	}
	return;
}

function AddNewDisplayMessage(string sMessage)
{
	// End:0x45 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_KillDisplay != none))
	{
		m_PrimaryHUD.m_KillDisplay.AddNewDisplayMessage(sMessage);
	}
	return;
}

simulated function DrawTextPanel()
{
	local int TopPos, LeftPos;

	LeftPos = 5;
	TopPos = int(Canvas.ClipY - float(m_nTextPanelHeight + 85));
	Canvas.SetDrawColor(150, 150, 150, 0);
	Canvas.SetPos(float(LeftPos - 2), float(TopPos - 2));
	Canvas.DrawTile(m_ColorTexture, float(m_nTextPanelWidth + 4), float(m_nTextPanelHeight + 4), 15.00, 15.00, 3.00, 3.00);
	Canvas.SetDrawColor(150, 150, 150, 0);
	Canvas.SetPos(float(LeftPos), float(TopPos));
	Canvas.DrawTile(m_ColorTexture, float(m_nTextPanelWidth), float(m_nTextPanelHeight), 15.00, 15.00, 1.00, 1.00);
}

simulated function DrawHealth()
{
	local float LeftPos, TopPos, Width, Height;
	local int H;

	Width = 190.00;
	Height = 10.00;
	LeftPos = 30.00;
	TopPos = Canvas.ClipY;
	Canvas.SetDrawColor(50, 50, 50, 140);
	Canvas.SetPos(LeftPos - float(1), TopPos - float(1));
	Canvas.DrawTile(m_CutoutTexture, Width + float(2), Height + float(2), 0.00, 0.00, 256.00, 256.00);
	Canvas.SetDrawColor(255, 255, 255, 255);
	Canvas.SetPos(LeftPos - float(25), TopPos - float(4));
	Canvas.DrawTile(m_HudTexture, 16.00, 16.00, 78.00, 169.00, 42.00, 43.00);
	H = m_PawnOwner.Health;
	Width = Width * float(H) / float(100);
	Canvas.SetPos(LeftPos, TopPos);
	// End:0x192 Loop:False
	if(H < 25)
	{
		Canvas.SetDrawColor(255, 0, 0, 255);
	}
	// End:0x1d1
	else
	{
		// End:0x1b9 Loop:False
		if(H < 50)
		{
			Canvas.SetDrawColor(255, 255, 0, 255);
		}
		// End:0x1d1
		else
		{
			Canvas.SetDrawColor(0, 255, 0, 255);
		}
	}
	Canvas.DrawTile(m_ColorTexture, Width, Height, 1.00, 1.00, 1.00, 1.00);
}

function DrawHoverText(string Str)
{
	Canvas.SetPos(Canvas.ClipX - float(120), Canvas.ClipY - float(33));
	Canvas.SetPos(Canvas.ClipX, Canvas.ClipY - float(33));
	Canvas.SetDrawColor(0, 0, 0, 255);
	Canvas.DrawText(Str, false);
}

function DrawTargetText(string Str)
{
	Canvas.SetPos(Canvas.ClipX / float(2) + float(280), Canvas.ClipY - float(33));
	Canvas.SetPos(Canvas.ClipX / float(2), Canvas.ClipY - float(33));
	Canvas.SetDrawColor(0, 0, 0, 255);
	Canvas.DrawText("Target: " $ Str, false);
}

simulated function DrawSpectatorHud()
{
	local string A, B;
	local float XL, YL, X, Y, W, H;

	Canvas.Font = class'Engine'.static.GetSmallFont();
	A = "Free Camera";
	Canvas.StrLen(A, XL, YL);
	W = XL + float(10);
	H = YL;
	X = Canvas.ClipX - W - float(20);
	Y = Canvas.ClipY - H - float(6);
	Canvas.SetPos(X - float(1), Y - float(1));
	Canvas.SetDrawColor(0, 0, 0, 255);
	Canvas.DrawText(A);
	B = "Viewing...";
	Canvas.StrLen(B, XL, YL);
	Canvas.SetPos(X - float(1), Y - YL);
	Canvas.DrawText(B);
}

simulated function DrawInt(int Value, float X, float Y, float Scale)
{
	local string S;
	local int I, V;
	local DigitData D;

	S = string(Value);
	I = 0;
	J0x14:

	// End:0x11e Loop:True
	if(I < Len(S))
	{
		V = int(Mid(S, I, 1));
		D = m_DigitInfo[V];
		Canvas.SetPos(X, Y);
		Canvas.DrawTile(m_HudTexture, float(D.Width) * Scale, float(D.Height) * Scale, float(D.LeftPos), float(D.TopPos), float(D.Width), float(D.Height));
		X += float(D.Width) * Scale;
		++ I;
		// This is an implied JumpToken; Continue!
		goto J0x14;
	}
}

simulated function SizeInt(int Value, out float XL, out float YL, float Scale)
{
	local string S;
	local int I, V, M;
	local DigitData D;

	S = string(Value);
	M = 0;
	I = 0;
	J0x1b:

	// End:0xac Loop:True
	if(I < Len(S))
	{
		V = int(Mid(S, I, 1));
		D = m_DigitInfo[V];
		XL += float(D.Width) * Scale;
		// End:0xa2 Loop:False
		if(D.Height > M)
		{
			M = D.Height;
		}
		++ I;
		// This is an implied JumpToken; Continue!
		goto J0x1b;
	}
	YL = float(M) * Scale;
}

function bool InRange(float X, float lower, float upper)
{
	return X >= lower && (X <= upper);
}

final function float ScaleX(float X)
{
	return X * RatioX;
}

final function float ScaleY(float Y)
{
	return Y * RatioY;
}

function string FormatTime()
{
	local int Minutes, Hours, Seconds;
	local string Result;

	// End:0x41 Loop:False
	if(WorldInfo.GRI.TimeLimit != 0)
	{
		Seconds = WorldInfo.GRI.RemainingTime;
	}
	// End:0x60
	else
	{
		Seconds = WorldInfo.GRI.ElapsedTime;
	}
	// End:0xa6 Loop:False
	if(Seconds > 3600)
	{
		Hours = Seconds / 3600;
		Seconds -= Hours * 3600;
		Result = string(Hours) $ ":";
	}
	Minutes = Seconds / 60;
	Seconds -= Minutes * 60;
	// End:0xff Loop:False
	if(Minutes < 10)
	{
		// End:0xef Loop:False
		if(Hours == 0)
		{
			Result = Result $ " ";
		}
		// End:0xff
		else
		{
			Result = Result $ "0";
		}
	}
	Result = Result $ string(Minutes) $ ":";
	// End:0x134 Loop:False
	if(Seconds < 10)
	{
		Result = Result $ "0";
	}
	Result = Result $ string(Seconds);
	return Result;
}

event float GetCurrentDeviceAccuracy()
{
	local TgPlayerController PC;
	local TgDevice Dev;
	local float Accuracy;

	Accuracy = 0.00;
	PC = TgPlayerController(PlayerOwner);
	// End:0xc3 Loop:False
	if(PC != none && (PC.Pawn != none) && (PC.Pawn.Weapon != none))
	{
		Dev = TgDevice(PC.Pawn.Weapon);
		// End:0xc3 Loop:False
		if(Dev != none)
		{
			Accuracy = Dev.m_FireMode[Dev.CurrentFireMode].GetAccuracy();
		}
	}
	return Accuracy;
}

event float GetAmountCurrentlyOffOfTargetAccuracy()
{
	local TgPlayerController PC;
	local TgDevice Dev;
	local float Delta;

	Delta = 0.00;
	PC = TgPlayerController(PlayerOwner);
	// End:0x104 Loop:False
	if(PC != none && (PC.Pawn != none) && (PC.Pawn.Weapon != none))
	{
		Dev = TgDevice(PC.Pawn.Weapon);
		// End:0x104 Loop:False
		if(Dev != none && (Dev.CurrentFireMode >= 0))
		{
			// End:0x104 Loop:False
			if(Dev.m_FireMode[Dev.CurrentFireMode].m_bRequireAimMode == true)
			{
				Delta = Dev.AmountCurrentlyOffOfTargetAccuracy(Dev.CurrentFireMode);
			}
		}
	}
	return Delta;
}

function string HUDLocalGetBind(PlayerInput Input, name BindName)
{
	local int BindIndex;

	// End:0x81 Loop:False
	if(Input != none)
	{
		BindIndex = 0;
		J0x12:

		// End:0x81 Loop:True
		if(BindIndex < Input.Bindings.Length)
		{
			// End:0x77 Loop:False
			if(Input.Bindings[BindIndex].Name == BindName)
			{
				return Input.Bindings[BindIndex].Command;
			}
			++ BindIndex;
			// This is an implied JumpToken; Continue!
			goto J0x12;
		}
	}
	return "";
}

function name GetInputKeyForCommand(PlayerInput Input, string CommandName)
{
	local int BindIndex;

	// End:0x81 Loop:False
	if(Input != none)
	{
		BindIndex = 0;
		J0x12:

		// End:0x81 Loop:True
		if(BindIndex < Input.Bindings.Length)
		{
			// End:0x77 Loop:False
			if(Input.Bindings[BindIndex].Command == CommandName)
			{
				return Input.Bindings[BindIndex].Name;
			}
			++ BindIndex;
			// This is an implied JumpToken; Continue!
			goto J0x12;
		}
	}
	return 'None';
}

exec function ShowDeviceBarHUD(bool Show)
{
	// End:0x7f Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_bLoaded != Show))
	{
		// End:0x5f Loop:False
		if(Show == true)
		{
			m_ChatUI.OpenTgUIScene();
			m_PrimaryHUD.OpenTgUIScene();
		}
		// End:0x7f
		else
		{
			m_ChatUI.CloseTgUIScene();
			m_PrimaryHUD.CloseTgUIScene();
		}
	}
}

exec function TestSetHexBackground(int nResourceId)
{
	local TgUICampaignMenu_HexMap hexmap;

	// End:0xc5 Loop:False
	if(m_UISceneManager != none)
	{
		hexmap = TgUICampaignMenu_HexMap(m_UISceneManager.GetSceneDriver('TgUICampaignMenu_HexMap', false));
		// End:0xc5 Loop:False
		if(hexmap != none && (hexmap.m_bLoaded))
		{
			// End:0xc5 Loop:False
			if(hexmap.m_pHexWidget != none && (hexmap.m_pHexWidget.m_bPrimsInitialized))
			{
				hexmap.m_pHexWidget.m_nBackgroundResId = nResourceId;
				hexmap.m_pHexWidget.UpdateBackground();
			}
		}
	}
}

exec function OpenHexLeaderboard()
{
	// End:0x24 Loop:False
	if(m_MainMenu != none)
	{
		m_MainMenu.OpenManagedScene(39, true, true);
	}
	return;
}

exec function OpenHexMap()
{
	// End:0x24 Loop:False
	if(m_MainMenu != none)
	{
		m_MainMenu.OpenManagedScene(36, true, true);
	}
	return;
}

exec function OpenCombatAlerts()
{
	// End:0x24 Loop:False
	if(m_MainMenu != none)
	{
		m_MainMenu.OpenManagedScene(37, true, true);
	}
	return;
}

noexport event SelectCampaignTab(optional TgUICampaignMenu.TG_CAMPAIGN_TABS Tab)
{
	local TgUIMainMenu.eMenuFunctions menuFunc;

	Tab = 0;
	// End:0x7a Loop:False
	if(m_MainMenu != none)
	{
		// BlockSize:1
		switch(Tab)
		{
			// End:0x29
			case 4:
				menuFunc = 39;
				// End:0x5c
				break;
			// End:0x39
			case 3:
				menuFunc = 38;
				// End:0x5c
				break;
			// End:0x49
			case 2:
				menuFunc = 37;
				// End:0x5c
				break;
			// End:0x4e
			case 1:
			// End:0xffff
			default:
				menuFunc = 36;
				// End:0x5c Break;
				break;
		}
		m_MainMenu.OpenManagedScene(menuFunc, false);
	}
	return;
}

exec function OpenHexAuction(int nHexId)
{
	// End:0x24 Loop:False
	if(m_MainMenu != none)
	{
		m_MainMenu.OpenManagedScene(33, true, true);
	}
}

event TgUIInventoryPopup OpenFilteredInventoryPopup(TgUISceneDriver ParentScene)
{
	local TgUIInventoryPopup inventoryPopup;

	// End:0x5d Loop:False
	if(m_UISceneManager != none)
	{
		inventoryPopup = TgUIInventoryPopup(m_UISceneManager.OpenSceneDriver('TgUIInventoryPopup'));
		// End:0x5d Loop:False
		if(inventoryPopup != none)
		{
			inventoryPopup.SetParentUIScene(ParentScene);
			return inventoryPopup;
		}
	}
	return none;
}

event TgUIProductionPopup OpenProductionPopup(TgUISceneDriver ParentScene)
{
	local TgUIProductionPopup productionPopup;

	// End:0x5d Loop:False
	if(m_UISceneManager != none)
	{
		productionPopup = TgUIProductionPopup(m_UISceneManager.OpenSceneDriver('TgUIProductionPopup'));
		// End:0x5d Loop:False
		if(productionPopup != none)
		{
			productionPopup.SetParentUIScene(ParentScene);
			return productionPopup;
		}
	}
	return none;
}

exec function OpenAchievementsNew()
{
	ToggleManagedSceneByID(54);
	return;
}

exec function OpenInstanceSelect()
{
	ToggleManagedSceneByID(30);
	return;
}

exec function OpenInventoryScreen()
{
	ToggleManagedSceneByID(52);
	return;
}

exec function OpenTeamDetailScreen()
{
	ToggleManagedSceneByID(7);
	return;
}

exec function OpenCharacterStatsScreen()
{
	ToggleManagedSceneByID(46);
	return;
}

exec function OpenCharacterSkillScreen()
{
	ToggleManagedSceneByID(51);
	return;
}

exec function OpenNavScreen()
{
	ToggleManagedSceneByID(28);
	return;
}

exec function OpenAgencyMenu()
{
	SelectAgencyTab(0);
}

native exec function MissionLog();
native exec function ZoneMap();
noexport event SelectAgencyTab(optional TgUIAgencyMenu.TG_AGENCY_TABS Tab)
{
	local TgUIMainMenu.eMenuFunctions menuFunc;

	Tab = 0;
	// End:0xef Loop:False
	if(m_MainMenu != none && (m_AgencyData != none))
	{
		// End:0x3c Loop:False
		if(m_AgencyData.m_bNoAgency)
		{
			menuFunc = 13;
		}
		// End:0xd1
		else
		{
			// BlockSize:1
			switch(Tab)
			{
				// End:0x54
				case 3:
					menuFunc = 11;
					// End:0xd1
					break;
				// End:0x64
				case 4:
					menuFunc = 12;
					// End:0xd1
					break;
				// End:0x74
				case 6:
					menuFunc = 14;
					// End:0xd1
					break;
				// End:0x84
				case 7:
					menuFunc = 15;
					// End:0xd1
					break;
				// End:0x94
				case 9:
					menuFunc = 34;
					// End:0xd1
					break;
				// End:0xa4
				case 8:
					menuFunc = 16;
					// End:0xd1
					break;
				// End:0xb4
				case 10:
					menuFunc = 43;
					// End:0xd1
					break;
				// End:0xb9
				case 0:
				// End:0xbe
				case 1:
				// End:0xc3
				case 5:
				// End:0xffff
				default:
					menuFunc = 10;
					// End:0xd1 Break;
					break;
				}
		}
		m_MainMenu.OpenManagedScene(menuFunc, false);
	}
	return;
}

noexport event TgUISceneDriver SelectAgentTab(optional TgUIAgentProfile.TG_AGENT_TABS Tab, optional TgPawn_Character InspectedPawn)
{
	local TgUIMainMenu.eMenuFunctions menuFunc;
	local name sceneName;
	local TgUIAgentProfile ag;
	local bool bInspectorMode;

	Tab = 0;	
	bInspectorMode = InspectedPawn != none;
	sceneName = 'None';
	// End:0x16e Loop:False
	if(m_MainMenu != none)
	{
		// BlockSize:1
		switch(Tab)
		{
			// End:0x57
			case 1:
				menuFunc = 45;
				sceneName = 'TgUIAgentProfile_Equip';
				// End:0xb4
				break;
			// End:0x67
			case 2:
				menuFunc = 51;
				// End:0xb4
				break;
			// End:0x86
			case 3:
				menuFunc = 46;
				sceneName = 'TgUIAgentProfile_Stat';
				// End:0xb4
				break;
			// End:0x96
			case 4:
				menuFunc = 52;
				// End:0xb4
				break;
			// End:0xa6
			case 5:
				menuFunc = 54;
				// End:0xb4
				break;
			// End:0xffff
			default:
				menuFunc = 45;
				// End:0xb4 Break;
				break;
		}
		// End:0x110 Loop:False
		if(sceneName != 'None')
		{
			ag = TgUIAgentProfile(m_UISceneManager.GetSceneDriver(sceneName, true));
			// End:0x110 Loop:False
			if(ag != none)
			{
				ag.SetInspectedPawn(InspectedPawn);
			}
		}
		// End:0x159 Loop:False
		if(!bInspectorMode || (bInspectorMode && (sceneName != 'None')))
		{
			m_MainMenu.OpenManagedScene(menuFunc, false);
		}
		return m_MainMenu.GetOpenManagedScene();
	}
	return none;
}

event OpenPlayerSearchPrepopulated(string sPlayerName, string sAgencyName, string sAllianceName)
{
	local TgUITeamMenu teamMenu;

	// End:0x71 Loop:False
	if(m_MainMenu != none)
	{
		m_MainMenu.OpenManagedScene(6, false);
		teamMenu = TgUITeamMenu(m_MainMenu.GetOpenManagedScene());
		// End:0x71 Loop:False
		if(teamMenu != none)
		{
			teamMenu.PrepopulatedSearch(sPlayerName, sAgencyName, sAllianceName);
		}
	}
	return;
}

event OpenPlayerSearchPrepopulatedById(int nPlayerId)
{
	local TgUITeamMenu teamMenu;

	// End:0x67 Loop:False
	if(m_MainMenu != none)
	{
		m_MainMenu.OpenManagedScene(6, false);
		teamMenu = TgUITeamMenu(m_MainMenu.GetOpenManagedScene());
		// End:0x67 Loop:False
		if(teamMenu != none)
		{
			teamMenu.PrepopulatedSearchById(nPlayerId);
		}
	}
	return;
}

event bool MainMenuDisplayed()
{
	local TgUISceneDriver drv;
	local bool bDisplayed;

	bDisplayed = false;
	// End:0x73 Loop:False
	if(m_MainMenu != none)
	{
		// End:0x31 Loop:False
		if(m_MainMenu.m_bLoaded)
		{
			bDisplayed = true;
		}
		// End:0x73
		else
		{
			drv = m_MainMenu.GetOpenManagedScene();
			// End:0x73 Loop:False
			if(drv != none && (drv.m_bLoaded))
			{
				bDisplayed = true;
			}
		}
	}
	return bDisplayed;
}

exec function OpenAuctionScreen()
{
	ToggleManagedSceneByID(23);
	return;
}

exec function OpenMailScreen()
{
	ToggleManagedSceneByID(26);
	return;
}

exec function OpenAgencyDirectory()
{
	ToggleManagedSceneByID(35);
	return;
}

exec function OpenZoneMissions()
{
	ToggleManagedSceneByID(41);
	return;
}

exec function OpenLFGScreen()
{
	ToggleManagedSceneByID(27);
	return;
}

native exec function ShowGametypeInfo();
noexport exec function OpenAgentScreen(optional bool bIsTutorial)
{
	local TgPlayerController PC;
	local TgPawn localPawn;
	local TgUIAgentProfile_Equip profilescene;

	bIsTutorial = false;
	PC = TgPlayerController(Owner);
	localPawn = TgPawn(PC.Pawn);
	// End:0x4c Loop:False
	if(localPawn != none)
	{
		localPawn.r_bEnableEquip = true;
	}
	// End:0x9a Loop:False
	if(m_MainMenu != none)
	{
		profilescene = TgUIAgentProfile_Equip(ToggleManagedSceneByID(45));
		// End:0x9a Loop:False
		if(profilescene != none && (bIsTutorial))
		{
			profilescene.BeginTutorial();
		}
	}
	return;
}

exec function OpenItemModScreen()
{
	ToggleManagedSceneByID(48);
	return;
}

exec function OpenInventoryLog()
{
	ToggleManagedSceneByID(43);
	return;
}

exec function OpenSkillScreen()
{
	local TgPlayerController PC;
	local TgPawn localPawn;

	PC = TgPlayerController(Owner);
	localPawn = TgPawn(PC.Pawn);
	// End:0x47 Loop:False
	if(localPawn != none)
	{
		localPawn.r_bEnableSkills = true;
	}
	// End:0x5f Loop:False
	if(m_MainMenu != none)
	{
		ToggleManagedSceneByID(51);
	}
	return;
}

exec event TgUISceneDriver ToggleMainMenuScreen()
{
	// End:0x47 Loop:False
	if(m_MainMenu != none)
	{
		// End:0x37 Loop:False
		if(!m_MainMenu.m_bLoaded)
		{
			m_MainMenu.OpenTgUIScene();
		}
		// End:0x47
		else
		{
			m_MainMenu.CloseTgUIScene();
		}
	}
	return m_MainMenu;
}

event TgUIPreviewScreen ViewItemPreview(TgInventoryObject Item)
{
	local TgUIPreviewScreen previewPopup;

	// End:0x57 Loop:False
	if(m_UISceneManager != none)
	{
		previewPopup = TgUIPreviewScreen(m_UISceneManager.OpenSceneDriver('TgUIPreviewScreen'));
		// End:0x57 Loop:False
		if(previewPopup != none)
		{
			previewPopup.SetPaperDollPreviewItem(Item);
		}
	}
	return previewPopup;
}

event CreateConfirmPopup(string Message, Function callbackPtr)
{
	local TgUIConfirmPopup confirmPopup;

	// End:0x5c Loop:False
	if(m_UISceneManager != none)
	{
		confirmPopup = TgUIConfirmPopup(m_UISceneManager.OpenSceneDriver('TgUIConfirmPopup'));
		// End:0x5c Loop:False
		if(confirmPopup != none)
		{
			confirmPopup.SetConfirmTextAndCallback(Message, callbackPtr);
		}
	}
	return;
}

noexport event CloseConfirmPopup(Function callbackPtr, optional bool bTellGameClient)
{
	local TgUIConfirmPopup confirmPopup;

	bTellGameClient = true;
	// End:0x78 Loop:False
	if(m_UISceneManager != none)
	{
		confirmPopup = TgUIConfirmPopup(m_UISceneManager.GetSceneDriver('TgUIConfirmPopup', false));
		// End:0x78 Loop:False
		if(confirmPopup != none && (confirmPopup.m_bLoaded))
		{
			confirmPopup.RemoveConfirmPopupByCallback(callbackPtr, bTellGameClient);
		}
	}
	return;
}

function UpdateScoreBoard(bool bPlayerVictor, bool bTie)
{
	c_StatsData.SetGameOver(true, bPlayerVictor);
}

function ShowEndMissionScreen(bool MissionVictor, bool PlayerVictor, bool bTie)
{
	local TgUIEndMissionScreen endMissionScene;

	// End:0xd3 Loop:False
	if(m_UISceneManager != none)
	{
		// End:0x51 Loop:False
		if(m_MainMenu != none)
		{
			// End:0x3c Loop:False
			if(m_MainMenu.m_bLoaded)
			{
				m_MainMenu.CloseTgUIScene();
			}
			// End:0x51
			else
			{
				m_MainMenu.CloseManagedScene();
			}
		}
		endMissionScene = TgUIEndMissionScreen(m_UISceneManager.GetSceneDriver('TgUIEndMissionScreen', true));
		// End:0xd3 Loop:False
		if(endMissionScene != none)
		{
			endMissionScene.OpenTgUIScene();
			endMissionScene.SetLabelTextAndColor(MissionVictor, PlayerVictor, bTie);
			endMissionScene.BeginFadeIn();
		}
	}
	return;
}

function ShowQuestEndMissionScene(bool MissionVictor, bool PlayerVictor, bool bTie)
{
	local TgUIEndQuestMission endMissionScene;

	// End:0xd3 Loop:False
	if(m_UISceneManager != none)
	{
		// End:0x51 Loop:False
		if(m_MainMenu != none)
		{
			// End:0x3c Loop:False
			if(m_MainMenu.m_bLoaded)
			{
				m_MainMenu.CloseTgUIScene();
			}
			// End:0x51
			else
			{
				m_MainMenu.CloseManagedScene();
			}
		}
		endMissionScene = TgUIEndQuestMission(m_UISceneManager.GetSceneDriver('TgUIEndQuestMission', true));
		// End:0xd3 Loop:False
		if(endMissionScene != none)
		{
			endMissionScene.OpenTgUIScene();
			endMissionScene.SetLabelTextAndColor(MissionVictor, PlayerVictor, bTie);
			endMissionScene.BeginFadeIn();
		}
	}
	return;
}

event ShowEndRaidScreen(bool bAttackerWon)
{
	local TgUIEndRaidScreen endRaidScene;
	local TgUIScoreboard scoreScene;

	// End:0x123 Loop:False
	if(m_UISceneManager != none)
	{
		scoreScene = TgUIScoreboard(m_UISceneManager.GetSceneDriver('TgUIScoreboard', false));
		// End:0x64 Loop:False
		if(scoreScene != none && (scoreScene.m_bLoaded))
		{
			scoreScene.CloseTgUIScene();
		}
		// End:0xaa Loop:False
		if(m_MainMenu != none)
		{
			// End:0x95 Loop:False
			if(m_MainMenu.m_bLoaded)
			{
				m_MainMenu.CloseTgUIScene();
			}
			// End:0xaa
			else
			{
				m_MainMenu.CloseManagedScene();
			}
		}
		endRaidScene = TgUIEndRaidScreen(m_UISceneManager.GetSceneDriver('TgUIEndRaidScreen', true));
		// End:0x123 Loop:False
		if(endRaidScene != none && (!endRaidScene.m_bLoaded))
		{
			endRaidScene.OpenTgUIScene();
			endRaidScene.SetLabelTextAndColor(bAttackerWon);
		}
	}
	return;
}

function bool IsForValidPlayer()
{
	local TgPlayerController PC;
	local TgPawn localPawn;

	PC = TgPlayerController(Owner);
	localPawn = TgPawn(PC.Pawn);
	return localPawn != none && (!localPawn.IsHacked());
}

exec function LiveTeamPerfStats()
{
	local TgPlayerController PC;

	PC = TgPlayerController(Owner);
	// End:0x93 Loop:False
	if(PC != none)
	{
		PC.ConsoleCommand("stat fps");
		PC.ConsoleCommand("stat net");
		PC.ConsoleCommand("OutputRelevantActors");
	}
}

exec event OpenDevMenu()
{
	local TgUIDevInGame devScr;

	// End:0x63 Loop:False
	if(m_UISceneManager != none)
	{
		devScr = TgUIDevInGame(m_UISceneManager.GetSceneDriver('TgUIDevInGame', true));
		// End:0x63 Loop:False
		if(devScr != none)
		{
			devScr.CloseTgUIScene();
			devScr.OpenTgUIScene();
		}
	}
}

native exec function TgFxLightsOn(bool bOn);
noexport event UIScene OpenIntroScene(optional float FadeTime, optional float TotalTime)
{
	local TgUIIntroScene introScene;
	local UIScene OpenedScene;

	FadeTime = 0.00;
	TotalTime = 0.00;
	// End:0xaf Loop:False
	if(m_UISceneManager != none)
	{
		introScene = TgUIIntroScene(m_UISceneManager.GetSceneDriver('TgUIIntroScene', true));
		// End:0xaf Loop:False
		if(introScene != none && (!introScene.m_bLoaded))
		{
			introScene.OpenTgUIScene();
			introScene.SetIntroParams(FadeTime, TotalTime);
			OpenedScene = introScene.m_UIScene;
		}
	}
	return OpenedScene;
}

event CheckLevelUnlocks(bool bIsTutorial)
{
	local TgUIUnlockScene unlockScene;

	// End:0x59 Loop:False
	if(m_UISceneManager != none)
	{
		unlockScene = TgUIUnlockScene(m_UISceneManager.GetSceneDriver('TgUIUnlockScene', true));
		// End:0x59 Loop:False
		if(unlockScene != none)
		{
			unlockScene.CheckLevelUnlocks(bIsTutorial);
		}
	}
	return;
}

noexport event ShowRaidTab(optional int nTab)
{
	nTab = 20;
	// End:0x2d Loop:False
	if(m_MainMenu != none)
	{
		m_MainMenu.OpenManagedScene(nTab, false);
	}
	return;
}

exec function ToggleTargetExtraInfo()
{
	m_bShowHUDTargetExtraInfo = !m_bShowHUDTargetExtraInfo;
}

function bool ShouldDrawPawnHUD()
{
	return m_bDrawPawnHUD;
}

exec function ToggleDrawPawnHUD()
{
	// End:0x17 Loop:False
	if(m_bDrawPawnHUD == true)
	{
		m_bDrawPawnHUD = false;
	}
	// End:0x1f
	else
	{
		m_bDrawPawnHUD = true;
	}
}

exec function ToggleDrawAllHUD()
{
	local TgPlayerController PC;
	local TgUIReleaseMenus relmenu;

	PC = TgPlayerController(Owner);
	// End:0x1d Loop:False
	if(PC == none)
	{
		return;
	}
	PC.ToggleScreenShotMode();
	// End:0x5c Loop:False
	if(m_PrimaryHUD.m_bLoaded)
	{
		m_PrimaryHUD.SetFade(false);
	}
	ToggleDrawPawnHUD();
	relmenu = GetActiveReleaseMenu();
	// End:0x9d Loop:False
	if(relmenu != none)
	{
		relmenu.ToggleHideScene(!bShowHUD);
	}
}

exec function bool SelectDeviceBarSlot(int Slot)
{
	// End:0x46 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_DeviceBar != none))
	{
		return m_PrimaryHUD.m_DeviceBar.SelectDeviceBarSlot(Slot);
	}
	return false;
}

exec function bool SelectDeviceBarType(TgGame.TgUIInvWidget.TG_WIDGET_SUBTYPES eType)
{
	// End:0x46 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_DeviceBar != none))
	{
		return m_PrimaryHUD.m_DeviceBar.SelectDeviceBarType(eType);
	}
	return false;
}

exec function bool UsePickupDevice()
{
	return SelectDeviceBarSlot(9);
}

simulated function UpdateSelectedDevice(TgDevice Dev)
{
	// End:0x45 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_DeviceBar != none))
	{
		m_PrimaryHUD.m_DeviceBar.UpdateSelectedDevice(Dev);
	}
}

exec function bool SelectNextDevice()
{
	// End:0x41 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_DeviceBar != none))
	{
		return m_PrimaryHUD.m_DeviceBar.SelectNextDevice();
	}
	return false;
}

exec function bool SelectPreviousDevice()
{
	// End:0x41 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_DeviceBar != none))
	{
		return m_PrimaryHUD.m_DeviceBar.SelectPreviousDevice();
	}
	return false;
}

exec function LogBreak(int I)
{
	// End:0x0b Loop:False
	if(I == 1)
	{
	}
	// End:0x16 Loop:False
	if(I == 0)
	{
	}
	// End:0x21 Loop:False
	if(I == 0)
	{
	}
	// End:0x2c Loop:False
	if(I == 1)
	{
	}
}

exec function RadarMapRotates(bool RotatingMapStyle)
{
	m_bRotatingRadarMap = RotatingMapStyle;
}

function PlayHitEffect(float Damage, Vector HitDir)
{
	local TgPawn LocalPlayer;
	local bool PlayerIsZoomed;

	// End:0x2a Loop:False
	if(Owner != none)
	{
		LocalPlayer = TgPawn(TgPlayerController(Owner).Pawn);
	}
	// End:0x4c Loop:False
	if(LocalPlayer != none)
	{
		PlayerIsZoomed = LocalPlayer.r_bAimingMode;
	}
	// End:0x11f Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_nEnableFullHitEffect == 2 || (PlayerIsZoomed && (m_PrimaryHUD.m_nEnableFullHitEffect == 1))))
	{
		// End:0x11f Loop:False
		if(m_HitMaterialEffect != none)
		{
			m_HitEffectFadeTime = default.m_HitEffectFadeTime * FClamp(Damage, 10.00, 50.00) / 50.00;
			m_HitEffectMaterialInstance.SetScalarParameterValue('SCAL_HitAmount', m_MaxHitEffectIntensity);
			m_HitEffectMaterialInstance.SetVectorParameterValue('VEC_HitColor', m_MaxHitEffectColor);
			m_HitMaterialEffect.bShowInGame = true;
			m_bFadeOutHitEffect = true;
		}
	}
}

function float CalcHitDirection(Vector HitDir)
{
	local Vector Loc;
	local Rotator Rot;
	local float DirOfHit;
	local Vector AxisX, AxisY, AxisZ, ShotDirection;
	local bool bIsInFront;
	local Vector2D AngularDist;
	local float PositionInQuadrant, Multiplier;

	PlayerOwner.GetPlayerViewPoint(Loc, Rot);
	GetAxes(Rot, AxisX, AxisY, AxisZ);
	ShotDirection = Normal(HitDir * -1.00);
	bIsInFront = GetAngularDistance(AngularDist, ShotDirection, AxisX, AxisY, AxisZ);
	GetAngularDegreesFromRadians(AngularDist);
	Multiplier = 0.25 / 90.00;
	PositionInQuadrant = Abs(AngularDist.X) * Multiplier;
	// End:0xe9 Loop:False
	if(bIsInFront)
	{
		DirOfHit = ((AngularDist.X > float(0)) ? PositionInQuadrant : float(-1) * PositionInQuadrant);
	}
	// End:0x121
	else
	{
		DirOfHit = ((AngularDist.X < float(0)) ? 0.50 + PositionInQuadrant : 0.50 - PositionInQuadrant);
	}
	return -1.00 * DirOfHit;
}

function UpdateDamage()
{
	local int I;

	I = 0;
	J0x07:

	// End:0xed Loop:True
	if(I < c_MaxNumOfDamgeDirectionIndicators)
	{
		// End:0xe3 Loop:False
		if(c_DamageDirectionData[I].FadeTime > float(0))
		{
			c_DamageDirectionData[I].FadeValue += float(0) - c_DamageDirectionData[I].FadeValue * RenderDelta / c_DamageDirectionData[I].FadeTime;
			c_DamageDirectionData[I].FadeTime -= RenderDelta;
			c_DamageDirectionData[I].MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, c_DamageDirectionData[I].FadeValue);
		}
		++ I;
		// This is an implied JumpToken; Continue!
		goto J0x07;
	}
	// End:0x190 Loop:False
	if(c_BodyUnderAttackData.FadeTime > float(0))
	{
		c_BodyUnderAttackData.FadeValue += float(0) - c_BodyUnderAttackData.FadeValue * RenderDelta / c_BodyUnderAttackData.FadeTime;
		c_BodyUnderAttackData.FadeTime -= RenderDelta;
		c_BodyUnderAttackData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, c_BodyUnderAttackData.FadeValue);
	}
	// End:0x233 Loop:False
	if(c_BeingLockedData.FadeTime > float(0))
	{
		c_BeingLockedData.FadeValue += float(0) - c_BeingLockedData.FadeValue * RenderDelta / c_BeingLockedData.FadeTime;
		c_BeingLockedData.FadeTime -= RenderDelta;
		c_BeingLockedData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, c_BeingLockedData.FadeValue);
	}
	// End:0x2d6 Loop:False
	if(c_InBombRangeData.FadeTime > float(0))
	{
		c_InBombRangeData.FadeValue += float(0) - c_InBombRangeData.FadeValue * RenderDelta / c_InBombRangeData.FadeTime;
		c_InBombRangeData.FadeTime -= RenderDelta;
		c_InBombRangeData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, c_InBombRangeData.FadeValue);
	}
	// End:0x379 Loop:False
	if(c_BeingTargetedData.FadeTime > float(0))
	{
		c_BeingTargetedData.FadeValue += float(0) - c_BeingTargetedData.FadeValue * RenderDelta / c_BeingTargetedData.FadeTime;
		c_BeingTargetedData.FadeTime -= RenderDelta;
		c_BeingTargetedData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, c_BeingTargetedData.FadeValue);
	}
	// End:0x41c Loop:False
	if(c_BeingDetectedData.FadeTime > float(0))
	{
		c_BeingDetectedData.FadeValue += float(0) - c_BeingDetectedData.FadeValue * RenderDelta / c_BeingDetectedData.FadeTime;
		c_BeingDetectedData.FadeTime -= RenderDelta;
		c_BeingDetectedData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, c_BeingDetectedData.FadeValue);
	}
	// End:0x4bf Loop:False
	if(c_ActiveCombatData.FadeTime > float(0))
	{
		c_ActiveCombatData.FadeValue += float(0) - c_ActiveCombatData.FadeValue * RenderDelta / c_ActiveCombatData.FadeTime;
		c_ActiveCombatData.FadeTime -= RenderDelta;
		c_ActiveCombatData.MatConstant.SetScalarParameterValue(c_DamageDirectionFadeParamName, c_ActiveCombatData.FadeValue);
	}
}

function DisplayDamage()
{
	local int I, XL, nIconSize, nTotalIcons;

	nIconSize = 51;
	I = 0;
	J0x0f:

	// End:0x14c Loop:True
	if(I < c_MaxNumOfDamgeDirectionIndicators)
	{
		// End:0x142 Loop:False
		if(c_DamageDirectionData[I].FadeTime > float(0))
		{
			Canvas.SetPos(Canvas.ClipX * 0.50 - float(384) * 0.50 * c_ResolutionScale, Canvas.ClipY * 0.50 - float(384) * 0.50 * c_ResolutionScale);
			Canvas.DrawMaterialTile(c_DamageDirectionData[I].MatConstant, 384.00 * c_ResolutionScale, 384.00 * c_ResolutionScale, 0.00, 0.00, 1.00, 1.00);
			c_DamageDirectionData[I].MatConstant.SetScalarParameterValue(c_DamageDirectionPositionalParamName, CalcHitDirection(c_DamageDirectionData[I].OriginalHitDirection));
		}
		++ I;
		// This is an implied JumpToken; Continue!
		goto J0x0f;
	}
	// End:0x217 Loop:False
	if(c_BodyUnderAttackData.FadeTime > float(0))
	{
		Canvas.SetPos(Canvas.ClipX * 0.50 - float(410) * 0.50 * c_ResolutionScale, Canvas.ClipY * 0.70 - float(102) * 0.50 * c_ResolutionScale);
		Canvas.DrawMaterialTile(c_BodyUnderAttackData.MatConstant, 410.00 * c_ResolutionScale, 102.00 * c_ResolutionScale, 0.00, 0.00, 1.00, 1.00);
	}
	nTotalIcons = 3;
	XL = int(Canvas.ClipX * 0.50 - float(nTotalIcons * nIconSize) * c_ResolutionScale * 0.50);
	// End:0x30a Loop:False
	if(c_BeingLockedData.FadeTime > float(0))
	{
		Canvas.SetPos(float(XL), Canvas.ClipY * 0.75 - float(nIconSize) * 0.50 * c_ResolutionScale);
		Canvas.DrawMaterialTile(c_BeingLockedData.MatConstant, float(nIconSize) * c_ResolutionScale, float(nIconSize) * c_ResolutionScale, 0.00, 0.00, 1.00, 1.00);
	}
	// End:0x465
	else
	{
		// End:0x3b9 Loop:False
		if(c_InBombRangeData.FadeTime > float(0))
		{
			Canvas.SetPos(float(XL), Canvas.ClipY * 0.75 - float(nIconSize) * 0.50 * c_ResolutionScale);
			Canvas.DrawMaterialTile(c_InBombRangeData.MatConstant, float(nIconSize) * c_ResolutionScale, float(nIconSize) * c_ResolutionScale, 0.00, 0.00, 1.00, 1.00);
		}
		// End:0x465
		else
		{
			// End:0x465 Loop:False
			if(c_ActiveCombatData.FadeTime > float(0))
			{
				Canvas.SetPos(float(XL), Canvas.ClipY * 0.75 - float(nIconSize) * 0.50 * c_ResolutionScale);
				Canvas.DrawMaterialTile(c_ActiveCombatData.MatConstant, float(nIconSize) * c_ResolutionScale, float(nIconSize) * c_ResolutionScale, 0.00, 0.00, 1.00, 1.00);
			}
		}
	}
	XL += int(float(nIconSize) * c_ResolutionScale);
	// End:0x528 Loop:False
	if(c_BeingTargetedData.FadeTime > float(0))
	{
		Canvas.SetPos(float(XL), Canvas.ClipY * 0.75 - float(nIconSize) * 0.50 * c_ResolutionScale);
		Canvas.DrawMaterialTile(c_BeingTargetedData.MatConstant, float(nIconSize) * c_ResolutionScale, float(nIconSize) * c_ResolutionScale, 0.00, 0.00, 1.00, 1.00);
	}
	XL += int(float(nIconSize) * c_ResolutionScale);
	// End:0x5eb Loop:False
	if(c_BeingDetectedData.FadeTime > float(0))
	{
		Canvas.SetPos(float(XL), Canvas.ClipY * 0.75 - float(nIconSize) * 0.50 * c_ResolutionScale);
		Canvas.DrawMaterialTile(c_BeingDetectedData.MatConstant, float(nIconSize) * c_ResolutionScale, float(nIconSize) * c_ResolutionScale, 0.00, 0.00, 1.00, 1.00);
	}
}

function SetZoomScope(name ScopeName)
{
	// End:0x105 Loop:False
	if(ScopeName != c_CurrentScopeMaterialName)
	{
		c_CurrentScopeMaterialName = ScopeName;
		// End:0x4d Loop:False
		if(ScopeName == 'None')
		{
			// End:0x4a Loop:False
			if(m_SniperZoomEffect != none)
			{
				m_SniperZoomEffect.bShowInGame = false;
			}
		}
		// End:0x105
		else
		{
			m_SniperZoomEffect = MaterialEffect(LocalPlayer(PlayerOwner.Player).PlayerPostProcess.FindPostProcessEffect(ScopeName));
			m_SniperZoomEffect.Material = GetZoomEffectByAspectRatio();
			// End:0x105 Loop:False
			if(m_SniperZoomEffect != none)
			{
				m_SniperZoomEffect.bShowInGame = false;
				m_ZoomEffectMaterialInstance = new (none) class'MaterialInstanceConstant';
				m_ZoomEffectMaterialInstance.SetParent(m_SniperZoomEffect.Material);
				m_SniperZoomEffect.Material = m_ZoomEffectMaterialInstance;
			}
		}
	}
}

function MaterialInstanceConstant GetZoomEffectByAspectRatio()
{
	local Vector2D ViewportSize;
	local TgPlayerController PC;
	local TgGameViewportClient Viewport;
	local float AspectRatio;
	local MaterialInstanceConstant baseZoom;

	GetControllerAndViewport(PC, Viewport);
	Viewport.GetViewportSize(ViewportSize);
	AspectRatio = ViewportSize.X / ViewportSize.Y;
	baseZoom = none;
	// BlockSize:4
	switch(AspectRatio)
	{
		// End:0x7d
		case 5.00 / 4.00:
			baseZoom = materialinstanceconstant'POST_MIC_SniperScopeA_5';
			// End:0xd7
			break;
		// End:0x9a
		case 16.00 / 9.00:
			baseZoom = materialinstanceconstant'POST_MIC_SniperScopeA_16';
			// End:0xd7
			break;
		// End:0xb7
		case 16.00 / 10.00:
			baseZoom = materialinstanceconstant'POST_MIC_SniperScopeA_16';
			// End:0xd7
			break;
		// End:0xc6
		case 4.00 / 3.00:
		// End:0xffff
		default:
			baseZoom = materialinstanceconstant'POST_MIC_SniperScopeA_4';
			// End:0xd7 Break;
			break;
	}
	return baseZoom;
}

noexport function PlayZoomEffect(bool bEnable, optional TgGame.TgPawn.TG_ZOOM_VISUAL ZoomType)
{
	ZoomType = 0;
	// End:0x63 Loop:False
	if(ZoomType == 2)
	{
		// End:0x60 Loop:False
		if(m_SniperZoomEffect != none)
		{
			// End:0x49 Loop:False
			if(c_CurrentScopeMaterialName == 'None')
			{
				m_SniperZoomEffect.bShowInGame = false;
			}
			// End:0x60
			else
			{
				m_SniperZoomEffect.bShowInGame = bEnable;
			}
		}
	}
	// End:0xe2
	else
	{
		// End:0x98 Loop:False
		if(ZoomType == 1)
		{
			// End:0x95 Loop:False
			if(m_BinocularZoomMaterialEffect != none)
			{
				m_BinocularZoomMaterialEffect.bShowInGame = bEnable;
			}
		}
		// End:0xe2
		else
		{
			// End:0xe2 Loop:False
			if(ZoomType == 0)
			{
				// End:0xc5 Loop:False
				if(m_SniperZoomEffect != none)
				{
					m_SniperZoomEffect.bShowInGame = false;
				}
				// End:0xe2 Loop:False
				if(m_BinocularZoomMaterialEffect != none)
				{
					m_BinocularZoomMaterialEffect.bShowInGame = false;
				}
			}
		}
	}
}

function PlayZoomBlur()
{
	// End:0x79 Loop:False
	if(m_ZoomBlurEffect != none)
	{
		m_ZoomBlurEffect.BlurKernelSize = 100.00;
		m_ZoomBlurEffect.FalloffExponent = 0.00;
		m_ZoomBlurEffect.MaxNearBlurAmount = 1.00;
		m_ZoomBlurEffect.MaxFarBlurAmount = 1.00;
		m_ZoomBlurEffect.bShowInGame = true;
		m_bFadeOutZoomEffect = true;
	}
}

native function NativeTick(float DeltaTime);
event Tick(float DeltaTime)
{
	super(Actor).Tick(DeltaTime);
	NativeTick(DeltaTime);
}

function SetReticuleVisibility(bool bCrossHairVisible, bool bWeaponStatusVisible)
{
	// End:0x2b Loop:False
	if(m_PrimaryHUD != none)
	{
		m_PrimaryHUD.SetReticuleVisibility(bCrossHairVisible, bWeaponStatusVisible);
	}
}

function ShowTaskForce()
{
	m_bDrawTaskForce = true;
}

function HideTaskForce()
{
	m_bDrawTaskForce = false;
}

function DisplayBadConnectionAlert()
{
	local TgPlayerController PC;

	Canvas.Font = class'Engine'.static.GetSmallFont();
	Canvas.SetDrawColor(255, 255, 255, 255);
	Canvas.SetPos(Canvas.ClipX - float(400), 25.00);
	Canvas.DrawText("*Connection Problem*");
	PC = TgPlayerController(Owner);
	// End:0xbf Loop:False
	if(PC != none)
	{
		PC.DoClientSidePerfTracking(30);
	}
}

noexport function StartProgressBar(float fDuration, optional string sLabel, optional bool bWorldInteractionBar)
{
	// End:0x35 Loop:False
	if(m_PrimaryHUD != none)
	{
		m_PrimaryHUD.m_ActiveItem.StartProgressBar(fDuration, sLabel);
	}
}

noexport function HideProgressBar(optional bool bWorldInteractionBar)
{
	bWorldInteractionBar = false;
	// End:0x2e Loop:False
	if(m_PrimaryHUD != none)
	{
		m_PrimaryHUD.m_ActiveItem.DeactivateProgressBar();
	}
}

function ShowWorldInteractionText(string sMsg)
{
	// End:0x0b Loop:False
	if(m_PrimaryHUD != none)
	{
	}
}

function ShowWorldInteractionTextById(int nMsgId)
{
	// End:0x0b Loop:False
	if(m_PrimaryHUD != none)
	{
	}
}

function HideWorldInteractionText()
{
	// End:0x0b Loop:False
	if(m_PrimaryHUD != none)
	{
	}
}

noexport function ForceUpdateDeviceBar(optional int nActiveDeviceId)
{
	nActiveDeviceId = -1;
	// End:0x66 Loop:False
	if(m_PrimaryHUD != none && (m_PrimaryHUD.m_DeviceBar != none))
	{
		m_PrimaryHUD.m_DeviceBar.m_bTriggerRefreshDeviceData = true;
		m_PrimaryHUD.m_DeviceBar.m_nDefaultDeviceId = nActiveDeviceId;
	}
}

exec event TgUISceneDriver ShowDevSpawnBotMenu()
{
	local TgUIDevSpawnBot sb;

	sb = TgUIDevSpawnBot(m_UISceneManager.GetSceneDriver('TgUIDevSpawnBot', true));
	// End:0x5e Loop:False
	if(sb != none)
	{
		// End:0x5e Loop:False
		if(sb.m_bLoaded == false)
		{
			sb.OpenTgUIScene();
		}
	}
	return sb;
}

noexport function ShowReleaseDialog(bool bShow, optional DeathZoomInfo Info, optional float fReleaseTime, optional bool bCanManuallyRelease)
{
	local TgUIReleaseMenus relmenu;
	local TgUIScoreboard scoreScene;

	Info = 0.00;
	fReleaseTime = false;
	// End:0x18a Loop:False
	if(m_UISceneManager != none)
	{
		relmenu = TgUIReleaseMenus(m_UISceneManager.GetSceneDriver('TgUIReleaseMenus', true));
		scoreScene = TgUIScoreboard(m_UISceneManager.GetSceneDriver('TgUIScoreboard', false));
		// End:0x18a Loop:False
		if(relmenu != none && (m_MainMenu != none))
		{
			// End:0x18a Loop:False
			if(bShow != relmenu.m_bLoaded)
			{
				// End:0x163 Loop:False
				if(bShow)
				{
					// End:0xd8 Loop:False
					if(scoreScene != none && (scoreScene.m_bLoaded))
					{
						scoreScene.CloseTgUIScene();
					}
					// End:0xfe Loop:False
					if(m_MainMenu.m_bLoaded)
					{
						m_MainMenu.CloseTgUIScene();
					}
					// End:0x113
					else
					{
						m_MainMenu.CloseManagedScene();
					}
					relmenu.SetReleaseData(true, 0.00, bCanManuallyRelease);
					relmenu.OpenTgUIScene();
					relmenu.SetDeathZoomInfo(Info);
				}
				// End:0x18a
				else
				{
					relmenu.SetReleaseData(false);
					relmenu.CloseTgUIScene();
				}
			}
		}
	}
}

function TgUIReleaseMenus GetActiveReleaseMenu()
{
	local TgUIReleaseMenus relmenu;

	relmenu = none;
	// End:0x3b Loop:False
	if(m_UISceneManager != none)
	{
		relmenu = TgUIReleaseMenus(m_UISceneManager.GetSceneDriver('TgUIReleaseMenus', false));
	}
	return relmenu;
}

noexport function UpdateReleaseTime(optional float fReleaseTime)
{
	local TgUIReleaseMenus relmenu;

	fReleaseTime = 0.00;
	// End:0x92 Loop:False
	if(m_UISceneManager != none)
	{
		relmenu = TgUIReleaseMenus(m_UISceneManager.GetSceneDriver('TgUIReleaseMenus', false));
		// End:0x92 Loop:False
		if(relmenu != none && (relmenu.m_bLoaded))
		{
			relmenu.SetReleaseData(true, fReleaseTime, relmenu.m_ReleaseDialog.m_bCanReleaseNow);
		}
	}
}

native function BrowseToDevNotes();
exec function ShowDevNotes()
{
	BrowseToDevNotes();
}

native exec function CycleTrackedAssignment();
event SetTriggeredSceneInfo(Actor triggerActor)
{
	c_SceneTriggerActor = triggerActor;
	return;
}

event ClearTriggeredSceneInfo()
{
	c_SceneTriggerActor = none;
	return;
}

native exec function StartVoiceMacroTree();
native exec function ShowPathToAttentionPOI();

defaultproperties
{
	m_ColorTexture=Texture2D'TG_Content.Colors'
	m_TargetTexture=Texture2D'TG_Content.RedArrowDown'
	m_DigitInfo[0]=(LeftPos=4,TopPos=6,Width=40,Height=26)
	m_DigitInfo[1]=(LeftPos=47,TopPos=6,Width=28,Height=26)
	m_DigitInfo[2]=(LeftPos=83,TopPos=6,Width=36,Height=26)
	m_DigitInfo[3]=(LeftPos=122,TopPos=6,Width=36,Height=26)
	m_DigitInfo[4]=(LeftPos=160,TopPos=6,Width=36,Height=26)
	m_DigitInfo[5]=(LeftPos=200,TopPos=6,Width=36,Height=26)
	m_DigitInfo[6]=(LeftPos=239,TopPos=6,Width=36,Height=26)
	m_DigitInfo[7]=(LeftPos=277,TopPos=6,Width=36,Height=26)
	m_DigitInfo[8]=(LeftPos=317,TopPos=6,Width=36,Height=26)
	m_DigitInfo[9]=(LeftPos=357,TopPos=6,Width=36,Height=26)
	m_HUDTeamColor=(R=180,G=64,B=64,A=255)
	m_nTextPanelWidth=400
	m_nTextPanelHeight=85
	m_nTeamPanelWidth=270
	m_nTeamPanelHeight=30
	m_nTeamIconHeight=10
	m_LockAlertMat=Material'EFX_TargetReticuleA.T_EFX_AlertIconA'
	m_bDrawPawnHUD=true
	m_bShowHUDTargetExtraInfo=true
	m_bRotatingRadarMap=true
	m_HitEffectFadeTime=1.00
	m_MaxHitEffectIntensity=0.25
	m_MaxHitEffectColor=(R=-1.00,G=-1.00,B=2.00,A=1.00)
	m_ZoomEffectFadeTime=0.15
	c_MaxNumOfDamgeDirectionIndicators=5
	c_DamageDirectionParentMaterial=Material'EngineMaterials.DefaultMaterial'
	c_DamageDirectionFadeTime=1.00
	c_DamageDirectionPositionalParamName=DamageDirectionRotation
	c_DamageDirectionDamageAmountName=DamageTaken
	c_DamageDirectionFadeParamName=DamageDirectionAlpha
	c_DamageStateName=State
	c_BodyUnderAttackParentMaterial=Material'EngineMaterials.DefaultMaterial'
	c_BodyUnderAttackFadeTime=3.00
	c_BeingLockedParentMaterial=MaterialInstanceConstant'GUI_HUD_DynamicCursors.Warnings.MIC_GUI_AlertIconB'
	c_BeingLockedFadeTime=3.00
	c_BeingTargetedParentMaterial=MaterialInstanceConstant'GUI_HUD_DynamicCursors.Warnings.MIC_GUI_TurretIconA'
	c_BeingTargetedFadeTime=3.00
	c_BeingDetectedParentMaterial=MaterialInstanceConstant'GUI_HUD_DynamicCursors.Warnings.MIC_GUI_ScannerIconB'
	c_BeingDetectedFadeTime=3.00
	c_ActiveCombatParentMaterial=MaterialInstanceConstant'GUI_HUD_DynamicCursors.Warnings.MIC_GUI_AlertIconB'
	c_ActiveCombatFadeTime=3.00
	c_InBombRangeParentMaterial=MaterialInstanceConstant'GUI_HUD_DynamicCursors.Warnings.MIC_GUI_AlertIconB'
	c_InBombRangeFadeTime=3.00
	c_ShiftingReticuleSpeed=25.00
	m_AcceptQuestCue=SoundCue'SND_B_UI.A_CUE_UI_Quest_Accept'
	m_TurninQuestCue=SoundCue'SND_B_UI.A_CUE_UI_Quest_TurnIn'
	m_AbandonQuestCue=SoundCue'SND_B_UI.A_CUE_UI_Quest_Decline'
	m_QuestHUDTagMIC=MaterialInstanceConstant'HUD_A.HUD_Quest.MIC_Quest_Active_Glyph'
	m_CompleteQuestHUDTagMIC=MaterialInstanceConstant'HUD_A.HUD_Quest.MIC_Quest_Complete_Glyph'
	m_QuestOffscreenTagMIC=MaterialInstanceConstant'GUI_Tags_Objective.MIC_HUD_Offscreen_Indicator_TrackedQuest'
	m_OverheadTexture=Texture2D'HUD_A.T_GUI_Bar'
	m_OverheadFont=Font'GA_Fonts.Arial.GA_Font_ArialBold_16pt'
	m_OverheadFont2=Font'Menus.Font_Prototype_10A'
	m_FxLightManager=TgFxLightMan0
	m_bNeedAllQuestPOI=true
}