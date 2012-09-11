class Radar
{
public:
	//static int Radar::calcdist(FVector v1,FVector v2)
	//{
	//  FVector v;
	//  v.X = v1.X - v2.X;
	//  v.Y = v1.Y - v2.Y;
	//  v.Z = v1.Z - v2.Z;
	//  return sqrt(v.X*v.X + v.Y*v.Y + v.Z*v.Z);
	//}

	//static FVector2D Radar::CalculateRadarCoordinate( FVector Location, FLOAT RadarX, FLOAT RadarY)
	//{
	//	FVector2D Return;

	//	FLOAT CosYaw = cos( URotationToRadians( CameraRotation.Yaw ) ); 
	//	FLOAT SinYaw = sin( URotationToRadians( CameraRotation.Yaw ) );

	//	FLOAT DeltaX = Location.X - CameraLocation.X;
	//	FLOAT DeltaY = Location.Y - CameraLocation.Y;

	//	FLOAT LocationX = ( DeltaY * CosYaw - DeltaX * SinYaw ) / 150.0f;
	//	FLOAT LocationY = ( DeltaX * CosYaw + DeltaY * SinYaw ) / 150.0f;
	//					
	//	if( LocationX > 70.0f - 2.5f )
	//		LocationX = 70.0f - 2.5f;
	//	else if( LocationX < -( 70.0f - 2.5f ) )
	//		LocationX = -( 70.0f - 2.5f );

	//	if( LocationY > 70.0f - 2.5f )
	//		LocationY = 70.0f - 2.5f;
	//	else if( LocationY < -( 70.0f - 2.5f ) )
	//		LocationY = -( 70.0f - 2.5f );

	//	Return.X = LocationX + RadarX;
	//	Return.Y = -LocationY + RadarY;

	//	return Return;
	//}

	//static void inline Radar::DrawRadar( APawn* Target, UCanvas* Canvas, FColor Color ) 
	//{
	//		FVector2D Location2D = CalculateRadarCoordinate( Target->Location, 90.0f, 240.0f );

	//		Canvas->DrawColor = Color;
	//		Canvas->CurX = Location2D.X;
	//		Canvas->CurY = Location2D.Y;
	//		Canvas->DrawBox(3.5f,3.5f);
	//
	//		//Canvas->DrawColor = CRender::MakeColor(0,0,255,255);
	//		//Canvas->CurX = 90.0f + (150.0f / 2);
	//		//Canvas->CurY = 240.0f + (150.0f / 2);
	//		//Canvas->DrawBox(2.5f,2.5f);

	//		//Canvas->DrawColor = CRender::MakeColor(0,0,255,255);
	//		//Canvas->CurX = 90.0f;
	//		//Canvas->CurY = 240.0f;
	//		//Canvas->DrawBox(150.0f,150.0f);
	//}
};