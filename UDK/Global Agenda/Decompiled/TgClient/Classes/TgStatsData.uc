/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgStatsData.uc
 * 
 * Stats:
 *	Constants:9
 *	Structs:1
 *	Properties:7
 *	Functions:8
 *
 *******************************************************************************/
class TgStatsData extends Object
	native;

const TGSCBD_REQUEST_INTERVAL = 1;
const MAX_PLAYERS_PER_MATCH = 24;
const MAX_PLAYERS_PER_TEAM = 12;
const SCORE_FIELDS = 12;
const NUM_RANKED_FIELDS = 10;
const CLASS_SCORE_ASSAULT = 0;
const CLASS_SCORE_MEDIC = 1;
const CLASS_SCORE_RECON = 2;
const CLASS_SCORE_ROBOTICS = 3;

struct native Scores
{
	var int Score[12];
	var string sPlayerName;
	var string sClassName;
	var string sAgencyName;
	var int nTaskForce;
	var bool bHighlight;
	var bool bAlive;
	var int eBonusType;
	var int nTeamIndex;
	var int nLevel;
	var int nClassID;

	structdefaultproperties
	{
		Score[0]=0
		Score[1]=0
		Score[2]=0
		Score[3]=0
		Score[4]=0
		Score[5]=0
		Score[6]=0
		Score[7]=0
		Score[8]=0
		Score[9]=0
		Score[10]=0
		Score[11]=0
		sPlayerName=""
		sClassName=""
		sAgencyName=""
		nTaskForce=0
		bHighlight=false
		bAlive=false
		eBonusType=0
		nTeamIndex=0
		nLevel=0
		nClassID=0
	}
};

var bool m_bGameOver;
var Scores m_ScoreArray[24];
var int m_RankArray[10];
var int m_HighScoreArray[8];
var int m_nPlayerCount;
var float m_fLastCopy;
var TgHUD_Game m_HUD;

native function SetGameOver(bool bGameover, bool bPlayerVictor);
native function CopyScores();
native function SortScores(int eSortField);
native function int GetBestPlayerRankIndex();
native function PopulatePlayerRankArray();
native function TgRepInfo_Player GetMyPRI();
native function int GetPlayerCount();
event Init(TgHUD_Game HUD)
{
	m_HUD = HUD;
}

defaultproperties
{
	m_fLastCopy=-1.00
}