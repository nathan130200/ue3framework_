/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIInventoryPopup.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:34
 *	Functions:18
 *
 *******************************************************************************/
class TgUIInventoryPopup extends TgUISceneDriver_Tooltip
	native;

const TG_MAX_INVENTORY_POPUP_ITEMS = 18;

struct native sInventoryPopupItem
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

var TgInventoryManager m_InventoryManager;
var bool m_bCloseOnAdd;
var bool m_bIncProductionBPs;
var bool m_bRefresh;
var bool m_bExcludeBoundInventory;
var bool m_bSingleMode;
var bool m_bSortAscending;
var bool m_bBlockKeyInput;
var sInventoryPopupItem m_InventoryList[18];
var init array<init TgInventoryObject> m_InventoryItems;
var int m_TypeFilter;
var init array<init int> m_SubTypeFilter;
var init array<init int> m_ValidTypeList;
var init array<init int> m_ExcludedTypeList;
var int m_SelectedItem;
var TgPawn m_PlayerPawn;
var UIButton m_CloseButton;
var UIButton m_AddButton;
var UIButton m_DeleteButton;
var UIButton m_BlockTypeButton;
var UIComboBox m_TypeComboBox;
var UIComboBox m_QualityComboBox;
var int m_QualityFilter;
var int m_SkillFilter;
var array<string> m_ItemTypeStringList;
var array<int> m_ItemTypeCodeList;
var array<string> m_QualityStringList;
var array<int> m_QualityCodeList;
var native Pointer m_pExcludedInventory;
var int m_nExcludedSubtype;
var int m_nSortType;
var UIButton m_HeaderName;
var UIButton m_HeaderQuantity;
var sPagingPanel m_PagingPanel;

native function PostInitSceneDriver();
native function PostOpenScene();
native function PreCloseScene();
native function bool TickTgUIScene();
native function FixupTgUIScene();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnAddButtonDelegate(const out InputEventParameters EventParms);
native function bool OnBlockTypeDelegate(const out InputEventParameters EventParms);
native function bool OnSelectInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnDeleteInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function OnFilterChangedDelegate(UIObject Sender, int PlayerIndex);
native function bool OnSortInventoryDelegate(const out InputEventParameters EventParms);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnNextPage(const out InputEventParameters EventParms);
native function bool OnPrevPage(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;	
	@NULL(201327872)
	@NULL(-54271)
	OnCloseButtonDelegate != ;
	@NULL(-54271)
	OnAddButtonDelegate != m_DeleteButton;
	)
	m_DeleteButton.__OnRawInputKey__Delegate = OnDeleteInventoryItemDelegate;	
	@NULL(201327872)
	@NULL(-53247)
	OnFilterChangedDelegate != ;
	@NULL(-53247)
	OnFilterChangedDelegate != ;
	@NULL(-54271)
	OnSortInventoryDelegate != ;
	@NULL(-54271)
	OnSortInventoryDelegate != ;
	@NULL(-54271)
	OnBlockTypeDelegate != return @NULL(324096);	
	@NULL(201327872)
	@NULL(-54271)
	OnNextButton != return @NULL(324096);	
	@NULL(201327872)
	@NULL(-54271)
	OnPrevButton != @NULL(34079232);
}

defaultproperties
{
	m_bCloseOnAdd=true
	m_bSortAscending=true
	m_nPageSize=18
}