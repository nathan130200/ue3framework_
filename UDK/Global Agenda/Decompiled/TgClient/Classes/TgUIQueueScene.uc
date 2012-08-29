/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIQueueScene.uc
 * 
 * Stats:
 *	Constants:5
 *	Structs:2
 *	Properties:17
 *	Functions:13
 *
 *******************************************************************************/
class TgUIQueueScene extends TgUISceneDriver
	native;

const MAX_NUM_QUEUES = 50;
const QUEUE_QUICK_REFRESH_TIME = 5.0f;
const QUEUE_REFRESH_TIME = 15.0f;
const QUEUE_REFRESH_CAP = 1.0f;
const NUM_FEEDBACK_LABELS = 6;

struct native QueueRowStruct
{
	var UIButton qrsQueueButton;
	var UILabel qrsQueueStatus;
	var UILabel qrsQueueType;
	var UILabel qrsQueueMission;
	var UILabel qrsQueueWaiting;
	var UILabel qrsQueueReward;
	var UILabel qrsQueueTeams;
	var UILabel qrsQueueActive;
	var UIImage qrsQueueHighlight;
	var int qrsQueueID;
	var int qrsQueueLevelMin;
	var int qrsQueueLevelMax;
	var int qrsQueueSideMax;

	structdefaultproperties
	{
		qrsQueueButton=none
		qrsQueueStatus=none
		qrsQueueType=none
		qrsQueueMission=none
		qrsQueueWaiting=none
		qrsQueueReward=none
		qrsQueueTeams=none
		qrsQueueActive=none
		qrsQueueHighlight=none
		qrsQueueID=0
		qrsQueueLevelMin=0
		qrsQueueLevelMax=0
		qrsQueueSideMax=0
	}
};

struct native QueueFeedbackStruct
{
	var UILabel qfsFeedbackLabel;
	var string qfsFeedbackString;

	structdefaultproperties
	{
		qfsFeedbackLabel=none
		qfsFeedbackString=""
	}
};

var UILabel m_StatusLabel;
var UIScrollFrame m_QueueScrollFrame;
var bool m_QueueSized;
var bool m_bQuickRefresh;
var UIButton m_QueueButton;
var UIButton m_UnqueueButton;
var UIButton m_RefreshButton;
var UIButton m_DevButton;
var UIButton m_CloseButton;
var QueueFeedbackStruct m_QueueFeedback[6];
var QueueRowStruct m_Queues[50];
var int m_SelectedQueue;
var int m_SavedQueueID;
var float m_fUpdateTimer;
var float m_fUpdateCap;
var TgPawn_Character m_pawn;
var TgPlayerController m_PC;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function RegisterCallbacks();
native function PopulateQueueList();
native function bool OnSceneKeyDelegate(const out InputEventParameters EventParms);
native function bool OnSelectQueueDelegate(const out InputEventParameters EventParms);
native function bool OnJoinQueueDelegate(const out InputEventParameters EventParms);
native function bool OnLeaveQueueDelegate(const out InputEventParameters EventParms);
native function bool OnRefreshQueueDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnDevButtonDelegate(const out InputEventParameters EventParms);
native function AddFeedbackMessage(string newMessage);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyDelegate;
	ObjectConstToken-ObjectConstToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.ObjectConstToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_QueueButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnJoinQueueDelegate != ObjectConstToken(ArgumentOutOfRangeException);
		@NULL(423886848)
		m_RefreshButton
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnRefreshQueueDelegate != @NULL(-1006164736);
			@NULL(372386816)
			m_Queues[I].qrsQueueButton.__OnRawInputKey__Delegate = OnSelectQueueDelegate;
}

defaultproperties
{
	m_bHookChat=true
	m_KeyCommand="OpenQueueSelectScreen"
}