/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIUnlockScene.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:1
 *	Structs:1
 *	Properties:14
 *	Functions:11
 *
 *******************************************************************************/
class TgUIUnlockScene extends TgUISceneDriver
	native;

const RANK_UNLOCK_SKILL_GROUP = 139;
const NUM_UNLOCK_TYPES = 5;

enum eUnlockTypes
{
	UNLOCK_DEVICE,
	UNLOCK_ARMOR,
	UNLOCK_SKILL_POINT,
	UNLOCK_MAX
};

struct native sUnlockItemPanel
{
	var UIPanel m_ItemPanel;
	var UILabel m_ItemLabel;
	var UIButton m_ItemNavButton;
	var UIButton m_ItemEquipButton;
	var int m_nItemType;
	var int m_nItemCount;

	structdefaultproperties
	{
		m_ItemPanel=none
		m_ItemLabel=none
		m_ItemNavButton=none
		m_ItemEquipButton=none
		m_nItemType=0
		m_nItemCount=0
	}
};

var sUnlockItemPanel m_UnlockItem[5];
var int m_NumCurrentUnlocks;
var UIPanel m_UnlockPanel;
var UILabel m_GratsLabel;
var UILabel m_LevelLabel;
var UIButton m_ProgButton;
var UIImage m_FrameImage[3];
var UIImage m_BGImage;
var TgPlayerController m_PC;
var bool m_bNewLevel;
var bool m_bRequestSkills;
var int m_nCurrentLevel;
var TgInventoryManager m_InventoryManager;
var native const Pointer m_pSkillMarshal;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function PopulateUnlockWidgets();
native noexport function CheckLevelUnlocks(optional bool bNewLevel)
{
	bNewLevel = false;
}

native function ProcessUnlockData();
native function TgPointOfInterest GetPOIByMsgId(int msgId);
native function bool OnSceneKeyDelegate(const out InputEventParameters EventParms);
native function bool OnEquipButtonDelegate(const out InputEventParameters EventParms);
native function bool OnNavButtonDelegate(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyDelegate;
	@NULL(-1039719168)
	@NULL(618725526)
	@NULL(369437696)
	// End:0x72 Loop:False
	if(m_UnlockItem[I].m_ItemEquipButton != none)
	{
		m_UnlockItem[I].m_ItemEquipButton.__OnRawInputKey__Delegate = OnEquipButtonDelegate;
	}
	m_UnlockItem[I].m_ItemNavButton;
	none
	)
	m_UnlockItem[I].m_ItemNavButton.__OnRawInputKey__Delegate = OnNavButtonDelegate;
}

event RequestPlayersSkillsFromServer(TgPawn_Character MyPawn)
{
	// End:0x1f Loop:False
	if(MyPawn != none)
	{
		MyPawn.SendCharacterSkillMarshal();
	}
}
