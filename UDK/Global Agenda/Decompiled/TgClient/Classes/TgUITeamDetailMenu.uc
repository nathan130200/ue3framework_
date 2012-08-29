/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUITeamDetailMenu.uc
 * 
 * Stats:
 *	Constants:1
 *	Properties:22
 *	Functions:17
 *
 *******************************************************************************/
class TgUITeamDetailMenu extends TgUISceneDriver_Tooltip
	native;

const NUM_TAB_PANELS = 4;

var sTabButtonStruct m_TabStruct[4];
var UIButton m_wCloseButton;
var UIButton m_wRemoveButton;
var UIButton m_wPromoteButton;
var UIButton m_wLeaveButton;
var UIButton m_wStrikeForceButton;
var UIButton m_wRaidButton;
var UIButton m_wRaidButton2;
var UILabel m_wHeaderLabel;
var UIPanel m_RaidTimePanel;
var UILabel m_RaidTimeLabel;
var UILabel m_RaidTimeHeader;
var TgUIScrollList m_DetailScrollFrame;
var init array<init sInvitePlayerStruct> m_DetailList;
var TgUIScrollList m_MemberListScrollFrame;
var init array<init sTeamMemberStruct> m_MemberList;
var int m_nTeamUpdateSeq;
var float m_InviteTimer;
var int m_nSelectedMember;
var bool m_bOpenRefresh;
var bool m_bPlayerIsLeader;
var int m_nOwningAgencyId;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRemoveDelegate(const out InputEventParameters EventParms);
native function bool OnScenePromoteDelegate(const out InputEventParameters EventParms);
native function bool OnSceneLeaveDelegate(const out InputEventParameters EventParms);
native function bool OnTeamMemberDelegate(const out InputEventParameters EventParms);
native function bool OnSceneStrikeForceDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRaidDelegate(const out InputEventParameters EventParms);
native function bool OnSceneTeamDelegate(const out InputEventParameters EventParms);
native function bool OnSceneCargoDelegate(const out InputEventParameters EventParms);
native function bool OnSceneManageDelegate(const out InputEventParameters EventParms);
native function bool OnSceneMapDelegate(const out InputEventParameters EventParms);
native function bool SelectMemberByButton(UIButton Button);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	vect(0.00, 0.00, 512.00)
	// End:0x121 Loop:False
	MetaCastToken(NullReferenceException) -= @NULL(18433024);
	{
	}
	// End:0x183 Loop:False
	if(m_TabStruct[I].m_CargoTabButton != none)
	{
		m_TabStruct[I].m_CargoTabButton.__OnRawInputKey__Delegate = OnSceneCargoDelegate;
	}
	m_TabStruct[I].m_ManageTabButton;
	none
	)
	m_TabStruct[I].m_ManageTabButton.__OnRawInputKey__Delegate = OnSceneManageDelegate;
	m_TabStruct[I].m_MapTabButton;
	none
	)
	m_TabStruct[I].m_MapTabButton.__OnRawInputKey__Delegate = OnSceneMapDelegate;
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