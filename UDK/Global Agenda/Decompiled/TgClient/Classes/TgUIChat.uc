/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIChat.uc
 * 
 * Stats:
 *	Constants:3
 *	Enums:2
 *	Structs:4
 *	Properties:34
 *	Functions:9
 *
 *******************************************************************************/
class TgUIChat extends TgUISceneDriver
	native
	config(UI);

const NUM_CHAT_CHANNELGROUPS = 5;
const NUM_CHAT_LINES_DISPLAYED = 9;
const NUM_PARTS_IN_CHAT_BG_IMAGE = 9;

enum eUIChatState
{
	ChatState_Passive,
	ChatState_EnteringText,
	ChatState_MAX
};

enum eUIChatOpenings
{
	ChatOpening_Default,
	ChatOpening_Slash,
	ChatOpening_Reply,
	ChatOpening_MAX
};

struct native sChatChannelGroupLogic
{
	var int m_FilterBits;
	var bool m_bActive;
	var string m_TabName;
	var int m_TabNameMsgId;

	structdefaultproperties
	{
		m_FilterBits=0
		m_bActive=false
		m_TabName=""
		m_TabNameMsgId=0
	}
};

struct native sChatChannelGroupDisplay
{
	var int m_TabLogicIndex;
	var transient UIButton m_Button;
	var transient UILabel m_Label;

	structdefaultproperties
	{
		m_TabLogicIndex=0
		m_Button=none
		m_Label=none
	}
};

struct native sOuterPanels
{
	var UIPanel m_MainOP;
	var UIPanel m_ChannelGroupsOP;
	var UIPanel m_ChatEntryOP;
	var UIPanel m_LabelsOP;

	structdefaultproperties
	{
		m_MainOP=none
		m_ChannelGroupsOP=none
		m_ChatEntryOP=none
		m_LabelsOP=none
	}
};

struct native sChatScrollButtons
{
	var UIButton m_UpButton;
	var UIButton m_DownButton;
	var UIButton m_EndButton;
	var UIImage m_EndButtonGlow;
	var MaterialInstanceConstant m_ButtonGlowMIC;

	structdefaultproperties
	{
		m_UpButton=none
		m_DownButton=none
		m_EndButton=none
		m_EndButtonGlow=none
		m_ButtonGlowMIC=none
	}
};

var TgUIChat.eUIChatState m_eChatState;
var byte m_byNumActiveTabs;
var name m_nmSlashOpening;
var name m_nmReplyOpening;
var name m_nmDefaultOpening;
var name m_nmPageUp;
var name m_nmPageDown;
var int m_nChatIndex;
var bool m_bForceChatInFront;
var bool m_bForceCombatLog;
var globalconfig bool m_bHideChatWhenIdle;
var globalconfig bool m_bFilterProfanity;
var globalconfig bool m_bShowAgencyMemberLogins;
var globalconfig bool m_bShowFriendLogins;
var UILabel m_SendToLine;
var sOuterPanels m_OuterPanels;
var UIImage m_ChatOpaqueBG;
var UIImage m_ChatBG;
var UIEditBox m_ChatEntryBox;
var UIComboBox m_ChannelCombo;
var UILabel m_LockedModeHelpLabel;
var globalconfig float m_fIdleOpacity;
var int m_nSelectedChannelGroupDisplay;
var globalconfig sChatChannelGroupLogic m_ChannelGroupLogic[5];
var globalconfig sChatChannelGroupDisplay m_ChannelGroupDisplay[5];
var sChatScrollButtons m_ScrollButtons;
var UILabel m_ChatDisplay[9];
var UILabel m_TestSizingLabel;
var name m_nmChannelDataStore;
var array<byte> m_ChatChannelList;
var string m_CachedTellRecipient;
var string m_CachedLastSender;
var float m_fNextScrollPulse;
var int m_nScrolling;

native function PostInitSceneDriver();
native function FixupTgUIScene();
native function UserSelectedChannel(UIObject Sender, int PlayerIndex);
native function ChatEntryLineChanged(UIObject Sender, int PlayerIndex);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnChatTabClicked(const out InputEventParameters EventParms);
native function bool OnChatEntrySubmitText(UIEditBox ebox, int PlayerIndex);
native function bool OnChatScrollButton(const out InputEventParameters EventParms);
native function Tick(float DeltaTime);

defaultproperties
{
	m_bFilterProfanity=true
	m_bShowAgencyMemberLogins=true
	m_bShowFriendLogins=true
	m_fIdleOpacity=0.50
	m_ChannelGroupLogic[0]=(m_FilterBits=14847,m_bActive=true,m_TabName="",m_TabNameMsgId=59873)
	m_ChannelGroupLogic[1]=(m_FilterBits=2317,m_bActive=true,m_TabName="",m_TabNameMsgId=59874)
	m_ChannelGroupLogic[2]=(m_FilterBits=2401,m_bActive=true,m_TabName="",m_TabNameMsgId=59875)
	m_ChannelGroupLogic[3]=(m_FilterBits=2305,m_bActive=true,m_TabName="",m_TabNameMsgId=59876)
	m_ChannelGroupLogic[4]=(m_FilterBits=131072,m_bActive=true,m_TabName="",m_TabNameMsgId=59877)
	m_ChannelGroupDisplay[1]=(m_TabLogicIndex=1,m_Button=none,m_Label=none)
	m_ChannelGroupDisplay[2]=(m_TabLogicIndex=2,m_Button=none,m_Label=none)
	m_ChannelGroupDisplay[3]=(m_TabLogicIndex=3,m_Button=none,m_Label=none)
	m_ChannelGroupDisplay[4]=(m_TabLogicIndex=4,m_Button=none,m_Label=none)
	m_nmChannelDataStore=TgChatChannels
}