/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIMainMenu.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:2
 *	Structs:2
 *	Properties:20
 *	Functions:25
 *
 *******************************************************************************/
class TgUIMainMenu extends TgUISceneDriver_Tooltip
	native;

const MENU_THROTTLE_TIME = 0.5f;
const NUM_VARIABLE_BUTTONS = 10;

enum eMenuFunctions
{
	FUNCTION_SETTINGS_GENERAL,
	FUNCTION_SETTINGS_VIDEO,
	FUNCTION_SETTINGS_SOUND,
	FUNCTION_SETTINGS_CONTROLS,
	FUNCTION_SETTINGS_CHAT,
	FUNCTION_MISSIONSCREEN,
	FUNCTION_TEAM_SEARCH,
	FUNCTION_TEAM_DETAILS,
	FUNCTION_TEAM_CARGO,
	FUNCTION_AGENCYSCREEN,
	FUNCTION_AGENCYSCREEN_GENERAL,
	FUNCTION_AGENCYSCREEN_ALLIANCE,
	FUNCTION_AGENCYSCREEN_APPLICANTS,
	FUNCTION_AGENCYSCREEN_CREATION,
	FUNCTION_AGENCYSCREEN_MANAGEMENT,
	FUNCTION_AGENCYSCREEN_FACILITIES,
	FUNCTION_AGENCYSCREEN_INVENTORY,
	FUNCTION_PLAYERSEARCH,
	FUNCTION_VENDORSCREEN,
	FUNCTION_RAID,
	FUNCTION_RAID_MAP,
	FUNCTION_DEVICE_STATS,
	FUNCTION_MISSION_STATS,
	FUNCTION_AUCTION_BROWSE,
	FUNCTION_AUCTION_BID,
	FUNCTION_AUCTION_SELL,
	FUNCTION_MAIL,
	FUNCTION_LFG,
	FUNCTION_NAV,
	FUNCTION_CRAFTING,
	FUNCTION_INSTANCE_SELECT,
	FUNCTION_LEVEL_UNLOCK,
	FUNCTION_GLOBALMISSIONSCREEN,
	FUNCTION_HEXAUCTION,
	FUNCTION_AGENCYSCREEN_RECRUITING,
	FUNCTION_AGENCY_DIRECTORY,
	FUNCTION_CAMPAIGN_HEXMAP,
	FUNCTION_CAMPAIGN_COMBAT,
	FUNCTION_CAMPAIGN_COMBAT_LOG,
	FUNCTION_CAMPAIGN_LEADERBOARD,
	FUNCTION_FRIENDS_LIST,
	FUNCTION_ZONEMISSIONSCREEN,
	FUNCTION_DEFAULTMISSIONSCREEN,
	FUNCTION_AGENCYSCREEN_INVENTORY_LOG,
	FUNCTION_AGENTPROFILE,
	FUNCTION_AGENTPROFILE_EQUIP,
	FUNCTION_AGENTPROFILE_STAT,
	FUNCTION_QUESTDIALOG,
	FUNCTION_ITEM_MOD,
	FUNCTION_QUEST_LOG,
	FUNCTION_UPDATE_HAIR,
	FUNCTION_AGENTPROFILE_SKILL,
	FUNCTION_AGENTPROFILE_INVENTORY,
	FUNCTION_UPDATE_FACE,
	FUNCTION_AGENTPROFILE_ACHIEVEMENT,
	FUNCTION_STORE_FRONT,
	FUNCTION_CASH_SHOP,
	FUNCTION_EXIT_MISSION,
	FUNCTION_HELP,
	FUNCTION_TELEPORT,
	FUNCTION_MAX
};

enum eButtonStatus
{
	ButtonStatus_Enabled,
	ButtonStatus_Disabled,
	ButtonStatus_MAX
};

struct native sMainMenuButton
{
	var UIButton mmbButton;
	var UILabel mmbLabel;
	var UILabel mmbKeyBind;
	var int mmbFunctionID;

	structdefaultproperties
	{
		mmbButton=none
		mmbLabel=none
		mmbKeyBind=none
		mmbFunctionID=0
	}
};

struct native sContextItemData
{
	var string cidString;
	var int cidFunctionID;

	structdefaultproperties
	{
		cidString=""
		cidFunctionID=0
	}
};

var UIButton m_EliteAgentButton[2];
var UIButton m_BoosterButton[2];
var UIButton m_StoreButton[2];
var UIButton m_DisconnectButton;
var UIButton m_QuitButton;
var UIButton m_MenuCloseButton;
var int m_nNumButtons;
var sMainMenuButton m_VarButtons[10];
var bool m_bQuitMode;
var bool m_bOpenedByVolume;
var UIPanel m_QuitConfirmPanel;
var UIButton m_QuitConfirmYes;
var UIButton m_QuitConfirmNo;
var init array<init name> m_ManagedSceneNames;
var init array<init string> m_ManagedSceneKeys;
var init array<init sContextItemData> m_ContextItems;
var name m_OpenChildSceneName;
var int m_OpenChildSceneID;
var float m_MenuThrottleTimer;
var float m_fTimeSinceBoostCheck;

native function PreCloseScene();
native function PostOpenScene();
native function bool TickTgUIScene();
native function bool OnMainMenuSceneKey(const out InputEventParameters EventParms);
native function bool OnMainMenuButtonKey(const out InputEventParameters EventParms);
native function bool OnFixedPurposeButton(const out InputEventParameters EventParms);
native function bool OnMainMenuQuitKey(const out InputEventParameters EventParms);
native function bool OnMainMenuExitMissionKey(const out InputEventParameters EventParms);
native noexport function OnButtonMouseOverDelegate(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function BuildManagedSceneList();
native noexport function TgUISceneDriver OpenManagedScene(int sceneReference, optional bool bToggle, optional bool bDevForce, optional bool bIgnoreOverride)
{
	bToggle = true;
	bDevForce = false;
	bIgnoreOverride = false;			
}

native noexport function TgUISceneDriver OpenManagedSceneByName(name ClassName, optional bool bToggle, optional bool bDevForce)
{
	bToggle = true;
	bDevForce = false;		
}

native function TgUISceneDriver GetOpenManagedScene();
native noexport function CloseManagedScene(optional bool bPreserveVolumeFlag)
{
	bPreserveVolumeFlag = false;
}

native function int GetOverrideSceneReference(TgUIMainMenu.eMenuFunctions funcID);
native function TgUIMainMenu.eMenuFunctions GetBaseFunctionID(TgUIMainMenu.eMenuFunctions funcID);
native function int GetSceneReferenceByClassName(name ClassName);
native function int GetButtonFunctionID(UIScreenObject buttonObject);
native function int CountContextItems();
native function ConfigureContextItems();
native function AddContextItem(int funcID);
native function SetUpMenuButtons();
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function EnterQuitMode();
native function ExitQuitMode();
