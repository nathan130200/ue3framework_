/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPlayerSearchMenu.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:2
 *	Structs:3
 *	Properties:40
 *	Functions:46
 *
 *******************************************************************************/
class TgUIPlayerSearchMenu extends TgUISceneDriver
	native;

const TG_NUM_SEARCH_RESULT_ENTRIES = 16;

enum TG_PLAYERSEARCH_SORT
{
	PLAYERSEARCH_SORT_CLASS,
	PLAYERSEARCH_SORT_NAME,
	PLAYERSEARCH_SORT_AGENCY,
	PLAYERSEARCH_SORT_ALLIANCE,
	PLAYERSEARCH_SORT_FACTION,
	PLAYERSEARCH_SORT_LEVEL,
	PLAYERSEARCH_SORT_LOCATION,
	PLAYERSEARCH_SORT_TEAMSTATUS,
	PLAYERSEARCH_SORT_MAX
};

enum TG_PLAYERSEARCH_DETAILINDEX
{
	DETAIL_INDEX_CLASS,
	DETAIL_INDEX_LEVEL,
	DETAIL_INDEX_AGENCY,
	DETAIL_INDEX_ALLIANCE,
	DETAIL_INDEX_LOCATION,
	DETAIL_INDEX_HISTORY_HEADER,
	DETAIL_INDEX_HISTORY_CURRENT,
	DETAIL_INDEX_HISTORY_PREV1,
	DETAIL_INDEX_HISTORY_PREV2,
	DETAIL_INDEX_HISTORY_PREV3,
	DETAIL_INDEX_MAX
};

struct native sSearchResultDisplay
{
	var UIPrefabInstance resultPrefabInstance;
	var UIButton resultButton;
	var UIImage resultHighlight;
	var UIImage resultClass;
	var UILabel resultName;
	var UILabel resultAgency;
	var UILabel resultAlliance;
	var UILabel resultFaction;
	var UILabel resultLevel;
	var UILabel resultLocation;
	var UILabel resultTeamStatus;
	var int resultPlayerId;

	structdefaultproperties
	{
		resultPrefabInstance=none
		resultButton=none
		resultHighlight=none
		resultClass=none
		resultName=none
		resultAgency=none
		resultAlliance=none
		resultFaction=none
		resultLevel=none
		resultLocation=none
		resultTeamStatus=none
		resultPlayerId=0
	}
};

struct native sSearchResultDetailEntry
{
	var UILabel detailEntryField;
	var UILabel detailEntryValue;

	structdefaultproperties
	{
		detailEntryField=none
		detailEntryValue=none
	}
};

struct native sSearchResultDetailDisplay
{
	var UIPanel detailPanel;
	var UILabel detailName;
	var sSearchResultDetailEntry detailEntries[16];

	structdefaultproperties
	{
		detailPanel=none
		detailName=none
		detailEntries[0]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[1]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[2]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[3]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[4]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[5]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[6]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[7]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[8]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[9]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[10]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[11]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[12]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[13]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[14]=(detailEntryField=none,detailEntryValue=none)
		detailEntries[15]=(detailEntryField=none,detailEntryValue=none)
	}
};

var TgDataSet m_PlayerSearchDataSet;
var TgDataInterface m_PlayerSearchDataInterface;
var TgUIPlayerSearchMenu.TG_PLAYERSEARCH_SORT m_CurrentSortType;
var bool m_bAscendingSort;
var UIPanel m_ResultPanel;
var UIPanel m_ResultListPanel;
var TgUIScrollList m_ResultScrollFrame;
var init array<init sSearchResultDisplay> m_ResultListMembers;
var int m_SelectedPlayerId;
var int m_nCurrentPage;
var sSearchResultDetailDisplay m_DetailPanel;
var UIButton m_ClassHeaderLabelButton;
var UIButton m_NameHeaderLabelButton;
var UIButton m_AgencyHeaderLabelButton;
var UIButton m_AllianceHeaderLabelButton;
var UIButton m_FactionHeaderLabelButton;
var UIButton m_LevelHeaderLabelButton;
var UIButton m_LocationHeaderLabelButton;
var UIButton m_InTeamStatusHeaderLabelButton;
var UIPanel m_SelectionButtonPanel;
var UIButton m_SendMessageSelectedButton;
var UIButton m_InviteSelectedButton;
var UIPanel m_PagingPanel;
var UIButton m_LastPageButton;
var UIButton m_FirstPageButton;
var UIButton m_PrevPageButton;
var UIButton m_NextPageButton;
var UILabel m_PageNumberLabel;
var UIPanel m_SearchPanel;
var UIEditBox m_PlayerNameEditbox;
var UIEditBox m_AgencyNameEditbox;
var UIEditBox m_AllianceNameEditbox;
var UIEditBox m_MinimumLevelEditbox;
var UIEditBox m_MaximumLevelEditbox;
var UIComboBox m_TeamStatusComboBox;
var UIComboBox m_ClassComboBox;
var UIComboBox m_FactionComboBox;
var UIButton m_SearchButton;
var UIButton m_ResetButton;
var UIButton m_CloseButton;

native function ResetFields();
native function PrepopulatedSearch(string sPlayerName, string sAgencyName, string sAllianceName);
native function PrepopulatedSearchById(int nPlayerId);
native function SearchFromFields();
native function Search();
native function GetPlayerSearchCallback(int eType);
native function UpdateResultListDisplay();
native function UpdateDetailPanel(int nPlayerId);
native function UpdateHighlight();
native function bool SelectResultByButton(UIButton Button);
native function bool SelectResult(int nPlayerId);
native function InviteSelected();
native function PlayerSelected();
native function SendMessageSelected();
native function LastPage();
native function FirstPage();
native function PrevPage();
native function NextPage();
native function bool OnSearchMenuKey(const out InputEventParameters EventParms);
native function PostInitSceneDriver();
native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function SetParentUIScene(TgUISceneDriver Scene);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSearchMenuKey;
	VirtualFunctionToken-VirtualFunctionToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.VirtualFunctionToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile());
	// Failed to decompile this line:
		// Failed to decompile this Function's code.
		715
Index was out of range. Must be non-negative and less than the size of the collection.
		Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
		   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
}

function bool OnSelectResult(const out InputEventParameters EventParms)
{
	// End:0x79 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectResultByButton(UIButton(EventParms.UIObjectReference));
		return true;
	}
	return false;
}

function bool OnFirstPageKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		FirstPage();
		return true;
	}
	return false;
}

function bool OnLastPageKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		LastPage();
		return true;
	}
	return false;
}

function bool OnPrevPageKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		PrevPage();
		return true;
	}
	return false;
}

function bool OnNextPageKey(const out InputEventParameters EventParms)
{
	// End:0x47 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		NextPage();
		return true;
	}
	return false;
}

function bool OnClassHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 0)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 0;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnNameHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 1)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 1;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnAgencyHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 2)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 2;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnAllianceHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 3)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 3;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnFactionHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 4)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 4;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnLevelHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 5)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 5;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnLocationHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 6)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 6;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnTeamStatusHeaderKey(const out InputEventParameters EventParms)
{
	// End:0x96 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		// End:0x7a Loop:False
		if(m_CurrentSortType == 7)
		{
			m_bAscendingSort = !m_bAscendingSort;
		}
		// End:0x8a
		else
		{
			m_CurrentSortType = 7;
			m_bAscendingSort = true;
		}
		Search();
		return true;
	}
	return false;
}

function bool OnInviteSelected(const out InputEventParameters EventParms)
{
	// End:0x5f Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		// End:0x53 Loop:False
		if(m_ParentScene != none)
		{
			PlayerSelected();
		}
		// End:0x5d
		else
		{
			InviteSelected();
		}
		return true;
	}
	return false;
}

function bool OnSendMessageSelected(const out InputEventParameters EventParms)
{
	// End:0x52 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		// End:0x50 Loop:False
		if(m_ParentScene == none)
		{
			SendMessageSelected();
		}
		return true;
	}
	return false;
}

event SetRawInputKeyForResultsList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnSelectResult;
	}
}

function bool OnSearchKey(const out InputEventParameters EventParms)
{
	// End:0x67 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SearchFromFields();
		return true;
	}
	// End:0xcf
	else
	{
		// End:0xcf Loop:False
		if(EventParms.InputKeyName == 'Tab' && (EventParms.EventType == 0))
		{
			// End:0xc3 Loop:False
			if(EventParms.bShiftPressed)
			{
				SetPreviousWidgetFocused();
			}
			// End:0xcd
			else
			{
				SetNextWidgetFocused();
			}
			return true;
		}
	}
	return false;
}

function bool OnResetKey(const out InputEventParameters EventParms)
{
	// End:0x67 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		ResetFields();
		return true;
	}
	// End:0xcf
	else
	{
		// End:0xcf Loop:False
		if(EventParms.InputKeyName == 'Tab' && (EventParms.EventType == 0))
		{
			// End:0xc3 Loop:False
			if(EventParms.bShiftPressed)
			{
				SetPreviousWidgetFocused();
			}
			// End:0xcd
			else
			{
				SetNextWidgetFocused();
			}
			return true;
		}
	}
	return false;
}

function bool OnSubmitText(UIEditBox ebox, int PlayerIndex)
{
	SearchFromFields();
	return false;
}

defaultproperties
{
	m_bAscendingSort=true
	m_SelectedPlayerId=-1
}