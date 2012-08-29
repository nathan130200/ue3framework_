/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUISceneDriver.uc
 * 
 * Stats:
 *	Constants:2
 *	Structs:3
 *	Properties:29
 *	Functions:38
 *
 *******************************************************************************/
class TgUISceneDriver extends Object
	native;

const LUA_ASSUMED_ICONS_PER_ROWCOL = 5;
const EQ_DOLL_ROTATION_VALUE = 7.0f;

struct native sTgUIRotatorInit
{
	var Actor targetModel;
	var TgUISkeletalMeshWidget targetUISkelMesh;
	var UIScreenObject dragRegionObject;
	var bool bEnableYaw;
	var bool bEnablePitch;
	var UIButton yawLeft;
	var UIButton yawRight;
	var UIButton pitchUp;
	var UIButton pitchDown;

	structdefaultproperties
	{
		targetModel=none
		targetUISkelMesh=none
		dragRegionObject=none
		bEnableYaw=false
		bEnablePitch=false
		yawLeft=none
		yawRight=none
		pitchUp=none
		pitchDown=none
	}
};

struct native sTgUIRotator
{
	var sTgUIRotatorInit rotInit;
	var bool bValid;
	var bool bActive;
	var bool bStaticActive;
	var bool bStaticNegative;
	var int nlastMoveYaw;
	var int nlastMovePitch;

	structdefaultproperties
	{
		rotInit=(targetModel=none,targetUISkelMesh=none,dragRegionObject=none,bEnableYaw=false,bEnablePitch=false,yawLeft=none,yawRight=none,pitchUp=none,pitchDown=none)
		bValid=false
		bActive=false
		bStaticActive=false
		bStaticNegative=false
		nlastMoveYaw=0
		nlastMovePitch=0
	}
};

struct native sPagingPanel
{
	var UIPanel PagingPanel;
	var UILabel PagingLabel;
	var UIButton LastButton;
	var UIButton FirstButton;
	var UIButton PrevButton;
	var UIButton NextButton;

	structdefaultproperties
	{
		PagingPanel=none
		PagingLabel=none
		LastButton=none
		FirstButton=none
		PrevButton=none
		NextButton=none
	}
};

var bool m_bInitialized;
var bool m_bLoaded;
var bool m_bEscapeKeyCloses;
var bool m_bCloseChildrenOnClose;
var bool m_bManagedScene;
var bool m_bForcedOpen;
var bool m_bHookChat;
var bool m_bIgnoreLoadCheck;
var bool m_bDataRequestPending;
var bool m_bEndOfDataset;
var TgHUD m_HUDParent;
var UIInteraction m_UIInteraction;
var LocalPlayer m_OwnerPlayer;
var UIScene m_UIScene;
var TgUISceneManager m_Manager;
var string m_UISceneTemplatePath;
var float m_TimeOfTick;
var UIScene m_SceneTemplate;
var transient TgUIDataStore_StringList m_TgStringListDataStore;
var string m_KeyCommand;
var native Pointer m_pTgCallbackDevice;
var int m_nPageNum;
var int m_nPageSize;
var Material m_ItemMaterialParent;
var TgUISceneDriver m_ParentScene;
var init array<init UIScreenObject> m_FocusableEntities;
var int m_ActiveFocusIdx;
var array<sTgUIRotator> m_ModelRotators;
var int m_nActiveModelRotator;

native function PostInitSceneDriver();
native function PostOpenScene();
native function PreCloseScene();
native function TgPawn_Character GetLocalTgPawn();
native function OpenTgUIScene();
native final function CloseTgUIScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function HideChildControlsByTag(UIScreenObject Parent, string sCompareTag, int nCompareTagLen);
native function SetButtonsEnabled(bool bEnabled);
native function Repaint();
native function RegisterCallbacks();
native function UnregisterCallbacks();
native noexport function SetVisible(UIObject pObject, optional bool bVisible)
{
	bVisible = true;	
}

native function DefaultSceneDriverCloseDelegate(UIScene DeactivatedScene);
native function name GetCurrentKeyBinding(out int bAltModified);
native function string CreateDataStoreBindingString(UIDataStore DataStore, name SectionName);
native function TriggerSceneFadeIn();
native function SetParentUIScene(TgUISceneDriver Scene);
native function bool DefaultTgShouldModulateDelegate(out float AlphaModulationPercent);
native function OpenTabScene(int nFuncId);
native function bool OnLastButton(const out InputEventParameters EventParms);
native function bool OnFirstButton(const out InputEventParameters EventParms);
native function bool OnPrevButton(const out InputEventParameters EventParms);
native function bool OnNextButton(const out InputEventParameters EventParms);
native function SetPreviousWidgetFocused();
native function SetNextWidgetFocused();
native function bool SetFocusedWidget(UIScreenObject NewFocus);
native function bool HandleTgUIModelDragRotation(const out InputEventParameters EventParms);
native function bool HandleTgUIModelFixedRotation(const out InputEventParameters EventParms);
native function CheckSceneForUIModelDragRelease(const out InputEventParameters EventParms);
native function PostRender();
event TickTgUISceneUC()
{
	TickTgUIScene();
}

function bool DefaultSceneDriverSceneDelegate(const out InputEventParameters EventParms)
{
	local int bAltModified;
	local name closeKeyName;

	closeKeyName = GetCurrentKeyBinding(bAltModified);
	// End:0x83 Loop:False
	if(m_bEscapeKeyCloses && (EventParms.InputKeyName == 'Escape') && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
	// End:0x106
	else
	{
		// End:0x106 Loop:False
		if(EventParms.InputKeyName == closeKeyName && (EventParms.bAltPressed == ((bAltModified > 0) ? true : false && (EventParms.EventType == 0 || (EventParms.EventType == 3)))))
		{
			CloseTgUIScene();
			return true;
		}
	}
	// End:0x120 Loop:False
	if(m_nActiveModelRotator >= 0)
	{
		CheckSceneForUIModelDragRelease(EventParms);
	}
	return false;
}

event SetDefaultSceneDriverSceneDelegates()
{
	// End:0x56 Loop:False
	if(m_UIScene != none)
	{
		m_UIScene.__OnRawInputKey__Delegate = DefaultSceneDriverSceneDelegate;
		return @NULL(201327872);
		@NULL(-53503)
		DefaultSceneDriverCloseDelegate != return @NULL(201327872);
		DefaultTgShouldModulateDelegate != @NULL(34079232);
	}
}

event Font GetFontFromUCByIndex(int FontSize)
{
	// End:0x25 Loop:False
	if(m_HUDParent != none)
	{
		return m_HUDParent.GetFontSizeIndex(FontSize);
	}
	return none;
}

noexport function OnNotifyEditBoxStateChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState)
{
	// End:0x33 Loop:False
	if(NewlyActiveState.Class == class'UIState_Pressed'.default.Class)
	{
		SetFocusedWidget(Sender);
	}
}

event UIListCallbackWrapper(UIList Sender, int PlayerIndex, UIState NewlyActiveState, UIState PreviouslyActiveState)
{
	Sender.OnStateChanged(Sender, PlayerIndex, NewlyActiveState, PreviouslyActiveState);
}

defaultproperties
{
	m_bCloseChildrenOnClose=true
	m_nPageSize=25
	m_ItemMaterialParent=Material'HUD_A.MAT_GUI_HUD_DeviceSlotA'
}