#include "Framework\Framework.h"
#include "UE3function.h"

//UObject* Object = reinterpret_cast<UObject*>(GObjects);

// Function Engine.Canvas.TextSize
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UCanvas_execTextSize_Parms
{
	struct FString                                     String;                                           		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	float                                              XL;                                               		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              YL;                                               		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Canvas.TextSize
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 String                         ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// float                          XL                             ( CPF_Parm | CPF_OutParm )
// float                          YL                             ( CPF_Parm | CPF_OutParm )

void DrawUtils::TextSize ( struct FString String, float* XL, float* YL )
{
	static UFunction* pFnTextSize = NULL;

	if ( ! pFnTextSize )
		pFnTextSize = (UFunction*) UObject::GObjObjects()->Data[ 12910 ];

	UCanvas_execTextSize_Parms TextSize_Parms;
	memcpy ( &TextSize_Parms.String, &String, 0xC );

	pFnTextSize->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTextSize, &TextSize_Parms, NULL );

	pFnTextSize->FunctionFlags |= 0x400;

	if ( XL )
		*XL = TextSize_Parms.XL;

	if ( YL )
		*YL = TextSize_Parms.YL;
};

// Function Engine.Canvas.DrawText
// [0x00424401] ( FUNC_Final | FUNC_Native )
struct UCanvas_execDrawText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	unsigned long                                      CR : 1;                                           		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              XScale;                                           		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              YScale;                                           		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FFontRenderInfo                             RenderInfo;                                       		// 0x0018 (0x0028) [0x0000000000000192]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm )
};

// Function Engine.Canvas.DrawText
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  CR                             ( CPF_OptionalParm | CPF_Parm )
// float                          XScale                         ( CPF_OptionalParm | CPF_Parm )
// float                          YScale                         ( CPF_OptionalParm | CPF_Parm )
// struct FFontRenderInfo         RenderInfo                     ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void DrawUtils::DrawText ( struct FString Text, unsigned long CR, float XScale, float YScale, struct FFontRenderInfo* RenderInfo )
{
	static UFunction* pFnDrawText = NULL;

	if ( ! pFnDrawText )
		pFnDrawText = (UFunction*) UObject::GObjObjects()->Data[ 3883 ];

	UCanvas_execDrawText_Parms DrawText_Parms;
	memcpy ( &DrawText_Parms.Text, &Text, 0xC );
	DrawText_Parms.CR = CR;
	DrawText_Parms.XScale = XScale;
	DrawText_Parms.YScale = YScale;

	pFnDrawText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawText, &DrawText_Parms, NULL );

	pFnDrawText->FunctionFlags |= 0x400;

	if ( RenderInfo )
		memcpy ( RenderInfo, &DrawText_Parms.RenderInfo, 0x28 );
};

// Function Engine.Canvas.DrawTile
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UCanvas_execDrawTile_Parms
{
	class UTexture*                                    Tex;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              XL;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              YL;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              U;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              V;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              UL;                                               		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VL;                                               		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FLinearColor                                LColor;                                           		// 0x001C (0x0010) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ClipTile : 1;                                     		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      Blend;                                            		// 0x0030 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Engine.Canvas.DrawTile
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UTexture*                Tex                            ( CPF_Parm )
// float                          XL                             ( CPF_Parm )
// float                          YL                             ( CPF_Parm )
// float                          U                              ( CPF_Parm )
// float                          V                              ( CPF_Parm )
// float                          UL                             ( CPF_Parm )
// float                          VL                             ( CPF_Parm )
// struct FLinearColor            LColor                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  ClipTile                       ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  Blend                          ( CPF_OptionalParm | CPF_Parm )

void DrawUtils::DrawTile ( class UTexture* Tex, float XL, float YL, float U, float V, float UL, float VL, struct FLinearColor LColor, unsigned long ClipTile, unsigned char Blend )
{
	static UFunction* pFnDrawTile = NULL;

	if ( ! pFnDrawTile )
		pFnDrawTile = (UFunction*) UObject::GObjObjects()->Data[ 12837 ];

	UCanvas_execDrawTile_Parms DrawTile_Parms;
	DrawTile_Parms.Tex = Tex;
	DrawTile_Parms.XL = XL;
	DrawTile_Parms.YL = YL;
	DrawTile_Parms.U = U;
	DrawTile_Parms.V = V;
	DrawTile_Parms.UL = UL;
	DrawTile_Parms.VL = VL;
	memcpy ( &DrawTile_Parms.LColor, &LColor, 0x10 );
	DrawTile_Parms.ClipTile = ClipTile;
	DrawTile_Parms.Blend = Blend;

	pFnDrawTile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawTile, &DrawTile_Parms, NULL );

	pFnDrawTile->FunctionFlags |= 0x400;
};

// Function Engine.Canvas.Draw2DLine
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UCanvas_execDraw2DLine_Parms
{
	float                                              X1;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y1;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X2;                                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y2;                                               		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FColor                                      LineColor;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Engine.Canvas.Draw2DLine
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          X1                             ( CPF_Parm )
// float                          Y1                             ( CPF_Parm )
// float                          X2                             ( CPF_Parm )
// float                          Y2                             ( CPF_Parm )
// struct FColor                  LineColor                      ( CPF_Parm )

void DrawUtils::Draw2DLine ( float X1, float Y1, float X2, float Y2, struct FColor LineColor )
{
	static UFunction* pFnDraw2DLine = NULL;

	if ( ! pFnDraw2DLine )
		pFnDraw2DLine = (UFunction*) UObject::GObjObjects()->Data[ 12993 ];

	UCanvas_execDraw2DLine_Parms Draw2DLine_Parms;
	Draw2DLine_Parms.X1 = X1;
	Draw2DLine_Parms.Y1 = Y1;
	Draw2DLine_Parms.X2 = X2;
	Draw2DLine_Parms.Y2 = Y2;
	memcpy ( &Draw2DLine_Parms.LineColor, &LineColor, 0x4 );

	pFnDraw2DLine->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDraw2DLine, &Draw2DLine_Parms, NULL );

	pFnDraw2DLine->FunctionFlags |= 0x400;
};

// Function PlanBGame.PBPlayerController.ReloadWeapon
// [0x00024202] ( FUNC_Exec )
struct APBPlayerController_execReloadWeapon_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APBPawn*                                  P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBGame.PBPlayerController.ReloadWeapon
// [0x00024202] ( FUNC_Exec )
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_OptionalParm | CPF_Parm )

void ControllerUtils::ReloadWeapon ( unsigned char FireModeNum )
{
	static UFunction* pFnReloadWeapon = NULL;

	if ( ! pFnReloadWeapon )
		pFnReloadWeapon = (UFunction*) UObject::GObjObjects()->Data[ 45825 ];

	APBPlayerController_execReloadWeapon_Parms ReloadWeapon_Parms;
	ReloadWeapon_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnReloadWeapon, &ReloadWeapon_Parms, NULL );
};

// Function Engine.Actor.GetComponentsBoundingBox
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AActor_execGetComponentsBoundingBox_Parms
{
	struct FBox                                        ActorBox;                                         		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function Engine.Actor.GetComponentsBoundingBox
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FBox                    ActorBox                       ( CPF_Parm | CPF_OutParm )

void AActorUtils::GetComponentsBoundingBox ( struct FBox* ActorBox )
{
	static UFunction* pFnGetComponentsBoundingBox = NULL;

	if ( ! pFnGetComponentsBoundingBox )
		pFnGetComponentsBoundingBox = (UFunction*) UObject::GObjObjects()->Data[ 3530 ];

	AActor_execGetComponentsBoundingBox_Parms GetComponentsBoundingBox_Parms;

	pFnGetComponentsBoundingBox->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetComponentsBoundingBox, &GetComponentsBoundingBox_Parms, NULL );

	pFnGetComponentsBoundingBox->FunctionFlags |= 0x400;

	if ( ActorBox )
		memcpy ( ActorBox, &GetComponentsBoundingBox_Parms.ActorBox, 0x1C );
};