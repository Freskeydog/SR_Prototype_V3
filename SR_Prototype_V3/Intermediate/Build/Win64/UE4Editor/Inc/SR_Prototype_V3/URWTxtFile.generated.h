// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SR_PROTOTYPE_V3_URWTxtFile_generated_h
#error "URWTxtFile.generated.h already included, missing '#pragma once' in URWTxtFile.h"
#endif
#define SR_PROTOTYPE_V3_URWTxtFile_generated_h

#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UURWTxtFile::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UURWTxtFile::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UURWTxtFile::SaveTxt(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTxt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UURWTxtFile::LoadTxt(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	}


#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUURWTxtFile(); \
	friend SR_PROTOTYPE_V3_API class UClass* Z_Construct_UClass_UURWTxtFile(); \
public: \
	DECLARE_CLASS(UURWTxtFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SR_Prototype_V3"), NO_API) \
	DECLARE_SERIALIZER(UURWTxtFile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUURWTxtFile(); \
	friend SR_PROTOTYPE_V3_API class UClass* Z_Construct_UClass_UURWTxtFile(); \
public: \
	DECLARE_CLASS(UURWTxtFile, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SR_Prototype_V3"), NO_API) \
	DECLARE_SERIALIZER(UURWTxtFile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UURWTxtFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UURWTxtFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UURWTxtFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UURWTxtFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UURWTxtFile(UURWTxtFile&&); \
	NO_API UURWTxtFile(const UURWTxtFile&); \
public:


#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UURWTxtFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UURWTxtFile(UURWTxtFile&&); \
	NO_API UURWTxtFile(const UURWTxtFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UURWTxtFile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UURWTxtFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UURWTxtFile)


#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET
#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_12_PROLOG
#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_RPC_WRAPPERS \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_INCLASS \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_PRIVATE_PROPERTY_OFFSET \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_INCLASS_NO_PURE_DECLS \
	SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SR_Prototype_V3_Source_SR_Prototype_V3_Public_URWTxtFile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
