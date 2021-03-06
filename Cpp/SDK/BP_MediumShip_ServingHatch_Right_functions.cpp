// Name: SoT, Version: 2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_MediumShip_ServingHatch_Right_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.GetClosestInteractionPoint");

	ABP_MediumShip_ServingHatch_Right_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShip_ServingHatch_Right_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.UserConstructionScript");

	ABP_MediumShip_ServingHatch_Right_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.OnAnimationStarted
// (Event, Protected, BlueprintEvent)
void ABP_MediumShip_ServingHatch_Right_C::OnAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.OnAnimationStarted");

	ABP_MediumShip_ServingHatch_Right_C_OnAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.OnAnimationCompleted
// (Event, Protected, BlueprintEvent)
void ABP_MediumShip_ServingHatch_Right_C::OnAnimationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.OnAnimationCompleted");

	ABP_MediumShip_ServingHatch_Right_C_OnAnimationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Right
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShip_ServingHatch_Right_C::ExecuteUbergraph_BP_MediumShip_ServingHatch_Right(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Right");

	ABP_MediumShip_ServingHatch_Right_C_ExecuteUbergraph_BP_MediumShip_ServingHatch_Right_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
