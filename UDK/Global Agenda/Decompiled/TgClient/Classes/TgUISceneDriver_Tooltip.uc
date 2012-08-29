/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISceneDriver_Tooltip.uc
 * 
 * Stats:
 *	Enums:2
 *	Structs:6
 *	Properties:9
 *	Functions:16
 *
 *******************************************************************************/
class TgUISceneDriver_Tooltip extends TgUISceneDriver
	native;

enum eToolTipTypes
{
	TIP_PART_BASE_STAT_NS,
	TIP_PART_BASE_STAT_SN,
	TIP_PART_EXT_STAT,
	TIP_PART_EXT_STAT_DROP,
	TIP_PART_EXT_STAT_MOD,
	TIP_PART_FOOTER,
	TIP_PART_MAX
};

enum eConfirmTypes
{
	CONFIRM_TYPE_NONE,
	CONFIRM_TYPE_INFO,
	CONFIRM_TYPE_DEPOSIT,
	CONFIRM_TYPE_WITHDRAW,
	CONFIRM_TYPE_ADD,
	CONFIRM_TYPE_REMOVE,
	CONFIRM_TYPE_DELETE,
	CONFIRM_TYPE_CONFIRM,
	CONFIRM_TYPE_TEXT,
	CONFIRM_TYPE_MAX
};

struct native sToolTipData
{
	var init string sToolTipName;
	var init string sToolTipValue;
	var int nToolTipType;
	var int nSortBy;
	var LinearColor colorNameOverride;

	structdefaultproperties
	{
		sToolTipName=""
		sToolTipValue=""
		nToolTipType=0
		nSortBy=0
		colorNameOverride=(R=0.00,G=0.00,B=0.00,A=1.00)
	}
};

struct native sTooltipMsg
{
	var int m_nHeaderId;
	var int m_nBodyId;
	var bool m_bRequiresRestart;

	structdefaultproperties
	{
		m_nHeaderId=0
		m_nBodyId=0
		m_bRequiresRestart=false
	}
};

struct native sToolTip
{
	var UIPrefabInstance wToolTip;
	var UIPanel wToolTipPanel;
	var UILabel wToolTipHeader;
	var UILabel wToolTipDescription;
	var TgUIScrollList wToolTipBaseStatSL;
	var UILabel wToolTipDescription2;
	var TgUIScrollList wToolTipRndStatModSL;
	var UIImage wToolTipBottom;
	var init array<init sToolTipData> sToolTipData;

	structdefaultproperties
	{
		wToolTip=none
		wToolTipPanel=none
		wToolTipHeader=none
		wToolTipDescription=none
		wToolTipBaseStatSL=none
		wToolTipDescription2=none
		wToolTipRndStatModSL=none
		wToolTipBottom=none
		sToolTipData=none
	}
};

struct native EffectValue
{
	var float val;
	var native Pointer pEffect;

	structdefaultproperties
	{
		val=0.00
	}
};

struct native sConfirmPopupStruct
{
	var UIPrefabInstance m_wConfirmPopup;
	var UIPanel m_wConfirmPanel;
	var UILabel m_wConfirmText;
	var UIPanel m_wItemPanel;
	var UIPanel m_wItemSizePanel;
	var TgUIPrimaryHUD_SlotWidgets m_wItem;
	var UILabel m_wItemLabel;
	var UIPanel m_wAmountPanel;
	var UIPanel m_wAmountSizePanel;
	var UIImage m_wLeftArrowImage;
	var UIImage m_wRightArrowImage;
	var UILabel m_wAmountTypeLabel;
	var UIEditBox m_wAmountEditBox;
	var UILabel m_wAmountMaxLabel;
	var UIPanel m_wTextPanel;
	var UILabel m_wTextTypeLabel;
	var UIEditBox m_wTextEditBox;
	var UIPanel m_wOptionPanel;
	var UIButton m_wConfirmYesButton;
	var UILabel m_wConfirmYesLabel;
	var UIButton m_wConfirmNoButton;
	var UILabel m_wConfirmNoLabel;
	var UIButton m_wConfirmOkButton;
	var UILabel m_wConfirmOkLabel;

	structdefaultproperties
	{
		m_wConfirmPopup=none
		m_wConfirmPanel=none
		m_wConfirmText=none
		m_wItemPanel=none
		m_wItemSizePanel=none
		m_wItem=none
		m_wItemLabel=none
		m_wAmountPanel=none
		m_wAmountSizePanel=none
		m_wLeftArrowImage=none
		m_wRightArrowImage=none
		m_wAmountTypeLabel=none
		m_wAmountEditBox=none
		m_wAmountMaxLabel=none
		m_wTextPanel=none
		m_wTextTypeLabel=none
		m_wTextEditBox=none
		m_wOptionPanel=none
		m_wConfirmYesButton=none
		m_wConfirmYesLabel=none
		m_wConfirmNoButton=none
		m_wConfirmNoLabel=none
		m_wConfirmOkButton=none
		m_wConfirmOkLabel=none
	}
};

struct native sConfirmDataStruct
{
	var int m_nConfirmMode;
	var int m_nConfirmModeIndex;
	var int m_nMaxItems;
	var int m_nNumItems;
	var int m_nHexPosition;
	var TgInventoryObject m_pItem;
	var int m_nItemId;

	structdefaultproperties
	{
		m_nConfirmMode=0
		m_nConfirmModeIndex=0
		m_nMaxItems=0
		m_nNumItems=0
		m_nHexPosition=0
		m_pItem=none
		m_nItemId=0
	}
};

var sToolTip m_sToolTip;
var UIPrefab m_wToolTipPrefab;
var UIScreenObject m_wToolTipTarget;
var bool m_bTipDirty;
var bool m_bTipHidden;
var int m_nTipTypeCount[6];
var sConfirmPopupStruct m_wConfirmPopup;
var sConfirmDataStruct m_ConfirmData;
var UIPrefab m_wConfirmPrefab;

native function OpenTgUIScene();
native function bool TickTgUIScene();
native function CreateConfirmPopup();
native function SetUpConfirmItemPanel();
native function SetUpConfirmEditBoxes();
native function ShowConfirmPopup();
native function CloseConfirmPopup();
native function OpenConfirmDeletePopup(TgInventoryObject pItem, int maxItems);
native function OpenConfirmInfoPopup(string Text);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool OnConfirmOkClicked(const out InputEventParameters EventParms);
native function OnAmountChangedDelegate(UIObject Sender, int PlayerIndex);
native noexport function OnConfirmItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OpenFeatureUpgradePopup(optional bool bSubscriberCheck)
{
	bSubscriberCheck = false;
}

event FixupConfirmWidgets()
{
	// End:0x3a Loop:False
	if(m_wConfirmPopup.m_wConfirmYesButton != none)
	{
		m_wConfirmPopup.m_wConfirmYesButton.__OnRawInputKey__Delegate = OnConfirmYesClicked;
	}
	m_wConfirmPopup.m_wConfirmOkButton
	none
	)
	m_wConfirmPopup.m_wConfirmOkButton.__OnRawInputKey__Delegate = OnConfirmOkClicked;
	m_wConfirmPopup.m_wConfirmNoButton
	none
	)
	m_wConfirmPopup.m_wConfirmNoButton.__OnRawInputKey__Delegate = OnConfirmNoClicked;
	m_wConfirmPopup.m_wItem.m_SlotButton
	none
	)
	m_wConfirmPopup.m_wItem.m_SlotButton.__NotifyActiveStateChanged__Delegate = OnConfirmItemStateChange;
	m_wConfirmPopup.m_wAmountEditBox
	none
	)
	m_wConfirmPopup.m_wAmountEditBox.__OnValueChanged__Delegate = OnAmountChangedDelegate;
}

defaultproperties
{
	m_wToolTipPrefab=UIPrefab'GA_Menu_Assets.Archetype.GA_Arch_ToolTip_v1'
	m_bTipHidden=true
	m_wConfirmPrefab=UIPrefab'GA_Menu_Assets.Archetype.GA_Arch_Confirm_Panel_D'
}