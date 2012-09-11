#ifndef _D3D9Hook_h
#define _D3D9Hook_h
#include <windows.h>
#include <d3d9.h>
#include <d3dx9.h>

#include <vector>
#pragma comment( lib, "d3d9.lib" )
#pragma comment( lib, "d3dx9.lib" )



typedef struct SPRITETEX
{
public:
	int m_iTextureId;
	std::string m_strFilename;
	LPDIRECT3DTEXTURE9	m_pSpriteTexture;
	D3DXIMAGE_INFO m_ImageInfo;

}SPRITETEX, *LPSPRITETEX;


class CD3DManager
{
public:
	CD3DManager(){
		memset(this,0x00,sizeof(CD3DManager));
	};
	~CD3DManager() {};
	bool InitializeD3DHooks();
	void RemoveD3DHooks();
	void Initialize(IDirect3DDevice9 *pD3Ddev);
	HRESULT OnLostDevice();
	HRESULT OnResetDevice(IDirect3DDevice9 *pD3Ddev);

	HRESULT GenerateTexture(IDirect3DDevice9 *pD3Ddev, IDirect3DTexture9 **ppD3Dtex, DWORD colour32);
	HRESULT GenerateShader(IDirect3DDevice9 *pD3Ddev, IDirect3DPixelShader9 **pShader, float r, float g, float b );
	void DrawBoneLines(D3DXVECTOR2 *pVertexList,DWORD dwVertexListCount, D3DCOLOR Color)
	{
		m_pLine->SetWidth( 1.5f );
		m_pLine->SetAntialias( 0 );
		m_pLine->Begin();
		m_pLine->Draw( pVertexList, dwVertexListCount, Color );
		m_pLine->End();
	}

	void DrawFilledRect( float x0, float y0, float x1, float y1, DWORD dwColor )
	{
		float w = x1 - x0;
		float h = y1 - y0;

		m_pLine->SetWidth( h );
		m_pLine->SetAntialias( 0 );

		D3DXVECTOR2 VertexList[ 2 ];

		VertexList[0].x = x0;
		VertexList[0].y = y0 + (h / 2.0f );

		VertexList[1].x = x0 + w;
		VertexList[1].y = y0 + (h / 2.0f );

		m_pLine->Begin();
		m_pLine->Draw( VertexList, 2, dwColor );
		m_pLine->End();
	}
	void DrawLine(int startX, int startY, int endX, int endY, D3DCOLOR Color)
	{
		D3DXVECTOR2 vLine[2];

		m_pLine->SetWidth(1);
		m_pLine->SetAntialias( false );
		m_pLine->SetGLLines( true );

		vLine[0].x = startX;
		vLine[0].y = startY;
		vLine[1].x = endX;
		vLine[1].y = endY;

		m_pLine->Begin( );
		m_pLine->Draw( vLine, 2, Color);
		m_pLine->End( ); 
	}
	D3DXVECTOR2* AdjustFrom640( D3DXVECTOR2 * vecInOut );
	void	SetRectangle			( float w, float h										);
	void	SetRectangleAdvanced	( float top, float bottom, float left, float right		);
	void	SetColor				( int Color												);
	void	DrawLine				( float x, float y, float w, float h					);
	void	DrawRectangle			( float x, float y, float w, float h, float t			);
	void	DrawBox					( float x, float y, float w, float h					);
	HRESULT CreateImage ( std::string strFilename ,int TextureId );
	void DrawScaledImage ( IDirect3DTexture9* pTexture, D3DXVECTOR2 ScreenPos, float fWidth, float fHeight, float flRotation = 0.0f,DWORD color = D3DCOLOR_ARGB(255,255,255,255));
	void DrawRotatedD2Radar ( D3DXVECTOR2 ScreenPos, float fWidth,float fHeight, float x, float y, float fRotation, D3DXVECTOR2 fScaling);
	SPRITETEX GetTextureFromId		( int iTextureId										);
	void ReleaseTextures			(  );
	
	D3DXVECTOR2			m_ScreenScale;
	LPDIRECT3DTEXTURE9	pSpriteTexture;
	LPDIRECT3DTEXTURE9	pTextureRed;
	LPD3DXSPRITE		Sprite;
	LPD3DXSPRITE		ImageSprite;
	RECT				SpriteDimensionRectangle;
	
	LPD3DXLINE			m_pLine;
	BOOL				m_bInitialized;
	DWORD				m_dwSpriteColor;
	IDirect3DDevice9	*m_pD3Ddev;
protected:
private:
};

//extern cDebugTextRenderer* DebugTextRenderer;
extern CD3DManager *g_pD3DManager;


#endif //_D3D9Hook_h