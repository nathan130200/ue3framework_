/*
#############################################################################################
# Bullet Run (Unknown) SDK
# ========================================================================================= #
# File: Core_classes.h
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff
#define CONST_MAX_WEAPON_CODES                                   11
#define CONST_TEAM_MaxTeams                                      2
#define CONST_TEAM_Terrorists                                    1
#define CONST_TEAM_Delta                                         0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x003C
class UObject
{
public:
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    HashNext;                                         		// 0x0004 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x0018 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

public:
	static TArray< UObject* >* GObjObjects() 
	{ 
		TArray< UObject* >* ObjectArray = (TArray< UObject* >*) GObjects; 
		return ObjectArray; 
	}

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

public:
	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x00BE4150 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x004720B0 (0x04)
	virtual void VirtualFunction02 ( );																			// 0x00470120 (0x08)
	virtual void VirtualFunction03 ( );																			// 0x00E14620 (0x0C)
	virtual void VirtualFunction04 ( );																			// 0x00608CE0 (0x10)
	virtual void VirtualFunction05 ( );																			// 0x00DBAE00 (0x14)
	virtual void VirtualFunction06 ( );																			// 0x004AC8F0 (0x18)
	virtual void VirtualFunction07 ( );																			// 0x004AC930 (0x1C)
	virtual void VirtualFunction08 ( );																			// 0x00446F10 (0x20)
	virtual void VirtualFunction09 ( );																			// 0x00BE4150 (0x24)
	virtual void VirtualFunction10 ( );																			// 0x004B1B00 (0x28)
	virtual void VirtualFunction11 ( );																			// 0x00BE4150 (0x2C)
	virtual void VirtualFunction12 ( );																			// 0x004A8A80 (0x30)
	virtual void VirtualFunction13 ( );																			// 0x00464BE0 (0x34)
	virtual void VirtualFunction14 ( );																			// 0x0046E230 (0x38)
	virtual void VirtualFunction15 ( );																			// 0x00431BD0 (0x3C)
	virtual void VirtualFunction16 ( );																			// 0x00DBAE00 (0x40)
	virtual void VirtualFunction17 ( );																			// 0x004A9340 (0x44)
	virtual void VirtualFunction18 ( );																			// 0x004B37F0 (0x48)
	virtual void VirtualFunction19 ( );																			// 0x004ADF80 (0x4C)
	virtual void VirtualFunction20 ( );																			// 0x004A9420 (0x50)
	virtual void VirtualFunction21 ( );																			// 0x004A7F50 (0x54)
	virtual void VirtualFunction22 ( );																			// 0x004A7F90 (0x58)
	virtual void VirtualFunction23 ( );																			// 0x004A7F20 (0x5C)
	virtual void VirtualFunction24 ( );																			// 0x00DBAE00 (0x60)
	virtual void VirtualFunction25 ( );																			// 0x00DBAE00 (0x64)
	virtual void VirtualFunction26 ( );																			// 0x00E13960 (0x68)
	virtual void VirtualFunction27 ( );																			// 0x004A7F80 (0x6C)
	virtual void VirtualFunction28 ( );																			// 0x004A7F90 (0x70)
	virtual void VirtualFunction29 ( );																			// 0x004A7F20 (0x74)
	virtual void VirtualFunction30 ( );																			// 0x004A7F90 (0x78)
	virtual void VirtualFunction31 ( );																			// 0x004A7F20 (0x7C)
	virtual void VirtualFunction32 ( );																			// 0x004AC3F0 (0x80)
	virtual void VirtualFunction33 ( );																			// 0x004A9510 (0x84)
	virtual void VirtualFunction34 ( );																			// 0x004A9700 (0x88)
	virtual void VirtualFunction35 ( );																			// 0x00DBAE00 (0x8C)
	virtual void VirtualFunction36 ( );																			// 0x0045ED10 (0x90)
	virtual void VirtualFunction37 ( );																			// 0x004BB4B0 (0x94)
	virtual void VirtualFunction38 ( );																			// 0x00403580 (0x98)
	virtual void VirtualFunction39 ( );																			// 0x004035B0 (0x9C)
	virtual void VirtualFunction40 ( );																			// 0x004035E0 (0xA0)
	virtual void VirtualFunction41 ( );																			// 0x00C95620 (0xA4)
	virtual void VirtualFunction42 ( );																			// 0x004042B0 (0xA8)
	virtual void VirtualFunction43 ( );																			// 0x00C95620 (0xAC)
	virtual void VirtualFunction44 ( );																			// 0x00E13960 (0xB0)
	virtual void VirtualFunction45 ( );																			// 0x00E13960 (0xB4)
	virtual void VirtualFunction46 ( );																			// 0x00DBAE00 (0xB8)
	virtual void VirtualFunction47 ( );																			// 0x00C95620 (0xBC)
	virtual void VirtualFunction48 ( );																			// 0x0095BF80 (0xC0)
	virtual void VirtualFunction49 ( );																			// 0x00967B40 (0xC4)
	virtual void VirtualFunction50 ( );																			// 0x0045ED90 (0xC8)
	virtual void VirtualFunction51 ( );																			// 0x00469050 (0xCC)
	virtual void VirtualFunction52 ( );																			// 0x00608CE0 (0xD0)
	virtual void VirtualFunction53 ( );																			// 0x00608CE0 (0xD4)
	virtual void VirtualFunction54 ( );																			// 0x00446D90 (0xD8)
	virtual void VirtualFunction55 ( );																			// 0x0046FE70 (0xDC)
	virtual void VirtualFunction56 ( );																			// 0x004AB530 (0xE0)
	virtual void VirtualFunction57 ( );																			// 0x00888E80 (0xE4)
	virtual void VirtualFunction58 ( );																			// 0x004A7F00 (0xE8)
	virtual void VirtualFunction59 ( );																			// 0x004AD650 (0xEC)
	virtual void VirtualFunction60 ( );																			// 0x0042FD70 (0xF0)
	virtual void VirtualFunction61 ( );																			// 0x004BAA60 (0xF4)
	virtual void VirtualFunction62 ( );																			// 0x00C95620 (0xF8)
	virtual void VirtualFunction63 ( );																			// 0x00401760 (0xFC)
	virtual void VirtualFunction64 ( );																			// 0x00401780 (0x100)
	virtual void VirtualFunction65 ( );																			// 0x004C1C10 (0x104)
	virtual void VirtualFunction66 ( );																			// 0x004A82B0 (0x108)
	virtual void VirtualFunction67 ( );																			// 0x0046CC80 (0x10C)
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );				// 0x00463B90 (0x110)
};

// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET
public:
};

// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
public:
};

// Class Core.System
// 0x00BC (0x00FC - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x00F0 (0x000C) MISSED OFFSET
public:
};

// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x003C (0x0084) MISSED OFFSET
public:
};

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET
public:
};

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
public:
};

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET
public:
};

// Class Core.Linker
// 0x012C (0x0168 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x12C ];                           		// 0x003C (0x012C) MISSED OFFSET
public:
};

// Class Core.LinkerSave
// 0x00A4 (0x020C - 0x0168)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xA4 ];                            		// 0x0168 (0x00A4) MISSED OFFSET
public:
};

// Class Core.LinkerLoad
// 0x05C0 (0x0728 - 0x0168)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5C0 ];                           		// 0x0168 (0x05C0) MISSED OFFSET
public:
};

// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:
public:
};

// Class Core.Field
// 0x0004 (0x0040 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY 
public:
};

// Class Core.Struct
// 0x0044 (0x0084 - 0x0040)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                                    // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      SuperField;                                              // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Children;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      PropertySize;                                            // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData01[ 0x30 ];                                   // NOT AUTO-GENERATED PROPERTY 
public:
};

// Class Core.ScriptStruct
// 0x001C (0x00A0 - 0x0084)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0084 (0x001C) MISSED OFFSET
public:
};

// Class Core.Function
// 0x0028 (0x00AC - 0x0084)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                    		// NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      iNative;                                          		// NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData00[ 0x18 ];                                   // NOT AUTO-GENERATED PROPERTY 
public:
};

// Class Core.Property
// 0x0030 (0x0070 - 0x0040)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x30 ];                            		// 0x0040 (0x0030) MISSED OFFSET
public:
};

// Class Core.StructProperty
// 0x0004 (0x0074 - 0x0070)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET
public:
};

// Class Core.StrProperty
// 0x0000 (0x0070 - 0x0070)
class UStrProperty : public UProperty
{
public:
public:
};

// Class Core.ObjectProperty
// 0x0004 (0x0074 - 0x0070)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET
public:
};

// Class Core.ComponentProperty
// 0x0000 (0x0074 - 0x0074)
class UComponentProperty : public UObjectProperty
{
public:
public:
};

// Class Core.ClassProperty
// 0x0004 (0x0078 - 0x0074)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET
public:
};

// Class Core.NameProperty
// 0x0000 (0x0070 - 0x0070)
class UNameProperty : public UProperty
{
public:
public:
};

// Class Core.MapProperty
// 0x0008 (0x0078 - 0x0070)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0070 (0x0008) MISSED OFFSET
public:
};

// Class Core.IntProperty
// 0x0000 (0x0070 - 0x0070)
class UIntProperty : public UProperty
{
public:
public:
};

// Class Core.InterfaceProperty
// 0x0004 (0x0074 - 0x0070)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET
public:
};

// Class Core.FloatProperty
// 0x0000 (0x0070 - 0x0070)
class UFloatProperty : public UProperty
{
public:
public:
};

// Class Core.DelegateProperty
// 0x0008 (0x0078 - 0x0070)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0070 (0x0008) MISSED OFFSET
public:
};

// Class Core.ByteProperty
// 0x0004 (0x0074 - 0x0070)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET
public:
};

// Class Core.BoolProperty
// 0x0004 (0x0074 - 0x0070)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET
public:
};

// Class Core.ArrayProperty
// 0x0004 (0x0074 - 0x0070)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET
public:
};

// Class Core.Enum
// 0x000C (0x004C - 0x0040)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET
public:
};

// Class Core.Const
// 0x000C (0x004C - 0x0040)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET
public:
};

// Class Core.Factory
// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	class UClass*                                      ContextClass;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCreateNew : 1;                                   		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEditAfterNew : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEditorImport : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bText : 1;                                        		// 0x005C (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                AutoPriority;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
};

// Class Core.TextBufferFactory
// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory
{
public:
public:
};

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET
public:
};

// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
public:
};

// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
public:
};

// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
public:
};

// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010] 
public:
};

// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:
public:
};

// Class Core.State
// 0x0048 (0x00CC - 0x0084)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0084 (0x0048) MISSED OFFSET
public:
};

// Class Core.Package
// 0x00AC (0x00E8 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xAC ];                            		// 0x003C (0x00AC) MISSED OFFSET
public:
};

// Class Core.Class
// 0x00FC (0x01C8 - 0x00CC)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0xFC ];                            		// 0x00CC (0x00FC) MISSED OFFSET
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43 ];

		return pClassPointer;
	};

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif