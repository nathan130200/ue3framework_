/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIScoreboard.uc
 * 
 * Stats:
 *	Constants:6
 *	Enums:2
 *	Structs:2
 *	Properties:5
 *	Functions:6
 *
 *******************************************************************************/
class TgUIScoreboard extends TgUISceneDriver
	native;

const TGSCBD_MAX_PLAYERS_PER_MATCH = 20;
const TGSCBD_MAX_PLAYERS_PER_TEAM = 10;
const NUM_PLAYER_SCORE_LABELS = 5;
const ALLY_INDEX = 0;
const ENEMY_INDEX = 1;
const NUM_STATUS_ITEMS = 4;

enum SCORE_LABELS
{
	SBLABEL_NAME,
	SBLABEL_CLASS,
	SBLABEL_AGENCY,
	SBLABEL_LEVEL,
	SBLABEL_SCORE,
	SBLABEL_MAX
};

enum SCORE_STATUS
{
	STATUS_NONE,
	STATUS_TOP_SCORE,
	STATUS_LONG_LIFE,
	STATUS_DEAD,
	STATUS_MAX
};

struct native sScorePlayerStruct
{
	var UIImage spsStatusIcon;
	var UILabel spsScoreLabels[5];

	structdefaultproperties
	{
		spsStatusIcon=none
		spsScoreLabels[0]=none
		spsScoreLabels[1]=none
		spsScoreLabels[2]=none
		spsScoreLabels[3]=none
		spsScoreLabels[4]=none
	}
};

struct native sScoreTeamStruct
{
	var UILabel stsTeamTitle;
	var UIImage stsTeamIcon;
	var sScorePlayerStruct stsPlayerList[10];

	structdefaultproperties
	{
		stsTeamTitle=none
		stsTeamIcon=none
		stsPlayerList[0]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[1]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[2]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[3]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[4]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[5]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[6]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[7]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[8]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
		stsPlayerList[9]=(spsStatusIcon=none,spsScoreLabels=none,spsScoreLabels[1]=none,spsScoreLabels[2]=none,spsScoreLabels[3]=none,spsScoreLabels[4]=none)
	}
};

var int m_LocalPlayerTaskForce;
var sScoreTeamStruct m_TeamPanel[2];
var TgStatsData m_StatsData;
var float m_fLastCopy;
var Texture2D m_StatusTexture[4];

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function bool OnSceneKey(const out InputEventParameters EventParms);
native function UpdateLabels();
native function PopulateStructsWithUIPointers();
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKey;
}

defaultproperties
{
	m_LocalPlayerTaskForce=1
	m_fLastCopy=-1.00
	m_StatusTexture[1]=Texture2D'GUI_HUD_DynamicCursors.Tags.T_GUI_Tag_StarA'
	m_StatusTexture[2]=Texture2D'GUI_HUD_DynamicCursors.Tags.T_GUI_2D_TagInfinityA'
	m_StatusTexture[3]=Texture2D'GA_Menu_Assets.Dead_Status_01'
}