#include "Framework\Framework.h"
#include "Framework\UE3\IsVisible.h"

bool IsVisible::FastTrace( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation )
{
	//FVector HitLocation, HitNormal;
	//FTraceHitInfo HitInfo;

	//return( TargetPawn == Controller->Trace(
	//	EndLocation,
	//	StartLocation,
	//	true,
	//	VectorZero,
	//	0,
	//	&HitLocation,
	//	&HitNormal,
	//	&HitInfo) );
}

bool IsVisible::Visible( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation )
{	
	FVector vHeadBone;	
	vHeadBone = WorldToScreen::BRBones(EndLocation, TargetPawn);

	return FastTrace( Controller, TargetPawn, StartLocation, vHeadBone );
}