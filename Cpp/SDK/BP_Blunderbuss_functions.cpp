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

// Function BP_Blunderbuss.BP_Blunderbuss_C.SetScopeEffectOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Blunderbuss_C::SetScopeEffectOn(bool IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.SetScopeEffectOn");

	ABP_Blunderbuss_C_SetScopeEffectOn_Params params;
	params.IsOn = IsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blunderbuss.BP_Blunderbuss_C.determine sfx relationship
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<RareAudio_EEmitterRelationship> Relationship                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Blunderbuss_C::determine_sfx_relationship(TEnumAsByte<RareAudio_EEmitterRelationship>* Relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.determine sfx relationship");

	ABP_Blunderbuss_C_determine_sfx_relationship_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Relationship != nullptr)
		*Relationship = params.Relationship;

}


// Function BP_Blunderbuss.BP_Blunderbuss_C.DoFireEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Blunderbuss_C::DoFireEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.DoFireEffect");

	ABP_Blunderbuss_C_DoFireEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blunderbuss.BP_Blunderbuss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Blunderbuss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.UserConstructionScript");

	ABP_Blunderbuss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blunderbuss.BP_Blunderbuss_C.OnWeaponFired
// (Event, Protected, BlueprintEvent)
void ABP_Blunderbuss_C::OnWeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.OnWeaponFired");

	ABP_Blunderbuss_C_OnWeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOn
// (Event, Protected, BlueprintEvent)
void ABP_Blunderbuss_C::RadialBlurOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOn");

	ABP_Blunderbuss_C_RadialBlurOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOff
// (Event, Protected, BlueprintEvent)
void ABP_Blunderbuss_C::RadialBlurOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.RadialBlurOff");

	ABP_Blunderbuss_C_RadialBlurOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blunderbuss.BP_Blunderbuss_C.ExecuteUbergraph_BP_Blunderbuss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Blunderbuss_C::ExecuteUbergraph_BP_Blunderbuss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blunderbuss.BP_Blunderbuss_C.ExecuteUbergraph_BP_Blunderbuss");

	ABP_Blunderbuss_C_ExecuteUbergraph_BP_Blunderbuss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
