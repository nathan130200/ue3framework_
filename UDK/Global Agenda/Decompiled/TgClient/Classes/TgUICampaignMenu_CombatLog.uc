/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICampaignMenu_CombatLog.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:14
 *	Functions:7
 *
 *******************************************************************************/
class TgUICampaignMenu_CombatLog extends TgUICampaignMenu
	native;

const TG_ITEM_COMBAT_OUTCOME_VVG = 151;

struct native CombatLogStruct
{
	var UIPrefabInstance LogInstance;
	var UILabel Date;
	var UILabel Time;
	var UILabel Facility;
	var UILabel HexNumber;
	var UILabel OwnersAlliance;
	var UILabel OwnersAgency;
	var UILabel AttackedByAlliance;
	var UILabel AttackedByAgency;
	var UILabel Outcome;

	structdefaultproperties
	{
		LogInstance=none
		Date=none
		Time=none
		Facility=none
		HexNumber=none
		OwnersAlliance=none
		OwnersAgency=none
		AttackedByAlliance=none
		AttackedByAgency=none
		Outcome=none
	}
};

var init array<init CombatLogStruct> m_LogMembers;
var TgPlayerController m_PC;
var TgUIScrollList m_LogScrollList;
var UIPanel m_ResultsPanel;
var UIComboBox m_ZoneComboBox;
var UIPanel m_SearchPanel;
var UIButton m_SearchButton;
var UIButton m_ResetButton;
var UIEditBox m_AgencyEntryField;
var UIComboBox m_OutcomeComboBox;
var array<string> m_OutcomeStringList;
var array<int> m_OutcomeCodeList;
var UIEditBox m_DateStartField;
var UIEditBox m_DateEndField;

native function bool TickTgUIScene();
native function FixupTgUIScene();
native function ResetFilters();
native function ResizeLogList(int nSize);
native function bool OnSearchButtonDelegate(const out InputEventParameters EventParms);
native function bool OnResetButtonDelegate(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_SearchButton.__OnRawInputKey__Delegate = OnSearchButtonDelegate;	
	@NULL(423886848)
	m_AgencyEntryField
	// BlockSize:3072
	switch(@NULL(-54015))
	{
		OnNotifyEditBoxStateChanged != ;
		m_DateEndField
		// BlockSize:3072
		switch(@NULL(-54015))
		{
			OnNotifyEditBoxStateChanged != @NULL(34079232);
}

defaultproperties
{
	m_CurrentTab=CAMPAIGN_PAGE_COMBAT_LOG
}