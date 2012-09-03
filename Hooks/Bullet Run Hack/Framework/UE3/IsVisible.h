class IsVisible
{
public:
	static bool IsVisible::FastTrace( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation )
	{
		FVector HitLocation, HitNormal;
		FTraceHitInfo HitInfo;

		return ( TargetPawn == Controller->Trace(
			EndLocation,
			StartLocation,
			true,
			VectorZero,
			0,
			&HitLocation,
			&HitNormal,
			&HitInfo) );
	}

#ifdef APBSDK
	static AActor* IsVisible::FastTraceAPB( AcAPBPlayerController* Controller, AcAPBPlayerController* TargetController, FVector& StartLocation, FVector& EndLocation )
	{
		FVector HitLocation, HitNormal;
		FTraceHitInfo HitInfo;

		AActor* bTrace = Controller->Trace(
			EndLocation,
			StartLocation,
			true,
			VectorZero,
			0,
			&HitLocation,
			&HitNormal,
			&HitInfo);

		return bTrace;
	}
#endif

	static bool IsVisible::Visible( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation )
	{	
		FVector vHeadBone;	
		vHeadBone = WorldToScreen::BRBones(EndLocation, TargetPawn);

		return FastTrace( Controller, TargetPawn, StartLocation, vHeadBone );
	}
};