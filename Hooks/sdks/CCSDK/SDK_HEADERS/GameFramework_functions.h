/*
#############################################################################################
# CrimeCraft (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function GameFramework.GameExplosionActor.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameExplosionActor::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 33702 ];

	AGameExplosionActor_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionDamage ( )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 33701 ];

	AGameExplosionActor_execDoExplosionDamage_Parms DoExplosionDamage_Parms;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UGameExplosion*          NewExplosionTemplate           ( CPF_Parm )

void AGameExplosionActor::eventExplode ( class UGameExplosion* NewExplosionTemplate )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 33697 ];

	AGameExplosionActor_eventExplode_Parms Explode_Parms;
	Explode_Parms.NewExplosionTemplate = NewExplosionTemplate;

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionFogVolume ( )
{
	static UFunction* pFnSpawnExplosionFogVolume = NULL;

	if ( ! pFnSpawnExplosionFogVolume )
		pFnSpawnExplosionFogVolume = (UFunction*) UObject::GObjObjects()->Data[ 33696 ];

	AGameExplosionActor_execSpawnExplosionFogVolume_Parms SpawnExplosionFogVolume_Parms;

	this->ProcessEvent ( pFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraShakes
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::DoExplosionCameraShakes ( )
{
	static UFunction* pFnDoExplosionCameraShakes = NULL;

	if ( ! pFnDoExplosionCameraShakes )
		pFnDoExplosionCameraShakes = (UFunction*) UObject::GObjObjects()->Data[ 33695 ];

	AGameExplosionActor_execDoExplosionCameraShakes_Parms DoExplosionCameraShakes_Parms;

	this->ProcessEvent ( pFnDoExplosionCameraShakes, &DoExplosionCameraShakes_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionDecal ( )
{
	static UFunction* pFnSpawnExplosionDecal = NULL;

	if ( ! pFnSpawnExplosionDecal )
		pFnSpawnExplosionDecal = (UFunction*) UObject::GObjObjects()->Data[ 33694 ];

	AGameExplosionActor_execSpawnExplosionDecal_Parms SpawnExplosionDecal_Parms;

	this->ProcessEvent ( pFnSpawnExplosionDecal, &SpawnExplosionDecal_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
// Parameters infos:
// class UParticleSystem*         Template                       ( CPF_Parm )

void AGameExplosionActor::SpawnExplosionParticleSystem ( class UParticleSystem* Template )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 33692 ];

	AGameExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;
	SpawnExplosionParticleSystem_Parms.Template = Template;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial )
{
	static UFunction* pFnUpdateExplosionTemplateWithPerMaterialFX = NULL;

	if ( ! pFnUpdateExplosionTemplateWithPerMaterialFX )
		pFnUpdateExplosionTemplateWithPerMaterialFX = (UFunction*) UObject::GObjObjects()->Data[ 33690 ];

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms UpdateExplosionTemplateWithPerMaterialFX_Parms;
	UpdateExplosionTemplateWithPerMaterialFX_Parms.PhysMaterial = PhysMaterial;

	this->ProcessEvent ( pFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.KnockdownPawn
// [0x00080002] 
// Parameters infos:
// class AGamePawn*               Victim                         ( CPF_Parm )
// float                          DistFromExplosion              ( CPF_Parm )

void AGameExplosionActor::KnockdownPawn ( class AGamePawn* Victim, float DistFromExplosion )
{
	static UFunction* pFnKnockdownPawn = NULL;

	if ( ! pFnKnockdownPawn )
		pFnKnockdownPawn = (UFunction*) UObject::GObjObjects()->Data[ 33687 ];

	AGameExplosionActor_execKnockdownPawn_Parms KnockdownPawn_Parms;
	KnockdownPawn_Parms.Victim = Victim;
	KnockdownPawn_Parms.DistFromExplosion = DistFromExplosion;

	this->ProcessEvent ( pFnKnockdownPawn, &KnockdownPawn_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoCringesAndKnockdowns
// [0x00880002] 
// Parameters infos:

void AGameExplosionActor::DoCringesAndKnockdowns ( )
{
	static UFunction* pFnDoCringesAndKnockdowns = NULL;

	if ( ! pFnDoCringesAndKnockdowns )
		pFnDoCringesAndKnockdowns = (UFunction*) UObject::GObjObjects()->Data[ 33680 ];

	AGameExplosionActor_execDoCringesAndKnockdowns_Parms DoCringesAndKnockdowns_Parms;

	this->ProcessEvent ( pFnDoCringesAndKnockdowns, &DoCringesAndKnockdowns_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.ShouldDoCringeFor
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGamePawn*               Victim                         ( CPF_Parm )

bool AGameExplosionActor::ShouldDoCringeFor ( class AGamePawn* Victim )
{
	static UFunction* pFnShouldDoCringeFor = NULL;

	if ( ! pFnShouldDoCringeFor )
		pFnShouldDoCringeFor = (UFunction*) UObject::GObjObjects()->Data[ 33677 ];

	AGameExplosionActor_execShouldDoCringeFor_Parms ShouldDoCringeFor_Parms;
	ShouldDoCringeFor_Parms.Victim = Victim;

	this->ProcessEvent ( pFnShouldDoCringeFor, &ShouldDoCringeFor_Parms, NULL );

	return ShouldDoCringeFor_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoBreakFracturedMeshes
// [0x00080102] 
// Parameters infos:
// struct FVector                 ExploOrigin                    ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// float                          RBStrength                     ( CPF_Parm )
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameExplosionActor::DoBreakFracturedMeshes ( struct FVector ExploOrigin, float DamageRadius, float RBStrength, class UClass* dmgType )
{
	static UFunction* pFnDoBreakFracturedMeshes = NULL;

	if ( ! pFnDoBreakFracturedMeshes )
		pFnDoBreakFracturedMeshes = (UFunction*) UObject::GObjObjects()->Data[ 33670 ];

	AGameExplosionActor_execDoBreakFracturedMeshes_Parms DoBreakFracturedMeshes_Parms;
	memcpy ( &DoBreakFracturedMeshes_Parms.ExploOrigin, &ExploOrigin, 0xC );
	DoBreakFracturedMeshes_Parms.DamageRadius = DamageRadius;
	DoBreakFracturedMeshes_Parms.RBStrength = RBStrength;
	DoBreakFracturedMeshes_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnDoBreakFracturedMeshes, &DoBreakFracturedMeshes_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.HurtExplosion
// [0x00880103] ( FUNC_Final )
// Parameters infos:
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// float                          DamageFalloffExp               ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          MomentumScale                  ( CPF_Parm )
// struct FVector                 ExploOrigin                    ( CPF_Parm )
// class AActor*                  IgnoredActor                   ( CPF_Parm )
// class UClass*                  ActorClassToIgnoreForDamage    ( CPF_Parm )
// class AController*             InstigatedByController         ( CPF_Parm )
// unsigned long                  bDoFullDamage                  ( CPF_Parm )

void AGameExplosionActor::HurtExplosion ( float BaseDamage, float DamageRadius, float DamageFalloffExp, class UClass* DamageType, float MomentumScale, struct FVector ExploOrigin, class AActor* IgnoredActor, class UClass* ActorClassToIgnoreForDamage, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtExplosion = NULL;

	if ( ! pFnHurtExplosion )
		pFnHurtExplosion = (UFunction*) UObject::GObjObjects()->Data[ 33642 ];

	AGameExplosionActor_execHurtExplosion_Parms HurtExplosion_Parms;
	HurtExplosion_Parms.BaseDamage = BaseDamage;
	HurtExplosion_Parms.DamageRadius = DamageRadius;
	HurtExplosion_Parms.DamageFalloffExp = DamageFalloffExp;
	HurtExplosion_Parms.DamageType = DamageType;
	HurtExplosion_Parms.MomentumScale = MomentumScale;
	memcpy ( &HurtExplosion_Parms.ExploOrigin, &ExploOrigin, 0xC );
	HurtExplosion_Parms.IgnoredActor = IgnoredActor;
	HurtExplosion_Parms.ActorClassToIgnoreForDamage = ActorClassToIgnoreForDamage;
	HurtExplosion_Parms.InstigatedByController = InstigatedByController;
	HurtExplosion_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnHurtExplosion, &HurtExplosion_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_Parm )

bool AGameExplosionActor::DoFullDamageToActor ( class AActor* Victim )
{
	static UFunction* pFnDoFullDamageToActor = NULL;

	if ( ! pFnDoFullDamageToActor )
		pFnDoFullDamageToActor = (UFunction*) UObject::GObjObjects()->Data[ 33639 ];

	AGameExplosionActor_execDoFullDamageToActor_Parms DoFullDamageToActor_Parms;
	DoFullDamageToActor_Parms.Victim = Victim;

	this->ProcessEvent ( pFnDoFullDamageToActor, &DoFullDamageToActor_Parms, NULL );

	return DoFullDamageToActor_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
// Parameters infos:
// class UPhysicalMaterial*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial ( )
{
	static UFunction* pFnGetPhysicalMaterial = NULL;

	if ( ! pFnGetPhysicalMaterial )
		pFnGetPhysicalMaterial = (UFunction*) UObject::GObjObjects()->Data[ 33631 ];

	AGameExplosionActor_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

	this->ProcessEvent ( pFnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );

	return GetPhysicalMaterial_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameExplosionActor::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 33630 ];

	AGameExplosionActor_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function GameFramework.GameHUD.StopDrawingChapterTitle
// [0x00020102] 
// Parameters infos:

void AGameHUD::StopDrawingChapterTitle ( )
{
	static UFunction* pFnStopDrawingChapterTitle = NULL;

	if ( ! pFnStopDrawingChapterTitle )
		pFnStopDrawingChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 33721 ];

	AGameHUD_execStopDrawingChapterTitle_Parms StopDrawingChapterTitle_Parms;

	this->ProcessEvent ( pFnStopDrawingChapterTitle, &StopDrawingChapterTitle_Parms, NULL );
};

// Function GameFramework.GameHUD.StartDrawingChapterTitle
// [0x00020102] 
// Parameters infos:
// struct FString                 ChapterName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ActName                        ( CPF_Parm | CPF_NeedCtorLink )
// float                          TotalDrawTime                  ( CPF_Parm )
// float                          TotalFadeTime                  ( CPF_Parm )

void AGameHUD::StartDrawingChapterTitle ( struct FString ChapterName, struct FString ActName, float TotalDrawTime, float TotalFadeTime )
{
	static UFunction* pFnStartDrawingChapterTitle = NULL;

	if ( ! pFnStartDrawingChapterTitle )
		pFnStartDrawingChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 33716 ];

	AGameHUD_execStartDrawingChapterTitle_Parms StartDrawingChapterTitle_Parms;
	memcpy ( &StartDrawingChapterTitle_Parms.ChapterName, &ChapterName, 0xC );
	memcpy ( &StartDrawingChapterTitle_Parms.ActName, &ActName, 0xC );
	StartDrawingChapterTitle_Parms.TotalDrawTime = TotalDrawTime;
	StartDrawingChapterTitle_Parms.TotalFadeTime = TotalFadeTime;

	this->ProcessEvent ( pFnStartDrawingChapterTitle, &StartDrawingChapterTitle_Parms, NULL );
};

// Function GameFramework.GameHUD.SetHUDDrawColor
// [0x00024002] 
// Parameters infos:
// unsigned char                  eColor                         ( CPF_Parm )
// unsigned char                  Alpha                          ( CPF_OptionalParm | CPF_Parm )

void AGameHUD::SetHUDDrawColor ( unsigned char eColor, unsigned char Alpha )
{
	static UFunction* pFnSetHUDDrawColor = NULL;

	if ( ! pFnSetHUDDrawColor )
		pFnSetHUDDrawColor = (UFunction*) UObject::GObjObjects()->Data[ 33713 ];

	AGameHUD_execSetHUDDrawColor_Parms SetHUDDrawColor_Parms;
	SetHUDDrawColor_Parms.eColor = eColor;
	SetHUDDrawColor_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnSetHUDDrawColor, &SetHUDDrawColor_Parms, NULL );
};

// Function GameFramework.GamePawn.Cringe
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )

void AGamePawn::eventCringe ( float Duration )
{
	static UFunction* pFnCringe = NULL;

	if ( ! pFnCringe )
		pFnCringe = (UFunction*) UObject::GObjObjects()->Data[ 33734 ];

	AGamePawn_eventCringe_Parms Cringe_Parms;
	Cringe_Parms.Duration = Duration;

	this->ProcessEvent ( pFnCringe, &Cringe_Parms, NULL );
};

// Function GameFramework.GamePawn.ServerKnockdown
// [0x002240C0] 
// Parameters infos:
// struct FVector                 RBLinearVelocity               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 RBAngularVelocity              ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 RadialOrigin                   ( CPF_OptionalParm | CPF_Parm )
// float                          RadialRadius                   ( CPF_OptionalParm | CPF_Parm )
// float                          RadialStrength                 ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 PointImpulse                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 PointImpulsePosition           ( CPF_OptionalParm | CPF_Parm )
// struct FName                   PointImpulseBoneName           ( CPF_OptionalParm | CPF_Parm )

void AGamePawn::ServerKnockdown ( struct FVector RBLinearVelocity, struct FVector RBAngularVelocity, struct FVector RadialOrigin, float RadialRadius, float RadialStrength, struct FVector PointImpulse, struct FVector PointImpulsePosition, struct FName PointImpulseBoneName )
{
	static UFunction* pFnServerKnockdown = NULL;

	if ( ! pFnServerKnockdown )
		pFnServerKnockdown = (UFunction*) UObject::GObjObjects()->Data[ 33725 ];

	AGamePawn_execServerKnockdown_Parms ServerKnockdown_Parms;
	memcpy ( &ServerKnockdown_Parms.RBLinearVelocity, &RBLinearVelocity, 0xC );
	memcpy ( &ServerKnockdown_Parms.RBAngularVelocity, &RBAngularVelocity, 0xC );
	memcpy ( &ServerKnockdown_Parms.RadialOrigin, &RadialOrigin, 0xC );
	ServerKnockdown_Parms.RadialRadius = RadialRadius;
	ServerKnockdown_Parms.RadialStrength = RadialStrength;
	memcpy ( &ServerKnockdown_Parms.PointImpulse, &PointImpulse, 0xC );
	memcpy ( &ServerKnockdown_Parms.PointImpulsePosition, &PointImpulsePosition, 0xC );
	memcpy ( &ServerKnockdown_Parms.PointImpulseBoneName, &PointImpulseBoneName, 0x8 );

	this->ProcessEvent ( pFnServerKnockdown, &ServerKnockdown_Parms, NULL );
};

// Function GameFramework.GamePawn.GetTargetFrictionCylinder
// [0x00420102] 
// Parameters infos:
// float                          CylinderRadius                 ( CPF_Parm | CPF_OutParm )
// float                          CylinderHeight                 ( CPF_Parm | CPF_OutParm )

void AGamePawn::GetTargetFrictionCylinder ( float* CylinderRadius, float* CylinderHeight )
{
	static UFunction* pFnGetTargetFrictionCylinder = NULL;

	if ( ! pFnGetTargetFrictionCylinder )
		pFnGetTargetFrictionCylinder = (UFunction*) UObject::GObjObjects()->Data[ 33722 ];

	AGamePawn_execGetTargetFrictionCylinder_Parms GetTargetFrictionCylinder_Parms;

	this->ProcessEvent ( pFnGetTargetFrictionCylinder, &GetTargetFrictionCylinder_Parms, NULL );

	if ( CylinderRadius )
		*CylinderRadius = GetTargetFrictionCylinder_Parms.CylinderRadius;

	if ( CylinderHeight )
		*CylinderHeight = GetTargetFrictionCylinder_Parms.CylinderHeight;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif