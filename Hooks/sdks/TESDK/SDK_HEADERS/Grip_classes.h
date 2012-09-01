/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Grip_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Grip.DESExtraType.DESBrainType
/*enum DESBrainType
{
	DESBrainType_WalkRun                               = 0,
	DESBrainType_Run                                   = 1,
	DESBrainType_WalkGawk                              = 2,
	DESBrainType_WalkCower                             = 3,
	DESBrainType_WalkFlee_Closest                      = 4,
	DESBrainType_WalkFlee_Random                       = 5,
	DESBrainType_WalkFlee_Straight                     = 6,
	DESBrainType_RunGun                                = 7,
	DESBrainType_IdleCower                             = 8,
	DESBrainType_IdleReactCower                        = 9,
	DESBrainType_IdleGuard                             = 10,
	DESBrainType_Idle                                  = 11,
	DESBrainType_RunAttackTank                         = 12,
	DESBrainType_MAX                                   = 13
};*/

// Enum Grip.MeatPuppet.DESShoulderAvoid
/*enum DESShoulderAvoid
{
	DESShoulderAvoid_None                              = 0,
	DESShoulderAvoid_Left                              = 1,
	DESShoulderAvoid_Right                             = 2,
	DESShoulderAvoid_MAX                               = 3
};*/

// Enum Grip.MeatPuppet.DESVelocity
/*enum DESVelocity
{
	DESVelocity_Constant                               = 0,
	DESVelocity_Accel                                  = 1,
	DESVelocity_Decel                                  = 2,
	DESVelocity_MAX                                    = 3
};*/

// Enum Grip.MeatPuppet.DESState
/*enum DESState
{
	DESState_None                                      = 0,
	DESState_Aim                                       = 1,
	DESState_Shoot                                     = 2,
	DESState_Walk                                      = 3,
	DESState_Panic                                     = 4,
	DESState_Run                                       = 5,
	DESState_Gawk                                      = 6,
	DESState_Cower                                     = 7,
	DESState_NUMOF                                     = 8,
	DESState_MAX                                       = 9
};*/

// Enum Grip.DESLightPawn.DESFaction
/*enum DESFaction
{
	DESFaction_Neutral                                 = 0,
	DESFaction_Enemy                                   = 1,
	DESFaction_Ally                                    = 2,
	DESFaction_None                                    = 3,
	DESFaction_MAX                                     = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Grip.DESActionStationData
// 0x001C (0x0200 - 0x01E4)
class ADESActionStationData : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x01E4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              RadiusOfInfluence;                                		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpotDeactivationDuration;                         		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OpeningAngle;                                     		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ADESFlowNode* >                      FlowNodeLinks;                                    		// 0x01F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1291 ];

		return pClassPointer;
	};

};

UClass* ADESActionStationData::pClassPointer = NULL;

// Class Grip.DESActionStationDataSingleState
// 0x0014 (0x0214 - 0x0200)
class ADESActionStationDataSingleState : public ADESActionStationData
{
public:
	struct FString                                     AnimationNameToPlay;                              		// 0x0200 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MinimumUsageTime;                                 		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaximumUsageTime;                                 		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1292 ];

		return pClassPointer;
	};

};

UClass* ADESActionStationDataSingleState::pClassPointer = NULL;

// Class Grip.DESActionStationDataTripleState
// 0x0038 (0x0238 - 0x0200)
class ADESActionStationDataTripleState : public ADESActionStationData
{
public:
	struct FString                                     SittingDownAnimation;                             		// 0x0200 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     SittingIdleAnimation;                             		// 0x020C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GettingUpAnimation;                               		// 0x0218 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GettingUpRushedAnimation;                         		// 0x0224 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MinimumUsageTime;                                 		// 0x0230 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaximumUsageTime;                                 		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1293 ];

		return pClassPointer;
	};

};

UClass* ADESActionStationDataTripleState::pClassPointer = NULL;

// Class Grip.DESActionStationDataRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESActionStationDataRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1294 ];

		return pClassPointer;
	};

};

UClass* UDESActionStationDataRenderingComponent::pClassPointer = NULL;

// Class Grip.DESAttackNode
// 0x000C (0x01F0 - 0x01E4)
class ADESAttackNode : public AActor
{
public:
	float                                              StopAndShootRadius;                               		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WalkAndShootRadius;                               		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BelongingRepresentation;                          		// 0x01EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1295 ];

		return pClassPointer;
	};

};

UClass* ADESAttackNode::pClassPointer = NULL;

// Class Grip.DESAttackNodeRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESAttackNodeRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1296 ];

		return pClassPointer;
	};

};

UClass* UDESAttackNodeRenderingComponent::pClassPointer = NULL;

// Class Grip.DESCollisionNode
// 0x0008 (0x01EC - 0x01E4)
class ADESCollisionNode : public AActor
{
public:
	float                                              InfluenceRadius;                                  		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BelongingRepresentation;                          		// 0x01E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1297 ];

		return pClassPointer;
	};

};

UClass* ADESCollisionNode::pClassPointer = NULL;

// Class Grip.DESCollisionNodeRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESCollisionNodeRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1298 ];

		return pClassPointer;
	};

};

UClass* UDESCollisionNodeRenderingComponent::pClassPointer = NULL;

// Class Grip.DESEventNode
// 0x0008 (0x01EC - 0x01E4)
class ADESEventNode : public AActor
{
public:
	float                                              InfluenceRadius;                                  		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PropagationSpeed;                                 		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1299 ];

		return pClassPointer;
	};

};

UClass* ADESEventNode::pClassPointer = NULL;

// Class Grip.DESEventNodeRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESEventNodeRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1300 ];

		return pClassPointer;
	};

};

UClass* UDESEventNodeRenderingComponent::pClassPointer = NULL;

// Class Grip.DESExtraType
// 0x0034 (0x0070 - 0x003C)
class UDESExtraType : public UObject
{
public:
	unsigned char                                      BrainType;                                        		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Faction;                                          		// 0x003D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              WalkSpeed;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RunSpeed;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReactionTime_Min;                                 		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReactionTime_Max;                                 		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveTime_Min;                                     		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveTime_Max;                                     		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShootTime_Min;                                    		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShootTime_Max;                                    		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RagdollDeathTime;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActionStationCooldownTime;                        		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Health;                                           		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      MeatPuppet;                                       		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1301 ];

		return pClassPointer;
	};

};

UClass* UDESExtraType::pClassPointer = NULL;

// Class Grip.DESFlowNode
// 0x0018 (0x01FC - 0x01E4)
class ADESFlowNode : public AActor
{
public:
	float                                              ArrivalRadius;                                    		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsDespawn : 1;                                    		// 0x01E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsFlee : 1;                                       		// 0x01E8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      ClampOnGround : 1;                                		// 0x01E8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	TArray< class ADESFlowNode* >                      ConnectedNodes;                                   		// 0x01EC (0x000C) [0x0000000001400000]              ( CPF_NeedCtorLink )
	int                                                BelongingRepresentation;                          		// 0x01F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1302 ];

		return pClassPointer;
	};

};

UClass* ADESFlowNode::pClassPointer = NULL;

// Class Grip.DESFlowNodeRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESFlowNodeRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1303 ];

		return pClassPointer;
	};

};

UClass* UDESFlowNodeRenderingComponent::pClassPointer = NULL;

// Class Grip.DESLightPawn
// 0x00C0 (0x02A4 - 0x01E4)
class ADESLightPawn : public AActor
{
public:
	struct FPointer                                    VfTable_IMeatPuppet;                              		// 0x01E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FVector                                     CurrentDestination;                               		// 0x01E8 (0x000C) [0x0000000000000000]              
	float                                              CurrentVelocity;                                  		// 0x01F4 (0x0004) [0x0000000000000000]              
	struct FRotator                                    OrientationDestination;                           		// 0x01F8 (0x000C) [0x0000000000000000]              
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x0204 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          CylinderCollisionComponent;                       		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class USkeletalMesh* >                     SkeletalMeshs;                                    		// 0x020C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Health;                                           		// 0x0218 (0x0004) [0x0000000000000000]              
	unsigned char                                      Faction;                                          		// 0x021C (0x0001) [0x0000000000000000]              
	unsigned char                                      VelocityAnim;                                     		// 0x021D (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      ShoulderAvoid;                                    		// 0x021E (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              RagdollDeathTime;                                 		// 0x0220 (0x0004) [0x0000000000000000]              
	float                                              TimeToDelete;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	float                                              ClampOnGroundRange;                               		// 0x0228 (0x0004) [0x0000000000000000]              
	float                                              ClampOnGroundOffset;                              		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                ClampOnGroundFrameDelay;                          		// 0x0230 (0x0004) [0x0000000000000000]              
	float                                              ClampOnGroundLookAHead;                           		// 0x0234 (0x0004) [0x0000000000000000]              
	float                                              ClampOnGroundLookBack;                            		// 0x0238 (0x0004) [0x0000000000000000]              
	unsigned long                                      ClampOnGround : 1;                                		// 0x023C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CollisionEnabled : 1;                             		// 0x023C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLookAt : 1;                                      		// 0x023C (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bGuardLookAt : 1;                                 		// 0x023C (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      MuzzleFlash : 1;                                  		// 0x023C (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      ThrowDisc : 1;                                    		// 0x023C (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bShootAim : 1;                                    		// 0x023C (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      FleeTurn : 1;                                     		// 0x023C (0x0004) [0x0000000000000020] [0x00000080] ( CPF_Net )
	unsigned long                                      FleeReaction : 1;                                 		// 0x023C (0x0004) [0x0000000000000020] [0x00000100] ( CPF_Net )
	unsigned long                                      CowerReaction : 1;                                		// 0x023C (0x0004) [0x0000000000000020] [0x00000200] ( CPF_Net )
	unsigned long                                      GenericReaction : 1;                              		// 0x023C (0x0004) [0x0000000000000020] [0x00000400] ( CPF_Net )
	unsigned long                                      WalkBackward : 1;                                 		// 0x023C (0x0004) [0x0000000000000020] [0x00000800] ( CPF_Net )
	unsigned long                                      WalkBackwardCower : 1;                            		// 0x023C (0x0004) [0x0000000000000020] [0x00001000] ( CPF_Net )
	unsigned long                                      ActionStation : 1;                                		// 0x023C (0x0004) [0x0000000000000020] [0x00002000] ( CPF_Net )
	unsigned long                                      ActionStationTurn : 1;                            		// 0x023C (0x0004) [0x0000000000000020] [0x00004000] ( CPF_Net )
	unsigned long                                      ActionStationAnim : 1;                            		// 0x023C (0x0004) [0x0000000000000020] [0x00008000] ( CPF_Net )
	unsigned long                                      ASloop : 1;                                       		// 0x023C (0x0004) [0x0000000000000020] [0x00010000] ( CPF_Net )
	unsigned long                                      SkelMeshSet : 1;                                  		// 0x023C (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bPlayDeath : 1;                                   		// 0x023C (0x0004) [0x0000000000000020] [0x00040000] ( CPF_Net )
	unsigned long                                      bCurrentPlayDeath : 1;                            		// 0x023C (0x0004) [0x0000000000000000] [0x00080000] 
	float                                              ClampOnGroundZTarget;                             		// 0x0240 (0x0004) [0x0000000000000000]              
	float                                              ClampOnGroundDeltaZPerFrame;                      		// 0x0244 (0x0004) [0x0000000000000000]              
	int                                                ClampOnGroundCurrentFrameDelay;                   		// 0x0248 (0x0004) [0x0000000000000000]              
	float                                              CollisionDistanceToPlayer;                        		// 0x024C (0x0004) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x0250 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        SMDropShadow;                                     		// 0x0254 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     LookAtTarget;                                     		// 0x0258 (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              ShootAimYaw;                                      		// 0x0264 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ShootAimPitch;                                    		// 0x0268 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       ASName;                                           		// 0x026C (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              ASblendIn;                                        		// 0x0274 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ASblendOut;                                       		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                SkelMeshIndex;                                    		// 0x027C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     TakeHitLocation;                                  		// 0x0280 (0x000C) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      HitDamageType;                                    		// 0x028C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     TearOffMomentum;                                  		// 0x0290 (0x000C) [0x0000000000000020]              ( CPF_Net )
	class UParticleSystem*                             HitEffect;                                        		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    CustomAnim;                                       		// 0x02A0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1304 ];

		return pClassPointer;
	};

	void eventStateChanged ( unsigned char NewState, unsigned char previousState );
	void eventSendExtraRemovedEvent ( class USequence* levelSequence );
	void eventSendExtraKilledEvent ( class USequence* levelSequence );
	void eventEncroachedBy ( class AActor* Other );
	void TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void PlayHitEffect ( );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void Kill ( class AActor* killerActor );
	void PlayDeath ( unsigned long Active );
	void DestroyBrain ( unsigned long isDeath );
	void eventSetSkelMesh ( int Index );
	void eventThrowDiscFct ( struct FVector AimDir );
	void eventSetDiscTarget ( struct FVector AimDir );
	void eventReplicatedEvent ( struct FName VarName );
	float SetActionStationTurn ( unsigned long Active );
	void StopCustomAnim ( float blendOut );
	float PlayCustomAnim ( struct FName NodeName, float blendIn, float blendOut, unsigned long loop, unsigned long bOverride );
	void SetActionStation ( unsigned long Active, unsigned long instant );
	void SetWalkBackwardCower ( unsigned long Active, unsigned long instant );
	void SetWalkBackward ( unsigned long Active, unsigned long instant );
	void SetGenericReaction ( unsigned long Active, unsigned long instant );
	void SetCowerReaction ( unsigned long Active, unsigned long instant );
	void SetFleeReaction ( unsigned long Active, unsigned long instant );
	float SetFleeTurn ( unsigned long Active );
	void SetShoulderAvoid ( unsigned char avoid, unsigned long instant );
	void SetVelocity ( unsigned char velAnim );
	bool SetShootAimTarget ( float Yaw, float Pitch );
	void SetShootAim ( unsigned long Active, unsigned long instant );
	void SetMuzzleFlash ( unsigned long Active );
	void SetThrowDisc ( unsigned long Active );
	void SetLookAtTarget ( struct FVector Target );
	void SetGuardLookAt ( unsigned long Active, unsigned long instant );
	void SetLookAt ( unsigned long Active, unsigned long instant );
	void ResetAnim ( );
};

UClass* ADESLightPawn::pClassPointer = NULL;

// Class Grip.DESPointOfInterestNode
// 0x0008 (0x01EC - 0x01E4)
class ADESPointOfInterestNode : public AActor
{
public:
	float                                              InfluenceRadius;                                  		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BelongingRepresentation;                          		// 0x01E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1305 ];

		return pClassPointer;
	};

};

UClass* ADESPointOfInterestNode::pClassPointer = NULL;

// Class Grip.DESPointOfInterestNodeRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESPointOfInterestNodeRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1306 ];

		return pClassPointer;
	};

};

UClass* UDESPointOfInterestNodeRenderingComponent::pClassPointer = NULL;

// Class Grip.DESSkeletalMeshComponent
// 0x0000 (0x053C - 0x053C)
class UDESSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1307 ];

		return pClassPointer;
	};

};

UClass* UDESSkeletalMeshComponent::pClassPointer = NULL;

// Class Grip.DESSpawnPoint
// 0x0010 (0x01F4 - 0x01E4)
class ADESSpawnPoint : public AActor
{
public:
	struct FDESRandom                                  Random;                                           		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADESFlowNode*                                startNode;                                        		// 0x01E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      targetMiddleOfNode : 1;                           		// 0x01EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                BelongingRepresentation;                          		// 0x01F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1308 ];

		return pClassPointer;
	};

};

UClass* ADESSpawnPoint::pClassPointer = NULL;

// Class Grip.DESSpawnPointRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESSpawnPointRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1309 ];

		return pClassPointer;
	};

};

UClass* UDESSpawnPointRenderingComponent::pClassPointer = NULL;

// Class Grip.DESSpawnZone
// 0x001C (0x0200 - 0x01E4)
class ADESSpawnZone : public AActor
{
public:
	float                                              Width;                                            		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      orientateExtras : 1;                              		// 0x01EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              distanceToOrientationPoint;                       		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDESRandom                                  Random;                                           		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADESFlowNode*                                startNode;                                        		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                BelongingRepresentation;                          		// 0x01FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1310 ];

		return pClassPointer;
	};

};

UClass* ADESSpawnZone::pClassPointer = NULL;

// Class Grip.DESSpawnZoneRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UDESSpawnZoneRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1311 ];

		return pClassPointer;
	};

};

UClass* UDESSpawnZoneRenderingComponent::pClassPointer = NULL;

// Class Grip.DESSpriteComponent
// 0x0000 (0x01F4 - 0x01F4)
class UDESSpriteComponent : public USpriteComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1312 ];

		return pClassPointer;
	};

};

UClass* UDESSpriteComponent::pClassPointer = NULL;

// Class Grip.DESSystem
// 0x0018 (0x01FC - 0x01E4)
class ADESSystem : public AActor
{
public:
	struct FDESRandom                                  Random;                                           		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FDESPoolConfig >                    PoolConfig;                                       		// 0x01E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MeatPuppetsInitializedPerFrame;                   		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    WorldManager;                                     		// 0x01F8 (0x0004) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1313 ];

		return pClassPointer;
	};

	void eventSendDESReadyEvent ( class USequence* levelSequence );
};

UClass* ADESSystem::pClassPointer = NULL;

// Class Grip.DESThreatNode
// 0x0004 (0x01E8 - 0x01E4)
class ADESThreatNode : public AActor
{
public:
	int                                                BelongingRepresentation;                          		// 0x01E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1314 ];

		return pClassPointer;
	};

};

UClass* ADESThreatNode::pClassPointer = NULL;

// Class Grip.DESVisualizationComponent
// 0x0004 (0x01DC - 0x01D8)
class UDESVisualizationComponent : public UPrimitiveComponent
{
public:
	struct FPointer                                    SceneProxy;                                       		// 0x01D8 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1315 ];

		return pClassPointer;
	};

};

UClass* UDESVisualizationComponent::pClassPointer = NULL;

// Class Grip.MeatPuppet
// 0x0000 (0x003C - 0x003C)
class UMeatPuppet : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1316 ];

		return pClassPointer;
	};

	float SetActionStationTurn ( unsigned long Active );
	void StopCustomAnim ( float blendOut );
	float PlayCustomAnim ( struct FName NodeName, float blendIn, float blendOut, unsigned long loop, unsigned long bOverride );
	void SetActionStation ( unsigned long Active, unsigned long instant );
	void SetWalkBackwardCower ( unsigned long Active, unsigned long instant );
	void SetWalkBackward ( unsigned long Active, unsigned long instant );
	void SetGenericReaction ( unsigned long Active, unsigned long instant );
	void SetCowerReaction ( unsigned long Active, unsigned long instant );
	void SetFleeReaction ( unsigned long Active, unsigned long instant );
	float SetFleeTurn ( unsigned long Active );
	void SetShoulderAvoid ( unsigned char avoid, unsigned long instant );
	void SetVelocity ( unsigned char velAnim );
	bool SetShootAimTarget ( float Yaw, float Pitch );
	void SetThrowDisc ( unsigned long Active );
	void SetShootAim ( unsigned long Active, unsigned long instant );
	void SetMuzzleFlash ( unsigned long Active );
	void SetLookAtTarget ( struct FVector Target );
	void SetGuardLookAt ( unsigned long Active, unsigned long instant );
	void SetLookAt ( unsigned long Active, unsigned long instant );
	void ResetAnim ( );
	void eventThrowDiscFct ( struct FVector AimDir );
	void eventSetDiscTarget ( struct FVector AimDir );
};

UClass* UMeatPuppet::pClassPointer = NULL;

// Class Grip.SeqAct_AttackNode
// 0x0004 (0x00EC - 0x00E8)
class USeqAct_AttackNode : public USequenceAction
{
public:
	class ADESAttackNode*                              AttackNode;                                       		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1317 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AttackNode::pClassPointer = NULL;

// Class Grip.SeqAct_AttackPlayer
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_AttackPlayer : public USequenceAction
{
public:
	class ADESAttackNode*                              AttackNode;                                       		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              defaultStopAndShootRadius;                        		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              defaultWalkAndShootRadius;                        		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_AttackPlayer::pClassPointer = NULL;

// Class Grip.SeqAct_ChangeState
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_ChangeState : public USequenceAction
{
public:
	float                                              ReactionMinTime;                                  		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReactionMaxTime;                                  		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADESEventNode*                               EventNode;                                        		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_ChangeState::pClassPointer = NULL;

// Class Grip.SeqAct_ConfigureActorAvoidance
// 0x0018 (0x0100 - 0x00E8)
class USeqAct_ConfigureActorAvoidance : public USequenceAction
{
public:
	float                                              AvoidanceRadius;                                  		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushForce;                                        		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CollisionRadius;                                  		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            Actors;                                           		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* USeqAct_ConfigureActorAvoidance::pClassPointer = NULL;

// Class Grip.SeqAct_ConfigureAdvancedCornering
// 0x0008 (0x00F0 - 0x00E8)
class USeqAct_ConfigureAdvancedCornering : public USequenceAction
{
public:
	unsigned long                                      BrakeOnCorners : 1;                               		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              MaximumBankingAngle;                              		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_ConfigureAdvancedCornering::pClassPointer = NULL;

// Class Grip.SeqAct_ConfigureGawkAvoidance
// 0x0008 (0x00F0 - 0x00E8)
class USeqAct_ConfigureGawkAvoidance : public USequenceAction
{
public:
	float                                              BaseWidth;                                        		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseLength;                                       		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_ConfigureGawkAvoidance::pClassPointer = NULL;

// Class Grip.SeqAct_ConfigurePlayerAvoidance
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_ConfigurePlayerAvoidance : public USequenceAction
{
public:
	float                                              AvoidanceRadius;                                  		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushForce;                                        		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CollisionRadius;                                  		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_ConfigurePlayerAvoidance::pClassPointer = NULL;

// Class Grip.SeqAct_ConfigureStandardAvoidance
// 0x001C (0x0104 - 0x00E8)
class USeqAct_ConfigureStandardAvoidance : public USequenceAction
{
public:
	float                                              CollisionRadius;                                  		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LinkPushDistBckwd;                                		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LinkPushDistFwd;                                  		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NodePushDistBckwd;                                		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NodePushDistFwd;                                  		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PushForce;                                        		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseStopping : 1;                                  		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

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

UClass* USeqAct_ConfigureStandardAvoidance::pClassPointer = NULL;

// Class Grip.SeqAct_ConfigureStopAndGo
// 0x0008 (0x00F0 - 0x00E8)
class USeqAct_ConfigureStopAndGo : public USequenceAction
{
public:
	float                                              BaseWidth;                                        		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseLength;                                       		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_ConfigureStopAndGo::pClassPointer = NULL;

// Class Grip.SeqAct_DESDespawn
// 0x0010 (0x00F8 - 0x00E8)
class USeqAct_DESDespawn : public USequenceAction
{
public:
	class ADESFlowNode*                                TargetFlow;                                       		// 0x00E8 (0x0004) [0x0000000020000001]              ( CPF_Edit | CPF_Deprecated )
	TArray< class AActor* >                            TargetAreas;                                      		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

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

UClass* USeqAct_DESDespawn::pClassPointer = NULL;

// Class Grip.SeqAct_DESSpawn
// 0x0028 (0x0110 - 0x00E8)
class USeqAct_DESSpawn : public USequenceAction
{
public:
	class AActor*                                      TargetZone;                                       		// 0x00E8 (0x0004) [0x0000000020000001]              ( CPF_Edit | CPF_Deprecated )
	TArray< struct FSpawnDescription >                 ExtrasToSpawn;                                    		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ADESSystem*                                  System;                                           		// 0x00F8 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            TargetAreas;                                      		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      DoingDelayedSpawn : 1;                            		// 0x0108 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                SpawnsPerFrame;                                   		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )

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

UClass* USeqAct_DESSpawn::pClassPointer = NULL;

// Class Grip.SeqAct_GetCountOfExtrasInLevel
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_GetCountOfExtrasInLevel : public USequenceAction
{
public:

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

UClass* USeqAct_GetCountOfExtrasInLevel::pClassPointer = NULL;

// Class Grip.SeqAct_GetCountOfExtrasKilled
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_GetCountOfExtrasKilled : public USequenceAction
{
public:

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

UClass* USeqAct_GetCountOfExtrasKilled::pClassPointer = NULL;

// Class Grip.SeqAct_NodePOI
// 0x001C (0x0104 - 0x00E8)
class USeqAct_NodePOI : public USequenceAction
{
public:
	unsigned long                                      bPOIActive : 1;                                   		// 0x00E8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	float                                              Probability;                                      		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ADESPointOfInterestNode*                     POINode;                                          		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayBeforeStart_MinTime;                         		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayBeforeStart_MaxTime;                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookAt_MinTime;                                   		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookAt_MaxTime;                                   		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_NodePOI::pClassPointer = NULL;

// Class Grip.SeqAct_NodeThreat
// 0x0004 (0x00EC - 0x00E8)
class USeqAct_NodeThreat : public USequenceAction
{
public:
	class ADESThreatNode*                              ThreatNode;                                       		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_NodeThreat::pClassPointer = NULL;

// Class Grip.SeqAct_PlayerPOI
// 0x001C (0x0104 - 0x00E8)
class USeqAct_PlayerPOI : public USequenceAction
{
public:
	unsigned long                                      bPOIActive : 1;                                   		// 0x00E8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	float                                              InfluenceRadius;                                  		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Probability;                                      		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayBeforeStart_MinTime;                         		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayBeforeStart_MaxTime;                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookAt_MinTime;                                   		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookAt_MaxTime;                                   		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_PlayerPOI::pClassPointer = NULL;

// Class Grip.DESExtraTypeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UDESExtraTypeFactoryNew : public UFactory
{
public:

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

UClass* UDESExtraTypeFactoryNew::pClassPointer = NULL;

// Class Grip.SeqEvent_ExtraKilled
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_ExtraKilled : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33004 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_ExtraKilled::pClassPointer = NULL;

// Class Grip.SeqEvent_ExtraRemovedFromLevel
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_ExtraRemovedFromLevel : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33011 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_ExtraRemovedFromLevel::pClassPointer = NULL;

// Class Grip.SeqEvent_DESReady
// 0x0000 (0x0100 - 0x0100)
class USeqEvent_DESReady : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33104 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_DESReady::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif