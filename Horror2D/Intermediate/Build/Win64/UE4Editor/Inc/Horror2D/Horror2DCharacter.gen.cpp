// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horror2D/Horror2DCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorror2DCharacter() {}
// Cross Module References
	HORROR2D_API UClass* Z_Construct_UClass_AHorror2DCharacter_NoRegister();
	HORROR2D_API UClass* Z_Construct_UClass_AHorror2DCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_Horror2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AHorror2DCharacter::StaticRegisterNativesAHorror2DCharacter()
	{
	}
	UClass* Z_Construct_UClass_AHorror2DCharacter_NoRegister()
	{
		return AHorror2DCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHorror2DCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHorror2DCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Horror2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorror2DCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Horror2DCharacter.h" },
		{ "ModuleRelativePath", "Horror2DCharacter.h" },
		{ "ToolTip", "This class is the default character for Horror2D, and it is responsible for all\nphysical interaction between the player and the world.\n\nThe capsule component (inherited from ACharacter) handles collision with the world\nThe CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule\nThe Sprite component (inherited from APaperCharacter) handles the visuals" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_IdleAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Horror2DCharacter.h" },
		{ "ToolTip", "The animation to play while idle (standing still)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_IdleAnimation = { "IdleAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorror2DCharacter, IdleAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_IdleAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_IdleAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_RunningAnimation_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Horror2DCharacter.h" },
		{ "ToolTip", "The animation to play while running around" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_RunningAnimation = { "RunningAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorror2DCharacter, RunningAnimation), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_RunningAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_RunningAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Horror2DCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorror2DCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Horror2DCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHorror2DCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorror2DCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_IdleAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_RunningAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorror2DCharacter_Statics::NewProp_SideViewCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHorror2DCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorror2DCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHorror2DCharacter_Statics::ClassParams = {
		&AHorror2DCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHorror2DCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHorror2DCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHorror2DCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHorror2DCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHorror2DCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHorror2DCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHorror2DCharacter, 1345097947);
	template<> HORROR2D_API UClass* StaticClass<AHorror2DCharacter>()
	{
		return AHorror2DCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHorror2DCharacter(Z_Construct_UClass_AHorror2DCharacter, &AHorror2DCharacter::StaticClass, TEXT("/Script/Horror2D"), TEXT("AHorror2DCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHorror2DCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
