#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// GameControlScript
struct GameControlScript_t1485596768;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveGroundScript
struct  MoveGroundScript_t2194609165  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MoveGroundScript::_normalizerScaleZ
	float ____normalizerScaleZ_2;
	// UnityEngine.Material MoveGroundScript::_groundMaterial
	Material_t193706927 * ____groundMaterial_3;
	// GameControlScript MoveGroundScript::_gameControlScript
	GameControlScript_t1485596768 * ____gameControlScript_4;

public:
	inline static int32_t get_offset_of__normalizerScaleZ_2() { return static_cast<int32_t>(offsetof(MoveGroundScript_t2194609165, ____normalizerScaleZ_2)); }
	inline float get__normalizerScaleZ_2() const { return ____normalizerScaleZ_2; }
	inline float* get_address_of__normalizerScaleZ_2() { return &____normalizerScaleZ_2; }
	inline void set__normalizerScaleZ_2(float value)
	{
		____normalizerScaleZ_2 = value;
	}

	inline static int32_t get_offset_of__groundMaterial_3() { return static_cast<int32_t>(offsetof(MoveGroundScript_t2194609165, ____groundMaterial_3)); }
	inline Material_t193706927 * get__groundMaterial_3() const { return ____groundMaterial_3; }
	inline Material_t193706927 ** get_address_of__groundMaterial_3() { return &____groundMaterial_3; }
	inline void set__groundMaterial_3(Material_t193706927 * value)
	{
		____groundMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&____groundMaterial_3, value);
	}

	inline static int32_t get_offset_of__gameControlScript_4() { return static_cast<int32_t>(offsetof(MoveGroundScript_t2194609165, ____gameControlScript_4)); }
	inline GameControlScript_t1485596768 * get__gameControlScript_4() const { return ____gameControlScript_4; }
	inline GameControlScript_t1485596768 ** get_address_of__gameControlScript_4() { return &____gameControlScript_4; }
	inline void set__gameControlScript_4(GameControlScript_t1485596768 * value)
	{
		____gameControlScript_4 = value;
		Il2CppCodeGenWriteBarrier(&____gameControlScript_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
