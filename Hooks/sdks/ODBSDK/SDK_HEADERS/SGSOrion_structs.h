/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SGSOrion_structs.h
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

// ScriptStruct SGSOrion.SGS_AutoTurret.TurretSoundGroup
// 0x0018
struct ASGS_AutoTurret_FTurretSoundGroup
{
	class USoundCue*                                   FireSound;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DamageSound;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SpinUpSound;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WakeSound;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SleepSound;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeathSound;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGSOrion.SGS_AutoTurret.TurretEmitterGroup
// 0x001C
struct ASGS_AutoTurret_FTurretEmitterGroup
{
	class UParticleSystem*                             DamageEmitter;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             MuzzleFlashEmitter;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             DestroyEmitter;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MuzzleFlashDuration;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageEmitterParamName;                           		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStopDamageEmitterOnDeath : 1;                    		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SGSOrion.SGS_Controller_Dino.Damagers
// 0x0008
struct FDamagers
{
	class ASGS_Controller_Player*                      Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_Controller_Dino.HatedActor
// 0x000C
struct FHatedActor
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Hate;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastHateTime;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_FamilyInfo_Dino.DinoAttack
// 0x000C
struct FDinoAttack
{
	struct FName                                       Anim;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bTopHalfOnly : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLegsOnly : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStopMovment : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverride : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLooping : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct SGSOrion.SGS_GameReplicationInfo.ReplicatedCapturePointInfo
// 0x001C
struct FReplicatedCapturePointInfo
{
	struct FName                                       CapturePointName;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                Percent;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TeamIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_DBMainMenu.FlashAchievementData
// 0x0018
struct FFlashAchievementData
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SGSOrion.SGS_DinoSurvivalSettings.WaveInfo
// 0x0010
struct FWaveInfo
{
	int                                                BaseIndex;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                numRaptor;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                numTrex;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                numRham;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGSOrion.SGS_Game.DSquad
// 0x0008
struct FDSquad
{
	class ASGController_Bot*                           Leader;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_GameReplicationInfo.ReplicatedBaseInfo
// 0x001C
struct FReplicatedBaseInfo
{
	struct FName                                       BaseName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                BaseIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      BaseComplete : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SGSOrion.SGS_GFxFrontEnd.ViewInfo
// 0x0020
struct USGS_GFxFrontEnd_FViewInfo
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SWFName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             DependantViews;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SGSOrion.SGS_GFxFrontEnd_FilterDialog.Option
// 0x0024
struct USGS_GFxFrontEnd_FilterDialog_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           OptionData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SGSOrion.SGS_GFxFrontEnd_LaunchGame.Option
// 0x0024
struct USGS_GFxFrontEnd_LaunchGame_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SGSOrion.SGS_GFxFrontEnd_MainMenu.Option
// 0x0024
struct USGS_GFxFrontEnd_MainMenu_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SGSOrion.SGS_GFxFrontEnd_Multiplayer.Option
// 0x0024
struct USGS_GFxFrontEnd_Multiplayer_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SGSOrion.SGS_GFXHud.AwarenessInfo
// 0x0024
struct FAwarenessInfo
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mc2;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  radar;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      alwaysshow : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Location;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_GFXHud.ObjectiveDesc
// 0x0018
struct FObjectiveDesc
{
	class UGFxObject*                                  Thubnail;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Owner;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     pos;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  Texture;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_GFXHud.HudMessage
// 0x0054
struct FHudMessage
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeExpires;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	struct FASColorTransform                           sColor;                                           		// 0x0010 (0x0020) [0x0000000000000000]              
	struct FASColorTransform                           bColor;                                           		// 0x0030 (0x0020) [0x0000000000000000]              
	unsigned long                                      bPermanent : 1;                                   		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SGSOrion.SGS_GFXHud.TeamScoreState
// 0x000C
struct FTeamScoreState
{
	int                                                ScoreTotal;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MyScore;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EnemyScore;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_GFXHud.ScoreboardState
// 0x0024
struct USGS_GFXHud_FScoreboardState
{
	int                                                RemainingTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CarrierScore;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AltairScore;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      PlayerPlace;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	float                                              PlayerScore;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                PlayerDeaths;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGSOrion.SGS_MapMusicInfo.MusicArrangement
// 0x0060
struct FMusicArrangement
{
	struct FMusicSegment                               Intro;                                            		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FMusicSegment                               Ambient;                                          		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FMusicSegment                               Tension;                                          		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FMusicSegment                               Action_Winning;                                   		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FMusicSegment                               Action_Loosing;                                   		// 0x0040 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FMusicSegment                               Ending;                                           		// 0x0050 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif