/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUITeamMenu.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:1
 *	Structs:3
 *	Properties:40
 *	Functions:34
 *
 *******************************************************************************/
class TgUITeamMenu extends TgUISceneDriver_Tooltip
	native;

const NUM_SEARCH_SORT_FIELDS = 6;
const NUM_TAB_PANELS = 4;

enum ePlayerSearchSort
{
	SORT_CLASS,
	SORT_NAME,
	SORT_ALLIANCE,
	SORT_AGENCY,
	SORT_LEVEL,
	SORT_SKILL,
	SORT_STATUS,
	SORT_MAX
};

struct native sTabButtonStruct
{
	var UIPanel m_TabPanel;
	var UIButton m_SearchTabButton;
	var UIButton m_DetailTabButton;
	var UIButton m_CargoTabButton;
	var UIButton m_ManageTabButton;
	var UIButton m_MapTabButton;

	structdefaultproperties
	{
		m_TabPanel=none
		m_SearchTabButton=none
		m_DetailTabButton=none
		m_CargoTabButton=none
		m_ManageTabButton=none
		m_MapTabButton=none
	}
};

struct native sInvitePlayerStruct
{
	var UIPrefabInstance ipsInviteInstance;
	var UIButton ipsInviteButton;
	var UIImage ipsInviteIcon;
	var UILabel ipsInviteName;
	var UILabel ipsInviteAgency;
	var UILabel ipsInviteAlliance;
	var UILabel ipsInviteLevel;
	var UIImage ipsInviteSkill;
	var UILabel ipsInviteStatus;
	var UIImage ipsInviteHighlight;

	structdefaultproperties
	{
		ipsInviteInstance=none
		ipsInviteButton=none
		ipsInviteIcon=none
		ipsInviteName=none
		ipsInviteAgency=none
		ipsInviteAlliance=none
		ipsInviteLevel=none
		ipsInviteSkill=none
		ipsInviteStatus=none
		ipsInviteHighlight=none
	}
};

struct native sTeamMemberStruct
{
	var UIButton tmsMemberButton;
	var UIImage tmsMemberIcon;
	var UIImage tmsMemberDisconnect;
	var UILabel tmsMemberName;
	var UIImage tmsMemberLeader;
	var UIImage tmsMemberHighlight;
	var int tmsCharacterId;
	var bool tmsMemberSelected;

	structdefaultproperties
	{
		tmsMemberButton=none
		tmsMemberIcon=none
		tmsMemberDisconnect=none
		tmsMemberName=none
		tmsMemberLeader=none
		tmsMemberHighlight=none
		tmsCharacterId=0
		tmsMemberSelected=false
	}
};

var sTabButtonStruct m_TabStruct[4];
var UIButton m_wCloseButton;
var UIButton m_wResetButton;
var UIButton m_wSearchButton;
var UIButton m_wInviteButton;
var UIButton m_wMessageButton;
var UICheckbox m_wAvATeamSearchCheckbox;
var UIButton m_wRemoveButton;
var UIButton m_wPromoteButton;
var UIButton m_wLeaveButton;
var UIButton m_wStrikeForceButton;
var UIButton m_wRaidButton;
var UIButton m_wRaidButton2;
var UILabelButton m_wSortHeaderButton[6];
var UILabel m_wHeaderLabel;
var UIPanel m_RaidTimePanel;
var UILabel m_RaidTimeLabel;
var UILabel m_RaidTimeHeader;
var UIEditBox m_wNameSearchBox;
var UIEditBox m_wAllianceSearchBox;
var UIEditBox m_wAgencySearchBox;
var UIEditBox m_wLevelMinSearchBox;
var UIEditBox m_wLevelMaxSearchBox;
var UIComboBox m_wClassComboBox;
var UIComboBox m_wStatusComboBox;
var TgDataInterface m_TeamDataInterface;
var TgDataSet m_PlayerSearchDataSet;
var TgUITeamMenu.ePlayerSearchSort m_CurrentSortType;
var bool m_bAscendingSort;
var bool m_bOpenRefresh;
var bool m_bPlayerIsLeader;
var TgUIScrollList m_InviteScrollFrame;
var init array<init sInvitePlayerStruct> m_InviteList;
var TgUIScrollList m_MemberListScrollFrame;
var init array<init sTeamMemberStruct> m_MemberList;
var int m_nTeamUpdateSeq;
var float m_InviteTimer;
var int m_nSelectedItem;
var int m_nSelectedMember;
var int m_nOwningAgencyId;

native function PostInitSceneDriver();
native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function PrepopulatedSearch(string sPlayerName, string sAgencyName, string sAllianceName);
native function PrepopulatedSearchById(int nPlayerId);
native function ResetFields();
native function SearchFromFields();
native function Search();
native function SortSearchResults();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSceneResetDelegate(const out InputEventParameters EventParms);
native function bool OnSceneSearchDelegate(const out InputEventParameters EventParms);
native function bool OnSceneInviteDelegate(const out InputEventParameters EventParms);
native function bool OnSceneMessageDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRemoveDelegate(const out InputEventParameters EventParms);
native function bool OnScenePromoteDelegate(const out InputEventParameters EventParms);
native function bool OnSceneLeaveDelegate(const out InputEventParameters EventParms);
native function bool OnTeamMemberDelegate(const out InputEventParameters EventParms);
native function bool OnSelectPlayer(const out InputEventParameters EventParms);
native function bool OnSceneStrikeForceDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRaidDelegate(const out InputEventParameters EventParms);
native function bool OnSceneCargoDelegate(const out InputEventParameters EventParms);
native function bool OnSceneDetailDelegate(const out InputEventParameters EventParms);
native function bool OnSceneManageDelegate(const out InputEventParameters EventParms);
native function bool OnSceneMapDelegate(const out InputEventParameters EventParms);
native function bool OnSceneSortDelegate(const out InputEventParameters EventParms);
native function bool SelectMemberByButton(UIButton Button);
native function bool SelectPlayerByButton(UIButton Button);
native function GetPlayerSearchCallback(int eType);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnCloseButtonDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneSearchDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneResetDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneInviteDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneMessageDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneRemoveDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnScenePromoteDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneLeaveDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneStrikeForceDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneRaidDelegate
	0
	@NULL(786437)
	__OnRawInputKey__Delegate
	OnSceneRaidDelegate
	0
	@NULL(786437)
	__NotifyActiveStateChanged__Delegate
	OnNotifyEditBoxStateChanged
	0
	@NULL(786437)
	__NotifyActiveStateChanged__Delegate
	OnNotifyEditBoxStateChanged
	0
	@NULL(786437)
	__NotifyActiveStateChanged__Delegate
	OnNotifyEditBoxStateChanged
	0
	@NULL(786437)
	__NotifyActiveStateChanged__Delegate
	OnNotifyEditBoxStateChanged
	0
	@NULL(786437)
	__NotifyActiveStateChanged__Delegate
	OnNotifyEditBoxStateChanged
	@NULL(-452516608)
	@NULL(613941398)
	@NULL(369503232)
	m_wSortHeaderButton[I].__OnRawInputKey__Delegate = OnSceneSortDelegate;
	@NULL(-1341778432)
	@NULL(613941263)
	@NULL(906437888)
	UnknownExprToken(0x03)
	I < 4;
	// End:0x214 Loop:False
	if(m_TabStruct[I].m_SearchTabButton != none)
	{
	}
	// End:0x25a Loop:False
	if(m_TabStruct[I].m_DetailTabButton != none)
	{
		m_TabStruct[I].m_DetailTabButton.__OnRawInputKey__Delegate = OnSceneDetailDelegate;
	}
	m_TabStruct[I].m_CargoTabButton;
	none
	)
	m_TabStruct[I].m_CargoTabButton.__OnRawInputKey__Delegate = OnSceneCargoDelegate;
	m_TabStruct[I].m_ManageTabButton;
	none
	)
	m_TabStruct[I].m_ManageTabButton.__OnRawInputKey__Delegate = OnSceneManageDelegate;
	m_TabStruct[I].m_MapTabButton;
	none
	)
	m_TabStruct[I].m_MapTabButton.__OnRawInputKey__Delegate = OnSceneMapDelegate;
}

event SetRawInputKeyForPlayerList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnSelectPlayer;
	}
}

event SetRawInputKeyForMemberList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnTeamMemberDelegate;
	}
}

defaultproperties
{
	m_bHookChat=true
}