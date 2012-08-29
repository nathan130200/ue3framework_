/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_General.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Structs:4
 *	Properties:15
 *	Functions:36
 *
 *******************************************************************************/
class TgUIAgencyMenu_General extends TgUIAgencyMenu
	native;

const TG_MAX_ENTRIES_PER_PAGE = 50;

enum AgencyPopupEditBoxMode
{
	POPUP_NONE,
	POPUP_MOTD,
	POPUP_PCOMMENT,
	POPUP_OCOMMENT,
	POPUP_MAX
};

struct native sAgencyMemberDisplay
{
	var UIImage memberClass;
	var UILabel memberName;
	var UILabel memberRank;
	var UILabel memberStatus;
	var UILabel memberLevel;
	var UIButton memberPanelButton;
	var UIImage memberHighlight;
	var UIPrefabInstance memberPanelInstance;
	var int nMemberPlayerId;

	structdefaultproperties
	{
		memberClass=none
		memberName=none
		memberRank=none
		memberStatus=none
		memberLevel=none
		memberPanelButton=none
		memberHighlight=none
		memberPanelInstance=none
		nMemberPlayerId=0
	}
};

struct native sCommentPanel
{
	var UIPanel panel;
	var UIButton editButton;
	var UILabel textLabel;

	structdefaultproperties
	{
		panel=none
		editButton=none
		textLabel=none
	}
};

struct native sMemberDetailPanel
{
	var UILabel nameLabel;
	var UIPanel detailPanel;
	var UILabel historyLabel;
	var UILabel rankValueLabel;
	var UILabel joinedValueLabel;
	var UILabel wlValueLabel;
	var UILabel lastOnlineValueLabel;
	var UIButton playerSearchHotlinkButton;
	var UIButton promoteMemberButton;
	var UIButton demoteMemberButton;
	var UIButton removeMemberButton;
	var UIButton teaminviteMemberButton;
	var sCommentPanel publicCommentPanel;
	var sCommentPanel officerCommentPanel;

	structdefaultproperties
	{
		nameLabel=none
		detailPanel=none
		historyLabel=none
		rankValueLabel=none
		joinedValueLabel=none
		wlValueLabel=none
		lastOnlineValueLabel=none
		playerSearchHotlinkButton=none
		promoteMemberButton=none
		demoteMemberButton=none
		removeMemberButton=none
		teaminviteMemberButton=none
		publicCommentPanel=(panel=none,editButton=none,textLabel=none)
		officerCommentPanel=(panel=none,editButton=none,textLabel=none)
	}
};

struct native sPopupTextEditPanel
{
	var UIPanel popupPanel;
	var UILabel popupHeaderLabel;
	var UIEditBox popupEditBox;
	var UIButton popupAcceptButton;
	var UIButton popupCancelButton;

	structdefaultproperties
	{
		popupPanel=none
		popupHeaderLabel=none
		popupEditBox=none
		popupAcceptButton=none
		popupCancelButton=none
	}
};

var UIPanel m_GeneralPagePanel;
var TgUIScrollList m_MemberListScrollFrame;
var init array<init sAgencyMemberDisplay> m_MemberListMembers;
var int m_SelectedPlayerId;
var sPopupTextEditPanel m_PopupEditField;
var TgUIAgencyMenu_General.AgencyPopupEditBoxMode m_CurrentEditBoxMode;
var UILabel m_AgencyNameLabel;
var UILabel m_AgencyNumMembersLabel;
var sCommentPanel m_MOTDPanel;
var UICheckbox m_ShowOfflineCheckbox;
var UILabelButton m_NameHeaderLabelButton;
var UILabelButton m_RankHeaderLabelButton;
var UILabelButton m_StatusHeaderLabelButton;
var sPagingPanel m_PagingPanel;
var sMemberDetailPanel m_MemberDetailPanel;

native noexport function UpdateMemberListDisplay(optional bool bNeedsResort)
{
	bNeedsResort = true;
}

native function UpdateDetailPanel(sAgencyMemberInfo selectedPlayer, sAgencyMemberInfo LocalPlayer);
native function UpdateHighlight();
native function bool SelectMemberByButton(UIButton Button);
native function bool SelectMember(int nPlayerId);
native function bool OnAgencyMenuKey(const out InputEventParameters EventParms);
native function PlayerSearchSelected();
native function PromoteSelected();
native function DemoteSelected();
native function RemoveSelected();
native function TeamInviteSelected();
native function FixupWidgets();
native function PreCloseScene();
native function PostOpenScene();
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_ShowOfflineCheckbox.__OnValueChanged__Delegate = OnShowOfflineCheckBoxChanged;
	// End:0x00 Loop:False
	if(if(@NULL(127795457))
		goto J0x00 && @NULL(201327872))
		goto J0x00;
	// End:0x00 Loop:False
	OnChangeMOTDButtonKey != if(switch(@NULL(-54271)))
		goto J0x00;
	{
		{
			{
				// End:0x00 Loop:False
				if(switch(@NULL(-54271)))
					goto J0x00;
				{
					OnPrevButton != return @NULL(324096);
					// End:0x00 Loop:False
					if(switch(@NULL(-54271)))
						goto J0x00;
					{
						OnNextButton != return @NULL(324096);
						// End:0x00 Loop:False
						if(switch(@NULL(-54271)))
							goto J0x00;
						{
							OnFirstButton != return @NULL(324096);
							// End:0x00 Loop:False
							if(switch(@NULL(-54271)))
								goto J0x00;
							{
								// End:0x00 Loop:False
								OnLastButton != if(if(@NULL(127402241))
									goto J0x00 / @NULL(201327872))
									goto J0x00;
								{
									// End:0x00 Loop:False
									OnChangePublicCommentButtonKey != if(if(@NULL(126039296))
										goto J0x00 && @NULL(495872))
										goto J0x00;
									{
										// End:0x00 Loop:False
										OnChangeOfficerCommentButtonKey != if(if(@NULL(128057601))
											goto J0x00 > @NULL(201327872))
											goto J0x00;
}

function OnShowOfflineCheckBoxChanged(UIObject Sender, int PlayerIndex)
{
	local int nCurrentFilter;

	// End:0xad Loop:False
	if(Sender == m_ShowOfflineCheckbox)
	{
		// End:0xa2 Loop:False
		if(GetAgencyData() != none && (m_ShowOfflineCheckbox != none))
		{
			nCurrentFilter = GetAgencyData().m_CurrentFilter;
			// End:0x81 Loop:False
			if(!m_ShowOfflineCheckbox.IsChecked())
			{
				GetAgencyData().SetFilter(nCurrentFilter & ~1);
			}
			// End:0xa2
			else
			{
				GetAgencyData().SetFilter(nCurrentFilter | 1);
			}
		}
		UpdateMemberListDisplay();
	}
}

function bool OnSelectMember(const out InputEventParameters EventParms)
{
	// End:0x79 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectMemberByButton(UIButton(EventParms.UIObjectReference));
		return true;
	}
	return false;
}

function bool OnNameHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x94 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x86 Loop:False
		if(GetAgencyData().m_CurrentSortType == 0)
		{
			SetMemberListSortType(1);
		}
		// End:0x92
		else
		{
			SetMemberListSortType(0);
		}
		return true;
	}
	return false;
}

function bool OnRankHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x94 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x86 Loop:False
		if(GetAgencyData().m_CurrentSortType == 2)
		{
			SetMemberListSortType(3);
		}
		// End:0x92
		else
		{
			SetMemberListSortType(2);
		}
		return true;
	}
	return false;
}

function bool OnStatusHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x94 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x86 Loop:False
		if(GetAgencyData().m_CurrentSortType == 4)
		{
			SetMemberListSortType(5);
		}
		// End:0x92
		else
		{
			SetMemberListSortType(4);
		}
		return true;
	}
	return false;
}

function bool OnSearchHotlinkKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		PlayerSearchSelected();
		return true;
	}
	return false;
}

function bool OnPromoteButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		PromoteSelected();
		return true;
	}
	return false;
}

function bool OnDemoteButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		DemoteSelected();
		return true;
	}
	return false;
}

function bool OnRemoveButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		RemoveSelected();
		return true;
	}
	return false;
}

function bool OnTeamInviteButtonKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		TeamInviteSelected();
		return true;
	}
	return false;
}

event SetupPopupTextEditPanel(TgUIAgencyMenu_General.AgencyPopupEditBoxMode NewMode)
{
	local sAgencyMemberInfo selectedPlayerInfo;
	local bool bFoundPlayer;
	local string sNewMessage, sNewHeader;

	// End:0x18 Loop:False
	if(m_PopupEditField.popupPanel == none)
	{
		return;
	}
	bFoundPlayer = false;
	// End:0x6d Loop:False
	if(m_SelectedPlayerId > 0)
	{
		selectedPlayerInfo = GetAgencyData().GetMemberInfo(m_SelectedPlayerId);
		bFoundPlayer = selectedPlayerInfo.nMemberPlayerId == m_SelectedPlayerId;
	}
	// End:0xa4 Loop:False
	if(!bFoundPlayer && (NewMode == 2 || (NewMode == 3)))
	{
		NewMode = 0;
	}
	m_CurrentEditBoxMode = NewMode;
	// BlockSize:1
	switch(NewMode)
	{
		// End:0xe5
		case 1:
			sNewMessage = GetAgencyData().m_MOTD;
			sNewHeader = "MOTD";
			// End:0x17d
			break;
		// End:0x12f
		case 2:
			sNewMessage = selectedPlayerInfo.sPublicComment;
			sNewHeader = "Public Message for" @ selectedPlayerInfo.sMemberName;
			// End:0x17d
			break;
		// End:0x17a
		case 3:
			sNewMessage = selectedPlayerInfo.sOfficerComment;
			sNewHeader = "Officer Message for" @ selectedPlayerInfo.sMemberName;
			// End:0x17d
			break;
		// End:0xffff
		default:
			// End:0x21e Loop:False
			if(NewMode != 0)
			{
				m_PopupEditField.popupPanel.SetVisibility(true);
				// End:0x1e5 Loop:False
				if(m_PopupEditField.popupEditBox != none)
				{
					m_PopupEditField.popupEditBox.SetValue(sNewMessage);
				}
				// End:0x21b Loop:False
				if(m_PopupEditField.popupHeaderLabel != none)
				{
					m_PopupEditField.popupHeaderLabel.SetValue(sNewHeader);
				}
			}
			// End:0x23e
			else
			{
				m_PopupEditField.popupPanel.SetVisibility(false);
			}
}

function bool OnPopupPanelAccept(const out InputEventParameters EventParms)
{
	// End:0x53 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SubmitPopupEditBox();
		SetupPopupTextEditPanel(0);
		return true;
	}
	return false;
}

function bool OnPopupPanelCancel(const out InputEventParameters EventParms)
{
	// End:0x49 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SetupPopupTextEditPanel(0);
		return true;
	}
	return false;
}

function bool OnPopupSubmitText(UIEditBox ebox, int PlayerIndex)
{
	// End:0x1c Loop:False
	if(true)
	{
		SubmitPopupEditBox();
		SetupPopupTextEditPanel(0);
		return true;
	}
	return false;
}

event SubmitPopupEditBox()
{
	local string sNewText;

	// End:0xbf Loop:False
	if(m_PopupEditField.popupEditBox != none)
	{
		sNewText = m_PopupEditField.popupEditBox.GetValue();
		// BlockSize:1
		switch(m_CurrentEditBoxMode)
		{
			// End:0x66
			case 1:
				GetAgencyData().SetMOTD(sNewText);
				// End:0xbf
				break;
			// End:0x91
			case 2:
				GetAgencyData().SetPublicComment(m_SelectedPlayerId, sNewText);
				// End:0xbf
				break;
			// End:0xbc
			case 3:
				GetAgencyData().SetOfficerComment(m_SelectedPlayerId, sNewText);
				// End:0xbf
				break;
			// End:0xffff
			default:
			}
}

function bool OnChangeMOTDButtonKey(const out InputEventParameters EventParms)
{
	// End:0x49 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SetupPopupTextEditPanel(1);
		return true;
	}
	return false;
}

function bool OnChangePublicCommentButtonKey(const out InputEventParameters EventParms)
{
	// End:0x49 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SetupPopupTextEditPanel(2);
		return true;
	}
	return false;
}

function bool OnChangeOfficerCommentButtonKey(const out InputEventParameters EventParms)
{
	// End:0x49 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		SetupPopupTextEditPanel(3);
		return true;
	}
	return false;
}

event SetRawInputKeyForMemberList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnSelectMember;
	}
}

event SetMemberListSortType(TgAgencyData.TG_AGENCY_SORT SortType)
{
	// End:0x47 Loop:False
	if(GetAgencyData().m_CurrentSortType != SortType)
	{
		GetAgencyData().m_CurrentSortType = SortType;
		UpdateMemberListDisplay();
	}
}

defaultproperties
{
	m_SelectedPlayerId=-1
}