/*
#############################################################################################
# CrimeCraft (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: CrimeCraft_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct CrimeCraft.AbilityPackMap.AbilityPackDesc
// 0x0014
struct FAbilityPackDesc
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             AbilityNames;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.AnimNodeAttachToSocket.SocketOffset
// 0x0018
struct FSocketOffset
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeAttachToSocket.SocketOffsetByWeapon
// 0x0020
struct FSocketOffsetByWeapon
{
	struct FName                                       WeaponName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FSocketOffset                               Offset;                                           		// 0x0008 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeBlendBySpeedEx.BlendingProperties
// 0x0010
struct FBlendingProperties
{
	float                                              BaseSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendUpTime;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendDownTime;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendDownPerc;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCWeaponAttachmentPreset.GunRecoilNodeDesc
// 0x0018
struct FGunRecoilNodeDesc
{
	struct FString                                     NodeName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SingleRecoilScale;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              AmplitudeScale;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DurationScale;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachmentPreset.GunRecoilAnimationInfo
// 0x0020
struct FGunRecoilAnimationInfo
{
	float                                              RecoilSingleDuration;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RecoilAnimationPeakTimePos;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RecoilAmplitudeFadingAlpha;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RecoilRestoreTime;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              RecoilSmoothingTime;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RecoilWaveFactorMin;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              RecoilWaveFactorMax;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RecoilWaveFactorShotsPeriod;                      		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeSequenceCompareBase.AnimBoneCompareSetupInfo
// 0x0024
struct FAnimBoneCompareSetupInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LocationComparePriority;                          		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotationComparePriority;                          		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                BoneIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeSequenceCompareBase.AnimCompareSetupInfo
// 0x000C
struct FAnimCompareSetupInfo
{
	TArray< struct FAnimBoneCompareSetupInfo >         PerBoneCompareSetup;                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.AnimNodeBlendDirectional8.DirectionDataEntry
// 0x0010
struct FDirectionDataEntry
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                AnimChildIndex;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeBlendPerBoneEx.BranchInfo
// 0x0014
struct FBranchInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseStartWeight : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              StartWeight;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PerBoneWeightIncrease;                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeBlendPerBoneEx.WeightNodeRule
// 0x0014
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlendBase*                          CachedNode;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      WeightCheck;                                      		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChildIndex;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeBlendPerBoneEx.WeightRule
// 0x0028
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                        		// 0x0000 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FWeightNodeRule                             SecondNode;                                       		// 0x0014 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeBlendPerBoneEx.PerBoneMaskInfo
// 0x0058
struct FPerBoneMaskInfo
{
	TArray< struct FBranchInfo >                       BranchList;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DesiredWeight;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTimeToGo;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeightRule >                       WeightRuleList;                                   		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bWeightBasedOnNodeRules : 1;                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisableForNonLocalHumanPlayers : 1;              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisableIfCameraBoneMotionScaleIsZero : 1;        		// 0x0020 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPendingBlend : 1;                                		// 0x0020 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	TArray< float >                                    PerBoneWeights;                                   		// 0x0024 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FBoneAtom >                         MaskAtoms;                                        		// 0x0030 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FMatrix >                           MeshSpaceTM;                                      		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< unsigned char >                            TransformReqBone;                                 		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                TransformReqBoneIndex;                            		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.AnimNodeBlendPerBoneList.BlendPerBoneBranch
// 0x0014
struct FBlendPerBoneBranch
{
	struct FName                                       ChildBoneName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParentBoneName;                                   		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDecreasing : 1;                                  		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeBlendPerBoneList.AGData
// 0x0010
struct FAGData
{
	struct FName                                       AutoGenRootBone;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AutoGenDepth;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDecreasing : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeBlendPerBoneList.BlendPerBoneChild
// 0x0040
struct FBlendPerBoneChild
{
	TArray< struct FName >                             BranchStartBoneName;                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBlendPerBoneBranch >               Branches;                                         		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAGData >                           AutoGenData;                                      		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bAutoGenerate : 1;                                		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< float >                                    PerBoneWeight;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            LocalToCompReqBones;                              		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.AnimNodeDualWeaponTemp.BoneToCopyInfo
// 0x000C
struct FBoneToCopyInfo
{
	int                                                SourceBone;                                       		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                DestBone;                                         		// 0x0004 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bMirror : 1;                                      		// 0x0008 (0x0004) [0x0000000000020001] [0x00000001] ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct CrimeCraft.AnimNodeMovementTest.MovementAnimationInfo
// 0x0008
struct FMovementAnimationInfo
{
	unsigned char                                      AnimDirection;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bMirrored : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.AnimNodeMovementTest.MovementDescription
// 0x0010
struct FMovementDescription
{
	unsigned char                                      MoveDirection;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FMovementAnimationInfo                      MovementAnimation;                                		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              UnwantedAnimationTime;                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCController.aBaseYStackData
// 0x0005
struct FaBaseYStackData
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeSmoothBlend.BlendTimeBoneBranch
// 0x000C
struct FBlendTimeBoneBranch
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTimeModifier;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSmoothBlend.BoneAtoms
// 0x0044
struct FBoneAtoms
{
	TArray< unsigned char >                            Bones;                                            		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FBoneAtom >                         LocalAtoms;                                       		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FBoneAtom                                   RMD;                                              		// 0x0018 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	int                                                bHasRootMotion;                                   		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.AnimNodeSmoothBlend.SmoothBlendInfo
// 0x0030
struct FSmoothBlendInfo
{
	TArray< unsigned char >                            Bones;                                            		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< float >                                    SmoothBlendWeights;                               		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< float >                                    SmoothBlendOutTimes;                              		// 0x0018 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< float >                                    SmoothBlendOutSpeeds;                             		// 0x0024 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.ScalarMtlParameterValue
// 0x000C
struct FScalarMtlParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.VectorMtlParameterValue
// 0x0018
struct FVectorMtlParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.TextureMtlParameterValue
// 0x000C
struct FTextureMtlParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    ParameterValue;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.MtlParams
// 0x0024
struct FMtlParams
{
	TArray< struct FScalarMtlParameterValue >          ScalarParams;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVectorMtlParameterValue >          VectorParams;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTextureMtlParameterValue >         TextureParams;                                    		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.HeadEx
// 0x0010
struct FHeadEx
{
	class USkeletalMesh*                               Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMorphTargetSet* >                   MorphSets;                                        		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.SimpleMeshData
// 0x0008
struct FSimpleMeshData
{
	float                                              SimpleMeshMaskShift;                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SimpleMeshTextureShift;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.CharacterPreset
// 0x011C
struct FCharacterPreset
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsMale : 1;                                       		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIgnoreHair : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIgnoreMakeup : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIgnoreBeard : 1;                                 		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bIgnoreGlasses : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	TArray< struct FLinearColor >                      SkinColor;                                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMtlParams >                        BodyMtlParams;                                    		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               MainSkeletal;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USkeletalMesh* >                     Heads;                                            		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FHeadEx >                           HeadExs;                                          		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               TopBody;                                          		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               BottomBody;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               HitCheckPhysAsset;                                		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   LobbyAnimTree;                                    		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          CommonAnimSets;                                   		// 0x0058 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             CommonAnimSetNames;                               		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UAnimSet* >                          LobbyAnimSets;                                    		// 0x0070 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             LobbyAnimSetNames;                                		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimTree*                                   InstanceAnimTree;                                 		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          InstanceAnimSets;                                 		// 0x008C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             InstanceAnimSetNames;                             		// 0x0098 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimTree*                                   EditorAnimTree;                                   		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          EditorAnimSets;                                   		// 0x00A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             EditorAnimSetNames;                               		// 0x00B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimTree*                                   PaperDollAnimTree;                                		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          PaperDollAnimSets;                                		// 0x00C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             PaperDollAnimSetNames;                            		// 0x00D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               SimpleSkeletal;                                   		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   SimpleAnimTree;                                   		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          SimpleAnimSets;                                   		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             SimpleAnimSetNames;                               		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSimpleMeshData                             NoUpperSMD;                                       		// 0x00FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FSimpleMeshData                             NoLowerSMD;                                       		// 0x0104 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FSimpleMeshData                             NoShoesSMD;                                       		// 0x010C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          HeadSkinMtl;                                      		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          BodySkinMtl;                                      		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCChrPresetsManager.NPCVisualPreset
// 0x007C
struct FNPCVisualPreset
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsFemale : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     PresetNameForAnimationProfiles;                   		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               MainSkeleton;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               Mesh;                                             		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                AttachmentMask;                                   		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ColorMask;                                        		// 0x0034 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   AnimTree;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          AnimSets;                                         		// 0x0048 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             AnimSetNames;                                     		// 0x0054 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPrimitiveComponent*                         CollisionComponent;                               		// 0x0064 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      DoNotCastShadow : 1;                              		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FString >                           Urls;                                             		// 0x006C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              AddHeadTranslation;                               		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeStreamPlayer.StreamAnimInfo
// 0x0050
struct FStreamAnimInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMirrored : 1;                                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) MISSED OFFSET
	struct FMatrix                                     AdditionalTransform;                              		// 0x0010 (0x0040) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeRecoil.RecoilInfo
// 0x0010
struct FRecoilInfo
{
	float                                              RecoilAnimationPeakTimePos;                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilAnimationRateScale;                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilRestoreTime;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilSmoothingTime;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeRecoil.RecoilStateInfo
// 0x0010
struct FRecoilStateInfo
{
	unsigned char                                      StateDesc;                                        		// 0x0000 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              TotalTime;                                        		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeLeft;                                         		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StartTime;                                        		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.AnimNodeRecoilAlgorithmic.AlgorithmicRecoilInfo
// 0x0024
struct FAlgorithmicRecoilInfo
{
	unsigned char                                      RecoilMethod;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilAnimationPeakTimePos;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilAmplitudeFadingAlpha;                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilRestoreTime;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilSmoothingTime;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDontPeekWaveFactor : 1;                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              WaveFactorMin;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaveFactorMax;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WaveFactorShotsPeriod;                            		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeScaleFilter.ScaleProperty
// 0x0014
struct FScaleProperty
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scale3D;                                          		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSequenceByAttachId.AnimByAttach
// 0x0010
struct FAnimByAttach
{
	struct FName                                       AttachName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSequenceByBoneRotation2.AnimByRotation
// 0x001C
struct FAnimByRotation
{
	struct FVector                                     DesiredDirection;                                 		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Priority;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FlipPawnRotationOnChoice : 1;                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSequenceByWeaponName.AnimByWeapon
// 0x0014
struct FAnimByWeapon
{
	struct FName                                       WeaponName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseAsFilter : 1;                                 		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSequenceCompareBase.AnimCompareResult
// 0x0008
struct FAnimCompareResult
{
	float                                              SummaryLocationDifference;                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SummaryRotationDifference;                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSequenceOptimalSelector.SequenceEntry
// 0x0008
struct FSequenceEntry
{
	struct FName                                       SequenceName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSequenceQuickWeaponChange.AnimBySlots
// 0x0028
struct FAnimBySlots
{
	unsigned char                                      SourceSlot;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            SourceWeaponTypes;                                		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      DestSlot;                                         		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            DestWeaponTypes;                                  		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       AnimName;                                         		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeSequenceQuickWeaponChange.QwchSwitchInfo
// 0x0004
struct FQwchSwitchInfo
{
	unsigned char                                      SourceSlot;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SourceWeaponType;                                 		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DestSlot;                                         		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DestWeaponType;                                   		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeStreamPlayer.StreamAnimIKControlSet
// 0x0010
struct FStreamAnimIKControlSet
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class USkelControlLimb*                            LimbControl;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      SingleBoneControl;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeStreamPlayer.StreamAnimBlendIKInfo
// 0x0018
struct FStreamAnimBlendIKInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartBeginState;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartEndState;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FinishBeginState;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FinishEndState;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeStreamPlayer.StreamAnimBlendInfo
// 0x0024
struct FStreamAnimBlendInfo
{
	unsigned long                                      bUseTriangleBlend : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              TriangleAnimBeforeTime;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TriangleAnimAfterTime;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TriangleBlendStartSpeed;                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TriangleBlendMiddleSpeed;                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TriangleBlendFinishSpeed;                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FStreamAnimBlendIKInfo >            BlendIKInfos;                                     		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.AnimNodeStreamPlayer.TestInfoEntry
// 0x0074
struct FTestInfoEntry
{
	struct FStreamAnimInfo                             AnimInfo;                                         		// 0x0000 (0x0050) [0x0000000000000001]              ( CPF_Edit )
	struct FStreamAnimBlendInfo                        BlendInfo;                                        		// 0x0050 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.AnimNodeStreamPlayer.StreamAnimFullDynamicInfo
// 0x0098
struct FStreamAnimFullDynamicInfo
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FStreamAnimInfo                             AnimInfo;                                         		// 0x0010 (0x0050) [0x0000000000000000]              
	struct FStreamAnimBlendInfo                        BlendInfo;                                        		// 0x0060 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              FullAnimTime;                                     		// 0x0084 (0x0004) [0x0000000000000000]              
	class UAnimSequence*                               TheAnimSequence;                                  		// 0x0088 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentState;                                     		// 0x008C (0x0001) [0x0000000000000000]              
	float                                              PendingAnimTime;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              PendingBlendState;                                		// 0x0094 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeStreamPlayer.StreamAnimDynamicNodeSet
// 0x000C
struct FStreamAnimDynamicNodeSet
{
	class UAnimNodeSequence*                           SequenceNode;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimNodeMirror*                             MirrorNode;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UAnimNodeRootTransform*                      TransformNode;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCMotionLawObject.MotionLawBuildingInputInfo
// 0x0004
struct FMotionLawBuildingInputInfo
{
	float                                              Dummy;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCMotionLawStore.MLS_Animation
// 0x0008
struct FMLS_Animation
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCMotionLawStore.MLS_CharacterGroup
// 0x0018
struct FMLS_CharacterGroup
{
	struct FName                                       CharacterPresetName;                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               CommonSkeletalMesh;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UAnimSet* >                          CommonAnimSets;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCMotionLawStore.MLS_Data
// 0x0018
struct FMLS_Data
{
	TArray< struct FMLS_CharacterGroup >               CharacterGroups;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMLS_Animation >                    Animations;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCMotionLawStore.InternalAnimEntry
// 0x0018
struct FInternalAnimEntry
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AnimSetFromName;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	class UCCMotionLawObject*                          MotionLaw;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	class UCCMotionLawObject*                          MirroredMotionLaw;                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCMotionLawStore.InternalCharacterGroup
// 0x0050
struct FInternalCharacterGroup
{
	struct FName                                       CharacterPresetName;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FInternalAnimEntry >                AnimEntries;                                      		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0014 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCMotionLawStore.InternalCharacterGroup.AnimEntriesMap
};

// ScriptStruct CrimeCraft.CCMotionLawStore.InternalData
// 0x0048
struct FInternalData
{
	TArray< struct FInternalCharacterGroup >           CharacterGroups;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x000C (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCMotionLawStore.InternalData.CharacterGroupsMap
};

// ScriptStruct CrimeCraft.CCMotionLawStore.MLS_GetDescription
// 0x0014
struct FMLS_GetDescription
{
	struct FName                                       CharacterPresetName;                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMirrored : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNeedsSequence : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCMotionLawStore.MLS_Result
// 0x000C
struct FMLS_Result
{
	class UAnimSet*                                    ResultSequenceAnimSet;                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSequence*                               ResultSequence;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCCMotionLawObject*                          ResultMotionLawObject;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeTakeHit.THDirectionalAnimationList
// 0x0018
struct FTHDirectionalAnimationList
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             Animations;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.AnimNodeTakeHit.THPerBoneAnimationList
// 0x0018
struct FTHPerBoneAnimationList
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTHDirectionalAnimationList >       DirectionalAnimations;                            		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUseForCrouch : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bGrenadeReaction : 1;                             		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeTakeHit.THBlendPerBoneNodeParams
// 0x0010
struct FTHBlendPerBoneNodeParams
{
	unsigned long                                      bForceLocalSpaceBlend : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FName >                             BranchStartBoneName;                              		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstancePawnTakeHitSystem.TakeHitInfo
// 0x0044
struct FTakeHitInfo
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       HitBone;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	class ACCInstancePawn*                             shooter;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              DamagePercent;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	struct FAdditionalHitInfo                          AddInfo;                                          		// 0x0030 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInterpolationSplineStructs.InterpolationSplineInfo
// 0x0030
struct FInterpolationSplineInfo
{
	struct FVector                                     InterpolationSplineLocation;                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     InterpolationSplineVelocity;                      		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     InterpolationSplineAcc;                           		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     InterpolationSplineAcc2;                          		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInterpolationSplineStructs.InterpolationSpline
// 0x0038
struct FInterpolationSpline
{
	struct FInterpolationSplineInfo                    SplineInfo;                                       		// 0x0000 (0x0030) [0x0000000000000000]              
	float                                              InterpolationTime;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              PassedInterpolationTime;                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeTurnInMoveByMovementModeInst.SetupInfo
// 0x0010
struct FSetupInfo
{
	float                                              RotationAngleLimit;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationRestoreSpeedMin;                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationRestoreSpeedMax;                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationRestoreSpeedPower;                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNodeTurnInMoveByMovementModeInst.SetupEntry
// 0x0018
struct FSetupEntry
{
	unsigned char                                      MovementMode;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAiming : 1;                                      		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FSetupInfo                                  SetupInfoStruct;                                  		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCAvatar.SpeedParams
// 0x0034
struct FSpeedParams
{
	float                                              SPD_GenericModifier;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              SPD_Crouch;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SPD_Walk;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              SPD_Run;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              SPD_Sprint;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              SPD_Rolling;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              SPD_CrouchAiming;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              SPD_WalkAiming;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              SPD_RunAiming;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              SPD_BackwardModifier;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              SPD_StrafeModifier;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              SPD_NormalAccel;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              SPD_SprintAccel;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSkelControl_SingleBone.SkelControlDestLocation
// 0x0024
struct FSkelControlDestLocation
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPawn.CustomComponentDesc
// 0x005C
struct FCustomComponentDesc
{
	class UActorComponent*                             Component;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     Tag;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              TimeLeft;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWantsToBeDeleted : 1;                            		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class USkeletalMeshComponent*                      AttachedToSkelComponent;                          		// 0x001C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       AttachedToSocketName;                             		// 0x0020 (0x0008) [0x0000000000000000]              
	class UCCPPController_Socket2Something*            AttachedToIKController;                           		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      IKLerpingMode;                                    		// 0x002C (0x0001) [0x0000000000000000]              
	float                                              IKLerpingTime;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              IKLerpingTimeLeft;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FSkelControlDestLocation                    IKLerpingLocation;                                		// 0x0038 (0x0024) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPawn.AdditionalAnimationNodeInfo
// 0x0014
struct FAdditionalAnimationNodeInfo
{
	class UAnimNodeBlendListEx*                        ListNode;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimNodeSmoothBlend*                        SmoothBlender;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UAnimNodeBlendPerBoneEx* >           Selectors;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawn.AdditionalAnimationEntry
// 0x0024
struct FAdditionalAnimationEntry
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nodeIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ChildIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< class UAnimNodeSequence* >                 SequenceNodes;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimNodeMirror*                             MirrorNode;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendMultiChild*                    BlendNode;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPawn.AbilityPSEffectInfo
// 0x0020
struct FAbilityPSEffectInfo
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       PSAttachSocket;                                   		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       PSAttachBoneName;                                 		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              LifeTimeLeft;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAttached : 1;                                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsReAttach : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWantsDetach : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWantsDelete : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CrimeCraft.CCPawn.CCPawnAnimationsData
// 0x0024
struct FCCPawnAnimationsData
{
	struct FString                                     AnimationTree;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PhysAsset;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AnimationSets;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawn.ShadowCharacterComponent
// 0x000C
struct FShadowCharacterComponent
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	class UCCCharacterComponent*                       CharComponent;                                    		// 0x0008 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct CrimeCraft.CCPawn.AdditionalAnimInfo_MeshParameter
// 0x0014
struct FAdditionalAnimInfo_MeshParameter
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              Value;                                            		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     ResourceName;                                     		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawn.AdditionalAnimInfo_VectorParameter
// 0x0010
struct FAdditionalAnimInfo_VectorParameter
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Value;                                            		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPawn.AdditionalAnimInfo_RotatorParameter
// 0x0010
struct FAdditionalAnimInfo_RotatorParameter
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FRotator                                    Value;                                            		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPawn.AdditionalAnimInfo
// 0x008C
struct FAdditionalAnimInfo
{
	struct FString                                     AnimName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNoBlendIn : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMirroredAnimation : 1;                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              PlayTime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              BlendNodeTarget;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHideWeaponDueAnim : 1;                           		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLoopAnimation : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSequenceBased : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              StartDelay;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              FinishDelay;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FAdditionalAnimInfo_MeshParameter           MeshParameters[ 0x2 ];                            		// 0x0024 (0x0028) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	struct FAdditionalAnimInfo_VectorParameter         VectorParameters[ 0x2 ];                          		// 0x004C (0x0020) [0x0000000000000000]              
	struct FAdditionalAnimInfo_RotatorParameter        RotatorParameters[ 0x2 ];                         		// 0x006C (0x0020) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPawn.AdditionalAnimInfoRepStruct
// 0x0098
struct FAdditionalAnimInfoRepStruct
{
	struct FAdditionalAnimInfo                         AnimInfo;                                         		// 0x0000 (0x008C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	float                                              Time;                                             		// 0x008C (0x0004) [0x0000000000000000]              
	class AController*                                 bDontPlayAt;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                RepId;                                            		// 0x0094 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeTurnInPlace.TurnNode
// 0x000C
struct FTurnNode
{
	class UAnimNodeSequence*                           SequenceNode;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Angle;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ChildIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNodeTurnInPlaceInst.TurnModeInfo
// 0x0020
struct FTurnModeInfo
{
	unsigned long                                      ModeEnabled : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              AngleDiff;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SequenceName;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SmoothBlendInTime;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSwitchUpProgressPerc;                          		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeSequence*                           SequenceNode;                                     		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.AnimNodeTurnInPlaceInst.RuntimeTurnInfo
// 0x0018
struct FRuntimeTurnInfo
{
	int                                                TurnModeIndex;                                    		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SystemBasisStartAngle;                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SystemBasisAngleDirection;                        		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TargetAngle;                                      		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentAngle;                                     		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TurnSpeed;                                        		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.GunRecoilNodesArray
// 0x000C
struct FGunRecoilNodesArray
{
	TArray< class UGameSkelCtrl_RecoilEx* >            GunRecoilNodes;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.MuzzleFlashPSCsArray
// 0x000C
struct FMuzzleFlashPSCsArray
{
	TArray< class UParticleSystemComponent* >          MuzzleFlashPSCs;                                  		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WeaponStateInfo
// 0x0014
struct FWeaponStateInfo
{
	unsigned char                                      WeaponState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                WeaponStateCounter;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceReEnter : 1;                                		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              LastAnimStartTime;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ClientLastAnimStartTime;                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_NormalInfo
// 0x0014
struct FWS_NormalInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_GettingInfo
// 0x0018
struct FWS_GettingInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	float                                              WS_EquipTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_HidingInfo
// 0x0018
struct FWS_HidingInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	float                                              WS_HideTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_QuickWeaponChangeInfo
// 0x001C
struct FWS_QuickWeaponChangeInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	unsigned char                                      WS_SourceSlot;                                    		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      WS_SourceWeaponType;                              		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      WS_DestSlot;                                      		// 0x0016 (0x0001) [0x0000000000000000]              
	unsigned char                                      WS_DestWeaponType;                                		// 0x0017 (0x0001) [0x0000000000000000]              
	float                                              WS_Time;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_ReloadingInfo
// 0x002C
struct FWS_ReloadingInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	int                                                WS_Reload_BulletsToArm;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              WS_ReloadTime;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              WS_ReloadPreTime;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              WS_ReloadPostTime;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              WS_SingleBulletReloadTimePerc;                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              WS_SingleBulletReloadTimePosPerc;                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_FiringInfo
// 0x0018
struct FWS_FiringInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	float                                              WS_Speed;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_GrenadeThrowInfo
// 0x0028
struct FWS_GrenadeThrowInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	struct FString                                     WS_GrenadePresetID;                               		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              WS_GrenadeThrowTime;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                WS_AnimationType;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.MeleeUnsuccessBeatInfo
// 0x0010
struct FMeleeUnsuccessBeatInfo
{
	int                                                ParamsId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BeatMode;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeOut;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.MeleeTraceLimitsEntry
// 0x0018
struct FMeleeTraceLimitsEntry
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.MeleeTraceLimits
// 0x0050
struct FMeleeTraceLimits
{
	TArray< struct FMeleeTraceLimitsEntry >            Entries;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x000C (0x0004) MISSED OFFSET
	struct FMatrix                                     CenterTransform;                                  		// 0x0010 (0x0040) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.MeleeImpactInfo
// 0x008C
struct FMeleeImpactInfo
{
	struct FImpactInfo                                 Impact;                                           		// 0x0000 (0x0074) [0x0000000000080000]              ( CPF_Component )
	struct FMeleeTraceLimitsEntry                      WorldSpaceTraceLimitsEntry;                       		// 0x0074 (0x0018) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.Attachments
// 0x0004
struct FAttachments
{
	int                                                FuncId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponPreset.WeaponProjectileAddDamageRadiusParams
// 0x000C
struct FWeaponProjectileAddDamageRadiusParams
{
	unsigned long                                      bUseIt : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ImpactedDamageModifier;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ImpactedDamageRadiusModifier;                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.CustomProjectileFire
// 0x0084
struct FCustomProjectileFire
{
	unsigned long                                      bUseCustomProjectile : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class AActor*                                      ProjectileArchetype;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	class UClass*                                      ProjectileClass;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	class AController*                                 InstigatorController;                             		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      ProjectileFalling : 1;                            		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ProjectileAltFire : 1;                            		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              ProjectileSpeed;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileMaxSpeed;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileAccelerationTime;                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileGravityModifier;                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileLifeTime;                               		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileReflectionDamage;                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileReflectionMomentum;                     		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileDamage;                                 		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ProjectileOverrideDamageType;                     		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileDamageRadius;                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileDamageRadiusMin;                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FWeaponProjectileAddDamageRadiusParams      ProjectileAddDamageRadiusParams;                  		// 0x0040 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileMomentumTransfer;                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileDamageRadiusKoeficient;                 		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileLifePoints;                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileImpulseKoeficient;                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileAirFrictionPower;                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileAirFrictionDelay;                       		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProjectileAltFireDist;                            		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileWeaponAttachmentID;                     		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ProjectileAbilityName;                            		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponPenetrationModifier;                        		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ExplodeOnEnemy : 1;                               		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UCCAbilityContext*                           AbilityContext;                                   		// 0x0080 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponPreset.WeaponSpiralRocketParams
// 0x0044
struct FWeaponSpiralRocketParams
{
	int                                                WPN_ProjectileSpiralRockets;                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              WPN_ProjectileSpiralRadius;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WPN_ProjectileSpiralPeriod;                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              WPN_ProjectileSpiralOffset;                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              WPN_RandomFlyingCollisionAvoidance_CheckTimeDelta;		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              WPN_RandomFlyingCollisionAvoidance_CheckTimeStep; 		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              WPN_TryToDoCollisionAvoidance_MaxOffset;          		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              WPN_TestCollisionAvoidanceTrajectory_CheckTimeStep;		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              WPN_MaxMainGoalAngle;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                WPN_bOneRocketPerEnemy;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              WPN_MaxEnemyDist;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              WPN_MaxEnemyDetectAngleHorizontal;                		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              WPN_MaxEnemyDetectAngleVertical;                  		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              WPN_MaxEnemyAngle;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              WPN_MinRotationRadius;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              WPN_OptimalRotationRadius;                        		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              WPN_Hunting_CollisionCheckLength;                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.SpreadProcessShotInfo
// 0x0004
struct FSpreadProcessShotInfo
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFirstShot : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCWeaponPreset.SpreadFullRandomParams
// 0x000C
struct FSpreadFullRandomParams
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Step;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponPreset.SpreadPresetParams
// 0x0008
struct FSpreadPresetParams
{
	int                                                PresetIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PresetHash;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCWeaponPreset.SpreadParamsElement
// 0x0038
struct FSpreadParamsElement
{
	int                                                SpreadProcessorType;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSpreadFullRandomParams                     FullRandomParams;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FSpreadPresetParams                         PresetParams;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              RestoreTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              RestorePower;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              MainRestoreSpeed;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              AdditionalRestoreSpeed;                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ControlShotsCount;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideHudSpreadEffectParams : 1;               		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HudSpreadEffectIncrease;                          		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              HudSpreadEffectInterpolationTime;                 		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponPreset.SpreadParams
// 0x008C
struct FSpreadParams
{
	struct FSpreadParamsElement                        IdleParams;                                       		// 0x0000 (0x0038) [0x0000000000000000]              
	struct FSpreadParamsElement                        AimingParams;                                     		// 0x0038 (0x0038) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	float                                              MoveScale;                                        		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              AimingScale;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              CrouchScale;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned long                                      bFovModifierDisabled : 1;                         		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EmpiricSpread;                                    		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              EmpiricAimingSpread;                              		// 0x0088 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponPreset.TakeHitSpeedModifierInfo
// 0x000C
struct FTakeHitSpeedModifierInfo
{
	float                                              WPN_TH_SPDModifier;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              WPN_TH_SPDModifierTime;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WPN_TH_SPDModifierTimePower;                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.AddWeaponRecoilInfo
// 0x0004
struct FAddWeaponRecoilInfo
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReStartRules : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCWeaponPreset.SniperRifleRecoilParams
// 0x001C
struct FSniperRifleRecoilParams
{
	float                                              WPN_SRecoilRadius;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              WPN_SRecoilPeriod;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WPN_SRecoilTotalTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              WPM_SRecoilRadiusMoveModifier;                    		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              WPM_SRecoilRadiusCrouchModifier;                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              WPM_SRecoilTotalTimeMoveModifier;                 		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              WPM_SRecoilTotalTimeCrouchModifier;               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponPreset.BaseRecoilParams
// 0x0040
struct FBaseRecoilParams
{
	int                                                WPN_RecoilPresetIndex;                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WPN_RecoilPresetHash;                             		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                WPN_RecoilAimingPresetIndex;                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WPN_RecoilAimingPresetHash;                       		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WPN_RecoilRestoreTime;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilRestorePower;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilRestoreSpeed;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilRestoreAcceleration;                    		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilAimingRestoreTime;                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilAimingRestorePower;                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilAimingRestoreSpeed;                     		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilAimingRestoreAcceleration;              		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilScale;                                  		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilMoveScale;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilAimingScale;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              WPN_RecoilCrouchScale;                            		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.WeaponHitInfo
// 0x002C
struct FWeaponHitInfo
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FAdditionalHitInfo                          AddInfo;                                          		// 0x0018 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.ImpactSomePackData
// 0x0014
struct FImpactSomePackData
{
	float                                              DamageScale;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ShotFlags;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UObject*                                     ShotOffGibPreset;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeapon.PackedImpactInfos
// 0x0090
struct FPackedImpactInfos
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FImpactInfo >                       SourceImpactList;                                 		// 0x0004 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	struct FImpactInfo                                 BaseImpactInfo;                                   		// 0x0010 (0x0074) [0x0000000000080000]              ( CPF_Component )
	TArray< struct FImpactSomePackData >               PackDatas;                                        		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.WS_MeleeInfo
// 0x0034
struct FWS_MeleeInfo
{
	struct FWeaponStateInfo                            WpnStateInfo;                                     		// 0x0000 (0x0014) [0x0000000000000000]              
	int                                                WS_MeleeParametersID;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                WS_MeleeBeatMode;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      WS_MeleeAnimationType;                            		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                WS_MeleeAnimationIndex;                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              WS_MeleeStartTime;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              WS_MeleeTime;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              WS_MeleeFullTime;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              WS_MeleeSmoothBlendTime;                          		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponPhysMatEffects.WeaponHitEffect
// 0x0008
struct FWeaponHitEffect
{
	class UParticleSystem*                             HitEffect;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HitCoeff;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCWeaponPhysMatEffects.WeaponPerBulletsHitSound
// 0x0008
struct FWeaponPerBulletsHitSound
{
	int                                                NumHitedBullets;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HitSound;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCWeaponPhysMatEffects.WeaponTypeEffect
// 0x0044
struct FWeaponTypeEffect
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HitSound;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeaponPerBulletsHitSound >         PerBulletsHitSoundInfo;                           		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   ReflectionSound;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UDecalMaterial* >                    DecalMaterials;                                   		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DecalLifetime;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalSize;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeaponHitEffect >                  HitEffects;                                       		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DamagePenetrationMinLoss;                         		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamagePenetrationMinLossWidth;                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamagePenetrationMaxLossWidth;                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.EffectImpactInfo
// 0x00B8
struct FEffectImpactInfo
{
	struct FImpactInfo                                 ItsImpactInfo;                                    		// 0x0000 (0x0074) [0x0000000000080000]              ( CPF_Component )
	struct FWeaponTypeEffect                           ItsEffectInfo;                                    		// 0x0074 (0x0044) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.EffectImpactInfoSet
// 0x00C4
struct FEffectImpactInfoSet
{
	struct FEffectImpactInfo                           MainEffectImpact;                                 		// 0x0000 (0x00B8) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< struct FEffectImpactInfo >                 Infos;                                            		// 0x00B8 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.EffectImpactInfoIndexPair
// 0x0008
struct FEffectImpactInfoIndexPair
{
	int                                                Index1;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index2;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.EffectImpactInfoIndexPairLookUpEntry
// 0x000C
struct FEffectImpactInfoIndexPairLookUpEntry
{
	TArray< int >                                      PairIndices;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.EffectImpactInfoIndexGroup
// 0x000C
struct FEffectImpactInfoIndexGroup
{
	TArray< int >                                      Indices;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.SoundEffectImpactInfo
// 0x001C
struct FSoundEffectImpactInfo
{
	int                                                NumBullets;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         TheSounds;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     SoundLocation;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.MuzzleFlashLightsArray
// 0x000C
struct FMuzzleFlashLightsArray
{
	TArray< class UCCExplosionLight* >                 MuzzleFlashLights;                                		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CrimeCraft.YakaLayer.AvatarAttribute
// 0x0008
struct FAvatarAttribute
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.PaymentMethodSet
// 0x0004
struct FPaymentMethodSet
{
	unsigned long                                      GoldAndCash : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Gold : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Cash : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.PaperdollCategoryInvisibilitySet
// 0x0004
struct FPaperdollCategoryInvisibilitySet
{
	unsigned long                                      PCI_Hat : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PCI_Eyes : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.EventDeclarationsChangedTypeSet
// 0x0004
struct FEventDeclarationsChangedTypeSet
{
	unsigned long                                      PrivateEventsWasChanged : 1;                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      PublicEventsWasChanged : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanRankPrivilegesSet
// 0x0004
struct FClanRankPrivilegesSet
{
	unsigned long                                      CreateDeleteRank : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RenameRank : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      ChangeRankLevel : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      ChangeRankPrivileges : 1;                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      SetCharactersRank : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      InviteCharacter : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      DisbandCharacter : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      RaiseClanLevel : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      EditClanDescription : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      EditOpenCharacterDescription : 1;                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      AccessSecureCharacterDescription : 1;             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      EditDailyMessage : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      AccessSecureChat : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      EnterClanHall : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      SetProductionPlan : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      AccessProductionContainer : 1;                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      ViewBankLog : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      WriteToEventManager : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      AccessBuffSlots : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      AccessClanHallImprovementsSlots : 1;              		// 0x0000 (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      ChangeClanLogo : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00100000] ( CPF_Edit )
	unsigned long                                      AccessClubManager : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00200000] ( CPF_Edit )
	unsigned long                                      TWManager : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00400000] ( CPF_Edit )
	unsigned long                                      AccessTW : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00800000] ( CPF_Edit )
	unsigned long                                      TerritoryProduction : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x01000000] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanSubscriptionPrivilegesSet
// 0x0004
struct FClanSubscriptionPrivilegesSet
{
	unsigned long                                      CreateClan : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      SendPetition : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      JoinClan : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      BuyClanHall : 1;                                  		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      ChangeCHAndBankPrivileges : 1;                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      ReadAcceptEventManager : 1;                       		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      ParticipateInGangWars : 1;                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      StartAcceptGangWars : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      ClanBankAccess : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      StartProductionPlan : 1;                          		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      StopProductionPlan : 1;                           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      CHPostAndVendorInteraction : 1;                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ETWStateFlagsSet
// 0x0004
struct FETWStateFlagsSet
{
	unsigned long                                      AutoJoin : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.AccessTypeSet
// 0x0004
struct FAccessTypeSet
{
	unsigned long                                      Chat : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Quickplay : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Tournament : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Clan : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      Visibility : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      Group : 1;                                        		// 0x0000 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      Mail : 1;                                         		// 0x0000 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      AutoJoin : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      AutojoinTutorial : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      FullRates : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemAttribute
// 0x0008
struct FItemAttribute
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemAvatarModifier
// 0x0008
struct FItemAvatarModifier
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemAttachmentDescription
// 0x0018
struct FItemAttachmentDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Slot;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemAttribute >                    Attributes;                                       		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemDescription
// 0x002C
struct FItemDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemAttachmentDescription >        Attachments;                                      		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FItemAttribute >                    Attributes;                                       		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FItemAvatarModifier >               Modifiers;                                        		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemAttachments
// 0x0010
struct FItemAttachments
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Attachments;                                      		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemAttachmentsDeleted
// 0x0010
struct FItemAttachmentsDeleted
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Attachments;                                      		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ConnectionData
// 0x0010
struct FConnectionData
{
	struct FString                                     IPAddress;                                        		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Port;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.Paperdoll
// 0x0038
struct FPaperdoll
{
	int                                                HatTemplateId;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HatColorId;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GlassesTemplateId;                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GlassesColorId;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UpperClothTemplateId;                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UpperClothColorId;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BottomClothTemplateId;                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BottomClothColorId;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoesTemplateId;                                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoesColorId;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ProfilePresetId;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ProfilePresetLevel;                               		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ProfilePresetEquippedLevel;                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsDefaultMakeup : 1;                              		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.CharacterPosition
// 0x0010
struct FCharacterPosition
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Yaw;                                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.CharacterAppearance
// 0x0008
struct FCharacterAppearance
{
	unsigned char                                      PresetId;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      HeadId;                                           		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SkinColor;                                        		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      HairType;                                         		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      HairColor;                                        		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BeardId;                                          		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MakeupId;                                         		// 0x0006 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      NameColor;                                        		// 0x0007 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.CharacterMovementData
// 0x0014
struct FCharacterMovementData
{
	float                                              Speed;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MoveDir;                                          		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              VelX;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VelY;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VelZ;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ServerDateTime
// 0x0008
struct FServerDateTime
{
	unsigned char                                      Year;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Month;                                            		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Day;                                              		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Hour;                                             		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Minute;                                           		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Second;                                           		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Dummy1;                                           		// 0x0006 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Dummy2;                                           		// 0x0007 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.AbilityRiseDescription
// 0x0005
struct FAbilityRiseDescription
{
	int                                                AbilityId;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RiseValue;                                        		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ActionBarAbility
// 0x0008
struct FActionBarAbility
{
	int                                                Slot;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Ability;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ProfileActionBarAbility
// 0x0010
struct FProfileActionBarAbility
{
	unsigned char                                      ProfileIndex;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FActionBarAbility >                 Abilities;                                        		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ProfileActionBarAbilityDeleted
// 0x0010
struct FProfileActionBarAbilityDeleted
{
	unsigned char                                      ProfileIndex;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Slots;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.AchievementConditionDescription
// 0x0008
struct FAchievementConditionDescription
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.AchievementDescription
// 0x0018
struct FAchievementDescription
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             DateChangeState;                                  		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAchievementConditionDescription >  Conditions;                                       		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanAchievementConditionDescription
// 0x0008
struct FClanAchievementConditionDescription
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanAchievementDescription
// 0x0018
struct FClanAchievementDescription
{
	int                                                ClanAchievementId;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             DateChangeState;                                  		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClanAchievementConditionDescription > Conditions;                                       		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.StatisticParameterDescription
// 0x0008
struct FStatisticParameterDescription
{
	int                                                Name;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.FilterUnit
// 0x0008
struct FFilterUnit
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.FilterUnitString
// 0x0010
struct FFilterUnitString
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Value;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.LotDesc
// 0x0048
struct FLotDesc
{
	struct FItemDescription                            Item;                                             		// 0x0000 (0x002C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CharacterName;                                    		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Bid;                                              		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BidStep;                                          		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BuyoutPrice;                                      		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LeftTime;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.LotDescUpdate
// 0x0014
struct FLotDescUpdate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BuyerName;                                        		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Bid;                                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.AuctionStatisticsTime
// 0x0008
struct FAuctionStatisticsTime
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TimeLeft;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.BankTabDesc
// 0x0014
struct FBankTabDesc
{
	unsigned char                                      TabIndex;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsExtra : 1;                                      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.FriendListCharacterInfo
// 0x0014
struct FFriendListCharacterInfo
{
	int                                                CharacterId;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GroupId;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Notes;                                            		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.BlackListCharacterInfo
// 0x0010
struct FBlackListCharacterInfo
{
	int                                                CharacterId;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Notes;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.FriendListGroupInfo
// 0x0010
struct FFriendListGroupInfo
{
	int                                                GroupId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     GroupName;                                        		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanBankCashLogRecord
// 0x0019
struct FClanBankCashLogRecord
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Amount;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             DateTime;                                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ActionType;                                       		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanBankItemLogRecord
// 0x0034
struct FClanBankItemLogRecord
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ReceiverName;                                     		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ItemTemplateId;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemAttribute >                    ItemAttributes;                                   		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FServerDateTime                             DateTime;                                         		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      HasPlaced : 1;                                    		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      FromLootContainer : 1;                            		// 0x0030 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanBankTabWithdrawed
// 0x0008
struct FClanBankTabWithdrawed
{
	unsigned char                                      Index;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanBankRankPrivileges
// 0x000C
struct FClanBankRankPrivileges
{
	unsigned char                                      TabIndex;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CanPlaceItems : 1;                                		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                ItemsWithdrawLimit;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.RankDescription
// 0x0015
struct FRankDescription
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Privileges;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Level;                                            		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.RankTabDescription
// 0x0014
struct FRankTabDescription
{
	unsigned char                                      RankId;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                CashLimit;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClanBankRankPrivileges >           Privileges;                                       		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.RankTabDescriptionDeleted
// 0x0010
struct FRankTabDescriptionDeleted
{
	unsigned char                                      RankId;                                           		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            Indexes;                                          		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanBankTabInfo
// 0x0010
struct FClanBankTabInfo
{
	unsigned char                                      Index;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Caption;                                          		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanmateDescription
// 0x003C
struct FClanmateDescription
{
	int                                                ClanmateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      RankId;                                           		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Note;                                             		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SeasonIdWhenJoinClan;                             		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AccountType;                                      		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             AccountTypeExpiration;                            		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Location;                                         		// 0x0030 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      GangWarForMoneySelection : 1;                     		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TWState;                                          		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.SecureClanmateDescription
// 0x0010
struct FSecureClanmateDescription
{
	int                                                ClanmateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Text;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClanWarForMoneyAvailability
// 0x0020
struct FClanWarForMoneyAvailability
{
	int                                                ClanId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClanLeaderName;                                   		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                WinCount;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LoseCount;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WinMoney;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LoseMoney;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.DemandDescription
// 0x0044
struct FDemandDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClanId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClanLeaderName;                                   		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     TeamName;                                         		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                InstanceId;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Stake;                                            		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Coeff1;                                           		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Coeff2;                                           		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WinMoney;                                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LoseMoney;                                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Team;                                             		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClientVar
// 0x0008
struct FClientVar
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClientVars
// 0x0010
struct FClientVars
{
	int                                                CategoryId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClientVar >                        Vars;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.InteractionData
// 0x0018
struct FInteractionData
{
	int                                                CharacterId;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ObjectId;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param1;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param2;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             StartTime;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClubParty
// 0x0018
struct FClubParty
{
	int                                                ClanId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsPublic : 1;                                     		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                PartyTypeId;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EntranceFee;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             StartTime;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClubItemAttribute
// 0x0008
struct FClubItemAttribute
{
	unsigned char                                      AttributeTemplateId;                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                EncodedValue;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ClubItemChanges
// 0x001C
struct FClubItemChanges
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClubItemAttribute >                ChangedAttributes;                                		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RemovedAttributesTemplateIds;                     		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClubItem
// 0x0014
struct FClubItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemTemplateId;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClubItemAttribute >                Attributes;                                       		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClubZoneChanges
// 0x0028
struct FClubZoneChanges
{
	int                                                ZoneId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClubItem >                         AddedItems;                                       		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RemovedItemsIds;                                  		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FClubItemChanges >                  ChangesInItems;                                   		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ClubZone
// 0x0010
struct FClubZone
{
	int                                                ZoneId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClubItem >                         Items;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.DesignDataValue
// 0x0008
struct FDesignDataValue
{
	int                                                ObjectId;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.DesignDataGroup
// 0x0010
struct FDesignDataGroup
{
	unsigned char                                      DesignDataFieldId;                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FDesignDataValue >                  DesignDataValues;                                 		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.DesignDataUpdate
// 0x000C
struct FDesignDataUpdate
{
	TArray< struct FDesignDataGroup >                  DesignDataGroups;                                 		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.CharacterAddiction
// 0x0014
struct FCharacterAddiction
{
	int                                                DrugId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumberOfUse;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             LastUse;                                          		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsAddicted : 1;                                   		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.CharacterInfoShort
// 0x0012
struct FCharacterInfoShort
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ClanId;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Level;                                            		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ClassId;                                          		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.GroupMemberInfo
// 0x0010
struct FGroupMemberInfo
{
	int                                                CharacterId;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CharacterName;                                    		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.InstanceSessionDescription
// 0x0044
struct FInstanceSessionDescription
{
	int                                                IdForUI;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                InstanceId;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SessionId;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Status;                                           		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Players;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AvgPowerRank;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CreatorCharacterId;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PVEDifficulty;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AvgCharacterLevel;                                		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      HasPassword : 1;                                  		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      TerritoryWar : 1;                                 		// 0x0028 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      ChangeTeamAllowed : 1;                            		// 0x0028 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	TArray< int >                                      GameModifiersIds;                                 		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RewardModifiersIds;                               		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.WeaponProfile
// 0x002C
struct FWeaponProfile
{
	int                                                ActionSlot;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WeaponTemplateId;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAvatarAttribute >                  AttributeDiffs;                                   		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Attachments;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      AttachmentsColors;                                		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAvatar.WeaponAttachesArray
// 0x0038
struct FWeaponAttachesArray
{
	int                                                SlotIndex[ 0x7 ];                                 		// 0x0000 (0x001C) [0x0000000000000000]              
	int                                                ColorIndex[ 0x7 ];                                		// 0x001C (0x001C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAvatar.AmmoPack
// 0x000C
struct FAmmoPack
{
	int                                                ClipSize;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TotalClips;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TotalAmmoCount;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAvatar.Defense
// 0x000C
struct FDefense
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Bonus;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAvatar.AbilitSlotDesc
// 0x0010
struct FAbilitSlotDesc
{
	struct FName                                       client_ability_name;                              		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                client_ability_level;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                server_ability_id;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAvatar.AbilityShotDesc
// 0x0014
struct FAbilityShotDesc
{
	struct FName                                       AbilityName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      AllowDamage : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      UseCriticalEffects : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DamageMultiplier;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              BurnRange;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAvatar.AbilitySlotEditorParams
// 0x0040
struct FAbilitySlotEditorParams
{
	struct FName                                       AbilitySlot[ 0x8 ];                               		// 0x0000 (0x0040) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAvatar.BackStabParams
// 0x000C
struct FBackStabParams
{
	float                                              BSB_BackStabDamageRadius;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              BSB_DamageCoeff;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      BSB_bCanBackStab : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      BSB_bCanFallOff : 1;                              		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCAvatar.WeaponDamTypeParams
// 0x0018
struct FWeaponDamTypeParams
{
	float                                              WDT_Absorb;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamageTypeCoeffs[ 0x5 ];                          		// 0x0004 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponAttachment.MyDouble
// 0x0008
struct FMyDouble
{
	struct FDouble                                     Value;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.AnimNotify_AttachComponent.PS2CCParameters
// 0x000C
struct FPS2CCParameters
{
	struct FName                                       CustomComponentSocketName;                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS;                                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNotify_AttachComponent.IKLerpingParameters
// 0x0034
struct FIKLerpingParameters
{
	unsigned char                                      LerpingMode;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              IKLerpingTime;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FSkelControlDestLocation                    IKLerpingLocation;                                		// 0x0008 (0x0024) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPeekTransformFromParameters : 1;                 		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                ParameterIndex;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNotify_AttachComponent.StaticMeshParameters
// 0x0004
struct FStaticMeshParameters
{
	class UStaticMesh*                                 StaticMeshTemplate;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.AnimNotify_AttachComponent.SkeletalMeshParameters
// 0x0018
struct FSkeletalMeshParameters
{
	class USkeletalMesh*                               SkeletalMeshTemplate;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    AnimSet;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MainSequenceNodeName;                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCAbility.CCAbilityAction
// 0x0030
struct FCCAbilityAction
{
	struct FName                                       ActionName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ActionParam;                                      		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                DisallowInAbilityZoneType;                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     BeforeCommandLine;                                		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AfterCommandLine;                                 		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAbility.CCAbilityPSEffect
// 0x00D8
struct FCCAbilityPSEffect
{
	struct FString                                     PSName[ 0x6 ];                                    		// 0x0000 (0x0048) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             PS[ 0x6 ];                                        		// 0x0048 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       PSAttachSocket[ 0x6 ];                            		// 0x0060 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PSAttachBoneName[ 0x6 ];                          		// 0x0090 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	float                                              PSPlayTime[ 0x6 ];                                		// 0x00C0 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCAbility.CCAbilityVoice
// 0x0010
struct FCCAbilityVoice
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SpeakerType;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCAbility.CCAbilityEffect
// 0x0494
struct FCCAbilityEffect
{
	unsigned long                                      IsActive : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FCCAbilityPSEffect                          PSEffect[ 0x3 ];                                  		// 0x0004 (0x0288) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Standing_AnimName[ 0x6 ];                         		// 0x028C (0x0048) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Standing_AnimPlayTime[ 0x6 ];                     		// 0x02D4 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Standing_HideWeapon[ 0x6 ];                       		// 0x02EC (0x0006) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Standing_LoopAnimation[ 0x6 ];                    		// 0x02F2 (0x0006) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Standing_SequenceBased[ 0x6 ];                    		// 0x02F8 (0x0006) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Crouch_AnimName[ 0x6 ];                           		// 0x0300 (0x0048) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Crouch_AnimPlayTime[ 0x6 ];                       		// 0x0348 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Crouch_HideWeapon[ 0x6 ];                         		// 0x0360 (0x0006) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Crouch_LoopAnimation[ 0x6 ];                      		// 0x0366 (0x0006) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Crouch_SequenceBased[ 0x6 ];                      		// 0x036C (0x0006) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SoundName[ 0x6 ];                                 		// 0x0374 (0x0048) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SoundFlags[ 0x6 ];                                		// 0x03BC (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StaticMeshName[ 0x6 ];                            		// 0x03D4 (0x0048) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   Sound[ 0x6 ];                                     		// 0x041C (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FCCAbilityVoice                             VoiceInfo[ 0x6 ];                                 		// 0x0434 (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAbility.CCAvatarLogicOperation
// 0x0014
struct FCCAvatarLogicOperation
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPointer >                          LogicOperations;                                  		// 0x0008 (0x000C) [0x0000000000101002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct CrimeCraft.CCAbility.CCAvatarMathOperation
// 0x001C
struct FCCAvatarMathOperation
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ValueMultipliedBy;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	TArray< struct FPointer >                          MathOperations;                                   		// 0x0010 (0x000C) [0x0000000000101002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct CrimeCraft.CCAbilitySystem.CCAbilityInfo
// 0x0034
struct FCCAbilityInfo
{
	struct FName                                       AbilityName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TypeCooldownTime;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CoolDownTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PrepareTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              PreparingTick;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              AffectTime;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              AffectingTick;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              AbilityAffectingTick;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	class UCCAbility*                                  Ability;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	class AController*                                 Caster;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	class UCCAbilityContext*                           AbilityContext;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisablePreparingActions : 1;                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      WasCool : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Active : 1;                                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInitialCommandLineDone : 1;                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CrimeCraft.CCAbilityActions.CCActionParams
// 0x0014
struct FCCActionParams
{
	class UCCAbility*                                  Ability;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class ACCInstancePawn*                             Pawn;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Params;                                           		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstancePawn.ProjectileDetectingInfo
// 0x001C
struct FProjectileDetectingInfo
{
	struct FName                                       ProjClass;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     ProjLocation;                                     		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              ProjDistanceModifier;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	class ACCProjectile*                               CurrentProjectile;                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.PhysStateParams
// 0x0024
struct FPhysStateParams
{
	struct FString                                     StateDesc;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              RagdollPhysicsBlendOutSpeed;                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fDelayTime;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRecoveryAnim : 1;                             		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUpdKinemaBonesFromAnim : 1;                      		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSyncActorToRootBodyLoc : 1;                      		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       RecovAnimNodeName;                                		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimNodeBlend*                              RecovAnimNodeBlend;                               		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.SoloPickupType
// 0x001C
struct FSoloPickupType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CharacterCreationItems
// 0x003C
struct FCharacterCreationItems
{
	TArray< int >                                      Hats;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      UpperClothes;                                     		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      LowerClothes;                                     		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Shoes;                                            		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Others;                                           		// 0x0030 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.SubscriptionDescription
// 0x00F4
struct FSubscriptionDescription
{
	unsigned long                                      bShowPvPRanking : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                MaxItemLevel;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxQuestLevel;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxClanLevel;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCharacterCreationRandomizeOnly : 1;              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FCharacterCreationItems                     MaleCharacterCreationItems;                       		// 0x0014 (0x003C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FCharacterCreationItems                     FemaleCharacterCreationItems;                     		// 0x0050 (0x003C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CharacterSlots;                                   		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AbilityActionBarSlotCount;                        		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DisabledActionBarSlotCount;                       		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SellFactor;                                       		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DeleteCharacterTimeout;                           		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxChallenges;                                    		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxMissions;                                      		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCraftEnabled : 1;                                		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInstanceCreationEnabled : 1;                     		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bMasteryEnabled : 1;                              		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	int                                                MaxAbilityLevel;                                  		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      PaperdollDisabledSlots;                           		// 0x00B0 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxBankTabs;                                      		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxBackpackTabs;                                  		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMailEnabled : 1;                                 		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAuctionEnabled : 1;                              		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSetLotTimeEnabled : 1;                           		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bVoiceChatEnabled : 1;                            		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bPlayerInteractionEnabled : 1;                    		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bFullChat : 1;                                    		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bCanBeClanLeader : 1;                             		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	int                                                ChatChannelsEnabled;                              		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FClanRankPrivilegesSet                      ClanPrivileges;                                   		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FClanSubscriptionPrivilegesSet              ClanSubscriptionPrivileges;                       		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxRealmCharacters;                               		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CashRewardFactor;                                 		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExpRewardFactor;                                  		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxCash;                                          		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MailCostFactor;                                   		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AuctionCostFactor;                                		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MailTax;                                          		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TradeTax;                                         		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CharacterClass
// 0x0030
struct FCharacterClass
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      DefaultItems;                                     		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemTemplateCategory
// 0x0050
struct FItemTemplateCategory
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ParentId;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UIParentIndex;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SortIndex;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     IconUrl;                                          		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsUIRoot : 1;                                     		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      TooltipBlocks;                                    		// 0x0044 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.AuctionCategoryIndex
// 0x0010
struct FAuctionCategoryIndex
{
	int                                                MainCategoryIndex;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      SubCategoryIndexes;                               		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemAttributeDescription
// 0x0054
struct FItemAttributeDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UIPositiveDescription;                            		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UINegativeDescription;                            		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsAlwaysShow : 1;                                 		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TypeId;                                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UIPriority;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DisplayType;                                      		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GroupType;                                        		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinValue;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bWorthOnReduction : 1;                            		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShowIfChanged : 1;                               		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.AvatarAttributeCategory
// 0x002D
struct FAvatarAttributeCategory
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                UIPriority;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ShowType;                                         		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.AvatarAttributeDescription
// 0x0070
struct FAvatarAttributeDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UIPositiveDescription;                            		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UINegativeDescription;                            		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CategoryIndex;                                    		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ValueType;                                        		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DisplayType;                                      		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GroupType;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinValue;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Resource2D;                                       		// 0x004C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    BaseValueByClass;                                 		// 0x0058 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                UIPriority;                                       		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UIShowIndex;                                      		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsAlwaysShow : 1;                                 		// 0x006C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsModificationAllowed : 1;                        		// 0x006C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bWorthOnReduction : 1;                            		// 0x006C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemAvatarAttributeModifier
// 0x0040
struct FItemAvatarAttributeModifier
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ModifiedAttributeId;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UIPositiveDescription;                            		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UINegativeDescription;                            		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUIMultiplyBy100 : 1;                             		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUIUsePercentSymbol : 1;                          		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsAlwaysShow : 1;                                 		// 0x0038 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      IsPTC : 1;                                        		// 0x0038 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      IsAffectedByDurability : 1;                       		// 0x0038 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      IsAffectedByCharacterLevel : 1;                   		// 0x0038 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	int                                                UIPriority;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.PaperDollSlot
// 0x0010
struct FPaperDollSlot
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      AllowedCategories;                                		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallProductionPlanItem
// 0x000C
struct FClanHallProductionPlanItem
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Probability;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Quantity;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallProductionPlan
// 0x0028
struct FClanHallProductionPlan
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Time;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClanHallProductionPlanItem >       Items;                                            		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallCraftFunctionality
// 0x0020
struct FClanHallCraftFunctionality
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EndProductionPlanIndex;                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinClanLevel;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallSpecializationInfo
// 0x0028
struct FClanHallSpecializationInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FClanHallProductionPlan >           ProductionPlans;                                  		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FClanHallCraftFunctionality >       CraftFunctionalities;                             		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemAvatarAttributeModifierValue
// 0x0008
struct FItemAvatarAttributeModifierValue
{
	int                                                ModifierId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemSetModifiers
// 0x0010
struct FItemSetModifiers
{
	int                                                ItemCount;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemAvatarAttributeModifierValue > Modifiers;                                        		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemSet
// 0x0028
struct FItemSet
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Items;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FItemSetModifiers >                 Modifiers;                                        		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.BaseItemAttribute
// 0x0008
struct FBaseItemAttribute
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.BaseItemAvatarModifier
// 0x0010
struct FBaseItemAvatarModifier
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinValue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxValue;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.BaseItemTemplate
// 0x0028
struct FBaseItemTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBaseItemAttribute >                Attributes;                                       		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBaseItemAvatarModifier >           Modifiers;                                        		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemTemplateDescription
// 0x0014
struct FItemTemplateDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                HelperId;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemTemplateProperty
// 0x0010
struct FItemTemplateProperty
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Value;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.IngredientRequirement
// 0x0008
struct FIngredientRequirement
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Quantity;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.SpawnItemData
// 0x0010
struct FSpawnItemData
{
	int                                                MinPickupLevel;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ItemIndexes;                                      		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemTemplate
// 0x0110
struct FItemTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BaseIndex;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                DescriptionId;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CategoryId;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPaymentMethodSet                           AllowedPaymentMethods;                            		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rarity;                                           		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemTemplateProperty >             Properites;                                       		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsMale : 1;                                       		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsFemale : 1;                                     		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     Resource2D;                                       		// 0x0050 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2DBackdrop;                               		// 0x005C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bExistIconColor : 1;                              		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTransmutation : 1;                               		// 0x0068 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FLinearColor                                IconColor;                                        		// 0x006C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StackMax;                                         		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FIngredientRequirement >            RepairRequirement_Ingredients;                    		// 0x0084 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RepairRequirement_InstrumentTemplates;            		// 0x0090 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                RepairRequirement_RepairKitId;                    		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VisualIndex;                                      		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClassMaskToUse;                                   		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinLevelToUse;                                    		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Sets;                                             		// 0x00AC (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FItemAvatarAttributeModifierValue > AvatarModifiers;                                  		// 0x00B8 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      AttachmentCategories;                             		// 0x00C4 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      MultitoolItemTemplates;                           		// 0x00D0 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AdLogoId;                                         		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LogoCoordsId;                                     		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UseActionIndex;                                   		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSpawnItemData >                    UseSpawn;                                         		// 0x00E8 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                LootStackDropModifier;                            		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      PaperDollSlots;                                   		// 0x00F8 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      AttachmentIndexes;                                		// 0x0104 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.SkeletalItemVisual
// 0x0058
struct FSkeletalItemVisual
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MeshUrl;                                          		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               Mesh;                                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ColorMask;                                        		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                AttachmentMask;                                   		// 0x002C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              SimpleMeshMaskShift;                              		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SimpleMeshTextureShift;                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Mtl;                                              		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MtlUrl;                                           		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SlotMask;                                         		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemVisual
// 0x0048
struct FItemVisual
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UStaticMesh*                                 Mesh;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MeshUrl;                                          		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                ColorMask;                                        		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              SimpleMeshMaskShift;                              		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SimpleMeshTextureShift;                           		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Mtl;                                              		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MtlUrl;                                           		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                SlotMask;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ModifierKitVisual
// 0x0054
struct FModifierKitVisual
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MIIndex;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorPresetIndex;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Colors[ 0x4 ];                                    		// 0x0014 (0x0040) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.AttachmentVisual
// 0x0024
struct FAttachmentVisual
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MeshUrl;                                          		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UStaticMesh*                                 Mesh;                                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FunctionalityId;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ColorPresetIndex;                                 		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ColorPreset
// 0x0064
struct FColorPreset
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Colors[ 0x4 ];                                    		// 0x001C (0x0040) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Order;                                            		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ITRIngredient
// 0x0008
struct FITRIngredient
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemTransmutationRecipe
// 0x002C
struct FItemTransmutationRecipe
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsVisible : 1;                                    		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                MaleTargetId;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FemaleTargetId;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FITRIngredient >                    Ingredients;                                      		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                IngredientCount;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CraftProfession
// 0x0058
struct FCraftProfession
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CostType;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Specializations;                                  		// 0x003C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CraftAbilityTitle;                                		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinCharacterLevel;                                		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.RepairAbility
// 0x0008
struct FRepairAbility
{
	int                                                Category;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLevel;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CraftSpecialization
// 0x0058
struct FCraftSpecialization
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ParentId;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ProfessionId;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ProfessionLevelMax;                               		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CharacterLevelMax;                                		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FRepairAbility >                    RepairingItemCategories;                          		// 0x004C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CraftAbility
// 0x009C
struct FCraftAbility
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ReqProfessionLevel;                               		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReqSpecializationId;                              		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TargetItemTemplate;                               		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProductionTime;                                   		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseCustomLevelUp : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                LevelUpC1;                                        		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LevelUpC2;                                        		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LevelUpC3;                                        		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rarity;                                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FIngredientRequirement >            CraftRequirements_Ingredients;                    		// 0x0060 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      CraftRequirements_InstrumentsTemplates;           		// 0x006C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FIngredientRequirement >            CraftQuality_Ingredients;                         		// 0x0078 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FIngredientRequirement >            CraftProb_Ingredients;                            		// 0x0084 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FIngredientRequirement >            CraftCatalyst_Ingredients;                        		// 0x0090 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.AbilityTag
// 0x001C
struct FAbilityTag
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.AbilityRequirement
// 0x0008
struct FAbilityRequirement
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.AbilityTagValue
// 0x0014
struct FAbilityTagValue
{
	int                                                TagIndex;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Value;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Position;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.AbilityLevelInfo
// 0x0044
struct FAbilityLevelInfo
{
	int                                                EffectId;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemAvatarAttributeModifierValue > Modifiers;                                        		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CostAP;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPaymentMethodSet                           AllowedPaymentMethods;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAbilityTagValue >                  Tags;                                             		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description1;                                     		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description2;                                     		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.Ability
// 0x0090
struct FAbility
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Category;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Type;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MasteryClass;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UICategory;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UIName;                                           		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      Premium : 1;                                      		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                ClassMask;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReqLevel;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLevel;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsActive : 1;                                     		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     Resource2D;                                       		// 0x004C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                UIPosX;                                           		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UIPosY;                                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxInstanceCount;                                 		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxTimeCount;                                     		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Priority;                                         		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAbilityRequirement >               AbilityRequirements;                              		// 0x006C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      ItemCategoryRequirements;                         		// 0x0078 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAbilityLevelInfo >                 Levels;                                           		// 0x0084 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.AbilityPreset
// 0x001C
struct FAbilityPreset
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAbilityRequirement >               Abilities;                                        		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ClassAbilityRefs
// 0x0010
struct FClassAbilityRefs
{
	int                                                MasteryIndex;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Indices;                                          		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.LevelRef
// 0x000C
struct FLevelRef
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.BotType
// 0x001C
struct FBotType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.NPCPathLink
// 0x0028
struct FNPCPathLink
{
	struct FVector                                     StartPoint;                                       		// 0x0000 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Yaw;                                              		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Speed;                                            		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Angle;                                            		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     CenterPoint;                                      		// 0x0018 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Radius;                                           		// 0x0024 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct CrimeCraft.CCDesignData.NPCIdleAnimation
// 0x0014
struct FNPCIdleAnimation
{
	struct FString                                     AnimName;                                         		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinAfterDelay;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAfterDelay;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.NPCPath
// 0x001C
struct FNPCPath
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FNPCPathLink >                      Link;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FNPCIdleAnimation >                 IdleAnimation;                                    		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.NPCFunctionality
// 0x0014
struct FNPCFunctionality
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< int >                                      Param;                                            		// 0x0008 (0x000C) [0x0000000000500003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.NPC
// 0x008C
struct FNPC
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           GreetingText;                                     		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           FuckOffText;                                      		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           GreetingCueUrl;                                   		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           FuckOffCueUrl;                                    		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      IsLocked;                                         		// 0x004C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                VisualId;                                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartPathId;                                      		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     UIAvatar;                                         		// 0x0060 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MapId;                                            		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FNPCPath >                          Path;                                             		// 0x0070 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FNPCFunctionality >                 Functionality;                                    		// 0x007C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      EnableCollision : 1;                              		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnableRemoteInteraction : 1;                     		// 0x0088 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsFreeRemoteInteraction : 1;                     		// 0x0088 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.InstanceUniqueAction
// 0x0020
struct FInstanceUniqueAction
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClientKey;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.InstanceGameType
// 0x0050
struct FInstanceGameType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LongDescription;                                  		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     IconUrl;                                          		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ImageUrl;                                         		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsPVE : 1;                                        		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      CreateInstanceIndexes;                            		// 0x0044 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.Modifier
// 0x0038
struct FModifier
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     IconUrl;                                          		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      DeselectModifiers;                                		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bTWEnabled : 1;                                   		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CreateInstanceOptions
// 0x0018
struct FCreateInstanceOptions
{
	TArray< int >                                      GameModifiers;                                    		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RewardModifiers;                                  		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.Instance
// 0x00C1
struct FInstance
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Title;                                            		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ShortDescription;                                 		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ScreenShot;                                       		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadingScreen;                                    		// 0x0044 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Map;                                              		// 0x0050 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlayersMax;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlayersMin;                                       		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Complexity;                                       		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WarmupTime;                                       		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TimeLimit;                                        		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinSessionTime;                                   		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GoalScore;                                        		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MapData;                                          		// 0x0078 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                TutorialTypeId;                                   		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ForClanWar_Auto : 1;                              		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ForClanWar_Contractual : 1;                       		// 0x0088 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsProductionHidden : 1;                           		// 0x0088 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bListen : 1;                                      		// 0x0088 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bTutorial : 1;                                    		// 0x0088 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bMatchmaking : 1;                                 		// 0x0088 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bExist : 1;                                       		// 0x0088 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	TArray< int >                                      ConditionsCode;                                   		// 0x008C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCreateInstanceOptions >            OptionsBySubscription;                            		// 0x0098 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      TWGameModifiers;                                  		// 0x00A4 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     UnavailableText;                                  		// 0x00B0 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                TerritoryId;                                      		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MapId;                                            		// 0x00C0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.BattleEventTemplate
// 0x0044
struct FBattleEventTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ImageUrl;                                         		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                InstanceIndex;                                    		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      GameModifiers;                                    		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RewardModifiers;                                  		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CreateInstanceData
// 0x000C
struct FCreateInstanceData
{
	TArray< int >                                      InstanceIndexes;                                  		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.LobbyExit
// 0x000C
struct FLobbyExit
{
	int                                                SourceLobbyId;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExitId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DestinationLobbyId;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.LobbyDistrict
// 0x0010
struct FLobbyDistrict
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.Lobby
// 0x005C
struct FLobby
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadingScreen;                                    		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ScreenShot;                                       		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FLobbyExit >                        Exits;                                            		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FLobbyDistrict >                    Districts;                                        		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MapId;                                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ImageUrl;                                         		// 0x0050 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.MapData
// 0x0020
struct FMapData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallSlotTemplate
// 0x0020
struct FClanHallSlotTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemCategoryId;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinClanLevel;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallFunctionality
// 0x0020
struct FClanHallFunctionality
{
	int                                                FunctionalityType;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RequiredClanLevel;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Order;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallType
// 0x0064
struct FClanHallType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MapName;                                          		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadingScreen;                                    		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     TypeDescription;                                  		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinimalClanLevel;                                 		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TypeName;                                         		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxCraftFunctionalityLevel;                       		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClanHallSlotTemplate >             BuffSlots;                                        		// 0x003C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FClanHallSlotTemplate >             VisualizationSlots;                               		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FClanHallFunctionality >            Functionality;                                    		// 0x0054 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxPublicVisitors;                                		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallCost
// 0x001C
struct FClanHallCost
{
	int                                                LobbyId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClanHallTypeId;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClubRentOption
// 0x001C
struct FClubRentOption
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CostCash;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Time;                                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClubFunctionalityCost
// 0x0008
struct FClubFunctionalityCost
{
	int                                                CostCash;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClubServerInfo
// 0x0018
struct FClubServerInfo
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FClubFunctionalityCost >            FunctionalityCost;                                		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.TrainerSalesInfo
// 0x0008
struct FTrainerSalesInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SellingFactor;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.Trainer
// 0x0050
struct FTrainer
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTrainerSalesInfo >                 Abilities;                                        		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTrainerSalesInfo >                 CraftAbilities;                                   		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTrainerSalesInfo >                 HiddenCraftAbilities;                             		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTrainerSalesInfo >                 Professions;                                      		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTrainerSalesInfo >                 Specializations;                                  		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallVendorTemplate
// 0x001C
struct FClanHallVendorTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FClanHallCost >                     Assortment;                                       		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemColor
// 0x002C
struct FItemColor
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Color;                                            		// 0x001C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ShopItem
// 0x000C
struct FShopItem
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SellingFactor;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BuyingFactor;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.Shop
// 0x0030
struct FShop
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FShopItem >                         Goods;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      ConditionsCode;                                   		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Specialization;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsAvailableInClanHall : 1;                        		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.RareShop
// 0x001C
struct FRareShop
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FShopItem >                         Items;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.AppearanceElements
// 0x000C
struct FAppearanceElements
{
	TArray< int >                                      Indexes;                                          		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.PremiumShop
// 0x00D4
struct FPremiumShop
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Goods;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bExistAppearanceElements : 1;                     		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FAppearanceElements                         AppearanceElements[ 0xE ];                        		// 0x0020 (0x00A8) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      WMKs;                                             		// 0x00C8 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.SimpleShopItem
// 0x000C
struct FSimpleShopItem
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CoinTemplateId;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCoin;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.SimpleShop
// 0x0010
struct FSimpleShop
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSimpleShopItem >                   Items;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CoinShopItem
// 0x0008
struct FCoinShopItem
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CoinShop
// 0x0048
struct FCoinShop
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CoinTemplateId;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CostPrefix;                                       		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StyleID;                                          		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCoinShopItem >                     Items;                                            		// 0x0030 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bSimpleUI : 1;                                    		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                UIPriority;                                       		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CanSellItemsForGold : 1;                          		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CharacterAppearanceElement
// 0x0054
struct FCharacterAppearanceElement
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleName;                                       		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleDescription;                                		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Cost;                                             		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MaleIcon;                                         		// 0x003C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleIcon;                                       		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.RepairerTemplateItem
// 0x000C
struct FRepairerTemplateItem
{
	int                                                CategoryId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemLevel;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostFactor;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.RepairerTemplate
// 0x001C
struct FRepairerTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FRepairerTemplateItem >             Items;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CCConditionType
// 0x002C
struct FCCConditionType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LongDescription;                                  		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsClientVisible : 1;                              		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CCActionType
// 0x002C
struct FCCActionType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LongDescription;                                  		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsVisibleUI : 1;                                  		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.Condition
// 0x004C
struct FCondition
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param1;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param2;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param3;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Params;                                           		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                NumberValue;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EnterType;                                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CombatType;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LongDescription;                                  		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsClientVisible : 1;                              		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                QuestId;                                          		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Alias;                                            		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.Action
// 0x001C
struct FAction
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param1;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param2;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param3;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsVisibleUI : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                SetId;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanEventType
// 0x001C
struct FClanEventType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     IconResource;                                     		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanEventDurationPreset
// 0x0014
struct FClanEventDurationPreset
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                TimeValue;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.QuestGroup
// 0x0024
struct FQuestGroup
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ParentId;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SortIndex;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.QuestStepText
// 0x00AC
struct FQuestStepText
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description_ConditionsFailture;                   		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description_ConditionsSuccess;                    		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description_RequiredFinalConditionsOverride;      		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AcceptButton;                                     		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CompleteButton;                                   		// 0x004C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MissionDetails;                                   		// 0x0058 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PagerText;                                        		// 0x0064 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GreetingVO;                                       		// 0x0070 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ReminderVO;                                       		// 0x007C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CompletionVO;                                     		// 0x0088 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadingScreenResource;                            		// 0x0094 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      ConditionsCode;                                   		// 0x00A0 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.QuestStep
// 0x0068
struct FQuestStep
{
	int                                                OwnerQuestId;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      TargetNPCs;                                       		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StepIndex;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FQuestStepText >                    Texts;                                            		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RequiredFinalConditions;                          		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RequiredConditionsCode;                           		// 0x0030 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      FinalActions;                                     		// 0x003C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      HighlightInstanceIds;                             		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                HighlightNPCId;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      NPCsToHide;                                       		// 0x0058 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bHighlightAllPvP : 1;                             		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.Quest
// 0x0070
struct FQuest
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RepeatTimeout;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsRepeatable : 1;                                 		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsTutorial : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      IsChallenge : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      IsDialogStyleMission : 1;                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      IsOptional : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	TArray< struct FQuestStep >                        Steps;                                            		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      RequiredInitialConditions;                        		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      InitialConditionsCode;                            		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      InitialActions;                                   		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      IconIds;                                          		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                JobLevel;                                         		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GroupId;                                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AccountTypeRestrictions;                          		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MissionType;                                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CampaignIndex;                                    		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EpisodeIndex;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Keepers;                                          		// 0x0064 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.PagerQuest
// 0x000C
struct FPagerQuest
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NPCId;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NPCTemplateId;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.Episode
// 0x0038
struct FEpisode
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Quests;                                           		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      OptionalQuests;                                   		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                UnlockItemTemplate;                               		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.Campaign
// 0x0054
struct FCampaign
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FServerDateTime                             StartTime;                                        		// 0x001C (0x0008) [0x0000000000100001]              ( CPF_Edit )
	int                                                EpisodeUnlockHours;                               		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EpisodeReleaseHours;                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              XPFactor;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoneyFactor;                                      		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReputationFactor;                                 		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEpisode >                          Episodes;                                         		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                UnlockItemTemplate;                               		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      LastQuests;                                       		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.MovieDescription
// 0x001C
struct FMovieDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Resource;                                         		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.QuestVendorTemplate
// 0x001C
struct FQuestVendorTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Quests;                                           		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.StringConstant
// 0x001C
struct FStringConstant
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ConstantName;                                     		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ConstantValue;                                    		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CounterDescription
// 0x0044
struct FCounterDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CategoryId;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SubCategoryId;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GroupIndex;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsBoolean : 1;                                    		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                DisplayType;                                      		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CategoryOrderIndex;                               		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GroupOrderIndex;                                  		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Resource2D;                                       		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.AchievementGroup
// 0x001C
struct FAchievementGroup
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.AchievementCounter
// 0x000C
struct FAchievementCounter
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NeedValue;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsNegation : 1;                                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.Achievement
// 0x005C
struct FAchievement
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                GroupIndex;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Resource2D;                                       		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                BaseAchievementId;                                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Experience;                                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RankPoints;                                       		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Money;                                            		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Reputation;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Items;                                            		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAchievementCounter >               Counters;                                         		// 0x004C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bForOriginalGangster : 1;                         		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.TutorialStep
// 0x0024
struct FTutorialStep
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepType;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Caption;                                          		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CounterGroup
// 0x0034
struct FCounterGroup
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      CounterIndexes;                                   		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.CounterCategory
// 0x0020
struct FCounterCategory
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      CounterIndexes;                                   		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsBasic : 1;                                     		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.PvPTitle
// 0x0020
struct FPvPTitle
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                IconID;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rank;                                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinValue;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxValue;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClanLevel
// 0x002C
struct FClanLevel
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NeedMembers;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NeedCharacterLevel;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NeedClanRate;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxMembers;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxRanks;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ProfileCost
// 0x000C
struct FProfileCost
{
	int                                                CostCash;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPaymentMethodSet                           AllowedPaymentMethods;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.BankTab
// 0x0014
struct FBankTab
{
	int                                                Cost;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.BackpackTab
// 0x0018
struct FBackpackTab
{
	int                                                RequiredLevel;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.TooltipDesc
// 0x0018
struct FTooltipDesc
{
	struct FString                                     Description;                                      		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Blocks;                                           		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.NameColor
// 0x0020
struct FNameColor
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Color;                                            		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CharacterTitle
// 0x0030
struct FCharacterTitle
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CategoryIndex;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ItemTemplateId;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CharacterTitleCategory
// 0x0010
struct FCharacterTitleCategory
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.MunicipalVendorData
// 0x0020
struct FMunicipalVendorData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Body;                                             		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ParentId;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ClubPartyType
// 0x0010
struct FClubPartyType
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinPartyTime;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.SignatureGroup
// 0x0010
struct FSignatureGroup
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.SignatureBackground
// 0x0050
struct FSignatureBackground
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinReputation;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Resource2D;                                       		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Colors[ 0x2 ];                                    		// 0x0020 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	int                                                GroupIndex;                                       		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPaymentMethodSet                           AllowedPaymentMethods;                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ReputationData
// 0x0010
struct FReputationData
{
	float                                              Value;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ReputationTitle
// 0x0010
struct FReputationTitle
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ReputationMedalLevel
// 0x0010
struct FReputationMedalLevel
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      ReputationBySource;                               		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.PVEDifficultyData
// 0x0014
struct FPVEDifficultyData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxCharacterLevel;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.PVEDifficultyDifference
// 0x0010
struct FPVEDifficultyDifference
{
	int                                                Difference;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CashModifier;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              XPModifier;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LootProbabilityModifier;                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ChatChannelDescription
// 0x0018
struct FChatChannelDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              FloodTimeout;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DuplicateTimeout;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.TerritoryRank
// 0x0014
struct FTerritoryRank
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Weight;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.TerritoryBonus
// 0x0014
struct FTerritoryBonus
{
	int                                                BattleCount;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                InstanceItemIndex;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LobbyItemIndex;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Tribute;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LevelId;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.TerritoryTemplate
// 0x004C
struct FTerritoryTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RankIndex;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ArenaIndex;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Instances;                                        		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTerritoryBonus >                   Bonuses;                                          		// 0x0030 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinTeamSize;                                      		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      TerritoryProductionTemplates;                     		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.TerritoryProductionTemplate
// 0x0020
struct FTerritoryProductionTemplate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemTemplateId;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ProductionTimeFactor;                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemsCount;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ProductionGroup;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CashPrice;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GoldPrice;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AllowedPaymentMethods;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.TerritoryControlLevel
// 0x000C
struct FTerritoryControlLevel
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ProductionTimeMinutes;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BattlesCount;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.CharacterVisualDescription
// 0x004C
struct FCharacterVisualDescription
{
	int                                                PresetId;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HeadId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SkinColorId;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HairColorId;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HairId;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BeardId;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MakeupId;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HatId;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UpperClothId;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LowerClothId;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoesId;                                          		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GlassesId;                                        		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClanLogoId;                                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClanLogoColorId;                                  		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HatColorId;                                       		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UpperColorId;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LowerColorId;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoesColorId;                                     		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GlassesColorId;                                   		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.AvatarAttributeValue
// 0x000C
struct FAvatarAttributeValue
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AddValue;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MulValue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ProfilePresetLevel
// 0x010C
struct FProfilePresetLevel
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinLevel;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AttributesLevel;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemTemplateIndex;                                		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostCash;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostGold;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPaymentMethodSet                           AllowedPaymentMethods;                            		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterVisualDescription                 MaleAppearance;                                   		// 0x0030 (0x004C) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterVisualDescription                 FemaleAppearance;                                 		// 0x007C (0x004C) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Items;                                            		// 0x00C8 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AbilityPresetIndex;                               		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAvatarAttributeValue >             AvatarAttributes;                                 		// 0x00D8 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bMakeupOverride : 1;                              		// 0x00E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHairOverride : 1;                                		// 0x00E4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< int >                                      DescWeaponIndexes;                                		// 0x00E8 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAbilityRequirement >               DescAbilityIndexes;                               		// 0x00F4 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      DescItemIndexes;                                  		// 0x0100 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ProfilePreset
// 0x0040
struct FProfilePreset
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ImageUrl;                                         		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     IconUrl;                                          		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FProfilePresetLevel >               Levels;                                           		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.DivisionDescription
// 0x0004
struct FDivisionDescription
{
	int                                                TournamentPassTemplate;                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.TournamentDescription
// 0x000C
struct FTournamentDescription
{
	TArray< struct FDivisionDescription >              Divisions;                                        		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.TournamentSchedule
// 0x0024
struct FTournamentSchedule
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      InstanceIndexes;                                  		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FServerDateTime                             StartTime;                                        		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      GameModifiers;                                    		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.VisualCacheItem
// 0x0008
struct FVisualCacheItem
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Priority;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ContainerSlotPair
// 0x0008
struct FContainerSlotPair
{
	int                                                TypeId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SlotId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.UIItemInfo
// 0x0018
struct FUIItemInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Stack;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bDestroyed : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUsable : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bItemBinded : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bOverrideDestroyed : 1;                           		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bOverriddenDestroyed : 1;                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CrimeCraft.CCDesignData.ItemColorRef
// 0x0014
struct FItemColorRef
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemColorIndex;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CostType;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Order;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemColorRefs
// 0x000C
struct FItemColorRefs
{
	TArray< struct FItemColorRef >                     Refs;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDesignData.ItemShopDesc
// 0x0014
struct FItemShopDesc
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TotalPrice;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TotalNumber;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.ItemAttributePresentation
// 0x0034
struct FItemAttributePresentation
{
	unsigned long                                      IsProperty : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TypeId;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              BaseValue;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              MinValue;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              MaxValue;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                UIPriority;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                DisplayType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      ShowIfChanged : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLvlAffect : 1;                                   		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCDesignData.ExpirationProp
// 0x0018
struct FExpirationProp
{
	unsigned long                                      bInstsEquip : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInstsStore : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bQuestsEquip : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bQuestsStore : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bTime : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                InstsEquip;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InstsStore;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                QuestsEquip;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                QuestsStore;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Time;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.DurabilityProp
// 0x000C
struct FDurabilityProp
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MaxDurability;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RepairTimeOut;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.InstrumentProp
// 0x0010
struct FInstrumentProp
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Category;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Quality;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Bonus;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.WeaponProp
// 0x0028
struct FWeaponProp
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                WpnDamageType;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WpnDamage;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WpnBulletsPerShot;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                WpnFireTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                WpnClipSize;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              WpnRange;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              WpnSpread;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              WpnAimingSpread;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              WpnCritChance;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.ClothesProp
// 0x0018
struct FClothesProp
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ClthLightDamageRes;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ClthNormalDamageRes;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ClthHeavyDamageRes;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ClthSplashDamageRes;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ClthDamageAbsorb;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCDesignData.ClanHallNPCVisualisation
// 0x001C
struct FClanHallNPCVisualisation
{
	int                                                SecretaryVisId;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PostBoxVisId;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VendorVisId;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PorterVisId;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BankVisId;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EventBoardVisId;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClubPorterVisId;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPlayerReplicationInfo.WeaponAttachmentIDS
// 0x01E4
struct FWeaponAttachmentIDS
{
	struct FString                                     Ids[ 0x6 ];                                       		// 0x0000 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Ids2[ 0x6 ];                                      		// 0x0048 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FWeaponAttachesArray                        AttachSlotIndex[ 0x6 ];                           		// 0x0090 (0x0150) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCPlayerReplicationInfo.ActorMarkerDesc
// 0x002C
struct FActorMarkerDesc
{
	class ACCPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 Controller;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          Material;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Offset;                                           		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned long                                      bShow : 1;                                        		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCPlayerReplicationInfo.RadarRepInfo
// 0x000D
struct FRadarRepInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      Yaw;                                              		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.WeaponCarrySlotRBDesc
// 0x0008
struct FWeaponCarrySlotRBDesc
{
	class URB_BodyInstance*                            RBBodyInstance;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class URB_BodySetup*                               RBBodySetup;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.CarrySlotContent
// 0x002C
struct FCarrySlotContent
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshComponent*                      WeaponMesh;                                       		// 0x0008 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCCPPController_Socket2Something*            WeaponPostPhysicsController;                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshDynamicAttachment*              DynamicAttachment;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             WeaponRBBodyNames;                                		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponCarrySlotRBDesc >            WeaponRBBodies;                                   		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstancePawn.WeaponCarrySlot
// 0x000C
struct FWeaponCarrySlot
{
	TArray< struct FCarrySlotContent >                 Content;                                          		// 0x0000 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstancePawn.DamagerStruct
// 0x000C
struct FDamagerStruct
{
	class ACCPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.PawnBurning_AbilityInfo
// 0x0014
struct FPawnBurning_AbilityInfo
{
	struct FString                                     AbilityName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              PSLifetime;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.PawnBurning_BoneInfo
// 0x000C
struct FPawnBurning_BoneInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.PawnWeaponParams
// 0x0050
struct FPawnWeaponParams
{
	float                                              pWPN_Speed;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                pWPN_Damage;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                pWPN_AmmoCount;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WPN_ClipSize;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              WPN_Spread;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              WPN_AimingSpread;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              WPN_ProjectileSpeed;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              WPN_ReloadTime;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              WPN_ReloadPreTime;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              WPN_ReloadPostTime;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              WPN_SingleBulletReloadTimePerc;                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              WPN_SingleBulletReloadTimePosPerc;                		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      WPN_bOneShotWeapon : 1;                           		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       WPN_WeaponAttachmentID;                           		// 0x0034 (0x0008) [0x0000000000000000]              
	struct FName                                       WPN_WeaponAttachmentID2;                          		// 0x003C (0x0008) [0x0000000000000000]              
	float                                              WPN_AltProjFireDist;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      WPN_bAltProjFire : 1;                             		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WPN_TraceCoeff;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.PlacingItemInfo
// 0x0024
struct FPlacingItemInfo
{
	class ACCPlaceableItem*                            ItemArchetype;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrState;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FVector                                     PlaceLoc;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    PlaceRot;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	class UCCAbilityContext*                           AbilityContext;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.KillerInfo
// 0x0114
struct FKillerInfo
{
	int                                                ChangesCounter;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	class ACCPlayerReplicationInfo*                    PRI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AbilityIds[ 0x5 ];                                		// 0x0008 (0x0014) [0x0000000000000000]              
	int                                                AbilityLevels[ 0x5 ];                             		// 0x001C (0x0014) [0x0000000000000000]              
	int                                                AffectingAbilityIds[ 0x5 ];                       		// 0x0030 (0x0014) [0x0000000000000000]              
	float                                              ResistLight;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              ResistMedium;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              ResistHeavy;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              ResistSplash;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              DmgAbsorb;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentWeaponSlot;                                		// 0x0058 (0x0001) [0x0000000000000000]              
	float                                              WeaponDamage[ 0x3 ];                              		// 0x005C (0x000C) [0x0000000000000000]              
	int                                                WeaponTemplateId[ 0x3 ];                          		// 0x0068 (0x000C) [0x0000000000000000]              
	unsigned char                                      WeaponTypeName[ 0x3 ];                            		// 0x0074 (0x0003) [0x0000000000000000]              
	float                                              SummaryDamage;                                    		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              MaxHP;                                            		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              CurrentHP;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              HP_Regen;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GangName;                                         		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GangLogoId;                                       		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              MaxSTM;                                           		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              STM_Regen;                                        		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              MeeleDamageModifier;                              		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              BodyShotDamageModifier;                           		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              HeadShotDamageModifier;                           		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              LegsShotDamageModifier;                           		// 0x00B8 (0x0004) [0x0000000000000000]              
	float                                              SplashRadiusModifier;                             		// 0x00BC (0x0004) [0x0000000000000000]              
	float                                              FireDamageModifier;                               		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              DamageAbsorb;                                     		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              STSprintCost;                                     		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              IncreasePvEDmgPercent;                            		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              ExplosivesDamageModifier;                         		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              PlaceablesQuantityModifierBonus;                  		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              BombsQuantityModifierBonus;                       		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              SensitiveRadiusModifierBonus;                     		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              RadarModifier;                                    		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              BackStabDamageModifier;                           		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              SilentMovement;                                   		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              BNS_DrugsCooldownModifier;                        		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              BNS_DrugsEffectTime;                              		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              BNS_DrugsNegativeEffectModifier;                  		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              BNS_HealingEffectModifier;                        		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              BNS_FireTickTimeoutModifier;                      		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              BNS_ShockTimeModifier;                            		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              BoostWpnSpeedModif;                               		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              BoostWpnAmmoCount;                                		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              BoostWpnCritChance;                               		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              MeleeDamage1;                                     		// 0x0110 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.DynamicKillerInfo
// 0x0014
struct FDynamicKillerInfo
{
	int                                                AbilityState[ 0x5 ];                              		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.SecondChanceInfo
// 0x0018
struct FSecondChanceInfo
{
	unsigned long                                      bUseIt : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxIncomingDamage;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       PrimaryAbilityName;                               		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       SecondaryAbilityName;                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.SecondChanceEffectsInfo
// 0x000C
struct FSecondChanceEffectsInfo
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MiddleTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FinishTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.SecondChanceEffectsRuntimeInfo
// 0x000C
struct FSecondChanceEffectsRuntimeInfo
{
	unsigned long                                      bWorking : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TheState;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimePassed;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.SecondChanceReplicationInfo
// 0x000C
struct FSecondChanceReplicationInfo
{
	int                                                PendingState;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PendingStateTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RepCounter;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.FakeEquipItemsDesc
// 0x0024
struct FFakeEquipItemsDesc
{
	struct FString                                     UpperCloth;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LowerCloth;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Boots;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstancePawn.VisualCarrySlotInfo
// 0x0014
struct FVisualCarrySlotInfo
{
	unsigned char                                      ActiveVisualCarrySlot;                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      DuplicatedWeaponAttachmentState;                  		// 0x0001 (0x0001) [0x0000000000000000]              
	float                                              VCSI_WeaponHideTime;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              VCSI_WeaponEquipTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      VCSI_WeaponQWCHSourceSlot;                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      VCSI_WeaponQWCHSourceWeaponType;                  		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      VCSI_WeaponQWCHDestSlot;                          		// 0x000E (0x0001) [0x0000000000000000]              
	unsigned char                                      VCSI_WeaponQWCHDestWeaponType;                    		// 0x000F (0x0001) [0x0000000000000000]              
	float                                              VCSI_WeaponQWCHTime;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.VisibilityInfo
// 0x0018
struct FVisibilityInfo
{
	TArray< int >                                      WantsHiddenChannels;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ActiveWeaponWantsHiddenChannels;                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstancePawn.DeathAnimationInfo
// 0x0048
struct FDeathAnimationInfo
{
	unsigned long                                      bPlayingDeathAnimation : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FTakeHitInfo                                THInfo;                                           		// 0x0004 (0x0044) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.RagdollStateInfo
// 0x004C
struct FRagdollStateInfo
{
	unsigned long                                      bRagdollState : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RagdollBlendInTime;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FTakeHitInfo                                RagdollImpulseInfo;                               		// 0x0008 (0x0044) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.HBZInfo
// 0x0058
struct FHBZInfo
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000080000]              ( CPF_Component )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FAdditionalHitInfo                          AddInfo;                                          		// 0x0044 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.GhostVisibilityInfo
// 0x0008
struct FGhostVisibilityInfo
{
	unsigned char                                      VisibilityType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Dummy;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.BulletTwists_AbilityInfo
// 0x0008
struct FBulletTwists_AbilityInfo
{
	float                                              DamageScale;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCInstancePawn.CachedFirePosition
// 0x001C
struct FCachedFirePosition
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawn.BodyStance
// 0x000C
struct FBodyStance
{
	TArray< struct FName >                             AnimName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerLogic.SyncTransactionInfo
// 0x0010
struct FSyncTransactionInfo
{
	unsigned char                                      ActionID;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     ActionParameter;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAISharedTypes.AIAbilityEffect
// 0x0018
struct FAIAbilityEffect
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class AController*                                 Instigator;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UCCAbilityContext*                           AbilityContext;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              flDOTDamage;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              flResistMul;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAbilityContext.AffectInfo
// 0x001C
struct FAffectInfo
{
	class AController*                                 TheController;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LifeTimeLeft;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bPendingDelete : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Value;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAssistMade : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCAbilityContext.GameAssistScoreInfoStruct
// 0x0010
struct FGameAssistScoreInfoStruct
{
	struct FString                                     AbType;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAbilityContextAssist.CCAbilityContextAssistInfoStructEntry
// 0x0010
struct FCCAbilityContextAssistInfoStructEntry
{
	class APlayerController*                           Assister;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 AssistedTo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      AbilityType;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                AssistScore;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAbilityContextAssist.CCAbilityContextAssistInfoStruct
// 0x000C
struct FCCAbilityContextAssistInfoStruct
{
	TArray< struct FCCAbilityContextAssistInfoStructEntry > Entries;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAbilityContextStatsManager.AbilityStat
// 0x0010
struct FAbilityStat
{
	unsigned char                                      AbilityType;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      StatType;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	class AController*                                 Sender;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	class AController*                                 Receiver;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAbilityManager.CCOperationDesc
// 0x0014
struct FCCOperationDesc
{
	struct FName                                       Operation;                                        		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	struct FString                                     Value;                                            		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAbilityManager.CCAvatarOperationDesc
// 0x001C
struct FCCAvatarOperationDesc
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ValueMultipliedBy;                                		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCCOperationDesc >                  Operations;                                       		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAbilityManager.CCAbilityDesc
// 0x0148
struct FCCAbilityDesc
{
	struct FName                                       AbilityName;                                      		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                AbilityId;                                        		// 0x0008 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned char                                      AbilityType;                                      		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDontZeroGlobalCooldown : 1;                      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      StartCooldownAfterAffect : 1;                     		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              CoolDownTime;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      InstantUse : 1;                                   		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsWeaponBased : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      EndAffectOnWeaponSwitch : 1;                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      ReaffectOnWeaponSwitch : 1;                       		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      UseAffectTimeLikeGroupCoolDown : 1;               		// 0x0018 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      DoNotStackAbilityAffect : 1;                      		// 0x0018 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	int                                                DontStartInAbilityZoneType;                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      DontStartIfInvul : 1;                             		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     InitialCommandLine;                               		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       AffectTimeModifierName;                           		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AffectingTickModifierName;                        		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AdditionalPackCount;                              		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNoHealFloatingNumbers : 1;                       		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceCanNotBeUsedDuringCooldown : 1;             		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      InfinitePrepare : 1;                              		// 0x0044 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      EndPrepareOnTickFalse : 1;                        		// 0x0044 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      ContinuePrepareOnEndFalse : 1;                    		// 0x0044 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      LockWeaponSwitchWhenPrepare : 1;                  		// 0x0044 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      LockWeaponSwitchWhenUse : 1;                      		// 0x0044 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      LockWeaponFireWhenPrepare : 1;                    		// 0x0044 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      DontUnmarkAfterDeath : 1;                         		// 0x0044 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      AutoActivateAbility : 1;                          		// 0x0044 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      AffectCanBeEndedManually : 1;                     		// 0x0044 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned char                                      CastOn;                                           		// 0x0048 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              PrepareTime;                                      		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PreparingTick;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AffectTimeType;                                   		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              AffectTime;                                       		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AffectingTick;                                    		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseOwnMuzzleFlash : 1;                           		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     MuzzleFlashPSName;                                		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     MuzzleFlashScale;                                 		// 0x0070 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      MuzzleFlashColor;                                 		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MuzzleFlashDuration;                              		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MuzzleFlashPriority;                              		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TracePackage;                                     		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     TracePSName;                                      		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAbilityAction >                  Actions;                                          		// 0x00A0 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FCCAbilityEffect >                  Effects;                                          		// 0x00AC (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            BeginPrepareLogicOperations;                      		// 0x00B8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            BeginPrepareMathOperations;                       		// 0x00C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            PrepareLogicOperations;                           		// 0x00D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            PrepareMathOperations;                            		// 0x00DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            EndPrepareLogicOperations;                        		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            EndPrepareMathOperations;                         		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            BeginAffectLogicOperations;                       		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            BeginAffectMathOperations;                        		// 0x010C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            AffectLogicOperations;                            		// 0x0118 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            AffectMathOperations;                             		// 0x0124 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            EndAffectLogicOperations;                         		// 0x0130 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FCCAvatarOperationDesc >            EndAffectMathOperations;                          		// 0x013C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAbilitySystem.BeginAffectAbilityInfo
// 0x0008
struct FBeginAffectAbilityInfo
{
	class UCCAbility*                                  Ability;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UCCAbilityContext*                           AbilityContext;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceController.ActionBar_Ability
// 0x0038
struct FActionBar_Ability
{
	struct FName                                       AbilityName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	class UCCAbility*                                  Ability;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ServerAbilityId;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AbilityLevel;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Phase;                                            		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientPhase;                                      		// 0x0015 (0x0001) [0x0000000000000000]              
	float                                              PrepareStartTime;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              PrepareEndTime;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              CooldownStartTime;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              CooldownEndTime;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      AvailableForPrepare : 1;                          		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                PackCount;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MaxPackCount;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	class ACCPlaceableItem*                            PlaceableItemArchetype;                           		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.YakaLayer.AbilityInfo
// 0x0005
struct FAbilityInfo
{
	int                                                ServerAbilityId;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AbilityLevel;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.DrugInfo
// 0x000C
struct FDrugInfo
{
	struct FAbilityInfo                                AbilityInfo;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Usages;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.Profile
// 0x0070
struct FProfile
{
	unsigned char                                      Index;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              HandicapFactor;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPaperdoll                                  Paperdoll;                                        		// 0x0008 (0x0038) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAvatarAttribute >                  ProfileAttributes;                                		// 0x0040 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponProfile >                    WeaponProfiles;                                   		// 0x004C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAbilityInfo >                      ActionBarAbilities;                               		// 0x0058 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FDrugInfo >                         ExtraDrugAbilities;                               		// 0x0064 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.FireStat
// 0x0010
struct FFireStat
{
	int                                                ShotsFired;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShotsDamaged;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShotsDirectHit;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TotalDamage;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.WeaponStat
// 0x0014
struct FWeaponStat
{
	int                                                WeaponType;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FFireStat >                         FireStats;                                        		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Combos;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.InventoryStat
// 0x0010
struct FInventoryStat
{
	int                                                InventoryType;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NoPickups;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NoDrops;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NoIntentionalDrops;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.BonusStat
// 0x0008
struct FBonusStat
{
	int                                                BonusType;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NoReceived;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.PickUpStat
// 0x0008
struct FPickUpStat
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.FeatStat
// 0x0008
struct FFeatStat
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.AchievementStat
// 0x0009
struct FAchievementStat
{
	int                                                CounterType;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CounterValue;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CounterOperation;                                 		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.UDSPlayerStatObtainedDamage
// 0x0008
struct FUDSPlayerStatObtainedDamage
{
	unsigned char                                      ProfileIndex;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.UDSPlayerStat
// 0x0060
struct FUDSPlayerStat
{
	int                                                CharacterId;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TotalConnectTime;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TotalScore;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ObtainedDamageOverall;                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FUDSPlayerStatObtainedDamage >      ObtainedDamageList;                               		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AFKTime;                                          		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeaponStat >                       WeaponStats;                                      		// 0x0020 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FInventoryStat >                    InventoryStats;                                   		// 0x002C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBonusStat >                        BonusStats;                                       		// 0x0038 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPickUpStat >                       PickUpStats;                                      		// 0x0044 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FFeatStat >                         FeatStats;                                        		// 0x0050 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              AveragePing;                                      		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.UDSGameStat
// 0x001C
struct FUDSGameStat
{
	int                                                TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      GameStatType;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Team;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                InstigatorId;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AdditionalId;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                InstigatorData;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AdditionalData;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.UDSAchievementStat
// 0x0010
struct FUDSAchievementStat
{
	int                                                CharacterId;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAchievementStat >                  AchievementStats;                                 		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ScoreBoardPlace
// 0x0014
struct FScoreBoardPlace
{
	unsigned char                                      Position;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CharacterName;                                    		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.InstanceRate
// 0x0010
struct FInstanceRate
{
	int                                                InstanceId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              XPRate;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CashRate;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DropRate;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.WaitingCharacter
// 0x0019
struct FWaitingCharacter
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Level;                                            		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                PvPRank;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Team;                                             		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ProfileAvatar
// 0x0040
struct FProfileAvatar
{
	unsigned char                                      Index;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAvatarAttribute >                  Attributes;                                       		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAvatarAttribute >                  GeneralWeaponAttributes;                          		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAvatarAttribute >                  ClassWeaponAttributes;                            		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAvatarAttribute >                  PistolAttributes;                                 		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      DisappearedAttributes;                            		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.SteamExchangeItemNotify
// 0x0014
struct FSteamExchangeItemNotify
{
	int                                                ItemTemplateId;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Stack;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Slot;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DurabilityCurrent;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DurabilityMax;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.GetNewspapersByMonthStruct
// 0x000C
struct FGetNewspapersByMonthStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             Date;                                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.NewspaperArticleData
// 0x0018
struct FNewspaperArticleData
{
	struct FString                                     Subject;                                          		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Body;                                             		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemOperation
// 0x0014
struct FItemOperation
{
	int                                                SrcItemId;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DestItemId;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ContainerType;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Slot;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StackSize;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.SoldItem
// 0x000D
struct FSoldItem
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemTemplateId;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Price;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Stack;                                            		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemDescr
// 0x001C
struct FItemDescr
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ContainerType;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Slot;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Stack;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             CreationTime;                                     		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.InspectorProfileTab
// 0x00E4
struct FInspectorProfileTab
{
	unsigned char                                      TabIndex;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ProfilePresetId;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ClassDrugsSwapped : 1;                            		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsDefaultMakeup : 1;                              		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      ProfilePresetLevel;                               		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ProfilePresetEquippedLevel;                       		// 0x0019 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FPaperdoll                                  Paperdoll;                                        		// 0x001C (0x0038) [0x0000000000000001]              ( CPF_Edit )
	struct FPaperdoll                                  ProfilePresetPaperdoll;                           		// 0x0054 (0x0038) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FActionBarAbility >                 Abilities;                                        		// 0x008C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FItemDescr >                        Items;                                            		// 0x0098 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FProfileAvatar                              Avatar;                                           		// 0x00A4 (0x0040) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemAttributes
// 0x001C
struct FItemAttributes
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemAttribute >                    Attributes;                                       		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FItemAvatarModifier >               Modifiers;                                        		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.ItemAttributesDeleted
// 0x001C
struct FItemAttributesDeleted
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Attributes;                                       		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Modifiers;                                        		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.RealmName
// 0x0010
struct FRealmName
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      MoveAllowed : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.MailDesc
// 0x0054
struct FMailDesc
{
	int                                                MailId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                SenderId;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     SenderName;                                       		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Subject;                                          		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                TTL;                                              		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CoD;                                              		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MoneyAttach;                                      		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsDelivered : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsProtected : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FServerDateTime                             TimeStamp;                                        		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FItemDescription >                  Items;                                            		// 0x0048 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.FunctionalityNPC
// 0x0018
struct FFunctionalityNPC
{
	TArray< int >                                      Ids;                                              		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Values;                                           		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.NpcFunctionalityDescription
// 0x000C
struct FNpcFunctionalityDescription
{
	unsigned char                                      Functionality;                                    		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                FunctionalityId;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FunctionalityParam;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ActiveProfilePresetInfo
// 0x0040
struct FActiveProfilePresetInfo
{
	int                                                ProfilePresetId;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Level;                                            		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EquippedLevel;                                    		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FPaperdoll                                  Appearance;                                       		// 0x0008 (0x0038) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ProfileTabDesc
// 0x0018
struct FProfileTabDesc
{
	unsigned char                                      TabIndex;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ProfilePresetId;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ClassDrugsSwapped : 1;                            		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsDefaultMakeup : 1;                              		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.LadderRecord
// 0x0038
struct FLadderRecord
{
	unsigned char                                      Place;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PlaceSnapshot;                                    		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PvPTitleId;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClanName;                                         		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ClanLogoId;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PvPScore;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Kills;                                            		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deaths;                                           		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Assists;                                          		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.LadderSnapshotRecord
// 0x0034
struct FLadderSnapshotRecord
{
	unsigned char                                      Place;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ClanName;                                         		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ClanLogoId;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PvPScore;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Kills;                                            		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deaths;                                           		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Assists;                                          		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ActiveQuestState
// 0x001C
struct FActiveQuestState
{
	int                                                ConditionId;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param1;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param2;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param3;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Params;                                           		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.CampaignInfo
// 0x001C
struct FCampaignInfo
{
	int                                                CampaignId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             StartTime;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                EpisodeIndex;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             LastEpisodeCompleteTime;                          		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsFirstTime : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsEpisodePassed : 1;                              		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      SkipLockPeriod : 1;                               		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ActiveQuest
// 0x0018
struct FActiveQuest
{
	int                                                QuestId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                QuestStep;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsTracked : 1;                                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FActiveQuestState >                 Conditions;                                       		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstanceController.InstanceProfile
// 0x0080
struct FInstanceProfile
{
	struct FCharacterVisualDescription                 Appearance;                                       		// 0x0000 (0x004C) [0x0000000000000000]              
	TArray< struct FAvatarAttribute >                  BaseAttributes;                                   		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FWeaponProfile >                    WeaponProfiles;                                   		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FAbilityInfo >                      ActionBarAbilities;                               		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      DrugUsages;                                       		// 0x0070 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              HandicapFactor;                                   		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCInstanceController.ActionBarSlotState
// 0x0010
struct FActionBarSlotState
{
	unsigned char                                      Phase;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              SecondsLeft;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      AffectCanBeEnded : 1;                             		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCInstanceController.PawnBoneInfo
// 0x001C
struct FPawnBoneInfo
{
	class ACCInstancePawn*                             P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             BoneNames;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector >                           BoneLocations;                                    		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstanceController.ReplicatedAvatarProfile
// 0x0018
struct FReplicatedAvatarProfile
{
	float                                              Health;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Stamina;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              DefLight;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DefMedium;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              DefHeavy;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DefSplash;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceController.ReplicatedWeaponProfile
// 0x0048
struct FReplicatedWeaponProfile
{
	int                                                WeaponTemplateId;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Range;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Ammo;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Attachment[ 0x7 ];                                		// 0x0010 (0x001C) [0x0000000000000000]              
	int                                                AttachmentColor[ 0x7 ];                           		// 0x002C (0x001C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceController.ReplicatedInstanceProfile
// 0x00F4
struct FReplicatedInstanceProfile
{
	struct FReplicatedAvatarProfile                    BaseAttributes;                                   		// 0x0000 (0x0018) [0x0000000000000000]              
	struct FReplicatedWeaponProfile                    WeaponProfiles[ 0x3 ];                            		// 0x0018 (0x00D8) [0x0000000000000000]              
	float                                              PvPPower;                                         		// 0x00F0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceController.InstantTraceEffects_RPC_Info
// 0x0050
struct FInstantTraceEffects_RPC_Info
{
	class ACCPlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     StartTraceLocation;                               		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTraceLocation;                                 		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned char                                      ShootSpotLocationType;                            		// 0x001C (0x0001) [0x0000000000000000]              
	struct FVector                                     HeadLocationForCWF;                               		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     MuzzleLocation;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	unsigned long                                      MuzzleLocationNeedsToBeResolved : 1;              		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FAdditionalHitInfo                          AddInfo;                                          		// 0x003C (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceController.HotkeyInfoStruct
// 0x0040
struct FHotkeyInfoStruct
{
	int                                                ChangesCounter;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Values[ 0x5 ];                                    		// 0x0004 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstanceController.ViewShakeInfo
// 0x0038
struct FViewShakeInfo
{
	struct FVector                                     OffsetMag;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OffsetRate;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              OffsetTime;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotMag;                                           		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RotRate;                                          		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotTime;                                          		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCInstanceController.FollowAbilityInfo
// 0x002C
struct FFollowAbilityInfo
{
	int                                                ChangesCounter;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Ids[ 0x5 ];                                       		// 0x0004 (0x0014) [0x0000000000000000]              
	int                                                Levels[ 0x5 ];                                    		// 0x0018 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceController.NetworkConnectionDebugInfo
// 0x0024
struct FNetworkConnectionDebugInfo
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastSendTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                OverriddenReliableBuffer;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NumControllerChannelInBunches;                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NumControllerChannelOutBunches;                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NumDelayedPackets;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TotalDelayedPacketsSize;                          		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              DelayedPacketsMinTime;                            		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DelayedPacketsMaxTime;                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAbilityZone.IntersectionTracePointDesc
// 0x001C
struct FIntersectionTracePointDesc
{
	struct FVector                                     PointLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bHasNormal : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     pointNormal;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAchievementSystem.AchievementCommandParameter
// 0x0018
struct FAchievementCommandParameter
{
	struct FString                                     StringValue;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                IntValue;                                         		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     ObjectValue;                                      		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      Event : 1;                                        		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCAchievementSystem.AchievementCommandDescription
// 0x002C
struct FAchievementCommandDescription
{
	struct FString                                     CommandStringId;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CommandId;                                        		// 0x000C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FAchievementCommandParameter >      Parameters;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Label;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LabelCommandRef;                                  		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerBase.ActionDescriptionSecondary
// 0x0004
struct FActionDescriptionSecondary
{
	unsigned char                                      ActionID;                                         		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned char                                      CooperationType;                                  		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Dummy1;                                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      Dummy2;                                           		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerBase.ActionDescription
// 0x0010
struct FActionDescription
{
	unsigned char                                      ActionID;                                         		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< struct FActionDescriptionSecondary >       Cooperation;                                      		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCActorPoolBase.TheEntry
// 0x0008
struct FTheEntry
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsed : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCResourcesDB.AutoUpdateData
// 0x0010
struct FAutoUpdateData
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bAllTypes : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStaticMesh : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSkeletalMesh : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bTexture : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bMaterial : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bMaterialInstance : 1;                            		// 0x000C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCAdZone.MediaholderInfo
// 0x0024
struct FMediaholderInfo
{
	int                                                TypeId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextureId;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                OffsetX;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                OffsetY;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SizeX;                                            		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SizeY;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USeqEvent_CCAdMediaholderUpdate* >   UpdateEvents;                                     		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAdZone.SwitchGroup
// 0x0010
struct FSwitchGroup
{
	int                                                TypeId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Mediaholders;                                     		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAdZone.DummyPlaceholderInfo
// 0x0024
struct FDummyPlaceholderInfo
{
	struct FVector                                     PosLB;                                            		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PosLT;                                            		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PosRT;                                            		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCAdZone.PlaceholderGroup
// 0x003C
struct FPlaceholderGroup
{
	class UMaterialInterface*                          Mtl;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Owner;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSwitchGroup >                      SwitchGroups;                                     		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FDummyPlaceholderInfo >             DummyPlaceholders;                                		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Placeholders;                                     		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class USeqEvent_CCAdSetMediaholder* >      SetEvents;                                        		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                CurSwitchGroup;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAdZone.PlaceholderInfo
// 0x0034
struct FPlaceholderInfo
{
	int                                                GroupId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     PosLB;                                            		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     PosLT;                                            		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     PosRT;                                            		// 0x001C (0x000C) [0x0000000000000000]              
	TArray< int >                                      Mediaholders;                                     		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAdZone.AdMeshInfo
// 0x0008
struct FAdMeshInfo
{
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MtlIndex;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAdZone.AdMtlInfo
// 0x0014
struct FAdMtlInfo
{
	int                                                TextureId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          Mtl;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FAdMeshInfo >                       Components;                                       		// 0x0008 (0x000C) [0x0000000000580000]              ( CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAdZone.MPQueue
// 0x0018
struct FMPQueue
{
	float                                              SwitchTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      MultiPlaceholders;                                		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                NextIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAISoundGroup.CCAISoundGroupEntry
// 0x0018
struct FCCAISoundGroupEntry
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSpoken : 1;                                      		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShared : 1;                                      		// 0x0004 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              Probability;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Cooldown;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CooldownBias;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NextAllowedPlayTime;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAnimTreePool.AnimTreeEntry
// 0x0008
struct FAnimTreeEntry
{
	class UAnimTree*                                   AnimTreeInstance;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsed : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCAnimTreePool.PoolEntry
// 0x0010
struct FPoolEntry
{
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FAnimTreeEntry >                    Instances;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCAnnouncer.CachedSound
// 0x0008
struct FCachedSound
{
	class USoundCue*                                   OldSound;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   NewSound;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCAnnouncer.AnnouncerPackageInfo
// 0x0018
struct FAnnouncerPackageInfo
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SoundPrefix;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCProjectileBase.CustomWpnAttachmentIDInfoStruct
// 0x0011
struct FCustomWpnAttachmentIDInfoStruct
{
	float                                              ReplicatedLifeSpan;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TheId;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      InstigatorTeamNum;                                		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProjectileBase.ProjectileExplosionInfo
// 0x0038
struct FProjectileExplosionInfo
{
	int                                                RepCounter;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FCustomWpnAttachmentIDInfoStruct            CustomWpnAttachmentID;                            		// 0x0004 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	int                                                BlockExplosion;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDontDestroyProjectileLight : 1;                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCAvatar.ComputeDamage_AddInputData
// 0x0020
struct FComputeDamage_AddInputData
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WPN_WeaponDamageType;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WPN_DamageTypeResist[ 0x5 ];                      		// 0x0008 (0x0014) [0x0000000000000000]              
	float                                              WPN_CritDmgModif;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProjectile.PendingTouchInfo
// 0x0020
struct FPendingTouchInfo
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      Other;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCExplosionLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Brightness;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPresetsStore.WeaponUniqAnimations
// 0x00A8
struct FWeaponUniqAnimations
{
	struct FString                                     PresetName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AnimWpnPutByCarrySlot[ 0x6 ];                     		// 0x000C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AnimWpnGetByCarrySlot[ 0x6 ];                     		// 0x0054 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AnimWpnReload;                                    		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCUIConfig.ChatChannelData
// 0x004C
struct FChatChannelData
{
	int                                                ChannelId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000508002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FullName;                                         		// 0x0010 (0x000C) [0x0000000000508002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x001C (0x000C) [0x0000000000508002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FLinearColor                                MessageColor;                                     		// 0x0028 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                TitleColor;                                       		// 0x0038 (0x0010) [0x0000000000000000]              
	unsigned long                                      IsLobbyEnabled : 1;                               		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsInstanceEnabled : 1;                            		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.UIMenu.MenuStateTransition
// 0x0008
struct FMenuStateTransition
{
	int                                                StateID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TargetStateID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMenu.MenuStateDesc
// 0x0030
struct FMenuStateDesc
{
	int                                                StateID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              UpdateRate;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              UpdateDelta;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             OnEnter;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnExit;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OnUpdate;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIMisc.CCTutorialTooltipDesc
// 0x001C
struct FCCTutorialTooltipDesc
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      F2PMode : 1;                                      		// 0x0018 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIMisc.CCTooltipDesc
// 0x0098
struct FCCTooltipDesc
{
	int                                                UnifiedID;                                        		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                ItemIndex;                                        		// 0x0004 (0x0004) [0x0000000000100000]              
	unsigned char                                      TypeTemplate;                                     		// 0x0008 (0x0001) [0x0000000000100000]              
	unsigned char                                      Type;                                             		// 0x0009 (0x0001) [0x0000000000100000]              
	float                                              SalingFactor;                                     		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                OverridedPrice;                                   		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                OverridedCostType;                                		// 0x0014 (0x0004) [0x0000000000100000]              
	unsigned long                                      bDiscount : 1;                                    		// 0x0018 (0x0004) [0x0000000000100000] [0x00000001] 
	float                                              Discount;                                         		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                CommonReputation;                                 		// 0x0020 (0x0004) [0x0000000000100000]              
	struct FString                                     CommonCaption;                                    		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                CommonCaptionStyle;                               		// 0x0030 (0x0004) [0x0000000000100000]              
	struct FString                                     CommonDescription;                                		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     CommonImageRef;                                   		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                CommonItemPrice;                                  		// 0x004C (0x0004) [0x0000000000100000]              
	unsigned long                                      ClampBackgroundByWidth : 1;                       		// 0x0050 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bClampImage : 1;                                  		// 0x0050 (0x0004) [0x0000000000100000] [0x00000002] 
	unsigned long                                      DisablePriceOutput : 1;                           		// 0x0050 (0x0004) [0x0000000000100000] [0x00000004] 
	unsigned long                                      AdjustLocation : 1;                               		// 0x0050 (0x0004) [0x0000000000100000] [0x00000008] 
	unsigned long                                      bDisableCompare : 1;                              		// 0x0050 (0x0004) [0x0000000000100000] [0x00000010] 
	unsigned long                                      bHideMaxStack : 1;                                		// 0x0050 (0x0004) [0x0000000000100000] [0x00000020] 
	unsigned long                                      bHideRequiredLevel : 1;                           		// 0x0050 (0x0004) [0x0000000000100000] [0x00000040] 
	int                                                CurrentStack;                                     		// 0x0054 (0x0004) [0x0000000000100000]              
	int                                                ArchetypeId;                                      		// 0x0058 (0x0004) [0x0000000000100000]              
	int                                                OverrideAbilityKnowLevel;                         		// 0x005C (0x0004) [0x0000000000100000]              
	int                                                OverrideLevel;                                    		// 0x0060 (0x0004) [0x0000000000100000]              
	TArray< struct FItemAttachmentDescription >        Attachments;                                      		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FItemAttribute >                    Attributes;                                       		// 0x0070 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                UnifiedCompareID;                                 		// 0x007C (0x0004) [0x0000000000100000]              
	unsigned char                                      CompareTypeTemplate;                              		// 0x0080 (0x0001) [0x0000000000100000]              
	TArray< struct FItemAttribute >                    CompareAttributes;                                		// 0x0084 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                CompareOverrideLevel;                             		// 0x0090 (0x0004) [0x0000000000100000]              
	int                                                ProfessionLevelIncreaseChance;                    		// 0x0094 (0x0004) [0x0000000000100000]              
};

// ScriptStruct CrimeCraft.UIMisc.ItemInfo
// 0x0058
struct FItemInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Stack;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                StackMax;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EquipCount;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned long                                      bUsable : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TotalNum;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                UserData0;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                UserData1;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                UserData2;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                UserData3;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemText0;                                        		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemTextRB;                                       		// 0x0040 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    IconRender;                                       		// 0x004C (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bIsLocked : 1;                                    		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsDestroyed : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bItemBinded : 1;                                  		// 0x0050 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ProgressVal;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.DnDModeDesc
// 0x006C
struct FDnDModeDesc
{
	struct FItemInfo                                   SrcItem;                                          		// 0x0000 (0x0058) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIItemGrid*                                 SourceContainer;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   ItemTexturePos;                                   		// 0x005C (0x0008) [0x0000000000000000]              
	unsigned long                                      bDragging : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBreakStack : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                NewStackSize;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.ListGridItemInfo
// 0x0014
struct FListGridItemInfo
{
	struct FString                                     ToolTip;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	class UUITexture*                                  Image;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.ItemInstanceDesc
// 0x0010
struct FItemInstanceDesc
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Type;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Stack;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.SpringAnimData
// 0x000C
struct FSpringAnimData
{
	float                                              AnimSpeed;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AnimClampSpeed;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              AnimDelta;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.UserNotificationControl
// 0x0010
struct FUserNotificationControl
{
	class UUIMenuToggleButton*                         NotifyIcon;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUILabel*                                    NotifyStack;                                      		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bActive : 1;                                      		// 0x0008 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                PrevSize;                                         		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.UIMisc.Point2D
// 0x0010
struct FPoint2D
{
	struct FVector2D                                   Point;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   uv;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.Triangle
// 0x0030
struct FTriangle
{
	struct FPoint2D                                    point0;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FPoint2D                                    point1;                                           		// 0x0010 (0x0010) [0x0000000000000000]              
	struct FPoint2D                                    point2;                                           		// 0x0020 (0x0010) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.TextureStyleContainerList
// 0x0014
struct FTextureStyleContainerList
{
	class UUITexture*                                  Images[ 0x5 ];                                    		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.TextureStyleContainerGrid
// 0x0014
struct FTextureStyleContainerGrid
{
	class UUITexture*                                  Images[ 0x5 ];                                    		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.ItemRenderer
// 0x0020
struct FItemRenderer
{
	class UUITexture*                                  ItemImage;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUITexture*                                  BackdropImage;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   ItemExtent;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ItemOrigin;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   BackdropExtent;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.ColorInfo
// 0x0014
struct FColorInfo
{
	struct FLinearColor                                Color;                                            		// 0x0000 (0x0010) [0x0000000000100001]              ( CPF_Edit )
	struct FPointer                                    IconRender;                                       		// 0x0010 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct CrimeCraft.UIMisc.ColumnLayoutInfo
// 0x0014
struct FColumnLayoutInfo
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	float                                              Left;                                             		// 0x0008 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	float                                              Top;                                              		// 0x000C (0x0004) [0x0000000000100001]              ( CPF_Edit )
	unsigned long                                      Pixels : 1;                                       		// 0x0010 (0x0004) [0x0000000000100001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIMisc.ColumnDataInfo
// 0x0058
struct FColumnDataInfo
{
	struct FUIScreenValue_Extent                       NodeWidth;                                        		// 0x0000 (0x0008) [0x0000000000100001]              ( CPF_Edit )
	struct FUIScreenValue                              TextureOffset;                                    		// 0x0008 (0x0008) [0x0000000000100001]              ( CPF_Edit )
	struct FString                                     NodeCaption;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     TextureReference;                                 		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUITexture*                                  Texture;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      ShowCaptionNodeName : 1;                          		// 0x002C (0x0004) [0x0000000000100001] [0x00000001] ( CPF_Edit )
	int                                                CaptionNodeStyleID;                               		// 0x0030 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	unsigned long                                      bStateTexture : 1;                                		// 0x0034 (0x0004) [0x0000000000100001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHiglight : 1;                                    		// 0x0034 (0x0004) [0x0000000000100001] [0x00000002] ( CPF_Edit )
	struct FName                                       MegaToolTipName;                                  		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      SubTextHorizontal : 1;                            		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FColumnLayoutInfo                           CustomLayout;                                     		// 0x0044 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIMisc.ListBoxItemInfo
// 0x000C
struct FListBoxItemInfo
{
	struct FString                                     ElementName;                                      		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIMisc.StringToken
// 0x0024
struct FStringToken
{
	int                                                StyleID;                                          		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FLinearColor                                Color;                                            		// 0x0004 (0x0010) [0x0000000000100000]              
	struct FString                                     Text;                                             		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                NodeWidth;                                        		// 0x0020 (0x0004) [0x0000000000100000]              
};

// ScriptStruct CrimeCraft.UIMisc.StringTokenXML
// 0x0018
struct FStringTokenXML
{
	struct FString                                     Tag;                                              		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIMisc.NodeTextTemplate
// 0x0028
struct FNodeTextTemplate
{
	int                                                StyleID;                                          		// 0x0000 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	struct FString                                     Text;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Color;                                            		// 0x0010 (0x0010) [0x0000000000100001]              ( CPF_Edit )
	float                                              Opacity;                                          		// 0x0020 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	unsigned long                                      bColorOverride : 1;                               		// 0x0024 (0x0004) [0x0000000000100001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOpacityOverride : 1;                             		// 0x0024 (0x0004) [0x0000000000100001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIMisc.NodeEx
// 0x0058
struct FNodeEx
{
	struct FPointer                                    IconRender;                                       		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FNodeTextTemplate >                 TextTemplate;                                     		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      UseBackgroupColor : 1;                            		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                BackgroupColor;                                   		// 0x0014 (0x0010) [0x0000000000000000]              
	float                                              ProgressValue;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              ProgressMin;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              ProgressMax;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ParamProgressW;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                StackNum;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                TotalNum;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                PxOffsetX;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                PxOffsetY;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned char                                      ItemState;                                        		// 0x0044 (0x0001) [0x0000000000000000]              
	int                                                UserData0;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                UserData1;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                UserData2;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                UserData3;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMisc.ListBoxItemContainer
// 0x004C
struct FListBoxItemContainer
{
	unsigned long                                      bEnableNode : 1;                                  		// 0x0000 (0x0004) [0x0000000000100000] [0x00000001] 
	TArray< struct FNodeEx >                           ItemContainer;                                    		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                StyleID;                                          		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                StyleTextID;                                      		// 0x0014 (0x0004) [0x0000000000100000]              
	struct FLinearColor                                TextColor;                                        		// 0x0018 (0x0010) [0x0000000000100000]              
	int                                                UserData;                                         		// 0x0028 (0x0004) [0x0000000000100000]              
	int                                                UserData0;                                        		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                UserData1;                                        		// 0x0030 (0x0004) [0x0000000000100000]              
	int                                                UserData2;                                        		// 0x0034 (0x0004) [0x0000000000100000]              
	int                                                UserData3;                                        		// 0x0038 (0x0004) [0x0000000000100000]              
	int                                                ItemHeight;                                       		// 0x003C (0x0004) [0x0000000000100000]              
	unsigned long                                      bClamped : 1;                                     		// 0x0040 (0x0004) [0x0000000000100000] [0x00000001] 
	int                                                IndexZ;                                           		// 0x0044 (0x0004) [0x0000000000100000]              
	unsigned long                                      bF2PLocked : 1;                                   		// 0x0048 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIMisc.ListGridCellLayer
// 0x0028
struct FListGridCellLayer
{
	TArray< struct FNodeTextTemplate >                 Lines;                                            		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPointer                                    IconRender;                                       		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
	float                                              TotalLinesHeight;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextStyle;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NodeStyle;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                UserData0;                                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UserData1;                                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIMisc.ListGridCell
// 0x0034
struct FListGridCell
{
	struct FPointer                                    IconRender;                                       		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bEnabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000100001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLocked : 1;                                      		// 0x0004 (0x0004) [0x0000000000100001] [0x00000002] ( CPF_Edit )
	int                                                NodeStyle;                                        		// 0x0008 (0x0004) [0x0000000000100001]              ( CPF_Edit )
	int                                                UserData;                                         		// 0x000C (0x0004) [0x0000000000100000]              
	int                                                UserData0;                                        		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                UserData1;                                        		// 0x0014 (0x0004) [0x0000000000100000]              
	int                                                UserData2;                                        		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                UserData3;                                        		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                UserData4;                                        		// 0x0020 (0x0004) [0x0000000000100000]              
	int                                                UserData5;                                        		// 0x0024 (0x0004) [0x0000000000100000]              
	TArray< struct FListGridCellLayer >                Layers;                                           		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIMisc.ListGridContainer
// 0x004C
struct FListGridContainer
{
	struct FString                                     ContainerName;                                    		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FListGridCell >                     Nodes;                                            		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FListGridCell                               SeparatorNode;                                    		// 0x0018 (0x0034) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIMisc.JobInfo
// 0x0040
struct FJobInfo
{
	int                                                quest_id;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                parent_id;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                quest_index;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                parent_index;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                parent_job_index;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                child_job_index;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                tab_id;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                group_id;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                job_level;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPassed : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bParentPassed : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                icon1;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                icon2;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                icon3;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxLevel;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MinLevel;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSentFromServer : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsActive : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCouldBeTaken : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCouldBeDelivered : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLocked : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CrimeCraft.UIMenu_LoadingScreen.LoadingSound
// 0x000C
struct FLoadingSound
{
	unsigned char                                      LoadingEvent;                                     		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InstanceType;                                     		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Sound;                                            		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.TournamentStatisticsRecord
// 0x0024
struct FTournamentStatisticsRecord
{
	unsigned char                                      Position;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                CharacterId;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     CharacterName;                                    		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                GameWin;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GameLose;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TournamentWin;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rating;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.Teammate
// 0x0014
struct FTeammate
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Ranking;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.Team
// 0x001C
struct FTeam
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTeammate >                         Teammates;                                        		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.Game
// 0x0015
struct FGame
{
	unsigned char                                      StageNumber;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Number;                                           		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Team1Id;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Team2Id;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             StartingTime;                                     		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Result;                                           		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.TournamentDivisionInfo
// 0x006C
struct FTournamentDivisionInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Revision;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      TournamentState;                                  		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsGamesSorted : 1;                               		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FTournamentStatisticsRecord >       Statistics;                                       		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTeam >                             Teams;                                            		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FGame >                             Games;                                            		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Stages;                                           		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      HasWinner : 1;                                    		// 0x0044 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsOneGameTournament : 1;                         		// 0x0044 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	int                                                WinnerTeamIndex;                                  		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxStageNumber;                                   		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GameWin;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                GameLose;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                TournamentWin;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                Rating;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	TArray< int >                                      BannedPlayers;                                    		// 0x0060 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.TournamentInfo
// 0x002C
struct FTournamentInfo
{
	unsigned char                                      TournamentType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FTournamentDivisionInfo >           Division;                                         		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FServerDateTime                             StartRegistrationTime;                            		// 0x0010 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FServerDateTime                             StartTime;                                        		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                MyTeamId;                                         		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      MyDivision;                                       		// 0x0024 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bAllowRegistration : 1;                           		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCRealm.ClubEventData
// 0x0034
struct FClubEventData
{
	int                                                LastValue;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class USeqEvent_CCClubVisualChanged* >     Values;                                           		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class USecVar_ClubColor* >                 Colors;                                           		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< class USeqEvent_CCClubColorChanged* >      ColorEvents;                                      		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Children;                                         		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ClanEventMessage
// 0x005C
struct FClanEventMessage
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Revision;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CreatorId;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             Time;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                TypeId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     Subject;                                          		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Duration;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            Ranks;                                            		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                MinCharacterLevel;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                MaxCharacterLevel;                                		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< int >                                      Subscribed;                                       		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      NeedAccept : 1;                                   		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsPrivate : 1;                                    		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Remind : 1;                                       		// 0x0058 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CrimeCraft.YakaLayer.CharacterCounter
// 0x0008
struct FCharacterCounter
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ReputationLadderRecord
// 0x002C
struct FReputationLadderRecord
{
	int                                                Place;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Name;                                             		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ClanId;                                           		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClanName;                                         		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ClanLogoId;                                       		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Reputation;                                       		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.KnownProfession
// 0x0014
struct FKnownProfession
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ListOfSpecializationIDs;                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.KnownAbility
// 0x0010
struct FKnownAbility
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DeltaExpiration;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                UsesLeft;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.CraftingJobInformation
// 0x0020
struct FCraftingJobInformation
{
	unsigned char                                      Status;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                UsedCraftAbilityID;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimePassed;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CraftingTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDrugsCrafting : 1;                              		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                QualityIngredientsCount;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ProbabilityIngredientsCount;                      		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      DoUseCatalyst : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCRealm.GroupInvitationSent
// 0x0008
struct FGroupInvitationSent
{
	int                                                InvitationId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CharacterId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.RelevantCharacterDescription
// 0x0014
struct FRelevantCharacterDescription
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FCharacterPosition                          Position;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.YakaLayer.CreateCharacterResponse_Character
// 0x0020
struct FCreateCharacterResponse_Character
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterPosition                          Position;                                         		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                LobbyId;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             CreationTime;                                     		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.NotifyPlayerCharacters_Character
// 0x0078
struct FNotifyPlayerCharacters_Character
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FCharacterPosition                          Position;                                         		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LobbyId;                                          		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClanId;                                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Level;                                            		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Class;                                            		// 0x0029 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CurrentProfileIndex;                              		// 0x002A (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FPaperdoll                                  Paperdoll;                                        		// 0x002C (0x0038) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterAppearance                        Appearance;                                       		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             CreationTime;                                     		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsActive : 1;                                     		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.InitLootList_RollItemDesc
// 0x0008
struct FInitLootList_RollItemDesc
{
	int                                                ItemTemplateId;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SlotId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.BlackMarketShopItemOptionDesc
// 0x0008
struct FBlackMarketShopItemOptionDesc
{
	int                                                RentTime;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Price;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.BlackMarketShopItemDesc
// 0x0028
struct FBlackMarketShopItemDesc
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             ExpirationTime;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DiscountFactor;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StackCount;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SalesRating;                                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsNewlyAdded : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsFeatured : 1;                                   		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< struct FBlackMarketShopItemOptionDesc >    Options;                                          		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.BlackMarketData
// 0x0020
struct FBlackMarketData
{
	int                                                Revision;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ItemOfTheDay;                                     		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FBlackMarketShopItemDesc >          Items;                                            		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.RealmInfo
// 0x0028
struct FRealmInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CountryCode;                                      		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      PotentialSelectResponse;                          		// 0x0018 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Population;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxPopulation;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumCharacters;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.NotifyKnownAbilities_NonPremiumAbility
// 0x0005
struct FNotifyKnownAbilities_NonPremiumAbility
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Level;                                            		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.NotifyKnownAbilities_PremiumAbilityWithLimitedTime
// 0x0008
struct FNotifyKnownAbilities_PremiumAbilityWithLimitedTime
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ExpirationMonth;                                  		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ExpirationDay;                                    		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ExpirationHour;                                   		// 0x0006 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ExpirationMinute;                                 		// 0x0007 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.NotifyKnownAbilities_PremiumAbilityWithLimitedUses
// 0x0005
struct FNotifyKnownAbilities_PremiumAbilityWithLimitedUses
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UsesLeft;                                         		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.ResponseCharacterStats_CharacterStatsDesc
// 0x0020
struct FResponseCharacterStats_CharacterStatsDesc
{
	struct FString                                     CharacterName;                                    		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ClanId;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Level;                                            		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ClassId;                                          		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterAppearance                        Appearance;                                       		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Experience;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.UDSInstanceAbilityStatistics_AbilityStat
// 0x0010
struct FUDSInstanceAbilityStatistics_AbilityStat
{
	unsigned char                                      AbilityType;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StatType;                                         		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                SenderId;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReceiverId;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.MarkProtectionData
// 0x0010
struct FMarkProtectionData
{
	unsigned long                                      ProtectionMark : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      MailIds;                                          		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.DetachItemData
// 0x0008
struct FDetachItemData
{
	int                                                MailId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.ChatMessageInfo
// 0x0020
struct FChatMessageInfo
{
	int                                                SenderCharacterId;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SenderName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ChannelId;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     MessageText;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ChatChannelInfo
// 0x001C
struct FChatChannelInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CharacterList;                                    		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.SendPrivateMessageInfo
// 0x001C
struct FSendPrivateMessageInfo
{
	int                                                TargetCharacterId;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TargetCharacterName;                              		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageText;                                      		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.PassedQuest
// 0x000C
struct FPassedQuest
{
	int                                                QuestId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             Time;                                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.ProfileData
// 0x00CC
struct FProfileData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FCharacterVisualDescription                 Appearance;                                       		// 0x000C (0x004C) [0x0000000000000000]              
	TArray< int >                                      ActionBarAbilities;                               		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FAvatarAttribute >                  Weapon1Attributes;                                		// 0x0064 (0x000C) [0x0000000000101002]              ( CPF_Const | CPF_Native )
	TArray< struct FAvatarAttribute >                  Weapon2Attributes;                                		// 0x0070 (0x000C) [0x0000000000101002]              ( CPF_Const | CPF_Native )
	TArray< struct FAvatarAttribute >                  PistolAttributes;                                 		// 0x007C (0x000C) [0x0000000000101002]              ( CPF_Const | CPF_Native )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0088 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCRealm.ProfileData.AvatarAttributesById
	int                                                PresetId;                                         		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      ClassDrugsSwapped : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCRealm.MyBidInfo
// 0x0058
struct FMyBidInfo
{
	int                                                Revision;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FItemDescription                            Item;                                             		// 0x0008 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SellerId;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     SellerName;                                       		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BidderId;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                BuyoutPrice;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Bid;                                              		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                BidStep;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                LeftTime;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.UndoRemoveInfo
// 0x000C
struct FUndoRemoveInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ContainerType;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Slot;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.AchievementNotificationData
// 0x0060
struct FAchievementNotificationData
{
	struct FAchievement                                Achievmnt;                                        		// 0x0000 (0x005C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsClanAchievement : 1;                            		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.YakaLayer.TWTeam
// 0x0014
struct FTWTeam
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClanId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Teammates;                                        		// 0x0008 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.TWBattle
// 0x0011
struct FTWBattle
{
	int                                                TeamIndex[ 0x2 ];                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             StartingTime;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Result;                                           		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.Territory
// 0x00A0
struct FTerritory
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Revision;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TeamDCId;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TeamRevision;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TeamServerRevision;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                BansDCId;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                BansRevision;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                BansServerRevision;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                TournamentId;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                TournamentRevision;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TournamentServerRevision;                         		// 0x002C (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             NextStateDateTime;                                		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                OwnerClanId;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                ControlLevel;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                TerControlLevel;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             CaptureDate;                                      		// 0x0044 (0x0008) [0x0000000000000000]              
	int                                                ArenaId;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	TArray< int >                                      GameModifiers;                                    		// 0x0050 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MyTeam;                                           		// 0x005C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Banned;                                           		// 0x0068 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTWTeam >                           Teams;                                            		// 0x0074 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FTWBattle >                         Games;                                            		// 0x0080 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      TournamentState;                                  		// 0x008C (0x0001) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x008D (0x0001) [0x0000000000000000]              
	struct FServerDateTime                             ProductionEndDateTime;                            		// 0x0090 (0x0008) [0x0000000000000000]              
	int                                                ProductionGroup;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                ProductionCharacterId;                            		// 0x009C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.ClanHallInformation
// 0x0064
struct FClanHallInformation
{
	int                                                Revision;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ClanHallNPCRevision;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ClanHallVisRevision;                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ClanHallNPCServerRevision;                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ClanHallVisServerRevision;                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TypeId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Specialization;                                   		// 0x001C (0x0001) [0x0000000000000000]              
	int                                                ProductionLevel;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< int >                                      BuffSlots;                                        		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      VisualizationSlots;                               		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      InactiveSlots;                                    		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                LobbyId;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	TArray< int >                                      Functionalities;                                  		// 0x004C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FServerDateTime >                   BuffChangeTime;                                   		// 0x0058 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ClubInformation
// 0x0040
struct FClubInformation
{
	int                                                OutsideDataRevision;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OutsideDataServerRevision;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InsideDataRevision;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                InsideDataServerRevision;                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TemplateId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             ExpirationTime;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	TArray< struct FClubZone >                         Zones;                                            		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FClubItem >                         Items;                                            		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Functionalities;                                  		// 0x0034 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ClanMemberInformation
// 0x0038
struct FClanMemberInformation
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     SecureNote;                                       		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      WasKicked : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                AccountType;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             AccountTypeExpiration;                            		// 0x0028 (0x0008) [0x0000000000000000]              
	unsigned char                                      Location;                                         		// 0x0030 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bGangWarSelection : 1;                            		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTerritoryWarReserve : 1;                         		// 0x0034 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.ClanRankInformation
// 0x0028
struct FClanRankInformation
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FClanRankPrivilegesSet                      Privileges;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FClanBankRankPrivileges >           ClanBankTabPrivileges;                            		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                MoneyWithdrawLimit;                               		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.ClanInformation
// 0x01E8
struct FClanInformation
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                OutsideDataRevision;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                OutsideDataServerRevision;                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                InsideDataRevision;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                InsideDataServerRevision;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ClanmateDataRevision;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ClanmateDataServerRevision;                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                SecureNoteRevision;                               		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                SecureNoteServerRevision;                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                RanksRevision;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                RanksServerRevision;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                RanksTabsRevision;                                		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                RanksTabsServerRevision;                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                BuffSlotsRevision;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                BuffSlotsServerRevision;                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                ClanBankTabsRevision;                             		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                ClanBankTabsServerRevision;                       		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                StatisticsRevision;                               		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                StatisticsServerRevision;                         		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ClanBankItemsRevision;                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                ClanBankItemsServerRevision;                      		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                ClanBankItemsAttributesRevision;                  		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                ClanBankItemsAttributesServerRevision;            		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                ClanBankItemsAttachmentsRevision;                 		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                ClanBankItemsAttachmentsServerRevision;           		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                AchievementsRevision;                             		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                AchievementsServerRevision;                       		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                TeamsRevision;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                TeamsServerRevision;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             CreationDate;                                     		// 0x0074 (0x0008) [0x0000000000000000]              
	TArray< int >                                      BuffTemplates;                                    		// 0x007C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FClanHallInformation                        ClanHallInfo;                                     		// 0x0088 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FClubInformation                            ClubInfo;                                         		// 0x00EC (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x012C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0138 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ClanMasterId;                                     		// 0x0144 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0148 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanMessage;                                      		// 0x014C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FClanMemberInformation >            ClanMembers;                                      		// 0x0158 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FClanRankInformation >              Ranks;                                            		// 0x0164 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ClanBankTabs;                                     		// 0x0170 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ClanMasterRank;                                   		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                NoviceRank;                                       		// 0x0180 (0x0004) [0x0000000000000000]              
	int                                                NameColorId;                                      		// 0x0184 (0x0004) [0x0000000000000000]              
	int                                                LogoId;                                           		// 0x0188 (0x0004) [0x0000000000000000]              
	int                                                LogoColorId;                                      		// 0x018C (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             AvailableChangeLogoTime;                          		// 0x0190 (0x0008) [0x0000000000000000]              
	int                                                Cash;                                             		// 0x0198 (0x0004) [0x0000000000000000]              
	int                                                BaseRate;                                         		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                CurrentRate;                                      		// 0x01A0 (0x0004) [0x0000000000000000]              
	int                                                MaxRate;                                          		// 0x01A4 (0x0004) [0x0000000000000000]              
	int                                                MaxCharactersInClan;                              		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                PutMoneyInClanBank;                               		// 0x01AC (0x0004) [0x0000000000000000]              
	int                                                TakeMoneyInClanBank;                              		// 0x01B0 (0x0004) [0x0000000000000000]              
	int                                                WinMoneyInClanWars;                               		// 0x01B4 (0x0004) [0x0000000000000000]              
	int                                                LoseMoneyInClanWars;                              		// 0x01B8 (0x0004) [0x0000000000000000]              
	int                                                WinClanWarsForMoney;                              		// 0x01BC (0x0004) [0x0000000000000000]              
	int                                                LoseClanWarsForMoney;                             		// 0x01C0 (0x0004) [0x0000000000000000]              
	int                                                DrawClanWarsForMoney;                             		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                WinSeasonClanWars;                                		// 0x01C8 (0x0004) [0x0000000000000000]              
	int                                                LoseSeasonClanWars;                               		// 0x01CC (0x0004) [0x0000000000000000]              
	int                                                DrawSeasonClanWars;                               		// 0x01D0 (0x0004) [0x0000000000000000]              
	int                                                LastLevelUpMinutes;                               		// 0x01D4 (0x0004) [0x0000000000000000]              
	TArray< struct FClanAchievementDescription >       Achievements;                                     		// 0x01D8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      TWParticipationEnabled : 1;                       		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUnlockAllTerritories : 1;                        		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCRealm.ClanShortInfo
// 0x006C
struct FClanShortInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanHallTypeName;                                 		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     SpecializationName;                               		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                LogoId;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                LogoColor;                                        		// 0x0034 (0x0010) [0x0000000000000000]              
	int                                                LogoColorId;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                NameColor;                                        		// 0x0048 (0x0010) [0x0000000000000000]              
	int                                                NameColorId;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                FunctionalitySet;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                ClubFunctionalitySet;                             		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             ClubExpirationTime;                               		// 0x0064 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.TournamentRewardInfo
// 0x002C
struct FTournamentRewardInfo
{
	int                                                Exp;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Cash;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ItemTemplates;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemCounts;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      TournamentOrderType;                              		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      TournamentType;                                   		// 0x0021 (0x0001) [0x0000000000000000]              
	int                                                Stage;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsShowing : 1;                                		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCRealm.ClanCreationData
// 0x0078
struct FClanCreationData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Revision;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PetitionReceiversRevision;                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                PetitionReceiversServerRevision;                  		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0014 (0x0001) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanLeaderName;                                   		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Signers;                                          		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ClanLogoId;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ClanLogoColorId;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                RequiredSignsCount;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              SecsLeftToSendPetitions;                          		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              SecsLeftToCooldownEnd;                            		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             EndOfPetitionsSendTime;                           		// 0x005C (0x0008) [0x0000000000000000]              
	struct FServerDateTime                             EndOfCreationCooldown;                            		// 0x0064 (0x0008) [0x0000000000000000]              
	TArray< int >                                      PetitionReceivers;                                		// 0x006C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ScoreBoardSoloInfo
// 0x0014
struct FScoreBoardSoloInfo
{
	int                                                MinLevel;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxLevel;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FScoreBoardPlace >                  Place;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ScoreboardPlayerInfo
// 0x0018
struct FScoreboardPlayerInfo
{
	int                                                CharId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamState;                                        		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      PlayerState;                                      		// 0x0009 (0x0001) [0x0000000000000000]              
	TArray< int >                                      Stats;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ScoreboardTeam
// 0x0010
struct FScoreboardTeam
{
	int                                                Scores;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FScoreboardPlayerInfo >             Players;                                          		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.ScoreboardInfo
// 0x0022
struct FScoreboardInfo
{
	struct FScoreboardTeam                             Teams[ 0x2 ];                                     		// 0x0000 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Mode;                                             		// 0x0020 (0x0001) [0x0000000000000000]              
	unsigned char                                      InstanceResult;                                   		// 0x0021 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.FakeNPC
// 0x0028
struct FFakeNPC
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                VisualId;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FNpcFunctionalityDescription >      FunctionalityList;                                		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FNPCFunctionality >                 Functionality;                                    		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.SpawnNPCData
// 0x001C
struct FSpawnNPCData
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PathId;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LinkId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.YakaVarCategoryData
// 0x003C
struct FYakaVarCategoryData
{
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0000 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCRealm.YakaVarCategoryData.Vars
};

// ScriptStruct CrimeCraft.CCRealm.SoldToShopItem
// 0x0034
struct FSoldToShopItem
{
	struct FItemDescription                            Item;                                             		// 0x0000 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ItemStack;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                SoldAtPrice;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.InstanceSessionsInfo
// 0x0018
struct FInstanceSessionsInfo
{
	float                                              XPRate;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CashRate;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DropRate;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FInstanceSessionDescription >       Sessions;                                         		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.MatchmakingStatistics
// 0x0034
struct FMatchmakingStatistics
{
	int                                                Any;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      GameTypes;                                        		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Instances;                                        		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Events;                                           		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AdvancedMaps;                                     		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.MatchmakingInfo
// 0x004C
struct FMatchmakingInfo
{
	unsigned char                                      LimitationType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                LimitationId;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      WhitelistedInstancesIds;                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bAcceptEvents : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FMatchmakingStatistics                      Stat;                                             		// 0x0018 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.SubscribedInstanceSessionDescription
// 0x0018
struct FSubscribedInstanceSessionDescription
{
	int                                                SessionId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InstanceId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      SubscriptionSource;                               		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FString                                     InstanceCommand;                                  		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.SubscribedInstanceSessionRequestData
// 0x0014
struct FSubscribedInstanceSessionRequestData
{
	int                                                SessionId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InstanceId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Password;                                         		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.RareShopItemDesc
// 0x0008
struct FRareShopItemDesc
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.RareShopInformation
// 0x0018
struct FRareShopInformation
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Revision;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FRareShopItemDesc >                 Items;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.DivisionStatistics
// 0x0020
struct FDivisionStatistics
{
	unsigned char                                      TournamentOrderType;                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                OwnGameWin;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                OwnGameLose;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                OwnTournamentWin;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                OwnRating;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTournamentStatisticsRecord >       Statistics;                                       		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.YakaLayer.TWGame
// 0x0015
struct FTWGame
{
	unsigned char                                      StageNumber;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Number;                                           		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Team1Id;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Team2Id;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             StartingTime;                                     		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Result;                                           		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.YakaLayer.UpdatedBlackMarketShopItemsCountDesc
// 0x0008
struct FUpdatedBlackMarketShopItemsCountDesc
{
	int                                                TemplateId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NewStackCount;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.MyLotInfo
// 0x000C
struct FMyLotInfo
{
	float                                              StartPrice;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BidStep;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              BuyoutPrice;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.AuctionStatisticsData
// 0x0064
struct FAuctionStatisticsData
{
	int                                                ExpiredTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                HistoricalMinPrice;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HistoricalMinStackPrice;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HistoricalMaxPrice;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                HistoricalMaxStackPrice;                          		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                HistoricalItemCount;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                HistoricalStackCount;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                HistoricalWeightedAveragePrice;                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                HistoricalWeightedAverageStackPrice;              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MinBuyoutPrice;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MinBuyoutStackPrice;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MaxBuyoutPrice;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MaxBuyoutStackPrice;                              		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                WeightedAverageBuyoutPrice;                       		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                WeightedAverageBuyoutStackPrice;                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                MinPrice;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                MinStackPrice;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                MaxPrice;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                MaxStackPrice;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                WeightedAveragePrice;                             		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                WeightedAverageStackPrice;                        		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                ItemCount;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                StackCount;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                WeightedAverageBid;                               		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                WeightedAverageStackBid;                          		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.ExistSimpleShopItem
// 0x0010
struct FExistSimpleShopItem
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TemplateIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Stack;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.ItemData
// 0x0050
struct FItemData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ServerContainerType;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ContainerType;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ShadowContainerType;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ServerSlot;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Slot;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ShadowSlot;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                StackSize;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FServerDateTime                             CreationTime;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	TArray< struct FItemAttribute >                    Attributes;                                       		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FItemAvatarModifier >               Modifiers;                                        		// 0x0038 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Attachments;                                      		// 0x0044 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.AvailableSortSet
// 0x0004
struct FAvailableSortSet
{
	unsigned long                                      bTab : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bContainer : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUndo : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CrimeCraft.CCRealm.TutorialData
// 0x000C
struct FTutorialData
{
	struct FName                                       InstanceLoadingScreenPanelName;                   		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bInstanceLoadingScreenPanel : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnablePVPTutorialPopups : 1;                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCRealm.TutorialReadState
// 0x0020
struct FTutorialReadState
{
	int                                                TutorialRead1;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TutorialRead2;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TutorialRead3;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TutorialRead4;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TutorialRead5;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TutorialRead6;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TutorialRead7;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                TutorialRead8;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.RealmCharacterInformation
// 0x00FC
struct FRealmCharacterInformation
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Revision;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PaperdollRevision;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ServerRevision;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PaperdollServerRevision;                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ClanId;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PresetId;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                PresetLevel;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsDefaultMakeup : 1;                              		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCharacterVisualDescription                 Appearance;                                       		// 0x0030 (0x004C) [0x0000000000000000]              
	int                                                NameColorId;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	unsigned char                                      Class;                                            		// 0x0080 (0x0001) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                SignatureBackgroundId;                            		// 0x0088 (0x0004) [0x0000000000000000]              
	unsigned char                                      SignatureCounter1;                                		// 0x008C (0x0001) [0x0000000000000000]              
	unsigned char                                      SignatureCounter2;                                		// 0x008D (0x0001) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                PvPScore;                                         		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                PvPTitleId;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                Reputation;                                       		// 0x00A4 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ReputationBySource;                               		// 0x00A8 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ReputationDailyPlace;                             		// 0x00B4 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x00B8 (0x0001) [0x0000000000000000]              
	int                                                LocationId;                                       		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                DistrictId;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FCharacterPosition                          Position;                                         		// 0x00C4 (0x0010) [0x0000000000000000]              
	int                                                AchievementsRevision;                             		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                AchievementsServerRevision;                       		// 0x00D8 (0x0004) [0x0000000000000000]              
	TArray< struct FAchievementDescription >           Achievements;                                     		// 0x00DC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FServerDateTime                             GoesOfflineTime;                                  		// 0x00E8 (0x0008) [0x0000000000000000]              
	struct FDouble                                     LastRequest;                                      		// 0x00F0 (0x0008) [0x0000000000000000]              
	float                                              ScorePowerRating;                                 		// 0x00F8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.GroupInformation
// 0x0010
struct FGroupInformation
{
	int                                                LeaderId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      GroupMembers;                                     		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.QuestReward
// 0x0040
struct FQuestReward
{
	int                                                Exp;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Cash;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                BonusExp;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BonusCash;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< int >                                      Items;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Stack;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SetId;                                            		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GarantedItemsCount;                               		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                ChoosebleItemsCount;                              		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Reputation;                                       		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.EventTemplateChange
// 0x0008
struct FEventTemplateChange
{
	int                                                EventTemplateIndex;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValueIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.RealmNotificationDelegate
// 0x000C
struct FRealmNotificationDelegate
{
	struct FScriptDelegate                             EventProcessor;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.RealmNotificationDelegatesGroup
// 0x0014
struct FRealmNotificationDelegatesGroup
{
	unsigned char                                      EventId;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	class UCCRealmNotificationParameters*              EventParameters;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FRealmNotificationDelegate >        Delegates;                                        		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.SkillItem
// 0x0008
struct FSkillItem
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.DecodedWeaponAttributes
// 0x0018
struct FDecodedWeaponAttributes
{
	int                                                DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              AimingSpread;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Spread;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CritDamage;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              CritChance;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.DecodedCharacterAttributes
// 0x00C4
struct FDecodedCharacterAttributes
{
	unsigned char                                      ClassId;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Experience;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CH_HP_Max;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CH_HP_RegenSpdNoAction;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              CH_HP_RegenSpdOneAction;                          		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              CH_HP_RegenSpdTwoActionsOrSprint;                 		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              CH_STM_Max;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              CH_STM_RegenSpdNoAction;                          		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              CH_STM_RegenSpdOneActions;                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              CH_STM_RegenSpdTwoActions;                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                StaminaMinLevelToSprint;                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                StaminaJumpPrice;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                RunSpeed;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                SpintSpeed;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              CH_DamageAbsorb;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              CH_ReactiveDamageRes;                             		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              CH_PearcingDamageRes;                             		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              CH_BurstingDamageRes;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              CH_ExplosiveDamageRes;                            		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MoneyCash;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                MoneyGold;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                AbilityPoints;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                CH_Pistols_Skill;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                CH_SMGs_Skill;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                CH_AssaultRifles_Skill;                           		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                CH_SniperRifles_Skill;                            		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                CH_Shotguns_Skill;                                		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                CH_RocketLauncher_Skill;                          		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                CH_GrenadeLauncher_Skill;                         		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                CH_Machineghun_Skill;                             		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FDecodedWeaponAttributes                    Weapon1;                                          		// 0x007C (0x0018) [0x0000000000000000]              
	struct FDecodedWeaponAttributes                    Weapon2;                                          		// 0x0094 (0x0018) [0x0000000000000000]              
	struct FDecodedWeaponAttributes                    Pistol1;                                          		// 0x00AC (0x0018) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.RepairmentJobInformation
// 0x0010
struct FRepairmentJobInformation
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              TimePassed;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RepairTimeFull;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCRealm.BankVaultCellRenamingRequest
// 0x001C
struct FBankVaultCellRenamingRequest
{
	int                                                IndexOfCell;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     OldCellName;                                      		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     NewCellName;                                      		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealm.RealmCharacterInspectorInformation
// 0x0024
struct FRealmCharacterInspectorInformation
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CurrentProfileIndex;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FInspectorProfileTab >              ProfileTabs;                                      		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Titles;                                           		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsShownNow : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.YakaLayer.TutorialState
// 0x0054
struct FTutorialState
{
	int                                                TutorialStep1;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialStep2;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialStep3;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialStep4;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialStep5;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialStep6;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialStep7;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialStep8;                                    		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo1;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo2;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo3;                                    		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo4;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo5;                                    		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo6;                                    		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo7;                                    		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TutorialInfo8;                                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastReminderId;                                   		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsActive : 1;                                     		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                TargetNpcId;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsNewTutorial : 1;                                		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                NewTutorialStep;                                  		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRealm.TournamentGameResult
// 0x001C
struct FTournamentGameResult
{
	struct FServerDateTime                             ReceivedTime;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      TournamentType;                                   		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned char                                      TournamentOrderType;                              		// 0x0009 (0x0001) [0x0000000000000000]              
	int                                                StageId;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GameId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned char                                      Result;                                           		// 0x0014 (0x0001) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.YakaLayer.ProfessionSkill
// 0x0018
struct FProfessionSkill
{
	int                                                ProfessionId;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ProfessionLevel;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      IsDefault : 1;                                    		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      SpecializationIds;                                		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIHudMenu_ItemTooltip.AttributeMatch
// 0x0008
struct FAttributeMatch
{
	int                                                AvatarAttributeId;                                		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                ItemAttributeId;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
};

// ScriptStruct CrimeCraft.UIHudMenu_ItemTooltip.ImageBlockRowData
// 0x0014
struct FImageBlockRowData
{
	struct FString                                     UserStr;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                IDStyle;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                IdxIcon;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIHudMenu_ItemTooltip.RowPresentation
// 0x0020
struct FRowPresentation
{
	struct FString                                     StrValue1;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StrValue2;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StyleID1;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                StyleID2;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIHudMenu_ItemTooltip.SlotBlock
// 0x0010
struct FSlotBlock
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             pFunction;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICCContextMenu.CCContextMenuSubItem
// 0x0030
struct FCCContextMenuSubItem
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsEnabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsSeparator : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             OnClicked;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StyleIndex;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                UserData0;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                UserData1;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                UserData2;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                UserData3;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICCContextMenu.CCContextMenuItem
// 0x003C
struct FCCContextMenuItem
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsEnabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsSeparator : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             OnClicked;                                        		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StyleIndex;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	TArray< struct FCCContextMenuSubItem >             SubItems;                                         		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                UserData0;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                UserData1;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                UserData2;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                UserData3;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCVideoSettingsProxy.CCProxyScreenResolution
// 0x000C
struct FCCProxyScreenResolution
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      FullScreen : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Window : 1;                                       		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Wide : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CrimeCraft.CCInputSettingsProxy.ActionBind
// 0x002C
struct FActionBind
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Group;                                            		// 0x0018 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                HachId;                                           		// 0x0024 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                GroupId;                                          		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCInputSettingsProxy.ActionGroup
// 0x0024
struct FActionGroup
{
	struct FString                                     GroupName;                                        		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Type;                                             		// 0x0018 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInputSettingsProxy.ChangeListAction
// 0x0024
struct FChangeListAction
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      Apply : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     GroupName;                                        		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIMisc.PresentedKey
// 0x0008
struct FPresentedKey
{
	int                                                KeyID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPCController : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIMisc.MapTooltipInfo
// 0x0024
struct FMapTooltipInfo
{
	struct FString                                     StrName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StrDesc;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     StrResource2D;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIGridAbstract.CellDescriptor
// 0x0018
struct FCellDescriptor
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHighlighted : 1;                                 		// 0x0000 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IdleTime;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLocked : 1;                                      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                StyleID;                                          		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UICharMenu_BasePaperDoll.AppearanceViewD
// 0x0018
struct UUICharMenu_BasePaperDoll_FAppearanceViewD
{
	float                                              UniformScaleMin;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UniformScaleMax;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UniformScale;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UICharMenu_BasePaperDoll.BonusCategory
// 0x001C
struct FBonusCategory
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bAllwaysShow : 1;                                 		// 0x000C (0x0004) [0x0000000000100001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      Attributes;                                       		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICharMenu_BasePaperDoll.PresetDiffValue
// 0x0010
struct FPresetDiffValue
{
	int                                                AAIndex;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Value;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIItemsDirector.ItemOperationDesc
// 0x0008
struct FItemOperationDesc
{
	unsigned char                                      Operation;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                MoveItem_Destination;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIItemsDirector.ItemContextMenuDesc
// 0x000D
struct FItemContextMenuDesc
{
	TArray< struct FItemOperationDesc >                OperationListEx;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      EquipItem_Source;                                 		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UISignatureMisc.SignatureLayersInfo
// 0x0050
struct FSignatureLayersInfo
{
	int                                                Ind_Node_Backgroud;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Player_Avatar;                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Player_Level;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Player_Name;                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Clan_Ico;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Clan_Name;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_PowerRating;                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Rank;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Title;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Medals[ 0x7 ];                           		// 0x0024 (0x001C) [0x0000000000000000]              
	int                                                Ind_Node_Top10_PVP;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Ind_Node_Top10_Rep;                               		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Category;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Node;                                             		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIListGridEx.ListGridLayers
// 0x0030
struct FListGridLayers
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                TextStyle;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NodeStyle;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FColumnLayoutInfo                           Layout;                                           		// 0x0018 (0x0014) [0x0000000000100001]              ( CPF_Edit )
	int                                                MouseHitPriority;                                 		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIJob_Tooltip.JobTooltipInfo
// 0x00B4
struct FJobTooltipInfo
{
	unsigned char                                      JobState;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FQuest                                      Q;                                                		// 0x0004 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FQuestReward                                reward;                                           		// 0x0074 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIJobsGrid.JobIconDescriptor
// 0x000C
struct FJobIconDescriptor
{
	int                                                IconID;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Position;                                         		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMirror : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIJobsGrid.JobNode
// 0x0024
struct FJobNode
{
	TArray< struct FJobIconDescriptor >                Icons;                                            		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                JobLevel;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Progress;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bJobLocked : 1;                                   		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                JobId;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	struct FPointer                                    JobRender;                                        		// 0x0020 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct CrimeCraft.UIJobsGrid.JobGroup
// 0x0028
struct FJobGroup
{
	int                                                GroupId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     GroupTitle;                                       		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Reputation;                                       		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FJobNode >                          Jobs;                                             		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIAccordeon.AccordeonSelectionInfo
// 0x0010
struct FAccordeonSelectionInfo
{
	int                                                StartIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ExpandedCategory;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ExpandedSubCategory;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ExpandedSubSubCategory;                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIAccordeon.TemplateAccordeonDesc
// 0x0058
struct FTemplateAccordeonDesc
{
	struct FString                                     ResourceName;                                     		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      ClampedTexture : 1;                               		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TemplateId;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                StackNum;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ProgressMin;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ProgressMax;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ProgressVal;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ColumnStore;                                      		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      Format : 1;                                       		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StyleID;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      ClampWidth : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      PushBack : 1;                                     		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseTCoords : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDoNotScroll : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FTextureCoordinates                         TCoords;                                          		// 0x0048 (0x0010) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIAccordeon.CategoryTemplate
// 0x002C
struct FCategoryTemplate
{
	TArray< struct FTemplateAccordeonDesc >            SubCategorieTemplateItems;                        		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                UserData0;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                UserData1;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                UserData2;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                UserData3;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTrialLocked : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.UIAccordeon.ASubSubCategorie
// 0x0000(0x002C - 0x002C)
struct FASubSubCategorie : FCategoryTemplate
{
};

// ScriptStruct CrimeCraft.UIAccordeon.ASubCategorie
// 0x0010(0x003C - 0x002C)
struct FASubCategorie : FCategoryTemplate
{
	TArray< struct FASubSubCategorie >                 Categories;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Clamped : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIAccordeon.ACategorie
// 0x0010(0x003C - 0x002C)
struct FACategorie : FCategoryTemplate
{
	TArray< struct FASubCategorie >                    Categories;                                       		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Clamped : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIQuasiMode.ServiceIconDescr
// 0x0005
struct FServiceIconDescr
{
	class UTexture*                                    Icon;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      service;                                          		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIMenu_NavigationMap.TerritoryControl
// 0x0008
struct FTerritoryControl
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIListGridEx*                               Grid;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIGameRadar.RadarElementInfo
// 0x0021
struct FRadarElementInfo
{
	struct FPresentedKey                               Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Caption;                                          		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCUIMarkerDB.FilterCategory
// 0x0028
struct FFilterCategory
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resource;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsEnable : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            FilteredTypes;                                    		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCUIMarkerDB.MaterialInstanceConstantProxyA
// 0x0010
struct FMaterialInstanceConstantProxyA
{
	class UMaterialInstanceConstant*                   MaterialInst;                                     		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   MaterialInstHighlight;                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   MaterialInstTracking;                             		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   MaterialInstMarking;                              		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCUIMarkerDB.ItemTypePresentationA
// 0x0038
struct FItemTypePresentationA
{
	int                                                InitSizeAllocation;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActiveIndex;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActiveIndexMarking;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SourceSize;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WorldMarkingDisplace;                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RenderPriority;                                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFade : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IsShownBehindWalls : 1;                           		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UMaterialInterface*                          StateMaterial;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          MaterialHighlit;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          MaterialTracking;                                 		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMaterialInstanceConstantProxyA >   StateMaterialPool;                                		// 0x002C (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIWorldMap.MapObject
// 0x0068
struct FMapObject
{
	unsigned char                                      ObjectType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ObjectName;                                       		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBox                                        BoundRect;                                        		// 0x0014 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     LocalizedName;                                    		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LocalizedDesc;                                    		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UUIComp_DrawImage*                           Object_Image;                                     		// 0x0054 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIComp_DrawImage*                           Object_ImageHiglight;                             		// 0x0058 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIComp_DrawImage*                           Object_ImageSelected;                             		// 0x005C (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	class UUIObject*                                   InfoObject;                                       		// 0x0060 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	unsigned long                                      bStateMouseOver : 1;                              		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIWorldMap.MapLayer
// 0x0020
struct FMapLayer
{
	struct FString                                     LayerName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMapObject >                        LayerObjects;                                     		// 0x000C (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	class UUIComp_DrawImage*                           Layer_Background;                                 		// 0x0018 (0x0004) [0x000000000608000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
	int                                                Selected;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_Achievements.StatCategory
// 0x0018
struct UUICharMenu_Achievements_FStatCategory
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Attributes;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICharMenu_Achievements.StatisticsCategoryPresentation
// 0x0014
struct UUICharMenu_Achievements_FStatisticsCategoryPresentation
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OrderId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_Achievements.BasicCounterPresentation
// 0x0038
struct UUICharMenu_Achievements_FBasicCounterPresentation
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ResourceTag;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PairId;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                OrderId;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                DisplayType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              PairValue;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarketNative.BlackMarket_Item
// 0x0010
struct FBlackMarket_Item
{
	unsigned char                                      BlackMarketType;                                  		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TemplateIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarketNative.BlackMarket_Category
// 0x0038
struct FBlackMarket_Category
{
	unsigned char                                      Group;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SubGroup;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FString                                     ShortName;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resource2D;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBlackMarket_Item >                 Items;                                            		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      Hidden : 1;                                       		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ShowAccount : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      ShowMainLeft : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      ShowMainRight : 1;                                		// 0x0034 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowItemsPanel : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      ShowAppearancePanel : 1;                          		// 0x0034 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      ShowStylePanel : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      ShowColorizePanel : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      ShowRepairPanel : 1;                              		// 0x0034 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      ShowGearPacksPanel : 1;                           		// 0x0034 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      ShowSkelMeshPanel : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000400] 
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarketNative.BlackMarket_CateroryFilterType
// 0x0018
struct FBlackMarket_CateroryFilterType
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      Ids;                                              		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarketNative.BlackMarket_CategoryFilter
// 0x0018
struct FBlackMarket_CategoryFilter
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBlackMarket_CateroryFilterType >   Types;                                            		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarket.ColorizedItemInfo
// 0x0024
struct FColorizedItemInfo
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TemplateId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ParentItemID;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ColorId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                Color;                                            		// 0x0014 (0x0010) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarket.AdvertisingData
// 0x0040
struct FAdvertisingData
{
	struct FServerDateTime                             BeginTime;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FServerDateTime                             EndTime;                                          		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USurface* >                          Images;                                           		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class USurface* >                          Images_Normal;                                    		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class USurface* >                          Images_Deluxe;                                    		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class USurface* >                          Images_Premium;                                   		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarket.AvatarAttributeInfo
// 0x000C
struct FAvatarAttributeInfo
{
	float                                              PtcValue;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AddValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AttributeType;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarket.BMAppearanceView
// 0x0028
struct FBMAppearanceView
{
	float                                              UniformScaleMin;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UniformScaleMax;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UniformScale;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationX;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationZ;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFitWidgetBounds : 1;                             		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAbsoluteOrigin : 1;                              		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              RadiusMultiplier;                                 		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarket.WeaponView
// 0x003C
struct FWeaponView
{
	int                                                WpnTemplateId;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WpnSlotIndices[ 0x7 ];                            		// 0x0004 (0x001C) [0x0000000000000000]              
	int                                                WpnColorIndices[ 0x7 ];                           		// 0x0020 (0x001C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_BlackMarket.SkelMeshView
// 0x00B8
struct FSkelMeshView
{
	float                                              Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FWeaponView                                 Weapons[ 0x3 ];                                   		// 0x0004 (0x00B4) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIServiceMenu_Tournament.ModifierImages
// 0x0018
struct FModifierImages
{
	TArray< class UUIImage* >                          MapImages;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUIPanel* >                          MapPanels;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIListBoxEx.ListBoxExSelectionInfo
// 0x0008
struct FListBoxExSelectionInfo
{
	int                                                StartIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SelectedIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIListBoxEx.DebugNode
// 0x0024
struct FDebugNode
{
	int                                                StyleID;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     node_value;                                       		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      node_type;                                        		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         uvCoords;                                         		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIListBoxEx.DebugRow
// 0x000C
struct FDebugRow
{
	TArray< struct FDebugNode >                        Nodes;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIServiceMenu_PvPLadderNative.LadderPlaceInfo
// 0x0010
struct FLadderPlaceInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Place;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PlaceWinnerPVP;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_Shop.UserOptionsForSlot
// 0x0008
struct FUserOptionsForSlot
{
	int                                                SlotId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserOption;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_Shop_Item.ItemsCategory
// 0x005C
struct FItemsCategory
{
	TArray< struct FExistSimpleShopItem >              Items;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FItemTemplateCategory                       Category;                                         		// 0x000C (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICharMenu_Shop_Ability.AbilitiesCategory
// 0x0010
struct FAbilitiesCategory
{
	unsigned char                                      Category;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< struct FAbility >                          Abilities;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIServiceMenu_RepairVendor.RepairableItemInfo
// 0x0024
struct FRepairableItemInfo
{
	int                                                ItemGlobalId;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemTemplateId;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemTemplateName;                                 		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsOnCharacter : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CurrentDurability;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RepairMoneyCost;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                RepairGoldCost;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIQuasiMode.ContainerRecord
// 0x0008
struct FContainerRecord
{
	class UUIItemGrid*                                 Container;                                        		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICharMenu*                                 ParentMenu;                                       		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.UIQuasiMode.ItemRendererPointer
// 0x0004
struct FItemRendererPointer
{
	struct FPointer                                    Ptr;                                              		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct CrimeCraft.FurniturePresets.DancerVisualDesc
// 0x0094
struct FDancerVisualDesc
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  Icon2D;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FCharacterVisualDescription                 Visual;                                           		// 0x0030 (0x004C) [0x0000000000100001]              ( CPF_Edit )
	struct FString                                     VisualText;                                       		// 0x007C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUsedInVip : 1;                                   		// 0x0088 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUsedOnStripScene : 1;                            		// 0x0088 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                VipCostInBollars;                                 		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VipCostInGold;                                    		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCUserNetworkConfig.SavedAccountInfo
// 0x0010
struct FSavedAccountInfo
{
	struct FString                                     AccountName;                                      		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                LastUsedCharacterId;                              		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct CrimeCraft.UIRichLabel.LineNode
// 0x003C
struct FLineNode
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsBlinking : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                FontID;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	struct FLinearColor                                NodeColor;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	int                                                SmileIndex;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     Text;                                             		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     InteractText;                                     		// 0x0030 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIRichLabel.StringLine
// 0x0020
struct FStringLine
{
	float                                              CurrBlinkingTime;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              FadeStartTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                BaseTextNodeIndex;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                SpaceCount;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FLineNode >                         Nodes;                                            		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCBaseHUD.QueueMessageDesc
// 0x001C
struct FQueueMessageDesc
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Message;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Caption;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCBaseHUD.ActiveTargetInfo
// 0x000C
struct FActiveTargetInfo
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ACCPawn*                                     Pawn;                                             		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Distance;                                         		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCBaseHUD.HudMessageQueue
// 0x000C
struct FHudMessageQueue
{
	TArray< struct FHudLocalizedMessage >              msg;                                              		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCBaseNotificationMessage.ProcessReceptionInfo
// 0x0004
struct FProcessReceptionInfo
{
	unsigned long                                      OutAttemptToReceiveAgain : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      OutMoveToReceivedAfterSuccessfulReceiption : 1;   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCClubSitableStructs.CSL_SitableActorInfo
// 0x0008
struct FCSL_SitableActorInfo
{
	class ACCClubSitableActor*                         SitableActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SitdownType;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCClubSitableStructs.CSLRulingInfo
// 0x0024
struct FCSLRulingInfo
{
	unsigned char                                      RulingAction;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FCSL_SitableActorInfo                       RulingSitable;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                RulingActionParameter;                            		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       RulingActionNameParameter;                        		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                RulingFlags;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RulingExtraFlags;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      RulingActionDone : 1;                             		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCClubSitableStructs.SitableAnimationInfo
// 0x0050
struct FSitableAnimationInfo
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bMirroredAnimation : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	class UCCMotionLawObject*                          MotionLawObject;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FMatrix                                     WorldOriginTM;                                    		// 0x0010 (0x0040) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCGameStats.PlayerStat
// 0x00A8
struct FPlayerStat
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     GlobalID;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TotalConnectTime;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TotalScore;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FWeaponStat >                       WeaponStats;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInventoryStat >                    InventoryStats;                                   		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBonusStat >                        BonusStats;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPickUpStat >                       PickUpStats;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFeatStat >                         FeatStats;                                        		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchievementStat >                  AchievementStats;                                 		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ObjectiveStats;                                   		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      KillStats;                                        		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      DeathStats;                                       		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NoSuicides;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                ObtainedDamage;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ObtainedDamageByProfile;                          		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AFKTime;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstancePawnTakeHitSystem.MergedTakeHitInfo
// 0x0048
struct FMergedTakeHitInfo
{
	struct FTakeHitInfo                                THInfo;                                           		// 0x0000 (0x0044) [0x0000000000000000]              
	int                                                NumBullets;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCGameStats.GameStat
// 0x001C
struct FGameStat
{
	int                                                TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      StatType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                Team;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                InstigatorId;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AdditionalId;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                InstigatorData;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                AdditionalData;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCEffectsManager.CCCameraDescription
// 0x00FC
struct FCCCameraDescription
{
	struct FName                                       DescName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DescSwitchingTime;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       LocationInterpolationTypeWhenSwitching;           		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       RotationInterpolationTypeWhenSwitching;           		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FName                                       FOVInterpolationTypeWhenSwitching;                		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       RotationOffsetInterpolationTypeWhenSwitching;     		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FVector                                     BeginningOffset;                                  		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     EndingOffset;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocationOffset;                                   		// 0x0044 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocalOffset;                                      		// 0x0050 (0x000C) [0x0000000000000000]              
	struct FRotator                                    RotationOffset;                                   		// 0x005C (0x000C) [0x0000000000000000]              
	float                                              FOV;                                              		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              LocalFov;                                         		// 0x006C (0x0004) [0x0000000000000000]              
	struct FName                                       LocationInterpolationType;                        		// 0x0070 (0x0008) [0x0000000000000000]              
	float                                              LocationInterpolationSpeed;                       		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FName                                       RotationInterpolationType;                        		// 0x007C (0x0008) [0x0000000000000000]              
	float                                              RotationInterpolationSpeed;                       		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                MaxAngleBetweenPawnAndCamLeft;                    		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                MaxAngleBetweenPawnAndCamRight;                   		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                MaxAngleBetweenPawnAndCamUp;                      		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                MaxAngleBetweenPawnAndCamDown;                    		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                HighPitchLimit;                                   		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                LowPitchLimit;                                    		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                HighPitchViewLimit;                               		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                LowPitchViewLimit;                                		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                HighDecrementPoint;                               		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                LowDecrementPoint;                                		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              DecrementOffset;                                  		// 0x00B0 (0x0004) [0x0000000000000000]              
	struct FName                                       EffectsNames[ 0x5 ];                              		// 0x00B4 (0x0028) [0x0000000000000000]              
	struct FName                                       SwitchPostProcessName;                            		// 0x00DC (0x0008) [0x0000000000000000]              
	struct FName                                       PostProcessName;                                  		// 0x00E4 (0x0008) [0x0000000000000000]              
	float                                              RecoilMin;                                        		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              RecoilMax;                                        		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              RecoilTime;                                       		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              RecoilHVbalance;                                  		// 0x00F8 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCReplicationStats.StatsFilterDesc
// 0x0024
struct FStatsFilterDesc
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      NetworkRole;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            FieldTypes;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FieldFriendlyName;                                		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketSimulationStructs.SplineSimulationInfo
// 0x0034
struct FSplineSimulationInfo
{
	float                                              SplineTime;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     StartLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartVelocity;                                    		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     TargetVelocity;                                   		// 0x0028 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketStructs.EnemyInfo
// 0x0009
struct FEnemyInfo
{
	class ACCInstancePawn*                             P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMainGoalEnemy : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      LocationType;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketSimulationStructs.EnemyHuntSimulationInfo
// 0x0028
struct FEnemyHuntSimulationInfo
{
	struct FEnemyInfo                                  Enemy;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EnemyLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     EnemyDestVelocity;                                		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              EnemyTime;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CombatLogMessage.AdditionalParam
// 0x0050
struct FAdditionalParam
{
	class ACCPlayerReplicationInfo*                    PRIArray[ 0x10 ];                                 		// 0x0000 (0x0040) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                extendedInfo;                                     		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned char                                      Weapon;                                           		// 0x0048 (0x0001) [0x0000000000000000]              
	unsigned long                                      bFirstBlood : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMelee : 1;                                       		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHeadShot : 1;                                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bMine : 1;                                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLostBag : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bLostFlag : 1;                                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bKilledWithFire : 1;                              		// 0x004C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bKilledWithFragGrenade : 1;                       		// 0x004C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bKilledWithPED : 1;                               		// 0x004C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bKilledWithProximityMine : 1;                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bKilledWithControlledMine : 1;                    		// 0x004C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bKilledWithSprayAndPray : 1;                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bKilledWithClusterRocket : 1;                     		// 0x004C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bKilledWithClusterGrenade : 1;                    		// 0x004C (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bKilledWithOverkill : 1;                          		// 0x004C (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bKilledWithTurret : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bKilledWithRocketTurret : 1;                      		// 0x004C (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bKilledWithSnowball : 1;                          		// 0x004C (0x0004) [0x0000000000000000] [0x00020000] 
};

// ScriptStruct CrimeCraft.CCBotBase.InventoryItem
// 0x000C
struct FInventoryItem
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Rating;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCBotBase.BotRosterAIAbilityInfo
// 0x001C
struct FBotRosterAIAbilityInfo
{
	unsigned char                                      AbilityType;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              flCooldownMin;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flCooldownMax;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flProbability;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flPrecision;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumCharges;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCBotBase.BotResists
// 0x0014
struct FBotResists
{
	float                                              RLight;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RMedium;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RHeavy;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RSplash;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              RMelee;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCGlobalInstanceParams.GIPDamageParams
// 0x0010
struct FGIPDamageParams
{
	float                                              DamageModifier;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ProjectileDamageModifier;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              MeleeDamageModifier;                              		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              HPModifier;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCVoiceSettings.VoiceSettingEntry
// 0x0008
struct FVoiceSettingEntry
{
	class USoundCue*                                   MaleSound;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FemaleSound;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCInstanceGameInfo.LootTableEntry
// 0x0010
struct FLootTableEntry
{
	float                                              Prob;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      Item;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseCount : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Count;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceGameInfo.CashBagInfo
// 0x0018
struct FCashBagInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	class ACCInstanceCashBag*                          bag;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	class AController*                                 Instigator;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCBotRoster.BotRosterAISection
// 0x0020
struct FBotRosterAISection
{
	unsigned char                                      Profile;                                          		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Aggressiveness;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StrafingAbility;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrouchingAbility;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeapfrogAbility;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flTossPrecisionDeg;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GrenadeCooldown;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GrenadeCooldownBias;                              		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCBotRoster.BotRosterResistSection
// 0x0014
struct FBotRosterResistSection
{
	float                                              RLight;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RMedium;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RHeavy;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RSplash;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RMelee;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCBotRoster.BotRosterFallbackInfo
// 0x0018
struct FBotRosterFallbackInfo
{
	unsigned long                                      bFallbackOnNoSquadMates : 1;                      		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              flFallbackOnLowHealthPct;                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flFallbackDurationTimeMin;                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flFallbackDurationTimeMax;                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseStaticAnim : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bGenerateInterrogationEvents : 1;                 		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOnLowHealthPctParamMeansDelta : 1;               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              flForbidIfGreaterThanMeters;                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCBotRoster.BotRosterInfoEx
// 0x002C
struct FBotRosterInfoEx
{
	float                                              flAimSpeed;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flAimSpeedDelta;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flTurnSpeed;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flTurnSpeedDelta;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flDelay;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flDelayDelta;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flHearRadius;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flHearRadiusDelta;                                		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flViewAngle;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              flViewAngleDelta;                                 		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Behavior[ 0x4 ];                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCBotRoster.BotRosterEntry
// 0x00E4
struct FBotRosterEntry
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AlternativePlayerName;                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Health;                                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             Inventory;                                        		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      ViewIndex;                                        		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBotRosterAISection                         AI;                                               		// 0x0040 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	class UCCAISoundGroup*                             SoundGroup;                                       		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      NPCType;                                          		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FBotRosterResistSection                     Resists;                                          		// 0x0068 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FBotRosterFallbackInfo                      Fallback;                                         		// 0x007C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FBotRosterAIAbilityInfo                     AIAbility;                                        		// 0x0094 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FBotRosterInfoEx                            InfoEx;                                           		// 0x00B0 (0x002C) [0x0000000000000001]              ( CPF_Edit )
	float                                              flMeleeDamageMod;                                 		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMelee : 1;                                       		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHealWhenOutOfCombat : 1;                         		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCanSeeInvisible : 1;                             		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bCanSeeThroughSmoke : 1;                          		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bNoKillShots : 1;                                 		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCBotVisualRoster.BotVisualRosterEntry
// 0x001C
struct FBotVisualRosterEntry
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ViewIndex;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     PlayerNamePrefix;                                 		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSoloGameInfo.SoloPlayerInfo
// 0x001C
struct FSoloPlayerInfo
{
	class APlayerController*                           Controller;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                NumQuestItems[ 0x4 ];                             		// 0x0004 (0x0010) [0x0000000000000000]              
	float                                              SessionTimeLeft;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLeavingInstance : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRestarted : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.UIHUD_GameTypeRules.QuestRulesScreen
// 0x0018
struct FQuestRulesScreen
{
	int                                                QuestId;                                          		// 0x0000 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      QuestReadyToBeDelivered : 1;                      		// 0x0004 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	int                                                InstanceId;                                       		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FString                                     PanelName;                                        		// 0x000C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstanceHUD.AbylityBuff
// 0x0018
struct FAbylityBuff
{
	class UCCAbility*                                  Ability;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              AffectTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     Resource2D;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCInstanceHUD.HUDRegenInfoPresentation
// 0x000C
struct FHUDRegenInfoPresentation
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Timer;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceHUD.HUDRegenInfo
// 0x0004
struct FHUDRegenInfo
{
	float                                              HP_Current;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCBotPawn.CCBotPawnDebugInfo2
// 0x0050
struct FCCBotPawnDebugInfo2
{
	int                                                InfoId2;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CurWeapon;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DangerHint;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Destination;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     DebugBlockedWepStart;                             		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     DebugBlockedWepEnd;                               		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FVector                                     AdjustLoc;                                        		// 0x0040 (0x000C) [0x0000000000000000]              
	class ARoute*                                      ScriptedRoute;                                    		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCBotPawn.CCBotPawnDebugInfo4
// 0x002C
struct FCCBotPawnDebugInfo4
{
	int                                                InfoId4;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceLastNotifyHitWall;                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeSinceLastNotifyBump;                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              CombatDist;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CombatDistBias;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAdjusting : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     SSPreciseDestination;                             		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              SSMoveDist;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              SSMoveSpeed;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCBotPawn.CCBotPawnDebugInfo
// 0x0038
struct FCCBotPawnDebugInfo
{
	int                                                InfoId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Flags;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APawn*                                       Enemy;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	class AActor*                                      EnemyActor;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnemyActorVisible : 1;                           		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      MoveTarget;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	class AActor*                                      Focus;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	class AActor*                                      RouteGoal;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInCover : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCoverSucks : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      CoverHint;                                        		// 0x002C (0x0001) [0x0000000000000000]              
	int                                                CurrentWeaponIdx;                                 		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                CurrentDesiredWeaponIdx;                          		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCBotPawn.CCBotPawnDebugInfo3
// 0x0054
struct FCCBotPawnDebugInfo3
{
	int                                                InfoId3;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       StateName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     DebugString;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumEnemys;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     EnemyList[ 0x3 ];                                 		// 0x001C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RouteCache;                                       		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANavigationPoint*                            Anchor;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	class ANavigationPoint*                            LastAnchor;                                       		// 0x0050 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIActionBar.ActionBarSlot
// 0x0060
struct FActionBarSlot
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                AbilityTemplateID;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DrugsLevel;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           DrugHintMessages;                                 		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                PackCount;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                MaxPackCount;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TimeDelta;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              TransitionSpeed;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              SecondsLeft;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      AffectCanBeEnded : 1;                             		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HintAnimDelta;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAnimatingHint : 1;                               		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CanBeUsedDuringCooldown : 1;                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	class UMaterialInstanceConstant*                   StateMaterialInst[ 0x8 ];                         		// 0x003C (0x0020) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   DrugCounterMaterialInst;                          		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCPVPBot.PlayerInfo
// 0x0040
struct FPlayerInfo
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastKnownPosition;                                		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FCoverInfo                                  Cover;                                            		// 0x0014 (0x0008) [0x0000000000000000]              
	float                                              InitialAcquisitionTime;                           		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              LastSeenTime;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                DamageSuffered;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Aggro;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              AggroBoost;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              PermanentAggroBoost;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              LastDamageTime;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              Rating;                                           		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPVPBot.NoiseInfo
// 0x0014
struct FNoiseInfo
{
	float                                              Loudness;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      NoiseMaker;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FName                                       NoiseType;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              LastHeardTime;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSquadAI.SDEventInfo
// 0x0010
struct FSDEventInfo
{
	class APawn*                                       Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class USeqEvent_CCAISpyDetected* >         Events;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCBotPawn.CCBotPawnDebugInfoUS
// 0x0041
struct FCCBotPawnDebugInfoUS
{
	int                                                InfoIdUS;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     AIVersion;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              AG;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              SA;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ca;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              LA;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     Inventory;                                        		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ANavigationPoint*                            StartSpot;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              SightRadius;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              RespawnDelay;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	class AActor*                                      FormationCenter;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              FormationSize;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      SquadOrder;                                       		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CrimeCraftFootSteps.FootStepEffect
// 0x0008
struct FFootStepEffect
{
	class UParticleSystem*                             FootStepPS;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FootStepCoeff;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPawnProps.MovementSound
// 0x000C
struct FMovementSound
{
	class USoundCue*                                   TheSound;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepsPerSound;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLoopSound : 1;                                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPawnProps.PerBulletsHitSound
// 0x0008
struct FPerBulletsHitSound
{
	int                                                NumHitedBullets;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HitSound;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPawnProps.DecalParams
// 0x0030
struct FDecalParams
{
	TArray< class UDecalMaterial* >                    Mtl;                                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MinCount;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxCount;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxOffset;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinRotation;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRotation;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinWidth;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxWidth;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinRatio;                                         		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRatio;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPawnProps.HitEffect
// 0x00B4
struct FHitEffect
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BloodParticleSystem;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HitSound;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPerBulletsHitSound >               HitSounds;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   DeathHitSound;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeathKnifeSound;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeathFireSound;                                   		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeathLegsSound;                                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HeadHitSound;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPerBulletsHitSound >               HeadHitSounds;                                    		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   CritHitSound;                                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPerBulletsHitSound >               CritHitSounds;                                    		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   HeadHitSoundForShooter;                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PerforatingBloodParticleSystem;                   		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BloodDistance;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDecalParams                                BloodDecalToPawn;                                 		// 0x0054 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FDecalParams                                BloodDecalToLevel;                                		// 0x0084 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawnProps.TurretHitEffect
// 0x0018
struct FTurretHitEffect
{
	unsigned char                                      WeaponType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             HitParticleSystem;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   HitSound;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPerBulletsHitSound >               HitSounds;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawnProps.PerWeaponMeleeInfo
// 0x0010
struct FPerWeaponMeleeInfo
{
	struct FString                                     WeaponTypeName;                                   		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UCCMeleeInfo*                                MeleeParameters;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPawnProps.PerCharacterMeleeInfo
// 0x0018
struct FPerCharacterMeleeInfo
{
	struct FString                                     CharacterPresetName;                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPerWeaponMeleeInfo >               PerWeaponMeleeParameters;                         		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawnProps.WeaponConstraintSetup
// 0x0004
struct FWeaponConstraintSetup
{
	class URB_ConstraintSetupEditinline*               ConstraintSetup;                                  		// 0x0000 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CrimeCraft.CCPawnProps.WeaponConstraintsSetup
// 0x000C
struct FWeaponConstraintsSetup
{
	TArray< struct FWeaponConstraintSetup >            ConstraintsSetup;                                 		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawnProps.QuickWeaponChangeAnimInfo
// 0x0024
struct FQuickWeaponChangeAnimInfo
{
	unsigned char                                      SourceSlot;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SourceWeaponType;                                 		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DestSlot;                                         		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DestWeaponType;                                   		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0004 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              hiding_FirstBlendLengthTimePerc;                  		// 0x000C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              hiding_Blend2CarryTimePerc;                       		// 0x0010 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              hiding_Blend2CarryLengthTimePerc;                 		// 0x0014 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              getting_BlendFromCarryTimePerc;                   		// 0x0018 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              getting_BlendFromCarryLengthTimePerc;             		// 0x001C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              getting_LastBlendLengthTimePerc;                  		// 0x0020 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct CrimeCraft.CCPawnProps.PerCharacterQuickWeaponChangeInfo
// 0x0018
struct FPerCharacterQuickWeaponChangeInfo
{
	struct FString                                     CharacterPresetName;                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FQuickWeaponChangeAnimInfo >        AnimInfos;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawnProps.MeleeFromAnimationDataPickerInfo
// 0x0018
struct FMeleeFromAnimationDataPickerInfo
{
	struct FString                                     SourceAnimTreeName;                               		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     SourceMeleeAnimNodeName;                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPawnProps.QuickWeaponChangeDataPickerInfo
// 0x0018
struct FQuickWeaponChangeDataPickerInfo
{
	struct FString                                     SourceAnimTreeName;                               		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     SourceQwchAnimNodeName;                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCCoverPhysMaterial.CoverActionSound
// 0x0008
struct FCoverActionSound
{
	unsigned char                                      PlaySoundInstant;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LastAction;                                       		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Action;                                           		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGibSettings.GibShotOffPresetListEntry
// 0x0008
struct FGibShotOffPresetListEntry
{
	class UClass*                                      GibClass;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCCGibPreset*                                UsedGibPreset;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGibSettings.AlternateGibParameterEntry
// 0x0030
struct FAlternateGibParameterEntry
{
	struct FString                                     PresetName;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GibName;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ParamName;                                        		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ParamValue;                                       		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRecoilProcessorBase.RestoreInfo
// 0x0024
struct UCCRecoilProcessorBase_FRestoreInfo
{
	unsigned long                                      bRestoring : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RestoreTimePassed;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RestoreCurentVelocity;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RestoreStartDistance;                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              RestoreTime;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              RestorePower;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseRestoreSpeed : 1;                             		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RestoreSpeed;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              RestoreAcceleration;                              		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCCapturePoint.CapturePointParent
// 0x0008
struct FCapturePointParent
{
	class ACCCapturePoint*                             Point;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      MustBeCaptured : 1;                               		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCCarriedObject.ObjectMovement
// 0x0018
struct FObjectMovement
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCCharacterComponent.PostPhysicsBoneBreakingInfo
// 0x000C
struct FPostPhysicsBoneBreakingInfo
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bWithAllSubbones : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCCharacterComponent.SpaceBasesFrame
// 0x0010
struct FSpaceBasesFrame
{
	TArray< struct FMatrix >                           SpaceBases;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              FrameTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCCheatManager.CheatClanInfo
// 0x0034
struct FCheatClanInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Members;                                          		// 0x001C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsLocal : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ClanMaster;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                LocalPlayer;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.YakaLayer.InitSoldShopItems_ItemDesc
// 0x0034
struct FInitSoldShopItems_ItemDesc
{
	struct FItemDescription                            Item;                                             		// 0x0000 (0x002C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Price;                                            		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCClanHallVisualDescr.ClanHallDancerPreset
// 0x0018
struct FClanHallDancerPreset
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               Mesh;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   AnimTree;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSet*                                    AnimSets;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCLobbyHUD.UserSubscriptedInstanceSession
// 0x0008
struct FUserSubscriptedInstanceSession
{
	int                                                UserInstanceSession;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              UserSubscriptionPowerRating;                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCNotificationMessage_CustomMessage.CustomMessageInfo
// 0x0024
struct FCustomMessageInfo
{
	struct FString                                     MessageTitle;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageText;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MessageIcon;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.FurniturePresets.VIPProgramme
// 0x003C
struct FVIPProgramme
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Cost;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GoldCost;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Description;                                      		// 0x0014 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  Icon2D;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UCCVipStripGirlDance*                        VipDanceReference;                                		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCCVipInteractionalStripGirlDance*           VipInteractionalDanceReference;                   		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCLobbyPawn.CCMove
// 0x0030
struct FCCMove
{
	int                                                Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      SyncMove : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Speed;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      MoveDir;                                          		// 0x000C (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              CurrMoveUseTime;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              PrevMoveUseTime;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCClubPrefabManager.PrefabDesc
// 0x0030
struct FPrefabDesc
{
	class APrefabInstance*                             PrefabInst;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class AActor*                                      SimpleActor;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FClubItemAttribute >                Attributes;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Position;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              Yaw;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PresetIndex;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ItemId;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOriginal : 1;                                    		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.FurniturePresets.FurniturePreset
// 0x007C
struct FFurniturePreset
{
	struct FString                                     ShortName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UStaticMesh*                                 Mesh;                                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPrefab*                                     Prefab;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialPresetIndex;                              		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Color1Palette;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Color2Palette;                                    		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  Icon2D;                                           		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  TopIcon;                                          		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  TopIconMask;                                      		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PresetsCategory;                                  		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Style;                                            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TopIconRotate;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Width;                                            		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      FrontFaceDirection;                               		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      FrontFaceDirection2;                              		// 0x0061 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClubItemAttribute >                InitialAttributes;                                		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      AllowedZoneTypes;                                 		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCCTTCaptureZone.AvailabilityZoneInfo
// 0x0004
struct FAvailabilityZoneInfo
{
	unsigned long                                      bAvailableForReds : 1;                            		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAvailableForBlues : 1;                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CrimeCraft.CCCTTCaptureZone.ReplicatedZoneStateInfo
// 0x0004
struct FReplicatedZoneStateInfo
{
	float                                              CaptureState;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCCTTCaptureZone.ZoneStateInfo
// 0x0008
struct FZoneStateInfo
{
	unsigned char                                      ItsState;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ItsStateTeam;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.FurniturePresets.AnimationDesc
// 0x0034
struct FAnimationDesc
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                Cost;                                             		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  Icon2D;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UCCStripGirlDance*                           DanceReference;                                   		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCMeleeInfo.MeleeBeatVisualInfo
// 0x0014
struct FMeleeBeatVisualInfo
{
	unsigned char                                      BeatVisualType;                                   		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                MeleeAnimationIndex;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MeleeEffectorType;                                		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   MeleeSound;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   MeleeRepeatSound;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCMeleeInfo.MeleeBeatInfo
// 0x0068
struct FMeleeBeatInfo
{
	struct FString                                     MeleeBeatFriendlyName;                            		// 0x0000 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FMLS_GetDescription                         MotionLawGetDescription;                          		// 0x000C (0x0014) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      bMeleeBeatCanBeRepeated : 1;                      		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              MeleeTime;                                        		// 0x0024 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              MeleeRepeatTimePerc;                              		// 0x0028 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              MeleeRepeatTimePosPerc;                           		// 0x002C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              MeleeBackBlendTime;                               		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamage;                                      		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeMomentum;                                    		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MeleeDamageType;                                  		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeAvoidanceRadiusMultiplier;                   		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeAvoidanceGlueFactor;                         		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeWorldCollisionRadiusMultiplier;              		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeLeftRotationLimit;                           		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeRightRotationLimit;                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FMeleeBeatVisualInfo                        BeatVisualInfo;                                   		// 0x0054 (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCMeleeInfo.MeleeDefenseVisualInfo
// 0x0004
struct FMeleeDefenseVisualInfo
{
	class USoundCue*                                   MeleeDefendSound;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCMeleeInfo.MeleeDefenseInfo
// 0x0008
struct FMeleeDefenseInfo
{
	float                                              MeleeDefendTime;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FMeleeDefenseVisualInfo                     DefenseVisualInfo;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCCustomizableWeapon.AbilityShot_Request
// 0x0024
struct FAbilityShot_Request
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FAbilityShotDesc                            Desc;                                             		// 0x000C (0x0014) [0x0000000000000000]              
	class UCCAbilityContext*                           AbilityContext;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCCustomizableWeapon.GrenadeConsumptionControl_Request
// 0x000C
struct FGrenadeConsumptionControl_Request
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCCustomizableWeapon.FireAmmoConsumptionControl_Request
// 0x000C
struct FFireAmmoConsumptionControl_Request
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCCustomizableWeapon.ReloadAmmoConsumptionControl_Request
// 0x000C
struct FReloadAmmoConsumptionControl_Request
{
	struct FString                                     Id;                                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCDistribution.DistributionEntry
// 0x000C
struct FDistributionEntry
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Counter;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCEffectsManager.PenetrationAvoidanceFeeler
// 0x0020
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                    		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              WorldWeight;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnWeight;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Extent;                                           		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCEffectsManager.CCCameraEffectDescription
// 0x000C
struct FCCCameraEffectDescription
{
	struct FName                                       EffectName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UCCCameraEffect*                             Effect;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCEffectsManager.CCPostProcessSettings
// 0x0088
struct FCCPostProcessSettings
{
	struct FName                                       SettingsName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPostProcessSettings                        Settings;                                         		// 0x0008 (0x0080) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCEmitterPool.TimedEmitterPoolEntry
// 0x000C
struct FTimedEmitterPoolEntry
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              Lifetime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LifeTimeLeft;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSoundSystemBlock.ComponentEntry
// 0x0034
struct FComponentEntry
{
	class UAudioComponent*                             Component;                                        		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bLoopMode : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	class AActor*                                      AttachToActor;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     AttachToActorLocationOffset;                      		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                UserData;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                UserData2;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              PushTime;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPendingFreeze : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingDelete : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPendingWantsFree : 1;                            		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDoingFadingRemove : 1;                           		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              FadingRemoveBaseVolumeMultiplier;                 		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              FadingRemoveTime;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              FadingRemoveTimeLeft;                             		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMenu_CharacterCustomization.ColorPalette
// 0x0024
struct FColorPalette
{
	TArray< class UUIImage* >                          _images;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUIToggleButton* >                   _buttons;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      _colorIndex;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCEntryPawn.EntryPawnOutlook
// 0x0030
struct FEntryPawnOutlook
{
	int                                                HeadId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SkinColorId;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HairColorId;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HairId;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BeardId;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MakeupId;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HatId;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UpperClothId;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LowerClothId;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoesId;                                          		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GlassesId;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ClanLogoId;                                       		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCSpreadProcessorBase2.RestoreInfo
// 0x001C
struct UCCSpreadProcessorBase2_FRestoreInfo
{
	unsigned long                                      bRestoring : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RestoreTimePassed;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              RestoreStartDistance;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              RestoreTime;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              RestorePower;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseRestoreSpeed : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RestoreSpeed;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCGameInstanceDM.SpawnSpotData
// 0x0008
struct FSpawnSpotData
{
	class ANavigationPoint*                            StartSpot;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Weight;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCGibPreset.TemplateGibEntryParameters
// 0x0004
struct FTemplateGibEntryParameters
{
	class UCCGib*                                      TemplateGibInstance;                              		// 0x0000 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CrimeCraft.CCGibPreset.TemplateGibEntryParametersModifiers
// 0x0004
struct FTemplateGibEntryParametersModifiers
{
	unsigned long                                      DontUseTemplateGibPresetChildData : 1;            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DontUseTemplateGibPresetParentData : 1;           		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGibPreset.HiddenBoneInfoStruct
// 0x000C
struct FHiddenBoneInfoStruct
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHideAllSubBones : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGibPreset.TemplateGibEntryGenericParameters
// 0x0030
struct FTemplateGibEntryGenericParameters
{
	TArray< struct FHiddenBoneInfoStruct >             HiddenBonesList;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              TearOffImpulseModifier;                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TearOffYawRange;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TearOffPitchRange;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionImpulseModifier;                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShotOffImpulseModifier;                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShotOffImpulseParentToChildPerc;                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          DecalMaterial;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalSize;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalLifetime;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGibPreset.TemplateGibEntryAllParameters
// 0x0038
struct FTemplateGibEntryAllParameters
{
	struct FTemplateGibEntryParameters                 Parameters;                                       		// 0x0000 (0x0004) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FTemplateGibEntryParametersModifiers        ParametersModifiers;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTemplateGibEntryGenericParameters          GenericParameters;                                		// 0x0008 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCGibCustomization.GibCustomizationInfoElement
// 0x0018
struct FGibCustomizationInfoElement
{
	struct FString                                     MeshFilter;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           ParsedMeshFilter;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCGibCustomization.GibCustomizationInfo
// 0x000C
struct FGibCustomizationInfo
{
	TArray< struct FGibCustomizationInfoElement >      Elements;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCGibPreset.TemplateGibEntryCustomParameters
// 0x0010
struct FTemplateGibEntryCustomParameters
{
	struct FGibCustomizationInfo                       CustomizationInfo;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FTemplateGibEntryParameters                 Parameters;                                       		// 0x000C (0x0004) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCGibPreset.TemplateGibEntryCustomParametersArray
// 0x0048
struct FTemplateGibEntryCustomParametersArray
{
	TArray< struct FTemplateGibEntryCustomParameters > CustomParameters;                                 		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x000C (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCGibPreset.TemplateGibEntryCustomParametersArray.LookupMap
};

// ScriptStruct CrimeCraft.CCGibPreset.TemplateGibEntry
// 0x0048
struct FTemplateGibEntry
{
	class UClass*                                      GibClass;                                         		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< struct FTemplateGibEntryCustomParametersArray > PerLodParameters;                                 		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FTemplateGibEntryParametersModifiers        ParametersModifiers;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCCGibPreset*                                TemplateGibPreset;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTemplateGibEntryGenericParameters          GenericParameters;                                		// 0x0018 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCGib_CustomEffects.TransformInfo
// 0x0024
struct FTransformInfo
{
	struct FVector                                     Translation;                                      		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Scaling;                                          		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGib_CustomEffects.CE_ParticleSystemInfo
// 0x0030
struct FCE_ParticleSystemInfo
{
	class UParticleSystem*                             PS;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FTransformInfo                              Transform;                                        		// 0x000C (0x0024) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGib_BodyPart.StaticMeshInfo
// 0x0028
struct FStaticMeshInfo
{
	class UStaticMesh*                                 StMesh;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTransformInfo                              Transform;                                        		// 0x0004 (0x0024) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGib_BodyPart.ParticleSystemInfo
// 0x0028
struct FParticleSystemInfo
{
	class UParticleSystem*                             PS;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTransformInfo                              Transform;                                        		// 0x0004 (0x0024) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshGibDynamicDiff.GibSectionInfo
// 0x001C
struct FGibSectionInfo
{
	struct FName                                       ChildSectionBone;                                 		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ChildSectionBone2;                                		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SectionType;                                      		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              SectionParameter;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SectionInfluenceTreshold;                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshGibDynamicDiff.GibDiffEntryParameters
// 0x004C
struct FGibDiffEntryParameters
{
	struct FGibSectionInfo                             SectionInfo1;                                     		// 0x0000 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FGibSectionInfo                             SectionInfo2;                                     		// 0x001C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	int                                                ForceParentBloodDepthFromBase;                    		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ForceChildBloodDepthFromBase;                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PreviewOffset;                                    		// 0x0040 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshGibDynamicDiff.GibDiffEntryCustomParameters
// 0x0058
struct FGibDiffEntryCustomParameters
{
	struct FGibCustomizationInfo                       CustomizationInfo;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FGibDiffEntryParameters                     Parameters;                                       		// 0x000C (0x004C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshGibDynamicDiff.GibDiffEntryCustomParametersArray
// 0x000C
struct FGibDiffEntryCustomParametersArray
{
	TArray< struct FGibDiffEntryCustomParameters >     CustomParameters;                                 		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshGibDynamicDiff.GibDiffEntry
// 0x0018
struct FGibDiffEntry
{
	class UClass*                                      GibClass;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGibDiffEntryCustomParametersArray > PerLodParameters;                                 		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       TemplateDiffName;                                 		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGibDynamicDiffBatcher.GibBatcherEntry
// 0x0018
struct FGibBatcherEntry
{
	TArray< struct FGibDiffEntry >                     GibList;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       CustomGibDiffName;                                		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSelectMeAndRebuild : 1;                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCGlobalInstanceParams.GIPVisualParams
// 0x0004
struct FGIPVisualParams
{
	unsigned long                                      bSimpleCharacterMeshes : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNoCharacterAnimations : 1;                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNoCharacterPhysics : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNoWeaponMeshes : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bNoWeaponEffects : 1;                             		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNoProjectileMeshes : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bNoProjectileEffects : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct CrimeCraft.CCInstanceQuestZone.ToucherInfo
// 0x000C
struct FToucherInfo
{
	class AController*                                 Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TouchTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              AccTime;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceQuestZone.SCPPlayerInfo
// 0x0008
struct FSCPPlayerInfo
{
	class AActor*                                      Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              flProgress;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceQuestZone.InstanceQuestZoneContParams
// 0x0010
struct FInstanceQuestZoneContParams
{
	int                                                Capacity;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransferSpeed;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxWithdrawal;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttachBag : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCInstanceQuestItem.ProbabilityDesc
// 0x0014
struct FProbabilityDesc
{
	float                                              Prob[ 0x5 ];                                      		// 0x0000 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInstanceQuestItem_Main.ContainerDesc
// 0x001C
struct FContainerDesc
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 RareMesh;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   RankMat[ 0x5 ];                                   		// 0x0008 (0x0014) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCInvisibleDetector.DoAbilityContextPawnActionEntry
// 0x0008
struct FDoAbilityContextPawnActionEntry
{
	class ACCInstancePawn*                             ThePawn;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Action;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCLinearPoolBase.MyEntry
// 0x0008
struct FMyEntry
{
	class UObject*                                     ObjInstance;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsed : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCPenetrationObject.LastBulletInInfo
// 0x0048
struct FLastBulletInInfo
{
	unsigned long                                      bValid : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     HitNormal;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0010 (0x001C) [0x0000000000080000]              ( CPF_Component )
	struct FVector                                     BulletLocation;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     BulletDirection;                                  		// 0x0038 (0x000C) [0x0000000000000000]              
	float                                              AlreadyDamageLoss;                                		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPenetrationObject.PO_OutDataInfo
// 0x0018
struct FPO_OutDataInfo
{
	struct FVector                                     NewStartTrace;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	TArray< struct FImpactInfo >                       NewImpacts;                                       		// 0x000C (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPenetrationObject.PO_InDataInfo
// 0x0050
struct FPO_InDataInfo
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0034 (0x001C) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct CrimeCraft.CCLobbyController.MovementInputInfoEntry
// 0x000C
struct FMovementInputInfoEntry
{
	float                                              PrevValue;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastChangeTime;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCLobbyController.MovementInputInfo
// 0x0018
struct FMovementInputInfo
{
	struct FMovementInputInfoEntry                     Forward;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FMovementInputInfoEntry                     Strafe;                                           		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.TutorialSystem.MenuHelpPanels
// 0x000C
struct FMenuHelpPanels
{
	TArray< struct FName >                             HelpPanelNames;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.TutorialSystem.ServiceHelpPanel
// 0x0014
struct FServiceHelpPanel
{
	struct FName                                       PanelName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< int >                                      NPCids;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.TutorialSystem.ServiceHelpPanels
// 0x000C
struct FServiceHelpPanels
{
	TArray< struct FServiceHelpPanel >                 HelpPanels;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.Tutorial.ActionDesc
// 0x0010
struct FActionDesc
{
	unsigned char                                      action_type;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     sparam;                                           		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.Tutorial.EntityRequirement
// 0x0014
struct FEntityRequirement
{
	unsigned char                                      reqType;                                          		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              fparam;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     intparam;                                         		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.Tutorial.TutorialEntity
// 0x0154
struct FTutorialEntity
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEntityRequirement >                requirements;                                     		// 0x0004 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     tutorial_text;                                    		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     tutorial_caption;                                 		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      isComplete : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      action_type;                                      		// 0x002C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              HintLifetime;                                     		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FActionDesc >                       Actions;                                          		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FItemTemplate                               boughtItem;                                       		// 0x0040 (0x0110) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastGainedAbility;                                		// 0x0150 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCLobbyRemoteController.LobbySensorInfo
// 0x0008
struct FLobbySensorInfo
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Angle;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCLobbyRemotePawn.PathPoint
// 0x0020
struct FPathPoint
{
	int                                                Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCMotionLawObject.MotionLawEntry
// 0x0050
struct FMotionLawEntry
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FMatrix                                     TM;                                               		// 0x0010 (0x0040) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCMotionLawObject.MotionLawPublicInfo
// 0x0008
struct FMotionLawPublicInfo
{
	int                                                NumEntries;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MaxTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCNotificationSystem.StackedNotificationMessage
// 0x0008
struct FStackedNotificationMessage
{
	class UCCBaseNotificationMessage*                  MessageInstance;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimePassedInStack;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCNotificationSystem.ReceivedNotificationMessage
// 0x000C
struct FReceivedNotificationMessage
{
	class UCCBaseNotificationMessage*                  MessageInstance;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimePassedSinceReceived;                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimePassedInStack;                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCNPCVisualComponent.ShadowNPCMesh
// 0x000C
struct FShadowNPCMesh
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          Mtl;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCShopProxy
// 0x0018
struct FCCNPCShopProxy
{
	struct FString                                     ShopId;                                           		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCRareShopProxy
// 0x0018
struct FCCNPCRareShopProxy
{
	struct FString                                     RareShopId;                                       		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCPremiumShopProxy
// 0x0018
struct FCCNPCPremiumShopProxy
{
	struct FString                                     PremiumShopId;                                    		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCRepairerProxy
// 0x0018
struct FCCNPCRepairerProxy
{
	struct FString                                     RepairerId;                                       		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCVisualProxy
// 0x0010
struct FCCNPCVisualProxy
{
	int                                                VisualId;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCQuestProxy
// 0x0018
struct FCCNPCQuestProxy
{
	struct FString                                     QuestId;                                          		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCInstancePorterProxy
// 0x0018
struct FCCNPCInstancePorterProxy
{
	struct FString                                     InstanceId;                                       		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCLobbyPorterProxy
// 0x001C
struct FCCNPCLobbyPorterProxy
{
	struct FString                                     LobbyExitNumber;                                  		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                LobbyExitId;                                      		// 0x000C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FString                                     Name;                                             		// 0x0010 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCTrainerProxy
// 0x0018
struct FCCNPCTrainerProxy
{
	struct FString                                     TrainerId;                                        		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCQuestVendorTemplateProxy
// 0x0018
struct FCCNPCQuestVendorTemplateProxy
{
	struct FString                                     QuestVendorTemplateId;                            		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCClanHallVendorProxy
// 0x0018
struct FCCNPCClanHallVendorProxy
{
	struct FString                                     ClanHallVendorId;                                 		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCSpecialization
// 0x00B0
struct FCCNPCSpecialization
{
	TArray< struct FCCNPCInstancePorterProxy >         Instances;                                        		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FCCNPCLobbyPorterProxy                      LobbyPorter;                                      		// 0x000C (0x001C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      ClanHallPorter : 1;                               		// 0x0028 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      ClanManager : 1;                                  		// 0x0028 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      BankManager : 1;                                  		// 0x0028 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      MailManager : 1;                                  		// 0x0028 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      AuctionManager : 1;                               		// 0x0028 (0x0004) [0x0000000000000003] [0x00000010] ( CPF_Edit | CPF_Const )
	unsigned long                                      ClanWarManager : 1;                               		// 0x0028 (0x0004) [0x0000000000000003] [0x00000020] ( CPF_Edit | CPF_Const )
	unsigned long                                      TournamentGrid : 1;                               		// 0x0028 (0x0004) [0x0000000000000003] [0x00000040] ( CPF_Edit | CPF_Const )
	unsigned long                                      PvPLadder : 1;                                    		// 0x0028 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      Garbage : 1;                                      		// 0x0028 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      NewspaperBox : 1;                                 		// 0x0028 (0x0004) [0x0000000000000003] [0x00000200] ( CPF_Edit | CPF_Const )
	unsigned long                                      MunicipalVendor : 1;                              		// 0x0028 (0x0004) [0x0000000000000003] [0x00000400] ( CPF_Edit | CPF_Const )
	TArray< struct FCCNPCShopProxy >                   Shop;                                             		// 0x002C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FCCNPCRareShopProxy >               RareShop;                                         		// 0x0038 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FCCNPCPremiumShopProxy >            PremiumShop;                                      		// 0x0044 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FCCNPCRepairerProxy                         Repairer;                                         		// 0x0050 (0x0018) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FCCNPCTrainerProxy                          Trainer;                                          		// 0x0068 (0x0018) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FCCNPCClanHallVendorProxy                   ClanHallVendor;                                   		// 0x0080 (0x0018) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FCCNPCQuestProxy >                  Quests;                                           		// 0x0098 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FCCNPCQuestVendorTemplateProxy >    QuestVendorTemplates;                             		// 0x00A4 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCSpawnArea
// 0x000C
struct FCCNPCSpawnArea
{
	class ACCNPCNavigationPoint*                       Pt0;                                              		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ACCNPCNavigationPoint*                       Pt1;                                              		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class ULineBatchComponent*                         VisLine;                                          		// 0x0008 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct CrimeCraft.CCNPCDescr.CCNPCSubscriptionLayer
// 0x0020
struct FCCNPCSubscriptionLayer
{
	struct FString                                     GreetingText;                                     		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     FuckOffText;                                      		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class USoundCue*                                   GreetingCue;                                      		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      Enabled : 1;                                      		// 0x001C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
};

// ScriptStruct CrimeCraft.CCNPCPaths.CCPathLink
// 0x003C
struct FCCPathLink
{
	class ACCNPCNavigationPoint*                       Point;                                            		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              Speed;                                            		// 0x0004 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              SpeedMultiplier;                                  		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LinkNormal;                                       		// 0x000C (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              LinkSize;                                         		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      PathType;                                         		// 0x001C (0x0001) [0x0000000000000002]              ( CPF_Const )
	float                                              SmoothDistIn;                                     		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SmoothDistOut;                                    		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SmoothArcAngle;                                   		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     SmoothBisection;                                  		// 0x002C (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              SmoothArcSpeed;                                   		// 0x0038 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct CrimeCraft.CCNPCPaths.CCPathWaiting
// 0x0010
struct FCCPathWaiting
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     Param;                                            		// 0x0004 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCNPCPaths.IdleAnimationDescr
// 0x0010
struct FIdleAnimationDescr
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinAfterDelay;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAfterDelay;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCNPCPaths.CCPathEndAction
// 0x0034
struct FCCPathEndAction
{
	unsigned long                                      EnableInteraction : 1;                            		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< class ACCNPCPaths* >                       NextPath;                                         		// 0x0008 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FCCPathWaiting                              Waiting;                                          		// 0x0014 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class ACCNPCNavigationPoint*                       View;                                             		// 0x0024 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FIdleAnimationDescr >               IdleAnimationsParam;                              		// 0x0028 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPlayerVisualComponent.ShadowRegionMesh
// 0x0014
struct FShadowRegionMesh
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                MeshIndex;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RegionSet;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          Mtl;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPawnWeaponAttachment.GrenadeTrajectoryActor
// 0x0008
struct FGrenadeTrajectoryActor
{
	class ADynamicSMActor*                             Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TrajectoryPointIndex;                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPawnWeaponAttachment.GrenadeTrajectoryPoint
// 0x0010
struct FGrenadeTrajectoryPoint
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPlayerAchievementProcessor.ProcessorSubscriptionInfo
// 0x0007
struct FProcessorSubscriptionInfo
{
	int                                                Param;                                            		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ProcessorIndex;                                   		// 0x0004 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      TypeOfCommandBlock;                               		// 0x0005 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CommandIndex;                                     		// 0x0006 (0x0001) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCPlayerAchievementProcessor.EventSubscribeInfo
// 0x000C
struct FEventSubscribeInfo
{
	TArray< struct FProcessorSubscriptionInfo >        ProcessorIndices;                                 		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPlayersInZone.TeamEntry
// 0x0010
struct FTeamEntry
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class ACCInstancePawn* >                   TeamPawns;                                        		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPlayerStats.PlayerScore
// 0x000C
struct FPlayerScore
{
	int                                                Score;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ScoreType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              ScoreTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_Grenade.ReflectionSoundInfo
// 0x0018
struct FReflectionSoundInfo
{
	class USoundCue*                                   TheSound;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     SoundLocation;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              SoundVolumeModifier;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ChangesCounter;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_AbilityGrenade.CCAbilityZoneDesc
// 0x0024
struct FCCAbilityZoneDesc
{
	struct FName                                       AbilityName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoIntersectionTrace : 1;                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      EndAffectOnExitOrZoneDespawn : 1;                 		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      NoEndAffectOnEndOfLifeTime : 1;                   		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UParticleSystem*                             PSTemplate;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MarkerType;                                       		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTransferProjectileLight : 1;                     		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCProj_Rocket.ClientMyVelocityPhysicsInfo
// 0x000C
struct FClientMyVelocityPhysicsInfo
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      TheState;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
	float                                              StartClientTimeStamp;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_Rocket.FlyRayInfo
// 0x0020
struct FFlyRayInfo
{
	struct FVector                                     FlyRayLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     FlyRayDirection;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              LocationToFlyRayNormalSpeedPerc;                  		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              LocationToFlyRayTangensialSpeedPerc;              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_Rocket.MyVelocityPhysicsInfo
// 0x003C
struct FMyVelocityPhysicsInfo
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartServerTimeStamp;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      TheState;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FFlyRayInfo                                 FlyRayInfoStruct;                                 		// 0x000C (0x0020) [0x0000000000000000]              
	float                                              UserStartServerPhysicsTime;                       		// 0x002C (0x0004) [0x0000000000000000]              
	struct FVector                                     UserStartLocation;                                		// 0x0030 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketAI_Geometry.CollisionAvoidanceInfo
// 0x0044
struct FCollisionAvoidanceInfo
{
	struct FVector                                     WantedLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     WantedDirection;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     WantedVelocity;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
	unsigned long                                      bUseWantedVelocityTargetLoc : 1;                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     WantedVelocityTargetLoc;                          		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              WantedTime;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              MaxAvoidanceAngle;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                EmpiricIterationsDone;                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                EmpiricIterationsLeft;                            		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketAI_Homing.MainGoalEntryInfo
// 0x000C
struct FMainGoalEntryInfo
{
	class ACCInstancePawn*                             P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Rockets;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketAI_Homing.MainGoalInfo
// 0x000C
struct FMainGoalInfo
{
	TArray< struct FMainGoalEntryInfo >                Entries;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketSimulationReceiver.SplineSimulationRTInfo
// 0x0040
struct FSplineSimulationRTInfo
{
	struct FInterpolationSpline                        Spline;                                           		// 0x0000 (0x0038) [0x0000000000000000]              
	unsigned long                                      SplineInitialized : 1;                            		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SplineInitializedTimeStampOffset;                 		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketSimulationReceiver.EnemyHuntSimulationRTInfo
// 0x0040
struct FEnemyHuntSimulationRTInfo
{
	struct FInterpolationSpline                        EnemySpline;                                      		// 0x0000 (0x0038) [0x0000000000000000]              
	unsigned long                                      EnemySplineInitialized : 1;                       		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              EnemySplineInitializedTimeStampOffset;            		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCProj_SpiralRocketSimulationReceiver.SimulationEntry
// 0x00E8
struct FSimulationEntry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      EntryType;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bPendingFinished : 1;                             		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSplineSimulationInfo                       SplineInfoStruct;                                 		// 0x000C (0x0034) [0x0000000000000000]              
	struct FSplineSimulationRTInfo                     SplineRTInfoStruct;                               		// 0x0040 (0x0040) [0x0000000000000000]              
	struct FEnemyHuntSimulationInfo                    EnemyInfoStruct;                                  		// 0x0080 (0x0028) [0x0000000000000000]              
	struct FEnemyHuntSimulationRTInfo                  EnemyRTInfoStruct;                                		// 0x00A8 (0x0040) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCPSO_LinearPendulum.LinearLimits
// 0x000C
struct FLinearLimits
{
	struct FVector                                     Limits;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPSO_LinearPendulum.LinearPendulumSetupInfo
// 0x003C
struct FLinearPendulumSetupInfo
{
	struct FVector                                     Gravity;                                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringForceMin;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringForceMax;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringForceRadiusMin;                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringForceToDistancePower;                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Friction;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrictionVelocityFactorMin;                        		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrictionVelocityFactorMax;                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrictionVelocityFactorVelocityMin;                		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrictionVelocityFactorVelocityMax;                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearLimits                               Limits;                                           		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPSO_LinearPendulum.LinearPendulumRuntimeInfo
// 0x0018
struct FLinearPendulumRuntimeInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCPSO_MathPendulum.PendulumLimits
// 0x001C
struct FPendulumLimits
{
	struct FVector                                     Limit1;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Limit2;                                           		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DrawDebugLength;                                  		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCPSO_MathPendulum.PendulumSetupInfo
// 0x0028
struct FPendulumSetupInfo
{
	float                                              Length;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Gravity;                                          		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Friction;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrictionVelocityFactorMin;                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FrictionVelocityFactorVelocity;                   		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPendulumLimits >                   Limits;                                           		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCPSO_MathPendulum.PendulumRuntimeInfo
// 0x0018
struct FPendulumRuntimeInfo
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCQuickStatsBase.PerFrameEntry
// 0x0014
struct FPerFrameEntry
{
	float                                              FrameTimeStamp;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValueAccumulator;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumValues;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ValueMin;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ValueMax;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCQuickStatsBase.StatsEntry
// 0x0018
struct FStatsEntry
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPerFrameEntry >                    PerFrameEntries;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRandomAnimationSet.AnimationEntry
// 0x000C
struct FAnimationEntry
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Probability;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRandomAnimationSet.AnimationGroupLeaveEntry
// 0x000C
struct FAnimationGroupLeaveEntry
{
	struct FName                                       NewGroupTag;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Probability;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRandomAnimationSet.AnimationGroupEntry
// 0x0028
struct FAnimationGroupEntry
{
	struct FName                                       GroupTag;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAnimationEntry >                   AnimationEntries;                                 		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              GroupLeaveProbability;                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAnimationGroupLeaveEntry >         GroupLeaveEntries;                                		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bChangeMirroringOnLeave : 1;                      		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRandomAnimationSet.TriangleBlendAnimInfoEntry
// 0x0010
struct FTriangleBlendAnimInfoEntry
{
	struct FName                                       FromAnimName;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ToAnimName;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCRandomAnimationSet.TriangleBlendInfoEntry
// 0x0030
struct FTriangleBlendInfoEntry
{
	struct FStreamAnimBlendInfo                        TriangleBlendInfo;                                		// 0x0000 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTriangleBlendAnimInfoEntry >       AnimInfoEntries;                                  		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCRealmNotificationParameters.RealmNotificationParameter
// 0x0014
struct FRealmNotificationParameter
{
	struct FString                                     ParameterName;                                    		// 0x0000 (0x000C) [0x0000000000101002]              ( CPF_Const | CPF_Native )
	unsigned char                                      ValueType;                                        		// 0x000C (0x0001) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    ValueData;                                        		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct CrimeCraft.CCRemoteControllerMover.CharacterLocation
// 0x0020
struct FCharacterLocation
{
	float                                              LastTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     pos;                                              		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Vel;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCReplicationStats.FieldReplicationStats
// 0x0030
struct FFieldReplicationStats
{
	struct FName                                       FieldName;                                        		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     FieldFriendlyName;                                		// 0x0008 (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                TotalSize;                                        		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumReplications;                                  		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NumReliableReplications;                          		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                FieldSize;                                        		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BitsPerSecond;                                    		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ReplicationsPerSecond;                            		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FramesPerReplication;                             		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCReplicationStats.ActorReplicationStats
// 0x00F8
struct FActorReplicationStats
{
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0000 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCReplicationStats.ActorReplicationStats.InVariables
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x003C (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCReplicationStats.ActorReplicationStats.OutVariables
	unsigned char                                      UnknownData02[ 0x3C ];                            		// 0x0078 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCReplicationStats.ActorReplicationStats.InFunctions
	unsigned char                                      UnknownData03[ 0x3C ];                            		// 0x00B4 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCReplicationStats.ActorReplicationStats.OutFunctions
	int                                                TotalSize;                                        		// 0x00F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BitsPerSecond;                                    		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCReplicationStats.ActorGroupReplicationStats
// 0x0200
struct FActorGroupReplicationStats
{
	struct FName                                       ActorClassName;                                   		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FActorReplicationStats                      LocalActorsStats;                                 		// 0x0008 (0x00F8) [0x0000000000002000]              ( CPF_Transient )
	struct FActorReplicationStats                      NonLocalActorsStats;                              		// 0x0100 (0x00F8) [0x0000000000002000]              ( CPF_Transient )
	int                                                TotalSize;                                        		// 0x01F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BitsPerSecond;                                    		// 0x01FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCReplicationStats.AllActorsReplicationStats
// 0x0044
struct FAllActorsReplicationStats
{
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0000 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCReplicationStats.AllActorsReplicationStats.Actors
	int                                                TotalSize;                                        		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BitsPerSecond;                                    		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.CCROBGameInfo.LastROBStruct
// 0x0008
struct FLastROBStruct
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSharedNames.KeySynonim
// 0x0018
struct FKeySynonim
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KeyName_Short;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshDynamicDiffStore.SkeletalMeshDDEntry
// 0x0010
struct FSkeletalMeshDDEntry
{
	struct FString                                     DynamicDiffPath;                                  		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class USkeletalMeshDynamicDiff*                    DynamicDiff;                                      		// 0x000C (0x0004) [0x0000000004000003]              ( CPF_Edit | CPF_Const | CPF_EditInline )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshDynamicDiffStore.SkeletalMeshEntry
// 0x0054
struct FSkeletalMeshEntry
{
	struct FString                                     SkelMeshName;                                     		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSkeletalMeshDDEntry >              DDEntries;                                        		// 0x000C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0018 (0x003C) UNKNOWN PROPERTY: MapProperty CrimeCraft.CCSkeletalMeshDynamicDiffStore.SkeletalMeshEntry.DDRequesters
};

// ScriptStruct CrimeCraft.CCSkeletalMeshDynamicDiffStore.PerGibDiffStatsEntry
// 0x0010
struct FPerGibDiffStatsEntry
{
	struct FString                                     GibDiffName;                                      		// 0x0000 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	int                                                STAT_DiffSize;                                    		// 0x000C (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshDynamicDiffStore.PerPackageDiffStatsEntry
// 0x0018
struct FPerPackageDiffStatsEntry
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FPerGibDiffStatsEntry >             PerGibDiffStats;                                  		// 0x000C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSkeletalMeshDynamicDiffStore.DiffStoreStats
// 0x0018
struct FDiffStoreStats
{
	TArray< struct FPerGibDiffStatsEntry >             PerGibDiffStats;                                  		// 0x0000 (0x000C) [0x0000000000420041]              ( CPF_Edit | CPF_EditConstArray | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FPerPackageDiffStatsEntry >         PerPackageDiffStats;                              		// 0x000C (0x000C) [0x0000000000420041]              ( CPF_Edit | CPF_EditConstArray | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSmoothSpecProxy.SSP_PositionInfo
// 0x0020
struct FSSP_PositionInfo
{
	struct FVector                                     TheLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned long                                      bRelativeLocation : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FRotator                                    TheRotation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              TheFloatParam;                                    		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSmoothSpecProxy.SSP_Entry
// 0x0024
struct FSSP_Entry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FSSP_PositionInfo                           ThePos;                                           		// 0x0004 (0x0020) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSmoothSpecProxy.EntryTypeHolder
// 0x0010
struct FEntryTypeHolder
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FSSP_Entry >                        Entries;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSmoothSpecProxy.ite_entry
// 0x0054
struct Fite_entry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FInstantTraceEffects_RPC_Info               ite_infostruct;                                   		// 0x0004 (0x0050) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSmoothSpecProxy.pfe_entry
// 0x000C
struct Fpfe_entry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ACCWeaponAttachment*                         pfe_wa;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                pfe_shotflags;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSmoothSpecProxy.plthi_entry
// 0x0050
struct Fplthi_entry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ACCInstancePawn*                             plthi_pawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FMergedTakeHitInfo                          plthi_infostruct;                                 		// 0x0008 (0x0048) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSmoothSpecProxy.var_entry
// 0x0018
struct Fvar_entry
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       VarName;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     VarValue;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSoundSystem.Entry
// 0x0010
struct FEntry
{
	struct FName                                       BlockTag;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      BelongsToActor;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	class UCCSoundSystemBlock*                         TheBlock;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSoundSystem.Limitor
// 0x0008
struct FLimitor
{
	int                                                Priority;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MaxCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSpiralRocketReplicationProxy.IncomingRPCEntry
// 0x00AC
struct FIncomingRPCEntry
{
	float                                              EntryTimeStamp;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPendingDelete : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SimulationID;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class ACCProj_SpiralRocketSimulationReceiver*      ResolvedSimulation;                               		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDispatched : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      RPCType;                                          		// 0x0014 (0x0001) [0x0000000000000000]              
	float                                              RocketPhysicsTimeStamp;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FSplineSimulationInfo                       SSI1;                                             		// 0x001C (0x0034) [0x0000000000000000]              
	struct FSplineSimulationInfo                       SSI2;                                             		// 0x0050 (0x0034) [0x0000000000000000]              
	struct FEnemyHuntSimulationInfo                    EHSI;                                             		// 0x0084 (0x0028) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSpreadPreset.MainPointInfo
// 0x0008
struct FMainPointInfo
{
	float                                              Angle;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Step;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSpreadPreset.FullMainPointInfo
// 0x0010
struct FFullMainPointInfo
{
	struct FMainPointInfo                              Min;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FMainPointInfo                              Max;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSpreadPreset.AdditionalPointInfo
// 0x0008
struct FAdditionalPointInfo
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCStoreBase.EntryStruct
// 0x0010
struct FEntryStruct
{
	struct FString                                     PresetName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UCCStoredPresetBase*                         Preset;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSpreadProcessor.TriangleInfo
// 0x0024
struct FTriangleInfo
{
	struct FVector                                     v1;                                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     v2;                                               		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     v3;                                               		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCStaticGibManagerStore.StoreEntry
// 0x000C
struct FStoreEntry
{
	class UCCStaticGibManager*                         StaticGibManager;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SkeletalMeshName;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSurvivalWaveInfo.WaveDesc
// 0x0010
struct FWaveDesc
{
	int                                                delay;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     UniqueMessage;                                    		// 0x0004 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerClient.ActionInputCache
// 0x0020
struct FActionInputCache
{
	unsigned long                                      bPressed : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     NewParameterValue;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPrevPressed : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSimpleWTD : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     SimpleWTDNewParameterValue;                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerClientSyncer.RequestDataInfo
// 0x0004
struct FRequestDataInfo
{
	int                                                Data;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerClientSyncer.RequestEntry
// 0x000C
struct FRequestEntry
{
	int                                                RequestID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FRequestDataInfo                            RequestDataInfoStruct;                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerServer.DoUpdateActionsDelayedTask
// 0x0018
struct FDoUpdateActionsDelayedTask
{
	unsigned char                                      Task;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ActionID;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	struct FSyncTransactionInfo                        SyncTransactionInfoStruct;                        		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BoolParam : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.CCSZ_ActionManagerServer.IncomeBlockingInfo
// 0x0010
struct FIncomeBlockingInfo
{
	unsigned long                                      bBlocked : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                UnblockingID;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeOut;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              TimeLeft;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCTurretBase.TurretFireInfo
// 0x0019
struct FTurretFireInfo
{
	struct FVector                                     StartTrace;                                       		// 0x0000 (0x000C) [0x0000000000100000]              
	struct FVector                                     EndTrace;                                         		// 0x000C (0x000C) [0x0000000000100000]              
	unsigned char                                      ReplicationHack;                                  		// 0x0018 (0x0001) [0x0000000000100000]              
};

// ScriptStruct CrimeCraft.CCUIHudPopupManager.StackedPopup
// 0x0014
struct FStackedPopup
{
	class UUIHudBasePopupMenu*                         PopupInstance;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsPendingForDeath : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      KillReason;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      IsOnScreen : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TimePassed;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCUIHudPopupManager.PopupStackByClass
// 0x0014
struct FPopupStackByClass
{
	class UClass*                                      PopupClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIHudBasePopupMenu*                         PopupTemplate;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FStackedPopup >                     StackedPopups;                                    		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCVipInteractionalStripGirlDance.VI_GroupElement
// 0x000C
struct FVI_GroupElement
{
	unsigned long                                      bDontUseIt : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UCCStripGirlDance*                           DanceRef;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsInitial : 1;                                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCVipInteractionalStripGirlDance.VI_Group
// 0x0018
struct FVI_Group
{
	struct FName                                       GroupName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FVI_GroupElement >                  GroupElements;                                    		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUndressing : 1;                                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCVipInteractionalStripGirlDancePlayer.TransitionDynamicInfo
// 0x0058
struct FTransitionDynamicInfo
{
	unsigned char                                      TransitionAction;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                GroupIndex;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ElementIndex;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FCharacterVisualDescription                 NewVisual;                                        		// 0x000C (0x004C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCVipInteractionalStripGirlDancePlayer.ActivePlayingDynamicInfo
// 0x0008
struct FActivePlayingDynamicInfo
{
	int                                                GroupIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ElementIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCVoiceSettings.AbilityVoiceSettingEntry
// 0x0010
struct FAbilityVoiceSettingEntry
{
	struct FName                                       EntryTag;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVoiceSettingEntry                          Settings;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.CCWeaponAttachmentPresetStore.WeaponAttachmentPresetData
// 0x0010
struct FWeaponAttachmentPresetData
{
	class UCCWeaponAttachmentPreset*                   Preset;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PresetName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.CCWeaponRecoilPreset.RecoilBound
// 0x000C
struct FRecoilBound
{
	float                                              Left;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Right;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Top;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponRecoilPreset.RecoilRule
// 0x0020
struct FRecoilRule
{
	int                                                Shots;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FRecoilBound                                Bound;                                            		// 0x0004 (0x000C) [0x0000000000000000]              
	float                                              Angle;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Step;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              RoundRuleRadius;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RoundRuleRadiusShots;                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.CCWeaponRecoilPreset.FullRecoilRule
// 0x0044
struct FFullRecoilRule
{
	unsigned long                                      bUseRoundRule : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAntiCheatRoundRule : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FRecoilRule                                 Min;                                              		// 0x0004 (0x0020) [0x0000000000000000]              
	struct FRecoilRule                                 Max;                                              		// 0x0024 (0x0020) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.FurniturePresets.SColorPresets
// 0x000C
struct FSColorPresets
{
	TArray< struct FLinearColor >                      Colors;                                           		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.FurniturePresets.MaterialParameterSpec
// 0x0025
struct FMaterialParameterSpec
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                Materials;                                        		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCreateInstance : 1;                              		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0024 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.FurniturePresets.FurnitureMaterialCategory
// 0x0018
struct FFurnitureMaterialCategory
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMaterialParameterSpec >            Params;                                           		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.FurniturePresets.ClubTemplate
// 0x0070
struct FClubTemplate
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CommandLine;                                      		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LoadingScreen;                                    		// 0x0018 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                BaseCost;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FClubZone >                         Zones;                                            		// 0x0028 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UMaterialInstance* >                 ClanLogoMtl;                                      		// 0x0034 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ClanLogoTextureParam;                             		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ClanLogoColorParam;                               		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FBox                                        InteractionBBox;                                  		// 0x0050 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	int                                                FloorCount;                                       		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.FurniturePresets.EventValue
// 0x0028
struct FEventValue
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  Icon2D;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHideColors : 1;                                  		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.FurniturePresets.EventColor
// 0x0024
struct FEventColor
{
	TArray< class UMaterialInstance* >                 Materials;                                        		// 0x0000 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     UIName;                                           		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ColorPalette;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.FurniturePresets.EventTemplate
// 0x0061
struct FEventTemplate
{
	struct FString                                     UIName;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  Icon2D;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                BaseCost;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEventValue >                       Values;                                           		// 0x0024 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FEventColor >                       Colors;                                           		// 0x0030 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ParentEventIndex;                                 		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ParentEventValue;                                 		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bVip : 1;                                         		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FBox >                              CollisionBoxes;                                   		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     CollidedMovePoint;                                		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.FurniturePresets.ClubItemAttributeCost
// 0x0008
struct FClubItemAttributeCost
{
	unsigned char                                      AttributeId;                                      		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.FurniturePresets.FurniturePresetCategory
// 0x0010
struct FFurniturePresetCategory
{
	struct FString                                     ShortName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      IsActive : 1;                                     		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.InstanceIcons.InstanceIconData
// 0x0020
struct FInstanceIconData
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2D*                                  Texture;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              U;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              V;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              UL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              VL;                                               		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              TrsnsitionTime;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              TransitionData;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.SeqAct_GetController.ControllerInfo
// 0x0008
struct FControllerInfo
{
	class AController*                                 PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              RemainingTime;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.SpawnObjectsStorage.PlacedObject
// 0x0018
struct FPlacedObject
{
	int                                                ObjId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PresetId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      ObjReference;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Row;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Col;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.TakeHitSpeedModifierSystem.THSMSEntry
// 0x0020
struct FTHSMSEntry
{
	struct FVector                                     ToCauser;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Modifier;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              LifeTimePower;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              LifeTimeLeft;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPendingDelete : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.Tutorial.ItemSlotHintInfo
// 0x0010
struct FItemSlotHintInfo
{
	unsigned long                                      Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SlotIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIItemGrid*                                 Grid;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIMessageBoxEx*                             mbox;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.Tutorial.AbilityHintInfo
// 0x0010
struct FAbilityHintInfo
{
	unsigned long                                      Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UUIMessageBoxEx*                             mbox;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIMessageBoxEx*                             mbox2;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SlotIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.TutorialActionAbilityHint.AbilityHintInfo2
// 0x0010
struct FAbilityHintInfo2
{
	unsigned long                                      Enable : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UUIMessageBoxEx*                             mbox;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUIMessageBoxEx*                             mbox2;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SlotIndex;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.TutorialEventCheckConditions.TutorialCondition
// 0x0028
struct FTutorialCondition
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param1;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param2;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Param3;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      Params;                                           		// 0x0010 (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Alias;                                            		// 0x001C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIBaseSensor.PresentedElementA
// 0x0088
struct FPresentedElementA
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     world_position;                                   		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     world_bone_location;                              		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     UserName;                                         		// 0x002C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ClanLogoId;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                TrackingState;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              MarkingAlpha;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHUDMarkingEnable : 1;                            		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRadarMarkingEnable : 1;                          		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RenderPriority;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                __InternalCounter;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FString                                     UserDescription;                                  		// 0x0064 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                DiffuseColor;                                     		// 0x0070 (0x0010) [0x0000000000100000]              
	float                                              fMaxMarkingDistance;                              		// 0x0080 (0x0004) [0x0000000000100000]              
	unsigned long                                      bDrawClamped : 1;                                 		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIBaseSensor.ClampedPresentedElementA
// 0x0000(0x0088 - 0x0088)
struct FClampedPresentedElementA : FPresentedElementA
{
};

// ScriptStruct CrimeCraft.UIBaseSensor.OrientedPresentedElementA
// 0x0000(0x0088 - 0x0088)
struct FOrientedPresentedElementA : FPresentedElementA
{
};

// ScriptStruct CrimeCraft.UIActorDamageSensor.PresentedElementDamageIndicator
// 0x0020(0x00A8 - 0x0088)
struct FPresentedElementDamageIndicator : FPresentedElementA
{
	float                                              ImpactDamage;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                ImpactShotFlags;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              ScaleCoef;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	float                                              MoveUpCoef;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      Replication;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
	struct FVector                                     XTend;                                            		// 0x009C (0x000C) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIBaseMenu_Craft.CraftAbilitiesData
// 0x0030
struct FCraftAbilitiesData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NameStyleId;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ValueStyleId;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                AbilityId;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                TargetItemTemplateId;                             		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      AbilityUsefulness;                                		// 0x0028 (0x0001) [0x0000000000000000]              
	int                                                ProfessionLevel;                                  		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIBaseMenu_Craft.ProgressSpecialization
// 0x0020
struct FProgressSpecialization
{
	class UUIPanel*                                    Panel_Specialization;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUITooltipCaster*                            TooltipCaster_Specialization;                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUICCMultiStylePanel*                        MSPanel_PathFromParent;                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUICCMultiStylePanel*                        MSPanel_SpecializationState;                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UUIImage*                                    Image_SpecializationIcon;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class UUIImage*                                    Image_SelectedBackground;                         		// 0x0014 (0x0004) [0x0000000000000000]              
	class UUIButton*                                   Button_Specialization;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                SpecializationId;                                 		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIBaseMenu_Craft.ProgressProfession
// 0x0024
struct FProgressProfession
{
	class UUIPanel*                                    Panel_Profession;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class UUIProgressBar* >                    Progress_Profession;                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUILabel*                                    Label_Progress;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FProgressSpecialization >           Specializations;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ProfessionId;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIBuffPanel.AbilityBuffSlot
// 0x0030
struct FAbilityBuffSlot
{
	unsigned char                                      State;                                            		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCCAbility*                                  Ability;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AffectTime;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Resource2D;                                       		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaterialIndexProxy;                               		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     DebugString;                                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIBuffPanel.AMaterialInstanceConstantProxy
// 0x0010
struct FAMaterialInstanceConstantProxy
{
	int                                                refcount;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   MaterialInst[ 0x3 ];                              		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UICalendar.DateDescription
// 0x0008
struct FDateDescription
{
	int                                                DateId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EventId;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UICalendar.CellStyle
// 0x0008
struct FCellStyle
{
	class UUIComp_DrawImage*                           BackgroundComponent;                              		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUIComp_DrawString*                          StringComponent;                                  		// 0x0004 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct CrimeCraft.UICarousel.PositionInfo
// 0x0044
struct FPositionInfo
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Size;                                             		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              AspectRatio;                                      		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     InternalZonePosition;                             		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     InternalZoneSize;                                 		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Opacity;                                          		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HighlightParameter;                               		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseBrightness;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDbgTopmost : 1;                                  		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UICarousel.ContentItem
// 0x000C
struct FContentItem
{
	class UTexture*                                    TheTexture;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserData;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                UserData1;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICarousel.EntryInfo
// 0x0010
struct FEntryInfo
{
	int                                                ElementIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ResourceIndex;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FloatPosition;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHighlight : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UICharMenu_PaperDoll.StatCategory
// 0x0018
struct UUICharMenu_PaperDoll_FStatCategory
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Attributes;                                       		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UICharMenu_PaperDoll.StatisticsCategoryPresentation
// 0x0014
struct UUICharMenu_PaperDoll_FStatisticsCategoryPresentation
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OrderId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_PaperDoll.BasicCounterPresentation
// 0x0038
struct UUICharMenu_PaperDoll_FBasicCounterPresentation
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ResourceTag;                                      		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PairId;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                OrderId;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                DisplayType;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              PairValue;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UICharMenu_PaperDoll.AppearanceViewD
// 0x0018
struct UUICharMenu_PaperDoll_FAppearanceViewD
{
	float                                              UniformScaleMin;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UniformScaleMax;                                  		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UniformScale;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Translation;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UICharMenu_PaperDoll.WpnChar
// 0x0010
struct FWpnChar
{
	struct FString                                     symbol;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIFurniture_Tooltip.FurnitureTooltipDesc
// 0x0038
struct FFurnitureTooltipDesc
{
	struct FString                                     fName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     fDesc;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                fCost;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< struct FClubItemAttribute >                fAttributes;                                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture*                                    Icon2D;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	TArray< struct FLinearColor >                      Colors;                                           		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UITemplateEventValue_Tooltip.TemplateEventValueTooltipDesc
// 0x0014
struct FTemplateEventValueTooltipDesc
{
	struct FString                                     ValueName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture*                                    ValueIcon;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class UTexture*                                    ValuePreview;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIClubCustomization.DancerPresetInfo
// 0x0018
struct UUIClubCustomization_FDancerPresetInfo
{
	int                                                VisualId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HatIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                UpperClothesIndex;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LowerClothesIndex;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ShoesIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIFurnitureGrid.ZoneInffo
// 0x0018
struct FZoneInffo
{
	int                                                ZoneTypeId;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneStartRow;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneHeight;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneStartColumn;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneWidth;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneStyleIndex;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIClubCustomization.PickState
// 0x0004
struct FPickState
{
	int                                                PresetId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIClubCustomization.PlaceState
// 0x000C
struct FPlaceState
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PresetId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIClubCustomization.EditState
// 0x000C
struct FEditState
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PresetId;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIClubCustomization.ItemModification
// 0x0014
struct FItemModification
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PresetIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FClubItemAttribute >                ChangedAttributes;                                		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIClubCustomization.EventColorChange
// 0x000C
struct FEventColorChange
{
	int                                                EventTemplateIndex;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                EventPalleteIndex;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EventColorIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIClubCustomization.ClubChanges
// 0x0078
struct FClubChanges
{
	TArray< int >                                      AddedItems;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      deletedItems;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MovedToDepot;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PlacedFromDepot;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      OriginalItems;                                    		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      OriginalItemPresets;                              		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemModification >                 ChangedItems;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEventTemplateChange >              OriginalEventValues;                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEventTemplateChange >              ChangedEventValues;                               		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEventColorChange >                 ChangedEventColors;                               		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIFurnitureGrid.ItemPlace
// 0x0048
struct FItemPlace
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemPresetId;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartRow;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StartCol;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Width;                                            		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Yaw;                                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FFdir;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FFdir2;                                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  Icon2D;                                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         TextCoords;                                       		// 0x0028 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   IconMaterial;                                     		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDisabledObject : 1;                              		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPurchasedObject : 1;                             		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FIntPoint                                   FixedSize;                                        		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIFurnitureGrid.MarkerInfo
// 0x0020
struct FMarkerInfo
{
	int                                                MarkerStartOffsetRow;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MarkerHeight;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MarkerStartOffsetColumn;                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MarkerWidth;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  MarkerIcon;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      AllowedZoneTypes;                                 		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIFurnitureGrid.CellInfo
// 0x0014
struct FCellInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ZoneId;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ItemId;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CellState;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInactiveCell : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPurchasedObject : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIClubSubmitChanges.ClubSubmitChanges
// 0x0034
struct FClubSubmitChanges
{
	TArray< int >                                      DeletedItemsIds;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RemovedItemsIds;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FClubItem >                         AddedItems;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FClubItemChanges >                  ChangesInItems;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Cost;                                             		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIComp_ProgressArcElementPresenter.Segment
// 0x0020
struct FSegment
{
	struct FVector2D                                   segment_start;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   segment_end;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   uv_start;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   uv_end;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIFramePlane.PanelSize
// 0x0008
struct FPanelSize
{
	float                                              LeftSize;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RightSize;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIHudCrosshair.CrosshairElement
// 0x0028
struct FCrosshairElement
{
	unsigned long                                      bMovable : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Bounds[ 0x4 ];                                    		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              MovablePointOffset;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              X;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              TargetX;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TargetY;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIHudDamageIndicator.HudDamageInfo
// 0x0028
struct FHudDamageInfo
{
	float                                              FadeDelta;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamageIntensity;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     AttackerLocation;                                 		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	int                                                AttackerID;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DamageMaterialInst;                               		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.UIHudIndicator.IndicatorStateDesc
// 0x000C
struct FIndicatorStateDesc
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   MaterialInst;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TransitionDelta;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIInstanceCTZSensor.PrezentedElementCTZ
// 0x0000(0x0088 - 0x0088)
struct FPrezentedElementCTZ : FPresentedElementA
{
};

// ScriptStruct CrimeCraft.UIItemsDirector.AllowedOperationsInContainer
// 0x0010
struct FAllowedOperationsInContainer
{
	unsigned char                                      ContainerType;                                    		// 0x0000 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            AllowedOperations;                                		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UILobbySensor.LobbyPresentedElementA
// 0x0034(0x00BC - 0x0088)
struct FLobbyPresentedElementA : FPresentedElementA
{
	unsigned char                                      MinorType;                                        		// 0x0088 (0x0001) [0x0000000000000000]              
	unsigned char                                      HighType;                                         		// 0x0089 (0x0001) [0x0000000000000000]              
	unsigned long                                      AlwaysVisible : 1;                                		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      DrawOrientated : 1;                               		// 0x008C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      ItemSelected : 1;                                 		// 0x008C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      TrackingState;                                    		// 0x0090 (0x0001) [0x0000000000000000]              
	unsigned long                                      bOverridedColor : 1;                              		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                MarkingTextColor;                                 		// 0x0098 (0x0010) [0x0000000000000000]              
	unsigned long                                      bOverrideClanColor : 1;                           		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                MarkingClanTextColor;                             		// 0x00AC (0x0010) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIMenu_TabChat.ChatTab
// 0x0030
struct FChatTab
{
	class UUIImage*                                    TabBackgroud;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	class UUIToggleButton*                             ToggleButton;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class UUILabel*                                    InfoLabel;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    TabPage;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UUIPanel*                                    EmptyLabelPanel;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	class UUIButton*                                   AcceptButton;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	class UUIButton*                                   RejectButton;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	class UUIButton*                                   CloseButton;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTabHidden : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowIcon : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseAutoClose : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FScriptDelegate                             AddMessages;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIMenu_TabChat.EmoteItem
// 0x0018
struct FEmoteItem
{
	struct FString                                     Caption;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIPlacableItemSensor.PlaceablePresentedElementA
// 0x000C(0x0094 - 0x0088)
struct FPlaceablePresentedElementA : FPresentedElementA
{
	float                                              RadarPlain;                                       		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              MarkerMinHeight;                                  		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              LinearAlphaComponent;                             		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIPlacableItemSensorCTZ.PlaceablePresentedElementCTZ
// 0x0018(0x00AC - 0x0094)
struct FPlaceablePresentedElementCTZ : FPlaceablePresentedElementA
{
	float                                              Progress;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                Color;                                            		// 0x0098 (0x0010) [0x0000000000000000]              
	class UTexture*                                    PointTexture;                                     		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIPlacableItemSensorOrientated.PresentedElementAOrientated
// 0x0000(0x0088 - 0x0088)
struct FPresentedElementAOrientated : FPresentedElementA
{
};

// ScriptStruct CrimeCraft.UIPlacableItemSensorSND.PlaceablePresentedElementSND
// 0x0018(0x00AC - 0x0094)
struct FPlaceablePresentedElementSND : FPlaceablePresentedElementA
{
	float                                              Progress;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                Color;                                            		// 0x0098 (0x0010) [0x0000000000000000]              
	class UTexture*                                    PointTexture;                                     		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIPointBar.CapturePoint
// 0x0034
struct FCapturePoint
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      State;                                            		// 0x000C (0x0001) [0x0000000000000000]              
	float                                              CaptureSpeed;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Progress;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                TeamIndex;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                CaptureTeamIndex;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocked : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMaterialInstanceConstant*                   StateMaterialInst[ 0x4 ];                         		// 0x0024 (0x0010) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.UIPointBarCTZ.CapturePointScore
// 0x0010
struct FCapturePointScore
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PointScore;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSameTeamColor : 1;                               		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIRichLabel.IconSmile
// 0x0020
struct FIconSmile
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FCanvasIcon                                 Icon;                                             		// 0x000C (0x0014) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIRichLabel.FontSmile
// 0x0018
struct FFontSmile
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     SmilesText;                                       		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIRichLabel.ColorTableItem
// 0x001C
struct FColorTableItem
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Value;                                            		// 0x000C (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIRichLabel.ClanLogoNode
// 0x0010
struct FClanLogoNode
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LogoId;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    Texture;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIServiceMenu_Auction.SearchFieldsHistory
// 0x003C
struct FSearchFieldsHistory
{
	int                                                CategoryMainIndex;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CategorySubIndex;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PriceMin;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PriceMax;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LevelMin;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                LevelMax;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Durability;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ClassIndex;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      usable : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ItemName;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SellerName;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIServiceMenu_ClanHallEventManager.CalendarDay
// 0x0010
struct FCalendarDay
{
	int                                                Day;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< int >                                      IdsOfEvents;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIServiceMenu_ClanHallVendor.ClanHallSize
// 0x0008
struct FClanHallSize
{
	class UUILabel*                                    Label_ClanHallSize;                               		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUICheckbox*                                 Checkbox_ClanHallSize;                            		// 0x0004 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CrimeCraft.UIServiceMenu_ClanHallVendor.AvailableClanHall
// 0x0018
struct FAvailableClanHall
{
	int                                                CostCash;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CostGold;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CostType;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LobbyId;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TypeId;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AllowedPaymentMethods;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIServiceMenu_JobsVendor.JobCategory
// 0x0010
struct FJobCategory
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIServiceMenu_JobsVendor.JobTab
// 0x001C
struct FJobTab
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FJobCategory >                      Levels;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIServiceMenu_JobsVendor.TabInfo
// 0x0008
struct FTabInfo
{
	int                                                SelectedCategory;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SelectedJob;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIServiceMenu_JobsVendor.CompleteQuestTask
// 0x0008
struct FCompleteQuestTask
{
	int                                                QuestId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                QuestStep;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIServiceMenu_Mail.MessageProtectionInfo
// 0x0008
struct FMessageProtectionInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bProtected : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UIServiceMenu_MunicipalVendor.TabButtonMV
// 0x0010
struct FTabButtonMV
{
	class UUIToggleButton*                             Button;                                           		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CategorieId;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                SubCategorieId;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TreeId;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UIServiceMenu_PremiumShop.IconInfo
// 0x001C
struct FIconInfo
{
	struct FString                                     TextureName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              U;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              V;                                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              du;                                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              dv;                                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CrimeCraft.UIServiceMenu_PremiumShop.WeaponData
// 0x0080
struct FWeaponData
{
	int                                                ItemId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Attachs[ 0x7 ];                                   		// 0x0004 (0x001C) [0x0000000000000000]              
	int                                                Colors[ 0x7 ];                                    		// 0x0020 (0x001C) [0x0000000000000000]              
	int                                                SlotId[ 0x7 ];                                    		// 0x003C (0x001C) [0x0000000000000000]              
	int                                                SelIndexes[ 0x7 ];                                		// 0x0058 (0x001C) [0x0000000000000000]              
	TArray< int >                                      WMKs;                                             		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UIServiceMenu_VipPorter.DancerPresetInfo
// 0x0018
struct UUIServiceMenu_VipPorter_FDancerPresetInfo
{
	int                                                VisualId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HatIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                UpperClothesIndex;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                LowerClothesIndex;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ShoesIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CrimeCraft.UISpeechBubble.SpeechBubbleData
// 0x003C
struct FSpeechBubbleData
{
	TArray< struct FWrappedStringElement >             Lines;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              ActualSpeechWidth;                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ActualSpeechHeight;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              FadeInTime;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              FadeOutTime;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	float                                              Alpha;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      MarkForDelete : 1;                                		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CrimeCraft.UITextRegion.NodeParagraph
// 0x000C
struct FNodeParagraph
{
	struct FString                                     SubText;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CrimeCraft.UITextRegion.SelectionData
// 0x0010
struct FSelectionData
{
	int                                                row_start;                                        		// 0x0000 (0x0004) [0x0000000000100000]              
	int                                                caret_row_start;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                row_endl;                                         		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                caret_row_endl;                                   		// 0x000C (0x0004) [0x0000000000100000]              
};

// ScriptStruct CrimeCraft.UITreeView.Categorie
// 0x0010
struct FCategorie
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                user_data;                                        		// 0x000C (0x0004) [0x0000000000100000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif