/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIProductionPopup.uc
 * 
 * Stats:
 *	Properties:3
 *	Functions:4
 *
 *******************************************************************************/
class TgUIProductionPopup extends TgUIInventoryPopup
	native;

var int m_nMaximumTechLevelValueId;
var int m_nZoneObjectId;
var int m_nPosition;

native function FixupTgUIScene();
native function SetMaximumTechLevel(int nTechLevelValueId);
native function SetHex(int nZoneObjectId, int nPosition);
native function bool OnAddButtonDelegate(const out InputEventParameters EventParms);
