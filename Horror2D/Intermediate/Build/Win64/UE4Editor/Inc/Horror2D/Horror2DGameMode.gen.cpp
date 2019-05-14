// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horror2D/Horror2DGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorror2DGameMode() {}
// Cross Module References
	HORROR2D_API UClass* Z_Construct_UClass_AHorror2DGameMode_NoRegister();
	HORROR2D_API UClass* Z_Construct_UClass_AHorror2DGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Horror2D();
// End Cross Module References
	void AHorror2DGameMode::StaticRegisterNativesAHorror2DGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHorror2DGameMode_NoRegister()
	{
		return AHorror2DGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHorror2DGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHorror2DGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Horror2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorror2DGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Horror2DGameMode.h" },
		{ "ModuleRelativePath", "Horror2DGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of Horror2DCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHorror2DGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorror2DGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHorror2DGameMode_Statics::ClassParams = {
		&AHorror2DGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AHorror2DGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHorror2DGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHorror2DGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHorror2DGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHorror2DGameMode, 41302225);
	template<> HORROR2D_API UClass* StaticClass<AHorror2DGameMode>()
	{
		return AHorror2DGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHorror2DGameMode(Z_Construct_UClass_AHorror2DGameMode, &AHorror2DGameMode::StaticClass, TEXT("/Script/Horror2D"), TEXT("AHorror2DGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHorror2DGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
