/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIQuestDialog.uc
 * 
 * Stats:
 *	Constants:7
 *	Enums:3
 *	Structs:15
 *	Properties:32
 *	Functions:15
 *
 *******************************************************************************/
class TgUIQuestDialog extends TgUISceneDriver_Tooltip
	native;

const NUM_QUESTS_IN_UI = 10;
const NUM_AUTO_QUEST_REWARDS_IN_UI = 4;
const TWO_AUTO_QUEST_REWARDS_IN_UI = 2;
const ONE_AUTO_QUEST_REWARD_IN_UI = 1;
const NUM_SEL_QUEST_REWARDS_IN_UI = 3;
const NUM_QUEST_REQUIRED_ELEMENTS_IN_UI = 4;
const NUM_QUEST_REQUIRED_ITEMS_IN_UI = 4;

enum QuestDialogTutorials
{
	SQTut_ACCEPT,
	SQTut_TURNIN,
	SQTut_MAX
};

enum QuestTutorialStep
{
	QTS_FIRST_SELECT,
	QTS_NEXT,
	QTS_NEXT,
	QTS_FINISH,
	QTS_MAX
};

enum eQuestDialogState
{
	QDS_Intro,
	QDS_Offer,
	QDS_Turnin,
	QDS_Reward,
	QDS_MAX
};

struct native sQTutPanels
{
	var UIPanel StepPanels[4];

	structdefaultproperties
	{
		StepPanels[0]=none
		StepPanels[1]=none
		StepPanels[2]=none
		StepPanels[3]=none
	}
};

struct native sQuestErrMsg
{
	var bool bValid;
	var int nQuestId;
	var int nErrType;
	var int nSecondary;

	structdefaultproperties
	{
		bValid=false
		nQuestId=0
		nErrType=0
		nSecondary=0
	}
};

struct native sQuestLink
{
	var UIButton m_OuterButton;
	var UILabel m_QuestName;
	var UIButton m_QuestIcon;
	var UIPanel m_MouseOverPanel;
	var UIPanel m_SelectedPanel;
	var init native transient Pointer m_pQuest;

	structdefaultproperties
	{
		m_OuterButton=none
		m_QuestName=none
		m_QuestIcon=none
		m_MouseOverPanel=none
		m_SelectedPanel=none
	}
};

struct native sIntroWidgets
{
	var UIPanel m_MainPanel;
	var UILabel m_NPCSmalltalk;
	var UIPanel m_AvailableQuestsPanel;
	var sQuestLink m_AvailableQuests[10];
	var UIButton m_NextButton;
	var UILabel m_NextButtonLabel;

	structdefaultproperties
	{
		m_MainPanel=none
		m_NPCSmalltalk=none
		m_AvailableQuestsPanel=none
		m_AvailableQuests[0]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[1]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[2]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[3]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[4]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[5]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[6]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[7]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[8]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_AvailableQuests[9]=(m_OuterButton=none,m_QuestName=none,m_QuestIcon=none,m_MouseOverPanel=none,m_SelectedPanel=none)
		m_NextButton=none
		m_NextButtonLabel=none
	}
};

struct native sRewardLineItem
{
	var UIButton m_OuterButton;
	var UILabel m_Name;
	var UIPanel m_MouseOverPanel;
	var UIPanel m_SelectedPanel;
	var TgUIInvWidget m_Item;
	var UILabel m_CountLabel;

	structdefaultproperties
	{
		m_OuterButton=none
		m_Name=none
		m_MouseOverPanel=none
		m_SelectedPanel=none
		m_Item=none
		m_CountLabel=none
	}
};

struct native sAutoRewards
{
	var UIPanel m_OuterPanel;
	var UILabel m_BasicRewards;
	var UIPanel m_ItemsPanel;
	var UIPanel m_FourItemPanel;
	var UIPanel m_TwoItemPanel;
	var UIPanel m_OneItemPanel;
	var sRewardLineItem m_RewardItems_Four[4];
	var sRewardLineItem m_RewardItems_Two[2];
	var sRewardLineItem m_RewardItems_One;

	structdefaultproperties
	{
		m_OuterPanel=none
		m_BasicRewards=none
		m_ItemsPanel=none
		m_FourItemPanel=none
		m_TwoItemPanel=none
		m_OneItemPanel=none
		m_RewardItems_Four[0]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_RewardItems_Four[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_RewardItems_Four[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_RewardItems_Four[3]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_RewardItems_Two[0]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_RewardItems_Two[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_RewardItems_One=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
	}
};

struct native sBoostRewards
{
	var UIPanel m_OuterPanel;
	var UILabel m_BasicRewards;
	var UIPanel m_ItemsPanel;
	var sRewardLineItem m_RewardItem;
	var UIImage m_RedOut;
	var UIImage m_RedOutItem;

	structdefaultproperties
	{
		m_OuterPanel=none
		m_BasicRewards=none
		m_ItemsPanel=none
		m_RewardItem=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_RedOut=none
		m_RedOutItem=none
	}
};

struct native sEliteRewards
{
	var UIPanel m_OuterPanel;
	var UILabel m_BasicRewards;
	var UIImage m_RedOut;

	structdefaultproperties
	{
		m_OuterPanel=none
		m_BasicRewards=none
		m_RedOut=none
	}
};

struct native sSelectableRewards
{
	var UIPanel m_OuterPanel;
	var sRewardLineItem m_Selectables[3];

	structdefaultproperties
	{
		m_OuterPanel=none
		m_Selectables[0]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_Selectables[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
		m_Selectables[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none)
	}
};

struct native sOfferWidgets
{
	var UIPanel m_MainPanel;
	var UIButton m_AcceptButton;
	var UIButton m_DeclineButton;
	var UILabel m_QuestName;
	var UILabel m_QuestInstructions;
	var UILabel m_Dialog;
	var UIPanel m_RewardPanel;
	var sAutoRewards m_EarnAllRewards;
	var sSelectableRewards m_EarnOneReward;

	structdefaultproperties
	{
		m_MainPanel=none
		m_AcceptButton=none
		m_DeclineButton=none
		m_QuestName=none
		m_QuestInstructions=none
		m_Dialog=none
		m_RewardPanel=none
		m_EarnAllRewards=(m_OuterPanel=none,m_BasicRewards=none,m_ItemsPanel=none,m_FourItemPanel=none,m_TwoItemPanel=none,m_OneItemPanel=none,m_RewardItems_Four=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[3]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Two=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Two[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_One=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none))
		m_EarnOneReward=(m_OuterPanel=none,m_Selectables=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_Selectables[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_Selectables[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none))
	}
};

struct native sCompletionWidgets
{
	var UIPanel m_MainPanel;
	var UIButton m_FinishButton;
	var UIButton m_BackButton;
	var UILabel m_QuestName;
	var UILabel m_Dialog;
	var UIPanel m_RewardPanel;
	var sAutoRewards m_EarnAllRewards;
	var sSelectableRewards m_EarnOneReward;
	var sBoostRewards m_BoostOnlyReward;
	var sEliteRewards m_EliteOnlyReward;
	var UIPanel m_ChooseOneHelp;
	var UIButton m_BuyNowButton;
	var UILabel m_BuyNowLabel;

	structdefaultproperties
	{
		m_MainPanel=none
		m_FinishButton=none
		m_BackButton=none
		m_QuestName=none
		m_Dialog=none
		m_RewardPanel=none
		m_EarnAllRewards=(m_OuterPanel=none,m_BasicRewards=none,m_ItemsPanel=none,m_FourItemPanel=none,m_TwoItemPanel=none,m_OneItemPanel=none,m_RewardItems_Four=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[3]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Two=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Two[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_One=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none))
		m_EarnOneReward=(m_OuterPanel=none,m_Selectables=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_Selectables[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_Selectables[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none))
		m_BoostOnlyReward=(m_OuterPanel=none,m_BasicRewards=none,m_ItemsPanel=none,m_RewardItem=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RedOut=none,m_RedOutItem=none)
		m_EliteOnlyReward=(m_OuterPanel=none,m_BasicRewards=none,m_RedOut=none)
		m_ChooseOneHelp=none
		m_BuyNowButton=none
		m_BuyNowLabel=none
	}
};

struct native sQuestRequirement
{
	var UIButton m_OuterButton;
	var UILabel m_Name;
	var UILabel m_Count;
	var UIPanel m_IncompleteHL;
	var TgUIInvWidget m_Item;

	structdefaultproperties
	{
		m_OuterButton=none
		m_Name=none
		m_Count=none
		m_IncompleteHL=none
		m_Item=none
	}
};

struct native sQuestTaskPanel
{
	var UIPanel m_OuterPanel;
	var sQuestRequirement m_Requirements[4];

	structdefaultproperties
	{
		m_OuterPanel=none
		m_Requirements[0]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
		m_Requirements[1]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
		m_Requirements[2]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
		m_Requirements[3]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
	}
};

struct native sQuestReqItemPanel
{
	var UIPanel m_OuterPanel;
	var sQuestRequirement m_LineItems[4];

	structdefaultproperties
	{
		m_OuterPanel=none
		m_LineItems[0]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
		m_LineItems[1]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
		m_LineItems[2]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
		m_LineItems[3]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none)
	}
};

struct native sTurninWidgets
{
	var UIPanel m_MainPanel;
	var UIButton m_FinishButton;
	var UIButton m_BackButton;
	var UILabel m_QuestName;
	var UILabel m_Dialog;
	var sQuestTaskPanel m_Tasks;
	var sQuestReqItemPanel m_ReqItems;

	structdefaultproperties
	{
		m_MainPanel=none
		m_FinishButton=none
		m_BackButton=none
		m_QuestName=none
		m_Dialog=none
		m_Tasks=(m_OuterPanel=none,m_Requirements=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_Requirements[1]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_Requirements[2]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_Requirements[3]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none))
		m_ReqItems=(m_OuterPanel=none,m_LineItems=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_LineItems[1]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_LineItems[2]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_LineItems[3]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none))
	}
};

var TgUIQuestDialog.eQuestDialogState m_eDialogState;
var TgUIQuestDialog.QuestTutorialStep m_eTutorialStep;
var TgUIQuestDialog.QuestDialogTutorials m_eTutorialType;
var int m_nAvailableQuests;
var int m_nActiveQuests;
var int m_nSelectedReward;
var bool m_bHasSelectedReward;
var bool m_bTurninReady;
var bool m_bTutorialMode;
var sQuestErrMsg m_QuestErr;
var init native transient Pointer m_QuestGroup;
var init native transient Pointer m_QuestVolume;
var init native transient Pointer m_SelectedQuest;
var UIPanel m_PositionPanel;
var UILabel m_QuestNPCLabel;
var UILabel m_Feedback;
var sIntroWidgets m_IntroWidgets;
var sOfferWidgets m_OfferWidgets;
var sTurninWidgets m_TurninWidgets;
var sCompletionWidgets m_CompletionWidgets;
var MaterialInstanceConstant m_BoostingMic;
var MaterialInstanceConstant m_EliteAgentMic;
var init transient array<init TgInventoryObject> m_AutoLootImposters;
var init transient array<init TgInventoryObject> m_SelLootImposters;
var init transient array<init TgInventoryObject> m_RequiredItemImposters;
var init transient TgInventoryObject m_BoostItemImposter;
var TgInventoryManager m_InventoryManager;
var transient TgSkeletalMeshActorNPC m_NPC;
var UIPanel m_TutorialMainPanel;
var sQTutPanels m_TutPanels[2];
var array<int> m_nAcceptTutorialVolumeId;
var array<int> m_nTurninTutorialVolumeId;

native function PostOpenScene();
native function PreCloseScene();
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnDialogButton(const out InputEventParameters EventParms);
native function bool OnItemButton(const out InputEventParameters EventParms);
native function bool OnQuestButton(const out InputEventParameters EventParms);
native function bool OnBuyNowButton(const out InputEventParameters EventParms);
native function bool DefaultSceneHandler(const out InputEventParameters EventParms);
native noexport function ActiveTooltipChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function ActiveHighlightChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function BeginTutorial(TgUIQuestDialog.QuestDialogTutorials TutType);
native noexport function UpdateTutorialProgress(TgUIAgentProfile_Equip.TutorialStep Step, optional int NewTutorialType)
{
	NewTutorialType = -1;	
}

native function bool CheckTutorialStep(TgUIAgentProfile_Equip.TutorialStep Step);
native function bool CheckTutorialDisabled(TgUIAgentProfile_Equip.TutorialStep Step);
native function bool CheckTutorialTypeDisabled(TgUIQuestDialog.QuestDialogTutorials eType);

defaultproperties
{
	m_BoostingMic=MaterialInstanceConstant'HUD_A.EOM.MIC_IndicatorBubble_boost'
	m_EliteAgentMic=MaterialInstanceConstant'HUD_A.EOM.MIC_IndicatorBubble_Elite'
	m_nAcceptTutorialVolumeId(0)=260
	m_nTurninTutorialVolumeId(0)=261
}