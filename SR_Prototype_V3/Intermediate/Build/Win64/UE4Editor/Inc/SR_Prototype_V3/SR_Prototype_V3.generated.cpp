// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SR_Prototype_V3.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SR_Prototype_V3() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();

	SR_PROTOTYPE_V3_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadTxt();
	SR_PROTOTYPE_V3_API class UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveTxt();
	SR_PROTOTYPE_V3_API class UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister();
	SR_PROTOTYPE_V3_API class UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary();
	SR_PROTOTYPE_V3_API class UPackage* Z_Construct_UPackage__Script_SR_Prototype_V3();
	void UMyBlueprintFunctionLibrary::StaticRegisterNativesUMyBlueprintFunctionLibrary()
	{
		UClass* Class = UMyBlueprintFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "LoadTxt", (Native)&UMyBlueprintFunctionLibrary::execLoadTxt },
			{ "SaveTxt", (Native)&UMyBlueprintFunctionLibrary::execSaveTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadTxt()
	{
		struct MyBlueprintFunctionLibrary_eventLoadTxt_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadTxt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(MyBlueprintFunctionLibrary_eventLoadTxt_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MyBlueprintFunctionLibrary_eventLoadTxt_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MyBlueprintFunctionLibrary_eventLoadTxt_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MyBlueprintFunctionLibrary_eventLoadTxt_Parms), sizeof(bool), true);
			UProperty* NewProp_SaveTextA = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveTextA"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SaveTextA, MyBlueprintFunctionLibrary_eventLoadTxt_Parms), 0x0010000000000180);
			UProperty* NewProp_FileNameA = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FileNameA"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FileNameA, MyBlueprintFunctionLibrary_eventLoadTxt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Custom"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("LoadTxt"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveTxt()
	{
		struct MyBlueprintFunctionLibrary_eventSaveTxt_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UMyBlueprintFunctionLibrary();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveTxt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(MyBlueprintFunctionLibrary_eventSaveTxt_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MyBlueprintFunctionLibrary_eventSaveTxt_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MyBlueprintFunctionLibrary_eventSaveTxt_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MyBlueprintFunctionLibrary_eventSaveTxt_Parms), sizeof(bool), true);
			UProperty* NewProp_FileNameB = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FileNameB"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FileNameB, MyBlueprintFunctionLibrary_eventSaveTxt_Parms), 0x0010000000000080);
			UProperty* NewProp_SaveTextB = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveTextB"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SaveTextB, MyBlueprintFunctionLibrary_eventSaveTxt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Custom"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("SaveTxt"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary_NoRegister()
	{
		return UMyBlueprintFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_SR_Prototype_V3();
			OuterClass = UMyBlueprintFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadTxt());
				OuterClass->LinkChild(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveTxt());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_LoadTxt(), "LoadTxt"); // 1202928617
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMyBlueprintFunctionLibrary_SaveTxt(), "SaveTxt"); // 2133498166
				static TCppClassTypeInfo<TCppClassTypeTraits<UMyBlueprintFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyBlueprintFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyBlueprintFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyBlueprintFunctionLibrary, 726250417);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyBlueprintFunctionLibrary(Z_Construct_UClass_UMyBlueprintFunctionLibrary, &UMyBlueprintFunctionLibrary::StaticClass, TEXT("/Script/SR_Prototype_V3"), TEXT("UMyBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBlueprintFunctionLibrary);
	UPackage* Z_Construct_UPackage__Script_SR_Prototype_V3()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/SR_Prototype_V3")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x965D7008;
			Guid.B = 0xB27AB6A7;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
