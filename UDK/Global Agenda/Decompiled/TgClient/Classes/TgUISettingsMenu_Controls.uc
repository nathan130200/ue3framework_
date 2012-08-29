/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISettingsMenu_Controls.uc
 * 
 * Stats:
 *	Constants:2
 *	Structs:5
 *	Properties:25
 *	Functions:23
 *
 *******************************************************************************/
class TgUISettingsMenu_Controls extends TgUISceneDriver
	native;

const NUM_BINDING_CATEGORIES = 6;
const MAX_ITEMS_PER_CATEGORY = 20;

struct native sKeyBindButton
{
	var UIButton kbbKeyButton;
	var UILabel kbbKeyLabel;
	var UIImage kbbHighlightBG;
	var UIImage kbbNormalBG;

	structdefaultproperties
	{
		kbbKeyButton=none
		kbbKeyLabel=none
		kbbHighlightBG=none
		kbbNormalBG=none
	}
};

struct native sKeyBindStruct
{
	var UIPrefabInstance kbsRowInstance;
	var UIPanel kbsRowPanel;
	var UILabel kbsCommandLabel;
	var sKeyBindButton kbsKeyBindButton[2];
	var int kbsCategoryID;

	structdefaultproperties
	{
		kbsRowInstance=none
		kbsRowPanel=none
		kbsCommandLabel=none
		kbsKeyBindButton[0]=(kbbKeyButton=none,kbbKeyLabel=none,kbbHighlightBG=none,kbbNormalBG=none)
		kbsKeyBindButton[1]=(kbbKeyButton=none,kbbKeyLabel=none,kbbHighlightBG=none,kbbNormalBG=none)
		kbsCategoryID=0
	}
};

struct native sKeyBindCategory
{
	var UIPrefabInstance kbcCategoryHeader;
	var UILabel kbcCategoryLabel;
	var init array<init sKeyBindStruct> kbcKeyBindList;
	var int kbcCategoryID;

	structdefaultproperties
	{
		kbcCategoryHeader=none
		kbcCategoryLabel=none
		kbcKeyBindList=none
		kbcCategoryID=0
	}
};

struct native sCommandInfo
{
	var int nCommandMsgId;
	var string sCommandMapping;

	structdefaultproperties
	{
		nCommandMsgId=0
		sCommandMapping=""
	}
};

struct native sKeyBind
{
	var name nmKeyName;
	var int nKeyMsgId;

	structdefaultproperties
	{
		nmKeyName=None
		nKeyMsgId=0
	}
};

var TgUIScrollList m_KeyBindScrollFrame;
var init array<init sKeyBindCategory> m_KeyBinds;
var UIPrefabInstance m_HeaderReference;
var UIPrefabInstance m_KeyBindReference;
var UIPrefabInstance m_LineReference;
var UIButton m_KeyBindDefaults;
var UIButton m_CloseButton;
var UILabel m_KeyBindInfo;
var UIPanel m_KeyBindConfirmPanel;
var UILabel m_KeyBindConfirmText;
var UIButton m_KeyBindConfirmYes;
var UIButton m_KeyBindConfirmNo;
var UIButton m_VideoTabButton;
var UIButton m_SoundTabButton;
var UIButton m_GeneralTabButton;
var UIButton m_ChatTabButton;
var int m_nNumBindings;
var int m_CategorySelected;
var int m_BindSelected;
var bool m_bBindCapture;
var bool m_bBindConfirm;
var bool m_bAltModifier;
var bool m_bInfoVisible;
var name m_ConfirmKeyName;
var PlayerInput m_PlayerInput;

native function bool OnKeyBindMenuKey(const out InputEventParameters EventParms);
native function bool OnKeyBindDefaults(const out InputEventParameters EventParms);
native function bool OnKeyBindBase(const out InputEventParameters EventParms);
native function bool OnKeyBindConfirmYes(const out InputEventParameters EventParms);
native function bool OnKeyBindConfirmNo(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnTabClickedDelegate(const out InputEventParameters EventParms);
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function PopulateWidgets();
native function PopulateBindDataArray();
native function CreateWidgetsFromBindData();
native function EnableBinding();
native function DisableBinding();
native function CaptureKeyToBind(name KeyName);
native function UnbindCommand(string Command);
native function string GetPreviousCommandName(string currentBinding);
native function string GetBind(name Key, bool bAlt);
native function OnBindingsUpdated();
noexport event SetBind(name BindName, string Command, optional bool altKey)
{
	local KeyBind NewBind;

	altKey = false;
	UnbindCommand(Command);
	// End:0x33 Loop:False
	if(altKey)
	{
		NewBind.Alt = true;
	}
	// End:0x46
	else
	{
		NewBind.Alt = false;
	}
	NewBind.Name = BindName;
	NewBind.Command = Command;
	m_PlayerInput.Bindings[m_PlayerInput.Bindings.Length] = NewBind;
	m_PlayerInput.SaveConfig();
	OnBindingsUpdated();
}

event SetKeyBindSelectDelegate(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnKeyBindBase;
	}
}

event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnKeyBindMenuKey;
	rot(327680, 738263052, 1140850687)
	UnknownExprToken(0x03)
	@NULL(0) = @NULL(-1258219196);
	rot(327680, 738263052, 1140850687)
	MetaCastToken(NullReferenceException) /= @NULL(18433024);
	m_SoundTabButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnTabClickedDelegate != rot(327680, 738263052, 1140850687);
		@NULL(423886848)
		m_ChatTabButton
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnTabClickedDelegate != rot(327680, 738263052, 1140850687);
			@NULL(423886848)
			m_KeyBindConfirmNo
			// BlockSize:3072
			switch(@NULL(-54271))
			{
				OnKeyBindConfirmNo != @NULL(34079232);
}
