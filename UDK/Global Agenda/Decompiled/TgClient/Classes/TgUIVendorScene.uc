/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIVendorScene.uc
 * 
 * Stats:
 *	Constants:3
 *	Enums:1
 *	Structs:5
 *	Properties:75
 *	Functions:22
 *
 *******************************************************************************/
class TgUIVendorScene extends TgUIVendorBase
	native;

const MAX_VENDOR_STACK_SIZE = 10000;
const TG_MAX_VENDOR_VENDOR_ITEMS = 8;
const TG_MAX_VENDOR_PLAYER_ITEMS = 18;

enum eItemPreviewState
{
	IPS_Inv,
	IPS_Text,
	IPS_Generic,
	IPS_Char,
	IPS_MAX
};

struct native sVendorItem
{
	var TgUIInvWidget InvWidget;
	var UIButton Button;
	var UILabel nameLabel;
	var UILabel InfoLabel;
	var UILabel RequiredLabel;
	var UILabel StdCostLabel;
	var UILabel APCostLabel;
	var UIButton Icon_AP;
	var UIButton Icon_Credits;
	var UIButton Icon_Tokens;
	var UIButton Icon_USD;
	var UIButton Icon_EUR;
	var UIButton Icon_GBP;
	var UIPanel PriceSeparator;
	var UIImage PromoImage;
	var UILabel PromoLabel;
	var UIImage OnSaleImage;
	var UILabel OnSaleLabel;
	var UILabel OnSalePctLabel;
	var UIButton OnSale_Icon_AP;
	var UIButton OnSale_Icon_Credits;
	var UIButton OnSale_Icon_Tokens;
	var UIButton OnSale_Icon_USD;
	var UIButton OnSale_Icon_EUR;
	var UIButton OnSale_Icon_GBP;
	var UIButton pStdSaleIcon;
	var UIImage Bling;
	var UIPanel selectedHLPanel;
	var UIPanel mouseOverPanel;

	structdefaultproperties
	{
		InvWidget=none
		Button=none
		nameLabel=none
		InfoLabel=none
		RequiredLabel=none
		StdCostLabel=none
		APCostLabel=none
		Icon_AP=none
		Icon_Credits=none
		Icon_Tokens=none
		Icon_USD=none
		Icon_EUR=none
		Icon_GBP=none
		PriceSeparator=none
		PromoImage=none
		PromoLabel=none
		OnSaleImage=none
		OnSaleLabel=none
		OnSalePctLabel=none
		OnSale_Icon_AP=none
		OnSale_Icon_Credits=none
		OnSale_Icon_Tokens=none
		OnSale_Icon_USD=none
		OnSale_Icon_EUR=none
		OnSale_Icon_GBP=none
		pStdSaleIcon=none
		Bling=none
		selectedHLPanel=none
		mouseOverPanel=none
	}
};

struct native sVendorInvItem
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

struct native sVendorEnticement
{
	var UIPanel m_Outer;
	var TgUIInvWidget m_Item;
	var TgInventoryObject m_InvObject;
	var UILabel m_ItemName;

	structdefaultproperties
	{
		m_Outer=none
		m_Item=none
		m_InvObject=none
		m_ItemName=none
	}
};

struct native TextPreviewPanels
{
	var UIPanel m_Outer;
	var UIPanel m_APPanel;
	var UIPanel m_EliteAgentPanel;
	var UIPanel m_EliteNoEnticementPanel;
	var sVendorEnticement m_EliteEnticement;
	var UIPanel m_BoostPanel;
	var UIPanel m_BoostNoEnticementPanel;
	var sVendorEnticement m_BoostEnticement;
	var UIPanel m_BoostRemainingPanel;
	var UILabel m_BoostTime;

	structdefaultproperties
	{
		m_Outer=none
		m_APPanel=none
		m_EliteAgentPanel=none
		m_EliteNoEnticementPanel=none
		m_EliteEnticement=(m_Outer=none,m_Item=none,m_InvObject=none,m_ItemName=none)
		m_BoostPanel=none
		m_BoostNoEnticementPanel=none
		m_BoostEnticement=(m_Outer=none,m_Item=none,m_InvObject=none,m_ItemName=none)
		m_BoostRemainingPanel=none
		m_BoostTime=none
	}
};

struct native ItemPreview
{
	var UIPanel m_Outer;
	var TgUISkeletalMeshWidget m_PaperDollMeshWidget;
	var TgSkeletalMeshActor_EquipScreen m_PaperDoll;
	var TgSkeletalMeshActor m_SkelMeshActor;
	var AnimTree m_PreviewAnimTree;
	var UIButton m_DragButton;
	var UILabel m_ResetLabel;
	var TextPreviewPanels m_StorePanels;
	var init array<init TgInventoryObject> m_EquippedItemList;
	var init array<init int> m_PaperDollFx;
	var init array<init name> m_PaperDollFxDisplayGroupNames;
	var init array<init TgSpecialFx> m_ActiveSFX;

	structdefaultproperties
	{
		m_Outer=none
		m_PaperDollMeshWidget=none
		m_PaperDoll=none
		m_SkelMeshActor=none
		m_PreviewAnimTree=none
		m_DragButton=none
		m_ResetLabel=none
		m_StorePanels=(m_Outer=none,m_APPanel=none,m_EliteAgentPanel=none,m_EliteNoEnticementPanel=none,m_EliteEnticement=(m_Outer=none,m_Item=none,m_InvObject=none,m_ItemName=none),m_BoostPanel=none,m_BoostNoEnticementPanel=none,m_BoostEnticement=(m_Outer=none,m_Item=none,m_InvObject=none,m_ItemName=none),m_BoostRemainingPanel=none,m_BoostTime=none)
		m_EquippedItemList=none
		m_PaperDollFx=none
		m_PaperDollFxDisplayGroupNames=none
		m_ActiveSFX=none
	}
};

var TgInventoryManager m_InventoryManager;
var int m_CurrentLootListID;
var UILabel m_VendorName;
var bool m_bNoAPPrices;
var bool m_bBlockInvPanel;
var bool m_bSortAscending;
var bool m_bVendorSortAscending;
var bool m_bRefresh;
var bool m_bClientSortUpdated;
var bool m_bHasAPPrices;
var bool m_bHasNonAPPrices;
var bool m_bHasEliteEnticement;
var bool m_bHasBoostEnticement;
var TgUIVendorScene.eItemPreviewState m_eItemPreviewState;
var UIButton m_ShowPreviewButton;
var UIButton m_ShowPlayerInvButton;
var sVendorInvItem m_InventoryList[18];
var UIPanel m_PlayerInventoryPanel;
var int m_nSortType;
var UIButton m_HeaderName;
var UIButton m_HeaderQuantity;
var sPagingPanel m_PagingPanel;
var UIPanel m_PlayerInventoryCreditsPanel;
var sVendorItem m_VendorList[8];
var init array<init TgInventoryObject> m_VendorInvObjs;
var init native array<init Pointer> m_VendorLootTableItems;
var sPagingPanel m_VendorPagingPanel;
var int m_nVendorPageNum;
var int m_nVendorSortType;
var UIButton m_VendorHeaderName;
var UIButton m_VendorHeaderStdPrice;
var UILabel m_VendorHeaderStdPriceLabel;
var UIButton m_VendorHeaderAPPrice;
var UILabel m_VendorHeaderAPPriceLabel;
var int m_SelectedItem;
var int m_SelectedInv;
var int m_CurrentCredits;
var int m_CurrentTokens;
var int m_CurrentAP;
var UIButton m_PurchaseButton;
var UIButton m_DeleteButton;
var UIButton m_SellButton;
var UILabel m_PrereqLabel;
var UILabel m_PurchasedLabel;
var UILabel m_ExpensiveLabel;
var UILabel m_ClassLabel;
var UILabel m_LevelLabel;
var UILabel m_ComponentsLabel;
var UILabel m_BankLabel;
var UILabel m_BankAmount;
var UIButton m_BankCreditIcon;
var UILabel m_AgendaPointsAmount;
var UILabel m_CurrencyLabel;
var UILabel m_CurrencyAmount;
var UIButton m_CurrencyIcon_Credits;
var UIButton m_CurrencyIcon_Tokens;
var UIButton m_CurrencyIcon_USD;
var UIButton m_CurrencyIcon_EUR;
var UIButton m_CurrencyIcon_GBP;
var UIButton m_CloseButton;
var UIComboBox m_TypeComboBox;
var UIComboBox m_QualityComboBox;
var int m_TypeFilter;
var int m_QualityFilter;
var array<string> m_ItemTypeStringList;
var array<int> m_ItemTypeCodeList;
var array<string> m_QualityStringList;
var array<int> m_QualityCodeList;
var init array<init int> m_ValidTypeList;
var int m_nItemTypeofInterest;
var ItemPreview m_ItemPreview;
var float m_fLastTime;
var int m_nSpecifiedLootTable;
var int m_nSpecifiedLootTableInternal;
var native const Pointer m_pLootItemsMarshal;

native function PreCloseScene();
native function bool TickTgUIScene();
native function PostOpenScene();
native function PostRender();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnVendorItemSelectDelegate(const out InputEventParameters EventParms);
native function bool OnVendorItemPurchaseDelegate(const out InputEventParameters EventParms);
native function bool OnVendorItemSellDelegate(const out InputEventParameters EventParms);
native function bool OnSelectInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnDeleteInventoryItemDelegate(const out InputEventParameters EventParms);
native function bool OnSortInventoryDelegate(const out InputEventParameters EventParms);
native function bool OnSortVendorDelegate(const out InputEventParameters EventParms);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function OnFilterChangedDelegate(UIObject Sender, int PlayerIndex);
native function OnResetDoubleClick(UIScreenObject Sender, int PlayerIndex);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool OnVendorNextButton(const out InputEventParameters EventParms);
native function bool OnVendorPrevButton(const out InputEventParameters EventParms);
native function bool OnResetPreviewButton(const out InputEventParameters EventParms);
native function bool OnTogglePreviewInvButton(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	@NULL(-54271)[@NULL(201327872)];
	OnCloseButtonDelegate != @NULL(-54271)[@NULL(201327872)];
	@NULL(-54271)[@NULL(201327872)];
	OnNextButton != return @NULL(324096);
	@NULL(-54271)[@NULL(201327872)];
	OnPrevButton != return @NULL(324096);
	@NULL(-54271)[@NULL(201327872)];
	OnVendorNextButton != return @NULL(324096);
	@NULL(-54271)[@NULL(201327872)];
	OnVendorPrevButton != @NULL(34079232);
}

defaultproperties
{
	m_bSortAscending=true
	m_bVendorSortAscending=true
	m_bHookChat=true
	m_nPageSize=18
}