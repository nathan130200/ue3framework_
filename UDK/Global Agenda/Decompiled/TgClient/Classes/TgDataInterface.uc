/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgDataInterface.uc
 * 
 * Stats:
 *	Constants:3
 *	Structs:1
 *	Functions:6
 *
 *******************************************************************************/
class TgDataInterface extends Object
	native;

const MATCH_TYPE_PVE = 1021;
const MATCH_TYPE_PVP = 1022;
const MATCH_TYPE_TRAINING = 1188;

struct native CharacterInfoStruct
{
	var string sName;
	var int nProfileId;
	var int nRoleId;
	var int nHeadAsmId;
	var int nSkinMatParamId;
	var int nEyeMatParamId;
	var int nHairAsmId;
	var int nGenderTypeId;
	var int nMapGameId;
	var array<int> nMorphSettings;

	structdefaultproperties
	{
		sName=""
		nProfileId=0
		nRoleId=0
		nHeadAsmId=0
		nSkinMatParamId=0
		nEyeMatParamId=0
		nHairAsmId=0
		nGenderTypeId=0
		nMapGameId=0
		nMorphSettings=none
	}
};

native function AddCharacter(CharacterInfoStruct CharInfo, TgDataSet pDataSet);
native function GetLootTableItems(int nLootTableId, int nProfileId, TgDataSet pDataSet);
native function GetCharacterStats(TgDataSet pDataSet);
native function QueryPlayers(TgDataSet pDataSet);
native function GetInstanceList(TgDataSet pDataSet);
native function GetLocalBotList(TgDataSet pDataSet);
