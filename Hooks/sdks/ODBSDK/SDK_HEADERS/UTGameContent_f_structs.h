/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UTGameContent_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function UTGameContent.UTCTFMessage.ShouldBeRemoved
// [0x00022002] 
struct UUTCTFMessage_execShouldBeRemoved_Parms
{
	class AUTQueuedAnnouncement*                       MyAnnouncement;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      NewAnnouncementClass;                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewMessageIndex;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTCTFBlueFlag.PostBeginPlay
// [0x00020102] 
struct AUTCTFBlueFlag_execPostBeginPlay_Parms
{
};

// Function UTGameContent.UTCTFRedFlag.PostBeginPlay
// [0x00020102] 
struct AUTCTFRedFlag_execPostBeginPlay_Parms
{
};

// Function UTGameContent.UTTeamScoreMessage.GetColor
// [0x00026002] 
struct UUTTeamScoreMessage_execGetColor_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FColor                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTTeamScoreMessage.GetString
// [0x00026002] 
struct UUTTeamScoreMessage_execGetString_Parms
{
	int                                                Switch;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPRI1HUD : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function UTGameContent.UTTeamScoreMessage.AnnouncementSound
// [0x00022002] 
struct UUTTeamScoreMessage_execAnnouncementSound_Parms
{
	int                                                MessageIndex;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USoundNodeWave*                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTTeamScoreMessage.ClientReceive
// [0x00026102] 
struct UUTTeamScoreMessage_execClientReceive_Parms
{
	class APlayerController*                           P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Switch;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class APlayerReplicationInfo*                      RelatedPRI01;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UObject*                                     OptionalObject;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AUTHUD*                                   HUD;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTTeamScoreMessage.AnnouncementLevel
// [0x00022002] 
struct UUTTeamScoreMessage_execAnnouncementLevel_Parms
{
	unsigned char                                      MessageIndex;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTVWeap_CicadaTurret.ProjectileFire
// [0x00020102] 
struct AUTVWeap_CicadaTurret_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTDecoy*                                 D;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AUTVehicle_Cicada_Content*                V;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTVWeap_CicadaTurret.GetAdjustedAim
// [0x00820102] 
struct AUTVWeap_CicadaTurret_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Result;                                           		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function UTGameContent.UTVWeap_CicadaTurret.IncomingMissile
// [0x00020102] 
struct AUTVWeap_CicadaTurret_execIncomingMissile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTVWeap_CicadaTurret.AddMissile
// [0x00020102] 
struct AUTVWeap_CicadaTurret_execAddMissile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTDecoy.Landed
// [0x00020102] 
struct AUTDecoy_execLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTDecoy.Destroyed
// [0x00020902] ( FUNC_Event )
struct AUTDecoy_eventDestroyed_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTDecoy.CheckRange
// [0x00020002] 
struct AUTDecoy_execCheckRange_Parms
{
	class AActor*                                      Aggressor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTVehicle_Cicada_Content.IncomingMissile
// [0x00020002] 
struct AUTVehicle_Cicada_Content_execIncomingMissile_Parms
{
	class AProjectile*                                 P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVWeap_CicadaTurret*                    Turret;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTVehicle_Cicada_Content.PostBeginPlay
// [0x00020102] 
struct AUTVehicle_Cicada_Content_execPostBeginPlay_Parms
{
};

// Function UTGameContent.UTDmgType_CicadaLaser.ScoreKill
// [0x00022002] 
struct UUTDmgType_CicadaLaser_execScoreKill_Parms
{
	class AUTPlayerReplicationInfo*                    KillerPRI;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerReplicationInfo*                    KilledPRI;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTProj_Shockball.Monitor
// [0x00020002] 
struct AUTProj_Shockball_execMonitor_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTProj_Shockball.TakeDamage
// [0x00024802] ( FUNC_Event )
struct AUTProj_Shockball_eventTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function UTGameContent.UTProj_Shockball.ProcessTouch
// [0x00020102] 
struct AUTProj_Shockball_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AUTProj_Shockball*                        ShockProj;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTProj_Shockball.ComboExplosion
// [0x00020002] 
struct AUTProj_Shockball_execComboExplosion_Parms
{
};

// Function UTGameContent.UTProj_Shockball.CreateProjectileLight
// [0x00020902] ( FUNC_Event )
struct AUTProj_Shockball_eventCreateProjectileLight_Parms
{
};

// Function UTGameContent.UTProj_Shockball.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct AUTProj_Shockball_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTAttachment_ShockRifle.SetMuzzleFlashParams
// [0x00020102] 
struct AUTAttachment_ShockRifle_execSetMuzzleFlashParams_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           PathValues[ 0x3 ];                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// int                                             NewPath;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTAttachment_ShockRifle.AllowImpactEffects
// [0x00020102] 
struct AUTAttachment_ShockRifle_execAllowImpactEffects_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTAttachment_ShockRifle.ThirdPersonFireEffects
// [0x00020102] 
struct AUTAttachment_ShockRifle_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTAttachment_ShockRifle.FirstPersonFireEffects
// [0x00820102] 
struct AUTAttachment_ShockRifle_execFirstPersonFireEffects_Parms
{
	class AWeapon*                                     PawnWeapon;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  EffectLocation;                                   		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function UTGameContent.UTAttachment_ShockRifle.SpawnBeam
// [0x00820102] 
struct AUTAttachment_ShockRifle_execSpawnBeam_Parms
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstPerson : 1;                                 		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UParticleSystemComponent*                 E;                                                		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AActor*                                   HitActor;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.PlayFireEffects
// [0x00024102] 
struct AUTWeap_ShockRifle_execPlayFireEffects_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function UTGameContent.UTWeap_ShockRifle.SetMuzzleFlashParams
// [0x00020102] 
struct AUTWeap_ShockRifle_execSetMuzzleFlashParams_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           PathValues[ 0x3 ];                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// int                                             NewPath;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.SetFlashLocation
// [0x00020002] 
struct AUTWeap_ShockRifle_execSetFlashLocation_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   NewFireMode;                                      		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.CalcWeaponFire
// [0x00C24102] 
struct AUTWeap_ShockRifle_execCalcWeaponFire_Parms
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FImpactInfo >                       ImpactList;                                       		// 0x0018 (0x000C) [0x0000000000400190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FVector                                     Extent;                                           		// 0x0024 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FImpactInfo                                 ReturnValue;                                      		// 0x0030 (0x0050) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FImpactInfo                              II;                                               		// 0x0080 (0x0050) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.GetAdjustedAim
// [0x00820102] 
struct AUTWeap_ShockRifle_execGetAdjustedAim_Parms
{
	struct FVector                                     StartFireLoc;                                     		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 ComboAim;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.ProjectileFire
// [0x00020102] 
struct AUTWeap_ShockRifle_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AProjectile*                              P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.BestMode
// [0x00020002] 
struct AUTWeap_ShockRifle_execBestMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           enemyDist;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AUTBot*                                   B;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.ClearCombo
// [0x00020002] 
struct AUTWeap_ShockRifle_execClearCombo_Parms
{
};

// Function UTGameContent.UTWeap_ShockRifle.DoCombo
// [0x00020002] 
struct AUTWeap_ShockRifle_execDoCombo_Parms
{
};

// Function UTGameContent.UTWeap_ShockRifle.StartFire
// [0x00020102] 
struct AUTWeap_ShockRifle_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTWeap_ShockRifle.SuggestAttackStyle
// [0x00020002] 
struct AUTWeap_ShockRifle_execSuggestAttackStyle_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTWeap_ShockRifle.RangedAttackTime
// [0x00020002] 
struct AUTWeap_ShockRifle_execRangedAttackTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTWeap_ShockRifle.SetComboTarget
// [0x00020002] 
struct AUTWeap_ShockRifle_execSetComboTarget_Parms
{
	class AUTProj_Shockball*                           S;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTWeap_ShockRifle.InstantFireStartTrace
// [0x00020102] 
struct AUTWeap_ShockRifle_execInstantFireStartTrace_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTWeap_ShockRifle.GetAIRating
// [0x00020002] 
struct AUTWeap_ShockRifle_execGetAIRating_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTBot*                                   B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTDmgType_CicadaRocket.ScoreKill
// [0x00022002] 
struct UUTDmgType_CicadaRocket_execScoreKill_Parms
{
	class AUTPlayerReplicationInfo*                    KillerPRI;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AUTPlayerReplicationInfo*                    KilledPRI;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.DrawLoadedCrosshair
// [0x00820102] 
struct AUTVWeap_CicadaMissileLauncher_execDrawLoadedCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           CX;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           CY;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           CenterSize;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           XAdj;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           Alpha;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           U;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           V;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// class AUTHUDBase*                               H;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FColor                                   Gray;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.DrawTarget
// [0x00020100] 
struct AUTVWeap_CicadaMissileLauncher_execDrawTarget_Parms
{
	class AUTHUDBase*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.DrawBrackets
// [0x00020100] 
struct AUTVWeap_CicadaMissileLauncher_execDrawBrackets_Parms
{
	class AUTHUDBase*                                  H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CX;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              CY;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.FireLoadedRocket
// [0x00020000] 
struct AUTVWeap_CicadaMissileLauncher_execFireLoadedRocket_Parms
{
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.BestMode
// [0x00020002] 
struct AUTVWeap_CicadaMissileLauncher_execBestMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.ProjectileFire
// [0x00820102] 
struct AUTVWeap_CicadaMissileLauncher_execProjectileFire_Parms
{
	class AProjectile*                                 ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AUTProj_CicadaRocket*                     P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Aim;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AccelAdjustment;                                  		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CrossVec;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           TargetDist;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// float                                           LockedDist;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.CustomFire
// [0x00020102] 
struct AUTVWeap_CicadaMissileLauncher_execCustomFire_Parms
{
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.FindInitialTarget
// [0x00820002] 
struct AUTVWeap_CicadaMissileLauncher_execFindInitialTarget_Parms
{
	unsigned long                                      bAdjustUp : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FVector                                     AdjustLoc;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  End;                                              		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Start;                                            		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Dir;                                              		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.GetAmmoCount
// [0x00020102] 
struct AUTVWeap_CicadaMissileLauncher_execGetAmmoCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.CanHitDesiredTarget
// [0x00420102] 
struct AUTVWeap_CicadaMissileLauncher_execCanHitDesiredTarget_Parms
{
	struct FVector                                     SocketLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    SocketRotation;                                   		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DesiredAimPoint;                                  		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TargetActor;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RealAimPoint;                                     		// 0x0028 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.IsAimCorrect
// [0x00020102] 
struct AUTVWeap_CicadaMissileLauncher_execIsAimCorrect_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function UTGameContent.UTProj_CicadaRocket.Explode
// [0x00020102] 
struct AUTProj_CicadaRocket_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTProj_CicadaRocket.ProcessTouch
// [0x00020102] 
struct AUTProj_CicadaRocket_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTProj_CicadaRocket.Landed
// [0x00020102] 
struct AUTProj_CicadaRocket_execLanded_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FloorActor;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTProj_CicadaRocket.Ignite
// [0x00020102] 
struct AUTProj_CicadaRocket_execIgnite_Parms
{
};

// Function UTGameContent.UTProj_CicadaRocket.ChangeTarget
// [0x00020102] 
struct AUTProj_CicadaRocket_execChangeTarget_Parms
{
};

// Function UTGameContent.UTProj_CicadaRocket.ArmMissile
// [0x00020002] 
struct AUTProj_CicadaRocket_execArmMissile_Parms
{
	struct FVector                                     InitAccel;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InitVelocity;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Dist;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function UTGameContent.UTProj_CicadaRocket.Init
// [0x00020000] 
struct AUTProj_CicadaRocket_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function UTGameContent.UTProj_CicadaRocket.ReplicatedEvent
// [0x00020102] 
struct AUTProj_CicadaRocket_execReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif