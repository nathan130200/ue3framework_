/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIDeviceModPopup.uc
 * 
 * Stats:
 *	Properties:11
 *	Functions:7
 *
 *******************************************************************************/
class TgUIDeviceModPopup extends TgUISceneDriver_Tooltip
	native;

var UIPanel m_PopupPanel;
var UILabel m_ConfirmText;
var UILabel m_ModLabel;
var UILabel m_DeviceLabel;
var UILabel m_FeedbackLabel;
var UIButton m_ConfirmYes;
var UIButton m_ConfirmNo;
var UIButton m_ModItemButton;
var UIButton m_DeviceItemButton;
var TgInventoryObject m_pModInv;
var TgInventoryObject m_pDeviceInv;

native function bool OnConfirmYes(const out InputEventParameters EventParms);
native function bool OnConfirmNo(const out InputEventParameters EventParms);
native noexport function OnInvItemStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
event FixupWidgetsUC()
{
	m_ConfirmYes.__OnRawInputKey__Delegate = OnConfirmYes;
	MetaCastToken-MetaCastToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.MetaCastToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_ModItemButton
	// BlockSize:3072
	switch(@NULL(-54015))
	{
		OnInvItemStateChange != MetaCastToken(ArgumentOutOfRangeException);
}
