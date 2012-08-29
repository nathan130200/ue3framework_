/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUILevelMap.uc
 * 
 * Stats:
 *	Constants:7
 *	Enums:1
 *	Structs:4
 *	Properties:75
 *	Functions:12
 *
 *******************************************************************************/
class TgUILevelMap extends Object
	native;

const NUM_SECS_FOR_TRANSITION_FADE = 0.4;
const NUM_SECS_FOR_HELPTEXT = 3.0;
const PURERADAR_MAP_ZOOMBASE = 250000;
const PURERADAR_PRESUMED_IMGSIZE = 1024;
const MAX_MINIMAP_DIST = 1000;
const MAX_NUM_TEAMMATES = 20;
const MAX_NUM_OBJECTIVES = 10;

enum EMapRotationMode
{
	MapRotation_Off,
	MapRotation_On,
	MapRotation_ApplyLocal,
	MapRotation_MAX
};

struct native sPlayerWidgetData
{
	var init string m_PlayerName;
	var MaterialInstanceConstant m_IconToUse;
	var Vector m_Location;
	var Rotator m_Rotation;
	var LinearColor m_Color;
	var TgUILevelMap.EMapRotationMode m_RotMode;
	var float m_Opacity;
	var bool m_bIsLocalPlayer;
	var bool m_bIsFriendly;
	var bool m_bIsBot;
	var bool m_bIsSameTeam;

	structdefaultproperties
	{
		m_PlayerName=""
		m_IconToUse=none
		m_Location=(X=0.00,Y=0.00,Z=0.00)
		m_Rotation=(Pitch=0,Yaw=0,Roll=0)
		m_Color=(R=0.00,G=0.00,B=0.00,A=1.00)
		m_RotMode=MapRotation_Off
		m_Opacity=0.00
		m_bIsLocalPlayer=false
		m_bIsFriendly=false
		m_bIsBot=false
		m_bIsSameTeam=false
	}
};

struct native sDeployableWidgetData
{
	var init string m_DeployableName;
	var int m_nCounter;
	var bool m_bActive;
	var bool m_bIsFriendly;
	var Vector m_Location;
	var Rotator m_Rotation;
	var float m_Opacity;
	var int m_nType;
	var TgUILevelMap.EMapRotationMode m_RotMode;
	var MaterialInstanceConstant m_IconToUse;

	structdefaultproperties
	{
		m_DeployableName=""
		m_nCounter=0
		m_bActive=false
		m_bIsFriendly=false
		m_Location=(X=0.00,Y=0.00,Z=0.00)
		m_Rotation=(Pitch=0,Yaw=0,Roll=0)
		m_Opacity=0.00
		m_nType=0
		m_RotMode=MapRotation_Off
		m_IconToUse=none
	}
};

struct native sObjectiveWidgetData
{
	var init string m_ObjectiveName;
	var bool m_bActive;
	var bool m_bIsFriendly;
	var Vector m_Location;
	var Rotator m_Rotation;
	var float m_Opacity;
	var TgUILevelMap.EMapRotationMode m_RotMode;
	var MaterialInstanceConstant m_IconToUse;

	structdefaultproperties
	{
		m_ObjectiveName=""
		m_bActive=false
		m_bIsFriendly=false
		m_Location=(X=0.00,Y=0.00,Z=0.00)
		m_Rotation=(Pitch=0,Yaw=0,Roll=0)
		m_Opacity=0.00
		m_RotMode=MapRotation_Off
		m_IconToUse=none
	}
};

struct native sQuestVolumeWidgetData
{
	var init string m_Name;
	var bool m_bActive;
	var Vector m_Location;
	var Rotator m_Rotation;
	var float m_Opacity;
	var TgUILevelMap.EMapRotationMode m_RotMode;
	var MaterialInstanceConstant m_IconToUse;

	structdefaultproperties
	{
		m_Name=""
		m_bActive=false
		m_Location=(X=0.00,Y=0.00,Z=0.00)
		m_Rotation=(Pitch=0,Yaw=0,Roll=0)
		m_Opacity=0.00
		m_RotMode=MapRotation_Off
		m_IconToUse=none
	}
};

var bool m_bInitialized;
var bool m_bActive;
var bool m_bTransitioning;
var bool m_bRotatePoints;
var bool m_DesiredOpacityChange;
var bool m_DesiredOpacityIncrease;
var float m_TimeOfTick;
var TgHUD_Game m_HUDParent;
var Vector m_Location;
var Rotator m_Rotation;
var float m_fZoomBase;
var float m_fZoomScale;
var float m_fOriginalXResolution;
var float m_fOriginalYResolution;
var Vector m_CurrentMapScale;
var Vector m_CurrentMapStart;
var int m_LocalPlayerRotation;
var Vector m_LocalPlayerLocation;
var init array<init sPlayerWidgetData> m_PlayerWidgetData;
var init array<init sDeployableWidgetData> m_DeployableWidgetData;
var init array<init sObjectiveWidgetData> m_ObjectiveWidgetData;
var init array<init sQuestVolumeWidgetData> m_QuestWidgetData;
var float m_DesiredOpacity;
var float m_CurrentOpacity;
var float m_TimeOfRealStart;
var Texture2D m_BlankRadarTexture;
var MaterialInstanceConstant m_IconLocalPlayer;
var MaterialInstanceConstant m_IconTeamPlayer;
var MaterialInstanceConstant m_IconTeamPlayerBlink;
var MaterialInstanceConstant m_IconTeamMedic;
var MaterialInstanceConstant m_IconTeamMedicBlink;
var MaterialInstanceConstant m_IconFriendlyPlayer;
var MaterialInstanceConstant m_IconFriendlyPlayerBlink;
var MaterialInstanceConstant m_IconFriendlyMedic;
var MaterialInstanceConstant m_IconFriendlyMedicBlink;
var MaterialInstanceConstant m_IconEnemy;
var MaterialInstanceConstant m_IconFriendlyNPC;
var MaterialInstanceConstant m_IconSound;
var MaterialInstanceConstant m_IconDeployableSensor;
var MaterialInstanceConstant m_IconHealthDeploy;
var MaterialInstanceConstant m_IconSpawnPoint;
var MaterialInstanceConstant m_IconObjective;
var MaterialInstanceConstant m_IconQuestAvailable;
var MaterialInstanceConstant m_IconQuestTurninUnavailable;
var MaterialInstanceConstant m_IconQuestTurnin;
var MaterialInstanceConstant m_IconQuestRepeatableAvailable;
var MaterialInstanceConstant m_IconQuestRepeatableTurnin;
var MaterialInstanceConstant m_TeamIndicatorParent;
var MaterialInstanceConstant m_FriendlyIndicatorParent;
var MaterialInstanceConstant m_ObjIndicatorParent;
var init array<init MaterialInstanceConstant> m_TeamIndicatorArrows;
var init array<init MaterialInstanceConstant> m_ObjIndicatorArrows;
var MaterialInstanceConstant m_TrackedQuestIndicatorArrow;
var int m_FoundOffscreenQuests;
var int m_bFoundTeamMember[20];
var int m_FoundTeamMembers;
var int m_FoundObjectives;
var float m_IndicatorX;
var float m_IndicatorY;
var float m_IndicatorWid;
var float m_IndicatorHgt;
var UIImage m_BaseImageWidget;
var UIImage m_SizeGuidelineWidget;
var UILabel m_HelpLabel;
var MaterialInstanceConstant m_MapMIC;
var MaterialInstance m_ActiveMapMaterialParent;
var name m_ActiveMapMaterialParentName;
var Texture m_MapImage;
var Texture m_MapImage2;
var float m_WidgetLeft;
var float m_WidgetTop;
var float m_WidgetWidth;
var float m_WidgetHeight;
var float m_fDesiredScale;
var float m_DesiredOpacityChangeDelay;

native function InitLevelMap(MaterialInstanceConstant LevelMapMIC, TgHUD ParentTgHUD);
native function TickLevelMap(float UpdateTime);
native function float GetWorldTime();
native noexport function Show(optional bool Immediate)
{
	Immediate = false;
}

native noexport function Hide(optional bool Immediate)
{
	Immediate = false;
}

native function SetOpacity(float Opacity);
native function UpdateAnimatingValues(float TimeDelay);
native function DrawMapElements(Canvas DrawCanvas);
native function GenMapElements();
native function PostRender();
native function ChangeDesiredMapOpacity(bool Activate, bool Increase);
native function InitializeUniformScaleRadarMap();

defaultproperties
{
	m_bRotatePoints=true
	m_fZoomScale=1.00
	m_fOriginalXResolution=1024.00
	m_fOriginalYResolution=768.00
	m_DesiredOpacity=1.00
	m_BlankRadarTexture=Texture2D'Menus.UI_SemiTransBlack'
	m_IconLocalPlayer=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconLocalPlayer'
	m_IconTeamPlayer=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconTeamPlayer'
	m_IconTeamPlayerBlink=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconTeamPlayer_Blink'
	m_IconTeamMedic=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconTeamMedic'
	m_IconTeamMedicBlink=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconTeamMedic_Blink'
	m_IconFriendlyPlayer=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconFriendlyPlayer'
	m_IconFriendlyPlayerBlink=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconFriendlyPlayer_Blink'
	m_IconFriendlyMedic=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconFriendlyMedic'
	m_IconFriendlyMedicBlink=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconFriendlyMedic_Blink'
	m_IconEnemy=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconEnemy'
	m_IconFriendlyNPC=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconFriendlyNPC'
	m_IconSound=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconSound'
	m_IconDeployableSensor=MaterialInstanceConstant'HUD_MinimapA.MIC_HUD_SensorPing'
	m_IconHealthDeploy=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconHealthDeploy'
	m_IconSpawnPoint=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconSpawnPoint'
	m_IconObjective=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconObjective'
	m_IconQuestAvailable=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconQuestAvailable'
	m_IconQuestTurninUnavailable=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconQuestTurninUnavailable'
	m_IconQuestTurnin=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconQuestTurnin'
	m_IconQuestRepeatableAvailable=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconQuestRepeatableAvailable'
	m_IconQuestRepeatableTurnin=MaterialInstanceConstant'HUD_MinimapA.MIC_MapIconQuestRepeatableTurnin'
	m_TeamIndicatorParent=MaterialInstanceConstant'HUD_MinimapA.MIC_HUD_Offscreen_Indicator_Arrow_Team'
	m_FriendlyIndicatorParent=MaterialInstanceConstant'HUD_MinimapA.MIC_HUD_Offscreen_Indicator_Arrow_Friendly'
	m_ObjIndicatorParent=MaterialInstanceConstant'HUD_MinimapA.MIC_HUD_Offscreen_Indicator_Arrow_Objective'
	m_TrackedQuestIndicatorArrow=MaterialInstanceConstant'HUD_MinimapA.MIC_HUD_Offscreen_Indicator_Quest'
	m_IndicatorWid=256.00
	m_IndicatorHgt=256.00
}