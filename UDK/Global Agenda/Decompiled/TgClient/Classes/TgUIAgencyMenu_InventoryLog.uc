/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_InventoryLog.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:13
 *	Functions:7
 *
 *******************************************************************************/
class TgUIAgencyMenu_InventoryLog extends TgUIAgencyMenu
	native;

const TG_AGENCY_RESOURCE_EVENTS_VVG = 140;

struct native InventoryLogStruct
{
	var UIPrefabInstance LogInstance;
	var UILabel DateLabel;
	var UILabel TimeLabel;
	var UILabel PlayerLabel;
	var UILabel EventLabel;
	var UILabel ItemLabel;
	var UILabel QuantityLabel;

	structdefaultproperties
	{
		LogInstance=none
		DateLabel=none
		TimeLabel=none
		PlayerLabel=none
		EventLabel=none
		ItemLabel=none
		QuantityLabel=none
	}
};

var init array<init InventoryLogStruct> m_LogMembers;
var TgPlayerController m_PC;
var UIPanel m_SearchPanel;
var UIEditBox m_DateStartField;
var UIEditBox m_DateEndField;
var UIComboBox m_EventComboBox;
var UIEditBox m_NameEditBox;
var array<string> m_EventStringList;
var array<int> m_EventCodeList;
var UIButton m_SearchButton;
var TgUIScrollList m_LogScrollList;
var UIPanel m_ResultsPanel;
var sPagingPanel m_PagingPanel;

native function bool TickTgUIScene();
native function OpenTgUIScene();
native function FixupTgUIScene();
native function ResetFilters();
native function ResizeLogList(int nSize);
native function bool OnSearchButtonDelegate(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_SearchButton.__OnRawInputKey__Delegate = OnSearchButtonDelegate;
	return @NULL(324096);
	@NULL(-1610546944)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnPrevButton != return @NULL(324096);
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnNextButton != @NULL(34079232);
}

defaultproperties
{
	m_nPageSize=19
}