/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgentProfile_Achievement.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:1
 *	Structs:5
 *	Properties:16
 *	Functions:13
 *
 *******************************************************************************/
class TgUIAgentProfile_Achievement extends TgUIAgentProfile
	native;

const NUM_OF_CATEGORY_PER_PAGE = 22;
const NUM_OF_ACHIEVEMENT_PER_PAGE = 9;

enum eAchievementDataState
{
	ADS_REQUEST,
	ADS_WAITING,
	ADS_RECEIVED,
	ADS_COMPLETE,
	ADS_MAX
};

struct native AchievedBG
{
	var UIPanel m_BasePanel;
	var UIImage m_Background;
	var UIPanel m_SelectedPanel;

	structdefaultproperties
	{
		m_BasePanel=none
		m_Background=none
		m_SelectedPanel=none
	}
};

struct native AchievementData
{
	var init native Pointer m_AchSetup;
	var init native Pointer m_PlayerAch;
	var bool m_bValid;
	var int m_nAchievementId;

	structdefaultproperties
	{
		m_bValid=false
		m_nAchievementId=0
	}
};

struct native AchievementGroupData
{
	var int m_nGroupId;
	var init native Pointer m_Group;
	var init array<init AchievementData> m_Achievements;

	structdefaultproperties
	{
		m_nGroupId=0
		m_Achievements=none
	}
};

struct native AchievementItem
{
	var UIButton m_BaseButton;
	var UIButton m_BadgeButton;
	var UIImage m_BadgeIcon;
	var UIPanel m_RewardPanel;
	var TgUIInvWidget m_RewardSlot;
	var UILabel m_RewardLabel;
	var UILabel m_NameLabel;
	var UILabel m_DescrLabel;
	var UIButton m_ProgressButton;
	var UIImage m_ProgressBar;
	var UILabel m_AchievedDateLabel;
	var AchievedBG m_AchievedBG;
	var AchievedBG m_NotAchievedBG;
	var AchievementData m_AchievementData;
	var TgInventoryObject m_RewardImposter;
	var MaterialInstanceConstant m_ProgressBarMIC;

	structdefaultproperties
	{
		m_BaseButton=none
		m_BadgeButton=none
		m_BadgeIcon=none
		m_RewardPanel=none
		m_RewardSlot=none
		m_RewardLabel=none
		m_NameLabel=none
		m_DescrLabel=none
		m_ProgressButton=none
		m_ProgressBar=none
		m_AchievedDateLabel=none
		m_AchievedBG=(m_BasePanel=none,m_Background=none,m_SelectedPanel=none)
		m_NotAchievedBG=(m_BasePanel=none,m_Background=none,m_SelectedPanel=none)
		m_AchievementData=(m_bValid=false,m_nAchievementId=0)
		m_RewardImposter=none
		m_ProgressBarMIC=none
	}
};

struct native AchievementGroup
{
	var UIButton m_CatButton;
	var UILabel m_CatLabel;
	var int m_nGroupId;

	structdefaultproperties
	{
		m_CatButton=none
		m_CatLabel=none
		m_nGroupId=0
	}
};

var init array<init AchievementGroupData> m_AchievementGroupData;
var UIPanel m_CategoryPanel;
var UILabel m_CountLabel;
var sPagingPanel m_CategoryPagingPanel;
var AchievementGroup m_AchievementGroups[22];
var UIPanel m_ListPanel;
var sPagingPanel m_ListPagingPanel;
var AchievementItem m_AchievementItems[9];
var UILabel m_SceneHeader;
var MaterialInterface m_ProgressBarMaterial;
var native Pointer m_pAchievementMarshal;
var int m_CurrentCategoryPage;
var int m_CurrentAchievementPage;
var int m_SelectedAchievementGroupId;
var int m_nTotalCategoryPage;
var int m_nTotalCategoryAchievementPage;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function PreCloseScene();
native function bool OnAchievementCategoryClicked(const out InputEventParameters EventParms);
native function bool OnCategoryPrevButtonClicked(const out InputEventParameters EventParms);
native function bool OnCategoryNextButtonClicked(const out InputEventParameters EventParms);
native function bool OnAchievementPrevButtonClicked(const out InputEventParameters EventParms);
native function bool OnAchievementNextButtonClicked(const out InputEventParameters EventParms);
native noexport function OnProgressBarStateChangeDelegate(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function ActiveTooltipChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
event SetRawInputKeyForCategory(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnAchievementCategoryClicked;
	}
}

event ClearRawInputKeyForAchievementsList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = None;
	}
}

event FixupWidgetsUC()
{
	local int I, J;

	super.FixupWidgetsUC();
	I = 0;
	// End:0x4d Loop:False
	if(I < 22)
	{
		m_AchievementGroups[I].m_CatButton.__OnRawInputKey__Delegate = OnAchievementCategoryClicked;
		@NULL(218502656)
		@NULL(169213967)
	}
	@NULL(-1811471104)
	@NULL(169214102)
	@NULL(369699840)
	m_AchievementItems[J].m_ProgressButton.__NotifyActiveStateChanged__Delegate = OnProgressBarStateChangeDelegate;
	@NULL(1409684992)
	@NULL(-315287228)
	return @NULL(324096);
	@NULL(-251592448)
	assert(@NULL(738263052));
	// Failed to decompile this line:
		// Failed to decompile this Function's code.
		307
Index was out of range. Must be non-negative and less than the size of the collection.
		Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
		   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}

defaultproperties
{
	m_bEscapeKeyCloses=true
}