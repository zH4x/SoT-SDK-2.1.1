﻿#pragma once

// Name: SoT, Version: 2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.GetPxActorCapacityForPhysXAggregate
struct ABP_MediumShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.SetupMastControls
struct ABP_MediumShipTemplate_C_SetupMastControls_Params
{
	class UChildActorComponent*                        LeftHoist;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UChildActorComponent*                        RightHoist;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UChildActorComponent*                        LeftAngle;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UChildActorComponent*                        RightAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       RiggingGroupName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.UserConstructionScript
struct ABP_MediumShipTemplate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif