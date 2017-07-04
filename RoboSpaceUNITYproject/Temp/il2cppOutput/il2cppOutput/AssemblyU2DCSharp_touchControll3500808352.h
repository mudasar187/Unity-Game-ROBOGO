#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// touchControll
struct  touchControll_t3500808352  : public MonoBehaviour_t1158329972
{
public:
	// System.Single touchControll::tiltSpeed
	float ___tiltSpeed_2;
	// UnityEngine.GameObject touchControll::shield
	GameObject_t1756533147 * ___shield_3;
	// UnityEngine.GameObject touchControll::shieldSFX
	GameObject_t1756533147 * ___shieldSFX_4;
	// UnityEngine.GameObject touchControll::shieldCooldDown
	GameObject_t1756533147 * ___shieldCooldDown_5;

public:
	inline static int32_t get_offset_of_tiltSpeed_2() { return static_cast<int32_t>(offsetof(touchControll_t3500808352, ___tiltSpeed_2)); }
	inline float get_tiltSpeed_2() const { return ___tiltSpeed_2; }
	inline float* get_address_of_tiltSpeed_2() { return &___tiltSpeed_2; }
	inline void set_tiltSpeed_2(float value)
	{
		___tiltSpeed_2 = value;
	}

	inline static int32_t get_offset_of_shield_3() { return static_cast<int32_t>(offsetof(touchControll_t3500808352, ___shield_3)); }
	inline GameObject_t1756533147 * get_shield_3() const { return ___shield_3; }
	inline GameObject_t1756533147 ** get_address_of_shield_3() { return &___shield_3; }
	inline void set_shield_3(GameObject_t1756533147 * value)
	{
		___shield_3 = value;
		Il2CppCodeGenWriteBarrier(&___shield_3, value);
	}

	inline static int32_t get_offset_of_shieldSFX_4() { return static_cast<int32_t>(offsetof(touchControll_t3500808352, ___shieldSFX_4)); }
	inline GameObject_t1756533147 * get_shieldSFX_4() const { return ___shieldSFX_4; }
	inline GameObject_t1756533147 ** get_address_of_shieldSFX_4() { return &___shieldSFX_4; }
	inline void set_shieldSFX_4(GameObject_t1756533147 * value)
	{
		___shieldSFX_4 = value;
		Il2CppCodeGenWriteBarrier(&___shieldSFX_4, value);
	}

	inline static int32_t get_offset_of_shieldCooldDown_5() { return static_cast<int32_t>(offsetof(touchControll_t3500808352, ___shieldCooldDown_5)); }
	inline GameObject_t1756533147 * get_shieldCooldDown_5() const { return ___shieldCooldDown_5; }
	inline GameObject_t1756533147 ** get_address_of_shieldCooldDown_5() { return &___shieldCooldDown_5; }
	inline void set_shieldCooldDown_5(GameObject_t1756533147 * value)
	{
		___shieldCooldDown_5 = value;
		Il2CppCodeGenWriteBarrier(&___shieldCooldDown_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
