/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICraftScene.uc
 * 
 * Stats:
 *	Enums:1
 *	Structs:5
 *	Properties:37
 *	Functions:24
 *
 *******************************************************************************/
class TgUICraftScene extends TgUISceneDriver_Tooltip
	native;

enum BPModArchetypeOrder
{
	ARCH_BPMOD_HEADER,
	ARCH_BPMOD_PROPERTY,
	ARCH_BPMOD_MAX
};

struct native sCraftItemStruct
{
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var TgInventoryObject pItem;
	var UIButton m_ItemMain;
	var UILabel m_ItemCount;
	var UILabel m_ItemName;
	var UILabel m_ItemGen;
	var UIImage m_ItemHighlight;
	var int m_nNumItems;

	structdefaultproperties
	{
		wItem=none
		pItem=none
		m_ItemMain=none
		m_ItemCount=none
		m_ItemName=none
		m_ItemGen=none
		m_ItemHighlight=none
		m_nNumItems=0
	}
};

struct native sCraftComponentStruct
{
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var int m_nItemId;
	var UIButton m_ComponentMain;
	var UIImage m_ComponentCheck;
	var UILabel m_ComponentName;
	var UILabel m_ComponentRequired;
	var UILabel m_ComponentOwned;
	var int m_nNumItems;
	var int m_nNumRequired;

	structdefaultproperties
	{
		wItem=none
		m_nItemId=0
		m_ComponentMain=none
		m_ComponentCheck=none
		m_ComponentName=none
		m_ComponentRequired=none
		m_ComponentOwned=none
		m_nNumItems=0
		m_nNumRequired=0
	}
};

struct native sBPHeaderStruct
{
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var TgInventoryObject pItem;
	var UIPanel m_HeaderMain;
	var UILabel m_HeaderName;
	var UILabel m_HeaderGen;

	structdefaultproperties
	{
		wItem=none
		pItem=none
		m_HeaderMain=none
		m_HeaderName=none
		m_HeaderGen=none
	}
};

struct native sBPModStruct
{
	var float m_BPModChance;
	var int m_BPModEGId;
	var UILabel m_BPModAmount;
	var UILabel m_BPModName;

	structdefaultproperties
	{
		m_BPModChance=0.00
		m_BPModEGId=0
		m_BPModAmount=none
		m_BPModName=none
	}
};

struct native sBPModCategoryStruct
{
	var int m_BPModCategoryId;
	var UILabel m_BPModCategoryHeader;
	var init array<init sBPModStruct> m_BPModItemList;

	structdefaultproperties
	{
		m_BPModCategoryId=0
		m_BPModCategoryHeader=none
		m_BPModItemList=none
	}
};

var TgPawn_Character m_PlayerPawn;
var TgInventoryManager m_InventoryManager;
var bool m_bRefresh;
var bool m_bReadOnlyMode;
var bool m_bSortAscending;
var bool m_bShowProgress;
var bool m_bToggleOffProgressPanel;
var TgUIScrollList m_CraftScrollFrame;
var init array<init sCraftItemStruct> m_CraftItems;
var init array<init TgInventoryObject> m_LocalCraftStore;
var UIPanel m_ComponentPanel;
var TgUIScrollList m_ComponentScrollFrame;
var init array<init sCraftComponentStruct> m_ComponentItems;
var init array<init TgInventoryObject> m_LocalComponentStore;
var UIPanel m_DetailPanel;
var sBPHeaderStruct m_DetailHeader;
var TgUIScrollList m_BPModScrollFrame;
var init array<init sBPModCategoryStruct> m_BPModList;
var init array<init int> m_BPModArchetypeUsage;
var UIPanel m_CraftProgPanel;
var TgUIInvWidget m_CraftItem;
var UILabel m_ItemName;
var UIImage m_CraftProgBar;
var int m_nSelectedItem;
var int m_nSelectedCategory;
var UIButton m_CraftButton;
var UIButton m_CloseButton;
var UIPanel m_ReadOnlyPanel;
var UIComboBox m_QualityComboBox;
var int m_QualityFilter;
var array<int> m_QualityCodeList;
var array<string> m_QualityStringList;
var int m_nSortType;
var UIButton m_HeaderName;
var UIButton m_HeaderGeneration;
var sPagingPanel m_PagingPanel;
var float m_fCraftStartTime;

native function PostOpenScene();
native function PreCloseScene();
native function bool TickTgUIScene();
native function FixupTgUIScene();
native function BuildLocalCraftStore();
native function ResizeBlueprintPanelWidgets(int newSize);
native function PopulateCraftItems();
native function PopulateCraftDetails();
native function SelectCraftItem(int ItemIndex);
native function ResizeComponentPanelWidgets(int newSize);
native function ResizeCraftDetailsWidgets(int newSize);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnSelectCraftItemDelegate(const out InputEventParameters EventParms);
native function bool OnSortInventoryDelegate(const out InputEventParameters EventParms);
native function bool OnCraftButtonDelegate(const out InputEventParameters EventParms);
native function OnFilterChangedDelegate(UIObject Sender, int PlayerIndex);
native noexport function OnCraftItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnNextPage(const out InputEventParameters EventParms);
native function bool OnPrevPage(const out InputEventParameters EventParms);
native function bool ValidateCraftingFeature();
event SetSelectCraftItemDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnSelectCraftItemDelegate;
	}
}

event SetHoverCraftItemDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnCraftItemStateChange;
	}
}

event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	@NULL(201327872).NativeFunctionToken(ArgumentOutOfRangeException);
}

defaultproperties
{
	m_bSortAscending=true
	m_bHookChat=true
}