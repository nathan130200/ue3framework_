#pragma once
#ifndef __WORLDTOSCREEN_H_
#define __WORLDTOSCREEN_H_

class WorldToScreen
{
public:
	static void WorldToScreen::GetAxis( FRotator Angles, FVector& vRight, FVector& vUp, FVector& vForward );
	static FLOAT WorldToScreen::VectorDotProduct( FVector* pV1, FVector* pV2 );
	static FVector* WorldToScreen::VectorSubtract( FVector* pOut, FVector* pV1, FVector* pV2 );
	static FVector WorldToScreen::World(UCanvas* Canvas, FVector WorldLocation);
	static FVector WorldToScreen::BRBones(FVector Location, APawn* Pawn);
};

#endif
