/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICampaignMenu_Combat.uc
 * 
 * Stats:
 *	Enums:1
 *	Structs:2
 *	Properties:23
 *	Functions:26
 *
 *******************************************************************************/
class TgUICampaignMenu_Combat extends TgUICampaignMenu
	native;

enum eCombatSortType
{
	CST_FACILITY,
	CST_DEFENDER_NAME,
	CST_ATTACKER_NAME,
	CST_ZONE_NAME,
	CST_NUM_DEFENDERS,
	CST_NUM_ATTACKERS,
	CST_TIME,
	CST_ATTACK_STATUS,
	CST_MAX
};

struct native sCombatAlertDefender
{
	var UIButton Button;
	var UIImage Highlight;
	var UILabel ZoneName;
	var UILabel AttackerName;
	var UILabel FacilityName;
	var UILabel HexPosition;
	var UILabel PlayerCount;
	var UILabel Time;
	var int nZoneId;
	var int nHexPosition;
	var bool bAuction;

	structdefaultproperties
	{
		Button=none
		Highlight=none
		ZoneName=none
		AttackerName=none
		FacilityName=none
		HexPosition=none
		PlayerCount=none
		Time=none
		nZoneId=0
		nHexPosition=0
		bAuction=false
	}
};

struct native sCombatAlertAttacker
{
	var UIButton Button;
	var UIImage Highlight;
	var UILabel ZoneName;
	var UILabel DefenderName;
	var UILabel FacilityName;
	var UILabel HexPosition;
	var UILabel PlayerCount;
	var UILabel Status;
	var int nZoneId;
	var int nHexPosition;
	var bool bAuction;

	structdefaultproperties
	{
		Button=none
		Highlight=none
		ZoneName=none
		DefenderName=none
		FacilityName=none
		HexPosition=none
		PlayerCount=none
		Status=none
		nZoneId=0
		nHexPosition=0
		bAuction=false
	}
};

var TgUIScrollList m_DefenderScrollList;
var init array<init sCombatAlertDefender> m_DefenderListMembers;
var int m_nDefenderSelectedIndex;
var TgUICampaignMenu_Combat.eCombatSortType m_eDefenderSortType;
var TgUICampaignMenu_Combat.eCombatSortType m_eAttackerSortType;
var UICheckbox m_DefenderShowFull;
var UIButton m_DefenderJoinButton;
var UIButton m_DefenderKickTeamButton;
var UIButton m_DefenderSortFacility;
var UIButton m_DefenderSortAttacker;
var UIButton m_DefenderSortZone;
var UIButton m_DefenderSortPlayers;
var UIButton m_DefenderSortTime;
var TgUIScrollList m_AttackerScrollList;
var init array<init sCombatAlertAttacker> m_AttackerListMembers;
var int m_nAttackerSelectedIndex;
var UICheckbox m_AttackerShowFull;
var UIButton m_AttackerJoinButton;
var UIButton m_AttackerSortFacility;
var UIButton m_AttackerSortDefender;
var UIButton m_AttackerSortZone;
var UIButton m_AttackerSortPlayers;
var UIButton m_AttackerSortStatus;

native function bool OnACADataUpdated();
native function bool TickTgUIScene();
native function PostOpenScene();
native function FixupTgUIScene();
native function RegisterCallbacks();
native function UpdateDefenderList();
native function UpdateDefenderTimers();
native function ResizeDefenderList(int nSize);
native function SelectDefender(int nIndex);
native function DefenderUpdateHighlight();
native function OnDefenderFilterChanged(UIObject Sender, int PlayerIndex);
native function bool OnSelectDefender(const out InputEventParameters EventParms);
native function bool OnDefenderJoin(const out InputEventParameters EventParms);
native function bool OnDefenderKickTeam(const out InputEventParameters EventParms);
native function bool OnDefenderSetSort(const out InputEventParameters EventParms);
native function UpdateAttackerList();
native function ResizeAttackerList(int nSize);
native function SelectAttacker(int nIndex);
native function AttackerUpdateHighlight();
native function OnAttackerFilterChanged(UIObject Sender, int PlayerIndex);
native function bool OnSelectAttacker(const out InputEventParameters EventParms);
native function bool OnAttackerJoin(const out InputEventParameters EventParms);
native function bool OnAttackerSetSort(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_DefenderShowFull.__OnValueChanged__Delegate = OnDefenderFilterChanged;
	goto @NULL(201327872);
	@NULL(-54271)
	OnDefenderJoin != goto @NULL(201327872);
	OnDefenderKickTeam != goto @NULL(201327872);
	OnDefenderSetSort != goto @NULL(201327872);
	OnDefenderSetSort != goto @NULL(201327872);
	OnDefenderSetSort != goto @NULL(201327872);
	OnDefenderSetSort != goto @NULL(201327872);
	OnDefenderSetSort != goto @NULL(201327872);
	OnAttackerFilterChanged != goto @NULL(201327872);
	OnAttackerJoin != goto @NULL(201327872);
	OnAttackerSetSort != goto @NULL(201327872);
	OnAttackerSetSort != goto @NULL(201327872);
	OnAttackerSetSort != goto @NULL(201327872);
	OnAttackerSetSort != goto @NULL(201327872);
	OnAttackerSetSort != @NULL(34079232);
}

event SetSelectDefenderDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnSelectDefender;
	}
}

event SetSelectAttackerDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnSelectAttacker;
	}
}

defaultproperties
{
	m_nDefenderSelectedIndex=-1
	m_eDefenderSortType=CST_TIME
	m_eAttackerSortType=CST_ATTACK_STATUS
	m_nAttackerSelectedIndex=-1
	m_CurrentTab=CAMPAIGN_PAGE_COMBAT
}