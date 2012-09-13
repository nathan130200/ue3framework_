#include "Framework\Framework.h"
#include "Framework\UE3\ESP.h"

void ESP::Name(DrawUtils* Canvas, PawnInfo Pawn, FColor DrawColor)
{
	CRender::DrawString( Canvas, Pawn.ScreenPos.X, Pawn.ScreenPos.Y-50, DrawColor, true, Pawn.Rpi->PlayerName.Data );
}

void ESP::Health(DrawUtils* Canvas, PawnInfo Pawn, FColor DrawColor)
{
	CRender::DrawStringEx( Canvas,  Pawn.ScreenPos.X, Pawn.ScreenPos.Y-50, DrawColor, 0, L"H: %i", Pawn.Pawn->Health );
}

void ESP::Distance(DrawUtils* Canvas, PawnInfo Pawn, FColor DrawColor)
{
	float PawnDistance = Radar::calcdist(CameraLocation,Pawn.Location) /100;
	CRender::DrawStringEx( Canvas, Pawn.ScreenPos.X, Pawn.ScreenPos.Y-50, DrawColor, 0, L"D: %0.2f", PawnDistance );
}

void ESP::Boxes(DrawUtils* pCanvas, PawnInfo Pawn, FColor Color)
{
	//Valid Target Checks Here
	{
		FVector Min,Max,vVec1,vVec2,vVec3,vVec4,vVec5,vVec6,vVec7,vVec8;

		FBox Returned;
		AActorUtils* FPawn = reinterpret_cast<AActorUtils*>( Pawn.Pawn );
		FPawn->GetComponentsBoundingBox(&Returned);

		if(Returned.IsValid)
		{
			Max = Returned.Max;
			Min = Returned.Min;
			{
				vVec3 = Min;
				vVec3.X = Max.X;
				vVec4 = Min;
				vVec4.Y = Max.Y;
				vVec5 = Min;
				vVec5.Z = Max.Z;
				vVec6 = Max;
				vVec6.X = Min.X;
				vVec7 = Max;
				vVec7.Y = Min.Y;
				vVec8 = Max;
				vVec8.Z = Min.Z;
				vVec1 = WorldToScreen::World(pCanvas, Min);
				vVec2 = WorldToScreen::World(pCanvas, Max);
				vVec3 = WorldToScreen::World(pCanvas, vVec3);
				vVec4 = WorldToScreen::World(pCanvas, vVec4);
				vVec5 = WorldToScreen::World(pCanvas, vVec5);
				vVec6 = WorldToScreen::World(pCanvas, vVec6);
				vVec7 = WorldToScreen::World(pCanvas, vVec7);
				vVec8 = WorldToScreen::World(pCanvas, vVec8);
				
				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec5.X, vVec5.Y, Color);
				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec8.X, vVec8.Y, Color);
				pCanvas->Draw2DLine(vVec3.X, vVec3.Y, vVec7.X, vVec7.Y, Color);
				pCanvas->Draw2DLine(vVec4.X, vVec4.Y, vVec6.X, vVec6.Y, Color);
				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec3.X, vVec3.Y, Color);
				pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec4.X, vVec4.Y, Color);
				pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec3.X, vVec3.Y, Color);
				pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec4.X, vVec4.Y, Color);
				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec6.X, vVec6.Y, Color);
				pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec7.X, vVec7.Y, Color);
				pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec6.X, vVec6.Y, Color);
				pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec7.X, vVec7.Y, Color);
			}
		}
	}
}
