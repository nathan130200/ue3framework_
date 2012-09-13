#pragma once
#ifndef __2DRADAR_H_
#define __2DRADAR_H_

class Radar
{
public:
	static int Radar::calcdist(FVector v1,FVector v2);
	static FVector2D Radar::CalculateRadarCoordinate( FVector Location, FLOAT RadarX, FLOAT RadarY);
	static void inline Radar::DrawRadar( PawnInfo Pawn, UCanvas* Canvas, FColor Color );
};

#endif
