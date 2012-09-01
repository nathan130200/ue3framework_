/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SRGame_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct SRGame.GameNoteRenderComponent.NoteProperties
// 0x0018
struct FNoteProperties
{
	struct FString                                     m_text;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UFont*                                       m_font;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_scale;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      m_color;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YProfileSettings.YS_EquipmentDefault
// 0x002C
struct FYS_EquipmentDefault
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_eFactionPerk;                                   		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eMinorPerk1;                                    		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eMinorPerk2;                                    		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eMinorPerk3;                                    		// 0x000F (0x0001) [0x0000000000000000]              
	unsigned char                                      m_ePrimaryWeapon;                                 		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eSecondaryWeapon;                               		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_eExplosivesWeapon;                              		// 0x0012 (0x0001) [0x0000000000000000]              
	struct FString                                     m_HeadMesh_Handle;                                		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_TorsoMesh_Handle;                               		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YProfileSettings.YS_ProfileStat
// 0x0014
struct FYS_ProfileStat
{
	unsigned char                                      m_type;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_updateMethod;                                   		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_updateCondition;                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_bDoubleData : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_defaultValue;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_value[ 0x2 ];                                   		// 0x000C (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YProfileSettings.YS_ChallengeUnlockCondition
// 0x0010
struct FYS_ChallengeUnlockCondition
{
	TArray< int >                                      m_profileStatIDs;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_targetValue;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.YS_Challenge
// 0x0030
struct FYS_Challenge
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_description;                                    		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                m_descriptionVariable;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_targetTeam;                                     		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_conditionOperator;                              		// 0x001D (0x0001) [0x0000000000000000]              
	TArray< struct FYS_ChallengeUnlockCondition >      m_unlockConditions;                               		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_earnedXP;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.YS_UnlockedCollectable
// 0x0008
struct FYS_UnlockedCollectable
{
	unsigned char                                      m_ItemType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_index;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.YS_ExperienceData
// 0x00FC
struct FYS_ExperienceData
{
	int                                                m_rankLevel;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_xp;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_prestigeLevel;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_perkUseTimes[ 0x3C ];                           		// 0x000C (0x00F0) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.YS_EquipmentClass
// 0x001C
struct FYS_EquipmentClass
{
	class UClass*                                      m_PrimaryWeapon;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_SecondaryWeapon;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_Explosives;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MajorPerk;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MinorPerk1;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MinorPerk2;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MinorPerk3;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YProfileSettings.YS_CharacterMeshList
// 0x0015
struct FYS_CharacterMeshList
{
	struct FName                                       m_HeadMesh_Handle;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_HeadMesh_MaterialNum;                           		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FName                                       m_TorsoMesh_Handle;                               		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned char                                      m_TorsoMesh_MaterialNum;                          		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.YS_CharacterEquipmentList
// 0x0050
struct FYS_CharacterEquipmentList
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              AiSelectionWeight;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RestrictionCount;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      MustBeSelectedByOnePlayer : 1;                    		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FYS_EquipmentClass                          CharacterEquipment;                               		// 0x0018 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CharacterMeshList                       CharacterMeshes;                                  		// 0x0034 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	int                                                MajorPerkLevel;                                   		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YProfileSettings.YS_MissionProgress
// 0x0005
struct FYS_MissionProgress
{
	unsigned long                                      m_missionCompleted : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_highestDifficulty;                              		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.CheckpointTime
// 0x0010
struct FCheckpointTime
{
	int                                                SecondsSinceMidnight;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Day;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Month;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Year;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.YS_CharacterMeshAssetList
// 0x0014
struct FYS_CharacterMeshAssetList
{
	class USkeletalMesh*                               m_HeadMesh;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          m_HeadMaterial;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               m_TorsoMesh;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          m_TorsoMaterial;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          m_TorsoHandsMaterial;                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProfileSettings.CheckpointEnumerationResult
// 0x0068
struct FCheckpointEnumerationResult
{
	unsigned char                                      m_checkpointFileExists[ 0x4 ];                    		// 0x0000 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_checkpointFileContainsData[ 0x4 ];              		// 0x0004 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_checkpointFileCorrupted[ 0x4 ];                 		// 0x0008 (0x0004) [0x0000000000100000]              
	struct FCheckpointTime                             m_checkpointTimestamp[ 0x4 ];                     		// 0x000C (0x0040) [0x0000000000100000]              
	unsigned char                                      m_checkpointDifficulty[ 0x4 ];                    		// 0x004C (0x0004) [0x0000000000100000]              
	unsigned char                                      m_chapter[ 0x4 ];                                 		// 0x0050 (0x0004) [0x0000000000100000]              
	unsigned char                                      m_mission[ 0x4 ];                                 		// 0x0054 (0x0004) [0x0000000000100000]              
	float                                              m_timePlayed[ 0x4 ];                              		// 0x0058 (0x0010) [0x0000000000100000]              
};

// ScriptStruct SRGame.YUICharacterCustomPanel.YS_ContentPackInfoItem
// 0x0010
struct UYUICharacterCustomPanel_FYS_ContentPackInfoItem
{
	unsigned long                                      m_Unlocked : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_Prefix;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUICharacterCustomKitPanel.YS_ResourceListItem
// 0x002C
struct FYS_ResourceListItem
{
	struct FName                                       m_AssetHandle;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       m_ResourcePath;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       m_MaterialPath;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_RequiresReenlistment : 1;                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_UnlockLevel;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     m_FriendlyName;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YMPMeshLookupTable.YMP_AssetSet
// 0x02C4
struct FYMP_AssetSet
{
	class UClass*                                      m_assetClass;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       m_referencePath;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_usableByTeam;                                   		// 0x000C (0x0001) [0x0000000000000000]              
	struct FString                                     m_usableByClass;                                  		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_UnlockLevel;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       m_locOnCharacter;                                 		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FString                                     m_ArmorPath;                                      		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_ArmorUnlockLevel;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     m_ContentPack;                                    		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass;                             		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath;                              		// 0x0048 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel;                            		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel : 1;                		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack;                            		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass01;                           		// 0x0064 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath01;                            		// 0x0068 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel01;                          		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel01 : 1;              		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack01;                          		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass02;                           		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath02;                            		// 0x0088 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel02;                          		// 0x0090 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel02 : 1;              		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack02;                          		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass03;                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath03;                            		// 0x00A8 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel03;                          		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel03 : 1;              		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack03;                          		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass04;                           		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath04;                            		// 0x00C8 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel04;                          		// 0x00D0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel04 : 1;              		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack04;                          		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass05;                           		// 0x00E4 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath05;                            		// 0x00E8 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel05;                          		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel05 : 1;              		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack05;                          		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass06;                           		// 0x0104 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath06;                            		// 0x0108 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel06;                          		// 0x0110 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel06 : 1;              		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack06;                          		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass07;                           		// 0x0124 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath07;                            		// 0x0128 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel07;                          		// 0x0130 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel07 : 1;              		// 0x0134 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack07;                          		// 0x0138 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass08;                           		// 0x0144 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath08;                            		// 0x0148 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel08;                          		// 0x0150 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel08 : 1;              		// 0x0154 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack08;                          		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass09;                           		// 0x0164 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath09;                            		// 0x0168 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel09;                          		// 0x0170 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel09 : 1;              		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack09;                          		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass10;                           		// 0x0184 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath10;                            		// 0x0188 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel10;                          		// 0x0190 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel10 : 1;              		// 0x0194 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack10;                          		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass11;                           		// 0x01A4 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath11;                            		// 0x01A8 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel11;                          		// 0x01B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel11 : 1;              		// 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack11;                          		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass12;                           		// 0x01C4 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath12;                            		// 0x01C8 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel12;                          		// 0x01D0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel12 : 1;              		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack12;                          		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass13;                           		// 0x01E4 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath13;                            		// 0x01E8 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel13;                          		// 0x01F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel13 : 1;              		// 0x01F4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack13;                          		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass14;                           		// 0x0204 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath14;                            		// 0x0208 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel14;                          		// 0x0210 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel14 : 1;              		// 0x0214 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack14;                          		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass15;                           		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath15;                            		// 0x0228 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel15;                          		// 0x0230 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel15 : 1;              		// 0x0234 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack15;                          		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass16;                           		// 0x0244 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath16;                            		// 0x0248 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel16;                          		// 0x0250 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel16 : 1;              		// 0x0254 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack16;                          		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass17;                           		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath17;                            		// 0x0268 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel17;                          		// 0x0270 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel17 : 1;              		// 0x0274 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack17;                          		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass18;                           		// 0x0284 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath18;                            		// 0x0288 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel18;                          		// 0x0290 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel18 : 1;              		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack18;                          		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      m_materialAssetClass19;                           		// 0x02A4 (0x0004) [0x0000000000000000]              
	struct FName                                       m_materialAssetPath19;                            		// 0x02A8 (0x0008) [0x0000000000000000]              
	int                                                m_materialUnlockLevel19;                          		// 0x02B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_materialPrestigeUnlockLevel19 : 1;              		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_materialContentPack19;                          		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YMPMeshLookupTable.YMP_HandleAssetPair
// 0x02CC
struct FYMP_HandleAssetPair
{
	struct FName                                       AssetHandle;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FYMP_AssetSet                               Asset;                                            		// 0x0008 (0x02C4) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIFrontEnd.Kit_Data
// 0x0019
struct FKit_Data
{
	struct FString                                     m_SName;                                          		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     FriendlyName;                                     		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      kitType;                                          		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.UTDataStore_GameSearchDM.PersistentLocalizedSettingValue
// 0x0008
struct FPersistentLocalizedSettingValue
{
	int                                                SettingId;                                        		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ValueId;                                          		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SRGame.UTDataStore_GameSearchDM.GameSearchSettingsStorage
// 0x0014
struct FGameSearchSettingsStorage
{
	struct FName                                       GameSearchName;                                   		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FPersistentLocalizedSettingValue >  StoredValues;                                     		// 0x0008 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.UTUIDataStore_StringList.EStringListData
// 0x0034
struct FEStringListData
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     ColumnHeaderText;                                 		// 0x0008 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CurrentValue;                                     		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultValueIndex;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           Strings;                                          		// 0x0024 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UUTUIDataProvider_StringArray*               DataProvider;                                     		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YDataProvider_Objectives.YS_ObjectiveItem
// 0x001C
struct FYS_ObjectiveItem
{
	struct FString                                     m_objective;                                      		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_detailInfo;                                     		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                m_orderID;                                        		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SRGame.YCoverInfo.YS_CoverFlags
// 0x0004
struct FYS_CoverFlags
{
	unsigned long                                      m_canMoveLeft : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_canMoveRight : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_canLeanLeft : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_canLeanRight : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_canSlipLeft : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_canSlipRight : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      m_canSwatLeft : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      m_canSwatRight : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      m_canMantle : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      m_canLeanOver : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      m_canClimb : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      m_canDropDown : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      m_canPopup : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      m_canLeanAroundLeft : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      m_canLeanAroundRight : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      m_canVaultAndDropDown : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
};

// ScriptStruct SRGame.YAICombatPosSet.YOctreeDataHndl
// 0x0004
struct FYOctreeDataHndl
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SRGame.YStaticCover.YS_CoverPosInfo
// 0x0028
struct FYS_CoverPosInfo
{
	struct FYOctreeDataHndl                            m_leftCoverSlot;                                  		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FYOctreeDataHndl                            m_rightCoverSlot;                                 		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_leftToRightPct;                                 		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     m_location;                                       		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    m_rotation;                                       		// 0x0018 (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              m_height;                                         		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YStaticCover.YS_CoverData
// 0x0084
struct FYS_CoverData
{
	struct FYS_CoverPosInfo                            m_coverPosInfo;                                   		// 0x0000 (0x0028) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_valid : 1;                                      		// 0x0028 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FVector                                     m_location;                                       		// 0x002C (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    m_rotation;                                       		// 0x0038 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     m_normal;                                         		// 0x0044 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     m_tangent;                                        		// 0x0050 (0x000C) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_type;                                           		// 0x005C (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FYS_CoverFlags                              m_flags;                                          		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_leftCoverSlotAction;                            		// 0x0064 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_rightCoverSlotAction;                           		// 0x0065 (0x0001) [0x0000000000000002]              ( CPF_Const )
	float                                              m_height;                                         		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_thickness;                                      		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FYOctreeDataHndl                            m_leftCoverEnd;                                   		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FYOctreeDataHndl                            m_rightCoverEnd;                                  		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FYOctreeDataHndl                            m_adjacentCoverSlotLeft;                          		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FYOctreeDataHndl                            m_adjacentCoverSlotRight;                         		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_closeToLeftEdge : 1;                            		// 0x0080 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      m_closeToRightEdge : 1;                           		// 0x0080 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      m_singleSlotCover : 1;                            		// 0x0080 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
};

// ScriptStruct SRGame.YStaticCover.YS_CoverSlotInfo
// 0x001C
struct FYS_CoverSlotInfo
{
	struct FVector                                     m_location;                                       		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    m_rotation;                                       		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_valid : 1;                                      		// 0x0018 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct SRGame.YControlRestrictions.YS_ControlRestrictions
// 0x0004
struct FYS_ControlRestrictions
{
	unsigned long                                      m_look : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_pawnRotation : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_walk : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_run : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_sprint : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_melee : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      m_specialMoves : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      m_crouch : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      m_cover : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      m_weaponSwitch : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      m_weaponSwitchFireMode : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      m_fire : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      m_fireGrenade : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      m_aim : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      m_reload : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      m_squadControl : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      m_showSquadCommandIcons : 1;                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      m_squadCommandGoto : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      m_squadCommandRegroup : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      m_squadCommandScanning : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      m_squadCommandMortar : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00100000] ( CPF_Edit )
	unsigned long                                      m_squadCommandAttack : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00200000] ( CPF_Edit )
	unsigned long                                      m_squadCommandHold : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00400000] ( CPF_Edit )
	unsigned long                                      m_squadCommandHeal : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00800000] ( CPF_Edit )
	unsigned long                                      m_squadCommandOpenFire : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x01000000] ( CPF_Edit )
	unsigned long                                      m_squadCommandStunEnemies : 1;                    		// 0x0000 (0x0004) [0x0000000000000001] [0x02000000] ( CPF_Edit )
	unsigned long                                      m_squadCommandSuppressiveFire : 1;                		// 0x0000 (0x0004) [0x0000000000000001] [0x04000000] ( CPF_Edit )
	unsigned long                                      m_pickups : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x08000000] ( CPF_Edit )
	unsigned long                                      m_execution : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x10000000] ( CPF_Edit )
	unsigned long                                      m_contextCommands : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x20000000] ( CPF_Edit )
	unsigned long                                      m_aiReceivesCommands : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x40000000] ( CPF_Edit )
};

// ScriptStruct SRGame.YContextCommands.YS_ContextCommandInfo
// 0x00D8
struct FYS_ContextCommandInfo
{
	struct FString                                     m_text;                                           		// 0x0000 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_longText;                                       		// 0x000C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FS_MaterialInstanceConstantInfo             m_cmdIcon;                                        		// 0x0018 (0x0094) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      m_contextCommand;                                 		// 0x00AC (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< class AActor* >                            m_relatedActors;                                  		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_relatedLocation;                                		// 0x00BC (0x000C) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UYTacticalMarkerConnector*                   m_tacticalMarkerConnector;                        		// 0x00C8 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_specialAction;                                  		// 0x00CC (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              m_delayTime;                                      		// 0x00D0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      m_silent : 1;                                     		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_executeCommand : 1;                             		// 0x00D4 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SRGame.YContextCommands.VisibilityFlags
// 0x0004
struct FVisibilityFlags
{
	unsigned long                                      hasSquad : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      alive : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      dbnoVisible : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      portraitVisible : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      commandVisible : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      accessButtonVisible : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      commandIndicatorVisible : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      commandsRebuilt : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
};

// ScriptStruct SRGame.YSpecialActionSetTypes.YS_SpecialActionData
// 0x000C
struct FYS_SpecialActionData
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAISquad.YS_AttractionPointInfo
// 0x0026
struct FYS_AttractionPointInfo
{
	unsigned long                                      m_isSet : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_location;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              m_radius;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_height;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_minTimeAtSubstep;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_advanceType;                                    		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_enemyReaction;                                  		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned long                                      m_reached : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_overrideCloak;                                  		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_overrideMovement;                               		// 0x0025 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAIAbstractBehaviorManager.YAIAbstractBehaviorManager_BehaviorInfo
// 0x0008
struct FYAIAbstractBehaviorManager_BehaviorInfo
{
	unsigned long                                      isStarted : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      isSuccesfull : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      isFinished : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FUObjectHandle                              entityHandle;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAIPlayerSquad.YAIHandle
// 0x0004
struct AYAIPlayerSquad_FYAIHandle
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SRGame.YAI_ABM_Heal.YAIHandle
// 0x0004
struct UYAI_ABM_Heal_FYAIHandle
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SRGame.YAIPlayerSquad.YS_ScanReportPriority
// 0x000C
struct FYS_ScanReportPriority
{
	unsigned char                                      m_scanType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_priority;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_neverFirst : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_neverSecond : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_ratherFirst : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_ratherSecond : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SRGame.YAIPlayerSquad.YS_SitRepOverrideData
// 0x0014
struct FYS_SitRepOverrideData
{
	int                                                m_UID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class AYGamePawn*                                  m_speaker;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_allowFilters : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_volume;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_soundCue;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameSettingsMultiplayer.YS_RuleSettings
// 0x0040
struct FYS_RuleSettings
{
	int                                                TimeLimit;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ScoreLimit;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                FriendlyFire;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Revenge;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumRounds;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CustomCharacters;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MapTravel;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PlayerHealthModifier;                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                KillCam;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HighlightAllies;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                HudOn;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TeamKillPenalty;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                HeadshotsOnly;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                NoPerks;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                SandAlwaysOn;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                VoiceChatEnabled;                                 		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameSettingsMultiplayer.YExodusScoreInfo
// 0x000C
struct FYExodusScoreInfo
{
	unsigned char                                      m_mapId;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_team1Score;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_team2Score;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIScene_MidGameMenu.YS_ObjectiveVisualPart
// 0x000C
struct FYS_ObjectiveVisualPart
{
	class UUIImage*                                    bg;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    Label;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    checkMark;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIScene_MidGameMenu.YS_ObjectiveVisual
// 0x0018
struct FYS_ObjectiveVisual
{
	struct FYS_ObjectiveVisualPart                     m_progress;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FYS_ObjectiveVisualPart                     m_done;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_PawnSpatialData
// 0x0018
struct FYS_PawnSpatialData
{
	struct FVector                                     m_loc;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rot;                                            		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_SquadSpatialData
// 0x0078
struct FYS_SquadSpatialData
{
	struct FYS_PawnSpatialData                         m_walkerData;                                     		// 0x0000 (0x0018) [0x0000000000000000]              
	struct FYS_PawnSpatialData                         m_adamsData;                                      		// 0x0018 (0x0018) [0x0000000000000000]              
	struct FYS_PawnSpatialData                         m_lugoData;                                       		// 0x0030 (0x0018) [0x0000000000000000]              
	struct FYS_PawnSpatialData                         m_adamsAlternateData;                             		// 0x0048 (0x0018) [0x0000000000000000]              
	struct FYS_PawnSpatialData                         m_lugoAlternateData;                              		// 0x0060 (0x0018) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameEngine.YS_CheckpointData
// 0x0090
struct FYS_CheckpointData
{
	struct FYS_SquadSpatialData                        m_squadSpatialData;                               		// 0x0000 (0x0078) [0x0000000000000000]              
	unsigned char                                      m_pendingCheckpointAction;                        		// 0x0078 (0x0001) [0x0000000000000000]              
	class UYCheckpoint*                                m_currentCheckpoint;                              		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_shouldWriteCheckpointToDisk : 1;                		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_shouldLoadCheckpointFromDisk : 1;               		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_fadeToWhitePossible : 1;                        		// 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_fadeToWhiteRunning : 1;                         		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FName                                       m_pendingCheckpointLoadName;                      		// 0x0084 (0x0008) [0x0000000000000000]              
	struct FUObjectHandle                              m_kismetActionHndl;                               		// 0x008C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameInfo.YS_TeamInfoDesc
// 0x001C
struct FYS_TeamInfoDesc
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      m_color;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            m_standing;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGameInfo.GameMapCycle
// 0x0014
struct FGameMapCycle
{
	struct FName                                       GameClassName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           Maps;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YSeqAct_AIFactory.YS_CharacterBoneAttachmentInfo
// 0x0024
struct FYS_CharacterBoneAttachmentInfo
{
	struct FName                                       m_boneName;                                       		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_maybeShotOff : 1;                               		// 0x0008 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	TArray< struct FName >                             m_meshNames;                                      		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UStaticMesh* >                       m_meshReferences;                                 		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YSeqAct_AIFactory.AISpawn
// 0x0020
struct FAISpawn
{
	class AYGamePawn*                                  Pawn;                                             		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      SpawnPoint;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    Rotation;                                         		// 0x0008 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Location;                                         		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YSeqAct_AIFactory.AISpawnInfo
// 0x00E4
struct FAISpawnInfo
{
	unsigned char                                      AIType;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnTotal;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAlive;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnedCount;                                     		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AYGamePawn* >                        WatchList;                                        		// 0x0010 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              MaxSpawnDelay;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinSpawnDelay;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            WeaponLoadOut;                                    		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bClearDefaultWeapons : 1;                         		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      PreviousAIType;                                   		// 0x0034 (0x0001) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FString >                           VarLinkDescs;                                     		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           OutLinkDescs;                                     		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAISpawn >                          CurrentSpawns;                                    		// 0x0050 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UClass*                                      PawnClass;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	class UClass*                                      ControllerClass;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            LoadoutClasses;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UYAIDefinition*                              m_aiDefinition;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	class UYAIDefinition*                              m_aiDefinitionOverride;                           		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSpecialActionSetList*                      m_specialActionSetList;                           		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_shyfflrClass;                                   		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               m_customSkeletalMesh;                             		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_customCoverMeshXOffset;                         		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_suppressAttachments : 1;                        		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class USkeletalMesh* >                     m_skeletalMeshes;                                 		// 0x008C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_coverMeshXOffsets;                              		// 0x0098 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class UAnimSet* >                          m_additionalAnimSets;                             		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UYAimingSet* >                       m_additionalAimingSets;                           		// 0x00B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UYBT_BehaviorTreeAsset*                      m_behaviorTreeOverride;                           		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    InitialSpawnDelays;                               		// 0x00C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    m_activeSpawnDelays;                              		// 0x00CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UClass*                                      m_characterCustomizerClass;                       		// 0x00D8 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_characterCustomizerClassOverride;               		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_spawnCrouched : 1;                              		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_spawnDoNothing : 1;                             		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_civilianIsAggressive : 1;                       		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_suppressDeathDBNO : 1;                          		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_suppressWeponDropping : 1;                      		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqAct_AIFactory.AITypeInfo
// 0x0044
struct FAITypeInfo
{
	class UClass*                                      ControllerClass;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      PawnClass;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SpecialActionSetListAssetName;                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TeamIdx;                                          		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_botDefinitionAssetName;                         		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             m_skeletalMeshNames;                              		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_characterAttachmentsTypes;                      		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_shyfflrClassName;                               		// 0x0034 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_characterCustomizerClassName;                   		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqAct_AIFactory.YS_RandomSpecialActionSetListInfo
// 0x0018
struct FYS_RandomSpecialActionSetListInfo
{
	struct FString                                     m_randomIdentifier;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             m_specialActionSetListNames;                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YDBNORule.YS_DBNORuleSet
// 0x0040
struct FYS_DBNORuleSet
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_enterConditions;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            m_exitConditions;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_healthThreshold;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_dbnoDuration;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_bleedoutDuration;                               		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_healthRestoreType_Revive;                       		// 0x0030 (0x0001) [0x0000000000000000]              
	float                                              m_healthRestoreAmount_Revive;                     		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_healthRestoreType_DBNO;                         		// 0x0038 (0x0001) [0x0000000000000000]              
	float                                              m_healthRestoreAmount_DBNO;                       		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YDBNORule.YS_PawnDBNOInfo
// 0x0028
struct FYS_PawnDBNOInfo
{
	class AYGamePawn*                                  m_pawn;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_dbnoTimeStamp;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_ruleSetIdx;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_enterCondition;                                 		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_exitCondition;                                  		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_result;                                         		// 0x000E (0x0001) [0x0000000000000000]              
	class UClass*                                      m_damageType;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_momentum;                                       		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_lastDamageWasHeadshot : 1;                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_lastDamageMakesHeadExplode : 1;                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_lastTakenDamage;                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YDBNORule.YS_PendingPawnDBNOInfo
// 0x0010
struct FYS_PendingPawnDBNOInfo
{
	class AYGamePawn*                                  m_pawn;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_enterCondition;                                 		// 0x0004 (0x0001) [0x0000000000000000]              
	class AController*                                 m_instigator;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_damageType;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YRecoverValue.YS_RecoverValueModifier
// 0x002C
struct FYS_RecoverValueModifier
{
	struct FName                                       m_name;                                           		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_priority;                                       		// 0x0008 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_infinite : 1;                                   		// 0x000C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	float                                              m_valueToGo;                                      		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_valuePerSecond;                                 		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_delay;                                          		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_delayToGo;                                      		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             m_modifierAppliedCallback;                        		// 0x0020 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YRecoverValue.YS_RecoverValueCallback
// 0x0014
struct FYS_RecoverValueCallback
{
	struct FScriptDelegate                             m_callback;                                       		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      m_type;                                           		// 0x000C (0x0001) [0x0000000000000002]              ( CPF_Const )
	float                                              m_threshold;                                      		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YRecoverValue.YS_RecoverValue
// 0x0028
struct FYS_RecoverValue
{
	float                                              m_currentValue;                                   		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_maxValue;                                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FYS_RecoverValueModifier >          m_modifiers;                                      		// 0x0008 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FYS_RecoverValueCallback >          m_callbacks;                                      		// 0x0014 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FName                                       m_suppressedRecoverModifier;                      		// 0x0020 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YCameraModifier_CamBone.YS_CameraTransitionParams
// 0x000C
struct FYS_CameraTransitionParams
{
	float                                              m_blendTime;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_blendFunction;                                  		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_blendExp;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAnimInfo.YS_PostureTransition
// 0x0030
struct FYS_PostureTransition
{
	unsigned char                                      m_fromPosture;                                    		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_toPosture;                                      		// 0x0001 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_fromGroup;                                      		// 0x0002 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_toGroup;                                        		// 0x0003 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_withAnim;                                       		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_aimDelayPct;                                    		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifAiming;                                       		// 0x000C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifShooting;                                     		// 0x000D (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifWantsToShoot;                                 		// 0x000E (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifCanAimOut;                                    		// 0x000F (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifWantsToAimOut;                                		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifIdle;                                         		// 0x0011 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifAI;                                           		// 0x0012 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_allowMovement : 1;                              		// 0x0014 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_interruptible : 1;                              		// 0x0014 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useZeroRootOffset : 1;                          		// 0x0014 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_blockAiming : 1;                                		// 0x0014 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_blockShooting : 1;                              		// 0x0014 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	float                                              m_customBlendTime;                                		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_bidirectional : 1;                              		// 0x001C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	float                                              m_rateFactor;                                     		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_rateFactorMP;                                   		// 0x0024 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_forceKeepMoveAnim : 1;                          		// 0x0028 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	int                                                m_index;                                          		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAnimInfo.YS_AnimID
// 0x0004
struct FYS_AnimID
{
	unsigned char                                      m_groupID;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_animID;                                         		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_padding1;                                       		// 0x0002 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      m_padding2;                                       		// 0x0003 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YAnimInfo.YS_ChannelInfoData
// 0x001C
struct FYS_ChannelInfoData
{
	unsigned char                                      m_channelID;                                      		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_animName;                                       		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_aimingPose;                                     		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_addAnimName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_useRootMotionX : 1;                             		// 0x0018 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useRootMotionY : 1;                             		// 0x0018 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useRootMotionZ : 1;                             		// 0x0018 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useRootMotionPitch : 1;                         		// 0x0018 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useRootMotionYaw : 1;                           		// 0x0018 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useRootMotionRoll : 1;                          		// 0x0018 (0x0004) [0x0000000000000003] [0x00000020] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_slave : 1;                                      		// 0x0018 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_forceLooped : 1;                                		// 0x0018 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YAnimInfo.YS_FaceFXAnim
// 0x001C
struct FYS_FaceFXAnim
{
	struct FString                                     m_seqName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_groupName;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UFaceFXAnimSet*                              m_animSet;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAnimInfo.YS_CameraAnimInfo
// 0x0024
struct FYS_CameraAnimInfo
{
	unsigned char                                      m_cameraAnimOption;                               		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CameraTransitionParams                  m_blendInTransitionParams;                        		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CameraTransitionParams                  m_blendOutTransitionParams;                       		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_FOV;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_useCollisionDetection : 1;                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_syncToMovement : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SRGame.YAnimInfo.YS_ChannelInfo
// 0x0050
struct FYS_ChannelInfo
{
	TArray< struct FYS_ChannelInfoData >               m_channelInfoData;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      m_priority;                                       		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_FaceFXAnim                              m_faceFXAnim;                                     		// 0x0010 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FYS_CameraAnimInfo                          m_cameraAnimInfo;                                 		// 0x002C (0x0024) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAnimInfo.YS_AnimInfo
// 0x0070
struct FYS_AnimInfo
{
	struct FYS_ChannelInfo                             m_channelInfo;                                    		// 0x0000 (0x0050) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      m_rootMotionMode;                                 		// 0x0050 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_keepAlive : 1;                                  		// 0x0054 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_disableZSmoothing : 1;                          		// 0x0054 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_disableFootControls : 1;                        		// 0x0054 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_disableHandIKControls : 1;                      		// 0x0054 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_disableLookAtControls : 1;                      		// 0x0054 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_ignoreMoveInput : 1;                            		// 0x0054 (0x0004) [0x0000000000000003] [0x00000020] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_lockCoverState : 1;                             		// 0x0054 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_blockAiming : 1;                                		// 0x0054 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      m_blockShooting : 1;                              		// 0x0054 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	float                                              m_customBlendInTime;                              		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_limitBlendInTime : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_customBlendOutTime;                             		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_mirrorMode;                                     		// 0x0064 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_rate;                                           		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_earlyAnimEndNotify : 1;                         		// 0x006C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YAnimInfo.YS_AnimGroup
// 0x000C
struct FYS_AnimGroup
{
	TArray< struct FYS_AnimInfo >                      m_animInfos;                                      		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YAnimInfo.YS_IdleAnim
// 0x0010
struct FYS_IdleAnim
{
	struct FName                                       m_standardAnim;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_grenadeAnim;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAnimInfo.YS_TurnAnim
// 0x0010
struct FYS_TurnAnim
{
	struct FName                                       m_animNameRotateLeft;                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_animNameRotateRight;                            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAnimInfo.YS_RotationAnim
// 0x003C
struct FYS_RotationAnim
{
	int                                                m_rotationAngle;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_TurnAnim                                m_standardAnim;                                   		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_TurnAnim                                m_standardAnimRootMotion;                         		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_TurnAnim                                m_grenadeAnim;                                    		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_rate;                                           		// 0x0034 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_hasRootMotion : 1;                              		// 0x0038 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_hasRootMotionAI : 1;                            		// 0x0038 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YAnimInfo.YS_AnimSetIdle
// 0x006C
struct FYS_AnimSetIdle
{
	TArray< struct FYS_IdleAnim >                      m_idleAnims;                                      		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FYS_RotationAnim >                  m_turnAnims;                                      		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FName                                       m_additiveAnim;                                   		// 0x0018 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_grenadeAddAnim;                                 		// 0x0020 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_additiveAnimRotation;                           		// 0x0028 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_aimingPose;                                     		// 0x0030 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FYS_FaceFXAnim                              m_faceFXAnim;                                     		// 0x0034 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FYS_FaceFXAnim                              m_combatFaceFXAnim;                               		// 0x0050 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YAnimInfo.YS_MovementAnims
// 0x0030
struct FYS_MovementAnims
{
	struct FName                                       m_animNameFwd;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_animNameBwd;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_animNameLeft;                                   		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_animNameRight;                                  		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_animNameBwdLeft;                                		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_animNameBwdRight;                               		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAnimInfo.YS_MovementAnimation
// 0x0031
struct FYS_MovementAnimation
{
	struct FYS_MovementAnims                           m_movementAnims;                                  		// 0x0000 (0x0030) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_aimingPose;                                     		// 0x0030 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YAnimInfo.YS_AnimSetMovement
// 0x0034
struct FYS_AnimSetMovement
{
	TArray< struct FYS_MovementAnimation >             m_movementAnimations;                             		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FName                                       m_additiveAnim;                                   		// 0x000C (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FYS_FaceFXAnim                              m_faceFXAnim;                                     		// 0x0014 (0x001C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_reversedLeft : 1;                               		// 0x0030 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_reversedRight : 1;                              		// 0x0030 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YAnimInfo.YS_AnimSetSprint
// 0x0019
struct FYS_AnimSetSprint
{
	struct FName                                       m_animNameFwd;                                    		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_combatAnimNameFwd;                              		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_additiveAnim;                                   		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_aimingPose;                                     		// 0x0018 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YAnimInfo.YS_PostureInfo
// 0x001C
struct FYS_PostureInfo
{
	unsigned char                                      m_idle[ 0x4 ];                                    		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_walk[ 0x4 ];                                    		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_run[ 0x4 ];                                     		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_sprint[ 0x4 ];                                  		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_alignedToCover : 1;                             		// 0x0010 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	int                                                m_orientation;                                    		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_disableZSmoothing : 1;                          		// 0x0018 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      m_disableFootControls : 1;                        		// 0x0018 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      m_postureIsAlwaysAiming : 1;                      		// 0x0018 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      m_mirrored : 1;                                   		// 0x0018 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
};

// ScriptStruct SRGame.YAnimInfo.YS_AimingPoseInfo
// 0x001C
struct FYS_AimingPoseInfo
{
	struct FName                                       m_profileName;                                    		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useHorizontalAimForAnimPos : 1;                 		// 0x0008 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_useVerticalAimForAnimPos : 1;                   		// 0x0008 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	float                                              m_postureAimingRange;                             		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_secondProfileName;                              		// 0x0010 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_secondProfileBlendEnd;                          		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YPawnState.YS_PawnState
// 0x0008
struct FYS_PawnState
{
	unsigned char                                      m_mainState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_substate;                                       		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_mainStatePostureTransitionDisabled : 1;         		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_substatePostureTransitionDisabled : 1;          		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SRGame.YSpeakLineSystem.YS_SpeakLineData
// 0x0028
struct FYS_SpeakLineData
{
	class AActor*                                      m_addressee;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_audio;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_noLookAt : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_noTurnTo : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_allowFilter : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_useDucking : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              m_playbackVolume;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_broadcastFilter;                                		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_subtitlePriority;                               		// 0x0011 (0x0001) [0x0000000000000000]              
	float                                              m_delayTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     m_debugText;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_emptyLine : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YAIDefinition.YS_AIWeaponDesc
// 0x0018
struct FYS_AIWeaponDesc
{
	int                                                m_weaponID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_weaponClass;                                    		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_refireType;                                     		// 0x0005 (0x0001) [0x0000000000000000]              
	int                                                m_ammo;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_ammoMax;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_refireRate;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_meleeRange;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAIAnimationDefinition.YS_AIMovementSlowDown
// 0x0010
struct FYS_AIMovementSlowDown
{
	float                                              m_minTurningAngle;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_newMovementModeEnabled : 1;                     		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      m_newMovementMode;                                		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_speedModifier;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAIAnimationDefinition.YS_AIMovement
// 0x0030
struct FYS_AIMovement
{
	TArray< unsigned char >                            m_handledModes;                                   		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              m_acceleration;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxTurningAngleMinDistance;                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxTurningAngle;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   m_bankingScale;                                   		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_bankingSmoothing;                               		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FYS_AIMovementSlowDown >            m_slowDowns;                                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YAIDefinition.YS_VisionRangeInfo
// 0x0004
struct FYS_VisionRangeInfo
{
	float                                              m_maxDistance;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAIDefinition.YS_VisionAngles
// 0x0008
struct FYS_VisionAngles
{
	float                                              m_mainVisionH;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_mainVisionV;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAIDefinition.YS_VisionProperties
// 0x0018
struct FYS_VisionProperties
{
	struct FYS_VisionRangeInfo                         m_closeVisionRange;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_VisionRangeInfo                         m_midVisionRange;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_VisionRangeInfo                         m_maxVisionRange;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_VisionAngles                            m_visionAngles;                                   		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_canSee : 1;                                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YAIDefinition.YS_SensorProperties
// 0x0024
struct FYS_SensorProperties
{
	unsigned char                                      m_type;                                           		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FYS_VisionProperties                        m_vision;                                         		// 0x0004 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_hearingMultiplicator;                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_hearingMultiplicatorHeight;                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAIDefinition.YBT_GateInfo
// 0x0018
struct FYBT_GateInfo
{
	unsigned char                                      m_gateScope;                                      		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FName                                       m_name;                                           		// 0x0004 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                m_minValue;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_maxValue;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_closedWhenInsideMinMax : 1;                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YAIDefinition.YS_ShootPattern
// 0x0008
struct FYS_ShootPattern
{
	int                                                m_numShots;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_pauseTime;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAIDefinition.YS_ShootingAngle
// 0x0008
struct FYS_ShootingAngle
{
	float                                              m_minAngle;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxAngle;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YSpecialActionSet.YS_SpecialActionUseChance
// 0x0010
struct FYS_SpecialActionUseChance
{
	float                                              m_useChance;                                      		// 0x0000 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	int                                                m_usedInShuffle;                                  		// 0x0004 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned char                                      m_usable;                                         		// 0x0008 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class UYSpecialActionsDefinition*                  m_specialActionDef;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAimingSet.YS_AimOffsetProfile
// 0x0010(0x0080 - 0x0070)
struct FYS_AimOffsetProfile : FAimOffsetProfile
{
	struct FVector2D                                   m_angleOffset;                                    		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_animNameCustomRef;                              		// 0x0078 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_SpecialMoveData
// 0x0044
struct FYS_SpecialMoveData
{
	unsigned char                                      m_movementDirection;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_startRotationYaw;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_endRotationYaw;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_startLocation;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      m_crouched : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_createdOnClient : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_variation;                                      		// 0x001C (0x0001) [0x0000000000000000]              
	struct FVector                                     m_coverLocation;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_coverStance;                                    		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_coverDirection;                                 		// 0x002D (0x0001) [0x0000000000000000]              
	class AActor*                                      m_actorRef;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	class UObject*                                     m_callbackObject;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	TArray< class UObject* >                           m_dataObjects;                                    		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGamePawn.YS_SpecialMoveDataReplicated
// 0x0058
struct FYS_SpecialMoveDataReplicated
{
	struct FYS_SpecialMoveData                         m_data;                                           		// 0x0000 (0x0044) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_specialMove;                                    		// 0x0044 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             m_stopCallback;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_timeStamp;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_GroundBloodDecalData
// 0x0008
struct FYS_GroundBloodDecalData
{
	class UMaterialInstanceTimeVarying*                m_onSolidGround;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                m_onAbsorbantGround;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_CoverReplicationData
// 0x0010
struct FYS_CoverReplicationData
{
	unsigned long                                      m_acquiredCover : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_location;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_FireFlags
// 0x0004
struct FYS_FireFlags
{
	unsigned long                                      m_fireLeft : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_fireRight : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_fireOver : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SRGame.YGamePawn.YS_SpecialBoneInfo
// 0x0044
struct FYS_SpecialBoneInfo
{
	unsigned char                                      m_boneType;                                       		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_socketName;                                     		// 0x0004 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USkeletalMeshSocket*                         m_socket;                                         		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_isUpToDate : 1;                                 		// 0x0010 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )
	struct FVector                                     m_location;                                       		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_xAxis;                                          		// 0x0020 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_yAxis;                                          		// 0x002C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_zAxis;                                          		// 0x0038 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YGamePawn.YS_AIViewOffsetInfo
// 0x00C0
struct FYS_AIViewOffsetInfo
{
	struct FVector                                     m_standViewOffset;                                		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standLeanLeftOffset;                            		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standLeanRightOffset;                           		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standLeanOverOffset;                            		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_crouchViewOffset;                               		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_crouchLeanLeftOffset;                           		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_crouchLeanRightOffset;                          		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_crouchLeanUpOffset;                             		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standStepLeftOffset;                            		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standStepRightOffset;                           		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standEdgeLeftOffset;                            		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standEdgeRightOffset;                           		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_standCoverOffset;                               		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_crouchEdgeLeftOffset;                           		// 0x009C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_crouchEdgeRightOffset;                          		// 0x00A8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_crouchCoverOffset;                              		// 0x00B4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_SpecialActionDebugInfoLine
// 0x0010
struct FYS_SpecialActionDebugInfoLine
{
	float                                              m_timeStamp;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_textLine;                                       		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGamePawn.YS_SpecialActionDebugInfo
// 0x00A8
struct FYS_SpecialActionDebugInfo
{
	int                                                m_numLines;                                       		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FYS_SpecialActionDebugInfoLine              m_line[ 0xA ];                                    		// 0x0004 (0x00A0) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                m_first;                                          		// 0x00A4 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SRGame.YGamePawn.YS_SpecialActionSetTypeRep
// 0x0008
struct FYS_SpecialActionSetTypeRep
{
	unsigned char                                      m_setType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_timeStamp;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_ReplicatedIdleAnimation
// 0x0018
struct FYS_ReplicatedIdleAnimation
{
	struct FName                                       m_name;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_rate;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_looped : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_initialRotationYaw;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                m_TargetAngle;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_ReplicatedHeadLookAtPosition
// 0x0010
struct FYS_ReplicatedHeadLookAtPosition
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_enabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YGamePawn.YS_ReplicatedHeadLookAtActor
// 0x0018
struct FYS_ReplicatedHeadLookAtActor
{
	class AActor*                                      m_actor;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       m_boneName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     m_offset;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_ProjectileFlyBy
// 0x0020
struct FYS_ProjectileFlyBy
{
	struct FVector                                     m_origin;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_hitLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	class AYGamePawn*                                  m_instigator;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_refireInterval;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_ShotgunFlyBy
// 0x0020
struct FYS_ShotgunFlyBy
{
	struct FVector                                     m_origin;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_hitLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_coneAngle;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	class AYGamePawn*                                  m_instigator;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_ExplosionFlyBy
// 0x0018
struct FYS_ExplosionFlyBy
{
	struct FVector                                     m_hitLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              m_radius;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_strength;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_sfxDuration;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_DangerousFlyBy
// 0x0029
struct FYS_DangerousFlyBy
{
	float                                              m_sqrDist;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_startPos;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_endPos;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_closestPos;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned char                                      m_flyByType;                                      		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_FlyByAudioInformation
// 0x0008
struct FYS_FlyByAudioInformation
{
	float                                              m_playStartTime;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_nextPlayTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_PawnEffectTriggerAttachmentInformation
// 0x0014
struct FYS_PawnEffectTriggerAttachmentInformation
{
	struct FName                                       m_attachmentBoneName;                             		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_scale;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class APawnCollisionEffectsTrigger*                m_collEffectTrigger;                              		// 0x000C (0x0004) [0x0000000000000000]              
	class UYRB_Handle*                                 m_triggerHandle;                                  		// 0x0010 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SRGame.YGamePawn.YS_PawnRagdollImpactFXDefinition
// 0x000C
struct FYS_PawnRagdollImpactFXDefinition
{
	class UYSoundCueFMOD*                              m_impactSoundCue;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_impactParticleSystem;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_impactThreshold;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_ShotGunProjectileHitInfo
// 0x0024
struct FYS_ShotGunProjectileHitInfo
{
	int                                                m_damage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_direction;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_hitLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FName                                       m_hitBone;                                        		// 0x001C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_PhysicsImpactRBRemap
// 0x0010
struct FYS_PhysicsImpactRBRemap
{
	struct FName                                       m_fromName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_toName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_DelayedSpecialActionData
// 0x0030
struct FYS_DelayedSpecialActionData
{
	float                                              m_countdown;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             m_finishedCallBack;                               		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_waitingForCallback : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_specialActionSetType;                           		// 0x0014 (0x0001) [0x0000000000000000]              
	class UYSpecialActionSet*                          m_specialActionSet;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	class UYSpecialActionSet*                          m_addSpecialActionSet;                            		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      m_priority;                                       		// 0x0020 (0x0001) [0x0000000000000000]              
	struct FYS_SpecialActionData                       m_data;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_FaceFXRegisterInfo
// 0x0024
struct FYS_FaceFXRegisterInfo
{
	struct FString                                     m_regName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_regOp;                                          		// 0x000C (0x0001) [0x0000000000000000]              
	float                                              m_firstValue;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_firstInterpDuration;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_nextValue;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_nextInterpDuration;                             		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_useNextValue : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YGamePawn.YS_FaceFXRegisterUsage
// 0x0018
struct FYS_FaceFXRegisterUsage
{
	struct FString                                     m_regName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_free : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_freeTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_originalValue;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_DirectionalAnimRatios
// 0x0010
struct FYS_DirectionalAnimRatios
{
	float                                              m_bwdRatio;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_leftRatio;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_rightRatio;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_coverBwdRatio;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_IdleSpecialActionInfo
// 0x000C
struct FYS_IdleSpecialActionInfo
{
	class UYSpecialActionSet*                          m_specialActionSet;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_minInterval;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_maxInterval;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_AnimSet
// 0x0011
struct FYS_AnimSet
{
	class UAnimSet*                                    m_animSet;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_animSetName;                                    		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_animRestrictionType;                            		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_AimingSet
// 0x0011
struct FYS_AimingSet
{
	class UYAimingSet*                                 m_aimingSet;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_aimingSetName;                                  		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_animRestrictionType;                            		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_AnimModifierInfo
// 0x0024
struct FYS_AnimModifierInfo
{
	TArray< struct FYS_AnimSet >                       m_animSets;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FYS_AimingSet >                     m_aimingSets;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FYS_IdleSpecialActionInfo                   m_idleSpecialActionInfo;                          		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_LastDamageInfo
// 0x0048
struct FYS_LastDamageInfo
{
	struct FString                                     m_weaponName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_hitByEnemy : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_killAchievCat[ 0x2 ];                           		// 0x0010 (0x0002) [0x0000000000000000]              
	unsigned long                                      m_wasBlindfiring : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_wasDBNO : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_enemyWasDBNO : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      m_refireType;                                     		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_isGrenade : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_throwType;                                      		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_scopeAttached : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	class UClass*                                      m_damageType;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FTraceHitInfo                               m_hitInfo;                                        		// 0x002C (0x001C) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct SRGame.YGamePawn.YS_PawnEffortChangeTimeDefinition
// 0x0018
struct FYS_PawnEffortChangeTimeDefinition
{
	float                                              m_idleToRun;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_runToIdle;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_runToSprint;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_sprintToRun;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_sprintToIdle;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_idleToSprint;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_WeaponMeleeInfo
// 0x0018
struct FYS_WeaponMeleeInfo
{
	class UParticleSystem*                             m_genericHitFX;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_genericHitSound;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             m_pawnHitFx;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_pawnHitSound;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_meleeRange;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_meleeRangeAI;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_MeleeHitFXReplicationData
// 0x0010
struct FYS_MeleeHitFXReplicationData
{
	struct FVector                                     m_hitLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              m_timeStamp;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_PawnMeleeHitFXReplicationData
// 0x0014
struct FYS_PawnMeleeHitFXReplicationData
{
	struct FVector                                     m_hitLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              m_timeStamp;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_hitSound;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_AimAtInfo
// 0x0010
struct FYS_AimAtInfo
{
	struct FVector                                     m_location;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      m_actor;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_ContextualSlomoTriggerData
// 0x001C
struct FYS_ContextualSlomoTriggerData
{
	unsigned char                                      m_eventType;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_duration;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_slowDownFactor;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_voicePitchFactor;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_chance;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_timeOffset;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_priority;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_SpecialMoveDetectionParams
// 0x0018
struct FYS_SpecialMoveDetectionParams
{
	struct FVector2D                                   m_xRange;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   m_yRange;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   m_zRange;                                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_GamePawnAsyncCheckResult
// 0x0014
struct FYS_GamePawnAsyncCheckResult
{
	struct FVector                                     m_location;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                m_hit;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_time;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_GenericSoundInfo
// 0x0010
struct FYS_GenericSoundInfo
{
	class UYSoundCueFMOD*                              m_criticalHealthHeartbeatSound;                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_nearbyExplosionBeepSound;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_nearbyExplosionLowpassInSound;                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_nearbyExplosionLowpassOutSound;                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGamePawn.YS_AttachmentReplicationData
// 0x0010
struct FYS_AttachmentReplicationData
{
	class UStaticMesh*                                 attachmentMesh;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned long                                      mayBeShotOff : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YGamePawn.YS_AnimSetInfo
// 0x0012
struct FYS_AnimSetInfo
{
	class UAnimSet*                                    m_animSet;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UObject* >                           m_requestors;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_refCount;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_priority;                                       		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_AnimProperties
// 0x0010
struct FYS_AnimProperties
{
	float                                              m_playbackLength;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_rootMotion;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_ReplicatedAnimationInfo
// 0x000C
struct FYS_ReplicatedAnimationInfo
{
	float                                              m_startTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_enable : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_playRateFactor;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YTargetRotationInterpolator.YS_TargetRotationInterpolator
// 0x0028
struct FYS_TargetRotationInterpolator
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_delayToGo;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FRotator                                    m_rotation;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      m_useShortest : 1;                                		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             m_endCallback;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YTargetLocationInterpolator.YS_TargetLocationInterpolator
// 0x0028
struct FYS_TargetLocationInterpolator
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_delayToGo;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_location;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      m_xAxis : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_yAxis : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_zAxis : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FScriptDelegate                             m_endCallback;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YWeapon.YS_WeaponAnimModifierInfo
// 0x000C
struct FYS_WeaponAnimModifierInfo
{
	TArray< struct FYS_AnimSet >                       m_animSets;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YCustomAnimation.YS_CustomAnimationParameters
// 0x000C
struct FYS_CustomAnimationParameters
{
	unsigned long                                      m_forcePhysMode : 1;                              		// 0x0000 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      m_physMode;                                       		// 0x0004 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      m_ignoreMoveInput : 1;                            		// 0x0008 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      m_forceFloorCheck : 1;                            		// 0x0008 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      m_disablePhysicalAnimation : 1;                   		// 0x0008 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
};

// ScriptStruct SRGame.YShootableTags.YS_ShootableTags
// 0x0004
struct FYS_ShootableTags
{
	unsigned long                                      m_missileLockable : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_autoAimTarget : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SRGame.YOffsetLocationInterpolator.YS_OffsetLocationInterpolator
// 0x0024
struct FYS_OffsetLocationInterpolator
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_delayToGo;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_offset;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             m_endCallback;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPlayerController.YS_MeleeEffectsDescription
// 0x001C
struct FYS_MeleeEffectsDescription
{
	float                                              m_bloodSplatterDelayTime;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_cameraSplatterClass;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 m_hitCamShake;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      m_noHitWaveform;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      m_genericHitWaveform;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      m_pawnHitWaveform;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      m_executionHitWaveform;                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_WeaponClass
// 0x0004
struct FYS_WeaponClass
{
	class UClass*                                      m_class;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_HitTargetSocketInfo
// 0x0048
struct FYS_HitTargetSocketInfo
{
	struct FName                                       m_hitSocketName;                                  		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FName >                             m_additionalHitBones;                             		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              m_damageModifier;                                 		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_explosiveDamageModifier;                        		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_bulletAttractionRadius;                         		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_bulletAttractionWeight;                         		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_priority;                                       		// 0x0024 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_spawnGrenadeBloodHere : 1;                      		// 0x0028 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	float                                              m_grenadeBloodOffset;                             		// 0x002C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USkeletalMeshSocket*                         m_socket;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_hitBoneIndices;                                 		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       m_boneName;                                       		// 0x0040 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGamePawn.YS_BoneIndexArray
// 0x000C
struct FYS_BoneIndexArray
{
	TArray< int >                                      m_hitableBoneIndices;                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGamePawn.YS_MaterialDamageInfo
// 0x0028
struct FYS_MaterialDamageInfo
{
	struct FName                                       m_bodySetupBone;                                  		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FName                                       m_materialParamName;                              		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                m_subMeshIndex;                                   		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                m_bodySetupBoneIdx;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_relatedSocketInfoIdx;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_currentDmgPct;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           m_matInstance;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	class UPhysicalMaterial*                           m_physMat;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YProjectile.YS_ProjGroundDecalDesc
// 0x0010
struct FYS_ProjGroundDecalDesc
{
	class UMaterialInterface*                          m_groundDecal;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_groundDecalSize;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_groundDecalLifeTime;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxSpawningDistance;                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YProjectile.DecalJobInfo
// 0x0018
struct FDecalJobInfo
{
	struct FVector                                     TraceStart;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     TraceDirection;                                   		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAnimation.YS_AimingNodeData
// 0x0018
struct FYS_AimingNodeData
{
	class UYAnimNodeChannel*                           m_animChannelNode;                                		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAnimNodeSequence*                           m_animNodeSequence;                               		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UYAnimNodeAimOffset*                         m_aimOffsetNode;                                  		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UYAnimNodeAimOffset*                         m_secondAimOffsetNode;                            		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UYAnimNodeBlend*                             m_aimOffsetsBlendNode;                            		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAnimNodeSequence*                           m_animNodeSequenceAdditive;                       		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YAnimation.YS_MovementAimingNodeData
// 0x0010
struct FYS_MovementAimingNodeData
{
	class UYAnimNodeChannel*                           m_animChannelNode;                                		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UYAnimNodeBlendDirectional*                  m_animNodeBlendDirectional;                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UYAnimNodeAimOffset*                         m_aimOffsetNode;                                  		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAnimNodeSequence*                           m_animNodeSequenceAdditive;                       		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YGameDump.YS_GameDumpProperty
// 0x0018
struct FYS_GameDumpProperty
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000520001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     m_value;                                          		// 0x000C (0x000C) [0x0000000000520001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGameDump.YS_GameDumpNode
// 0x003C
struct FYS_GameDumpNode
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000520001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     m_text;                                           		// 0x000C (0x000C) [0x0000000000520001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FYS_GameDumpProperty >              m_properties;                                     		// 0x0018 (0x000C) [0x0000000000520001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FYS_GameDumpNode >                  m_children;                                       		// 0x0024 (0x000C) [0x0000000000520001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FString >                           m_objectsToDump;                                  		// 0x0030 (0x000C) [0x0000000000520001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YOffsetFloatInterpolator.YS_OffsetFloatInterpolator
// 0x0024
struct FYS_OffsetFloatInterpolator
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_delayToGo;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_offset;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_lastValue;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_smoothInterpolation : 1;                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             m_endCallback;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPostProcessManager.YS_MatFxFadeInfo
// 0x002C
struct FYS_MatFxFadeInfo
{
	struct FName                                       postEffectName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   m_matInst;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UMaterialEffect*                             m_postEffect;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      m_fadeColor;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_previousFadeAlpha;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_desiredFadeAlpha;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fadeAlpha;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fadeAlphaTime;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fadeAlphaDelay;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_desiredFadeAlphaTime;                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YFocusPoint.YS_FocusPoint
// 0x0078
struct FYS_FocusPoint
{
	class AActor*                                      m_targetActor;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AYGamePawn*                                  m_gamePawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      m_skelMesh;                                       		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       m_lookAtBone;                                     		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_lookAtPos;                                      		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_offset;                                         		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_offsetSpace;                                    		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_lookAtInterpSpeeds;                             		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_kickInTime;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_kickOutTime;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_pitchTolerance;                                 		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_yawTolerance;                                   		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_lastModeChangeTimeStamp;                        		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_drawDebug : 1;                                  		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_checkVisibility : 1;                            		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              m_LOSLostStopTime;                                		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_useFocusPoint : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_isInFocus : 1;                                  		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FRotator                                    m_lastRotationWithLOS;                            		// 0x005C (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rotDiff;                                        		// 0x0068 (0x000C) [0x0000000000000000]              
	float                                              m_lastLOSTime;                                    		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_CamModeReplicationInfo
// 0x000C
struct FYS_CamModeReplicationInfo
{
	int                                                m_camModeIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_alphaDestModeIndex;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_mirrored : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_useMirrorTransition : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SRGame.YPlayerController.YS_CamFixedViewTargetLocationReplicationInfo
// 0x0014
struct FYS_CamFixedViewTargetLocationReplicationInfo
{
	unsigned long                                      m_useFixedTargetLocation : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_location;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              m_timeToReach;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_CamFixedViewTargetRotationReplicationInfo
// 0x0014
struct FYS_CamFixedViewTargetRotationReplicationInfo
{
	unsigned long                                      m_useFixedTargetRotation : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    m_rotation;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              m_timeToReach;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_CamOverriddenFOVReplicationInfo
// 0x0010
struct FYS_CamOverriddenFOVReplicationInfo
{
	unsigned long                                      m_useOverriddenFOV : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_FOV;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_timeToReach;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_byWeaponFOVOverride : 1;                        		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YPlayerController.YS_CamBaseOffsetReplicationInfo
// 0x0010
struct FYS_CamBaseOffsetReplicationInfo
{
	struct FVector                                     m_baseOffset;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              m_timeToReach;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_CamFocusPointReplicationInfo
// 0x004C
struct FYS_CamFocusPointReplicationInfo
{
	class AActor*                                      m_targetActor;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       m_lookAtBone;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FVector                                     m_lookAtPos;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_lookAtOffset;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_offsetSpace;                                    		// 0x0024 (0x0001) [0x0000000000000000]              
	struct FVector                                     m_interpSpeeds;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              m_pitchTolerance;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_yawTolerance;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_kickInTime;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_kickOutTime;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_checkVisibility : 1;                            		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_LOSStopTime;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_SpectatedPawnCamState
// 0x0004
struct FYS_SpectatedPawnCamState
{
	unsigned long                                      m_changedCamMode : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_changedUseFixedViewTargetPosition : 1;          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_changedUseFixedViewTargetRotation : 1;          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_changedUseOverriddenFOV : 1;                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_changedBaseOffset : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_changedFocusPoint : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct SRGame.YPlayerController.PostProcessInfo
// 0x0010
struct FPostProcessInfo
{
	float                                              Shadows;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MidTones;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              HighLights;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Desaturation;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_SmoothRotationInterpolator
// 0x001C
struct FYS_SmoothRotationInterpolator
{
	float                                              m_turnCurTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_turnStartAngle;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_turnEndAngle;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_turnTotalTime;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_turnDelay;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_smoothingExp;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_lastContribution;                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_PointOfInterest
// 0x0008
struct FYS_PointOfInterest
{
	class AActor*                                      m_POIActor;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_POIFov;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.YS_MoodSetting
// 0x000C
struct FYS_MoodSetting
{
	class UYMoodSetup2*                                m_mood;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fadeInTime;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fadeOutTime;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPlayerController.YS_DLCSimpleFriendlyPair
// 0x0018
struct FYS_DLCSimpleFriendlyPair
{
	struct FString                                     m_simple;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_friendly;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPlayerController.YS_DeathLoopData
// 0x0008
struct FYS_DeathLoopData
{
	class UCameraAnimInst*                             m_camAnimInst;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_playingDeathLoop : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YPlayerController.YWeaponRecord
// 0x0024
struct FYWeaponRecord
{
	struct FString                                     m_weaponClassPath;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_ammoInMagazine;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_ammoInReserve;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_lowAmmoWarningActivated : 1;                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_ammoInMagazineScnd;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_ammoInReserveScnd;                              		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_lowAmmoWarningActivatedScnd : 1;                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_secondaryActive : 1;                            		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_isEquipped : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SRGame.YPlayerController.YGrenadeRecord
// 0x0008
struct FYGrenadeRecord
{
	unsigned char                                      m_grenadeType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_grenadeCount;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController.CheckpointRecord
// 0x007C
struct AYPlayerController_FCheckpointRecord
{
	struct FGuid                                       SavedGuid;                                        		// 0x0000 (0x0010) [0x0000000000000000]              
	float                                              PawnHealthPct;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      DBNOEnabled : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PawnClassName;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PawnPathName;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BasePathName;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      TeamIndex;                                        		// 0x003C (0x0001) [0x0000000000000000]              
	struct FString                                     SquadFormationName;                               		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SlotMarkerPathName;                               		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     meshName;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FYWeaponRecord >                    m_WeaponRecords;                                  		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FYGrenadeRecord >                   m_GrenadeRecords;                                 		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YCamera.YS_TransitionState
// 0x0020
struct FYS_TransitionState
{
	class UYPlayerCamTransition*                       m_camTransition;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_transitionTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_suppressRotInterpolation : 1;                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_transitionInProgress : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     m_raycastHitPos;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned long                                      m_rayHasHit : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_lastHitDist;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YDamageType.YS_DamageCamShakeParams
// 0x0014
struct FYS_DamageCamShakeParams
{
	class UCameraAnim*                                 m_camShake;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_scale;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_rate;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   m_timeInterval;                                   		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawn_Multiplayer.YS_AttackerInfo
// 0x0010
struct FYS_AttackerInfo
{
	class AController*                                 m_attacker;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_damageType;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_damage;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_timeofAttack;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YHUD.YS_Line
// 0x0029
struct FYS_Line
{
	struct FVector                                     m_start;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_end;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	struct FLinearColor                                m_color;                                          		// 0x0018 (0x0010) [0x0000000000000000]              
	unsigned char                                      m_dpg;                                            		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCustomAnimation.YS_CustomAnimationTemplate
// 0x007C
struct FYS_CustomAnimationTemplate
{
	struct FYS_AnimInfo                                m_animInfo;                                       		// 0x0000 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FYS_CustomAnimationParameters               m_parameters;                                     		// 0x0070 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameplaySpot.YS_ClickInfo
// 0x0030
struct FYS_ClickInfo
{
	struct FVector                                     m_origin;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_direction;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       m_key;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_event;                                          		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_controlDown : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_shiftDown : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_altDown : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector2D                                   m_clickPos;                                       		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameplaySpot.YS_EditorViewPortSceneText
// 0x001C
struct FYS_EditorViewPortSceneText
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FString                                     m_text;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      m_color;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameplaySpot.YS_EditorViewPortHudText
// 0x0018
struct FYS_EditorViewPortHudText
{
	float                                              m_screenPosX;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_screenPosY;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_text;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      m_color;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameplaySpot.YS_EditorViewPortScenePoint
// 0x001C
struct FYS_EditorViewPortScenePoint
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_extent;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameplayMultiSpot.YS_MeshInfo
// 0x0030
struct FYS_MeshInfo
{
	struct FVector                                     m_location;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rotation;                                       		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_scale;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	class UStaticMesh*                                 m_mesh;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_selectable : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInterface*                          m_materialOverride;                               		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameplayMultiSpot.YS_DebugLine
// 0x001C
struct FYS_DebugLine
{
	struct FVector                                     m_start;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_end;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameplayMultiSpot.YS_DebugDashedLine
// 0x0020
struct FYS_DebugDashedLine
{
	struct FVector                                     m_start;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_end;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_dashSize;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAICombatPosSet.YS_CoverSphereView
// 0x0018
struct FYS_CoverSphereView
{
	TArray< unsigned char >                            m_map;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_location;                                       		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAICombatPosSet.YOctreeDataHndlMutable
// 0x0004
struct FYOctreeDataHndlMutable
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SRGame.YAICombatPosSet.YS_CombatPos
// 0x0034
struct FYS_CombatPos
{
	class UYAICombatPosSet_CombatPosEditorData*        m_editorData;                                     		// 0x0000 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	struct FVector                                     m_position;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FYS_CoverSphereView                         m_sphereView;                                     		// 0x0010 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_hasValidMoveTargetPos : 1;                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FYOctreeDataHndlMutable                     m_octreeHandle;                                   		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AYAICombatPosSet*                            m_parent;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAICombatPosSet.YS_CoverSlot
// 0x0078
struct FYS_CoverSlot
{
	class UYAICombatPosSet_CoverSlotEditorData*        m_editorData;                                     		// 0x0000 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	struct FVector                                     m_position;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rotation;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   m_moveTargetPos;                                  		// 0x001C (0x0008) [0x0000000000000000]              
	class AYAICombatPosSet*                            m_parent;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FYS_CoverSphereView                         m_sphereViewUp;                                   		// 0x0028 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FYS_CoverSphereView                         m_sphereViewSide;                                 		// 0x0040 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      m_coverType;                                      		// 0x0058 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CoverFlags                              m_coverFlags;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_coverThickness;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_coverHeight;                                    		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   m_stackMoveTargetPos;                             		// 0x0068 (0x0008) [0x0000000000000000]              
	struct FYOctreeDataHndlMutable                     m_octreeHandle;                                   		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      m_hasValidMoveTargetPos : 1;                      		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_autoAdjust : 1;                                 		// 0x0074 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_usedByAI : 1;                                   		// 0x0074 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_hasStackingPosition : 1;                        		// 0x0074 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_stackHasValidMoveTargetPos : 1;                 		// 0x0074 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_aiMayClimb : 1;                                 		// 0x0074 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      m_aiMayDropDown : 1;                              		// 0x0074 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      m_aiMayMantle : 1;                                		// 0x0074 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
};

// ScriptStruct SRGame.YAICombatPosSet.YS_CoverSphereData
// 0x0014
struct FYS_CoverSphereData
{
	int                                                m_width;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_height;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_FOV;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_uuQuant;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nearCP;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAICombatPosSet.YS_CoverMapDebugData
// 0x0024
struct FYS_CoverMapDebugData
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_direction;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_destLength;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_smCollision;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_failed : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_hasNoMaps : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_dynamicFireLinkVolume : 1;                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_isAttack : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SRGame.YGameplayMultiSpotEditorData.YS_SubspotEditState
// 0x0004
struct FYS_SubspotEditState
{
	unsigned long                                      m_selected : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_alwaysVisible : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SRGame.YAICombatPosSetEditorData.YS_CpsSlotCoverMapsError
// 0x0010
struct FYS_CpsSlotCoverMapsError
{
	int                                                m_fromSubspot;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class AYAICombatPosSet*                            m_toCps;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_toSubspot;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_coverMapsFalsePositive : 1;                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YAIController.YS_HitInfo
// 0x000C
struct FYS_HitInfo
{
	class UClass*                                      m_damageType;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_hitTimeStamp;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_damage;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAIController.YS_AllowedActionChanges
// 0x0004
struct FYS_AllowedActionChanges
{
	unsigned long                                      m_mayChangeAiming : 1;                            		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      m_mayChangeLookAt : 1;                            		// 0x0000 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      m_mayChangeCover : 1;                             		// 0x0000 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      m_mayChangePeeking : 1;                           		// 0x0000 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
};

// ScriptStruct SRGame.YAIController.YS_AllowedParallelActions
// 0x0004
struct FYS_AllowedParallelActions
{
	unsigned long                                      m_allowBotMove : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      m_allowCtrlRotate : 1;                            		// 0x0000 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      m_allowAim : 1;                                   		// 0x0000 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      m_allowLookAt : 1;                                		// 0x0000 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      m_allowFiring : 1;                                		// 0x0000 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
};

// ScriptStruct SRGame.YAIController.YS_WallHitInfo
// 0x0020
struct FYS_WallHitInfo
{
	float                                              m_timeSinceHit;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_hitTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_hitNormal;                                      		// 0x0008 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_accelVector;                                    		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YAIController.CheckpointRecord
// 0x0098
struct AYAIController_FCheckpointRecord
{
	class UYAIDefinition*                              m_aiDef;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UYBT_BehaviorTreeAsset*                      m_btAsset;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     m_aiDef_Name;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_btAsset_Name;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       SavedGuid;                                        		// 0x0020 (0x0010) [0x0000000000000000]              
	float                                              PawnHealthPct;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     PawnClassName;                                    		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PawnPathName;                                     		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Location;                                         		// 0x004C (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0058 (0x000C) [0x0000000000000000]              
	struct FString                                     BasePathName;                                     		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      TeamIndex;                                        		// 0x0070 (0x0001) [0x0000000000000000]              
	struct FName                                       SquadName;                                        		// 0x0074 (0x0008) [0x0000000000000000]              
	int                                                TeamID;                                           		// 0x007C (0x0004) [0x0000000000000000]              
	struct FString                                     meshName;                                         		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_specialActionSetListName;                       		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YAIController.YS_UserDataPositionInfo
// 0x001C
struct FYS_UserDataPositionInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FYOctreeDataHndl                            CoverHandle;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAIFallbackDirectionTrigger.YS_AffectedFactionsSettings
// 0x0008
struct FYS_AffectedFactionsSettings
{
	unsigned char                                      m_teamID;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_affect : 1;                                     		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YAIGenericPlayerSquadTrigger.YS_SquadMovementSettings
// 0x000D
struct FYS_SquadMovementSettings
{
	float                                              m_minTimeOnPosition;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_delayBeforeMoving;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_ignoreSquadTrigger : 1;                         		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_allowFeedbackOnBegin : 1;                       		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_allowFeedbackOnFinish : 1;                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_enterCoverAndDoNothing : 1;                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      m_overrideMovement;                               		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAISpawnPoint.YS_SpawnPoint
// 0x0019
struct FYS_SpawnPoint
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_rotation;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_hasError;                                       		// 0x0018 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YAITuning_Base.YS_AiTuning_AccuracyMultiplier
// 0x000C
struct FYS_AiTuning_AccuracyMultiplier
{
	float                                              m_longDistance;                                   		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_mediumDistance;                                 		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_shortDistance;                                  		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SRGame.YMarkerAnimation.YMarkerAnimSeqRef
// 0x0038
struct FYMarkerAnimSeqRef
{
	class UYMarkerAnimationSeq*                        SeqRef;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PlaybackRate;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              AnimTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPlaying : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLooping : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                LoopCount;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector                                     InitialRenderOffset;                              		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FRotator                                    InitialRotation;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	TArray< float >                                    m_lastTrackPositions;                             		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YMarkerAnimation.YMarkerAnimnNotify
// 0x000C
struct FYMarkerAnimnNotify
{
	unsigned char                                      NotifyType;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       NotifyName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YMarkerAnimation.YMarkerAnimRawData
// 0x002C
struct FYMarkerAnimRawData
{
	float                                              DestAsFloat;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                DestAsColor;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FVector                                     DestAsVector;                                     		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FYMarkerAnimnNotify                         DestAsNotify;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YMarkerAnimation.YMarkerAnimKeyFrame
// 0x0030
struct FYMarkerAnimKeyFrame
{
	float                                              TimeMark;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FYMarkerAnimRawData                         Data;                                             		// 0x0004 (0x002C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YMarkerAnimation.YMarkerAnimTrack
// 0x001C
struct FYMarkerAnimTrack
{
	unsigned char                                      TrackType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       TrackWidgetTag;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	TArray< struct FYMarkerAnimKeyFrame >              KeyFrames;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UYMarkerBase*                                TargetWidget;                                     		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YAnimatedCrosshair.YS_CrosshairAnimationSequence
// 0x0008
struct FYS_CrosshairAnimationSequence
{
	class UYMarkerBase*                                m_marker;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UYMarkerAnimationSeq*                        m_markerAnimationSeq;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YDeathAnimInfo.YS_DeathAnimProperty
// 0x0038
struct FYS_DeathAnimProperty
{
	unsigned char                                      m_animID;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_torsoFixationState;                             		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_leftLegFixationState;                           		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_rightLegFixationState;                          		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_leftArmFixationState;                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_rightArmFixationState;                          		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_headFixationState;                              		// 0x0006 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_leftHandFixationState;                          		// 0x0007 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_rightHandFixationState;                         		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_springStrengthScale;                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_useJointDrives : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_jointDriveStrengthScale;                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_jointLimitScaling;                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_jointLimitScaleBlendTime;                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_useLowFrictionMaterial : 1;                     		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_fixHipBoneLin : 1;                              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_fixHipBoneAng : 1;                              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_turnToShotDir : 1;                              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_alignToShootDir : 1;                            		// 0x0020 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	float                                              m_physWeightBlendStartTime;                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_physWeightBlendTime;                            		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_muscleStrengthFadeStartTime;                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_muscleStrengthFadeTime;                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fullRagdollTimeOverride;                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAnimInfoSpecialIdle.YS_SpecialIdleAnimProperty
// 0x0012
struct FYS_SpecialIdleAnimProperty
{
	unsigned char                                      m_animID;                                         		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_weight;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      m_looped : 1;                                     		// 0x0008 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifCombat;                                       		// 0x000C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifCrouched;                                     		// 0x000D (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifCoverCenter;                                  		// 0x000E (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifCoverEdge;                                    		// 0x000F (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifMirrored;                                     		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_ifFlyBy;                                        		// 0x0011 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YAnimNodeChannel.AimingNodeData
// 0x0010
struct FAimingNodeData
{
	TArray< struct FYS_AimingNodeData >                m_aimingNodeData;                                 		// 0x0000 (0x000C) [0x0000000000502002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      m_isInitialized : 1;                              		// 0x000C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct SRGame.YAnimNodeBlendBySpeed.YS_AnimNodeSequenceInfo
// 0x0014
struct FYS_AnimNodeSequenceInfo
{
	class UAnimNodeSequence*                           m_animNodeSequence;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_speed;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_length;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       m_sequenceName;                                   		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAnimNodeBlendBySpeed.YS_ChannelSequenceNodes
// 0x000C
struct FYS_ChannelSequenceNodes
{
	TArray< struct FYS_AnimNodeSequenceInfo >          m_sequenceNodeInfos;                              		// 0x0000 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YAnimNodeChn_FB.YS_MovementAimingNodeDataList
// 0x000C
struct FYS_MovementAimingNodeDataList
{
	TArray< struct FYS_MovementAimingNodeData >        m_aimingNodeData;                                 		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YAnimNodeChn_FB.YS_BlendListNode
// 0x0010
struct FYS_BlendListNode
{
	class UAnimNodeBlendList*                          m_animNodeBlendList;                              		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FYS_MovementAimingNodeDataList >    m_movementAimingNodeDataList;                     		// 0x0004 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YMarkerBase.YS_AnimSoundDef
// 0x000C
struct FYS_AnimSoundDef
{
	struct FName                                       m_name;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	class UYSoundCueFMOD*                              m_sound;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YAnimtreeManager.YS_AnimChannelData
// 0x001C
struct FYS_AnimChannelData
{
	unsigned char                                      m_type;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FYS_AnimID                                  m_animID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           m_animNodeSequence;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_resetBranch : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_resetBlendTime;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_aimingPose;                                     		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_aimingPlaying : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YAnimtreeManager.YS_AnimChannel
// 0x002C
struct FYS_AnimChannel
{
	unsigned char                                      m_priority;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FYS_AnimChannelData                         m_data;                                           		// 0x0004 (0x001C) [0x0000000000000000]              
	struct FScriptDelegate                             m_animEndCallback;                                		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YAnimtreeManager.YS_DynamicAnimInfo
// 0x0074
struct FYS_DynamicAnimInfo
{
	struct FYS_AnimInfo                                m_animInfo;                                       		// 0x0000 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_used : 1;                                       		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YAnimtreeManager.YS_PostureTransitionInfo
// 0x0024
struct FYS_PostureTransitionInfo
{
	float                                              m_startTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_endTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FRotator                                    m_startRotation;                                  		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_endRotation;                                    		// 0x0014 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_useEndRotation : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_rotatingBetweenPostures : 1;                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_allowMovement : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_interruptible : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_aimingBlocked : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_shootingBlocked : 1;                            		// 0x0020 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      m_active : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct SRGame.YAnnouncer.ObjectiveAnnouncementInfo
// 0x0010
struct FObjectiveAnnouncementInfo
{
	class UYSoundCueFMOD*                              AnnouncementSound;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AnnouncementText;                                 		// 0x0004 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YArsenalManager.YS_ExecutionGrenadeLootProbability
// 0x0008
struct FYS_ExecutionGrenadeLootProbability
{
	unsigned char                                      m_type;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              m_probability;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YArsenalManager.YS_RecoilCurveValueSet
// 0x0024
struct FYS_RecoilCurveValueSet
{
	struct FName                                       m_curveName;                                      		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	float                                              m_attackPeekTime;                                 		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_decayStartTime;                                 		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_curveLength;                                    		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_finalPercentage;                                		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_multiplyer;                                     		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              m_scalar1;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_scalar2;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YOffsetRotationCurve.YS_OffsetRotationCurve
// 0x0034
struct FYS_OffsetRotationCurve
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FRotator                                    m_offset;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             m_endCallback;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_curveScalar;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_curveScalar2;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_curveExtremum;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_curveInflection;                                		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_curveAddend;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YArsenalManager.YS_DelayedWeaponToAdd
// 0x0014
struct FYS_DelayedWeaponToAdd
{
	class UClass*                                      m_weaponClass;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bEquipRightAway : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class AYTurretActor*                               m_turretActor;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_startMag;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_startAmmo;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YArsenalManager.YS_WeaponIconInfo
// 0x0018
struct FYS_WeaponIconInfo
{
	struct FCanvasIcon                                 m_icon;                                           		// 0x0000 (0x0014) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YArsenalManager.YS_WeaponScndMode
// 0x0008
struct FYS_WeaponScndMode
{
	unsigned char                                      m_scndFirePurpose;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	class UClass*                                      m_scndFireWeaponClass;                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YArsenalManager.YS_ZoomSounds
// 0x0010
struct FYS_ZoomSounds
{
	class USoundCue*                                   m_zoomInSound;                                    		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   m_zoomOutSound;                                   		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   m_zoomInSoundScoped;                              		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   m_zoomOutSoundScoped;                             		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YArsenalManager.YS_PickupSpawnInfo
// 0x0044
struct FYS_PickupSpawnInfo
{
	class UClass*                                      m_weaponClassToDrop;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_meshLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_meshRot;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	class AYPickupActor*                               m_oldPickup;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	class UClass*                                      m_weaponClass;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_scndWeaponClass;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_weaponClassEnum;                                		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_secondModeActivated : 1;                        		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_currentAmmoCount;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_currentMagAmmo;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_scndCurrentAmmoCount;                           		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_scndCurrentMagAmmo;                             		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_ammoCountModifier;                              		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPickupActor.YS_PickupSound
// 0x0004
struct FYS_PickupSound
{
	class UYSoundCueFMOD*                              m_soundCue;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YAssetReference.YS_AssetReference
// 0x000C
struct FYS_AssetReference
{
	struct FName                                       m_name;                                           		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UObject*                                     m_object;                                         		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YBT_StaticNode.YBT_Timer
// 0x0008
struct FYBT_Timer
{
	float                                              m_min;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_max;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticActionNode.YBT_AllowedPeekModes
// 0x0004
struct FYBT_AllowedPeekModes
{
	unsigned long                                      m_mayPeekLeft : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_mayPeekOver : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_mayPeekRight : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticActionGotoPos.YBT_EdgeCosts
// 0x0004
struct FYBT_EdgeCosts
{
	unsigned char                                      DropDown;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Vault;                                            		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Grenade;                                          		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      thisHasToBeFourBytesAtLeast;                      		// 0x0003 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YBT_StaticActionModifyArsenalNode.YBT_ModifyArsenal
// 0x0008
struct FYBT_ModifyArsenal
{
	unsigned char                                      m_weapon;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_enabledSecondaryFire : 1;                       		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticObservePosition.YSOP_AllowedPeekModes
// 0x0004
struct FYSOP_AllowedPeekModes
{
	unsigned long                                      m_canPeekOver : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_canPeekLeft : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_canPeekRight : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_canPeekLeanOver : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticObservePosition.YBT_ObserveSettings
// 0x000C
struct FYBT_ObserveSettings
{
	float                                              m_speed;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_timeMin;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_timeMax;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticActionObserveAreaNode.YS_ObserveAreaAnimationFlags
// 0x0004
struct FYS_ObserveAreaAnimationFlags
{
	unsigned long                                      m_crouchCover : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_crouchCoverEdgeLeft : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_crouchCoverEdgeRight : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_standCover : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_standCoverCrouched : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_standCoverEdgeLeft : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      m_standCoverEdgeRight : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      m_standCoverEdgeCrouchedLeft : 1;                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      m_standCoverEdgeCrouchedRight : 1;                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      m_standCoverStackLeft : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      m_standCoverStackRight : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      m_standing : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      m_crouching : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticActionObserveAreaNode.YS_ObserveAreaAnimation
// 0x000C
struct FYS_ObserveAreaAnimation
{
	class UYCustomAnimationBase*                       m_customAnimation;                                		// 0x0000 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              m_weight;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_ObserveAreaAnimationFlags               m_flags;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticActionPlayIdleAnimationNode.YS_PlayIdleAnimation
// 0x0008
struct FYS_PlayIdleAnimation
{
	unsigned char                                      m_animation;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_weight;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticCompositeBehaviorFilterNode.YBT_OutputNode
// 0x000C
struct FYBT_OutputNode
{
	TArray< unsigned char >                            m_filters;                                        		// 0x0000 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct SRGame.YBT_StaticConditionIsPeekModeNode.YS_IsPeekModeMode
// 0x0004
struct FYS_IsPeekModeMode
{
	unsigned long                                      m_acceptPeeking : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_acceptAimingOut : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_acceptGenericBlindfire : 1;                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticConditionIsPeekModeNode.YS_IsPeekModeDirection
// 0x0004
struct FYS_IsPeekModeDirection
{
	unsigned long                                      m_acceptLeft : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_acceptOver : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_acceptRight : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticDecoratorDrawDebugTextNode.YS_DebugText
// 0x0010
struct FYS_DebugText
{
	struct FString                                     m_text;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      m_color;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticDecoratorDrawDebugTextNode.YS_DebugTextTimed
// 0x0014
struct FYS_DebugTextTimed
{
	struct FString                                     m_text;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColor                                      m_color;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_duration;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YBT_StaticDecoratorLogNode.StaticDecoratorLogNodeMessage
// 0x0010
struct FStaticDecoratorLogNodeMessage
{
	unsigned long                                      m_log : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     m_message;                                        		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YBT_StaticNodeEditorData.YPropertyHelpersPath
// 0x000C
struct FYPropertyHelpersPath
{
	TArray< struct FName >                             m_path;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YCamera.YS_CamPhysicsState
// 0x0060
struct FYS_CamPhysicsState
{
	struct FVector                                     m_targetPos;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_targetVel;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_lastCamRot;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              m_collDist;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_collDistVel;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_fuehlerigelUpdateTime;                          		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_lastFuehlerigelDistance;                        		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_yAngleDistAdjust;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_yAngleDistAdjustVel;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_nonSmoothedCollDist;                            		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_tiltValueStrafe;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_tiltVelStrafe;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              m_tiltValueZRot;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              m_tiltVelZRot;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              m_smoothingBlendStartTime;                        		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_viewTargetIsMoving : 1;                         		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_lastSmoothBlendFactor;                          		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_smoothBlendFactorVel;                           		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCamera.YS_CamTempState
// 0x00AC
struct FYS_CamTempState
{
	unsigned long                                      m_useOverriddenViewTargetPosition : 1;            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_fromViewTargetPosition;                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_toViewTargetPosition;                           		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_currentViewTargetPosition;                      		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              m_viewTargetReachTime;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_currentViewTargetReachTime;                     		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_useOverriddenViewTargetRotation : 1;            		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    m_fromViewTargetRotation;                         		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_toViewTargetRotation;                           		// 0x0040 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_currentViewTargetRotation;                      		// 0x004C (0x000C) [0x0000000000000000]              
	float                                              m_viewTargetRotationReachTime;                    		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_currentViewTargetRotationReachTime;             		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_useOverriddenFOV : 1;                           		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fromFov;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              m_toFOV;                                          		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              m_FOVReachTime;                                   		// 0x006C (0x0004) [0x0000000000000000]              
	float                                              m_currentFOVReachTime;                            		// 0x0070 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_FOVOverriddenByWeapon : 1;                      		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_fromBaseOffset;                                 		// 0x0078 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_toBaseOffset;                                   		// 0x0084 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_currentBaseOffset;                              		// 0x0090 (0x000C) [0x0000000000000000]              
	float                                              m_baseOffsetSmoothingTime;                        		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              m_currentBaseOffsetSmoothingTime;                 		// 0x00A0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_camIsMirrored : 1;                              		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_sideCamChangeRunning : 1;                       		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_updateControllerRotFromFocusPoint : 1;          		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              m_currentSmoothingModifier;                       		// 0x00A8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCamera.YS_TransitionFromState
// 0x0100
struct FYS_TransitionFromState
{
	struct FVector                                     m_fromTargetOffset;                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_fromRot;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_fromDist;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fromFov;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	struct FVector                                     m_fromNegTransDamping;                            		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_fromPosTransDamping;                            		// 0x002C (0x000C) [0x0000000000000000]              
	float                                              m_fromSmoothingStartTime;                         		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_fromRotDamping;                                 		// 0x003C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_fromRotationSpeed;                              		// 0x0048 (0x000C) [0x0000000000000000]              
	float                                              m_fromCollSmoothForw;                             		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              m_fromCollSmoothBack;                             		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_fromUseRotationLimits : 1;                      		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_fromPosRotationLimits;                          		// 0x0060 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_fromNegRotationLimits;                          		// 0x006C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_fromPosRotLimitsSoftRegion;                     		// 0x0078 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_fromNegRotLimitsSoftRegion;                     		// 0x0084 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_fromRotationLimitsDeactivationTime;             		// 0x0090 (0x000C) [0x0000000000000000]              
	float                                              m_fromYAngleDistanceAdaptionStartAngle;           		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              m_fromYAngleDistanceAdaptionMaxValue;             		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              m_fromYAngleDistanceAdaptionSmoothing;            		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              m_fromYAngleForwardMovementUp;                    		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              m_fromYAngleForwardMovementDown;                  		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              m_fromYAngleForwardMovementUpStartAngle;          		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              m_fromYAngleForwardMovementDownStartAngle;        		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_fromSafeOffset;                                 		// 0x00B8 (0x000C) [0x0000000000000000]              
	unsigned long                                      m_fromUseFuehlerIgel : 1;                         		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fromAngleHor;                                   		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              m_fromAngleVer;                                   		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                m_fromNumRaysHor;                                 		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                m_fromNumRaysVer;                                 		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              m_fromFuehlerIgelCollSmoothingFactor;             		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              m_fromDefaultRoll;                                		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              m_fromMaxTiltStrafe;                              		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              m_fromMaxTiltZRot;                                		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              m_fromTiltStrafeFactor;                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              m_fromTiltZRotFactor;                             		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              m_fromMaxTiltSum;                                 		// 0x00F0 (0x0004) [0x0000000000000000]              
	struct FRotator                                    m_inputDeltaRot;                                  		// 0x00F4 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCamera.YS_CameraModifierResult
// 0x0020
struct FYS_CameraModifierResult
{
	struct FVector                                     m_locationDifference;                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_rotationDifference;                             		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              m_FOVDifference;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isUpToDate : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YCamera.YS_CamBrakeAxisInfo
// 0x000C
struct FYS_CamBrakeAxisInfo
{
	float                                              m_pushTimePos;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_pushTimeNeg;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_negBroken : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_posBroken : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SRGame.YGameInfo_MP.ActiveBotInfo
// 0x0010
struct FActiveBotInfo
{
	struct FString                                     BotName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bInUse : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YGameInfo_MP.YS_XPModifier
// 0x0013
struct FYS_XPModifier
{
	int                                                m_eventID[ 0x2 ];                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_earnedXP[ 0x2 ];                                		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned char                                      m_bTeamPlay[ 0x2 ];                               		// 0x0010 (0x0002) [0x0000000000000000]              
	unsigned char                                      m_eventPriority;                                  		// 0x0012 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCharacterCustomizer.YS_CharacterVisDefinition
// 0x0014
struct FYS_CharacterVisDefinition
{
	class USkeletalMesh*                               m_characterMesh;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_coverMeshXOffset;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         m_materialVars;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YCharacterCustomizer.YS_CharacterVisRandomizerMeshState
// 0x0010
struct FYS_CharacterVisRandomizerMeshState
{
	int                                                m_meshIdx;                                        		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      m_usedMaterialIdx;                                		// 0x0004 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YCharacterCustomizer.YS_CharacterVisRandomizerState
// 0x0018
struct FYS_CharacterVisRandomizerState
{
	TArray< struct FYS_CharacterVisRandomizerMeshState > m_meshStates;                                     		// 0x0000 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< int >                                      m_usedMeshes;                                     		// 0x000C (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YCheapShooter.YS_CheapShooter_CoverTypeData
// 0x0030
struct FYS_CheapShooter_CoverTypeData
{
	unsigned long                                      isStandCover : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       aimPose;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       coverPose;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              blendTime_inAimPose;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              blendTime_inCoverPose;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              blendTime_aimToMovePose;                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              blendTime_coverToMovePose;                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                lookAtOffsetPitch;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                lookAtOffsetYaw;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                lookAtOffsetRoll;                                 		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCheapShooter.YS_CheapShooter_MoveTypeData
// 0x001C
struct FYS_CheapShooter_MoveTypeData
{
	struct FName                                       moveAnim;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              movingSpeedInWorldUnits;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              blendTime_fromStand;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              blendTime_fromCrouch;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              blendTime_toCrouch;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              blendTime_toStand;                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCheapShooter.YS_CheapShooterAccuracy
// 0x0004
struct FYS_CheapShooterAccuracy
{
	unsigned char                                      m_hit;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_left;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_dummy1;                                         		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_dummy2;                                         		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCheapShooter.YS_CheapShooterPerformance
// 0x0004
struct FYS_CheapShooterPerformance
{
	unsigned long                                      m_suppressMuzzleFlash : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_suppressTracers : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_suppressImpactFX : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_suppressMuzzleAudio : 1;                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_suppressDamage : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct SRGame.YCheapShooter.YS_CheapShooterShooting
// 0x000C
struct FYS_CheapShooterShooting
{
	float                                              m_kismetInaccuracy;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_maxTimeOutOfCover;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_waitAimingToStartShooting;                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCheapShooter.YS_CheapShooterDeathAnimSettings
// 0x001C
struct FYS_CheapShooterDeathAnimSettings
{
	struct FName                                       m_shootingDeathAnimName;                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_shootingDeathRagdollBlendTime;                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_coveringDeathAnimName;                          		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_coveringDeathRagdollBlendTime;                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_cleanAfterDeathAnimIsFinished : 1;              		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YCheckpoint.LevelRecord
// 0x0010
struct FLevelRecord
{
	struct FString                                     LevelName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SRGame.YCheckpoint.ActorRecord
// 0x0024
struct FActorRecord
{
	struct FString                                     actorName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ActorClassPath;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            RecordData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YCinematicVehicle.YS_CinematicWheelInfo
// 0x0030
struct FYS_CinematicWheelInfo
{
	float                                              m_wheelRadius;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_suspensionTravel;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_angVelSteerFactor;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxSteerAngle;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_wheelBoneName;                                  		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_skelControlName;                                		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkelControlWheel*                           m_skelControl;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_wheelPosition;                                  		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCollisionEffectDesc.YS_CollisionEffectImpactData
// 0x0038
struct FYS_CollisionEffectImpactData
{
	struct FVector                                     m_hitLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_hitNormal;                                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_hitRotation;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
	class AActor*                                      m_hitActor;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         m_hitComponent;                                   		// 0x0028 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       m_boneName;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	int                                                m_minClusterLevel;                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCollisionEffect_Decal.YS_DecalType
// 0x0008
struct FYS_DecalType
{
	class UMaterialInterface*                          m_material;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_probability;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YCollisionEffect_Particles.YS_ParticleType
// 0x0008
struct FYS_ParticleType
{
	class UParticleSystem*                             m_particleSystem;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_probability;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YCoverGizmo.YS_PossibleCover
// 0x0018
struct FYS_PossibleCover
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_normal;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YCoverGizmo.YS_TraceResults
// 0x006C
struct FYS_TraceResults
{
	struct FVector                                     m_low[ 0x3 ];                                     		// 0x0000 (0x0024) [0x0000000000000000]              
	struct FVector                                     m_mid[ 0x3 ];                                     		// 0x0024 (0x0024) [0x0000000000000000]              
	struct FVector                                     m_high[ 0x3 ];                                    		// 0x0048 (0x0024) [0x0000000000000000]              
};

// ScriptStruct SRGame.YDamageManager.YS_DamageItem
// 0x005C
struct FYS_DamageItem
{
	class UYDamageManager*                             m_damageManager;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      m_originator;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      m_sourceActor;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class AActor*                                      m_carrierActor;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	class AActor*                                      m_hitActor;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class AYWeapon*                                    m_weapon;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_selfDamage : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_triggerSandStun : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	class UClass*                                      m_damageType;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	class UYDamageEvaluationParams*                    m_damageEval;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_rolled : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_enemyAIRangeModifier;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_damageValue;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_creationTime;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_lastRange;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_originalLocation;                               		// 0x0038 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_focusLocation;                                  		// 0x0044 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_velocity;                                       		// 0x0050 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YDamageManager.YS_DamageContext
// 0x0040
struct FYS_DamageContext
{
	class UPrimitiveComponent*                         m_hitComp;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      m_bUseCurrentRange : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bShowDebugInfo : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_currentRange;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_partialDamage;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_partialStrength;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_potentialCount;                                 		// 0x0014 (0x0001) [0x0000000000000000]              
	struct FVector                                     m_currentLoc;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	class AActor*                                      m_hitActor;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	TArray< class URB_BodyInstance* >                  m_biArray;                                        		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             m_bnArray;                                        		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YDataStore_OnlineStats.LevelIconMapping
// 0x0010
struct FLevelIconMapping
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MappedText;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YDecalManager.YS_DelayedImpactSound
// 0x0018
struct FYS_DelayedImpactSound
{
	struct FUObjectHandle                              m_soundCueHandle;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_location;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              m_startTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_timeRunning;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YDecalManager.SClusterInfo
// 0x0028
struct FSClusterInfo
{
	int                                                m_decalCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_centerOfCluster;                                		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                m_currentLevel;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bWouldLevelUp : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                m_clusterIndex;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_decalPos;                                       		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPickupActor.CheckpointRecord
// 0x0004
struct AYPickupActor_FCheckpointRecord
{
	unsigned long                                      Used : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YDestructibleObject.YS_MaterialReplaceMod
// 0x0008
struct FYS_MaterialReplaceMod
{
	class UMaterialInterface*                          m_newMaterial;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_materialIndex;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YDestructibleObject.YS_ParticleEffectParams
// 0x0030
struct FYS_ParticleEffectParams
{
	class UParticleSystem*                             m_particleEffect;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_drawScale3D;                                    		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_scaleDependsOnMesh : 1;                         		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     m_relativeOffset;                                 		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_relativeRotation;                               		// 0x0020 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_lifeTimeSeconds;                                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YDestructibleObject.YS_RigidBodyParams
// 0x002C
struct FYS_RigidBodyParams
{
	class UStaticMesh*                                 m_rigidBodyMesh;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_relativeOffset;                                 		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_relativeRotation;                               		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_initialVelocity;                                		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_lifeTimeSeconds;                                		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YDestructibleObject.YS_ObjDamageModDependency
// 0x0014
struct FYS_ObjDamageModDependency
{
	struct FName                                       m_dependentSubObjName;                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_damageDelay;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxHealthToAllow;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_dependentSubObjIdx;                             		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YDestructibleObject.YS_ObjectDamageModifier
// 0x0054
struct FYS_ObjectDamageModifier
{
	struct FName                                       m_damageModName;                                  		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_healthThreshold;                                		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UStaticMesh*                                 m_newMesh;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FYS_MaterialReplaceMod >            m_materialReplacements;                           		// 0x0010 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class USoundCue* >                         m_sounds;                                         		// 0x001C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      m_selfDestruct : 1;                               		// 0x0028 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_disableActorCollision : 1;                      		// 0x0028 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_disableShadowCasting : 1;                       		// 0x0028 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_stopAmbientSound : 1;                           		// 0x0028 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	TArray< struct FYS_ParticleEffectParams >          m_particleEffects;                                		// 0x002C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FYS_RigidBodyParams >               m_rigidBodies;                                    		// 0x0038 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FYS_ObjDamageModDependency >        m_dependentSubObjs;                               		// 0x0044 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      m_applied : 1;                                    		// 0x0050 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct SRGame.YDestructibleObject.YS_DestructibleSubobject
// 0x007C
struct FYS_DestructibleSubobject
{
	struct FName                                       m_subObjName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        m_mesh;                                           		// 0x0008 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FYS_ObjectDamageModifier >          m_damageMods;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              m_defaultHealth;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_ObjectDamageModifier                    m_undoMod;                                        		// 0x001C (0x0054) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              m_reTriggerDelay;                                 		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_forceUsePrecomputedShadowsOff : 1;              		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_triggeredTimeStamp;                             		// 0x0078 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YDestructibleObject.YS_AttractionActorParams
// 0x001C
struct FYS_AttractionActorParams
{
	unsigned char                                      m_attractionType;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UParticleModuleAttractionActorPoint*         m_attractorModule;                                		// 0x0004 (0x0004) [0x0000000006400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline )
	float                                              m_lifeTimeSeconds;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_drawScale3D;                                    		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_drawAttractionComponent : 1;                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YDestructibleObject.YS_MaterialScalarParamMod
// 0x0010
struct FYS_MaterialScalarParamMod
{
	class UMaterialInstanceConstant*                   m_matInst;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_paramName;                                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_scalarVal;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YDestructibleObject.YS_MaterialTexParamMod
// 0x0010
struct FYS_MaterialTexParamMod
{
	class UMaterialInstanceConstant*                   m_matInst;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_paramName;                                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    m_newTexture;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YDestructibleObject.MaterialVectorParamMod
// 0x001C
struct FMaterialVectorParamMod
{
	class UMaterialInstanceConstant*                   m_matInst;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_paramName;                                      		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                m_vectorVal;                                      		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YDestructibleObject.YS_ReplicatedDamageModInfo
// 0x0008
struct FYS_ReplicatedDamageModInfo
{
	unsigned char                                      m_objIdx;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_modIdx;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_partial : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YDestructibleObjectDelayed.YS_DamageToApply
// 0x0020
struct FYS_DamageToApply
{
	int                                                m_subObjIdx;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_damageModIdx;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_damage;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class AController*                                 m_instigator;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	class UDamageType*                                 m_damageType;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_timeStamp;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_delay;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_partial : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YDirectionIndicator.YS_ArrowStyle
// 0x0030
struct FYS_ArrowStyle
{
	class UMaterialInstanceConstant*                   m_arrowMaterial;                                  		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UTexture2D*                                  m_arrowTexture;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         m_arrowTexCoords;                                 		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_onlyIfNotVisible : 1;                           		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      m_positionType;                                   		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                m_radius;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_scaleOffset;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_width;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_height;                                         		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YErrorMarker.YS_ErrorInfo
// 0x001C
struct FYS_ErrorInfo
{
	struct FString                                     m_errorMessage;                                   		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     m_errorPosition;                                  		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_errorCount;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YFloatCurveInterpolator.YS_InterpolatedFloatCurve
// 0x002C
struct FYS_InterpolatedFloatCurve
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_targetValue;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             m_endCallback;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_curveScalar;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_curveScalar2;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_curveExtremum;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_curveInflection;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_curveAddend;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPhysicalMaterialProperty.YS_CollisionEffectDefinition
// 0x002C
struct FYS_CollisionEffectDefinition
{
	float                                              m_minRelSpeed;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxRelSpeed;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_minForce;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxForce;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_minDistance;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxDistance;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_slideEffect : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                m_maxInstanceCount;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UYCollisionEffectDesc* >             m_effects;                                        		// 0x0020 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct SRGame.YPhysicalMaterialProperty.YS_MaterialEffectDefinition
// 0x0010
struct FYS_MaterialEffectDefinition
{
	class UPhysicalMaterial*                           m_material;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FYS_CollisionEffectDefinition >     m_effectDefinitions;                              		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPhysicalMaterialProperty.YS_WeaponEffectDefinition
// 0x0018
struct FYS_WeaponEffectDefinition
{
	unsigned char                                      m_impactType;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_shootThrough : 1;                               		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                m_maxInstanceCount;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UYCollisionEffectDesc* >             m_effectsDef;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPhysicalMaterialProperty.YS_PawnFootstepEffectDefinition
// 0x0064
struct FYS_PawnFootstepEffectDefinition
{
	class UClass*                                      m_pawnClass;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_footstepSoundNormal;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_footstepSoundSprint;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_footstepSoundCautious;                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_jumpSoundNormal;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_jumpSoundLong;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_landingSoundNormal;                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_landingSoundHard;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialNormal_Left;                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialNormal_Right;                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_particleSystemNormal;                           		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialSprint_Left;                       		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialSprint_Right;                      		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_particleSystemSprint;                           		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialCautious_Left;                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialCautious_Right;                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_particleSystemCautious;                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialLongJump;                          		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_particleSystemLongJump;                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialJump;                              		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_particleSystemJump;                             		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialHardLanding;                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_particleSystemHardLanding;                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           m_decalMaterialLanding;                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             m_particleSystemLanding;                          		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YFourthWallHealthFeedback.YS_Impact
// 0x0020
struct FYS_Impact
{
	struct FVector                                     m_screenLoc;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              m_angle;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_impactTime;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_impactLifeTime;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   m_lockedAngle;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YFourthWallHealthFeedback.YS_HitBucket
// 0x001C
struct FYS_HitBucket
{
	struct FVector                                     m_screenLoc;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_screenSize;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                m_damageStage;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YFourthWallHealthFeedback.YS_FeedbackStage
// 0x000C
struct FYS_FeedbackStage
{
	TArray< class UUIPanel* >                          m_panels;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGameEngine.YS_PositionCache
// 0x0038
struct FYS_PositionCache
{
	struct FIntPoint                                   m_alignment;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   m_offset;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              m_scale;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   m_pos;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   m_size;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   m_size2;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   m_cachedScale;                                    		// 0x002C (0x0008) [0x0000000000000000]              
	unsigned long                                      m_cached : 1;                                     		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YGameEngine.YS_CheckpointIODummy
// 0x0004
struct FYS_CheckpointIODummy
{
	struct FPointer                                    m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SRGame.YGameReplicationInfo.YS_DeathAnimationIndices
// 0x002E
struct FYS_DeathAnimationIndices
{
	int                                                m_airbag;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_aimout_left;                            		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_aimout_right;                           		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_peekout_left;                           		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_peekout_right;                          		// 0x0007 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_stack_left;                             		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_stack_right;                            		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_stepout_left;                           		// 0x000A (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_stepout_right;                          		// 0x000B (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_aimover;                                		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_leanover;                               		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_peekover;                               		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_crc_idle;                                   		// 0x000F (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_aimout_left;                            		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_aimout_right;                           		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_peekout_left;                           		// 0x0012 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_peekout_right;                          		// 0x0013 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_stack_left;                             		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_stack_right;                            		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_stepout_left;                           		// 0x0016 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_stepout_right;                          		// 0x0017 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_std_idle;                                   		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_run_forward;                                    		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_crc_left;                                       		// 0x001A (0x0001) [0x0000000000000000]              
	unsigned char                                      m_crc_right;                                      		// 0x001B (0x0001) [0x0000000000000000]              
	unsigned char                                      m_crc_backward;                                   		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_crc_forward;                                    		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_crc_front_head;                                 		// 0x001E (0x0001) [0x0000000000000000]              
	unsigned char                                      m_crc_front_neck;                                 		// 0x001F (0x0001) [0x0000000000000000]              
	unsigned char                                      m_crc_front_stomach;                              		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_std_left;                                       		// 0x0021 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_std_right;                                      		// 0x0022 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_std_backward;                                   		// 0x0023 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_std_forward;                                    		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_std_front_head;                                 		// 0x0025 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_std_shotgun_backward;                           		// 0x0026 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_std_mortar_burn;                                		// 0x0027 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_cov_mortar_burn;                                		// 0x0028 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_dbno_death;                                     		// 0x0029 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_death_zipline_traverse;                         		// 0x002A (0x0001) [0x0000000000000000]              
	unsigned char                                      m_death_fastrope_rappel;                          		// 0x002B (0x0001) [0x0000000000000000]              
	unsigned char                                      m_death_falling;                                  		// 0x002C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_death_turret;                                   		// 0x002D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameReplicationInfo.YS_HitReactionAnimationIndices
// 0x0023
struct FYS_HitReactionAnimationIndices
{
	int                                                m_airbag;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_crc_aimout_left;                         		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_crc_aimout_right;                        		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_crc_edgeidle_left;                       		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_crc_edgeidle_right;                      		// 0x0007 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_crc_stepout_left;                        		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_crc_stepout_right;                       		// 0x0009 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_crc_idle;                                		// 0x000A (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_aimout_over;                             		// 0x000B (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_std_edgeidle_left;                       		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_std_edgeidle_right;                      		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_std_stepout_left;                        		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_std_stepout_right;                       		// 0x000F (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_std_idle;                                		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_stackidle_left;                          		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_stack_left;                              		// 0x0012 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_stackidle_right;                         		// 0x0013 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_cov_stack_right;                             		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_crc_chest;                                   		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_crc_arm_left;                                		// 0x0016 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_crc_arm_right;                               		// 0x0017 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_crc_leg_left;                                		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_crc_leg_right;                               		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_chest;                                   		// 0x001A (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_arm_left;                                		// 0x001B (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_arm_right;                               		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_leg_left;                                		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_leg_right;                               		// 0x001E (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_run_left;                                		// 0x001F (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_run_right;                               		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_sprint_left;                             		// 0x0021 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_hr_std_sprint_right;                            		// 0x0022 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameReplicationInfo.YS_PlayedIdleAnimations
// 0x000C
struct FYS_PlayedIdleAnimations
{
	TArray< struct FYS_IdleAnim >                      m_playedAnims;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGameReplicationInfo_MPBase.YS_PerkTimePair
// 0x0008
struct FYS_PerkTimePair
{
	unsigned char                                      perk;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameInfo_MP.YS_KismetXPModifier
// 0x0018
struct FYS_KismetXPModifier
{
	int                                                m_xpModifierID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FYS_XPModifier                              m_xpModifier;                                     		// 0x0004 (0x0014) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameInfo_MP.YS_WeaponClassRefData
// 0x0004
struct FYS_WeaponClassRefData
{
	class UClass*                                      m_weaponClass;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameInfo_MP.YS_EarnedXPFunc
// 0x001C
struct FYS_EarnedXPFunc
{
	float                                              A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              xMin;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              xMax;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                YStep;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bConsiderPlayTime : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YPlayerStart.YS_PlayerStartSpawnInfo
// 0x001C
struct FYS_PlayerStartSpawnInfo
{
	class UClass*                                      m_pawnClass;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               m_characterMesh;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	class UYSpecialActionSetList*                      m_specialActionSetList;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_shyfflrClass;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    m_executionPistolAnimSet;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    m_executionRifleAnimSet;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    m_executionAllAnimSet;                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSeqEvt_SpawningPlayerSetArsenal.YS_MPPlayerWeaponStats
// 0x0010
struct FYS_MPPlayerWeaponStats
{
	class UClass*                                      m_weaponClass;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_startMunition;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_additionalMagazines;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_probability;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqEvt_SpawningPlayerSetArsenal.YS_MPPlayerArsenal
// 0x000C
struct FYS_MPPlayerArsenal
{
	TArray< struct FYS_MPPlayerWeaponStats >           m_wpArr;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YSeqEvt_SpawningPlayerSetArsenal.YS_MPTeamArsenal
// 0x0010
struct FYS_MPTeamArsenal
{
	TArray< struct FYS_MPPlayerArsenal >               m_arsenal;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_allowGrenades : 1;                              		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YGamepadInputScheme.YS_GamepadCallbacks
// 0x000C
struct FYS_GamepadCallbacks
{
	TArray< struct FScriptDelegate >                   m_callbacks;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGamepadInputScheme.YS_GamepadInputInfo
// 0x0048
struct FYS_GamepadInputInfo
{
	struct FYS_GamepadCallbacks                        m_events[ 0x5 ];                                  		// 0x0000 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_callbacksCleared : 1;                           		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_pressed : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_pressedDuration;                                		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_holdWasSent : 1;                                		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_pressWasConsumed : 1;                           		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SRGame.YGamePawn_Player.YS_DeathAnimationLists
// 0x01F8
struct FYS_DeathAnimationLists
{
	TArray< unsigned char >                            m_cov_crc_aimout_left;                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_aimout_right;                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_peekout_left;                           		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_peekout_right;                          		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_stack_left;                             		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_stack_right;                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_stepout_left;                           		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_stepout_right;                          		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_aimover;                                		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_leanover;                               		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_peekover;                               		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_crc_idle;                                   		// 0x0084 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_aimout_left;                            		// 0x0090 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_aimout_right;                           		// 0x009C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_peekout_left;                           		// 0x00A8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_peekout_right;                          		// 0x00B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_stack_left;                             		// 0x00C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_stack_right;                            		// 0x00CC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_stepout_left;                           		// 0x00D8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_stepout_right;                          		// 0x00E4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_std_idle;                                   		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_run_forward;                                    		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_crc_left;                                       		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_crc_right;                                      		// 0x0114 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_crc_backward;                                   		// 0x0120 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_crc_forward;                                    		// 0x012C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_crc_front_head;                                 		// 0x0138 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_crc_front_neck;                                 		// 0x0144 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_crc_front_stomach;                              		// 0x0150 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_std_left;                                       		// 0x015C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_std_right;                                      		// 0x0168 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_std_backward;                                   		// 0x0174 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_std_shotgun_backward;                           		// 0x0180 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_std_forward;                                    		// 0x018C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_std_front_head;                                 		// 0x0198 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_std_mortar_burn;                                		// 0x01A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_cov_mortar_burn;                                		// 0x01B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_dbno_death;                                     		// 0x01BC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_death_zipline_traverse;                         		// 0x01C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_death_fastrope_rappel;                          		// 0x01D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_death_falling;                                  		// 0x01E0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_death_turret;                                   		// 0x01EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YGamePawn_Player.YS_HitReactionAnimationLists
// 0x0174
struct FYS_HitReactionAnimationLists
{
	TArray< unsigned char >                            m_hr_cov_crc_aimout_left;                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_crc_aimout_right;                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_crc_edgeidle_left;                       		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_crc_edgeidle_right;                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_crc_stepout_left;                        		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_crc_stepout_right;                       		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_crc_idle;                                		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_aimout_over;                             		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_std_edgeidle_left;                       		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_std_edgeidle_right;                      		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_std_stepout_left;                        		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_std_stepout_right;                       		// 0x0084 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_std_idle;                                		// 0x0090 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_stackidle_left;                          		// 0x009C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_stack_left;                              		// 0x00A8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_stackidle_right;                         		// 0x00B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_cov_stack_right;                             		// 0x00C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_crc_chest;                                   		// 0x00CC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_crc_arm_left;                                		// 0x00D8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_crc_arm_right;                               		// 0x00E4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_crc_leg_left;                                		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_crc_leg_right;                               		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_chest;                                   		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_arm_left;                                		// 0x0114 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_arm_right;                               		// 0x0120 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_leg_left;                                		// 0x012C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_leg_right;                               		// 0x0138 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_run_left;                                		// 0x0144 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_run_right;                               		// 0x0150 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_sprint_left;                             		// 0x015C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            m_hr_std_sprint_right;                            		// 0x0168 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YTracerPoolData.YS_TracerPoolEntry
// 0x0008
struct FYS_TracerPoolEntry
{
	class UYTracerAsset*                               m_tracerAsset;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_maxCount;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YGameReplicationInfo_MP.YS_RankBotSkillModifiers
// 0x000C
struct FYS_RankBotSkillModifiers
{
	unsigned long                                      m_bSet : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fAccuracyModifier;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fDamageModifier;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameReplicationInfo_MP.YS_RankInfo
// 0x0010
struct FYS_RankInfo
{
	int                                                m_xpThreshold;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FYS_RankBotSkillModifiers                   m_BotSkillModifiers;                              		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIDataProvider_MapCharacterList.YS_ChallengeDefinition
// 0x0014
struct FYS_ChallengeDefinition
{
	int                                                m_challengeDamageValue;                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_MajorPerkLevel;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_startingExplosiveCount;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_maxExplosiveCount;                              		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_healthMultiplier;                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YGameReplicationInfo_Lobby.YExodusScoreInfoReplicated
// 0x000C
struct FYExodusScoreInfoReplicated
{
	unsigned char                                      m_mapId;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                m_team1Score;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_team2Score;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YHitDirectionIndicator.YS_HitIndicatorImpact
// 0x0018
struct FYS_HitIndicatorImpact
{
	class AActor*                                      m_instigator;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timer;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_threatLevel;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_threatCounter;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_threatScale;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_flashTimer;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YHitDirectionIndicator.YS_HitIndicatorProjectileImpact
// 0x0018
struct FYS_HitIndicatorProjectileImpact
{
	struct FVector                                     m_hitLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              m_timer;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                m_damage;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_flashTimer;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YHUD.YS_MemoryPS3Info
// 0x0060
struct FYS_MemoryPS3Info
{
	float                                              m_bspSize;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_animSize;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_skelMeshSize;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_staticMeshSize;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_audioSize;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_scriptSize;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_particleSize;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_terrainSize;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_uiSize;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fmodSize;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_aiStaticFireLinkSize;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_aiPathDataSize;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_otherSize;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_fnameSize;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_shaderSize;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_reservedSize;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              m_allocatedSize;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_staticSize;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              m_rsxCBSize;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              m_hostSize;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              m_availableSize;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              m_mallocOverhead;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              m_mallocWaste;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_mallocFree;                                     		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YIcon_AmmoPickup.YS_MaterialData
// 0x0054
struct FYS_MaterialData
{
	class UTexture*                                    m_texture;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_refillIconRotation;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_refillIconSize;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_blinkRate;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_diamondRotation;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                m_darkToneColor;                                  		// 0x0014 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                m_diamondColor;                                   		// 0x0024 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                m_innerLineColor;                                 		// 0x0034 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                m_outlineColor;                                   		// 0x0044 (0x0010) [0x0000000000000000]              
};

// ScriptStruct SRGame.YIcon_MP_DBNO.YS_DBNOMaterialData
// 0x0004
struct FYS_DBNOMaterialData
{
	class UTexture*                                    m_texture;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YMapInfo.YS_TimeOrDegrees
// 0x000C
struct FYS_TimeOrDegrees
{
	int                                                m_hoursOrDegrees;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_minutes;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_seconds;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YMaterialExpressionSceneFilter.SceneFilter
// 0x000C
struct FSceneFilter
{
	TArray< float >                                    FilterValue;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YMathUtils.YS_ValueMappingRule
// 0x0010
struct FYS_ValueMappingRule
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Peak;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Base;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YMathUtils.YS_RenderPoint
// 0x0010
struct FYS_RenderPoint
{
	struct FVector                                     m_pos;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YMathUtils.YS_RenderLine
// 0x001C
struct FYS_RenderLine
{
	struct FVector                                     m_start;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_end;                                            		// 0x000C (0x000C) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YMathUtils.YS_RenderBrush
// 0x0008
struct FYS_RenderBrush
{
	struct FPointer                                    m_pBrush;                                         		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FColor                                      m_color;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YObjectPool.YSEmitterCacheEntry
// 0x0154
struct FYSEmitterCacheEntry
{
	struct FPointer                                    Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SizeOfList;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ParticleSystemType;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ListIdx;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PList[ 0x14 ];                                    		// 0x0010 (0x0050) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AYOPEmitter*                                 List[ 0x3C ];                                     		// 0x0060 (0x00F0) [0x0000000000000000]              
	unsigned long                                      dontCreateLazy : 1;                               		// 0x0150 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YObjectPool.YS_SkelMeshEntry
// 0x0008
struct FYS_SkelMeshEntry
{
	class USkeletalMeshComponent*                      m_skelMesh;                                       		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      m_isFree : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YObjectPool.YS_SkeletalMeshCacheEntry
// 0x005C
struct FYS_SkeletalMeshCacheEntry
{
	int                                                SizeOfList;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               SkelMeshType;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FYS_SkelMeshEntry                           List[ 0xA ];                                      		// 0x000C (0x0050) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct SRGame.YObjectPool.YS_ParticleLightEnvironmentEntry
// 0x0008
struct FYS_ParticleLightEnvironmentEntry
{
	class UParticleLightEnvironmentComponent*          m_pLEC;                                           		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      m_isFree : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YObjectPool.YSTracerCacheEntry
// 0x0020
struct FYSTracerCacheEntry
{
	int                                                m_type;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      m_tracerClass;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	class AYProj_Tracer*                               m_tracerArc;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_listIdx;                                        		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_maxCount;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< class AYProj_Tracer* >                     m_pool;                                           		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YObjectPool.YS_WeaponPickupEntry
// 0x0010
struct FYS_WeaponPickupEntry
{
	class AYPickup_WeaponSpawnable*                    m_weaponPickup;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isFree : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_spawnTimeStamp;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_resultReturnPriority;                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YObjectPool.YS_PawnAttachmentEntry
// 0x0014
struct FYS_PawnAttachmentEntry
{
	struct FName                                       m_currentUserName;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      m_isFree : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_timeStamp;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class AKActorSpawnable*                            m_actor;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YObjectPool.YS_BodyPartEntry
// 0x000C
struct FYS_BodyPartEntry
{
	unsigned long                                      m_isFree : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_timeStamp;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class AKActorSpawnable*                            m_actor;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YObjectPool.YS_HealingSyringeEntry
// 0x000C
struct FYS_HealingSyringeEntry
{
	unsigned long                                      m_isFree : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_timeStamp;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class AKActorSpawnable*                            m_actor;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YOffsetRotationInterpolator.YS_OffsetRotationInterpolator
// 0x0024
struct FYS_OffsetRotationInterpolator
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_delayToGo;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FRotator                                    m_offset;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             m_endCallback;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YParticleModuleCollisionDecal.DecalMap
// 0x0010
struct FDecalMap
{
	class UPhysicalMaterial*                           phyMat;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInstance* >                 decalMaterials;                                   		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPawn_Infantry.YS_RecordedShot
// 0x000C
struct FYS_RecordedShot
{
	float                                              m_fTime;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_duration;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_hasHit : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YPawn_Infantry.YS_RecordedShotsSequence
// 0x001C
struct FYS_RecordedShotsSequence
{
	TArray< struct FYS_RecordedShot >                  m_Shots;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nHitCount;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fSequenceAccuracy;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FUObjectHandle                              m_shootSet;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_shootDuration;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPawn_Infantry.YS_ShotsRecorder
// 0x0064
struct FYS_ShotsRecorder
{
	struct FYS_RecordedShotsSequence                   m_currentShotsSequence;                           		// 0x0000 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FYS_RecordedShotsSequence                   m_intendedShotsSequence;                          		// 0x001C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fSequenceDurationLimit;                         		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              m_fSequenceInterval;                              		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              BAR_LENGTH_CLIPX_RATIO;                           		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BAR_HEIGHT_CLIPY_RATIO;                           		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TEXT_OFFSET_X;                                    		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BAR_BACKG_COLOR;                                  		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BAR_GREY_COLOR;                                   		// 0x0050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      BAR_BORDER_COLOR;                                 		// 0x0054 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      SHOT_HIT_COLOR;                                   		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      SHOT_MISS_COLOR;                                  		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FColor                                      TEXT_COLOR;                                       		// 0x0060 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YSeqAct_SetSquadEvolution.YS_EvolutionSettings
// 0x0030
struct FYS_EvolutionSettings
{
	struct FString                                     m_characterMesh;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_characterMaterial;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_shyfflrClass;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_evolutionStateClassName;                        		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_WeaponFlybySoundsProjectile
// 0x0008
struct FYS_WeaponFlybySoundsProjectile
{
	class UYSoundCueFMOD*                              m_flybyLtR;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_flybyRtL;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_WeaponFlybySoundsShotgun
// 0x0008
struct FYS_WeaponFlybySoundsShotgun
{
	class UYSoundCueFMOD*                              m_flybyLtR;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_flybyRtL;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_DashSoundsBody
// 0x000C
struct FYS_DashSoundsBody
{
	class UYSoundCueFMOD*                              m_walk;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_run;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_sprint;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_SlideIntoCoverSounds
// 0x000C
struct FYS_SlideIntoCoverSounds
{
	class UYSoundCueFMOD*                              m_walk;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_run;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_sprint;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_DashSoundsVoice
// 0x000C
struct FYS_DashSoundsVoice
{
	class UYSoundCueFMOD*                              m_walk;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_run;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_sprint;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_MovementSounds
// 0x000C
struct FYS_MovementSounds
{
	class UYSoundCueFMOD*                              m_quickTurn;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_enterCrouch;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_leaveCrouch;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_PawnEffortSounds
// 0x000C
struct FYS_PawnEffortSounds
{
	class UYSoundCueFMOD*                              m_idle;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_run;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_sprint;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_PawnCoverMovementSounds
// 0x0010
struct FYS_PawnCoverMovementSounds
{
	class UYSoundCueFMOD*                              m_leanSoundCue;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_leanOverSoundCue;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_coverWalkSoundCueCrouch;                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_coverWalkSoundCueStand;                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_DBNOSounds
// 0x0004
struct FYS_DBNOSounds
{
	class UYSoundCueFMOD*                              m_moaningSound;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_ZiplineAndRappelSounds
// 0x0008
struct FYS_ZiplineAndRappelSounds
{
	class UYSoundCueFMOD*                              m_ziplineSound;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_rappelSound;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPawnSoundGroup.YS_PawnCoverChangeSounds
// 0x0010
struct FYS_PawnCoverChangeSounds
{
	class UYSoundCueFMOD*                              m_aimOut;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_aimOver;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_leanAround;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UYSoundCueFMOD*                              m_leanOver;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPickup_AmmoBox.RefillInfo
// 0x0008
struct FRefillInfo
{
	class AYWeapon*                                    m_weapon;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_numRounds;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerCamTransition.YS_TransitionSubStep
// 0x0018
struct FYS_TransitionSubStep
{
	struct FVector                                     m_position;                                       		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_usePosition : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_distance;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_FOV;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YUIScoreboardPanel.YS_RowSelection
// 0x0008
struct FYS_RowSelection
{
	int                                                m_index;                                          		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UYScoreboardPlayerInfo*                      m_PRI;                                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUIFrontEnd_Rewards.YS_ContentPackInfoItem
// 0x0010
struct UYUIFrontEnd_Rewards_FYS_ContentPackInfoItem
{
	unsigned long                                      m_Unlocked : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_Prefix;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIFrontEnd_Rewards.YSRewards_Row
// 0x0018
struct FYSRewards_Row
{
	class UUIPanel*                                    m_Panel;                                          		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblUnlockTitle;                                   		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblUnlockDescription;                             		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    imgPerk;                                          		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    imgWeaponOrTitle;                                 		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    lblTitleTxt;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUIFrontEnd_Rewards.KitInfo
// 0x0018
struct FKitInfo
{
	struct FName                                       m_name;                                           		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                ContentLength;                                    		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     FriendlyName;                                     		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YPlayerController_MPBase.XPEventBufferItems
// 0x0010
struct FXPEventBufferItems
{
	int                                                m_eventID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_eventXP;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fDisplayTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_ChallengeID;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerController_MP.YKillData
// 0x0008
struct FYKillData
{
	class AYPlayerReplicationInfo_MP*                  m_player;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_timesKilled;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerInput3.YS_AdhesionTargetData
// 0x003C
struct FYS_AdhesionTargetData
{
	class AActor*                                      m_target;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AYGamePawn*                                  m_pn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class AYCheapShooter*                              m_cs;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_heat;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_dotFromCam;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_distAngleH;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_distAngleV;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_distToCamLineH;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_distToCamLineV;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_headLoc;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_breastLoc;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerReplicationInfo_MPBase.XPInfo
// 0x000C
struct FXPInfo
{
	int                                                collectedXP;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                collectedXPFromChallenges;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                bonusMatchXP;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerReplicationInfo_MP.WeaponAccuracyInfo
// 0x002C
struct FWeaponAccuracyInfo
{
	int                                                Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AimedShots;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AimedHits;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TotalShots;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TotalHits;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CoverShots;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                CoverHits;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CoverAimedShots;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                CoverAimedHits;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              PercentRaysHit;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                HeadShots;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPlayerStart.YS_PlayerStartTypeInfo
// 0x0038
struct FYS_PlayerStartTypeInfo
{
	struct FName                                       m_pawnClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       m_skeletalMeshName;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       m_specialActionSetListName;                       		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       m_shyfflrClassName;                               		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       m_executionPistolAnimSetName;                     		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       m_executionRifleAnimSetName;                      		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       m_executionAllAnimSetName;                        		// 0x0030 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YPostProcessVolumeActor.AdvancedAntialiasingSettings
// 0x0018
struct FAdvancedAntialiasingSettings
{
	float                                              AAA_DepthThreshold;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AAA_DepthInfluence;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AAA_NormalThreshold;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AAA_NormalInfluence;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AAA_CoordsThreshold;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AAA_CoordsInfluence;                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YPPTransitionVolumeActor.TransitionData
// 0x0010
struct FTransitionData
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetValue;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YWeaponDataAssetBase.YS_WeaponDispatcherVersion
// 0x0008
struct FYS_WeaponDispatcherVersion
{
	unsigned char                                      m_versionPurpose;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UYWeaponDataAssetBase*                       m_alternativeDataAsset;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YRayTexture.YRayTextureRow
// 0x0014
struct FYRayTextureRow
{
	class UDistributionVectorConstantCurve*            Color;                                            		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDistributionFloatConstantCurve*             Alpha;                                            		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     RowName;                                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YWeaponData_Tracer.YS_TracerDefinition
// 0x0018
struct FYS_TracerDefinition
{
	class UYTracerAsset*                               m_tracerAsset;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_tracerCategory;                                 		// 0x0004 (0x0001) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	class AActor*                                      m_tracerArchetype;                                		// 0x0008 (0x0004) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	float                                              m_probability;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_fixedFrequency;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_numPSCs;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YWeapon.YS_LastShotInformation
// 0x0025
struct FYS_LastShotInformation
{
	float                                              m_damageAmount;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_startLocation;                                  		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_hitLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                m_replicationFlags;                               		// 0x001C (0x0004) [0x0000000000000000]              
	class UClass*                                      m_damageType;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_firingMode;                                     		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YWeapon.YS_RecoilParams
// 0x0004
struct FYS_RecoilParams
{
	unsigned char                                      m_x;                                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_y;                                              		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_z;                                              		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_padding;                                        		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SRGame.YWeapon.YS_RecoilDef
// 0x0070
struct FYS_RecoilDef
{
	float                                              m_timeToGo;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_timeDuration;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_rotAmplitude;                                   		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_rotFrequency;                                   		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_rotSinOffset;                                   		// 0x0020 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FYS_RecoilParams                            m_rotParams;                                      		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_rotOffset;                                      		// 0x0030 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_locAmplitude;                                   		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_locFrequency;                                   		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_locSinOffset;                                   		// 0x0054 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FYS_RecoilParams                            m_locParams;                                      		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_locOffset;                                      		// 0x0064 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YWeapon.YS_LowAmmoSounds
// 0x000C
struct FYS_LowAmmoSounds
{
	class USoundCue*                                   m_lowAmmoSoundCue;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   m_lastBulletSoundCue;                             		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USoundCue*                                   m_weaponEmptySoundCue;                            		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YWeapon.YS_WeaponAnimInfo
// 0x000C
struct FYS_WeaponAnimInfo
{
	class UAnimNodeSequence*                           m_animNode;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeBlendList*                          m_parentBlendList;                                		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_childIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YRemoteSpeakerBase.YS_RemoteSpeakerData
// 0x0028
struct FYS_RemoteSpeakerData
{
	class AActor*                                      m_addressee;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   m_audio;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_subtitlePriority;                               		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              m_delayTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     m_debugText;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_allowFilters : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_useDucking : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_playbackVolume;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                m_UID;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSA_SimpleAction.YS_SpecialActionAnimationDef
// 0x0008
struct FYS_SpecialActionAnimationDef
{
	unsigned char                                      m_anim;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_useAnim : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YSAUR_MaxUseCount.YS_MUCUseReport
// 0x0004
struct FYS_MUCUseReport
{
	float                                              m_useTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSAUR_MaxUseCountOD.YS_ODMUCUseReport
// 0x0004
struct FYS_ODMUCUseReport
{
	float                                              m_useTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSC_SelectionModifierBase.YS_CombatPosCandidate
// 0x0010
struct FYS_CombatPosCandidate
{
	struct FYOctreeDataHndl                            m_octreeHandle;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_shouldHaveScore;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_distanceToBot;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_combatPosDebugData;                             		// 0x000C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct SRGame.YSeqAct_CheapShooter_Spawn.YS_CheapShooter_EnemyTypeData
// 0x0050
struct FYS_CheapShooter_EnemyTypeData
{
	unsigned long                                      m_isCivilian : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_aiType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FName                                       m_shootSetName;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
	class UClass*                                      m_weapon;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             m_skeletalMeshNames;                              		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       m_physicsAssetName;                               		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       m_animTreeName;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             m_animSets;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_standing;                                       		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      m_filterType;                                     		// 0x003D (0x0001) [0x0000000000000000]              
	unsigned char                                      m_attackCommandGiveEvent;                         		// 0x003E (0x0001) [0x0000000000000000]              
	int                                                m_stdRollOffset;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                m_stdPitchOffset;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                m_crcRollOffset;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                m_crcPitchOffset;                                 		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSeqAct_DummyWeaponFire.YS_DummyFireObjectListParams
// 0x0024
struct FYS_DummyFireObjectListParams
{
	struct FVector2D                                   m_secondsPerObject;                               		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   m_objectChangeDelay;                              		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      m_cyclingMethod;                                  		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_timeUntilObjectChange;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_delay : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_delayTimeRemaining;                             		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_currentObjIdx;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSeqAct_GlobalSuppressGenericVoiceOver.YS_SuppressionSetting
// 0x0010
struct FYS_SuppressionSetting
{
	TArray< unsigned char >                            m_definedTypes;                                   		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_suppressDefinedTypes : 1;                       		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqAct_ModifyArsenal.YS_ModifyArsenal
// 0x0008
struct FYS_ModifyArsenal
{
	unsigned char                                      m_weapon;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_enableSecondaryFire : 1;                        		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqAct_OverrideDuckingSettings.DuckingSettings
// 0x0034
struct FDuckingSettings
{
	float                                              Music;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HUD;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Voice_Walker;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Voice_Squad;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Voice_NPCs;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Voice_Radio;                                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Movement;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weapons;                                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Impacts;                                          		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Explosions;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Ambient;                                          		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Vehicles;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Specials;                                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqAct_SetFMODParam.RunningInterpolation
// 0x0008
struct FRunningInterpolation
{
	float                                              m_startTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_duration;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSeqAct_SetPawnInventory.YS_GrenadeArsenal
// 0x0008
struct FYS_GrenadeArsenal
{
	unsigned char                                      grenadeType;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Amount;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqVar_AliveCount.YS_AliveCountSetting
// 0x0008
struct FYS_AliveCountSetting
{
	unsigned char                                      m_teamID;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_countIn : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqVar_GlobalAIs.YS_ObjectListAIs_Types
// 0x0004
struct FYS_ObjectListAIs_Types
{
	unsigned long                                      m_adams : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_lugo : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_riggs : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_enemies : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_civilians : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct SRGame.YSeqVar_GlobalAIs.YS_ObjectListAIs_Options
// 0x0004
struct FYS_ObjectListAIs_Options
{
	unsigned long                                      m_alive : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_dbno : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_deathDBNO : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_dead : 1;                                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SRGame.YShyfflr.YS_ShyfflrEntry
// 0x0010
struct FYS_ShyfflrEntry
{
	struct FName                                       m_specialActionSetListName;                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_specialActionSetListDataPackageName;            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YSimpleList.YSimpleListData
// 0x0030
struct FYSimpleListData
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ItemTag;                                          		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsSeparator : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              textWidth[ 0x5 ];                                 		// 0x0018 (0x0014) [0x0000000000000000]              
	unsigned long                                      bWasRendered : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_isBlinking : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_isLocked : 1;                                   		// 0x002C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SRGame.YSimpleList.YSimpleListStyleData
// 0x0044
struct FYSimpleListStyleData
{
	class UFont*                                       TextFont;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                TextColor;                                        		// 0x0004 (0x0010) [0x0000000000000000]              
	struct FVector2D                                   TextPadding;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   TextScale;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	unsigned char                                      TextHorizontalAlignment;                          		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      TextVerticalAlignment;                            		// 0x0025 (0x0001) [0x0000000000000000]              
	float                                              textHeight;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           BackgroundImage;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                BackgroundImageTimeVarying;                       		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   ImagePadding;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ImageBoundaries;                                  		// 0x003C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSkelControlLookAt.YS_EyeMovementInfo
// 0x001C
struct FYS_EyeMovementInfo
{
	struct FString                                     m_faceFXRegister;                                 		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector2D                                   m_registerValueRange;                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   m_movementRange;                                  		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YVerletParticleManager.YS_VerletParticle
// 0x0028
struct FYS_VerletParticle
{
	struct FVector                                     m_pos;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_lastPos;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_force;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              m_invMass;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YVerletParticleManager.YS_VerletConstraint
// 0x000C
struct FYS_VerletConstraint
{
	struct FPointer                                    m_particle1;                                      		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_particle2;                                      		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	float                                              m_restDistance;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove.YS_MovementAnimProperties
// 0x0011
struct FYS_MovementAnimProperties
{
	struct FYS_AnimProperties                          m_animProperties;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      m_animID;                                         		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YSpecialMove.YS_MiscAnimProperties
// 0x0011
struct FYS_MiscAnimProperties
{
	struct FYS_AnimProperties                          m_animProperties;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      m_animID;                                         		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YSpecialMove.YS_FeedbackAnimProperties
// 0x0011
struct FYS_FeedbackAnimProperties
{
	struct FYS_AnimProperties                          m_animProperties;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
	unsigned char                                      m_animID;                                         		// 0x0010 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YSpecialMove_BeingExecuted.YS_ExecutionReactionAnimSet
// 0x0004
struct FYS_ExecutionReactionAnimSet
{
	unsigned char                                      m_dummy1;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_dummy2;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_animIDOnBack;                                   		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_animIDOnFront;                                  		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_BeingRevived.YS_ReviveReactionAnimSet
// 0x0004
struct FYS_ReviveReactionAnimSet
{
	unsigned char                                      m_dummy1;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_dummy2;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_dummy3;                                         		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_animIDOnBack;                                   		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_OverCover.YS_SpecialMoveAnimProperties
// 0x002C
struct FYS_SpecialMoveAnimProperties
{
	struct FYS_AnimProperties                          m_animProperties;                                 		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     m_upMovementRootMotion;                           		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned char                                      m_animID;                                         		// 0x001C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_upMovementPercentageBegin;                      		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_upMovementPercentageEnd;                        		// 0x0024 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_alignToCoverDistance;                           		// 0x0028 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YSpecialMove_IntoCover.YS_EnterCoverInitialState
// 0x000C
struct FYS_EnterCoverInitialState
{
	unsigned long                                      m_crouched : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_wasSprinting;                                   		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              m_maxDist;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_IntoCover.YS_EnterCoverFinalState
// 0x0004
struct FYS_EnterCoverFinalState
{
	unsigned long                                      m_crouched : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YSpecialMove_IntoCover.YS_EnterCoverTransition
// 0x0038
struct FYS_EnterCoverTransition
{
	struct FYS_EnterCoverInitialState                  m_initialState;                                   		// 0x0000 (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FYS_EnterCoverFinalState                    m_finalState;                                     		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_animStartCenter;                                		// 0x0010 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_animStartEdgeL;                                 		// 0x0011 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_animStartEdgeR;                                 		// 0x0012 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_animEndCenter;                                  		// 0x0013 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_animEndEdgeL;                                   		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_animEndEdgeR;                                   		// 0x0015 (0x0001) [0x0000000000000002]              ( CPF_Const )
	class UCameraAnim*                                 m_cameraAnim;                                     		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UCameraAnim*                                 m_impactCameraAnim;                               		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FYS_AnimProperties >                m_animPropertiesStart;                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FYS_AnimProperties >                m_animPropertiesEnd;                              		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YSpecialMove_IntelOp.YS_IntelOpAnimIDs
// 0x0004
struct FYS_IntelOpAnimIDs
{
	unsigned char                                      m_animIDs[ 0x4 ];                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_LeaveCover.YS_LeaveCoverInitialState
// 0x0008
struct FYS_LeaveCoverInitialState
{
	unsigned char                                      m_coverStance;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_mirrored : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YSpecialMove_LeaveCover.YS_LeaveCoverFinalState
// 0x0008
struct FYS_LeaveCoverFinalState
{
	unsigned char                                      m_direction;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_crouched : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YSpecialMove_LeaveCover.YS_LeaveCoverTransition
// 0x0011
struct FYS_LeaveCoverTransition
{
	struct FYS_LeaveCoverInitialState                  m_initialState;                                   		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FYS_LeaveCoverFinalState                    m_finalState;                                     		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      m_animation;                                      		// 0x0010 (0x0001) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YSpecialMove_OutfitSilencerBase.YS_OutfitSilencerAnimations
// 0x0002
struct FYS_OutfitSilencerAnimations
{
	unsigned char                                      m_standardAnimation;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_coverAnimation;                                 		// 0x0001 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_PickUpWeapon.YS_PickUpWeaponAnimation
// 0x000C
struct UYSpecialMove_PickUpWeapon_FYS_PickUpWeaponAnimation
{
	unsigned char                                      m_animID;                                         		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	float                                              m_weaponPickupDelay;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_weaponPickupPercentage;                         		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YSpecialMove_PickUpLimitedUse.YS_PickUpWeaponAnimation
// 0x000C
struct UYSpecialMove_PickUpLimitedUse_FYS_PickUpWeaponAnimation
{
	unsigned char                                      m_animID;                                         		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	float                                              m_weaponPickupDelay;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_weaponPickupPercentage;                         		// 0x0008 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YSpecialMove_StartSprint.YS_StartSprintAnimations
// 0x0010
struct FYS_StartSprintAnimations
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            m_animIDs;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YSpecialMove_Revive.YS_ReviveAnimIDs
// 0x0004
struct FYS_ReviveAnimIDs
{
	unsigned char                                      m_animIDs[ 0x4 ];                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_Revive_MP.YS_ReviveMPAnimIDs
// 0x0004
struct FYS_ReviveMPAnimIDs
{
	unsigned char                                      m_animIDs[ 0x4 ];                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_ReviveFromDeath.YS_ReviveDeathAnimIDs
// 0x0004
struct FYS_ReviveDeathAnimIDs
{
	unsigned char                                      m_animIDs[ 0x4 ];                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_SwatTurn.YS_SwatTurnFixedAnimProperties
// 0x0018
struct FYS_SwatTurnFixedAnimProperties
{
	TArray< struct FYS_MovementAnimProperties >        m_animPropertiesLeft;                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FYS_MovementAnimProperties >        m_animPropertiesRight;                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YSpecialMove_TakeHit.YS_TakeHitAnimCycleSet
// 0x0007
struct FYS_TakeHitAnimCycleSet
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_intoAnim;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_idleAnim;                                       		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_outAnim;                                        		// 0x0006 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SRGame.YSpecialMove_TakeHit.YS_TakeHitAnimSetsForMoveDirs
// 0x0010
struct FYS_TakeHitAnimSetsForMoveDirs
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FYS_TakeHitAnimCycleSet >           m_animIDs;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YSpecialMove_TakeHit.YS_TakeHitAnimations
// 0x0010
struct FYS_TakeHitAnimations
{
	int                                                m_dummy;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            m_animIDs;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YTargetFloatInterpolator.YS_TargetFloatInterpolator
// 0x001C
struct FYS_TargetFloatInterpolator
{
	float                                              m_length;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_timeToGo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_delayToGo;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_value;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             m_endCallback;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YTrigger_EffectsInteraction.YS_EffectInteractionItem
// 0x001C
struct FYS_EffectInteractionItem
{
	float                                              m_delay;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AEmitter* >                          m_emitters;                                       		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AYAmbientSound* >                    m_sounds;                                         		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YTrigger_InteractionSequence.YS_InteractionSequence
// 0x001C
struct FYS_InteractionSequence
{
	unsigned char                                      m_useableForTeam;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nextSequenceIndex;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AInterpActor*                                m_meshToShowForSpecops;                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AInterpActor*                                m_meshToShowForKonrad;                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_displayedText;                                  		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YTypeUtils.YArray_Mirror
// 0x000C
struct FYArray_Mirror
{
	TArray< int >                                      m_array;                                          		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SRGame.YUICharacterCustomArmorPanel.YS_ArmorListItem
// 0x0034
struct FYS_ArmorListItem
{
	int                                                m_UnlockLevel;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_FriendlyName;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       m_Handle;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FString                                     m_TextPath;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_ImagePath;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_Multiplier;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIEventTracker.YS_MessagePart
// 0x0028
struct FYS_MessagePart
{
	struct FString                                     m_text;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UFont*                                       m_font;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FColor                                      m_color;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_scale;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_offsetX;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_width;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_cachedOffsetX;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_cachedOffsetY;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIEventTracker.YS_EventLine
// 0x0024
struct FYS_EventLine
{
	TArray< struct FYS_MessagePart >                   m_parts;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   m_background;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_endOfLife;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_offsetX;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_useSlider : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_sliderPos;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_cached : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YUIFrontEnd_BasicMenu.YSCommonXPPanel
// 0x0018
struct FYSCommonXPPanel
{
	class UUILabel*                                    lblRank;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblRankName;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblRankValue;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblXp;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblXPValue;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    imgRankIcon;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIFrontEnd_BasicMenu.YSUnlockPanel
// 0x0018
struct FYSUnlockPanel
{
	class UUILabel*                                    lblUnlock;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblUnlockDesc1;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblUnlockDesc2;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    imgWeapon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UUIImage*                                    imgPerk;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    imgTitleUnlock;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIFrontEnd_SelectSaveSlotScreen.YS_SlotSelectionVisual
// 0x0010
struct FYS_SlotSelectionVisual
{
	class UUIPanel*                                    m_selectedBg;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_date;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_chapter;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_Title;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIFrontEnd_SelectSaveSlotScreen.YS_SelectableSlot
// 0x0050
struct FYS_SelectableSlot
{
	unsigned long                                      m_isEmpty : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_isCorrupted : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      m_chapter;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                m_missionIndex;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     m_previewImage;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_difficultyImage;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_difficultyName;                                 		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_timePlayed;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      m_difficulty;                                     		// 0x003C (0x0001) [0x0000000000000000]              
	struct FYS_SlotSelectionVisual                     m_visual;                                         		// 0x0040 (0x0010) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIFrontEnd_DifficultyScreen.YS_IconImages
// 0x0010
struct FYS_IconImages
{
	class UUIImage*                                    m_iconNormal;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_iconSelected;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_iconLocked;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    m_iconLockedSelected;                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIFrontEnd_Career.YS_CareerWidgetRef
// 0x0030
struct FYS_CareerWidgetRef
{
	class UUILabel*                                    m_lblRankName;                                    		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblRankLevel;                                   		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblXP;                                          		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblNextRankName;                                		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblNextRankLevel;                               		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIProgressBar*                              m_barXPProgress;                                  		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblRequiredXP;                                  		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblUnlockDesc1;                                 		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblUnlockDesc2;                                 		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgUnlock;                                      		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgRankIcon;                                    		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgNextRankIcon;                                		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUIFrontEnd_Challenges.YS_ChallengeRow
// 0x0030
struct FYS_ChallengeRow
{
	class UUIImage*                                    imgBadge;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    imgTitle;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblTitle;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblDesc;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblName;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    pnlAchieved;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    pnlActive;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblXPAchieved;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblXPEnd;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	class UUIProgressBar*                              barXPProgress;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblTargetValue;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblProgressValue;                                 		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIFrontEnd_CharacterRespawnSelection.YS_CharacterWidget
// 0x0054
struct FYS_CharacterWidget
{
	class UUIPanel*                                    m_pnlCharacter;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_pnlSelected;                                    		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIPanel*                                    m_pnlUnSelected;                                  		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgClassIcon;                                   		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentName;                                  		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentNameSelected;                          		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentMPerk1;                                		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentMPerk2;                                		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentMPerk3;                                		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentPWeapon;                               		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentSWeapon;                               		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lbContentExplosive;                             		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgContentMPerk1;                               		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgContentMPerk2;                               		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgContentMPerk3;                               		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblPrimaryIcon;                                 		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblSecondaryIcon;                               		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    m_lblExplosiveIcon;                               		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgContentSelectedBackground;                   		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    m_imgLock;                                        		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   m_buttonCharacter;                                		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUIFrontEnd_CharacterRespawnSelection.YS_CharacterWidgetName
// 0x00A8
struct FYS_CharacterWidgetName
{
	struct FName                                       PanelCharacter;                                   		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       PanelSelected;                                    		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       PanelUnSelected;                                  		// 0x0010 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentClassIcon;                                 		// 0x0018 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentName;                                      		// 0x0020 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentNameSelected;                              		// 0x0028 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentMPerk1Label;                               		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentMPerk2Label;                               		// 0x0038 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentMPerk3Label;                               		// 0x0040 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentPWeaponLabel;                              		// 0x0048 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentSWeaponLabel;                              		// 0x0050 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentExplosiveLabel;                            		// 0x0058 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentMPerk1Image;                               		// 0x0060 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentMPerk2Image;                               		// 0x0068 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentMPerk3Image;                               		// 0x0070 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentPrimaryIcon;                               		// 0x0078 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentSecondaryIcon;                             		// 0x0080 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentExplosiveIcon;                             		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentSelectedBackground;                        		// 0x0090 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ContentLock;                                      		// 0x0098 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       ButtonCharacter;                                  		// 0x00A0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUIFrontEnd_CharacterRespawnSelection.YS_ClassRespawn
// 0x0030
struct FYS_ClassRespawn
{
	struct FString                                     m_CharacterName;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      m_PrimaryWeapon;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_SecondaryWeapon;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_Explosives;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MajorPerk;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MinorPerk1;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MinorPerk2;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      m_MinorPerk3;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_MajorPerkLevel;                                 		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsLocked : 1;                                  		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YUIMenuList.YMenuListData
// 0x0010
struct FYMenuListData
{
	int                                                iDataProviderItem;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     sDescription;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIFrontEnd_IntelCollectibles.YS_RadioSpeakerPerChapter
// 0x000C
struct FYS_RadioSpeakerPerChapter
{
	TArray< int >                                      m_ids;                                            		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIFrontEnd_Lobby.PartyPlayerData
// 0x0030
struct FPartyPlayerData
{
	class UUIImage*                                    TeamIcon;                                         		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    ServerIcon;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    FactionIcon;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    ChatIcon;                                         		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastChatTime;                                     		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    HeadsetIcon;                                      		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    NotReadyIcon;                                     		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    ReadyIcon;                                        		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIButton*                                   ReadyButton;                                      		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIImage*                                    SwitchTeamIcon;                                   		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      muted : 1;                                        		// 0x0028 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      MutedByRemote : 1;                                		// 0x0028 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      IsOnLocalMuteList : 1;                            		// 0x0028 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      WasOnLocalMuteList : 1;                           		// 0x0028 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	class AYPlayerReplicationInfo_Lobby*               PlayerPRI;                                        		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUIInfo_ModificatorPlacement.YS_ModificatorGUIPlacement
// 0x0010
struct FYS_ModificatorGUIPlacement
{
	unsigned long                                      m_inConfig : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_inOutfit : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_outFitIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_configIndex;                                    		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_highlite : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YUIObjectList.GeneratedOptionInfo
// 0x0024
struct FGeneratedOptionInfo
{
	struct FName                                       OptionProviderName;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	class UUIObject*                                   LabelObj;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIObject*                                   OptionObj;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UUIDataProvider*                             OptionProvider;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              OptionY;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              OptionHeight;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              OptionX;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              OptionWidth;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIKeyBindingList.BindKeyData
// 0x0024
struct FBindKeyData
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPlayerInput*                                PInput;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       PreviousBinding;                                  		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned long                                      bPromptForDuplicate : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBindIsPrimary : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SRGame.YUIMessageBox.YS_MessageBox_Message
// 0x0018
struct FYS_MessageBox_Message
{
	float                                              m_fTimeEndMessage;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sMessageContent;                                		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              m_fTimeStartFadeOut;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fMessageFade;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIObjectFilter.FilterCategories
// 0x0048
struct FFilterCategories
{
	TArray< struct FName >                             ExclFrontEnd;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ExclSP;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ExclMP;                                           		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             Excl360;                                          		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ExclPS3;                                          		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ExclPC;                                           		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIObjectFilter.FilterFlags
// 0x0004
struct FFilterFlags
{
	unsigned long                                      bIsFrontEnd : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsSP : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsMP : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIs360 : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsPS3 : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsPC : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct SRGame.YUIScene_ButtonTutorial.YS_TutorialButtons
// 0x0018
struct FYS_TutorialButtons
{
	struct FString                                     m_inputPerScheme[ 0x2 ];                          		// 0x0000 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIScene_HUD_Life_Base.YS_DBNOTeamDisplay
// 0x0010
struct FYS_DBNOTeamDisplay
{
	unsigned long                                      bIsInDbno : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              fBleedOutPercentage;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fRelativeAngle;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsCritical : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SRGame.YUIScene_HUD_Life_SP.YSquadCmdBlinkFrame
// 0x0014
struct FYSquadCmdBlinkFrame
{
	struct FLinearColor                                frameColor;                                       		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFrame;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SRGame.YUIScene_IngameCredits.YS_IngameCreditsDisplay
// 0x0008
struct FYS_IngameCreditsDisplay
{
	int                                                m_panelIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_textBlockIndex;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIScene_MatchSummary.TeamResults
// 0x0010
struct FTeamResults
{
	class UUILabel*                                    lblMaps[ 0x3 ];                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	class UUILabel*                                    lblTotalScore;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIScene_Statistics.YS_StatData
// 0x0018
struct FYS_StatData
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             callback;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIScene_Statistics.YS_StatRow
// 0x000C
struct FYS_StatRow
{
	class UUILabel*                                    lblNumber;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblName;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    lblValue;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIScene_Weapon.YS_GrenadeDisplay
// 0x0008
struct FYS_GrenadeDisplay
{
	class UUIImage*                                    m_background;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    m_icon;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIScoreboardPanel.YS_ScoreboardColumnData
// 0x0020
struct FYS_ScoreboardColumnData
{
	struct FPointer                                    m_pTextFont;                                      		// 0x0000 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FPointer                                    m_pTextColor[ 0x2 ];                              		// 0x0004 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FPointer                                    m_pGlowColor;                                     		// 0x000C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FPointer                                    m_pPlayerColor;                                   		// 0x0010 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FScriptDelegate                             m_InfoProvider;                                   		// 0x0014 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIScoreboardPanel.YS_ScoreboardColumn
// 0x0060
struct FYS_ScoreboardColumn
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	float                                              m_WidthPerc;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_TitleAlignment;                                 		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_DataAlignment;                                  		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_DataDisplayType;                                		// 0x0012 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FYS_ScoreboardColumnData                    m_data[ 0x2 ];                                    		// 0x0014 (0x0040) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              m_TitleLeftPos;                                   		// 0x0054 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              m_TitleRightPos;                                  		// 0x0058 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              m_TitleWidth;                                     		// 0x005C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SRGame.YUIScoreboardPanel.YS_ScoreboardFontData
// 0x0010
struct FYS_ScoreboardFontData
{
	class UFont*                                       m_font[ 0x2 ];                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_scale;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_height;                                         		// 0x000C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SRGame.YUIScoreboardPanel.YS_CellInputParams
// 0x0008
struct FYS_CellInputParams
{
	class UYScoreboardPlayerInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class ATeamInfo*                                   Team;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIScoreboardPanel.YS_RowSelectionParams
// 0x0008
struct FYS_RowSelectionParams
{
	unsigned long                                      m_bTargetOwner : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UYScoreboardPlayerInfo*                      m_target;                                         		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUIScoreboardPanel_KillsLeaderboard.YS_LeaderboardColumnData
// 0x0014
struct FYS_LeaderboardColumnData
{
	struct FPointer                                    m_pTextFont;                                      		// 0x0000 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FPointer                                    m_pTextColor;                                     		// 0x0004 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FScriptDelegate                             m_InfoProvider;                                   		// 0x0008 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SRGame.YUIScoreboardPanel_KillsLeaderboard.YS_LeaderboardColumn
// 0x0034
struct FYS_LeaderboardColumn
{
	struct FString                                     m_name;                                           		// 0x0000 (0x000C) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	float                                              m_WidthPerc;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_TitleAlignment;                                 		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_DataAlignment;                                  		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_DataDisplayType;                                		// 0x0012 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FYS_LeaderboardColumnData                   m_data;                                           		// 0x0014 (0x0014) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              m_TitleLeftPos;                                   		// 0x0028 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              m_TitleRightPos;                                  		// 0x002C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	float                                              m_TitleWidth;                                     		// 0x0030 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SRGame.YUIScoreboardPanel_KillsLeaderboard.YS_CellParams
// 0x0008
struct FYS_CellParams
{
	int                                                Row;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                column;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SRGame.YUIW_SelectMajorPerk.YS_MajorPerkAligment
// 0x0038
struct FYS_MajorPerkAligment
{
	float                                              m_fListTop;                                       		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fListBottom;                                    		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fPerkNameTop;                                   		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fPerkNameBottom;                                		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fDescriptionTop;                                		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fDescriptionBottom;                             		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fTitle1Top;                                     		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fTitle1Bottom;                                  		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fDescription1Top;                               		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fDescription1Bottom;                            		// 0x0024 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fTitle2Top;                                     		// 0x0028 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fTitle2Bottom;                                  		// 0x002C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fDescription2Top;                               		// 0x0030 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_fDescription2Bottom;                            		// 0x0034 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SRGame.YUnrealScriptStudioParserBuster.YS_GroupID
// 0x0004
struct FYS_GroupID
{
	unsigned char                                      m_groupID;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_subID;                                          		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_padding1;                                       		// 0x0002 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      m_padding2;                                       		// 0x0003 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SRGame.YUpperBodyIKHack.YS_BoneCopyInfo
// 0x0018
struct FYS_BoneCopyInfo
{
	struct FName                                       m_srcBoneName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_dstBoneName;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_srcBoneIndex;                                   		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_dstBoneIndex;                                   		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct SRGame.YWeapon_Shotgun.YS_SingleActorImpacts
// 0x003C
struct FYS_SingleActorImpacts
{
	class AActor*                                      m_hitActor;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_fracturedMeshItemIndex;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           m_traceStartLocs;                                 		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FImpactInfo >                       m_hitInfos;                                       		// 0x0014 (0x000C) [0x0000000000580000]              ( CPF_Component | CPF_NeedCtorLink )
	struct FVector                                     m_sumHitLocs;                                     		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              m_sumDmg;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                m_numHits;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_impactPriority;                                 		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_noImpactEffects : 1;                            		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SRGame.YWeapon_Shotgun.YS_RandomNumberTriplet
// 0x0010
struct FYS_RandomNumberTriplet
{
	int                                                m_first;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                m_scnd;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_third;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_divisor;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif