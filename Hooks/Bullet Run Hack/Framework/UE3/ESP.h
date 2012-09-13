#pragma once
#ifndef __ESP_H_
#define __ESP_H_

class ESP
{
public:
	static void ESP::Name(DrawUtils* Canvas, PawnInfo Pawn, FColor DrawColor);
	static void ESP::Health(DrawUtils* Canvas, PawnInfo Pawn, FColor DrawColor);
	static void ESP::Distance(DrawUtils* Canvas, PawnInfo Pawn, FColor DrawColor);
	static void ESP::Boxes(DrawUtils* pCanvas, PawnInfo Pawn, FColor Color);
};

#endif
