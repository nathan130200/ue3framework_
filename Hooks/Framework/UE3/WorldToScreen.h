class WorldToScreen
{
public:
	static void WorldToScreen::GetAxes( FRotator Angles, FVector& vRight, FVector& vUp, FVector& vForward )
	{
		float        angle;
                
		angle = URotToRadian(Angles.Yaw);
        
		float SinYaw = sin(angle);    
		float CosYaw = cos(angle);
        
		angle = URotToRadian(Angles.Pitch);
    
		float SinPitch = sin(angle);
		float CosPitch = cos(angle);
        
		angle = URotToRadian(Angles.Roll);
        
		float SinRoll = sin(angle);
		float CosRoll = cos(angle);
        
	   vRight.X = CosPitch * CosYaw; 
	   vRight.Y = CosPitch * SinYaw; 
	   vRight.Z = SinPitch; 

	   vUp.X = SinRoll * SinPitch * CosYaw + CosRoll * -SinYaw; 
	   vUp.Y = SinRoll * SinPitch * SinYaw + CosRoll * CosYaw; 
	   vUp.Z = -SinRoll * CosPitch; 
  
	   vForward.X = -( CosRoll * SinPitch * CosYaw + SinRoll * SinYaw ); 
	   vForward.Y = -( CosRoll * SinPitch * SinYaw + SinRoll * -CosYaw ); 
	   vForward.Z = CosRoll * CosPitch;                     
	}

	static FLOAT WorldToScreen::VectorDotProduct( FVector* pV1, FVector* pV2 )
	{
		return ( ( pV1->X * pV2->X ) + ( pV1->Y * pV2->Y ) + ( pV1->Z * pV2->Z ) );
	}

	static FVector* WorldToScreen::VectorSubtract( FVector* pOut, FVector* pV1, FVector* pV2 )
	{
		*pOut = *pV1 - *pV2; 

		return pOut;
	}

	static FVector WorldToScreen::World(UCanvas* Canvas, FVector WorldLocation)
	{
		FVector X,Y,Z,D,Out,Delta,Transformed;

		GetAxes(CameraRotation,X,Y,Z);

		Delta = Controller->Subtract_VectorVector( WorldLocation, CameraLocation );
		Transformed.X = Controller->Dot_VectorVector( Delta, Y );
		Transformed.Y = Controller->Dot_VectorVector( Delta, Z );
		Transformed.Z = Controller->Dot_VectorVector( Delta, X );

		if( Transformed.Z < 1.00f )
			Transformed.Z = 1.00f;

#ifdef GASDK || TASDK || CCSDK
	float FOVAngle = Controller->FOVAngle;
#endif

#ifdef APBSDK
	float FOVAngle = Controller->FOVAngle;
#endif

#ifdef RDSDK
	float FOVAngle = Controller->eventGetFOVAngle();
#endif

#ifdef BRSDK
	float FOVAngle = Controller->eventGetFOVAngle();
#endif

		Out.X = ( Canvas->ClipX / 2.0f ) + Transformed.X * ( ( Canvas->ClipX / 2.0f ) / Controller->Tan( FOVAngle * CONST_Pi / 360.0f ) ) / Transformed.Z;
		Out.Y = ( Canvas->ClipY / 2.0f ) + -Transformed.Y * ( ( Canvas->ClipX / 2.0f ) / Controller->Tan( FOVAngle * CONST_Pi / 360.0f ) ) / Transformed.Z;
		Out.Z = 0;
		return Out;
	}

#ifdef BRSDK
	static FVector WorldToScreen::BRBones(FVector Location, APawn* Pawn)
	{
		FVector vHeadBone;
			
		if(Pawn->Mesh != NULL)
		{
			if(strcmp(Pawn->Mesh->GetBoneName(35).GetName(), "b_Head") == 0)
			{
				FName nHeadBone = Pawn->Mesh->GetBoneName(35);

				if(nHeadBone.Index != 0)
					vHeadBone = Pawn->Mesh->GetBoneLocation(nHeadBone, 0);
				else
					vHeadBone = Location;
			}
			else if(strcmp(Pawn->Mesh->GetBoneName(14).GetName(), "b_Head") == 0)
			{
				FName nHeadBone = Pawn->Mesh->GetBoneName(14);

				if(nHeadBone.Index != 0)
					vHeadBone = Pawn->Mesh->GetBoneLocation(nHeadBone, 0);
				else
					vHeadBone = Location;
			}
			else
				vHeadBone = Location;
		}
		else
			vHeadBone = Location;

		return vHeadBone;
	}
#endif

};