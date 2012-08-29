/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_MissionInfo.uc
 * 
 * Stats:
 *	Constants:7
 *	Enums:3
 *	Structs:10
 *	Properties:24
 *	Functions:6
 *
 *******************************************************************************/
class TgUIPrimaryHUD_MissionInfo extends Object
	native;

const NUM_PRIMARY_OBJECTIVES_IN_UI = 6;
const NUM_TEAM_ICONS = 2;
const NUM_ROBOT_ICONS = 4;
const NUM_OWNER_ICONS = 4;
const NUM_ROBOT_POINT_LIGHTS = 3;
const NUM_HEX_NUMBER = 6;
const NUM_TEAMS = 6;

enum eTeamIcons
{
	ICON_ATTACKER,
	ICON_DEFENDER,
	ICON_MAX
};

enum eRobotIcons
{
	ROBOT_UNALIGNED,
	ROBOT_FRIENDLY,
	ROBOT_ENEMY,
	ROBOT_DESTROYED,
	ROBOT_MAX
};

enum eOwnerIcons
{
	ATTACK_SWORDS,
	DEFEND_SHIELD,
	eOwnerIcons_MAX
};

struct native ObjectiveTeamStruct
{
	var UIPanel otsTeamPanel;
	var UILabel otsTeamLabel;
	var UIImage otsTeamIcons[2];

	structdefaultproperties
	{
		otsTeamPanel=none
		otsTeamLabel=none
		otsTeamIcons[0]=none
		otsTeamIcons[1]=none
	}
};

struct native ObjectiveCTFRStruct
{
	var UIPanel ocsCTFRPanel;
	var UIImage ocsCTFRIcons[4];

	structdefaultproperties
	{
		ocsCTFRPanel=none
		ocsCTFRIcons[0]=none
		ocsCTFRIcons[1]=none
		ocsCTFRIcons[2]=none
		ocsCTFRIcons[3]=none
	}
};

struct native ObjectiveBarStruct
{
	var UIPanel obsBarPanel;
	var UILabel obsBarLabel;
	var UIImage obsBarActiveImg;
	var UIImage obsBarImg;
	var MaterialInstanceConstant obsBarMIC;
	var UIImage obsBarOwnerIcons[4];

	structdefaultproperties
	{
		obsBarPanel=none
		obsBarLabel=none
		obsBarActiveImg=none
		obsBarImg=none
		obsBarMIC=none
		obsBarOwnerIcons[0]=none
		obsBarOwnerIcons[1]=none
		obsBarOwnerIcons[2]=none
		obsBarOwnerIcons[3]=none
	}
};

struct native ObjectiveListStruct
{
	var UIPanel olsObjPanel;
	var ObjectiveBarStruct olsObjList[6];
	var UIImage olsObjTileImg;

	structdefaultproperties
	{
		olsObjPanel=none
		olsObjList[0]=(obsBarPanel=none,obsBarLabel=none,obsBarActiveImg=none,obsBarImg=none,obsBarMIC=none,obsBarOwnerIcons=none,obsBarOwnerIcons[1]=none,obsBarOwnerIcons[2]=none,obsBarOwnerIcons[3]=none)
		olsObjList[1]=(obsBarPanel=none,obsBarLabel=none,obsBarActiveImg=none,obsBarImg=none,obsBarMIC=none,obsBarOwnerIcons=none,obsBarOwnerIcons[1]=none,obsBarOwnerIcons[2]=none,obsBarOwnerIcons[3]=none)
		olsObjList[2]=(obsBarPanel=none,obsBarLabel=none,obsBarActiveImg=none,obsBarImg=none,obsBarMIC=none,obsBarOwnerIcons=none,obsBarOwnerIcons[1]=none,obsBarOwnerIcons[2]=none,obsBarOwnerIcons[3]=none)
		olsObjList[3]=(obsBarPanel=none,obsBarLabel=none,obsBarActiveImg=none,obsBarImg=none,obsBarMIC=none,obsBarOwnerIcons=none,obsBarOwnerIcons[1]=none,obsBarOwnerIcons[2]=none,obsBarOwnerIcons[3]=none)
		olsObjList[4]=(obsBarPanel=none,obsBarLabel=none,obsBarActiveImg=none,obsBarImg=none,obsBarMIC=none,obsBarOwnerIcons=none,obsBarOwnerIcons[1]=none,obsBarOwnerIcons[2]=none,obsBarOwnerIcons[3]=none)
		olsObjList[5]=(obsBarPanel=none,obsBarLabel=none,obsBarActiveImg=none,obsBarImg=none,obsBarMIC=none,obsBarOwnerIcons=none,obsBarOwnerIcons[1]=none,obsBarOwnerIcons[2]=none,obsBarOwnerIcons[3]=none)
		olsObjTileImg=none
	}
};

struct native HexStatusIndicatorStruct
{
	var UIPanel hsiPanel;
	var UILabel hsiStatusTextLabel;
	var UILabel hsiStatusLabel;
	var UIImage hsiHexImage;

	structdefaultproperties
	{
		hsiPanel=none
		hsiStatusTextLabel=none
		hsiStatusLabel=none
		hsiHexImage=none
	}
};

struct native HexMultiStatusIndicatorHorzStuct
{
	var UIPanel hmsihPanel;
	var UIImage hmsihRoute[6];
	var UIImage hmsihSpawn[6];
	var UIImage hmsihTurret[6];
	var UIImage hmsihHexImage[6];
	var UILabel hmsihTeam[6];

	structdefaultproperties
	{
		hmsihPanel=none
		hmsihRoute[0]=none
		hmsihRoute[1]=none
		hmsihRoute[2]=none
		hmsihRoute[3]=none
		hmsihRoute[4]=none
		hmsihRoute[5]=none
		hmsihSpawn[0]=none
		hmsihSpawn[1]=none
		hmsihSpawn[2]=none
		hmsihSpawn[3]=none
		hmsihSpawn[4]=none
		hmsihSpawn[5]=none
		hmsihTurret[0]=none
		hmsihTurret[1]=none
		hmsihTurret[2]=none
		hmsihTurret[3]=none
		hmsihTurret[4]=none
		hmsihTurret[5]=none
		hmsihHexImage[0]=none
		hmsihHexImage[1]=none
		hmsihHexImage[2]=none
		hmsihHexImage[3]=none
		hmsihHexImage[4]=none
		hmsihHexImage[5]=none
		hmsihTeam[0]=none
		hmsihTeam[1]=none
		hmsihTeam[2]=none
		hmsihTeam[3]=none
		hmsihTeam[4]=none
		hmsihTeam[5]=none
	}
};

struct native ObjectiveTicketStruct
{
	var UIPanel otsTicketPanel;
	var UILabel otsTicketRateLabel[2];
	var UIImage otsTicketBarImg[2];
	var MaterialInstanceConstant otsTicketBarMIC[2];
	var UILabel otsTicketPointsLabel[2];

	structdefaultproperties
	{
		otsTicketPanel=none
		otsTicketRateLabel[0]=none
		otsTicketRateLabel[1]=none
		otsTicketBarImg[0]=none
		otsTicketBarImg[1]=none
		otsTicketBarMIC[0]=none
		otsTicketBarMIC[1]=none
		otsTicketPointsLabel[0]=none
		otsTicketPointsLabel[1]=none
	}
};

struct native ObjectiveBotPointsStruct
{
	var UIPanel obpsBotPointsPanel;
	var UIImage obpsBotPointsAllyLightsOn[3];
	var UIImage obpsBotPointsEnemyLightsOn[3];
	var UIImage obpsBotPointsAllyLightsOff[3];
	var UIImage obpsBotPointsEnemyLightsOff[3];

	structdefaultproperties
	{
		obpsBotPointsPanel=none
		obpsBotPointsAllyLightsOn[0]=none
		obpsBotPointsAllyLightsOn[1]=none
		obpsBotPointsAllyLightsOn[2]=none
		obpsBotPointsEnemyLightsOn[0]=none
		obpsBotPointsEnemyLightsOn[1]=none
		obpsBotPointsEnemyLightsOn[2]=none
		obpsBotPointsAllyLightsOff[0]=none
		obpsBotPointsAllyLightsOff[1]=none
		obpsBotPointsAllyLightsOff[2]=none
		obpsBotPointsEnemyLightsOff[0]=none
		obpsBotPointsEnemyLightsOff[1]=none
		obpsBotPointsEnemyLightsOff[2]=none
	}
};

struct native ObjectiveVictoryBonusStruct
{
	var UIPanel ovbsVictoryBonusPanel;
	var UIImage ovbsDeathsProgressBar;
	var MaterialInstanceConstant ovbsDeathsProgressMIC;
	var UILabel ovbsDeathsProgressLabel;

	structdefaultproperties
	{
		ovbsVictoryBonusPanel=none
		ovbsDeathsProgressBar=none
		ovbsDeathsProgressMIC=none
		ovbsDeathsProgressLabel=none
	}
};

struct native ObjectiveClockStruct
{
	var UIPanel ocsClockPanel;
	var TgUIPrimaryHUD_Clock ocsMissionClock;

	structdefaultproperties
	{
		ocsClockPanel=none
		ocsMissionClock=none
	}
};

var TgUIPrimaryHUD_Settings m_Settings;
var bool m_bActive;
var UIPanel m_ObjectivePanel;
var ObjectiveTeamStruct m_TeamElement;
var ObjectiveCTFRStruct m_CTFRElement;
var ObjectiveListStruct m_ObjectiveElement;
var ObjectiveTicketStruct m_TicketElement;
var ObjectiveBotPointsStruct m_BotPointsElement;
var ObjectiveClockStruct m_ClockElement;
var HexStatusIndicatorStruct m_HexStatusElement;
var HexMultiStatusIndicatorHorzStuct m_HexMultiStatusHorzElement;
var ObjectiveVictoryBonusStruct m_VictoryBonusElement;
var int m_nNumPrimaryObjectives;
var MaterialInstanceConstant m_HexStatusMIC;
var MaterialInstanceConstant m_HexMultiStatusHorzMICParent;
var MaterialInstanceConstant m_HexMultiStatusHorzMIC[6];
var Material m_ObjectiveBarParent;
var MaterialInstanceConstant m_VictoryDeathsBarMIC;
var MaterialInstanceConstant m_BotHealthBarParent[2];
var MaterialInstanceConstant m_TicketBarParent[2];
var TgUISceneDriver m_PrimaryScene;
var UIPanel m_BottomPanel;
var int m_nCachedRaidHexUpdateCount;
var int m_nRobotIcon;

native function InitPrimaryHUDElement();
native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native noexport function PopulateMissionInfo(optional bool bNoResetActive)
{
	bNoResetActive = false;
}

native function RepositionWidgets();

defaultproperties
{
	m_Settings=TgSettings0
	m_HexStatusMIC=MaterialInstanceConstant'HUD_A.HexGrid_Counter.MIC_HexGrid_Counter'
	m_HexMultiStatusHorzMICParent=MaterialInstanceConstant'HUD_A.HexGrid_Counter.MIC_HexGid_Counter_3pt_C'
	m_ObjectiveBarParent=Material'HUD_A.ObjectiveBar.MAT_GUI_HUD_ObjectiveBarA'
	m_VictoryDeathsBarMIC=MaterialInstanceConstant'HUD_A.PVE_VictoryBonus.MIC_PVE_Victory_Bonus'
	m_BotHealthBarParent[0]=MaterialInstanceConstant'HUD_A.ObjectiveBar.MIC_CTFR_Enemy_HealthbarA'
	m_BotHealthBarParent[1]=MaterialInstanceConstant'HUD_A.ObjectiveBar.MIC_CTFR_Allied_HealthbarA'
	m_TicketBarParent[0]=MaterialInstanceConstant'HUD_A.MAT_TicketBar.MIC_Player_TicketBar_AllieTeam'
	m_TicketBarParent[1]=MaterialInstanceConstant'HUD_A.MAT_TicketBar.MIC_Player_TicketBar_EnemyTeam'
	m_nCachedRaidHexUpdateCount=-1
}