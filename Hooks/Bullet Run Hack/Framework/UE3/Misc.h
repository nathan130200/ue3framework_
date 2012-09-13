#pragma once
#ifndef __MISC_H_
#define __MISC_H

class Misc
{
public:
	static void Misc::GetBoneName(APawn* you);
	static void Misc::DrawCossHair(DrawUtils* pCanvas, const FColor& Color);
	static FColor Misc::GetTeamColor(bool IsPlayer, bool IsVisible, bool IsEnemy );
	static void Misc::wallhack(APawn* Target);
	static void Misc::wallhackOff(APawn* Target);
	static void  Misc::LineToTarget( DrawUtils* pCanvas, PawnInfo Pawn, FColor cColor );
	static void Misc::info(DrawUtils* Canvas, PawnInfo Pawn, FColor DrawColor);
};

#endif
