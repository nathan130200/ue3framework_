/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_QuestTracking.uc
 * 
 * Stats:
 *	Constants:1
 *	Structs:1
 *	Properties:13
 *	Functions:2
 *
 *******************************************************************************/
class TgUIPrimaryHUD_QuestTracking extends Object
	native
	config(UI);

const NUM_QUEST_TRACKABLE_REQUIREMENTS = 4;

struct native QTrackIds
{
	var config int Id;
	var config int Idx;

	structdefaultproperties
	{
		Id=0
		Idx=0
	}
};

var TgUIPrimaryHUD_Settings m_Settings;
var bool m_bActive;
var UIPanel m_QuestTrackerPanel;
var UILabel m_HeaderLabel;
var UILabel m_KeyPrompt;
var UILabel m_QuestName;
var UILabel m_RequirementStrings[4];
var UIPanel m_BottomDock;
var TgUISceneDriver m_PrimaryScene;
var TgHUD_Game m_HUDParent;
var UIPanel m_BasePanel;
var int m_nCachedNameMsgId;
var config array<config QTrackIds> m_TrackIds;

native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);

defaultproperties
{
	m_Settings=TgSettings0
}