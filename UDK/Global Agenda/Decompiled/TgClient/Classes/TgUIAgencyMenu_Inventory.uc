/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgencyMenu_Inventory.uc
 * 
 * Stats:
 *	Structs:2
 *	Properties:22
 *	Functions:35
 *
 *******************************************************************************/
class TgUIAgencyMenu_Inventory extends TgUIAgencyMenu
	native;

struct native sAgencyInvPanel
{
	var UIPanel m_InventoryPanel;
	var UILabel m_CreditLabel;
	var TgUIScrollList m_InventoryScrollFrame;
	var UIButton m_ItemButton;
	var UIButton m_CreditButton;
	var UIButton m_DeleteButton;
	var int m_nSortType;
	var bool m_bSortAscending;
	var UIButton m_HeaderName;
	var UIButton m_HeaderQuantity;
	var int m_nPageNum;
	var sPagingPanel m_PagingPanel;

	structdefaultproperties
	{
		m_InventoryPanel=none
		m_CreditLabel=none
		m_InventoryScrollFrame=none
		m_ItemButton=none
		m_CreditButton=none
		m_DeleteButton=none
		m_nSortType=0
		m_bSortAscending=true
		m_HeaderName=none
		m_HeaderQuantity=none
		m_nPageNum=0
		m_PagingPanel=(PagingPanel=none,PagingLabel=none,LastButton=none,FirstButton=none,PrevButton=none,NextButton=none)
	}
};

struct native sInventoryListItem
{
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var TgInventoryObject pItem;
	var UIButton m_InvMain;
	var UILabel m_InvCount;
	var UILabel m_InvName;
	var UILabel m_InvType;
	var UILabel m_InvGen;
	var UILabel m_InvQuality;
	var UIImage m_InvHighlight;
	var int m_nItemCount;

	structdefaultproperties
	{
		wItem=none
		pItem=none
		m_InvMain=none
		m_InvCount=none
		m_InvName=none
		m_InvType=none
		m_InvGen=none
		m_InvQuality=none
		m_InvHighlight=none
		m_nItemCount=0
	}
};

var TgInventoryManager m_InventoryManager;
var init array<init sInventoryListItem> m_InventoryItems;
var init array<init sInventoryListItem> m_AgencyItems;
var init array<init TgInventoryObject> m_LocalInventoryStore;
var init array<init TgInventoryObject> m_AgencyList;
var init array<init int> m_ValidTypeList;
var int m_SelectedItem;
var int m_SelectedAgencyItem;
var int m_CurrentCredits;
var TgPawn m_PlayerPawn;
var UIComboBox m_TypeComboBox;
var int m_TypeFilter;
var UIComboBox m_QualityComboBox;
var int m_QualityFilter;
var sAgencyInvPanel m_PersonalInventory;
var sAgencyInvPanel m_AgencyInventory;
var array<string> m_ItemTypeStringList;
var array<int> m_ItemTypeCodeList;
var array<string> m_QualityStringList;
var array<int> m_QualityCodeList;
var bool m_bRefresh;
var bool m_bPopupMode;

native function bool TickTgUIScene();
native function FixupWidgets();
native function BuildLocalInventoryStore();
native function ResizeInventoryPanelWidgets(int newSize);
native function ResizeAgencyPanelWidgets(int newSize);
native function PopulateInventoryItems();
native function PopulateAgencyItems();
native function SelectInventoryItem(int ItemIndex);
native function SelectAgencyItem(int ItemIndex);
native function ShowTransferItemPanel(TgInventoryObject pItem, int ItemCount, bool bDeposit);
native function ShowTransferCreditsPanel(int creditCount, bool bDeposit);
native function HideTransferItemPanel();
native function bool OnAgencyMenuKey(const out InputEventParameters EventParms);
native function bool OnSelectInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnSelectAgencyItemDelegate(const out InputEventParameters EventParms);
native function bool OnSortInventoryDelegate(const out InputEventParameters EventParms);
native function bool OnSortAgencyInventoryDelegate(const out InputEventParameters EventParms);
native function bool OnDepositItemDelegate(const out InputEventParameters EventParms);
native function bool OnWithdrawItemDelegate(const out InputEventParameters EventParms);
native function bool OnDepositCreditsDelegate(const out InputEventParameters EventParms);
native function bool OnWithdrawCreditsDelegate(const out InputEventParameters EventParms);
native function bool OnDeleteItemDelegate(const out InputEventParameters EventParms);
native function bool OnItemSendToDelegate(const out InputEventParameters EventParms);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function OnFilterChangedDelegate(UIObject Sender, int PlayerIndex);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnAgencyItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnNextAgencyButton(const out InputEventParameters EventParms);
native function bool OnPrevAgencyButton(const out InputEventParameters EventParms);
event SetSelectInventoryItemDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnSelectInventoryItemDelegate;
	}
}

event SetInvItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnInvItemStateChange;
	}
}

event SetSelectAgencyItemDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnSelectAgencyItemDelegate;
	}
}

event SetAgencyItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnAgencyItemStateChange;
	}
}

event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_PersonalInventory.m_ItemButton.__OnRawInputKey__Delegate = OnDepositItemDelegate;
	stop;
	@NULL(530176)
	@NULL(704708864)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnDepositCreditsDelegate != stop;
	@NULL(704708864)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnDeleteItemDelegate != stop;
	@NULL(704708864)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnSortInventoryDelegate != stop;
	@NULL(704708864)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnSortInventoryDelegate != return @NULL(324096);
	stop;
	@NULL(530176)
	@NULL(704708864)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnNextButton != return @NULL(324096);
	stop;
	@NULL(530176)
	@NULL(704708864)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnPrevButton != stop;
	@NULL(687931648)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnWithdrawItemDelegate != stop;
	@NULL(687931648)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnWithdrawCreditsDelegate != stop;
	@NULL(687931648)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnSortAgencyInventoryDelegate != stop;
	@NULL(687931648)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnSortAgencyInventoryDelegate != return @NULL(324096);
	stop;
	@NULL(530176)
	@NULL(687931648)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnNextAgencyButton != return @NULL(324096);
	stop;
	@NULL(530176)
	@NULL(687931648)
	stop;
	@NULL(201327872)
	@NULL(-54271)
	OnPrevAgencyButton != stop;
	@NULL(-53247)
	OnFilterChangedDelegate != stop;
	@NULL(-53247)
	OnFilterChangedDelegate != @NULL(34079232);
}

defaultproperties
{
	m_PersonalInventory=(m_InventoryPanel=none,m_CreditLabel=none,m_InventoryScrollFrame=none,m_ItemButton=none,m_CreditButton=none,m_DeleteButton=none,m_nSortType=0,m_bSortAscending=true,m_HeaderName=none,m_HeaderQuantity=none,m_nPageNum=0,m_PagingPanel=(PagingPanel=none,PagingLabel=none,LastButton=none,FirstButton=none,PrevButton=none,NextButton=none))
	m_AgencyInventory=(m_InventoryPanel=none,m_CreditLabel=none,m_InventoryScrollFrame=none,m_ItemButton=none,m_CreditButton=none,m_DeleteButton=none,m_nSortType=0,m_bSortAscending=true,m_HeaderName=none,m_HeaderQuantity=none,m_nPageNum=0,m_PagingPanel=(PagingPanel=none,PagingLabel=none,LastButton=none,FirstButton=none,PrevButton=none,NextButton=none))
}