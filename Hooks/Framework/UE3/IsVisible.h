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
	static bool IsVisible::FastTraceAPB( AcAPBPlayerController* Controller, AcAPBPlayerController* TargetController, FVector& StartLocation, FVector& EndLocation )
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

		return (TargetController->m_CurrentTarget == bTrace);
	}
#endif

	static bool IsVisible::Visible( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation )
	{	
			FVector vHeadBone;
			
#ifdef BRSDK
			vHeadBone = WorldToScreen::BRBones(EndLocation, TargetPawn);
#endif

#ifdef GASDK || TASDK || CCSDK || APBSDK	
			vHeadBone = EndLocation;
#endif

		return FastTrace( Controller, TargetPawn, StartLocation, vHeadBone );
	}
};