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

	SR_PROTOTYPE_V3_API class UFunction* Z_Construct_UFunction_UURWTxtFile_LoadTxt();
	SR_PROTOTYPE_V3_API class UFunction* Z_Construct_UFunction_UURWTxtFile_SaveTxt();
	SR_PROTOTYPE_V3_API class UClass* Z_Construct_UClass_UURWTxtFile_NoRegister();
	SR_PROTOTYPE_V3_API class UClass* Z_Construct_UClass_UURWTxtFile();
	SR_PROTOTYPE_V3_API class UPackage* Z_Construct_UPackage__Script_SR_Prototype_V3();
	void UURWTxtFile::StaticRegisterNativesUURWTxtFile()
	{
		UClass* Class = UURWTxtFile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "LoadTxt", (Native)&UURWTxtFile::execLoadTxt },
			{ "SaveTxt", (Native)&UURWTxtFile::execSaveTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_UURWTxtFile_LoadTxt()
	{
		struct URWTxtFile_eventLoadTxt_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UURWTxtFile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadTxt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14422401, 65535, sizeof(URWTxtFile_eventLoadTxt_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, URWTxtFile_eventLoadTxt_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, URWTxtFile_eventLoadTxt_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, URWTxtFile_eventLoadTxt_Parms), sizeof(bool), true);
			UProperty* NewProp_SaveTextA = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveTextA"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SaveTextA, URWTxtFile_eventLoadTxt_Parms), 0x0010000000000180);
			UProperty* NewProp_FileNameA = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FileNameA"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FileNameA, URWTxtFile_eventLoadTxt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Custom"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("LoadTxt"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/URWTxtFile.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UURWTxtFile_SaveTxt()
	{
		struct URWTxtFile_eventSaveTxt_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UURWTxtFile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveTxt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(URWTxtFile_eventSaveTxt_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, URWTxtFile_eventSaveTxt_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, URWTxtFile_eventSaveTxt_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, URWTxtFile_eventSaveTxt_Parms), sizeof(bool), true);
			UProperty* NewProp_FileNameB = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FileNameB"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FileNameB, URWTxtFile_eventSaveTxt_Parms), 0x0010000000000080);
			UProperty* NewProp_SaveTextB = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveTextB"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SaveTextB, URWTxtFile_eventSaveTxt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Custom"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("SaveTxt"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/URWTxtFile.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UURWTxtFile_NoRegister()
	{
		return UURWTxtFile::StaticClass();
	}
	UClass* Z_Construct_UClass_UURWTxtFile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_SR_Prototype_V3();
			OuterClass = UURWTxtFile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UURWTxtFile_LoadTxt());
				OuterClass->LinkChild(Z_Construct_UFunction_UURWTxtFile_SaveTxt());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UURWTxtFile_LoadTxt(), "LoadTxt"); // 2040495623
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UURWTxtFile_SaveTxt(), "SaveTxt"); // 1056193124
				static TCppClassTypeInfo<TCppClassTypeTraits<UURWTxtFile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("URWTxtFile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/URWTxtFile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UURWTxtFile, 1563504547);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UURWTxtFile(Z_Construct_UClass_UURWTxtFile, &UURWTxtFile::StaticClass, TEXT("/Script/SR_Prototype_V3"), TEXT("UURWTxtFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UURWTxtFile);
	UPackage* Z_Construct_UPackage__Script_SR_Prototype_V3()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/SR_Prototype_V3")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xB24B6E32;
			Guid.B = 0x48A3D95B;
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
