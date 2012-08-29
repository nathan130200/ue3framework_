/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgentProfile_Inventory.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Structs:2
 *	Properties:35
 *	Functions:26
 *
 *******************************************************************************/
class TgUIAgentProfile_Inventory extends TgUIAgentProfile
	native;

const MAX_INV_INLIST = 18;

enum InventoryConfirmIndex
{
	ICI_DELETE,
	ICI_SALVAGE,
	ICI_ACTIVATE,
	ICI_MAX
};

struct native sInvListItem
{
	var TgUIInvWidget wItem;
	var UIButton m_EquipIcon;
	var UIButton m_InvMain;
	var UILabel m_InvCount;
	var UILabel m_InvName;
	var UILabel m_InvType;
	var UILabel m_InvGen;
	var UILabel m_InvQuality;
	var UIPanel m_HoverPanel;
	var UIPanel m_SelectedPanel;
	var int m_nItemCount;

	structdefaultproperties
	{
		wItem=none
		m_EquipIcon=none
		m_InvMain=none
		m_InvCount=none
		m_InvName=none
		m_InvType=none
		m_InvGen=none
		m_InvQuality=none
		m_HoverPanel=none
		m_SelectedPanel=none
		m_nItemCount=0
	}
};

struct native sSalvagedItem
{
	var TgUIInvWidget wItem;
	var TgInventoryObject pItem;
	var UIButton m_InvMain;
	var UILabel m_InvCount;
	var UILabel m_InvName;

	structdefaultproperties
	{
		wItem=none
		pItem=none
		m_InvMain=none
		m_InvCount=none
		m_InvName=none
	}
};

var UIPanel m_InvListPanel;
var sInvListItem m_InventoryItems[18];
var init array<init TgInventoryObject> m_LocalInventoryStore;
var init array<init int> m_ValidTypeList;
var int m_SelectedItem;
var int m_CurrentCredits;
var UIComboBox m_TypeComboBox;
var UIComboBox m_QualityComboBox;
var int m_TypeFilter;
var int m_QualityFilter;
var array<string> m_ItemTypeStringList;
var array<int> m_ItemTypeCodeList;
var array<string> m_QualityStringList;
var array<int> m_QualityCodeList;
var UIButton m_DeleteButton;
var UIButton m_SalvageButton;
var UIButton m_ActivateButton;
var UILabel m_ActivateLabel;
var int m_nSortType;
var bool m_bSortAscending;
var bool m_bRefresh;
var bool m_bShowProgressBar;
var UIButton m_HeaderName;
var UIButton m_HeaderQuantity;
var UIButton m_HeaderType;
var UIButton m_HeaderGeneration;
var sPagingPanel m_PagingPanel;
var UIPanel m_SalvagePanel;
var UIImage m_SalvageProgBar;
var UIButton m_SalvageCloseButton;
var TgUIScrollList m_SalvagedItemList;
var init array<init sSalvagedItem> m_SalvagedItems;
var init array<init TgInventoryObject> m_SalvagedInvObject;
var float m_fSalvageStartTime;
var UIButton m_SalvageContinueButton;

native function PreCloseScene();
native function bool TickTgUIScene();
native function FixupTgUIScene();
native function BuildLocalInventoryStore();
native function PopulateInventoryItems();
native function SelectInventoryItem(int ItemIndex);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function OnFilterChangedDelegate(UIObject Sender, int PlayerIndex);
native function bool OnSelectInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnDeleteInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnSalvageInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnSortInventoryDelegate(const out InputEventParameters EventParms);
native function bool OnActivateInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnSalvageCloseDelegate(const out InputEventParameters EventParms);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnInvMainStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnSalvagedItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnEquipIconStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function ResizeSalvagedDisplayList(int nNewSize);
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

event SetInvMainStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnInvMainStateChange;
	}
}

event SetSalvagedItemStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnSalvagedItemStateChange;
	}
}

event SetEquipIconStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnEquipIconStateChange;
	}
}

event FixupWidgetsUC()
{
	super.FixupWidgetsUC();
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
// BlockSize:3072
case switch(@NULL(-54271)):
	{
// BlockSize:3072
OnDeleteInventoryItemDelegate != case switch(@NULL(-54271)):;
	{
			{
					{
							{
									{
											{
													{
															{
																	{
																			{
					// BlockSize:3072
					case switch(@NULL(-54271)):
						{
						OnPrevButton != return @NULL(324096);
					// BlockSize:3072
					case switch(@NULL(-54271)):
						{
					OnNextButton != @NULL(34079232);
}

defaultproperties
{
	m_bSortAscending=true
	m_nPageSize=18
}