/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAuctionSellMenu.uc
 * 
 * Stats:
 *	Constants:3
 *	Structs:1
 *	Properties:28
 *	Functions:14
 *
 *******************************************************************************/
class TgUIAuctionSellMenu extends TgUIAuctionGeneral
	native;

const TG_MAX_NUM_INV_ITEMS = 18;
const TG_AUCTION_DURATION_VVG = 121;
const TG_ITEM_QUALITY_TYPE_VVG = 133;

struct native sAuctionInvItem
{
	var TgUIInvWidget InvWidget;
	var UIButton Button;
	var UILabel nameLabel;
	var UILabel UnitsLabel;
	var UIPanel selectedHLPanel;
	var UIPanel mouseOverPanel;

	structdefaultproperties
	{
		InvWidget=none
		Button=none
		nameLabel=none
		UnitsLabel=none
		selectedHLPanel=none
		mouseOverPanel=none
	}
};

var array<TgInventoryObject> m_LocalInventoryList;
var sAuctionInvItem m_InventoryList[18];
var int m_nInventoryIndex;
var UILabel m_YourCreditsLabel;
var UIButton m_DeleteButton;
var UIComboBox m_QualityComboBox;
var UIComboBox m_TypeComboBox;
var UILabel m_CreditsLabel;
var UIPanel m_ListPanel;
var UIPanel m_SellOptionsPanel;
var UIEditBox m_QuantityEditBox;
var UILabel m_PriceLabel;
var UIEditBox m_PriceEditBox;
var UIComboBox m_TimeComboBox;
var UIButton m_PriceTooltip;
var UIButton m_SellButton;
var int m_CurrentCredits;
var array<string> m_DurationStringList;
var array<int> m_DurationCodeList;
var array<string> m_QualityStringList;
var array<int> m_QualityCodeList;
var array<string> m_ItemTypeStringList;
var array<int> m_ItemTypeCodeList;
var init array<init int> m_ValidTypeList;
var int m_nSortType;
var bool m_bSortAscending;
var UIButton m_HeaderName;
var UIButton m_HeaderQuantity;

native function PostOpenScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function bool TickTgUIScene();
native function UpdateInventoryHighlight();
native function bool OnSceneKeyPressed(const out InputEventParameters EventParms);
native function bool OnSellButton(const out InputEventParameters EventParms);
native function bool OnSelectInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnSortInventoryDelegate(const out InputEventParameters EventParms);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function OnTypeComboChanged(UIObject Sender, int PlayerIndex);
native function OnQualityComboChanged(UIObject Sender, int PlayerIndex);
native function RegisterCallbacks();
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyPressed;	
	// BlockSize:3072
	MetaCastToken(NullReferenceException) /= @NULL(18433024);
	// Failed to format nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
	// 1 & Type:Switch Position:379
	// Failed to format remaining nests!:System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.(Boolean )
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
	// 1 & Type:Switch Position:379
}

defaultproperties
{
	m_nInventoryIndex=-1
	m_bSortAscending=true
	m_nPageSize=18
}