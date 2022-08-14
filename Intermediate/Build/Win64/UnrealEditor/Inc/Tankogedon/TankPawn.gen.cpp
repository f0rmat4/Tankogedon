// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tankogedon/TankPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPawn() {}
// Cross Module References
	TANKOGEDON_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	TANKOGEDON_API UClass* Z_Construct_UClass_ATankPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tankogedon();
// End Cross Module References
	void ATankPawn::StaticRegisterNativesATankPawn()
	{
	}
	UClass* Z_Construct_UClass_ATankPawn_NoRegister()
	{
		return ATankPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATankPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tankogedon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankPawn.h" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPawn_Statics::ClassParams = {
		&ATankPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPawn, 3841327598);
	template<> TANKOGEDON_API UClass* StaticClass<ATankPawn>()
	{
		return ATankPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPawn(Z_Construct_UClass_ATankPawn, &ATankPawn::StaticClass, TEXT("/Script/Tankogedon"), TEXT("ATankPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
