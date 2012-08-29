/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIMailMenu.uc
 * 
 * Stats:
 *	Constants:3
 *	Enums:1
 *	Structs:4
 *	Properties:52
 *	Functions:44
 *
 *******************************************************************************/
class TgUIMailMenu extends TgUISceneDriver_Tooltip
	native;

const NUM_MAIL_TABS = 2;
const NUM_MAX_ITEM_ATTACHMENTS = 4;
const NUM_MAX_DETAIL_ITEM_ATTACHMENTS = 5;

enum eMailTabs
{
	TAB_INBOX,
	TAB_COMPOSE,
	TAB_MAX
};

struct native sMailTab
{
	var UIButton mailTabButton;
	var UILabel mailTabLabel;
	var UIPanel mailTabPanel;

	structdefaultproperties
	{
		mailTabButton=none
		mailTabLabel=none
		mailTabPanel=none
	}
};

struct native sMailItem
{
	var UIPrefabInstance mailItemPrefab;
	var UIButton mailItemButton;
	var UIImage mailItemCheck;
	var UIImage mailItemIcon;
	var UIPanel mailItemPanel;
	var UILabel mailItemSender;
	var UILabel mailItemSubject;
	var UILabel mailItemExpire;
	var UIImage mailItemHighlight;
	var UIButton mailSelectButton;
	var int mailItemID;
	var bool hasAttachment;
	var int mailCurrency;
	var int mailStateID;
	var int mailTypeCode;
	var int mailSourceCode;
	var bool bSystemMail;

	structdefaultproperties
	{
		mailItemPrefab=none
		mailItemButton=none
		mailItemCheck=none
		mailItemIcon=none
		mailItemPanel=none
		mailItemSender=none
		mailItemSubject=none
		mailItemExpire=none
		mailItemHighlight=none
		mailSelectButton=none
		mailItemID=0
		hasAttachment=false
		mailCurrency=0
		mailStateID=0
		mailTypeCode=0
		mailSourceCode=0
		bSystemMail=false
	}
};

struct native sAttachmentInfo
{
	var int inventoryId;
	var int instanceCount;
	var TgInventoryObject inventoryObject;

	structdefaultproperties
	{
		inventoryId=0
		instanceCount=0
		inventoryObject=none
	}
};

struct native sMailAttachment
{
	var UIButton attachmentButton;
	var UIPanel attachmentPanel;
	var UILabel attachmentLabel;
	var UILabel unitLabel;
	var UIImage attachmentHighlight;
	var TgUIPrimaryHUD_SlotWidgets wItem;
	var int inventoryId;
	var TgInventoryObject inventoryObject;

	structdefaultproperties
	{
		attachmentButton=none
		attachmentPanel=none
		attachmentLabel=none
		unitLabel=none
		attachmentHighlight=none
		wItem=none
		inventoryId=0
		inventoryObject=none
	}
};

var transient array<sAttachmentInfo> m_InvAttachments;
var int m_ToPlayerId;
var UIButton m_CloseButton;
var UIButton m_BlockerButton;
var UIPanel m_MessagesListPanel;
var TgUIScrollList m_MessageList;
var init array<init sMailItem> m_MailItems;
var sPagingPanel m_PagingPanel;
var UIPanel m_MessagesDetailPanel;
var UIPanel m_HeaderPanel;
var UILabel m_NameLabel;
var UILabel m_SubjectLabel;
var TgUIScrollList m_DetailList;
var UILabel m_MessageBody;
var UIPanel m_DetailAttachmentsPanel;
var sMailAttachment m_DetailAttachments[5];
var UIPanel m_MessageOptionsPanel;
var UIButton m_DeleteButton;
var UIButton m_ReturnButton;
var UIButton m_ReplyButton;
var UIButton m_TakeButton;
var UIEditBox m_ToEditBox;
var UIEditBox m_SubjectEditBox;
var UIEditBox m_EnterEditBox;
var UILabel m_MessageLabel;
var TgUIScrollList m_MessageScrollList;
var UILabel m_FeedbackLabel;
var UIButton m_CancelButton;
var UIButton m_SendButton;
var UIPanel m_AttachmentsPanel;
var sMailAttachment m_Attachments[4];
var UIPanel m_AttachmentOptionsPanel;
var UIButton m_AttachButton;
var UIButton m_RemoveButton;
var UIPanel m_AmountToSendPanel;
var UIEditBox m_AmountEditBox;
var UICheckbox m_CODCheckBox;
var UICheckbox m_SendMoneyCheckBox;
var bool m_bToPlayerValidated;
var sMailTab m_MailTab[2];
var int m_CurrentTab;
var int m_nSelectionIndex;
var int m_nAttachmentSelectionIndex;
var int m_nDetailAttachmentSelectionIndex;
var native Pointer m_pMailInboxData;
var TgPawn m_PlayerPawn;
var Texture2D m_texMsgMessage;
var Texture2D m_texMsgItem;
var Texture2D m_texMsgCredit;
var name m_ButtonStyleResolverTag;
var name m_ButtonActiveStyleName;
var name m_ButtonInactiveStyleName;

native function bool OnMailMenuKey(const out InputEventParameters EventParms);
native function bool OnCloseButton(const out InputEventParameters EventParms);
native function bool OnDeleteButton(const out InputEventParameters EventParms);
native function bool OnReturnButton(const out InputEventParameters EventParms);
native function bool OnTakeButton(const out InputEventParameters EventParms);
native function bool OnReplyButton(const out InputEventParameters EventParms);
native function bool OnAttachButton(const out InputEventParameters EventParms);
native function bool OnRemoveButton(const out InputEventParameters EventParms);
native function bool OnCancelButton(const out InputEventParameters EventParms);
native function bool OnSendButton(const out InputEventParameters EventParms);
native function bool OnSelectMailTab(const out InputEventParameters EventParms);
native function bool OnInboxItemSelect(const out InputEventParameters EventParms);
native function bool OnAttachmentSelect(const out InputEventParameters EventParms);
native function bool OnDetailAttachmentSelect(const out InputEventParameters EventParms);
native function bool OnMailItemSelect(const out InputEventParameters EventParms);
native noexport function OnAttachmentStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function OnDetailAttachmentStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function OnEnterValueChanged(UIObject ebox, int PlayerIndex);
native function OnToValueChanged(UIObject ebox, int PlayerIndex);
native function bool OnToSubmitText(UIEditBox ebox, int PlayerIndex);
native function OnCODCheckboxChanged(UIObject ebox, int PlayerIndex);
native function OnSendMoneyCheckboxChanged(UIObject ebox, int PlayerIndex);
native function PostInitSceneDriver();
native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function bool TickTgUIScene();
native function ResizeDisplayList(int newSize);
native function UpdateHighlight();
native function UpdateAttachmentHighlight();
native function SelectMailTab(int SelectTab);
native function OpenCODConfirmPopup(int nCurrencyValue);
native function bool OnConfirmYesClicked(const out InputEventParameters EventParms);
native function bool OnConfirmNoClicked(const out InputEventParameters EventParms);
native function bool SetFocusedWidget(UIScreenObject NewFocus);
native function bool ValidateMailFeature();
event SetMailItemSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnMailItemSelect;
	}
}

event SetInboxItemSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnInboxItemSelect;
	}
}

event SetAttachmentSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnAttachmentSelect;
	}
}

event SetDetailAttachmentSelect(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__OnRawInputKey__Delegate = OnDetailAttachmentSelect;
	}
}

event SetAttachmentStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnAttachmentStateChange;
	}
}

event SetDetailAttachmentStateChange(UIScreenObject Obj)
{
	// End:0x24 Loop:False
	if(Obj != none)
	{
		Obj.__NotifyActiveStateChanged__Delegate = OnDetailAttachmentStateChange;
	}
}

event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnMailMenuKey;
	// BlockSize:3072
	(switch(@NULL(-54271)))
	{
		// BlockSize:3072
		OnDeleteButton != (switch(@NULL(-54271)));
		{
			{
				{
					{
						{
							{
								{
									{
										// BlockSize:3072
										(switch(@NULL(-54271)))
										{
											OnPrevButton != return @NULL(324096);
											// BlockSize:3072
											(switch(@NULL(-54271)))
											{
												OnNextButton != return @NULL(324096);
												// BlockSize:3072
												(switch(@NULL(-54271)))
												{
													OnFirstButton != return @NULL(324096);
													// BlockSize:3072
													(switch(@NULL(-54271)))
													{
														OnLastButton != @NULL(-788060928);
														@NULL(369241088)
														m_MailTab[I].mailTabButton.__OnRawInputKey__Delegate = OnSelectMailTab;
														@NULL(-1861872128)
														@NULL(-1610540732)
														// BlockSize:3072
														(switch(@NULL(-54015)))
														{
															// BlockSize:3072
															OnNotifyEditBoxStateChanged != (switch(@NULL(-54015)));
															{
																{
																	{
																		{
																			{
																				{
																					{
																						{
}

defaultproperties
{
	m_texMsgMessage=Texture2D'GA_Menu_Assets.Icons.ICONS_Mail_Message'
	m_texMsgItem=Texture2D'GA_Menu_Assets.Icons.ICONS_Mail_Item'
	m_texMsgCredit=Texture2D'GA_Menu_Assets.Icons.ICONS_Mail_Credits'
	m_ButtonStyleResolverTag=Background Image Style
	m_ButtonActiveStyleName=TG_NS_Button_Toggle_v1b
	m_ButtonInactiveStyleName=TG_NS_Button_Toggle_v1
	m_bHookChat=true
}