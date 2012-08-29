/*
#############################################################################################
# Sanctum (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Sanctum_structs.h
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

// ScriptStruct Sanctum.SanctumGameReplicationInfo.WeaponData
// 0x0008
struct FWeaponData
{
	class ASanctumWeapon*                              Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumPawn.GibInfo
// 0x0010
struct FGibInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      GibClass;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHighDetailOnly : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Sanctum.SanctumPawn.SlowDownStruct
// 0x0010
struct FSlowDownStruct
{
	class AActor*                                      SlowedBy;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SlowRate;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              OriginalSlowRate;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DiminishFactor;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumPawn.DamageMultiplierData
// 0x0008
struct FDamageMultiplierData
{
	class AActor*                                      MultipliedBy;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Multiplier;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumAudioManager.ComponentChannels
// 0x0008
struct FComponentChannels
{
	class UAudioComponent*                             Component;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                Channels;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumAudioManager.SoundInstace
// 0x0010
struct FSoundInstace
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumAudioManager.SoundInfo
// 0x0014
struct FSoundInfo
{
	class USoundCue*                                   Cue;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             Component;                                        		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FSoundInstace >                     Instances;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumChristmasPresent.InitialPackage
// 0x0010
struct FInitialPackage
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MeshId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumChristmasPresent.RestingStateForPackage
// 0x0018
struct FRestingStateForPackage
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumController.LobbyFilters
// 0x002C
struct FLobbyFilters
{
	struct FString                                     Map;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Difficulty;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     addon;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxPlayers;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      turbo : 1;                                        		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      hideFullGames : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Sanctum.SanctumPlayerReplicationInfo.TowerCountStruct
// 0x0008
struct FTowerCountStruct
{
	class UClass*                                      Tower;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumSapituGame.WeaponStruct
// 0x0014
struct FWeaponStruct
{
	struct FString                                     mType;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mLevel;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              mEquipTime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumSapituGame.TowerStruct
// 0x0028
struct FTowerStruct
{
	struct FString                                     mType;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mLevel;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       mBaseName;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                TotalDamage;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                lastWaveDamage;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TotalKills;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                lastWaveKills;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumSapituGame.FavouriteTowerStruct
// 0x0010
struct FFavouriteTowerStruct
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Tower;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumGlobals.GameAddonStruct
// 0x0010
struct FGameAddonStruct
{
	unsigned char                                      ModeEnum;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumEnemy.SanctumTakeHitInfo
// 0x0025
struct FSanctumTakeHitInfo
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	class AActor*                                      DamageCauser;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      Flags;                                            		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumWeaponShotgun.PawnHitInfo
// 0x006C
struct FPawnHitInfo
{
	class ASanctumPawn*                                HitPawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           HitLocations;                                     		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FImpactInfo                                 Impact;                                           		// 0x0010 (0x0050) [0x0000000000080000]              ( CPF_Component )
	TArray< float >                                    CurrentMultiplier;                                		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumWaveSpawner.EnemyConfig
// 0x001C
struct FEnemyConfig
{
	int                                                NumberOfEnemies;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ASanctumEnemy*                               EnemyArchetype;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnStartTime;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnCooldown;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      SpawnLocations;                                   		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumFreezeObject.DiminishStruct
// 0x0010
struct FDiminishStruct
{
	float                                              freezeTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      Active : 1;                                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DiminishFactor;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DiminishTimeRemaining;                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumGameReplicationInfo.PlayerSlot
// 0x0008
struct FPlayerSlot
{
	class ASanctumController*                          Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Rubel;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumGameReplicationInfo.WaveInformation
// 0x0010
struct FWaveInformation
{
	int                                                WaveEnemies[ 0x3 ];                               		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                WaveNumber;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumGameReplicationInfo.WaveData
// 0x0010
struct FWaveData
{
	int                                                Wave;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Hash;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumGameReplicationInfo.ListenerInfo
// 0x0010
struct FListenerInfo
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             Listener;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumGameReplicationInfo.DPSKingInfo
// 0x0014
struct FDPSKingInfo
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DPS;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SlotNumber;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumWikiObject.WikiListCreatures
// 0x0044
struct FWikiListCreatures
{
	struct FString                                     LocalizedName;                                    		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc1;                                            		// 0x0018 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Desc2;                                            		// 0x0024 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Desc3;                                            		// 0x0030 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTexture2D*                                  DisplayImage;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  QuickDisplayImage;                                		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumGib.StaticMeshDatum
// 0x0014
struct FStaticMeshDatum
{
	class UStaticMesh*                                 TheStaticMesh;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	class USkeletalMesh*                               TheSkelMesh;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               ThePhysAsset;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DrawScale;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseSecondaryGibMeshMITV : 1;                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Sanctum.SanctumGlobals.StatInfoStruct
// 0x00AC
struct FStatInfoStruct
{
	int                                                numFields;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           Description;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           stat;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Next;                                             		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           shared;                                           		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     currentLabel;                                     		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     nextLabel;                                        		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Rank;                                             		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconName;                                         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TotalKillsDesc;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TotalKills;                                       		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TotalDamage;                                      		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastKillsDesc;                                    		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastKills;                                        		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LastDamage;                                       		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumWeaponShotgun.PelletInfo
// 0x000C
struct FPelletInfo
{
	TArray< class ASanctumTowerBaseAttachmentHolo* >   PassedThroughHolos;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumHUD.PopupSequence
// 0x003C
struct FPopupSequence
{
	struct FString                                     SequenceId;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     header;                                           		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0018 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Footer;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExitCommand;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumHUD.ArrowInfo
// 0x000C
struct FArrowInfo
{
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TotalTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      PulseDone : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Sanctum.SanctumHUDGFxCircle.RewardInfoStruct
// 0x000C
struct FRewardInfoStruct
{
	int                                                rubelsToReward;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WaveNumber;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxWaveNumber;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumHUDGFxAction.weaponInfo
// 0x0010
struct FweaponInfo
{
	class ASanctumWeapon*                              Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      UsingAmmo : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Sanctum.SanctumWeaponBuildGun.TowerData
// 0x0008
struct FTowerData
{
	class UClass*                                      Tower;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumWeaponBuildGun.DataForWeapon
// 0x0008
struct FDataForWeapon
{
	class UClass*                                      Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumHUDGFxCircle.Sound
// 0x0010
struct USanctumHUDGFxCircle_FSound
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   Sound;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumHUDGFxCircle.SelectArray
// 0x0014
struct FSelectArray
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      ReliesOnBlock : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Sanctum.SanctumHUDGFxCircle.TowerInfoStruct
// 0x0060
struct FTowerInfoStruct
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     damageDiff;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     speedDiff;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     rangeDiff;                                        		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      MAXUPGRADED : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Cost;                                             		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     lastState;                                        		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                currentTowerDamageTotal;                          		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                currentTowerDamageLast;                           		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                currentTowerKillsLast;                            		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                currentTowerKillsTotal;                           		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumHUDGFxCircle.TutorialHUDVisible
// 0x0004
struct FTutorialHUDVisible
{
	unsigned long                                      life : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Resources : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Enemies : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      Build : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      Notifier : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct Sanctum.SanctumHUDGFxCircle.StatComponent
// 0x002C
struct FStatComponent
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     instancename;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                XPos;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                YPos;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumHUDGFxEquipmentSelection.OtherPlayersEQ
// 0x0020
struct FOtherPlayersEQ
{
	class UGFxObject*                                  PlayerName;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  OtherPlayerGrp;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        OtherPlayerWeaponIcons;                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        OtherPlayerTowerIcons;                            		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumHUDGFxEquipmentSelection.BufferedTowers
// 0x0030
struct FBufferedTowers
{
	class UClass*                                      TowerArray[ 0x8 ];                                		// 0x0000 (0x0020) [0x0000000000000000]              
	int                                                SlotNumber;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumHUDGFxEquipmentSelection.BufferedWeapons
// 0x001C
struct FBufferedWeapons
{
	class UClass*                                      WeaponArray[ 0x3 ];                               		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                SlotNumber;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumWikiObject.WikiList
// 0x0050
struct FWikiList
{
	int                                                StatScale1;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StatScale2;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                StatScale3;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     LocalizedName;                                    		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Desc1;                                            		// 0x0018 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Desc2;                                            		// 0x0024 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Desc3;                                            		// 0x0030 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture2D*                                  DisplayImage;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DisplayImageEQ;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumHUDGfxStatScreen.Stats
// 0x0018
struct FStats
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           entrys;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumInventoryManager.FavouriteWeaponStruct
// 0x0010
struct FFavouriteWeaponStruct
{
	class UClass*                                      WeaponClass;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastEquipTimeStamp;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TotalEquipTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      Equipped : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Sanctum.SanctumKeybindDefaults.DefKeys
// 0x0018
struct FDefKeys
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumLocalizationHelper.LocalizedUIContent
// 0x0018
struct FLocalizedUIContent
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumLocalizationHelper.LocalizedLanguage
// 0x0018
struct FLocalizedLanguage
{
	struct FString                                     CountryID;                                        		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumMainMenu.Sound
// 0x0010
struct USanctumMainMenu_FSound
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   Sound;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumMainMenu.KeyNames
// 0x0018
struct FKeyNames
{
	struct FString                                     DisplayName;                                      		// 0x0000 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Filename;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumWikiObject.WaveInfo
// 0x0018
struct USanctumWikiObject_FWaveInfo
{
	TArray< struct FWikiListCreatures >                Enemies;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WaveName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumSystemSettings.GraphicsSettings
// 0x0060
struct FGraphicsSettings
{
	int                                                ResX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ResY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      UseMaxQualityMode : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      AllowStaticDecals : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      AllowDynamicDecals : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      AllowDynamicLights : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      UseCompositeDynamicLights : 1;                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      AllowMotionBlur : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      AllowDepthOfField : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      AllowAmbientOcclusion : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      AllowBloom : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      AllowLightShafts : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      AllowDistortion : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      AllowFilteredDistortion : 1;                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      AllowFogVolumes : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      AllowOneFrameThreadLag : 1;                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      AllowRadialBlur : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      AllowImageReflections : 1;                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      AllowImageReflectionShadowing : 1;                		// 0x0008 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      AllowD3D9MSAA : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00020000] 
	int                                                MaxMultiSamples;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      VSync : 1;                                        		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Fullscreen : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAllowDynamicShadows : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAllowLightEnvironmentShadows : 1;                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                ShadowFilterQualityBias;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MinShadowResolution;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MinPreShadowResolution;                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaxShadowResolution;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MaxWholeSceneDominantShadowResolution;            		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              ShadowTexelsPerPixel;                             		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              PreShadowResolutionFactor;                        		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnableBranchingPCFShadows : 1;                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowHardwareShadowFiltering : 1;                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAllowBetterModulatedShadows : 1;                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEnableForegroundShadowsOnWorld : 1;              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bEnableForegroundSelfShadowing : 1;               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAllowWholeSceneDominantShadows : 1;              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              ShadowFilterRadius;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              ShadowDepthBias;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              CSMSplitPenumbraScale;                            		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              CSMSplitSoftTransitionDistanceScale;              		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              CSMSplitDepthBiasScale;                           		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              UnbuiltWholeSceneDynamicShadowRadius;             		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                UnbuiltNumWholeSceneDynamicShadowCascades;        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                WholeSceneShadowUnbuiltInteractionThreshold;      		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                ShadowFadeResolution;                             		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                PreShadowFadeResolution;                          		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              ShadowFadeExponent;                               		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumPawnSoundGroup.FootstepSoundInfo
// 0x000C
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   Sound;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumPlayerController.StatData
// 0x0008
struct FStatData
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                StatValueDiff;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumPlayerController.PartyData
// 0x001C
struct FPartyData
{
	int                                                counterValue;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      playerColor;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsReady : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Sanctum.SanctumPlayerController.WaveHashData
// 0x0010
struct FWaveHashData
{
	int                                                LastCompletedWave;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Hash;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumPlayerInput.TempKeyBind
// 0x0014
struct FTempKeyBind
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumSapitu.StarMapMapping
// 0x0010
struct FStarMapMapping
{
	int                                                stars;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumSapitu.BestWaveStruct
// 0x0014
struct FBestWaveStruct
{
	struct FString                                     MapName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Difficulty;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Wave;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumSapituGlobal.AchievementMapMapping
// 0x0008
struct FAchievementMapMapping
{
	int                                                Insane;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Complete;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumWaveSpawner.WaveConfig
// 0x000C
struct FWaveConfig
{
	TArray< struct FEnemyConfig >                      Enemies;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumTowerBaseAttachment.StringPair
// 0x0018
struct FStringPair
{
	struct FString                                     dataDesc;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumTowerBaseAttachment.InfoHolder
// 0x000C
struct FInfoHolder
{
	TArray< struct FStringPair >                       Entry;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumTowerBaseAttachmentWeaponLightning.JumpInfo
// 0x0018
struct FJumpInfo
{
	struct FVector                                     From;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     to;                                               		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumTowerBaseAttachmentWeaponPenetrator.TargetInfo
// 0x0030
struct FTargetInfo
{
	class ASanctumEnemy*                               Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0004 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FVector                                     HitLocation;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
	float                                              damageMultiplier;                                 		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumWaveSpawner.Reward
// 0x0004
struct FReward
{
	int                                                Cash;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Sanctum.SanctumWavespawnerEndless.EnemyConfigEndless
// 0x0010
struct FEnemyConfigEndless
{
	class ASanctumEnemy*                               EnemyArchetype;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      SpawnLocations;                                   		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Sanctum.SanctumWavespawnerEndless.WaveInfo
// 0x0010
struct ASanctumWavespawnerEndless_FWaveInfo
{
	TArray< struct FEnemyConfig >                      Enemies;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                waveNr;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Sanctum.SanctumWavespawnerEndless.TestData
// 0x000C
struct FTestData
{
	int                                                NumChosen;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASanctumEnemy*                               Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Probability;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif