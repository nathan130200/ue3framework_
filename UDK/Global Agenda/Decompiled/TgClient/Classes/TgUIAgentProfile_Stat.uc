/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgentProfile_Stat.uc
 * 
 * Stats:
 *	Constants:13
 *	Enums:5
 *	Structs:6
 *	Properties:38
 *	Functions:19
 *
 *******************************************************************************/
class TgUIAgentProfile_Stat extends TgUIAgentProfile
	native;

const NUM_OF_CRAFTING_SKILLS = 6;
const NUM_CRAFTING_SKILLS = 16;
const NUM_SKILL_STARS = 5;
const NUM_OF_SKILL_STARS = 5;
const NUM_OF_FLAIR_SETS = 2;
const NUM_OF_BADGE_SETS = 2;
const NUM_OF_FLAIRS_PER_SET = 15;
const NUM_OF_BADGES_PER_SET = 8;
const NUM_OF_SUBTABS = 2;
const NUM_OF_ICONTABS = 2;
const STAR_TEX_WID = 182;
const STAR_TEX_HGT = 36;
const NUM_OF_BOOSTS = 4;

enum eFlairSetType
{
	FLAIRSET_RECENT,
	FLAIRSET_RARE,
	FLAIRSET_MAX
};

enum eBadgeSetType
{
	BADGESET_RECENT,
	BADGESET_RARE,
	BADGESET_MAX
};

enum eStatTabs
{
	SUBTAB_INFO,
	SUBTAB_CRAFTING,
	SUBTAB_MAX
};

enum eIconTabs
{
	ICONTAB_BADGE,
	ICONTAB_FLAIR,
	ICONTAB_MAX
};

enum ePaperDollState
{
	DOLL_FULLVIEW,
	DOLL_HEADVIEW,
	DOLL_MAX
};

struct native sStatTab
{
	var UIButton subTabButton;
	var UILabel subTabLabel;
	var UIPanel subTabPanel;

	structdefaultproperties
	{
		subTabButton=none
		subTabLabel=none
		subTabPanel=none
	}
};

struct native sBoostInfo
{
	var UILabel boostType;
	var UILabel boostPercentage;
	var UILabel boostTime;

	structdefaultproperties
	{
		boostType=none
		boostPercentage=none
		boostTime=none
	}
};

struct native CraftingSkillStruct
{
	var UIButton ParentButton;
	var UIButton ItemSlot;
	var UILabel nameLabel;
	var UILabel SkillAmountLabel;
	var UIImage ProgressImage;
	var int nSkillId;
	var MaterialInstanceConstant m_CraftingProgMIC;

	structdefaultproperties
	{
		ParentButton=none
		ItemSlot=none
		nameLabel=none
		SkillAmountLabel=none
		ProgressImage=none
		nSkillId=0
		m_CraftingProgMIC=none
	}
};

struct native SortInfoStruct
{
	var int SortOrder;
	var int NbrAchieved;

	structdefaultproperties
	{
		SortOrder=0
		NbrAchieved=0
	}
};

struct native FlairSetStruct
{
	var UIPanel FlairPanel;
	var TgUIInvWidget Icons[15];
	var UIButton PrevButton;
	var UIButton NextButton;
	var int CurrPage;
	var init array<init TgInventoryObject> m_HeadFlairs;

	structdefaultproperties
	{
		FlairPanel=none
		Icons[0]=none
		Icons[1]=none
		Icons[2]=none
		Icons[3]=none
		Icons[4]=none
		Icons[5]=none
		Icons[6]=none
		Icons[7]=none
		Icons[8]=none
		Icons[9]=none
		Icons[10]=none
		Icons[11]=none
		Icons[12]=none
		Icons[13]=none
		Icons[14]=none
		PrevButton=none
		NextButton=none
		CurrPage=0
		m_HeadFlairs=none
	}
};

struct native BadgeSetStruct
{
	var UIPanel BadgePanel;
	var UIButton Icons[8];
	var UIButton PrevButton;
	var UIButton NextButton;
	var int TipNameMsgId[8];
	var int TipDescMsgId[8];
	var int NbrAchieved[8];
	var init string CompletedDate[8];
	var int CurrPage;

	structdefaultproperties
	{
		BadgePanel=none
		Icons[0]=none
		Icons[1]=none
		Icons[2]=none
		Icons[3]=none
		Icons[4]=none
		Icons[5]=none
		Icons[6]=none
		Icons[7]=none
		PrevButton=none
		NextButton=none
		TipNameMsgId[0]=0
		TipNameMsgId[1]=0
		TipNameMsgId[2]=0
		TipNameMsgId[3]=0
		TipNameMsgId[4]=0
		TipNameMsgId[5]=0
		TipNameMsgId[6]=0
		TipNameMsgId[7]=0
		TipDescMsgId[0]=0
		TipDescMsgId[1]=0
		TipDescMsgId[2]=0
		TipDescMsgId[3]=0
		TipDescMsgId[4]=0
		TipDescMsgId[5]=0
		TipDescMsgId[6]=0
		TipDescMsgId[7]=0
		NbrAchieved[0]=0
		NbrAchieved[1]=0
		NbrAchieved[2]=0
		NbrAchieved[3]=0
		NbrAchieved[4]=0
		NbrAchieved[5]=0
		NbrAchieved[6]=0
		NbrAchieved[7]=0
		CompletedDate[0]=""
		CompletedDate[1]=""
		CompletedDate[2]=""
		CompletedDate[3]=""
		CompletedDate[4]=""
		CompletedDate[5]=""
		CompletedDate[6]=""
		CompletedDate[7]=""
		CurrPage=0
	}
};

var UIImage m_ClassIcon;
var UIButton m_DragButton;
var UIPanel m_DrawPanel;
var TgUISkeletalMeshWidget m_PaperDollMeshWidget;
var TgSkeletalMeshActor_CharacterBuilder m_PaperDoll;
var int m_MaleShoulderMeshId;
var int m_FemaleShoulderMeshId;
var sStatTab m_SubTab[2];
var sStatTab m_IconTab[2];
var int m_CurrentTab;
var int m_CurrentIconTab;
var UILabel m_LevelLabel;
var UILabel m_XpLabel;
var UIImage m_XpProgImage;
var UILabel m_NextLevelLabel;
var UILabel m_AboutLabel;
var UILabel m_CreditLabel;
var UILabel m_TokenLabel;
var UILabel m_HZPointLabel;
var UILabel m_AchievementBadgeLabel;
var UIPanel m_BoostPanel;
var sBoostInfo m_BoostInfo[4];
var MaterialInstanceConstant m_XpProgMIC;
var MaterialInstanceConstant m_SkillStarMICParent;
var MaterialInstanceConstant m_SkillStarMIC[5];
var UIImage m_SkillStarImage[5];
var UIImage m_SkillStarTexture;
var CraftingSkillStruct m_CraftingControls[6];
var MaterialInstanceConstant m_CraftingProgMICParent;
var UIButton m_PrevButton;
var UIButton m_NextButton;
var UILabel m_PagingLabel;
var native const Pointer m_pCraftingMarshal;
var native const Pointer m_pAchievementMarshal;
var FlairSetStruct m_FlairSets[2];
var TgInventoryObject m_SelectedHeadFlair;
var BadgeSetStruct m_BadgeSets[2];
var TgUIAgentProfile_Stat.ePaperDollState m_eDollState;

native function bool TickTgUIScene();
native function FixupTgUIScene();
native function PreCloseScene();
native function PostOpenScene();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnSelectSubTab(const out InputEventParameters EventParms);
native function bool OnSelectIconTab(const out InputEventParameters EventParms);
native function bool OnPrevButtonClicked(const out InputEventParameters EventParms);
native function bool OnNextButtonClicked(const out InputEventParameters EventParms);
native function bool OnPrevBadgeButtonClicked(const out InputEventParameters EventParms);
native function bool OnNextBadgeButtonClicked(const out InputEventParameters EventParms);
native function SetupPaperDoll();
native function DestroyPaperDoll();
native function OnPaperDollUpdated();
native function bool OnFlairIconClicked(const out InputEventParameters EventParms);
native function bool OnUnequipFlairClicked(const out InputEventParameters EventParms);
native noexport function OnFlairIconStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnBadgeIconStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
event FixupWidgetsUC()
{
	local int I, J;

	super.FixupWidgetsUC();
	I = 0;
	// End:0x4d Loop:False
	if(I < 2)
	{
		m_SubTab[I].subTabButton.__OnRawInputKey__Delegate = OnSelectSubTab;
		@NULL(218502656)
		@NULL(205389839)
	}
	@NULL(-1811471104)
	@NULL(205389974)
	@NULL(369241088)
	m_IconTab[I].subTabButton.__OnRawInputKey__Delegate = OnSelectIconTab;
	@NULL(1409684992)
	@NULL(205389839)
	@NULL(-2113460992)
	@NULL(205389974)
	@NULL(369241088)
	m_FlairSets[I].PrevButton.__OnRawInputKey__Delegate = OnPrevButtonClicked;	
	@NULL(197329152)
	@NULL(201327872)
	@NULL(-54271)
	OnNextButtonClicked != @NULL(2013734144);
	@NULL(370093056)
	m_FlairSets[I].Icons[J].__OnRawInputKey__Delegate = OnFlairIconClicked;
	 == @NULL(205389850)
	@NULL(201327872)
	@NULL(-54015)
	OnFlairIconStateChange != @NULL(33953280);
	@NULL(-1694099968)
	@NULL(205389839)
	@NULL(1074210048)
	default.@NULL(205389974)
	@NULL(369241088)
	m_BadgeSets[I].PrevButton.__OnRawInputKey__Delegate = OnPrevBadgeButtonClicked;	
	@NULL(197198080)
	@NULL(201327872)
	@NULL(-54271)
	OnNextBadgeButtonClicked != @NULL(906437888);
	@NULL(369634304)
	m_BadgeSets[I].Icons[J].__NotifyActiveStateChanged__Delegate = OnBadgeIconStateChange;
	@NULL(-268036608)
}

defaultproperties
{
	m_MaleShoulderMeshId=2332
	m_FemaleShoulderMeshId=2339
	m_XpProgMIC=MaterialInstanceConstant'HUD_A.Character_Stats.MIC_Level_Prog_Character_Skills'
	m_SkillStarMICParent=MaterialInstanceConstant'HUD_A.CharacterStats_SkillRatings.MIC_SkillRatingStar_A'
	m_CraftingProgMICParent=MaterialInstanceConstant'HUD_A.Character_Stats.MIC_Skill_Prog_Character_Skills'
	m_eDollState=DOLL_HEADVIEW
}