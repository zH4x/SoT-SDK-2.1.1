#pragma once

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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cannon.BP_Cannon_C
// 0x0018 (FullSize[0x0BC0] - InheritedSize[0x0BA8])
class ABP_Cannon_C : public ACannon
{
public:
	class UGroupedInteractableAreaComponent*           GroupedInteractableArea;                                   // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Collision;                                                 // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cannon.BP_Cannon_C");
		return ptr;
	}



	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
