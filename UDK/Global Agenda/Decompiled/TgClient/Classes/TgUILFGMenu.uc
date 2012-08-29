/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUILFGMenu.uc
 * 
 * Stats:
 *	Constants:1
 *	Properties:23
 *	Functions:16
 *
 *******************************************************************************/
class TgUILFGMenu extends TgUISceneDriver_Tooltip
	native;

const NUM_TAB_PANELS = 4;

var sTabButtonStruct m_TabStruct[4];
var UIButton m_wCloseButton;
var UIButton m_wRemoveButton;
var UIButton m_wPromoteButton;
var UIButton m_wLeaveButton;
var UIButton m_wStrikeForceButton;
var TgUIScrollList m_MemberListScrollFrame;
var init array<init sTeamMemberStruct> m_MemberList;
var UIPanel m_RaidTimePanel;
var UILabel m_RaidTimeLabel;
var UILabel m_RaidTimeHeader;
var UILabel m_wHeaderLabel;
var UICheckbox m_wAgencyCheckbox;
var UICheckbox m_wAllianceCheckbox;
var UICheckbox m_wMercenaryCheckbox;
var UILabel m_wFeedbackLabel;
var UIButton m_wSubmitButton;
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
native function bool OnSceneTeamDelegate(const out InputEventParameters EventParms);
native function bool OnSceneDetailDelegate(const out InputEventParameters EventParms);
native function bool OnSceneCargoDelegate(const out InputEventParameters EventParms);
native function bool SelectMemberByButton(UIButton Button);
native function OnLFGCriteriaChanged(UIObject Sender, int PlayerIndex);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	self
	@NULL(201327872)
	@NULL(-54271)
	OnCloseButtonDelegate != self;
	@NULL(-54271)
	OnSceneRemoveDelegate != self;
	@NULL(-54271)
	OnScenePromoteDelegate != self;
	@NULL(-54271)
	OnSceneLeaveDelegate != self;
	@NULL(-54271)
	OnSceneStrikeForceDelegate != self;
	@NULL(-53247)
	OnLFGCriteriaChanged != self;
	@NULL(-53247)
	OnLFGCriteriaChanged != @NULL(-1224268544);
	@NULL(369372160)
	// End:0x121 Loop:False
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
	m_TabStruct[I].m_CargoTabButton.__OnRawInputKey__Delegate = OnSceneCargoDelegate;
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