/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Kynapse_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_nbMaxAdditionalData                                4
#define CONST_nbBrainServices                                    5
#define CONST_nbAgents                                           10
#define CONST_nbAdditionalData                                   5
#define CONST_MAX_SANDSTORM_LEVEL                                4
#define CONST_nbWorldServices                                    13
#define CONST_nbTeams                                            5

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Kynapse.HierarchicalBuilder.E_HB_ProjectType
/*enum E_HB_ProjectType
{
	E_HB_Dynamic                                       = 0,
	E_HB_Direct                                        = 1,
	E_HB_Default                                       = 2,
	E_HB_MAX                                           = 3
};*/

// Enum Kynapse.HierarchicalBuilder.EDisplayInEditorType
/*enum EDisplayInEditorType
{
	DisplayEditor_None                                 = 0,
	DisplayEditor_All_Always                           = 1,
	DisplayEditor_Links_Always                         = 2,
	DisplayEditor_All_Selected                         = 3,
	DisplayEditor_Links_Selected                       = 4,
	DisplayEditor_PO_Only                              = 5,
	DisplayEditor_MAX                                  = 6
};*/

// Enum Kynapse.HierarchicalBuilder.EPrelinkCanGoCbk
/*enum EPrelinkCanGoCbk
{
	CanGo_AiMesh                                       = 0,
	CanGo_Capsule                                      = 1,
	CanGo_MAX                                          = 2
};*/

// Enum Kynapse.KynapseBrainServiceHierPathfinder.EHierDataMode
/*enum EHierDataMode
{
	HIERARCHICAL                                       = 0,
	FLAT                                               = 1,
	EHierDataMode_MAX                                  = 2
};*/

// Enum Kynapse.KynapseHierDatabase.EStreamingMode
/*enum EStreamingMode
{
	Automatic                                          = 0,
	Manual                                             = 1,
	EStreamingMode_MAX                                 = 2
};*/

// Enum Kynapse.KynapseWorld.YE_KynapseAssetReference
/*enum YE_KynapseAssetReference
{
	YKAR_BehaviorTree_DoNothing                        = 0,
	YKAR_BehaviorTree_ConvertFromCheapShooterCrouch    = 1,
	YKAR_BehaviorTree_ScriptedGoto                     = 2,
	YKAR_BehaviorTree_GotoCommand                      = 3,
	YKAR_BehaviorTree_GotoInnerRadius                  = 4,
	YKAR_BehaviorTree_HealCommand                      = 5,
	YKAR_BehaviorTree_WaitForHeal                      = 6,
	YKAR_BehaviorTree_AttackCommand                    = 7,
	YKAR_BehaviorTree_SniperAttackCommand              = 8,
	YKAR_BehaviorTree_ThrowGrenade                     = 9,
	YKAR_BehaviorTree_ForcedGoTo                       = 10,
	YKAR_BehaviorTree_MAX                              = 11
};*/

// Enum Kynapse.KynapseWorldServiceMapBuilder.ECollisionModel
/*enum ECollisionModel
{
	A_Sphere                                           = 0,
	B_SweptSphere                                      = 1,
	ECollisionModel_MAX                                = 2
};*/

// Enum Kynapse.KynapseWorldServiceMapBuilder.EProcessStep
/*enum EProcessStep
{
	A_Exploration                                      = 0,
	B_Analysis                                         = 1,
	C_GraphCreation                                    = 2,
	D_GraphOptimization                                = 3,
	EProcessStep_MAX                                   = 4
};*/

// Enum Kynapse.YKynapseTeamDefinitionYAIKSquad.YE_TeamID
/*enum YE_TeamID
{
	YTID_Player                                        = 0,
	YTID_Enemy                                         = 1,
	YTID_Civilian                                      = 2,
	YTID_Neutral                                       = 3,
	YTID_Friendly                                      = 4,
	YTID_EnemyElite                                    = 5,
	YTID_Marauder                                      = 6,
	YTID_MAX                                           = 7
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Kynapse.HierarchicalBuilder
// 0x009D (0x00D9 - 0x003C)
class UHierarchicalBuilder : public UObject
{
public:
	unsigned long                                      Active : 1;                                       		// 0x003C (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      displayInGame : 1;                                		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FPrelinkProcessParams                       preLinkerProcess;                                 		// 0x0040 (0x001C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FHierarchyBuilderParams                     hierarchyBuilder;                                 		// 0x005C (0x0074) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UKynapseTag*                                 DataTag;                                          		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UKynapseHierDatabase*                        database;                                         		// 0x00D4 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned char                                      displayInEditor;                                  		// 0x00D8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1318 ];

		return pClassPointer;
	};

};

UClass* UHierarchicalBuilder::pClassPointer = NULL;

// Class Kynapse.HierPathdataRenderingComponent
// 0x0000 (0x0200 - 0x0200)
class UHierPathdataRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1319 ];

		return pClassPointer;
	};

};

UClass* UHierPathdataRenderingComponent::pClassPointer = NULL;

// Class Kynapse.KynapseAdditionalData
// 0x0000 (0x003C - 0x003C)
class UKynapseAdditionalData : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1320 ];

		return pClassPointer;
	};

};

UClass* UKynapseAdditionalData::pClassPointer = NULL;

// Class Kynapse.KynapseFindNearestData
// 0x000C (0x0048 - 0x003C)
class UKynapseFindNearestData : public UKynapseAdditionalData
{
public:
	TArray< unsigned char >                            Data;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1321 ];

		return pClassPointer;
	};

};

UClass* UKynapseFindNearestData::pClassPointer = NULL;

// Class Kynapse.KynapseAgent
// 0x0030 (0x006C - 0x003C)
class UKynapseAgent : public UObject
{
public:
	TArray< struct FAgentAperiodicTask >               time_aperiodicTasksList;                          		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAgentPeriodicTask >                time_periodicTasksList;                           		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     agentName;                                        		// 0x0054 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ClassName;                                        		// 0x0060 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1322 ];

		return pClassPointer;
	};

};

UClass* UKynapseAgent::pClassPointer = NULL;

// Class Kynapse.YKynapseHumanAgent
// 0x0000 (0x006C - 0x006C)
class UYKynapseHumanAgent : public UKynapseAgent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1323 ];

		return pClassPointer;
	};

};

UClass* UYKynapseHumanAgent::pClassPointer = NULL;

// Class Kynapse.KynapseAiMeshLayerDefinition
// 0x000C (0x0048 - 0x003C)
class UKynapseAiMeshLayerDefinition : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1324 ];

		return pClassPointer;
	};

};

UClass* UKynapseAiMeshLayerDefinition::pClassPointer = NULL;

// Class Kynapse.KynapseBrain
// 0x0054 (0x0090 - 0x003C)
class UKynapseBrain : public UObject
{
public:
	struct FString                                     brainName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ClassName;                                        		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UKynapseBrainService*                        servicesList[ 0x5 ];                              		// 0x0054 (0x0014) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseAgent*                               agentsList[ 0xA ];                                		// 0x0068 (0x0028) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1325 ];

		return pClassPointer;
	};

};

UClass* UKynapseBrain::pClassPointer = NULL;

// Class Kynapse.YKynapseHierBrain
// 0x0000 (0x0090 - 0x0090)
class UYKynapseHierBrain : public UKynapseBrain
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1326 ];

		return pClassPointer;
	};

};

UClass* UYKynapseHierBrain::pClassPointer = NULL;

// Class Kynapse.KynapseBrainService
// 0x0030 (0x006C - 0x003C)
class UKynapseBrainService : public UObject
{
public:
	TArray< struct FBServiceAperiodicTask >            time_aperiodicTasksList;                          		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FBServicePeriodicTask >             time_periodicTasksList;                           		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     serviceName;                                      		// 0x0054 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ClassName;                                        		// 0x0060 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1327 ];

		return pClassPointer;
	};

};

UClass* UKynapseBrainService::pClassPointer = NULL;

// Class Kynapse.KynapseBrainServiceHierPathfinder
// 0x0074 (0x00E0 - 0x006C)
class UKynapseBrainServiceHierPathfinder : public UKynapseBrainService
{
public:
	class UKynapseHierDatabase*                        database;                                         		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      dataMode;                                         		// 0x0070 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FHierarchicalModifiers                      Modifiers;                                        		// 0x0074 (0x002C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              FlatDataModeSearchRadius;                         		// 0x00A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      AvoidCpuPeaks : 1;                                		// 0x00A4 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	float                                              CpuPrudence;                                      		// 0x00A8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                SolverBufferLength;                               		// 0x00AC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                SearchNodeUIDFromPositionContextSize;             		// 0x00B0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                SearchNodeUIDFromPositionMaxTypeCheckedCandidates;		// 0x00B4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FLocalPathFinding                           lpfConfig;                                        		// 0x00B8 (0x0028) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1328 ];

		return pClassPointer;
	};

};

UClass* UKynapseBrainServiceHierPathfinder::pClassPointer = NULL;

// Class Kynapse.YKynapseBrainServiceHierPathfinder
// 0x0004 (0x00E4 - 0x00E0)
class UYKynapseBrainServiceHierPathfinder : public UKynapseBrainServiceHierPathfinder
{
public:
	float                                              m_maxEdgeLength;                                  		// 0x00E0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1329 ];

		return pClassPointer;
	};

};

UClass* UYKynapseBrainServiceHierPathfinder::pClassPointer = NULL;

// Class Kynapse.KynapseEntityDefinition
// 0x0000 (0x003C - 0x003C)
class UKynapseEntityDefinition : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1330 ];

		return pClassPointer;
	};

};

UClass* UKynapseEntityDefinition::pClassPointer = NULL;

// Class Kynapse.KynapseEntityDefinitionActive
// 0x0024 (0x0060 - 0x003C)
class UKynapseEntityDefinitionActive : public UKynapseEntityDefinition
{
public:
	struct FString                                     EntityClassName;                                  		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ActionClassName;                                  		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UKynapseBrain*                               KynapseBrainDefinition;                           		// 0x0054 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseMesh*                                AiMesh;                                           		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UKynapseTag*                                 DefaultDataTag;                                   		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1331 ];

		return pClassPointer;
	};

};

UClass* UKynapseEntityDefinitionActive::pClassPointer = NULL;

// Class Kynapse.KynapseEntityDefinitionPassive
// 0x000C (0x0048 - 0x003C)
class UKynapseEntityDefinitionPassive : public UKynapseEntityDefinition
{
public:
	struct FString                                     EntityClassName;                                  		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1332 ];

		return pClassPointer;
	};

};

UClass* UKynapseEntityDefinitionPassive::pClassPointer = NULL;

// Class Kynapse.KynapseEntityDefinitionPathObject
// 0x0008 (0x0050 - 0x0048)
class UKynapseEntityDefinitionPathObject : public UKynapseEntityDefinitionPassive
{
public:
	int                                                PoolCount;                                        		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MaxLinkedEdges;                                   		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1333 ];

		return pClassPointer;
	};

};

UClass* UKynapseEntityDefinitionPathObject::pClassPointer = NULL;

// Class Kynapse.KynapseEntityDefinitionStaticPathObject
// 0x0004 (0x0054 - 0x0050)
class UKynapseEntityDefinitionStaticPathObject : public UKynapseEntityDefinitionPathObject
{
public:
	int                                                TypeId;                                           		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1334 ];

		return pClassPointer;
	};

};

UClass* UKynapseEntityDefinitionStaticPathObject::pClassPointer = NULL;

// Class Kynapse.KynapseGraph
// 0x0040 (0x007C - 0x003C)
class UKynapseGraph : public UObject
{
public:
	TArray< unsigned char >                            Data;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                generationBuildNumber;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FVector                                     generationBBoxMin;                                		// 0x004C (0x000C) [0x0000000000000000]              
	struct FVector                                     generationBBoxMax;                                		// 0x0058 (0x000C) [0x0000000000000000]              
	class UKynapseAdditionalData*                      additionalData[ 0x5 ];                            		// 0x0064 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UKynapseTag*                                 DataTag;                                          		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1335 ];

		return pClassPointer;
	};

};

UClass* UKynapseGraph::pClassPointer = NULL;

// Class Kynapse.KynapseHierAdditionalDataEdge
// 0x0018 (0x0054 - 0x003C)
class UKynapseHierAdditionalDataEdge : public UObject
{
public:
	int                                                Id;                                               		// 0x003C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     stringId;                                         		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                Size;                                             		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Offset;                                           		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1336 ];

		return pClassPointer;
	};

};

UClass* UKynapseHierAdditionalDataEdge::pClassPointer = NULL;

// Class Kynapse.KynapseHierAdditionalDataVertex
// 0x0018 (0x0054 - 0x003C)
class UKynapseHierAdditionalDataVertex : public UObject
{
public:
	int                                                Id;                                               		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     stringId;                                         		// 0x0040 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                Size;                                             		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Offset;                                           		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1337 ];

		return pClassPointer;
	};

};

UClass* UKynapseHierAdditionalDataVertex::pClassPointer = NULL;

// Class Kynapse.KynapseHierAdditionalDataVertexFindNearestData
// 0x0000 (0x0054 - 0x0054)
class UKynapseHierAdditionalDataVertexFindNearestData : public UKynapseHierAdditionalDataVertex
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1338 ];

		return pClassPointer;
	};

};

UClass* UKynapseHierAdditionalDataVertexFindNearestData::pClassPointer = NULL;

// Class Kynapse.KynapseHierDatabase
// 0x004C (0x0088 - 0x003C)
class UKynapseHierDatabase : public UObject
{
public:
	struct Fdatabase                                   Settings;                                         		// 0x003C (0x0034) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< unsigned char >                            Data;                                             		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UKynapseTag*                                 DataTag;                                          		// 0x007C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                currentStreamingPosition;                         		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                generationBuildNumber;                            		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1339 ];

		return pClassPointer;
	};

};

UClass* UKynapseHierDatabase::pClassPointer = NULL;

// Class Kynapse.KynapseHierPathdataObj
// 0x00B4 (0x00F0 - 0x003C)
class UKynapseHierPathdataObj : public UObject
{
public:
	TArray< unsigned char >                            Data;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UKynapseTag*                                 DataTag;                                          		// 0x0048 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                Index;                                            		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      streamed : 1;                                     		// 0x0050 (0x0004) [0x0000000000003000] [0x00000001] ( CPF_Native | CPF_Transient )
	unsigned long                                      streamFailed : 1;                                 		// 0x0050 (0x0004) [0x0000000000003000] [0x00000002] ( CPF_Native | CPF_Transient )
	int                                                graphBuildNumber;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                databaseBuildNumber;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FobjAdditionnalDataInfo                     verticesAdd[ 0x4 ];                               		// 0x005C (0x0030) [0x0000000000000000]              
	struct FobjAdditionnalDataInfo                     edgesAdd[ 0x4 ];                                  		// 0x008C (0x0030) [0x0000000000000000]              
	int                                                concreteNodeTotalSize;                            		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                concreteEdgeTotalSize;                            		// 0x00C0 (0x0004) [0x0000000000000000]              
	int                                                genIndex;                                         		// 0x00C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FBox                                        objBoundingBox;                                   		// 0x00C8 (0x001C) [0x0000000000000000]              
	TArray< struct FBackupPODEntry >                   backUpPODEntries;                                 		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1340 ];

		return pClassPointer;
	};

};

UClass* UKynapseHierPathdataObj::pClassPointer = NULL;

// Class Kynapse.KynapseMesh
// 0x0010 (0x004C - 0x003C)
class UKynapseMesh : public UObject
{
public:
	TArray< unsigned char >                            Data;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UKynapseTag*                                 DataTag;                                          		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1341 ];

		return pClassPointer;
	};

};

UClass* UKynapseMesh::pClassPointer = NULL;

// Class Kynapse.KynapseSeedGraphPoint
// 0x0008 (0x0200 - 0x01F8)
class AKynapseSeedGraphPoint : public AActor
{
public:
	class UKynapseTag*                                 DataTag;                                          		// 0x01F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_doNotAlignDuringBuild : 1;                      		// 0x01FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1342 ];

		return pClassPointer;
	};

};

UClass* AKynapseSeedGraphPoint::pClassPointer = NULL;

// Class Kynapse.KynapseSeedPoint
// 0x0004 (0x01FC - 0x01F8)
class AKynapseSeedPoint : public AActor
{
public:
	class UKynapseTag*                                 DataTag;                                          		// 0x01F8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1343 ];

		return pClassPointer;
	};

};

UClass* AKynapseSeedPoint::pClassPointer = NULL;

// Class Kynapse.KynapseStandardPathdataGenerationService
// 0x0048 (0x0240 - 0x01F8)
class AKynapseStandardPathdataGenerationService : public AActor
{
public:
	unsigned long                                      Active : 1;                                       		// 0x01F8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      displayInEditor : 1;                              		// 0x01F8 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      UseKynapseDataPackage : 1;                        		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FPointer                                    displayGraph;                                     		// 0x01FC (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< class AActor* >                            seeds;                                            		// 0x0200 (0x000C) [0x0000000014400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline | CPF_EditInlineUse )
	float                                              DistEdgeMax;                                      		// 0x020C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              EntityRadius;                                     		// 0x0210 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     displayNameInPie;                                 		// 0x0214 (0x000C) [0x0000000000600001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UKynapseGraph*                               outputGraph;                                      		// 0x0220 (0x0004) [0x0000000000220001]              ( CPF_Edit | CPF_EditConst )
	class UKynapseFindNearestData*                     outputFindNearestData;                            		// 0x0224 (0x0004) [0x0000000000220001]              ( CPF_Edit | CPF_EditConst )
	class UKynapseTag*                                 DataTag;                                          		// 0x0228 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UKynapseHierPathdataObj*                     outputHierObj;                                    		// 0x022C (0x0004) [0x0000000000220001]              ( CPF_Edit | CPF_EditConst )
	TArray< class UKynapsePathdataGenerationModifier* > Modifiers;                                        		// 0x0230 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class AKynapseWorld*                               m_world;                                          		// 0x023C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1344 ];

		return pClassPointer;
	};

};

UClass* AKynapseStandardPathdataGenerationService::pClassPointer = NULL;

// Class Kynapse.KynapseWorldServiceMapBuilder
// 0x008C (0x02CC - 0x0240)
class AKynapseWorldServiceMapBuilder : public AKynapseStandardPathdataGenerationService
{
public:
	struct FString                                     Filename;                                         		// 0x0240 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UKynapseMesh*                                outputAiMesh;                                     		// 0x024C (0x0004) [0x0000000000200001]              ( CPF_Edit )
	class UKynapseUDG*                                 outputUDG;                                        		// 0x0250 (0x0004) [0x0000000000200000]              
	unsigned long                                      useUDGAlts : 1;                                   		// 0x0254 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      m_showDetectedSheers : 1;                         		// 0x0254 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FPhysicalParams                             Physical;                                         		// 0x0258 (0x001C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAccuracyParams                             Accuracy;                                         		// 0x0274 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FProcessParams                              Process;                                          		// 0x0288 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FAdvancedParams                             Advanced;                                         		// 0x028C (0x0018) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FPointer                                    displayAIMesh;                                    		// 0x02A4 (0x0004) [0x0000000000000000]              
	struct FHidingDataParams                           hidingData;                                       		// 0x02A8 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FVector >                           m_detectedSheers;                                 		// 0x02BC (0x000C) [0x0000000000422001]              ( CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	int                                                m_coverMapsVersion;                               		// 0x02C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1345 ];

		return pClassPointer;
	};

};

UClass* AKynapseWorldServiceMapBuilder::pClassPointer = NULL;

// Class Kynapse.KynapseTag
// 0x0000 (0x003C - 0x003C)
class UKynapseTag : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1346 ];

		return pClassPointer;
	};

};

UClass* UKynapseTag::pClassPointer = NULL;

// Class Kynapse.KynapseTeamCreationData
// 0x0018 (0x0054 - 0x003C)
class UKynapseTeamCreationData : public UObject
{
public:
	struct FString                                     TeamName;                                         		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                TeamSize;                                         		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UKynapseTeamDefinition*                      TeamDefinition;                                   		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FPointer                                    KynapseTeam;                                      		// 0x0050 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1347 ];

		return pClassPointer;
	};

	void PostInitializeTeam ( );
	void CreateKynapseTeam ( );
};

UClass* UKynapseTeamCreationData::pClassPointer = NULL;

// Class Kynapse.KynapseTeamDefinition
// 0x000C (0x0048 - 0x003C)
class UKynapseTeamDefinition : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1348 ];

		return pClassPointer;
	};

};

UClass* UKynapseTeamDefinition::pClassPointer = NULL;

// Class Kynapse.YKynapseTeamDefinitionYAIKPlayerSquad
// 0x0000 (0x0048 - 0x0048)
class UYKynapseTeamDefinitionYAIKPlayerSquad : public UKynapseTeamDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1349 ];

		return pClassPointer;
	};

};

UClass* UYKynapseTeamDefinitionYAIKPlayerSquad::pClassPointer = NULL;

// Class Kynapse.YKynapseTeamDefinitionYAIKSquad
// 0x0000 (0x0048 - 0x0048)
class UYKynapseTeamDefinitionYAIKSquad : public UKynapseTeamDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1350 ];

		return pClassPointer;
	};

};

UClass* UYKynapseTeamDefinitionYAIKSquad::pClassPointer = NULL;

// Class Kynapse.YKynapseTeamDefinitionYKynFraction
// 0x0000 (0x0048 - 0x0048)
class UYKynapseTeamDefinitionYKynFraction : public UKynapseTeamDefinition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1351 ];

		return pClassPointer;
	};

};

UClass* UYKynapseTeamDefinitionYKynFraction::pClassPointer = NULL;

// Class Kynapse.KynapseUDG
// 0x0010 (0x004C - 0x003C)
class UKynapseUDG : public UObject
{
public:
	TArray< unsigned char >                            Data;                                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      isUDGAlts : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1352 ];

		return pClassPointer;
	};

};

UClass* UKynapseUDG::pClassPointer = NULL;

// Class Kynapse.KynapseWorld
// 0x00CC (0x02C4 - 0x01F8)
class AKynapseWorld : public AActor
{
public:
	TArray< struct FYS_KynapseAssetReference >         m_globalReferences;                               		// 0x01F8 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     World_Name;                                       		// 0x0204 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              World_OneMeter;                                   		// 0x0210 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                World_nbEntities;                                 		// 0x0214 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                World_nbTeams;                                    		// 0x0218 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UKynapseTeamCreationData*                    TeamCreationDataSet[ 0x5 ];                       		// 0x021C (0x0014) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              World_TimePerFrame;                               		// 0x0230 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UKynapseWorldService*                        servicesList[ 0xD ];                              		// 0x0234 (0x0034) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UKynapseWorldService* >              servicesList_Win32Only;                           		// 0x0268 (0x000C) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UKynapseWorldService* >              servicesList_XBox360Only;                         		// 0x0274 (0x000C) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UKynapseWorldService* >              servicesList_PS3Only;                             		// 0x0280 (0x000C) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UKynapseEntityDefinition* >          EntityDefinitionList;                             		// 0x028C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UHierarchicalBuilder* >              HierarchyBuildersList;                            		// 0x0298 (0x000C) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FEstimateInfo >                     m_estimates;                                      		// 0x02A4 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UYAIGlobalProperties*                        m_aiGlobalProperties;                             		// 0x02B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isTestMap : 1;                                  		// 0x02B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class AKynapseStandardPathdataGenerationService* > m_activeBuilders;                                 		// 0x02B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1353 ];

		return pClassPointer;
	};

	void ResetAISystem ( );
	void HandleWorldDestruction ( );
	void HandleWorldInitialization ( );
};

UClass* AKynapseWorld::pClassPointer = NULL;

// Class Kynapse.KynapseWorldService
// 0x0030 (0x006C - 0x003C)
class UKynapseWorldService : public UObject
{
public:
	TArray< struct FWServiceAperiodicTask >            time_aperiodicTasksList;                          		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FWServicePeriodicTask >             time_periodicTasksList;                           		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     serviceName;                                      		// 0x0054 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ClassName;                                        		// 0x0060 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1354 ];

		return pClassPointer;
	};

};

UClass* UKynapseWorldService::pClassPointer = NULL;

// Class Kynapse.KynapseWorldServiceAiMeshLayerManager
// 0x000C (0x0078 - 0x006C)
class UKynapseWorldServiceAiMeshLayerManager : public UKynapseWorldService
{
public:
	TArray< class UKynapseAiMeshLayerDefinition* >     Layers;                                           		// 0x006C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1355 ];

		return pClassPointer;
	};

};

UClass* UKynapseWorldServiceAiMeshLayerManager::pClassPointer = NULL;

// Class Kynapse.KynapseWorldServiceGapManager
// 0x0004 (0x0070 - 0x006C)
class UKynapseWorldServiceGapManager : public UKynapseWorldService
{
public:
	int                                                MaxGaps;                                          		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1356 ];

		return pClassPointer;
	};

};

UClass* UKynapseWorldServiceGapManager::pClassPointer = NULL;

// Class Kynapse.KynapseWorldServiceHierarchicalGraphManager
// 0x000C (0x0078 - 0x006C)
class UKynapseWorldServiceHierarchicalGraphManager : public UKynapseWorldService
{
public:
	int                                                DefaultSearchContextSize;                         		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      OnTheFlyHeader : 1;                               		// 0x0070 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                OnTheFlyHeaderMaxLevel;                           		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1357 ];

		return pClassPointer;
	};

};

UClass* UKynapseWorldServiceHierarchicalGraphManager::pClassPointer = NULL;

// Class Kynapse.KynapseWorldServiceHierarchicalPathObjectManager
// 0x000C (0x0078 - 0x006C)
class UKynapseWorldServiceHierarchicalPathObjectManager : public UKynapseWorldService
{
public:
	TArray< class UKynapseEntityDefinitionStaticPathObject* > StaticPathobjectsPools;                           		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1358 ];

		return pClassPointer;
	};

};

UClass* UKynapseWorldServiceHierarchicalPathObjectManager::pClassPointer = NULL;

// Class Kynapse.YKynapseWorldServiceAIPointLocker
// 0x0000 (0x006C - 0x006C)
class UYKynapseWorldServiceAIPointLocker : public UKynapseWorldService
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1359 ];

		return pClassPointer;
	};

};

UClass* UYKynapseWorldServiceAIPointLocker::pClassPointer = NULL;

// Class Kynapse.YKynapseWorldServiceGrenadeDirectorCoop2
// 0x0000 (0x006C - 0x006C)
class UYKynapseWorldServiceGrenadeDirectorCoop2 : public UKynapseWorldService
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1360 ];

		return pClassPointer;
	};

};

UClass* UYKynapseWorldServiceGrenadeDirectorCoop2::pClassPointer = NULL;

// Class Kynapse.YKynapseWorldServiceGrenadeDirectorCoop3
// 0x0000 (0x006C - 0x006C)
class UYKynapseWorldServiceGrenadeDirectorCoop3 : public UKynapseWorldService
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1361 ];

		return pClassPointer;
	};

};

UClass* UYKynapseWorldServiceGrenadeDirectorCoop3::pClassPointer = NULL;

// Class Kynapse.YKynapseWorldServiceGrenadeDirectorEnemies
// 0x0000 (0x006C - 0x006C)
class UYKynapseWorldServiceGrenadeDirectorEnemies : public UKynapseWorldService
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1362 ];

		return pClassPointer;
	};

};

UClass* UYKynapseWorldServiceGrenadeDirectorEnemies::pClassPointer = NULL;

// Class Kynapse.YKynapseWorldServiceGrenadeDirectorPlayerSquad
// 0x0000 (0x006C - 0x006C)
class UYKynapseWorldServiceGrenadeDirectorPlayerSquad : public UKynapseWorldService
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1363 ];

		return pClassPointer;
	};

};

UClass* UYKynapseWorldServiceGrenadeDirectorPlayerSquad::pClassPointer = NULL;

// Class Kynapse.YKynapseWorldServiceSquadManager
// 0x0000 (0x006C - 0x006C)
class UYKynapseWorldServiceSquadManager : public UKynapseWorldService
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1364 ];

		return pClassPointer;
	};

};

UClass* UYKynapseWorldServiceSquadManager::pClassPointer = NULL;

// Class Kynapse.PathdataRenderingComponent
// 0x0000 (0x0200 - 0x0200)
class UPathdataRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1365 ];

		return pClassPointer;
	};

};

UClass* UPathdataRenderingComponent::pClassPointer = NULL;

// Class Kynapse.YAIGlobalProperties
// 0x0074 (0x00B0 - 0x003C)
class UYAIGlobalProperties : public UObject
{
public:
	struct FYS_EntityPerceptionOverride                m_sandstormPerceptionOverrides[ 0x4 ];            		// 0x003C (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_PointLocker                             m_pointLocker;                                    		// 0x006C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_DangerZoneParameters                    m_dangerZones;                                    		// 0x0088 (0x0024) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     m_current_aiTuning;                               		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1366 ];

		return pClassPointer;
	};

};

UClass* UYAIGlobalProperties::pClassPointer = NULL;

// Class Kynapse.KynapseModifierCanGo
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierCanGo : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1367 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierCanGo::pClassPointer = NULL;

// Class Kynapse.KynapseModifierCanGo_AiMesh
// 0x0018 (0x0060 - 0x0048)
class UKynapseModifierCanGo_AiMesh : public UKynapseModifierCanGo
{
public:
	TArray< class UKynapseAiMeshLayerDefinition* >     Layers;                                           		// 0x0048 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UKynapseAiMeshLayerDefinition* >     PathObjectLayers;                                 		// 0x0054 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1368 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierCanGo_AiMesh::pClassPointer = NULL;

// Class Kynapse.YKynapseModifierCanGo_OutsideAiMesh
// 0x0000 (0x0060 - 0x0060)
class UYKynapseModifierCanGo_OutsideAiMesh : public UKynapseModifierCanGo_AiMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1369 ];

		return pClassPointer;
	};

};

UClass* UYKynapseModifierCanGo_OutsideAiMesh::pClassPointer = NULL;

// Class Kynapse.KynapseModifierComputeTargetPoint
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierComputeTargetPoint : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1370 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierComputeTargetPoint::pClassPointer = NULL;

// Class Kynapse.KynapseModifierComputeTargetPoint_ShortCut
// 0x0008 (0x0050 - 0x0048)
class UKynapseModifierComputeTargetPoint_ShortCut : public UKynapseModifierComputeTargetPoint
{
public:
	float                                              SamplingStep;                                     		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              UpdatePeriod;                                     		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1371 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierComputeTargetPoint_ShortCut::pClassPointer = NULL;

// Class Kynapse.YKynapseModifierComputeTargetPoint_HumanoidBasic
// 0x0000 (0x0050 - 0x0050)
class UYKynapseModifierComputeTargetPoint_HumanoidBasic : public UKynapseModifierComputeTargetPoint_ShortCut
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1372 ];

		return pClassPointer;
	};

};

UClass* UYKynapseModifierComputeTargetPoint_HumanoidBasic::pClassPointer = NULL;

// Class Kynapse.KynapseModifierDetectAccident
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierDetectAccident : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1373 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierDetectAccident::pClassPointer = NULL;

// Class Kynapse.KynapseModifierDetectAccident_PredictMove
// 0x0004 (0x004C - 0x0048)
class UKynapseModifierDetectAccident_PredictMove : public UKynapseModifierDetectAccident
{
public:
	float                                              AccidentRatio;                                    		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1374 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierDetectAccident_PredictMove::pClassPointer = NULL;

// Class Kynapse.KynapseModifierDetectGoalChanged
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierDetectGoalChanged : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1375 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierDetectGoalChanged::pClassPointer = NULL;

// Class Kynapse.KynapseModifierDetectGoalChanged_Distance3D
// 0x0004 (0x004C - 0x0048)
class UKynapseModifierDetectGoalChanged_Distance3D : public UKynapseModifierDetectGoalChanged
{
public:
	float                                              MaxDist;                                          		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1376 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierDetectGoalChanged_Distance3D::pClassPointer = NULL;

// Class Kynapse.KynapseModifierDetectGoalReached
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierDetectGoalReached : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1377 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierDetectGoalReached::pClassPointer = NULL;

// Class Kynapse.YKynapseModifierDetectGoalReached_Distance2D5
// 0x0000 (0x0048 - 0x0048)
class UYKynapseModifierDetectGoalReached_Distance2D5 : public UKynapseModifierDetectGoalReached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1378 ];

		return pClassPointer;
	};

};

UClass* UYKynapseModifierDetectGoalReached_Distance2D5::pClassPointer = NULL;

// Class Kynapse.KynapseModifierDetectPathNodeReached
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierDetectPathNodeReached : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1379 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierDetectPathNodeReached::pClassPointer = NULL;

// Class Kynapse.YKynapseModifierDetectPathNodeReached_Distance2D5
// 0x0000 (0x0048 - 0x0048)
class UYKynapseModifierDetectPathNodeReached_Distance2D5 : public UKynapseModifierDetectPathNodeReached
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1380 ];

		return pClassPointer;
	};

};

UClass* UYKynapseModifierDetectPathNodeReached_Distance2D5::pClassPointer = NULL;

// Class Kynapse.KynapseModifierFindNodesFromPositions
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierFindNodesFromPositions : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1381 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierFindNodesFromPositions::pClassPointer = NULL;

// Class Kynapse.KynapseModifierFindNodesFromPositions_NearestReachable
// 0x0000 (0x0048 - 0x0048)
class UKynapseModifierFindNodesFromPositions_NearestReachable : public UKynapseModifierFindNodesFromPositions
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1382 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierFindNodesFromPositions_NearestReachable::pClassPointer = NULL;

// Class Kynapse.KynapseModifierGoto
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierGoto : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1383 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierGoto::pClassPointer = NULL;

// Class Kynapse.KynapseModifierGoto_GapDynamicAvoidance_v2
// 0x0038 (0x0080 - 0x0048)
class UKynapseModifierGoto_GapDynamicAvoidance_v2 : public UKynapseModifierGoto
{
public:
	struct FGoto_GapDynamicAvoidance_v2_MainSettings   mainSettings;                                     		// 0x0048 (0x0038) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1384 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierGoto_GapDynamicAvoidance_v2::pClassPointer = NULL;

// Class Kynapse.KynapseModifierRefineGoal
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierRefineGoal : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1385 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierRefineGoal::pClassPointer = NULL;

// Class Kynapse.KynapseModifierRefineGoal_Trivial
// 0x0000 (0x0048 - 0x0048)
class UKynapseModifierRefineGoal_Trivial : public UKynapseModifierRefineGoal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1386 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierRefineGoal_Trivial::pClassPointer = NULL;

// Class Kynapse.KynapseModifierSelectPathNodeCandidate
// 0x000C (0x0048 - 0x003C)
class UKynapseModifierSelectPathNodeCandidate : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1387 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierSelectPathNodeCandidate::pClassPointer = NULL;

// Class Kynapse.KynapseModifierSelectPathNodeCandidate_NextPathNode
// 0x0008 (0x0050 - 0x0048)
class UKynapseModifierSelectPathNodeCandidate_NextPathNode : public UKynapseModifierSelectPathNodeCandidate
{
public:
	int                                                MaxCandidatePerFrame;                             		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxDistPathNode;                                  		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1388 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierSelectPathNodeCandidate_NextPathNode::pClassPointer = NULL;

// Class Kynapse.KynapseModifierSteering
// 0x0014 (0x0050 - 0x003C)
class UKynapseModifierSteering : public UObject
{
public:
	struct FString                                     ClassName;                                        		// 0x003C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              StrafeRadius;                                     		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeAngle;                                      		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1389 ];

		return pClassPointer;
	};

};

UClass* UKynapseModifierSteering::pClassPointer = NULL;

// Class Kynapse.YKynapseModifierSteering_SimpleBiped
// 0x0000 (0x0050 - 0x0050)
class UYKynapseModifierSteering_SimpleBiped : public UKynapseModifierSteering
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1390 ];

		return pClassPointer;
	};

};

UClass* UYKynapseModifierSteering_SimpleBiped::pClassPointer = NULL;

// Class Kynapse.KynapsePathdataGenerationModifier
// 0x0000 (0x003C - 0x003C)
class UKynapsePathdataGenerationModifier : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1391 ];

		return pClassPointer;
	};

};

UClass* UKynapsePathdataGenerationModifier::pClassPointer = NULL;

// Class Kynapse.KynapsePathdataGenerationModifier_SeedPoint
// 0x0000 (0x003C - 0x003C)
class UKynapsePathdataGenerationModifier_SeedPoint : public UKynapsePathdataGenerationModifier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1392 ];

		return pClassPointer;
	};

};

UClass* UKynapsePathdataGenerationModifier_SeedPoint::pClassPointer = NULL;

// Class Kynapse.YKynapsePathdataGenerationModifier
// 0x0004 (0x0040 - 0x003C)
class UYKynapsePathdataGenerationModifier : public UKynapsePathdataGenerationModifier
{
public:
	unsigned long                                      m_disableModifier : 1;                            		// 0x003C (0x0004) [0x0000000000022001] [0x00000001] ( CPF_Edit | CPF_Transient | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1393 ];

		return pClassPointer;
	};

};

UClass* UYKynapsePathdataGenerationModifier::pClassPointer = NULL;

// Class Kynapse.YKynapsePathdataGenerationModifier_BuildCovers
// 0x0000 (0x0040 - 0x0040)
class UYKynapsePathdataGenerationModifier_BuildCovers : public UYKynapsePathdataGenerationModifier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1394 ];

		return pClassPointer;
	};

};

UClass* UYKynapsePathdataGenerationModifier_BuildCovers::pClassPointer = NULL;

// Class Kynapse.YKynapsePathdataGenerationModifier_ClimbDropDown
// 0x005C (0x009C - 0x0040)
class UYKynapsePathdataGenerationModifier_ClimbDropDown : public UYKynapsePathdataGenerationModifier
{
public:
	class UKynapseEntityDefinitionStaticPathObject*    m_entityDefinitionClimb;                          		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FLinkedEdgeStruct >                 m_edgesClimb;                                     		// 0x0044 (0x000C) [0x0000000000520003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FYS_PathDataInfluenceArea >         m_gameDataClimb;                                  		// 0x0050 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FYS_PathDataPositions >             m_editorDataClimb;                                		// 0x005C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	class UKynapseEntityDefinitionStaticPathObject*    m_entityDefinitionDropDown;                       		// 0x0068 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FLinkedEdgeStruct >                 m_edgesDropDown;                                  		// 0x006C (0x000C) [0x0000000000520003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FYS_PathDataInfluenceArea >         m_gameDataDropDown;                               		// 0x0078 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FYS_PathDataPositions >             m_editorDataDropDown;                             		// 0x0084 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      m_optimizePathObjectEdges : 1;                    		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_tuckInPathObjectCornerEdges : 1;                		// 0x0090 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_evenlyDistributePathObjectEdges : 1;            		// 0x0090 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_displayPathInfluenceAreasInEditor : 1;          		// 0x0090 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              m_minPathObjectEdgeDistance;                      		// 0x0094 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_maxPathObjectLineDeviation;                     		// 0x0098 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1395 ];

		return pClassPointer;
	};

};

UClass* UYKynapsePathdataGenerationModifier_ClimbDropDown::pClassPointer = NULL;

// Class Kynapse.YKynapsePathdataGenerationModifier_Vault
// 0x0034 (0x0074 - 0x0040)
class UYKynapsePathdataGenerationModifier_Vault : public UYKynapsePathdataGenerationModifier
{
public:
	class UKynapseEntityDefinitionStaticPathObject*    m_entityDefinition;                               		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FLinkedEdgeStruct >                 m_edges;                                          		// 0x0044 (0x000C) [0x0000000000520003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      m_optimizePathObjectEdges : 1;                    		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_tuckInPathObjectCornerEdges : 1;                		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_evenlyDistributePathObjectEdges : 1;            		// 0x0050 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_displayPathInfluenceAreasInEditor : 1;          		// 0x0050 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              m_minPathObjectEdgeDistance;                      		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              m_maxPathObjectLineDeviation;                     		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FYS_PathDataInfluenceArea >         m_gameData;                                       		// 0x005C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FYS_PathDataPositions >             m_editorData;                                     		// 0x0068 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1396 ];

		return pClassPointer;
	};

};

UClass* UYKynapsePathdataGenerationModifier_Vault::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif