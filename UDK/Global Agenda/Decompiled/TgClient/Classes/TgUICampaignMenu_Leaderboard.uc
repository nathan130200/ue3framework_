/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICampaignMenu_Leaderboard.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:5
 *	Functions:9
 *
 *******************************************************************************/
class TgUICampaignMenu_Leaderboard extends TgUICampaignMenu
	native;

const NUM_AVA_LEADERBOARD_ROWS = 19;

struct native AgencyStatsStruct
{
	var UIButton Button;
	var UILabel Rank;
	var UILabel AgencyName;
	var UILabel NetWorth;
	var UILabel Territories;
	var UILabel ProductionCapacity;
	var UIPanel mouseOverPanel;
	var UIPanel selectedHLPanel;
	var int nAgencyId;

	structdefaultproperties
	{
		Button=none
		Rank=none
		AgencyName=none
		NetWorth=none
		Territories=none
		ProductionCapacity=none
		mouseOverPanel=none
		selectedHLPanel=none
		nAgencyId=0
	}
};

var native Pointer m_pCurrentData;
var UIPanel m_LeaderboardPanel;
var sPagingPanel m_PagingPanel;
var AgencyStatsStruct m_AgencyStatsMembers[19];
var UIEditBox m_AgencyEntryField;

native function PostInitSceneDriver();
native function PostOpenScene();
native function bool TickTgUIScene();
native function FixupTgUIScene();
native function RegisterCallbacks();
native function OnAgencyValueChanged(UIObject Sender, int PlayerIndex);
native function OnAgencyRowStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, UIState PreviouslyActiveState);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_AgencyEntryField.__OnValueChanged__Delegate = OnAgencyValueChanged;
	return @NULL(324096);
	@NULL(-218038016)	
	@NULL(423886848)
	m_PagingPanel.PrevButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnPrevButton != @NULL(34079232);
}

event SetRowMouseoverDelegate(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__NotifyActiveStateChanged__Delegate = OnAgencyRowStateChange;
	}
}

defaultproperties
{
	m_CurrentTab=CAMPAIGN_PAGE_LEADERBOARD
}