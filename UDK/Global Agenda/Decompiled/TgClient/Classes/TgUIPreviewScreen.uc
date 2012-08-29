/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPreviewScreen.uc
 * 
 * Stats:
 *	Properties:9
 *	Functions:10
 *
 *******************************************************************************/
class TgUIPreviewScreen extends TgUISceneDriver
	native;

var UIButton m_CloseButton;
var TgUISkeletalMeshWidget m_PaperDollMeshWidget;
var TgSkeletalMeshActor_EquipScreen m_PaperDoll;
var bool m_bRotatePaperDollCW;
var bool m_bRotatePaperDollCCW;
var UIButton m_wRotateDudeCW;
var UIButton m_wRotateDudeCCW;
var UIButton m_wDragButton;
var init array<init TgInventoryObject> m_EquippedItemList;

native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function SetPaperDollPreviewItem(TgInventoryObject Item);
native function bool OnPreviewScreenDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnRotateDudeCWClicked(const out InputEventParameters EventParms);
native function bool OnRotateDudeCCWClicked(const out InputEventParameters EventParms);
native noexport function OnRotateDudeStateChange(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnPreviewScreenDelegate;
	VirtualFunctionToken-VirtualFunctionToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.Core.UStruct.UByteCodeDecompiler.VirtualFunctionToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile());
	// Failed to decompile this line:
		// Failed to decompile this Function's code.
		115
Index was out of range. Must be non-negative and less than the size of the collection.
		Parameter name: index

   at UELib.Core.UStruct.UByteCodeDecompiler.(Int32 , Int32 )
		   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile()
}
