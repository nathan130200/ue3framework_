/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIConfirmPopup.uc
 * 
 * Stats:
 *	Structs:1
 *	Properties:5
 *	Functions:10
 *
 *******************************************************************************/
class TgUIConfirmPopup extends TgUISceneDriver
	native;

struct native sConfirmPopup
{
	var string m_ConfirmString;
	var Function m_ConfirmCallback;

	structdefaultproperties
	{
		m_ConfirmString=""
		m_ConfirmCallback=none
	}
};

var UIPanel m_PopupPanel;
var UILabel m_ConfirmText;
var UIButton m_ConfirmYes;
var UIButton m_ConfirmNo;
var init array<init sConfirmPopup> m_PopupList;

native function bool OnConfirmYes(const out InputEventParameters EventParms);
native function bool OnConfirmNo(const out InputEventParameters EventParms);
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function SetConfirmDialogText();
native noexport function RemoveConfirmPopupByCallback(Function callbackPtr, optional bool bTellGameClient)
{
	bTellGameClient = true;	
}

native function HandleConfirmButtonCallback(bool accepted);
native function SetConfirmTextAndCallback(string Message, Function callbackPtr);
event FixupWidgetsUC()
{
	m_ConfirmYes.__OnRawInputKey__Delegate = OnConfirmYes;
	// Failed to decompile this line:
		/* NewToken LocalVariableToken LocalVariableToken NativeFunctionToken
		DelegatePropertyToken LocalVariableToken LocalVariableToken LocalVariableToken
		 */
	// Index was out of range. Must be non-negative and less than the size of the collection.
	Parameter name: index
}
