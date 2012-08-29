/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_SlotWidgets.uc
 * 
 * Stats:
 *	Constants:1
 *	Properties:7
 *	Functions:5
 *
 *******************************************************************************/
class TgUIPrimaryHUD_SlotWidgets extends Object
	native;

const SLOT_FLASH_DURATION = 0.3f;

var bool m_bSlotPopulated;
var bool m_bSlotUnavailable;
var bool m_bSlotTrainable;
var UIButton m_SlotButton;
var Material m_ItemMaterialParent;
var Texture2D m_TexBlankIcon;
var MaterialInstanceConstant m_SlotMIC;

native function Hide();
native function Show(string IconTexture, int IconIndex);
native function SetUnavailable(bool bUnavailable);
native function SetBlank();
native function Init(UIButton Button);

defaultproperties
{
	m_ItemMaterialParent=Material'HUD_A.MAT_GUI_HUD_DeviceSlotA'
	m_TexBlankIcon=Texture2D'HUD_A.DeviceBar.T_GUI_IconSlotEmpty'
}