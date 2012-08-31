/*=============================================================================
	UnViewport.h: Unreal viewport object.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Tim Sweeney
=============================================================================*/

/*-----------------------------------------------------------------------------
	UCanvas.
-----------------------------------------------------------------------------*/

// Constants.
enum {MAX_COLOR_BYTES=9}; // Maximum expected frame buffer depth = 8 bytes = 64-bit.

//
// Flags for drawing text, not yet used.
//
enum ETextOut
{
	TEXTOUT_Center			= 0x01,	// Center horizontally.
	TEXTOUT_CenterVertical	= 0x02,	// Center vertically.
	TEXTOUT_Right			= 0x04, // Right justify.
	TEXTOUT_Bottom			= 0x08, // Bottom justify.
	TEXTOUT_Wrap			= 0x10,	// Word wrap.
};

//
// Blitting types.
//
enum EViewportBlitFlags
{
	// Bitflags.
	BLIT_Fullscreen     = 0x0001, // Fullscreen.
	BLIT_Temporary      = 0x0002, // Temporary viewport.
	BLIT_DibSection     = 0x0004, // Create a DibSection for windowed rendering.
	BLIT_DirectDraw     = 0x0008, // Create Direct3D along with DirectDraw.
	BLIT_Direct3D       = 0x0010, // Create Direct3D along with DirectDraw.
	BLIT_NoWindowChange = 0x0020, // Don't resize existing window frame.
	BLIT_NoWindowFrame  = 0x0040, // Turn off the window frame.
	BLIT_OpenGL			= 0x0080, // OpenGL rendering.
	BLIT_HardwarePaint  = 0x0100, // Window should be repainted in hardware when drawn.

	// Special.
	BLIT_ParameterFlags	= BLIT_NoWindowChange, // Only parameters to ResizeViewport, not permanent flags.
};

class ENGINE_API FCanvasUtil
{
public:
      FCanvasUtil & operator=(FCanvasUtil const &);
      FCanvasUtil(class FRenderTarget *,class FRenderInterface *);
      FCanvasUtil(FCanvasUtil const &);
      int DrawString(int,int,unsigned short const *,class UFont *,class FColor);
      virtual int GetComponents(struct FVertexComponent *);
      virtual int GetRevision(void);
      virtual int GetSize(void);
      virtual int GetStride(void);
      virtual unsigned __int64 GetCacheId(void);
      virtual void GetRawStreamData(void * *,int);
      virtual void GetStreamData(void *);
      void BeginPrimitive(enum EPrimitiveType,class UMaterial *);
      void DrawLine(float,float,float,float,class FColor);
      void DrawPoint(float,float,float,float,float,class FColor);
      void DrawTile(float,float,float,float,float,float,float,float,float,class UMaterial *,class FColor);
      void Flush(void);
      ~FCanvasUtil(void);
};

//
// A drawing canvas.
//

class ENGINE_API UCanvas : public UObject
{
public:
	class UFont* Font;
	FLOAT FontScaleX;
	FLOAT FontScaleY;
	FLOAT SpaceX;
	FLOAT SpaceY;
	FLOAT OrgX;
	FLOAT OrgY;
	FLOAT ClipX;
	FLOAT ClipY;
	FLOAT CurX;
	FLOAT CurY;
	FLOAT Z;
	BYTE Style;
	FLOAT CurYL;
	FColor DrawColor;
	BITFIELD bCenter:1;
	BITFIELD bNoSmooth:1;
	INT SizeX;
	INT SizeY;
	FPlane ColorModulate;
	BITFIELD bForceAlpha:1;
	FLOAT ForcedAlpha;
	BITFIELD bRenderLevel:1;
	class UFont* TinyFont;
	class UFont* SmallFont;
	class UFont* MedFont;
	FStringNoInit TinyFontName;
	FStringNoInit SmallFontName;
	FStringNoInit MedFontName;
	class UViewport* Viewport;
	FCanvasUtil* pCanvasUtil;
public:
	UCanvas(UCanvas const &);
	static void * operator new(unsigned int,UObject *,unsigned short *,unsigned long);
	static void * operator new(unsigned int,UObject *,unsigned short const *,unsigned long);
	static void * operator new(unsigned int,UObject *,FName,unsigned long);
	static void * operator new(unsigned int,enum EInternal *);
	UCanvas & operator=(UCanvas const &);
	void DrawActor(AActor *,int,int,float);
	void DrawScreenActor(AActor *,int,int,float);
	static void InternalConstructor(void *);
	void SetScreenLight(int,FVector const &,FColor,float);
	static UClass * StaticClass(void);
	void eventReset(void);
	void execClear(struct FFrame &,void * const);
	void execDrawActor(struct FFrame &,void * const);
	void execDrawActorClipped(struct FFrame &,void * const);
	void execDrawPortal(struct FFrame &,void * const);
	void execDrawScreenActor(struct FFrame &,void * const);
	void execDrawText(struct FFrame &,void * const);
	void execDrawTextClipped(struct FFrame &,void * const);
	void execDrawTextJustified(struct FFrame &,void * const);
	void execDrawTile(struct FFrame &,void * const);
	void execDrawTileClipped(struct FFrame &,void * const);
	void execDrawTileJustified(struct FFrame &,void * const);
	void execDrawTilePartialStretched(struct FFrame &,void * const);
	void execDrawTileScaled(struct FFrame &,void * const);
	void execDrawTileStretched(struct FFrame &,void * const);
	void execGetCameraLocation(struct FFrame &,void * const);
	void execSetScreenLight(struct FFrame &,void * const);
	void execSetScreenProjector(struct FFrame &,void * const);
	void execStrLen(struct FFrame &,void * const);
	void execTextSize(struct FFrame &,void * const);
	void execWorldToScreen(struct FFrame &,void * const);
	void execWrapStringToArray(struct FFrame &,void * const);
	void execWrapText(struct FFrame &,void * const);
	//virtual ~UCanvas(void);
	virtual void Destroy(void);
	virtual void Init(UViewport *);
	virtual void Update(void);
	virtual void DrawTile(UMaterial *,float,float,float,float,float,float,float,float,float,FPlane,FPlane);
	virtual void DrawIcon(UMaterial *,float,float,float,float,float,FPlane,FPlane);
	virtual void DrawPattern(UMaterial *,float,float,float,float,float,float,float,float,FPlane,FPlane);
	virtual void WrappedStrLenf(UFont *,float,float,int &,int &,unsigned short const *,...);
	virtual void WrappedStrLenf(UFont *,int &,int &,unsigned short const *,...);
	virtual void WrappedPrintf(UFont *,float,float,int,unsigned short const *,...);
	virtual void WrappedPrintf(UFont *,int,unsigned short const *,...);
	virtual void WrapStringToArray(unsigned short const *,TArray<FString> *,float,UFont *,unsigned short);
	virtual void ClippedStrLen(UFont *,float,float,float &,float &,unsigned short const *);
	virtual void ClippedPrint(UFont *,float,float,int,unsigned short const *);
	virtual void DrawTileStretched(UMaterial *,float,float,float,float);
	virtual void DrawTileScaled(UMaterial *,float,float,float,float);
	virtual void DrawTileBound(UMaterial *,float,float,float,float);
	virtual void DrawTileJustified(UMaterial *,float,float,float,float,unsigned char);
	virtual void DrawTileScaleBound(UMaterial *,float,float,float,float);
	virtual void DrawTileStretchedOrScaled(UMaterial *,float,float,float,float,float,float);
	virtual void DrawTextJustified(unsigned char,float,float,float,float,unsigned short const *,...);
	virtual void SetClip(int,int,int,int);
protected:
	UCanvas(void);
private:
	static UClass PrivateStaticClass;
	void WrappedPrint(enum ERenderStyle,int &,int &,UFont *,float,float,int,unsigned short const *);
};

/*-----------------------------------------------------------------------------
	FHitCause.
-----------------------------------------------------------------------------*/

//
// Information about a hit-test cause.
//
struct ENGINE_API FHitCause
{
	class FHitObserver* Observer;
	UViewport* Viewport;
	DWORD Buttons;
	FLOAT MouseX;
	FLOAT MouseY;
	FHitCause( FHitObserver* InObserver, UViewport* InViewport, DWORD InButtons, FLOAT InMouseX, FLOAT InMouseY )
	: Observer( InObserver ), Viewport( InViewport ), Buttons( InButtons ), MouseX( InMouseX ), MouseY( InMouseY )
	{}
};

/*-----------------------------------------------------------------------------
	FHitObserver.
-----------------------------------------------------------------------------*/

//
// Hit observer class for receiving hit-test notification.
//
class ENGINE_API FHitObserver
{
public:
	virtual void Click( const struct FHitCause& Cause, const struct HHitProxy& Hit ) {}
};

/*-----------------------------------------------------------------------------
	UViewport.
-----------------------------------------------------------------------------*/

// Information for rendering the viewport (detail level settings).
enum ERenderType
{
	REN_None			= 0,	// Hide completely.
	REN_Wire			= 1,	// Wireframe of EdPolys.
	REN_Zones			= 2,	// Show zones and zone portals.
	REN_Polys			= 3,	// Flat-shaded Bsp.
	REN_PolyCuts		= 4,	// Flat-shaded Bsp with normals displayed.
	REN_DynLight		= 5,	// Illuminated texture mapping.
	REN_PlainTex		= 6,	// Plain texture mapping.
	REN_OrthXY			= 13,	// Orthogonal overhead (XY) view.
	REN_OrthXZ			= 14,	// Orthogonal XZ view.
	REN_OrthYZ			= 15,	// Orthogonal YZ view.
	REN_TexView			= 16,	// Viewing a texture (no actor).
	REN_TexBrowser		= 17,	// Viewing a texture browser (no actor).
	REN_MeshView		= 18,	// Viewing a mesh.
	REN_MAX				= 20
};

// Viewport capabilities.
enum EViewportCaps
{
	CC_RGB565			= 1,	// RGB 565 format (otherwise 555).
	CC_Mask				= 0xff, // Caps mask which affects cached rendering info.
};

// ShowFlags for viewport.
enum EViewportShowFlags
{
	SHOW_Frame     		= 0x00000001, 	// Show world bounding cube.
	SHOW_ActorRadii		= 0x00000002, 	// Show actor collision radii.
	SHOW_Backdrop  		= 0x00000004, 	// Show background scene.
	SHOW_Actors    		= 0x00000008,	// Show actors.
	SHOW_Coords    		= 0x00000010,	// Show brush/actor coords.
	SHOW_ActorIcons		= 0x00000020,	// Show actors as icons.
	SHOW_Brush			= 0x00000040,	// Show the active brush.
	SHOW_StandardView	= 0x00000080,	// Viewport is a standard view.
	SHOW_Menu			= 0x00000100,	// Show menu on viewport.
	SHOW_ChildWindow	= 0x00000200,	// Show as true child window.
	SHOW_MovingBrushes	= 0x00000400,	// Show moving brushes.
	SHOW_PlayerCtrl		= 0x00000800,	// Player controls are on.
	SHOW_Paths          = 0x00001000,   // Show paths.
	SHOW_NoButtons		= 0x00002000,	// No menu/view buttons.
	SHOW_RealTime		= 0x00004000,	// Update window in realtime.
};

// Mouse buttons and commands.
enum EMouseButtons
{
	MOUSE_Left			= 0x0001,		// Left mouse button.
	MOUSE_Right			= 0x0002,		// Right mouse button.
	MOUSE_Middle 		= 0x0004,		// Middle mouse button.
	MOUSE_FirstHit		= 0x0008,		// Sent when a mouse button is initially hit.
	MOUSE_LastRelease	= 0x0010,		// Sent when last mouse button is released.
	MOUSE_SetMode		= 0x0020,		// Called when a new viewport mode is first set.
	MOUSE_ExitMode		= 0x0040,		// Called when the existing mode is changed.
	MOUSE_Ctrl			= 0x0080,		// Ctrl is pressed.
	MOUSE_Shift			= 0x0100,		// Shift is pressed.
	MOUSE_Alt			= 0x0200,		// Alt is pressed.
	MOUSE_LeftDouble	= 0x0200,		// Left double click.
};

//
// A viewport object, which associates an actor (which defines
// most view parameters) with a Windows window.
//
class ENGINE_API UViewport : public UPlayer
{
	DECLARE_ABSTRACT_CLASS(UViewport,UPlayer,CLASS_Transient,Engine)
	DECLARE_WITHIN(UClient)

	// Referenced objects.
	class UCanvas*		 Canvas;	// Viewport's painting canvas.
	class UInput*		 Input;		// Input system.
	class URenderDevice* RenDev;	// Render device.

	// Normal variables.
	UObject*		MiscRes;		// Used in in modes like EM_TEXVIEW.
	FName			Group;			// Group for editing.
	FTime			LastUpdateTime;	// Time of last update.
	INT				SizeX, SizeY;   // Buffer X & Y resolutions.
	INT				ColorBytes;		// 1=256-color, 4=32-bit color.
	INT				FrameCount;		// Frame count, incremented when locked.
	DWORD			Caps;			// Capabilities (CC_).
	UBOOL			Current;		// If this is the current input viewport.
	UBOOL			Dragging;		// Dragging mouse.
	DWORD			RenderFlags;	// Render locking flags (only when locked).
	DWORD			ExtraPolyFlags;	// Additional poly flags associated with camera.

	// Level traveling.
	ETravelType		TravelType;
	FStringNoInit	TravelURL;
	UBOOL			bTravelItems;

	// Frame buffer info; only valid when locked.
	FTime			CurrentTime;	// Time when initially locked.
	BYTE*			ScreenPointer;	// Pointer to screen frame buffer, or NULL if none.
	INT				Stride;			// Stride in pixels.

	// Hit testing.
	UBOOL			HitTesting;		// Whether hit-testing.
	INT				HitX, HitY;		// Hit rectangle top left.
	INT				HitXL, HitYL;	// Hit size.
	TArray<INT>		HitSizes;		// Currently pushed hit sizes.

	// Saved-actor parameters.
	FLOAT SavedOrthoZoom, SavedFovAngle;
	INT SavedShowFlags, SavedRendMap, SavedMisc1, SavedMisc2;

	// Constructor.
	UViewport();

	// UObject interface.
	void Destroy();
	void Serialize( FArchive& Ar );

	// FArchive interface.
	void Serialize( const TCHAR* Data, EName MsgType );

	// UPlayer interface.
	void ReadInput( FLOAT DeltaSeconds );

	// UViewport interface.
	virtual UBOOL SetDrag( UBOOL NewDrag );
	virtual UBOOL IsFullscreen()=0;
	virtual UBOOL Lock( FPlane FlashScale, FPlane FlashFog, FPlane ScreenClear, DWORD RenderLockFlags, BYTE* HitData=NULL, INT* HitSize=NULL );
	virtual UBOOL ResizeViewport( DWORD BlitType, INT X=INDEX_NONE, INT Y=INDEX_NONE, INT ColorBytes=INDEX_NONE )=0;
	virtual void Unlock( UBOOL Blit=0 );
	virtual void SetModeCursor()=0;
	virtual void UpdateWindowFrame()=0;
	virtual void OpenWindow( DWORD ParentWindow, UBOOL Temporary, INT NewX, INT NewY, INT OpenX, INT OpenY )=0;
	virtual void CloseWindow()=0;
	virtual void UpdateInput( UBOOL Reset )=0;
	virtual void* GetWindow()=0;
	virtual void* GetServer();
	virtual void SetMouseCapture( UBOOL Capture, UBOOL Clip, UBOOL FocusOnly=0 )=0;
	virtual void Repaint( UBOOL Blit )=0;
	virtual UBOOL Exec( const TCHAR* Cmd, FOutputDevice& Ar=*GLog );
	virtual void TryRenderDevice( const TCHAR* ClassName, INT NewX, INT NewY, INT NewColorBytes, UBOOL Fullscreen ) {}

	// Functions.
	void ExecuteHits( const FHitCause& Cause, BYTE* HitData, INT HitSize );
	void PushHit( const struct HHitProxy& Hit, INT Size );
	void PopHit( UBOOL bForce );
	UBOOL IsWire();
	void ExecMacro( const TCHAR* Filename, FOutputDevice& Ar=*GLog );

	// UViewport inlines.
	BYTE* _Screen( INT X, INT Y )
	{
		return ScreenPointer + (X+Y*Stride)*ColorBytes;
	}
	UBOOL IsOrtho()
	{
		return Actor->RendMap==REN_OrthXY||Actor->RendMap==REN_OrthXZ||Actor->RendMap==REN_OrthYZ;
	}
	UBOOL IsRealtime()
	{
		return Actor && (Actor->ShowFlags&(SHOW_RealTime | SHOW_PlayerCtrl));
	}
	BYTE ByteID()
	{
		BYTE ColorBytesID[5]={0,0,1,2,3};
		return ColorBytesID[ColorBytes] | (Caps & 7)*4;
	}
};

// Viewport hit-testing macros.
#define PUSH_HIT(frame,expr) if( (frame->Viewport)->HitTesting ) (frame->Viewport)->PushHit(expr,sizeof(expr));
#define POP_HIT(frame)       if( (frame->Viewport)->HitTesting ) (frame->Viewport)->PopHit(0);
#define POP_HIT_FORCE(frame) if( (frame->Viewport)->HitTesting ) (frame->Viewport)->PopHit(1);

/*-----------------------------------------------------------------------------
	Base hit proxy.
-----------------------------------------------------------------------------*/

// Hit proxy declaration macro.
#define DECLARE_HIT_PROXY(cls,parent) \
	const TCHAR* GetName() const \
		{ return TEXT(#cls); } \
	UBOOL IsA( const TCHAR* Str ) const \
		{ return appStricmp(TEXT(#cls),Str)==0 || parent::IsA(Str); }

// Base class for detecting user-interface hits.
struct ENGINE_API HHitProxy
{
	union
	{
		mutable INT Size;
		HHitProxy* Parent;
	};
	const TCHAR* GetName() const
	{
		return TEXT("HHitProxy");
	}
	virtual UBOOL IsA( const TCHAR* Str ) const
	{
		return appStricmp(TEXT("HHitProxy"),Str)==0;
	}
	virtual void Click( const FHitCause& Cause )
	{
		Cause.Observer->Click( Cause, *this );
	}
};

/*-----------------------------------------------------------------------------
	UClient.
-----------------------------------------------------------------------------*/

//
// Client, responsible for tracking viewports.
//

class ENGINE_API UClient : public UObject
{
	DECLARE_ABSTRACT_CLASS(UClient,UObject,CLASS_Config,Engine)

	// Variables.
	UEngine*			Engine;
	TArray<UViewport*>	Viewports;
	INT					DrawCycles;

	// Configurable.
	BITFIELD	CaptureMouse;
	BITFIELD	CurvedSurfaces;
	BITFIELD	ScreenFlashes;
	BITFIELD	NoLighting;
	BITFIELD	Decals;
	BITFIELD	NoDynamicLights;
	BITFIELD    NoFractalAnim;
	INT			WindowedViewportX;
	INT			WindowedViewportY;
	INT			WindowedColorBits;
	INT			FullscreenViewportX;
	INT			FullscreenViewportY;
	INT			FullscreenColorBits;
	FLOAT		Brightness;
	FLOAT		MipFactor;
	INT			TextureLODSet[8];
	FLOAT		MinDesiredFrameRate;
	INT			ParticleDensity;


	// Constructors.
	UClient();
	void StaticConstructor();

	// UObject interface.
	void Serialize( FArchive& Ar );
	void Destroy();
	void PostEditChange();

	// UClient interface.
	virtual void Init( UEngine* InEngine )=0;
	virtual void Flush( UBOOL AllowPrecache );
	virtual void ShowViewportWindows( DWORD ShowFlags, int DoShow )=0;
	virtual void EnableViewportWindows( DWORD ShowFlags, int DoEnable )=0;
	virtual void Tick()=0;
	virtual UBOOL Exec( const TCHAR* Cmd, FOutputDevice& Ar=*GLog )=0;
	virtual class UViewport* NewViewport( const FName Name )=0;
	virtual void MakeCurrent( UViewport* NewViewport )=0;
};

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
