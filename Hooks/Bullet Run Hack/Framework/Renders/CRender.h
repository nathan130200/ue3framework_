#ifndef CRENDER_H
#define CRENDER_H

class CRender
{
public:
	static FColor CRender::MakeColor(int R, int G, int B, int A)
	{
		FColor ReturnedColor;
		ReturnedColor.R = R;
		ReturnedColor.G = G;
		ReturnedColor.B = B;
		ReturnedColor.A = A;
		return ReturnedColor;
	}

	static void CRender::DrawString( DrawUtils* pCanvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String )
	{
		float OldCurX		= pCanvas->CurX;
		float OldCurY		= pCanvas->CurY;
		FColor OldColor		= pCanvas->DrawColor;

		pCanvas->CurX		= X;
		pCanvas->CurY		= Y;
		pCanvas->DrawColor  = Color;

		if ( Center )
		{
			float XL, YL;
			pCanvas->TextSize( String, &XL, &YL );
			pCanvas->CurX -= XL / 2;
		}

		pCanvas->DrawText(String, false, 1, 1, NULL);

		pCanvas->CurX      = OldCurX;
		pCanvas->CurY      = OldCurY;
		pCanvas->DrawColor  = OldColor;
	}

	static void CRender::DrawStringEx( DrawUtils* Canvas, float X, float Y, const FColor& Color, bool Center, wchar_t* String, ... )
	{
		wchar_t StringBuffer [1024];
		memset(StringBuffer, 0, 1024*2);

		va_list ArgList;

		va_start( ArgList, String );
		vswprintf(StringBuffer, String, ArgList);
		va_end( ArgList );

		DrawString( Canvas, X, Y, Color, Center, StringBuffer );
	}

	static void CRender::DrawRect( DrawUtils* Canvas, float X, float Y, float W, float H, const FLinearColor& Color )
	{
		Canvas->CurX = X;
		Canvas->CurY = Y;

		Canvas->DrawTile( Canvas->DefaultTexture, W, H, 0, 0, 1, 1, Color, NULL, NULL);
	}

	static void CRender::DrawBox( DrawUtils* Canvas, float X, float Y, float W, float H, const FLinearColor& Color )
	{
		DrawRect( Canvas, X, Y, W, 1, Color );
		DrawRect( Canvas, X, Y, 1, H, Color );
		DrawRect( Canvas, X + W - 1, Y, 1, H, Color );
		DrawRect( Canvas, X, Y + H - 1, W, 1, Color );
	}

	void CRender::DrawLine(DrawUtils* pCanvas, float startX, float startY, float endX, float endY, FColor cColor )
	{
		pCanvas->Draw2DLine(startX, startY, endX, endY, cColor);
	}

	void CRender::DrawBlackBorderString(DrawUtils* pCanvas, int x, int y, FColor& Color, const WCHAR* szText, ...) 
	{ 
		WCHAR logbuf[256] = {0};
		va_list ArgList;

		va_start( ArgList, szText );
		vswprintf(logbuf, szText, ArgList);
		va_end( ArgList );

		DrawString(pCanvas, x + 1, y,		Color, 0, logbuf);
		DrawString(pCanvas, x - 1, y,		Color, 0, logbuf);
		DrawString(pCanvas, x, y + 1,		Color, 0, logbuf);
		DrawString(pCanvas, x, y - 1,		Color, 0, logbuf);
		DrawString(pCanvas, x + 1, y + 1,	Color, 0, logbuf);
		DrawString(pCanvas, x - 1, y - 1,	Color, 0, logbuf);
		DrawString(pCanvas, x + 1, y - 1,	Color, 0, logbuf);
		DrawString(pCanvas, x - 1, y + 1,	Color, 0, logbuf);
		DrawString(pCanvas, x, y,			Color, 0, logbuf);
	} 

	static void CRender::DrawGradientBox(DrawUtils* pCanvas, float x, float y, float width, float height, FColor& Color, int SharpnessR, int SharpnessG, int SharpnessB)
	{
		for(int i = 0; i < height; i++)
		{
			FColor nColor = { Color.B + (i / SharpnessB), Color.G + (i / SharpnessG), Color.R + (i / SharpnessR), Color.A};
			pCanvas->Draw2DLine(x, y + i, x + width, y + i, nColor);
		}
	}
};

#endif