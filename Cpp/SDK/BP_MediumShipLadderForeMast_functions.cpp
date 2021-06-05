﻿// Name: SoT, Version: 2.1.1

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

// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_MediumShipLadderForeMast_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.GetDockableInfo");

	ABP_MediumShipLadderForeMast_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.Setup Spline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVector>         Positions                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_MediumShipLadderForeMast_C::Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.Setup Spline");

	ABP_MediumShipLadderForeMast_C_Setup_Spline_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Positions != nullptr)
		*Positions = params.Positions;

}


// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_MediumShipLadderForeMast_C::CanInteract(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.CanInteract");

	ABP_MediumShipLadderForeMast_C_CanInteract_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShipLadderForeMast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C.UserConstructionScript");

	ABP_MediumShipLadderForeMast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
