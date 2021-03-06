/*=============================================================================
	UnObjBas.h: Unreal object base class.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Tim Sweeney
=============================================================================*/

/*-----------------------------------------------------------------------------
	Core enumerations.
-----------------------------------------------------------------------------*/

//
// Flags for loading objects.
//
enum ELoadFlags
{
	LOAD_None			= 0x0000,	// No flags.
	LOAD_NoFail			= 0x0001,	// Critical error if load fails.
	LOAD_NoWarn			= 0x0002,	// Don't display warning if load fails.
	LOAD_Throw			= 0x0008,	// Throw exceptions upon failure.
	LOAD_Verify			= 0x0010,	// Only verify existance; don't actually load.
	LOAD_AllowDll		= 0x0020,	// Allow plain DLLs.
	LOAD_DisallowFiles  = 0x0040,	// Don't load from file.
	LOAD_NoVerify       = 0x0080,   // Don't verify imports yet.
	LOAD_Forgiving      = 0x1000,   // Forgive missing imports (set them to NULL).
	LOAD_Quiet			= 0x2000,   // No log warnings.
	LOAD_NoRemap        = 0x4000,   // No remapping of packages.
	LOAD_Propagate      = 0,
};

//
// Package flags.
//
enum EPackageFlags
{
	PKG_AllowDownload	= 0x0001,	// Allow downloading package.
	PKG_ClientOptional  = 0x0002,	// Purely optional for clients.
	PKG_ServerSideOnly  = 0x0004,   // Only needed on the server side.
	PKG_BrokenLinks     = 0x0008,   // Loaded from linker with broken import links.
	PKG_Unsecure        = 0x0010,   // Not trusted.
	PKG_Need			= 0x8000,	// Client needs to download this package.
};

//
// Internal enums.
//
enum ENativeConstructor    {EC_NativeConstructor};
enum EStaticConstructor    {EC_StaticConstructor};
enum EInternal             {EC_Internal};
enum ECppProperty          {EC_CppProperty};
enum EInPlaceConstructor   {EC_InPlaceConstructor};

//
// Result of GotoState.
//
enum EGotoState
{
	GOTOSTATE_NotFound		= 0,
	GOTOSTATE_Success		= 1,
	GOTOSTATE_Preempted		= 2,
};

//
// Flags describing a class.
//
enum EClassFlags
{
	// Base flags.
	CLASS_Abstract          = 0x00001,  // Class is abstract and can't be instantiated directly.
	CLASS_Compiled			= 0x00002,  // Script has been compiled successfully.
	CLASS_Config			= 0x00004,  // Load object configuration at construction time.
	CLASS_Transient			= 0x00008,	// This object type can't be saved; null it out at save time.
	CLASS_Parsed            = 0x00010,	// Successfully parsed.
	CLASS_Localized         = 0x00020,  // Class contains localized text.
	CLASS_SafeReplace       = 0x00040,  // Objects of this class can be safely replaced with default or NULL.
	CLASS_RuntimeStatic     = 0x00080,	// Objects of this class are static during gameplay.
	CLASS_NoExport          = 0x00100,  // Don't export to C++ header.
	CLASS_NoUserCreate      = 0x00200,  // Don't allow users to create in the editor.
	CLASS_PerObjectConfig   = 0x00400,  // Handle object configuration on a per-object basis, rather than per-class.
	CLASS_NativeReplication = 0x00800,  // Replication handled in C++.

	// Flags to inherit from base class.
	CLASS_Inherit           = CLASS_Transient | CLASS_Config | CLASS_Localized | CLASS_SafeReplace | CLASS_RuntimeStatic | CLASS_PerObjectConfig,
	CLASS_RecompilerClear   = CLASS_Inherit | CLASS_Abstract | CLASS_NoExport | CLASS_NativeReplication,
};

//
// Flags associated with each property in a class, overriding the
// property's default behavior.
//
enum EPropertyFlags
{
	// Regular flags.
	CPF_Edit		 = 0x00000001, // Property is user-settable in the editor.
	CPF_Const		 = 0x00000002, // Actor's property always matches class's default actor property.
	CPF_Input		 = 0x00000004, // Variable is writable by the input system.
	CPF_ExportObject = 0x00000008, // Object can be exported with actor.
	CPF_OptionalParm = 0x00000010, // Optional parameter (if CPF_Param is set).
	CPF_Net			 = 0x00000020, // Property is relevant to network replication.
	CPF_ConstRef     = 0x00000040, // Reference to a constant object.
	CPF_Parm		 = 0x00000080, // Function/When call parameter.
	CPF_OutParm		 = 0x00000100, // Value is copied out after function call.
	CPF_SkipParm	 = 0x00000200, // Property is a short-circuitable evaluation function parm.
	CPF_ReturnParm	 = 0x00000400, // Return value.
	CPF_CoerceParm	 = 0x00000800, // Coerce args into this function parameter.
	CPF_Native       = 0x00001000, // Property is native: C++ code is responsible for serializing it.
	CPF_Transient    = 0x00002000, // Property is transient: shouldn't be saved, zero-filled at load time.
	CPF_Config       = 0x00004000, // Property should be loaded/saved as permanent profile.
	CPF_Localized    = 0x00008000, // Property should be loaded as localizable text.
	CPF_Travel       = 0x00010000, // Property travels across levels/servers.
	CPF_EditConst    = 0x00020000, // Property is uneditable in the editor.
	CPF_GlobalConfig = 0x00040000, // Load config from base class, not subclass.
	CPF_OnDemand     = 0x00100000, // Object or dynamic array loaded on demand only.
	CPF_New			 = 0x00200000, // Automatically create inner object.
	CPF_NeedCtorLink = 0x00400000, // Fields need construction/destruction.

	// Combinations of flags.
	CPF_ParmFlags           = CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_SkipParm | CPF_ReturnParm | CPF_CoerceParm,
	CPF_PropagateFromStruct = CPF_Const | CPF_Native | CPF_Transient,
};

//
// Flags describing an object instance.
//
enum EObjectFlags
{
	RF_Transactional    = 0x00000001,   // Object is transactional.
	RF_Unreachable		= 0x00000002,	// Object is not reachable on the object graph.
	RF_Public			= 0x00000004,	// Object is visible outside its package.
	RF_TagImp			= 0x00000008,	// Temporary import tag in load/save.
	RF_TagExp			= 0x00000010,	// Temporary export tag in load/save.
	RF_SourceModified   = 0x00000020,   // Modified relative to source files.
	RF_TagGarbage		= 0x00000040,	// Check during garbage collection.
	//
	//
	RF_NeedLoad			= 0x00000200,   // During load, indicates object needs loading.
	RF_HighlightedName  = 0x00000400,	// A hardcoded name which should be syntax-highlighted.
	RF_EliminateObject  = 0x00000400,   // NULL out references to this during garbage collecion.
	RF_InSingularFunc   = 0x00000800,	// In a singular function.
	RF_RemappedName     = 0x00000800,   // Name is remapped.
	RF_Suppress         = 0x00001000,	//warning: Mirrored in UnName.h. Suppressed log name.
	RF_StateChanged     = 0x00001000,   // Object did a state change.
	RF_InEndState       = 0x00002000,   // Within an EndState call.
	RF_Transient        = 0x00004000,	// Don't save object.
	RF_Preloading       = 0x00008000,   // Data is being preloaded from file.
	RF_LoadForClient	= 0x00010000,	// In-file load for client.
	RF_LoadForServer	= 0x00020000,	// In-file load for client.
	RF_LoadForEdit		= 0x00040000,	// In-file load for client.
	RF_Standalone       = 0x00080000,   // Keep object around for editing even if unreferenced.
	RF_NotForClient		= 0x00100000,	// Don't load this object for the game client.
	RF_NotForServer		= 0x00200000,	// Don't load this object for the game server.
	RF_NotForEdit		= 0x00400000,	// Don't load this object for the editor.
	RF_Destroyed        = 0x00800000,	// Object Destroy has already been called.
	RF_NeedPostLoad		= 0x01000000,   // Object needs to be postloaded.
	RF_HasStack         = 0x02000000,	// Has execution stack.
	RF_Native			= 0x04000000,   // Native (UClass only).
	RF_Marked			= 0x08000000,   // Marked (for debugging).
	RF_ErrorShutdown    = 0x10000000,	// ShutdownAfterError called.
	RF_DebugPostLoad    = 0x20000000,   // For debugging Serialize calls.
	RF_DebugSerialize   = 0x40000000,   // For debugging Serialize calls.
	RF_DebugDestroy     = 0x80000000,   // For debugging Destroy calls.
	RF_ContextFlags		= RF_NotForClient | RF_NotForServer | RF_NotForEdit, // All context flags.
	RF_LoadContextFlags	= RF_LoadForClient | RF_LoadForServer | RF_LoadForEdit, // Flags affecting loading.
	RF_Load  			= RF_ContextFlags | RF_LoadContextFlags | RF_Public | RF_Standalone | RF_Native | RF_SourceModified | RF_Transactional | RF_HasStack, // Flags to load from Unrealfiles.
	RF_Keep             = RF_Native | RF_Marked, // Flags to persist across loads.
	RF_ScriptMask		= RF_Transactional | RF_Public | RF_Transient | RF_NotForClient | RF_NotForServer | RF_NotForEdit // Script-accessible flags.
};

/*----------------------------------------------------------------------------
	Core types.
----------------------------------------------------------------------------*/

//
// Globally unique identifier.
//
class CORE_API FGuid
{
public:
	DWORD A,B,C,D;
	FGuid()
	{}
	FGuid( DWORD InA, DWORD InB, DWORD InC, DWORD InD )
	: A(InA), B(InB), C(InC), D(InD)
	{}
	friend UBOOL operator==(const FGuid& X, const FGuid& Y)
		{return X.A==Y.A && X.B==Y.B && X.C==Y.C && X.D==Y.D;}
	friend UBOOL operator!=(const FGuid& X, const FGuid& Y)
		{return X.A!=Y.A || X.B!=Y.B || X.C!=Y.C || X.D!=Y.D;}
	friend FArchive& operator<<( FArchive& Ar, FGuid& G )
	{
		guard(FGuid<<);
		return Ar << G.A << G.B << G.C << G.D;
		unguard;
	}
	TCHAR* String() const
	{
		TCHAR* Result = appStaticString1024();
		appSprintf( Result, TEXT("%08X%08X%08X%08X"), A, B, C, D );
		return Result;
	}
};
inline INT CompareGuids( FGuid* A, FGuid* B )
{
	INT Diff;
	Diff = A->A-B->A; if( Diff ) return Diff;
	Diff = A->B-B->B; if( Diff ) return Diff;
	Diff = A->C-B->C; if( Diff ) return Diff;
	Diff = A->D-B->D; if( Diff ) return Diff;
	return 0;
}

//
// COM IUnknown interface.
//
class CORE_API FUnknown
{
public:
	virtual DWORD STDCALL QueryInterface( const FGuid& RefIID, void** InterfacePtr ) {return 0;}
	virtual DWORD STDCALL AddRef() {return 0;}
	virtual DWORD STDCALL Release() {return 0;}
};

//
// Information about a driver class.
//
class CORE_API FRegistryObjectInfo
{
public:
	FString Object;
	FString Class;
	FString MetaClass;
	FString Description;
	FString Autodetect;
	FRegistryObjectInfo()
	: Object(), Class(), MetaClass(), Description(), Autodetect()
	{}
};

//
// Information about a preferences menu item.
//
class CORE_API FPreferencesInfo
{
public:
	FString Caption;
	FString ParentCaption;
	FString Class;
	FName Category;
	UBOOL Immediate;
	FPreferencesInfo()
	: Caption(), ParentCaption(), Class(), Category(NAME_None), Immediate(0)
	{}
};

/*----------------------------------------------------------------------------
	Core macros.
----------------------------------------------------------------------------*/

// Special canonical package for FindObject, ParseObject.
#define ANY_PACKAGE ((UPackage*)-1)

// Define private default constructor.
#define NO_DEFAULT_CONSTRUCTOR(cls) \
	protected: cls() {} public:

// Guard macros.
#define unguardobjSlow		unguardfSlow(( TEXT("(%s)"), GetFullName() ))
#define unguardobj			unguardf(( TEXT("(%s)"), GetFullName() ))

// Verify the a class definition and C++ definition match up.
#define VERIFY_CLASS_OFFSET(Pre,ClassName,Member) \
	{for( TFieldIterator<UProperty> It( FindObjectChecked<UClass>( Pre##ClassName::StaticClass()->GetOuter(), TEXT(#ClassName) ) ); It; ++It ) \
		if( appStricmp(It->GetName(),TEXT(#Member))==0 ) \
			if( It->Offset != STRUCT_OFFSET(Pre##ClassName,Member) ) \
				appErrorf(TEXT("Class %s Member %s problem: Script=%i C++=%i"), TEXT(#ClassName), TEXT(#Member), It->Offset, STRUCT_OFFSET(Pre##ClassName,Member) );}

// Verify that C++ and script code agree on the size of a class.
#define VERIFY_CLASS_SIZE(ClassName) \
	check(sizeof(ClassName)==ClassName::StaticClass()->GetPropertiesSize());

// Declare the base UObject class.

#if !__STATIC_LINK
#define DECLARE_BASE_CLASS( TClass, TSuperClass, TStaticFlags, TPackage ) \
public: \
	/* Identification */ \
	enum {StaticClassFlags=TStaticFlags}; \
	private: static UClass PrivateStaticClass; public: \
	typedef TSuperClass Super;\
	typedef TClass ThisClass;\
	static UClass* StaticClass() \
		{ return &PrivateStaticClass; } \
	void* operator new( size_t Size, UObject* Outer=(UObject*)GetTransientPackage(), FName Name=NAME_None, DWORD SetFlags=0 ) \
		{ return StaticAllocateObject( StaticClass(), Outer, Name, SetFlags ); } \
	void* operator new( size_t Size, EInternal* Mem ) \
		{ return (void*)Mem; }
#else
#define DECLARE_BASE_CLASS( TClass, TSuperClass, TStaticFlags, TPackage ) \
public: \
	/* Identification */ \
	enum {StaticClassFlags=TStaticFlags}; \
	private: \
	static UClass* PrivateStaticClass; \
	public: \
	typedef TSuperClass Super;\
	typedef TClass ThisClass;\
	static UClass* GetPrivateStaticClass##TClass( TCHAR* Package ); \
	static void InitializePrivateStaticClass##TClass(); \
	static UClass* StaticClass() \
	{ \
		if (!PrivateStaticClass) \
		{ \
			PrivateStaticClass = GetPrivateStaticClass##TClass( TEXT(#TPackage) ); \
			InitializePrivateStaticClass##TClass(); \
		} \
		return PrivateStaticClass; \
	} \
	void* operator new( size_t Size, UObject* Outer=(UObject*)GetTransientPackage(), FName Name=NAME_None, DWORD SetFlags=0 ) \
		{ return StaticAllocateObject( StaticClass(), Outer, Name, SetFlags ); } \
	void* operator new( size_t Size, EInternal* Mem ) \
		{ return (void*)Mem; }
#endif

// Declare a concrete class.
#define DECLARE_CLASS( TClass, TSuperClass, TStaticFlags, TPackage ) \
	DECLARE_BASE_CLASS( TClass, TSuperClass, TStaticFlags, TPackage ) \
	friend FArchive &operator<<( FArchive& Ar, TClass*& Res ) \
		{ return Ar << *(UObject**)&Res; } \
	virtual ~TClass() \
		{ ConditionalDestroy(); } \
	static void InternalConstructor( void* X ) \
		{ new( (EInternal*)X )TClass(); } \

// Declare an abstract class.
#define DECLARE_ABSTRACT_CLASS( TClass, TSuperClass, TStaticFlags, TPackage ) \
	DECLARE_BASE_CLASS( TClass, TSuperClass, TStaticFlags | CLASS_Abstract, TPackage ) \
	friend FArchive &operator<<( FArchive& Ar, TClass*& Res ) \
		{ return Ar << *(UObject**)&Res; } \
	virtual ~TClass() \
		{ ConditionalDestroy(); } \

// Declare that objects of class being defined reside within objects of the specified class.
#define DECLARE_WITHIN( TWithinClass ) \
	typedef TWithinClass WithinClass; \
	TWithinClass* GetOuter##TWithinClass() const { return (TWithinClass*)GetOuter(); }

// Register a class at startup time.
#if _MSC_VER
	#define IMPLEMENT_CLASS(TClass) \
		UClass TClass::PrivateStaticClass \
		( \
			EC_NativeConstructor, \
			sizeof(TClass), \
			TClass::StaticClassFlags, \
			TClass::Super::StaticClass(), \
			TClass::WithinClass::StaticClass(), \
			FGuid(TClass::GUID1,TClass::GUID2,TClass::GUID3,TClass::GUID4), \
			TEXT(#TClass)+1, \
			GPackage, \
			StaticConfigName(), \
			RF_Public | RF_Standalone | RF_Transient | RF_Native, \
			(void(*)(void*))TClass::InternalConstructor, \
			(void(UObject::*)())TClass::StaticConstructor \
		); \
		extern "C" DLL_EXPORT UClass* autoclass##TClass;\
		DLL_EXPORT UClass* autoclass##TClass = TClass::StaticClass();
#elif !__STATIC_LINK
	#define IMPLEMENT_CLASS(TClass) \
		UClass TClass::PrivateStaticClass \
		( \
			EC_NativeConstructor, \
			sizeof(TClass), \
			TClass::StaticClassFlags, \
			TClass::Super::StaticClass(), \
			TClass::WithinClass::StaticClass(), \
			FGuid(TClass::GUID1,TClass::GUID2,TClass::GUID3,TClass::GUID4), \
			TEXT(#TClass)+1, \
			GPackage, \
			StaticConfigName(), \
			RF_Public | RF_Standalone | RF_Transient | RF_Native, \
			(void(*)(void*))TClass::InternalConstructor, \
			(void(UObject::*)())&TClass::StaticConstructor \
		); \
		DLL_EXPORT {UClass* autoclass##TClass = TClass::StaticClass();}
#else
	#define IMPLEMENT_CLASS(TClass) \
		UClass* TClass::PrivateStaticClass = NULL; \
		UClass* TClass::GetPrivateStaticClass##TClass( TCHAR* Package ) \
		{ \
			UClass* ReturnClass; \
			ReturnClass = ::new UClass \
			( \
				EC_StaticConstructor, \
				sizeof(TClass), \
				StaticClassFlags, \
				FGuid(GUID1,GUID2,GUID3,GUID4), \
				TEXT(#TClass)+1, \
				Package, \
				StaticConfigName(), \
				RF_Public | RF_Standalone | RF_Transient | RF_Native, \
				(void(*)(void*))TClass::InternalConstructor, \
				(void(UObject::*)())&TClass::StaticConstructor \
			); \
			check(ReturnClass); \
			return ReturnClass; \
		} \
		/* Called from ::StaticClass after GetPrivateStaticClass */ \
		void TClass::InitializePrivateStaticClass##TClass() \
		{ \
			/* No recursive ::StaticClass calls allowed. Setup extras. */ \
			if (TClass::Super::StaticClass() != TClass::PrivateStaticClass) \
				TClass::PrivateStaticClass->SuperField = TClass::Super::StaticClass(); \
			else \
				TClass::PrivateStaticClass->SuperField = NULL; \
			TClass::PrivateStaticClass->ClassWithin = TClass::WithinClass::StaticClass(); \
			TClass::PrivateStaticClass->SetClass(UClass::StaticClass()); \
			/* Perform UObject native registration. */ \
			if( TClass::PrivateStaticClass->GetInitialized() && TClass::PrivateStaticClass->GetClass()==TClass::PrivateStaticClass->StaticClass() ) \
				TClass::PrivateStaticClass->Register(); \
		}
#endif

// Define the package of the current DLL being compiled.
#if _MSC_VER
	#define IMPLEMENT_PACKAGE(pkg) \
		extern "C" DLL_EXPORT TCHAR GPackage[]; \
		DLL_EXPORT TCHAR GPackage[] = TEXT(#pkg); \
		IMPLEMENT_PACKAGE_PLATFORM(pkg)
#else
	#define IMPLEMENT_PACKAGE(pkg) \
	extern "C" DLL_EXPORT {TCHAR GPackage[] = TEXT(#pkg);} \
		IMPLEMENT_PACKAGE_PLATFORM(pkg)
#endif

/*-----------------------------------------------------------------------------
	UObject.
-----------------------------------------------------------------------------*/

//
// The base class of all objects.
//
class CORE_API UObject
{
	typedef UObject WithinClass;
	enum {GUID1=0,GUID2=0,GUID3=0,GUID4=0};

	// Friends.
	friend class FObjectIterator;
	friend class FActorIterator;
	friend class ULinkerLoad;
	friend class ULinkerSave;
	friend class UPackageMap;
	friend class FArchiveTagUsed;
	friend struct FObjectImport;
	friend struct FObjectExport;

private:
/*	INT						Index;				// Index of object into table.
	UObject*				HashNext;			// Next object in this hash bin.
	FStateFrame*			StateFrame;			// Main script execution stack.
	ULinkerLoad*			_Linker;			// Linker it came from, or NULL if none.
	INT						_LinkerIndex;		// Index of this object in the linker's export map.
	UObject*				Outer;				// Object this object resides in.
	DWORD					ObjectFlags;		// Private EObjectFlags used by object manager.
	FName					Name;				// Name of the object.
	UClass*					Class;	  			// Class the object belongs to.*/


	INT ObjectInternal[7];
	class UObject* Outer;
	INT ObjectFlags;
	FName Name;
	class UClass* Class;


	void AddObject(int);
	static void CacheDrivers(int);
	static UObject * GAutoRegister;
	static int GImportCount;
	static unsigned short * GLanguage;
	static TArray<int> GObjAvailable;
	static int GObjBeginLoadCount;
	static unsigned short * GObjCachedLanguage;
	static TArray<FRegistryObjectInfo> GObjDrivers;
	static UObject * * GObjHash;
	static int GObjInitialized;
	static TArray<UObject *> GObjLoaded;
	static TArray<UObject *> GObjLoaders;
	static int GObjNoRegister;
	static TArray<UObject *> GObjObjects;
	static TMultiMap<FName,FName> * GObjPackageRemap;
	static TArray<FPreferencesInfo> GObjPreferences;
	static int GObjRegisterCount;
	static TArray<UObject *> GObjRegistrants;
	static TArray<UObject *> GObjRoot;
	static UPackage * GObjTransientPkg;
	static ULinkerLoad * GetLoader(int);
	void HashObject(void);
	static FName MakeUniqueObjectName(UObject *,UClass *);
	static UClass PrivateStaticClass;
	static void PurgeGarbage(void);
	static int ResolveName(UObject * &,unsigned short const * &,int,int);
	static void SafeLoadError(unsigned long,unsigned short const *,unsigned short const *,...);
	void SetLinker(ULinkerLoad *,int);
	void UnhashObject(int);


public:


	UObject(UObject const &);
	UObject(enum EInPlaceConstructor,UClass *,UObject *,FName,unsigned long);
	UObject(enum ENativeConstructor,UClass *,unsigned short const *,unsigned short const *,unsigned long);
	UObject(enum EStaticConstructor,unsigned short const *,unsigned short const *,unsigned long);
	UObject(void);

	static void * operator new(unsigned int,UObject *,unsigned short *,unsigned long);
	static void * operator new(unsigned int,UObject *,unsigned short const *,unsigned long);
	static void * operator new(unsigned int,UObject *,FName,unsigned long);
	static void * operator new(unsigned int,enum EInternal *);

	static void operator delete(void *,unsigned int);
	UObject & operator=(UObject const &);
	void AddToRoot(void);
	static int AttemptDelete(UObject * &,unsigned long,int);
	static void BeginLoad(void);
	static void BindPackage(UPackage *);
	void ClearConfig(UClass *,unsigned short const *);
	void ClearFlags(unsigned long);
	static void CollectGarbage(unsigned long);
	int ConditionalDestroy(void);
	void ConditionalPostLoad(void);
	void ConditionalRegister(void);
	void ConditionalShutdownAfterError(void);
	static UPackage * CreatePackage(UObject *,unsigned short const *);
	static int DeletePackage(unsigned short const *);
	static void DumpProfilingData(FOutputDevice &);
	static void EndLoad(void);
	static void ExitProperties(unsigned char *,UClass *);
	static void ExportProperties(FOutputDevice &,UClass *,unsigned char *,int,UClass *,unsigned char *);
	int FindArrayProperty(FString,FArray * *,int *);
	int FindBoolProperty(FString,int *);
	int FindFNameProperty(FString,FName *);
	int FindFloatProperty(FString,float *);
	UFunction * FindFunction(FName,int = 0);
	UFunction * FindFunctionChecked(FName,int = 0);
	int FindIntProperty(FString,int *);
	UField * FindObjectField(FName,int);
	int FindObjectProperty(FString,UObject * *);
	int FindPointerProperty(FString,unsigned long *);
	UState * FindState(FName);
	int FindStructProperty(FString,UStruct * *);
	UClass * GetClass(void)const ;
	FName const GetFName(void)const ;
	unsigned long GetFlags(void)const ;
	unsigned short const * GetFullName(unsigned short * P = NULL)const ;
	unsigned long GetIndex(void)const ;
	static UObject * GetIndexedObject(int);
	static int GetInitialized(void);
	static unsigned short const * GetLanguage(void);
	ULinkerLoad * GetLinker(void)const ;
	int GetLinkerIndex(void)const ;
	static TArray<UObject *> GetLoaderList(void);
	unsigned short const * GetName(void)const ;
	static int GetObjectHash(FName,int);
	UObject * GetOuter(void)const ;
	static ULinkerLoad * GetPackageLinker(UObject *,unsigned short const *,unsigned long,UPackageMap *,FGuid *,int);
	unsigned short const * GetPathName(UObject *,unsigned short *)const ;
	static void GetPreferences(TArray<FPreferencesInfo> &,unsigned short const *,int);
	static void GetReferencers(UObject *,TArray<UObject *> &);
	static void GetRegistryObjects(TArray<FRegistryObjectInfo> &,UClass *,UClass *,int);
	static void GetShortestRoute(UObject *,TArray<UObject *> &);
	struct FStateFrame * GetStateFrame(void)const ;
	static UPackage * GetTransientPackage(void);
	static void GlobalSetProperty(unsigned short const *,UClass *,UProperty *,int,int);
	void InitClassDefaultObject(UClass *,int);
	static void InitProperties(unsigned char *,int,UClass *,unsigned char *,int,UObject *,UObject *,int);
	static void InternalConstructor(void *);
	int IsA(UClass *)const ;
	int IsIn(UObject *)const ;
	int IsProbing(FName);
	static int IsReferenced(UObject * &,unsigned long,int);
	int IsValid(void);
	void LoadConfig(int,UClass *,unsigned short const *,int,int,int,UProperty *);
	void LoadLocalized(void);
	static UObject * LoadPackage(UObject *,unsigned short const *,unsigned long);
	void ParseParms(unsigned short const *);
	void ProcessInternal(struct FFrame &,void * const);
	static void ProcessRegistrants(void);
	void RemoveFromRoot(void);
	static void ResetConfig(UClass *,unsigned short const *);
	static void ResetLoaders(UObject *,int,int);
	static void ResetProfilingData(void);
	void SaveConfig(unsigned long,unsigned short const *);
	static int SavePackage(UObject *,UObject *,unsigned long,unsigned short const *,FOutputDevice *,ULinkerLoad *);
	static void SerializeRootSet(FArchive &,unsigned long,unsigned long);
	void SetClass(UClass *);
	void SetFlags(unsigned long);
	static void SetLanguage(unsigned short const *);
	static UObject * StaticAllocateObject( UClass* Class, UObject* InOuter=(UObject*)GetTransientPackage(), FName Name=NAME_None, DWORD SetFlags=0, UObject* Template=NULL, FOutputDevice* Error=GError, UObject* Ptr=NULL, UObject *Dunno=NULL );
	static UClass * StaticClass(void);
	static unsigned short const * StaticConfigName(void);
	static UObject * StaticConstructObject( UClass* Class, UObject* InOuter=(UObject*)GetTransientPackage(), FName Name=NAME_None, DWORD SetFlags=0, UObject* Template=NULL, FOutputDevice* Error=GError ,UObject *Dunno=NULL);
	void StaticConstructor(void);
	static int StaticExec(unsigned short const *,FOutputDevice &);
	static void StaticExit(void);
	static UObject * StaticFindObject(UClass *,UObject *,unsigned short const *,int);
	static UObject * StaticFindObjectChecked(UClass *,UObject *,unsigned short const *,int);
	static void StaticInit(void);
	static UClass * StaticLoadClass(UClass *,UObject *,unsigned short const *,unsigned short const *,unsigned long,UPackageMap *);
	static UObject * StaticLoadObject(UClass *,UObject *,unsigned short const *,unsigned short const *,unsigned long,UPackageMap *);
	static void StaticShutdownAfterError(void);
	static void StaticTick(void);
	static void VerifyLinker(ULinkerLoad *);

	virtual unsigned long QueryInterface(FGuid const &,void * *);
	virtual unsigned long AddRef(void);
	virtual unsigned long Release(void);
	virtual ~UObject(void);
	virtual void ProcessEvent(UFunction *,void *,void * Resul = NULL);
	virtual void ProcessDelegate(FName,struct FScriptDelegate *,void *,void *);
	virtual void ProcessState(float);
	virtual int ProcessRemoteFunction(UFunction *,void *,struct FFrame *);
	virtual void Modify(void);
	virtual void PostLoad(void);
	virtual void Destroy(void);
	virtual void Serialize(FArchive &);
	virtual int IsPendingKill(void);
	virtual enum EGotoState GotoState(FName);
	virtual int GotoLabel(FName);
	virtual void ScriptInit(void* LevelInfo);
	virtual void InitExecution(void);
	virtual void ShutdownAfterError(void);
	virtual void PostEditChange(void);
	virtual void PreEditUndo(void);
	virtual void PostEditUndo(void);
	virtual void CallFunction(struct FFrame &,void * const,UFunction *);
	virtual int ScriptConsoleExec(unsigned short const *,FOutputDevice &,UObject *);
	virtual void Register(void);
	virtual void LanguageChange(void);
	virtual void Rename(unsigned short const *,UObject *);
	virtual void NetDirty(UProperty *);
	virtual void ExecutingBadStateCode(struct FFrame &);

	#define DECLARE_FUNCTION(func) void func( FFrame& TheStack, RESULT_DECL );


	void eventBeginState(void);
	void eventCreated(void);
	void eventEndState(void);
	void execAbs(struct FFrame &,void * const);
	void execAcos(struct FFrame &,void * const);
	void execAddAdd_Byte(struct FFrame &,void * const);
	void execAddAdd_Int(struct FFrame &,void * const);
	void execAddAdd_PreByte(struct FFrame &,void * const);
	void execAddAdd_PreInt(struct FFrame &,void * const);
	void execAddEqual_ByteByte(struct FFrame &,void * const);
	void execAddEqual_FloatFloat(struct FFrame &,void * const);
	void execAddEqual_IntInt(struct FFrame &,void * const);
	void execAddEqual_RotatorRotator(struct FFrame &,void * const);
	void execAddEqual_VectorVector(struct FFrame &,void * const);
	void execAdd_FloatFloat(struct FFrame &,void * const);
	void execAdd_IntInt(struct FFrame &,void * const);
	void execAdd_RotatorRotator(struct FFrame &,void * const);
	void execAdd_VectorVector(struct FFrame &,void * const);
	void execAllObjects(struct FFrame &,void * const);
	void execAndAnd_BoolBool(struct FFrame &,void * const);
	void execAnd_IntInt(struct FFrame &,void * const);
	void execArrayElement(struct FFrame &,void * const);
	void execAsc(struct FFrame &,void * const);
	void execAsin(struct FFrame &,void * const);
	void execAssert(struct FFrame &,void * const);
	void execAtEqual_StringString(struct FFrame &,void * const);
	void execAt_StringString(struct FFrame &,void * const);
	void execAtan(struct FFrame &,void * const);
	void execBoolToByte(struct FFrame &,void * const);
	void execBoolToFloat(struct FFrame &,void * const);
	void execBoolToInt(struct FFrame &,void * const);
	void execBoolToString(struct FFrame &,void * const);
	void execBoolVariable(struct FFrame &,void * const);
	void execByteConst(struct FFrame &,void * const);
	void execByteToBool(struct FFrame &,void * const);
	void execByteToFloat(struct FFrame &,void * const);
	void execByteToInt(struct FFrame &,void * const);
	void execByteToString(struct FFrame &,void * const);
	void execCaps(struct FFrame &,void * const);
	void execCase(struct FFrame &,void * const);
	void execCeil(struct FFrame &,void * const);
	void execChr(struct FFrame &,void * const);
	void execClamp(struct FFrame &,void * const);
	void execClassContext(struct FFrame &,void * const);
	void execClassIsChildOf(struct FFrame &,void * const);
	void execClearConfig(struct FFrame &,void * const);
	void execClockwiseFrom_IntInt(struct FFrame &,void * const);
	void execComplementEqual_FloatFloat(struct FFrame &,void * const);
	void execComplementEqual_StringString(struct FFrame &,void * const);
	void execComplement_PreInt(struct FFrame &,void * const);
	void execConcatEqual_StringString(struct FFrame &,void * const);
	void execConcat_StringString(struct FFrame &,void * const);
	void execContext(struct FFrame &,void * const);
	void execCos(struct FFrame &,void * const);
	void execCross_VectorVector(struct FFrame &,void * const);
	void execDebugInfo(struct FFrame &,void * const);
	void execDefaultVariable(struct FFrame &,void * const);
	void execDelegateFunction(struct FFrame &,void * const);
	void execDelegateProperty(struct FFrame &,void * const);
	void execDisable(struct FFrame &,void * const);
	void execDivide(struct FFrame &,void * const);
	void execDivideEqual_ByteByte(struct FFrame &,void * const);
	void execDivideEqual_FloatFloat(struct FFrame &,void * const);
	void execDivideEqual_IntFloat(struct FFrame &,void * const);
	void execDivideEqual_RotatorFloat(struct FFrame &,void * const);
	void execDivideEqual_VectorFloat(struct FFrame &,void * const);
	void execDivide_FloatFloat(struct FFrame &,void * const);
	void execDivide_IntInt(struct FFrame &,void * const);
	void execDivide_RotatorFloat(struct FFrame &,void * const);
	void execDivide_VectorFloat(struct FFrame &,void * const);
	void execDot_VectorVector(struct FFrame &,void * const);
	void execDynArrayElement(struct FFrame &,void * const);
	void execDynArrayInsert(struct FFrame &,void * const);
	void execDynArrayLength(struct FFrame &,void * const);
	void execDynArrayRemove(struct FFrame &,void * const);
	void execDynamicCast(struct FFrame &,void * const);
	void execDynamicLoadObject(struct FFrame &,void * const);
	void execEatString(struct FFrame &,void * const);
	void execEnable(struct FFrame &,void * const);
	void execEndFunctionParms(struct FFrame &,void * const);
	void execEndOfScript(struct FFrame &,void * const);
	void execEqualEqual_BoolBool(struct FFrame &,void * const);
	void execEqualEqual_FloatFloat(struct FFrame &,void * const);
	void execEqualEqual_IntInt(struct FFrame &,void * const);
	void execEqualEqual_NameName(struct FFrame &,void * const);
	void execEqualEqual_ObjectObject(struct FFrame &,void * const);
	void execEqualEqual_RotatorRotator(struct FFrame &,void * const);
	void execEqualEqual_StringString(struct FFrame &,void * const);
	void execEqualEqual_VectorVector(struct FFrame &,void * const);
	void execEval(struct FFrame &,void * const);
	void execExp(struct FFrame &,void * const);
	void execFClamp(struct FFrame &,void * const);
	void execFMax(struct FFrame &,void * const);
	void execFMin(struct FFrame &,void * const);
	void execFRand(struct FFrame &,void * const);
	void execFalse(struct FFrame &,void * const);
	void execFinalFunction(struct FFrame &,void * const);
	void execFindObject(struct FFrame &,void * const);
	void execFloatConst(struct FFrame &,void * const);
	void execFloatToBool(struct FFrame &,void * const);
	void execFloatToByte(struct FFrame &,void * const);
	void execFloatToInt(struct FFrame &,void * const);
	void execFloatToString(struct FFrame &,void * const);
	void execGetAxes(struct FFrame &,void * const);
	void execGetEnum(struct FFrame &,void * const);
	void execGetPerObjectNames(struct FFrame &,void * const);
	void execGetPropertyText(struct FFrame &,void * const);
	void execGetReferencers(struct FFrame &,void * const);
	void execGetStateName(struct FFrame &,void * const);
	void execGetUnAxes(struct FFrame &,void * const);
	void execGlobalFunction(struct FFrame &,void * const);
	void execGotoLabel(struct FFrame &,void * const);
	void execGotoState(struct FFrame &,void * const);
	void execGreaterEqual_FloatFloat(struct FFrame &,void * const);
	void execGreaterEqual_IntInt(struct FFrame &,void * const);
	void execGreaterEqual_StringString(struct FFrame &,void * const);
	void execGreaterGreaterGreater_IntInt(struct FFrame &,void * const);
	void execGreaterGreater_IntInt(struct FFrame &,void * const);
	void execGreaterGreater_VectorRotator(struct FFrame &,void * const);
	void execGreater_FloatFloat(struct FFrame &,void * const);
	void execGreater_IntInt(struct FFrame &,void * const);
	void execGreater_StringString(struct FFrame &,void * const);
	void execHighNative0(struct FFrame &,void * const);
	void execHighNative10(struct FFrame &,void * const);
	void execHighNative11(struct FFrame &,void * const);
	void execHighNative12(struct FFrame &,void * const);
	void execHighNative13(struct FFrame &,void * const);
	void execHighNative14(struct FFrame &,void * const);
	void execHighNative15(struct FFrame &,void * const);
	void execHighNative1(struct FFrame &,void * const);
	void execHighNative2(struct FFrame &,void * const);
	void execHighNative3(struct FFrame &,void * const);
	void execHighNative4(struct FFrame &,void * const);
	void execHighNative5(struct FFrame &,void * const);
	void execHighNative6(struct FFrame &,void * const);
	void execHighNative7(struct FFrame &,void * const);
	void execHighNative8(struct FFrame &,void * const);
	void execHighNative9(struct FFrame &,void * const);
	void execInStr(struct FFrame &,void * const);
	void execInstanceVariable(struct FFrame &,void * const);
	void execIntConst(struct FFrame &,void * const);
	void execIntConstByte(struct FFrame &,void * const);
	void execIntOne(struct FFrame &,void * const);
	void execIntToBool(struct FFrame &,void * const);
	void execIntToByte(struct FFrame &,void * const);
	void execIntToFloat(struct FFrame &,void * const);
	void execIntToString(struct FFrame &,void * const);
	void execIntZero(struct FFrame &,void * const);
	void execInterpCurveEval(struct FFrame &,void * const);
	void execInterpCurveGetInputDomain(struct FFrame &,void * const);
	void execInterpCurveGetOutputRange(struct FFrame &,void * const);
	void execInvert(struct FFrame &,void * const);
	void execIsA(struct FFrame &,void * const);
	void execIsInState(struct FFrame &,void * const);
	void execIsOnConsole(struct FFrame &,void * const);
	void execIsSoaking(struct FFrame &,void * const);
	void execIterator(struct FFrame &,void * const);
	void execJump(struct FFrame &,void * const);
	void execJumpIfNot(struct FFrame &,void * const);
	void execLeft(struct FFrame &,void * const);
	void execLen(struct FFrame &,void * const);
	void execLerp(struct FFrame &,void * const);
	void execLessEqual_FloatFloat(struct FFrame &,void * const);
	void execLessEqual_IntInt(struct FFrame &,void * const);
	void execLessEqual_StringString(struct FFrame &,void * const);
	void execLessLess_IntInt(struct FFrame &,void * const);
	void execLessLess_VectorRotator(struct FFrame &,void * const);
	void execLess_FloatFloat(struct FFrame &,void * const);
	void execLess_IntInt(struct FFrame &,void * const);
	void execLess_StringString(struct FFrame &,void * const);
	void execLet(struct FFrame &,void * const);
	void execLetBool(struct FFrame &,void * const);
	void execLetDelegate(struct FFrame &,void * const);
	void execLocalVariable(struct FFrame &,void * const);
	void execLocalize(struct FFrame &,void * const);
	void execLocs(struct FFrame &,void * const);
	void execLog(struct FFrame &,void * const);
	void execLoge(struct FFrame &,void * const);
	void execMax(struct FFrame &,void * const);
	void execMetaCast(struct FFrame &,void * const);
	void execMid(struct FFrame &,void * const);
	void execMin(struct FFrame &,void * const);
	void execMirrorVectorByNormal(struct FFrame &,void * const);
	void execMultiplyEqual_ByteByte(struct FFrame &,void * const);
	void execMultiplyEqual_FloatFloat(struct FFrame &,void * const);
	void execMultiplyEqual_IntFloat(struct FFrame &,void * const);
	void execMultiplyEqual_RotatorFloat(struct FFrame &,void * const);
	void execMultiplyEqual_VectorFloat(struct FFrame &,void * const);
	void execMultiplyEqual_VectorVector(struct FFrame &,void * const);
	void execMultiplyMultiply_FloatFloat(struct FFrame &,void * const);
	void execMultiply_FloatFloat(struct FFrame &,void * const);
	void execMultiply_FloatRotator(struct FFrame &,void * const);
	void execMultiply_FloatVector(struct FFrame &,void * const);
	void execMultiply_IntInt(struct FFrame &,void * const);
	void execMultiply_RotatorFloat(struct FFrame &,void * const);
	void execMultiply_VectorFloat(struct FFrame &,void * const);
	void execMultiply_VectorVector(struct FFrame &,void * const);
	void execNameConst(struct FFrame &,void * const);
	void execNameToBool(struct FFrame &,void * const);
	void execNameToString(struct FFrame &,void * const);
	void execNativeParm(struct FFrame &,void * const);
	void execNew(struct FFrame &,void * const);
	void execNoObject(struct FFrame &,void * const);
	void execNormal(struct FFrame &,void * const);
	void execNormalize(struct FFrame &,void * const);
	void execNotEqual_BoolBool(struct FFrame &,void * const);
	void execNotEqual_FloatFloat(struct FFrame &,void * const);
	void execNotEqual_IntInt(struct FFrame &,void * const);
	void execNotEqual_NameName(struct FFrame &,void * const);
	void execNotEqual_ObjectObject(struct FFrame &,void * const);
	void execNotEqual_RotatorRotator(struct FFrame &,void * const);
	void execNotEqual_StringString(struct FFrame &,void * const);
	void execNotEqual_VectorVector(struct FFrame &,void * const);
	void execNot_PreBool(struct FFrame &,void * const);
	void execNothing(struct FFrame &,void * const);
	void execObjectConst(struct FFrame &,void * const);
	void execObjectToBool(struct FFrame &,void * const);
	void execObjectToString(struct FFrame &,void * const);
	void execOrOr_BoolBool(struct FFrame &,void * const);
	void execOr_IntInt(struct FFrame &,void * const);
	void execOrthoRotation(struct FFrame &,void * const);
	void execPercent_FloatFloat(struct FFrame &,void * const);
	void execPlatformIs64Bit(struct FFrame &,void * const);
	void execPlatformIsMacOS(struct FFrame &,void * const);
	void execPlatformIsUnix(struct FFrame &,void * const);
	void execPlatformIsWindows(struct FFrame &,void * const);
	void execPrimitiveCast(struct FFrame &,void * const);
	void execQuatFindBetween(struct FFrame &,void * const);
	void execQuatFromAxisAndAngle(struct FFrame &,void * const);
	void execQuatFromRotator(struct FFrame &,void * const);
	void execQuatInvert(struct FFrame &,void * const);
	void execQuatProduct(struct FFrame &,void * const);
	void execQuatRotateVector(struct FFrame &,void * const);
	void execQuatSlerp(struct FFrame &,void * const);
	void execQuatToRotator(struct FFrame &,void * const);
	void execRand(struct FFrame &,void * const);
	void execRepl(struct FFrame &,void * const);
	void execResetConfig(struct FFrame &,void * const);
	void execRight(struct FFrame &,void * const);
	void execRotRand(struct FFrame &,void * const);
	void execRotationConst(struct FFrame &,void * const);
	void execRotatorToBool(struct FFrame &,void * const);
	void execRotatorToString(struct FFrame &,void * const);
	void execRotatorToVector(struct FFrame &,void * const);
	void execRound(struct FFrame &,void * const);
	void execSaveConfig(struct FFrame &,void * const);
	void execSelf(struct FFrame &,void * const);
	void execSetPropertyText(struct FFrame &,void * const);
	void execSin(struct FFrame &,void * const);
	void execSmerp(struct FFrame &,void * const);
	void execSplit(struct FFrame &,void * const);
	void execSqrt(struct FFrame &,void * const);
	void execSquare(struct FFrame &,void * const);
	void execStaticClearConfig(struct FFrame &,void * const);
	void execStaticSaveConfig(struct FFrame &,void * const);
	void execStop(struct FFrame &,void * const);
	void execStopWatch(struct FFrame &,void * const);
	void execStrCmp(struct FFrame &,void * const);
	void execStringConst(struct FFrame &,void * const);
	void execStringToBool(struct FFrame &,void * const);
	void execStringToByte(struct FFrame &,void * const);
	void execStringToFloat(struct FFrame &,void * const);
	void execStringToInt(struct FFrame &,void * const);
	void execStringToRotator(struct FFrame &,void * const);
	void execStringToVector(struct FFrame &,void * const);
	void execStructCmpEq(struct FFrame &,void * const);
	void execStructCmpNe(struct FFrame &,void * const);
	void execStructMember(struct FFrame &,void * const);
	void execSubtractEqual_ByteByte(struct FFrame &,void * const);
	void execSubtractEqual_FloatFloat(struct FFrame &,void * const);
	void execSubtractEqual_IntInt(struct FFrame &,void * const);
	void execSubtractEqual_RotatorRotator(struct FFrame &,void * const);
	void execSubtractEqual_StringString(struct FFrame &,void * const);
	void execSubtractEqual_VectorVector(struct FFrame &,void * const);
	void execSubtractSubtract_Byte(struct FFrame &,void * const);
	void execSubtractSubtract_Int(struct FFrame &,void * const);
	void execSubtractSubtract_PreByte(struct FFrame &,void * const);
	void execSubtractSubtract_PreInt(struct FFrame &,void * const);
	void execSubtract_FloatFloat(struct FFrame &,void * const);
	void execSubtract_IntInt(struct FFrame &,void * const);
	void execSubtract_PreFloat(struct FFrame &,void * const);
	void execSubtract_PreInt(struct FFrame &,void * const);
	void execSubtract_PreVector(struct FFrame &,void * const);
	void execSubtract_RotatorRotator(struct FFrame &,void * const);
	void execSubtract_VectorVector(struct FFrame &,void * const);
	void execSwitch(struct FFrame &,void * const);
	void execTan(struct FFrame &,void * const);
	void execTrue(struct FFrame &,void * const);
	void execUndefined(struct FFrame &,void * const);
	void execUnicodeStringConst(struct FFrame &,void * const);
	void execVRand(struct FFrame &,void * const);
	void execVSize(struct FFrame &,void * const);
	void execVectorConst(struct FFrame &,void * const);
	void execVectorToBool(struct FFrame &,void * const);
	void execVectorToRotator(struct FFrame &,void * const);
	void execVectorToString(struct FFrame &,void * const);
	void execVirtualFunction(struct FFrame &,void * const);
	void execWarn(struct FFrame &,void * const);
	void execXorXor_BoolBool(struct FFrame &,void * const);
	void execXor_IntInt(struct FFrame &,void * const);

};

/*----------------------------------------------------------------------------
	Core templates.
----------------------------------------------------------------------------*/

// Hash function.
inline DWORD GetTypeHash( const UObject* A )
{
	return A ? A->GetIndex() : 0;
}

// Parse an object name in the input stream.
template< class T > UBOOL ParseObject( const TCHAR* Stream, const TCHAR* Match, T*& Obj, UObject* Outer )
{
	return ParseObject( Stream, Match, T::StaticClass(), *(UObject **)&Obj, Outer );
}

// Find an optional object.
template< class T > T* FindObject( UObject* Outer, const TCHAR* Name, UBOOL ExactClass=0 )
{
	return (T*)UObject::StaticFindObject( T::StaticClass(), Outer, Name, ExactClass );
}

// Find an object, no failure allowed.
template< class T > T* FindObjectChecked( UObject* Outer, const TCHAR* Name, UBOOL ExactClass=0 )
{
	return (T*)UObject::StaticFindObjectChecked( T::StaticClass(), Outer, Name, ExactClass );
}

// Dynamically cast an object type-safely.
template< class T > T* Cast( UObject* Src )
{
	return Src && Src->IsA(T::StaticClass()) ? (T*)Src : NULL;
}
template< class T, class U > T* CastChecked( U* Src )
{
	if( !Src || !Src->IsA(T::StaticClass()) )
		appErrorf( TEXT("Cast of %s to %s failed"), Src ? Src->GetFullName() : TEXT("NULL"), T::StaticClass()->GetName() );
	return (T*)Src;
}

// Construct an object of a particular class.
template< class T > T* ConstructObject( UClass* Class, UObject* Outer=(UObject*)-1, FName Name=NAME_None, DWORD SetFlags=0 )
{
	check(Class->IsChildOf(T::StaticClass()));
	if( Outer==(UObject*)-1 )
		Outer = UObject::GetTransientPackage();
	return (T*)UObject::StaticConstructObject( Class, Outer, Name, SetFlags );
}

// Load an object.
template< class T > T* LoadObject( UObject* Outer, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox )
{
	return (T*)UObject::StaticLoadObject( T::StaticClass(), Outer, Name, Filename, LoadFlags, Sandbox );
}

// Load a class object.
template< class T > UClass* LoadClass( UObject* Outer, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox )
{
	return UObject::StaticLoadClass( T::StaticClass(), Outer, Name, Filename, LoadFlags, Sandbox );
}

// Get default object of a class.
template< class T > T* GetDefault()
{
	return (T*)&T::StaticClass()->Defaults(0);
}

/*----------------------------------------------------------------------------
	Object iterators.
----------------------------------------------------------------------------*/

//
// Class for iterating through all objects.
//
class FObjectIterator
{
public:
	FObjectIterator( UClass* InClass=UObject::StaticClass() )
	:	Class( InClass ), Index( -1 )
	{
		check(Class);
		++*this;
	}
	void operator++()
	{
		while( ++Index<UObject::GObjObjects.Num() && (!UObject::GObjObjects(Index) || !UObject::GObjObjects(Index)->IsA(Class)) );
	}
	UObject* operator*()
	{
		return UObject::GObjObjects(Index);
	}
	UObject* operator->()
	{
		return UObject::GObjObjects(Index);
	}
	operator UBOOL()
	{
		return Index<UObject::GObjObjects.Num();
	}
protected:
	UClass* Class;
	INT Index;
};

//
// Class for iterating through all objects which inherit from a
// specified base class.
//
template< class T > class TObjectIterator : public FObjectIterator
{
public:
	TObjectIterator()
	:	FObjectIterator( T::StaticClass() )
	{}
	T* operator* ()
	{
		return (T*)FObjectIterator::operator*();
	}
	T* operator-> ()
	{
		return (T*)FObjectIterator::operator->();
	}
};

#define AUTO_INITIALIZE_REGISTRANTS \
	UObject::StaticClass(); \
	UClass::StaticClass(); \
	USubsystem::StaticClass(); \
	USystem::StaticClass(); \
	UProperty::StaticClass(); \
	UStructProperty::StaticClass(); \
	UField::StaticClass(); \
	UMapProperty::StaticClass(); \
	UArrayProperty::StaticClass(); \
	UFixedArrayProperty::StaticClass(); \
	UStrProperty::StaticClass(); \
	UNameProperty::StaticClass(); \
	UClassProperty::StaticClass(); \
	UObjectProperty::StaticClass(); \
	UFloatProperty::StaticClass(); \
	UBoolProperty::StaticClass(); \
	UIntProperty::StaticClass(); \
	UByteProperty::StaticClass(); \
	ULanguage::StaticClass(); \
	UTextBufferFactory::StaticClass(); \
	UFactory::StaticClass(); \
	UPackage::StaticClass(); \
	UCommandlet::StaticClass(); \
	ULinkerSave::StaticClass(); \
	ULinker::StaticClass(); \
	ULinkerLoad::StaticClass(); \
	UEnum::StaticClass(); \
	UTextBuffer::StaticClass(); \
	UPackageMap::StaticClass(); \
	UConst::StaticClass(); \
	UFunction::StaticClass(); \
	UStruct::StaticClass();

/*----------------------------------------------------------------------------
	The End.
----------------------------------------------------------------------------*/
