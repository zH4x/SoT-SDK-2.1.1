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

// Function BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo.BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo.BP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_C.UserConstructionScript");

	ABP_msc_hurdygurdy_elb_01_a_v02_ItemInfo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
