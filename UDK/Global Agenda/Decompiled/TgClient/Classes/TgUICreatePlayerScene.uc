/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICreatePlayerScene.uc
 * 
 * Stats:
 *	Properties:3
 *	Functions:4
 *
 *******************************************************************************/
class TgUICreatePlayerScene extends TgUISceneDriver
	native;

var UIButton m_AcceptButton;
var UILabel m_EntryFeedback;
var UIEditBox m_EntryField;

native function FixupTgUIScene();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnAcceptInputKeyDelegate(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	@NULL(201327872).NativeFunctionToken(ArgumentOutOfRangeException);
}
