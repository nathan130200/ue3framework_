/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAuctionBrowseMenu.uc
 * 
 * Stats:
 *	Constants:8
 *	Enums:1
 *	Structs:4
 *	Properties:35
 *	Functions:24
 *
 *******************************************************************************/
class TgUIAuctionBrowseMenu extends TgUIAuctionGeneral
	native;

const AUCTION_BROWSE_REFRESH_TIME = 15.0f;
const TG_ITEM_QUALITY_TYPE_VVG = 133;
const TG_ITEM_TYPE_VVG = 50;
const TG_BLUEPRINT_SUBTYPE_VVG = 143;
const TG_HEXITEM_SUBTYPE_VVG = 142;
const TG_HEXBOARD_SUBTYPE_VVG = 148;
const TG_UPGRADE_SUBTYPE_VVG = 106;
const TG_COMPONENT_SUBTYPE_VVG = 149;

enum AchievmentCategoryArchetypeOrder
{
	ACH_CAT_UNSEL,
	ACH_CAT_SEL,
	ACH_CAT_SUBCAT_UNSEL,
	ACH_CAT_SUBCAT_SEL,
	ACH_CAT_MAX
};

struct native sAuctionItemFilter
{
	var int nQuality;
	var int nTypeCode;
	var int nSubTypeCode;
	var string sName;

	structdefaultproperties
	{
		nQuality=0
		nTypeCode=0
		nSubTypeCode=0
		sName=""
	}
};

struct native ItemType
{
	var int m_nTypeId;
	var init string m_sTypeName;

	structdefaultproperties
	{
		m_nTypeId=0
		m_sTypeName=""
	}
};

struct native TypeCategoryTreeNode
{
	var ItemType m_Type;
	var int m_Parent;
	var init array<init int> m_Children;

	structdefaultproperties
	{
		m_Type=(m_nTypeId=0,m_sTypeName="")
		m_Parent=0
		m_Children=none
	}
};

struct native TypeCategoryTemplate
{
	var UIButton m_BaseButton;
	var UILabel m_Label;
	var int m_CatTreeEntry;

	structdefaultproperties
	{
		m_BaseButton=none
		m_Label=none
		m_CatTreeEntry=0
	}
};

var UILabel m_CreditsLabel;
var UIEditBox m_NameEditBox;
var UIComboBox m_QualityComboBox;
var UIButton m_SearchButton;
var UICheckbox m_LowestPriceOnly;
var UIPanel m_BidOptionPanel;
var UIEditBox m_BidEntryBox;
var UIButton m_BidButton;
var UIPanel m_BidBGPanel;
var UIImage m_BidPagingLeft;
var UIImage m_BidPagingCenter;
var UIImage m_BidPagingRight;
var UILabel m_BidEntryLabel;
var int m_nSelectedTypeCode;
var int m_nSelectedSubTypeCode;
var TgUIScrollList m_TypeScrollList;
var init array<init TypeCategoryTemplate> m_TypeCategoryDisplayList;
var init array<init TypeCategoryTreeNode> m_TypeCategoryTree;
var init transient array<init int> m_CategoryArchetypeUsage;
var bool m_bCategoryExpanded;
var bool m_bUpdateCategoryList;
var bool m_bLowestPriceOnly;
var TgUIScrollList m_BrowseList;
var init array<init sAuctionItemStruct> m_BrowseMembers;
var int m_nSelectionIndex;
var TgUIScrollList m_GroupedBrowseList;
var UIPanel m_BrowsePanel;
var UIPanel m_GroupedBrowsePanel;
var int m_CurrentCredits;
var sAuctionItemFilter m_AuctionItemFilter;
var native Pointer m_pAuctionBrowseData;
var array<string> m_QualityStringList;
var array<int> m_QualityCodeList;
var init array<init int> m_ValidTypeList;
var TgUIPreviewScreen m_PreviewScene;

native function PostInitSceneDriver();
native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function bool TickTgUIScene();
native function ResizeDisplayList(int newSize);
native function UpdateBrowseListDisplay();
native function UpdateHighlight();
native function bool OnSceneKeyPressed(const out InputEventParameters EventParms);
native function bool OnResetButton(const out InputEventParameters EventParms);
native function bool OnSearchButton(const out InputEventParameters EventParms);
native function bool OnBidButton(const out InputEventParameters EventParms);
native function bool OnAuctionItemSelect(const out InputEventParameters EventParms);
native noexport function OnAuctionItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnAuctionTimeStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnTypeCategoryClicked(const out InputEventParameters EventParms);
native function OnLowestPriceOnlyChanged(UIObject ebox, int PlayerIndex);
noexport function OnNotifyEditBoxStateChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState)
{
	// End:0x33 Loop:False
	if(NewlyActiveState.Class == class'UIState_Pressed'.default.Class)
	{
		SetFocusedWidget(Sender);
	}
}

event SetRawInputKeyForType(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnTypeCategoryClicked;
	}
}

event SetAuctionItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnAuctionItemStateChange;
	}
}

event SetAuctionItemSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnAuctionItemSelect;
	}
}

event SetAuctionTimeStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnAuctionTimeStateChange;
	}
}

event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyPressed;	
	// BlockSize:3072
	MetaCastToken(NullReferenceException) /= @NULL(18433024);
	// Failed to format nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
	// 2 & Type:Switch Position:279
	// Failed to format remaining nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
	// 2 & Type:Switch Position:279
}

defaultproperties
{
	m_bHookChat=true
}