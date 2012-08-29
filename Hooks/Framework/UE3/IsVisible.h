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

	static bool IsVisible::Visible( APlayerController* Controller, APawn* TargetPawn, FVector& StartLocation, FVector& EndLocation )
	{	
			FVector vHeadBone;
			
#ifdef BRSDK
			vHeadBone = WorldToScreen::BRBones(EndLocation, TargetPawn);
#endif

#ifdef GASDK || TASDK			
			vHeadBone = EndLocation;
#endif

		return FastTrace( Controller, TargetPawn, StartLocation, vHeadBone );
	}
};