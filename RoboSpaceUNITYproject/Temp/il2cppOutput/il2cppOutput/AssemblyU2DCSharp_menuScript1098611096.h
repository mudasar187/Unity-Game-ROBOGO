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

// menuScript
struct  menuScript_t1098611096  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject menuScript::playButtonSound
	GameObject_t1756533147 * ___playButtonSound_2;
	// UnityEngine.GameObject menuScript::gameOverScreen
	GameObject_t1756533147 * ___gameOverScreen_3;

public:
	inline static int32_t get_offset_of_playButtonSound_2() { return static_cast<int32_t>(offsetof(menuScript_t1098611096, ___playButtonSound_2)); }
	inline GameObject_t1756533147 * get_playButtonSound_2() const { return ___playButtonSound_2; }
	inline GameObject_t1756533147 ** get_address_of_playButtonSound_2() { return &___playButtonSound_2; }
	inline void set_playButtonSound_2(GameObject_t1756533147 * value)
	{
		___playButtonSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___playButtonSound_2, value);
	}

	inline static int32_t get_offset_of_gameOverScreen_3() { return static_cast<int32_t>(offsetof(menuScript_t1098611096, ___gameOverScreen_3)); }
	inline GameObject_t1756533147 * get_gameOverScreen_3() const { return ___gameOverScreen_3; }
	inline GameObject_t1756533147 ** get_address_of_gameOverScreen_3() { return &___gameOverScreen_3; }
	inline void set_gameOverScreen_3(GameObject_t1756533147 * value)
	{
		___gameOverScreen_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScreen_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
