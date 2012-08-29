/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIScoreDetails.uc
 * 
 * Stats:
 *	Constants:4
 *	Enums:1
 *	Structs:1
 *	Properties:14
 *	Functions:9
 *
 *******************************************************************************/
class TgUIScoreDetails extends TgUISceneDriver
	native;

const TGSCBD_NUM_SCOREBOARD_FIELDS = 13;
const TGSCBD_MAX_PLAYERS_PER_MATCH = 20;
const TGSCBD_MAX_PLAYERS_PER_TEAM = 10;
const NUM_NON_SCORE_FIELDS = 3;

enum SCORE_BOARD_FIELD
{
	SBFIELD_LEVEL,
	SBFIELD_NAME,
	SBFIELD_AGENCY,
	SBFIELD_KILLS,
	SBFIELD_ASSISTS,
	SBFIELD_DMG_TAKEN,
	SBFIELD_DAMAGE,
	SBFIELD_BUFFS,
	SBFIELD_HEALING,
	SBFIELD_DEFENSE,
	SBFIELD_DEATHS,
	SBFIELD_OBJS,
	SBFIELD_KILLS_BOT,
	SBFIELD_MAX
};

struct native PlayerField
{
	var UIImage PlayerClassIcon;
	var UILabel FieldLabels[13];

	structdefaultproperties
	{
		PlayerClassIcon=none
		FieldLabels[0]=none
		FieldLabels[1]=none
		FieldLabels[2]=none
		FieldLabels[3]=none
		FieldLabels[4]=none
		FieldLabels[5]=none
		FieldLabels[6]=none
		FieldLabels[7]=none
		FieldLabels[8]=none
		FieldLabels[9]=none
		FieldLabels[10]=none
		FieldLabels[11]=none
		FieldLabels[12]=none
	}
};

var PlayerField m_PlayerFields[20];
var UIButton m_ScoreBoardHeaderButtons[13];
var UILabel m_HeaderLabels[13];
var TgUIScoreDetails.SCORE_BOARD_FIELD m_eCurrentSortField;
var UILabel m_AttWinProbValueLabel;
var UIPanel m_StatsPanel;
var TgStatsData m_StatsData;
var float m_fLastCopy;
var int m_LocalPlayerTaskForce;
var UIButton m_CloseButton;
var UIButton m_SummaryButton;
var UIButton m_DeviceStatsButton;
var UIButton m_EndMissionButton;
var bool m_GameOver;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function bool OnSceneKey(const out InputEventParameters EventParms);
native function bool OnFieldClicked(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnSummaryButton(const out InputEventParameters EventParms);
native function bool OnDeviceStatsButton(const out InputEventParameters EventParms);
native function bool OnEndMissionButton(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	local int iField;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneKey;
	NameConstToken-NameConstToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.NameConstToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())
	// Failed to decompile this line:
		// Failed to decompile this Function's code.
		200
Index was out of range. Must be non-negative and less than the size of the collection.
		Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
		   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}

defaultproperties
{
	m_fLastCopy=-1.00
}