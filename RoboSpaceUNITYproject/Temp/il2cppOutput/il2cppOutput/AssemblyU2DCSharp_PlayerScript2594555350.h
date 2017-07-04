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
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t2594555350  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerScript::StrafeSpeed
	float ___StrafeSpeed_2;
	// GameControlScript PlayerScript::_gameControlScript
	GameControlScript_t1485596768 * ____gameControlScript_3;
	// UnityEngine.Animator PlayerScript::_animator
	Animator_t69676727 * ____animator_4;
	// System.Boolean PlayerScript::_jumping
	bool ____jumping_5;

public:
	inline static int32_t get_offset_of_StrafeSpeed_2() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___StrafeSpeed_2)); }
	inline float get_StrafeSpeed_2() const { return ___StrafeSpeed_2; }
	inline float* get_address_of_StrafeSpeed_2() { return &___StrafeSpeed_2; }
	inline void set_StrafeSpeed_2(float value)
	{
		___StrafeSpeed_2 = value;
	}

	inline static int32_t get_offset_of__gameControlScript_3() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ____gameControlScript_3)); }
	inline GameControlScript_t1485596768 * get__gameControlScript_3() const { return ____gameControlScript_3; }
	inline GameControlScript_t1485596768 ** get_address_of__gameControlScript_3() { return &____gameControlScript_3; }
	inline void set__gameControlScript_3(GameControlScript_t1485596768 * value)
	{
		____gameControlScript_3 = value;
		Il2CppCodeGenWriteBarrier(&____gameControlScript_3, value);
	}

	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ____animator_4)); }
	inline Animator_t69676727 * get__animator_4() const { return ____animator_4; }
	inline Animator_t69676727 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t69676727 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier(&____animator_4, value);
	}

	inline static int32_t get_offset_of__jumping_5() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ____jumping_5)); }
	inline bool get__jumping_5() const { return ____jumping_5; }
	inline bool* get_address_of__jumping_5() { return &____jumping_5; }
	inline void set__jumping_5(bool value)
	{
		____jumping_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
