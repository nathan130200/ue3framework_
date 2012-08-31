struct UCanvas_execWorldToScreen_Parms
{
	class FVector                                      WorldLoc;                                        // Offset: 0x0000 Size: 0x000C 
	class FVector                                      ReturnValue;                                     // Offset: 0x000C Size: 0x000C CPF_OutParm CPF_ReturnParm 
};

struct Core_Normalize_Parms
{
	class FRotator                                     Rotation;
	class FRotator                                     RetnRotation;                            
}; //