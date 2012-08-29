/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICargoMenu.uc
 * 
 * Stats:
 *	Constants:2
 *	Structs:4
 *	Properties:33
 *	Functions:31
 *
 *******************************************************************************/
class TgUICargoMenu extends TgUISceneDriver_Tooltip
	native;

const RM_MAX_TEAM_COUNT = 6;
const NUM_TAB_PANELS = 4;

struct native sSFItem
{
	var int m_nInventoryId;
	var int m_nItemId;
	var int m_nInstanceCount;
	var int m_nTaskTeam;

	structdefaultproperties
	{
		m_nInventoryId=0
		m_nItemId=0
		m_nInstanceCount=0
		m_nTaskTeam=0
	}
};

struct native sDropshipItem
{
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var sSFItem sItem;
	var int nBuildingId;
	var UILabel m_HeaderLabel;
	var UIButton m_wAddButton;
	var UIButton m_wRemoveButton;
	var UILabel m_wDescLabel;
	var UILabel m_wPlayerLabel;
	var UILabel m_wCargoLabel;

	structdefaultproperties
	{
		wItem=none
		sItem=(m_nInventoryId=0,m_nItemId=0,m_nInstanceCount=0,m_nTaskTeam=0)
		nBuildingId=0
		m_HeaderLabel=none
		m_wAddButton=none
		m_wRemoveButton=none
		m_wDescLabel=none
		m_wPlayerLabel=none
		m_wCargoLabel=none
	}
};

struct native sCargoItem
{
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var UIButton m_wCargoButton;
	var UILabel m_wAmountLabel;
	var UILabel m_wNameLabel;
	var UILabel m_wSizeLabel;
	var UIImage m_wHighlight;

	structdefaultproperties
	{
		wItem=none
		m_wCargoButton=none
		m_wAmountLabel=none
		m_wNameLabel=none
		m_wSizeLabel=none
		m_wHighlight=none
	}
};

struct native sSFSelectStruct
{
	var UIButton m_wSFButton;
	var UILabel m_wSFLabel;
	var UIImage m_wSFImage;

	structdefaultproperties
	{
		m_wSFButton=none
		m_wSFLabel=none
		m_wSFImage=none
	}
};

var UIPanel m_SFSelectPanel;
var sSFSelectStruct m_SFSelect[6];
var int m_nSelectedSF;
var sTabButtonStruct m_TabStruct[4];
var init array<init sSFItem> m_SFInventoryList;
var init array<init sSFItem> m_RaidInventoryList;
var UIButton m_wCloseButton;
var UIButton m_wRemoveButton;
var UIButton m_wPromoteButton;
var UIButton m_wLeaveButton;
var UIButton m_wAddCargoButton;
var UIButton m_wRemoveCargoButton;
var UIButton m_wRaidButton;
var UILabel m_wHeaderLabel;
var UIPanel m_RaidTimePanel;
var UILabel m_RaidTimeLabel;
var UILabel m_RaidTimeHeader;
var UIPanel m_AmountPanel;
var UIEditBox m_AmountEditBox;
var UILabel m_CargoHeaderLabel;
var UILabel m_CargoTotalLabel;
var int m_nTotalCargoSize;
var sDropshipItem m_DropshipItem;
var TgUIScrollList m_MemberListScrollFrame;
var init array<init sTeamMemberStruct> m_MemberList;
var TgUIScrollList m_CargoListScrollFrame;
var init array<init sCargoItem> m_CargoList;
var int m_nTeamUpdateSeq;
var int m_nSelectedMember;
var int m_nSelectedCargo;
var bool m_bOpenRefresh;
var bool m_bPlayerIsLeader;
var int m_nOwningAgencyId;

native function PostInitSceneDriver();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function RegisterCallbacks();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRemoveDelegate(const out InputEventParameters EventParms);
native function bool OnScenePromoteDelegate(const out InputEventParameters EventParms);
native function bool OnSceneLeaveDelegate(const out InputEventParameters EventParms);
native function bool OnTeamMemberDelegate(const out InputEventParameters EventParms);
native function bool OnCargoListDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRaidDelegate(const out InputEventParameters EventParms);
native function bool OnSceneTeamDelegate(const out InputEventParameters EventParms);
native function bool OnSceneDetailDelegate(const out InputEventParameters EventParms);
native function bool OnSceneManageDelegate(const out InputEventParameters EventParms);
native function bool OnSceneMapDelegate(const out InputEventParameters EventParms);
native function bool OnSelectSFTeamDelegate(const out InputEventParameters EventParms);
native function bool OnDropshipAddDelegate(const out InputEventParameters EventParms);
native function bool OnDropshipRemoveDelegate(const out InputEventParameters EventParms);
native function bool OnCargoAddDelegate(const out InputEventParameters EventParms);
native function bool OnCargoRemoveDelegate(const out InputEventParameters EventParms);
native noexport function OnDropshipItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnCargoItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function OnAmountChangedDelegate(UIObject Sender, int PlayerIndex);
native function bool SelectMemberByButton(UIButton Button);
native function bool SelectCargoByButton(UIButton Button);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	@NULL(201327872) = @NULL(-54271);
	OnCloseButtonDelegate != @NULL(201327872) = @NULL(-54271);
	OnDropshipAddDelegate != @NULL(997632) = @NULL(1342243072);
	OnDropshipRemoveDelegate != @NULL(201327872) = @NULL(-54271);
	@NULL(369372160)
	// End:0x182 Loop:False
	if(m_TabStruct[I].m_SearchTabButton != none)
	{
		m_TabStruct[I].m_SearchTabButton.__OnRawInputKey__Delegate = OnSceneTeamDelegate;
	}
	m_TabStruct[I].m_DetailTabButton;
	none
	)
	m_TabStruct[I].m_DetailTabButton.__OnRawInputKey__Delegate = OnSceneDetailDelegate;
	m_TabStruct[I].m_CargoTabButton;
	none
	)
	// End:0x22a Loop:False
	if(m_TabStruct[I].m_ManageTabButton != none)
	{
		m_TabStruct[I].m_ManageTabButton.__OnRawInputKey__Delegate = OnSceneManageDelegate;
	}
	m_TabStruct[I].m_MapTabButton;
	none
	)
	m_TabStruct[I].m_MapTabButton.__OnRawInputKey__Delegate = OnSceneMapDelegate;
	@NULL(805705216)
	@NULL(263389199)
	@NULL(-586734336)
	default.@NULL(263389334)
	@NULL(369503232)
	// End:0x2d3 Loop:False
	if(m_SFSelect[I].m_wSFButton != none)
	{
		m_SFSelect[I].m_wSFButton.__OnRawInputKey__Delegate = OnSelectSFTeamDelegate;
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

event SetRawInputKeyForCargoList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnCargoListDelegate;
	}
}

event SetDropshipItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnDropshipItemStateChange;
	}
}

event SetCargoItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnCargoItemStateChange;
	}
}

defaultproperties
{
	m_bHookChat=true
	m_bIgnoreLoadCheck=true
}