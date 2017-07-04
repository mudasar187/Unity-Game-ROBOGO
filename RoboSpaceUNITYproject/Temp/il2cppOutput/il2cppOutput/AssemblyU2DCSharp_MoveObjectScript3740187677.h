#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameControlScript
struct GameControlScript_t1485596768;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveObjectScript
struct  MoveObjectScript_t3740187677  : public MonoBehaviour_t1158329972
{
public:
	// GameControlScript MoveObjectScript::_gameControlScript
	GameControlScript_t1485596768 * ____gameControlScript_2;

public:
	inline static int32_t get_offset_of__gameControlScript_2() { return static_cast<int32_t>(offsetof(MoveObjectScript_t3740187677, ____gameControlScript_2)); }
	inline GameControlScript_t1485596768 * get__gameControlScript_2() const { return ____gameControlScript_2; }
	inline GameControlScript_t1485596768 ** get_address_of__gameControlScript_2() { return &____gameControlScript_2; }
	inline void set__gameControlScript_2(GameControlScript_t1485596768 * value)
	{
		____gameControlScript_2 = value;
		Il2CppCodeGenWriteBarrier(&____gameControlScript_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
