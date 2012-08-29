/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIQuestLog.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:3
 *	Properties:12
 *	Functions:6
 *
 *******************************************************************************/
class TgUIQuestLog extends TgUISceneDriver_Tooltip
	native;

const NUM_QUESTS_SUPPORTED_IN_LOG = 20;

struct native sTrackingSelection
{
	var UIPanel m_TrackPanel;
	var UILabel m_FeedbackLabel;
	var UIButton m_Button;
	var UILabel m_ButtonLabel;

	structdefaultproperties
	{
		m_TrackPanel=none
		m_FeedbackLabel=none
		m_Button=none
		m_ButtonLabel=none
	}
};

struct native sActiveWidgets
{
	var UIPanel m_MainPanel;
	var UILabel m_QuestName;
	var UILabel m_Instructions;
	var sQuestTaskPanel m_Tasks;
	var sQuestReqItemPanel m_ReqItems;
	var UIPanel m_RewardPanel;
	var sAutoRewards m_EarnAllRewards;
	var sSelectableRewards m_EarnOneReward;
	var UILabel m_Feedback;
	var UIButton m_AbandonButton;
	var sTrackingSelection m_TrackingSelection;

	structdefaultproperties
	{
		m_MainPanel=none
		m_QuestName=none
		m_Instructions=none
		m_Tasks=(m_OuterPanel=none,m_Requirements=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_Requirements[1]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_Requirements[2]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_Requirements[3]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none))
		m_ReqItems=(m_OuterPanel=none,m_LineItems=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_LineItems[1]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_LineItems[2]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none),m_LineItems[3]=(m_OuterButton=none,m_Name=none,m_Count=none,m_IncompleteHL=none,m_Item=none))
		m_RewardPanel=none
		m_EarnAllRewards=(m_OuterPanel=none,m_BasicRewards=none,m_ItemsPanel=none,m_FourItemPanel=none,m_TwoItemPanel=none,m_OneItemPanel=none,m_RewardItems_Four=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Four[3]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Two=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_Two[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_RewardItems_One=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none))
		m_EarnOneReward=(m_OuterPanel=none,m_Selectables=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_Selectables[1]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none),m_Selectables[2]=(m_OuterButton=none,m_Name=none,m_MouseOverPanel=none,m_SelectedPanel=none,m_Item=none,m_CountLabel=none))
		m_Feedback=none
		m_AbandonButton=none
		m_TrackingSelection=(m_TrackPanel=none,m_FeedbackLabel=none,m_Button=none,m_ButtonLabel=none)
	}
};

struct native sQuestLogElement
{
	var UIButton m_OuterButton;
	var UILabel m_QuestLabel;
	var UIImage m_QuestStateIcon;

	structdefaultproperties
	{
		m_OuterButton=none
		m_QuestLabel=none
		m_QuestStateIcon=none
	}
};

var UIButton m_CloseButton;
var UIPanel m_NoActiveMissionPanel;
var sActiveWidgets m_ActiveWidgets;
var int m_SelectedQuestIndex;
var bool m_bDoingSelection;
var int m_nQuestsDisplayed;
var sQuestLogElement m_QuestLogElements[20];
var native transient Pointer m_pAmQuests[20];
var init transient array<init TgInventoryObject> m_AutoLootImposters;
var init transient array<init TgInventoryObject> m_SelLootImposters;
var init transient array<init TgInventoryObject> m_RequiredItemImposters;
var TgInventoryManager m_InventoryManager;

native function PostOpenScene();
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool OnSceneButton(const out InputEventParameters EventParms);
native function bool DefaultSceneHandler(const out InputEventParameters EventParms);
native noexport function ActiveTooltipChanged(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
