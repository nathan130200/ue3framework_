#ifndef _FontRenderer_h
#define _FontRenderer_h

#include <d3d9.h>
#include <d3dx9.h>
#include <D3dx9math.h>
#pragma comment( lib, "d3d9.lib" )
#pragma comment( lib, "d3dx9.lib" )
#include <string>
using namespace std;
#define SAFE_RELEASE(p){if(p)(p)->Release();(p)=NULL;}

class CFontRenderer
{
public:
	CFontRenderer( );
	~CFontRenderer( );

	HRESULT Initialize( IDirect3DDevice9* pDevice, D3DXFONT_DESC dDesc, D3DCOLOR FontColor );
	HRESULT DrawText( string *pString, D3DXVECTOR3 *vecInOut ,DWORD dwAlignment = NULL);

	HRESULT GetFontRect( string *pString, RECT *rect );

	HRESULT OnLostDevice();
	void	SetTextColor(DWORD dwColor){m_FontColor=dwColor;};
	DWORD			m_FontColor;
	int				m_Align;
	LPD3DXFONT		m_pFont;
	BOOL			m_bInitialized;
};
extern CFontRenderer *g_pFont;
extern CFontRenderer *g_pEspFont;
#endif//_FontRenderer_h