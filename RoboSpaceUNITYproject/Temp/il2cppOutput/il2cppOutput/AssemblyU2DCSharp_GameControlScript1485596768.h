#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MoveGroundScript
struct MoveGroundScript_t2194609165;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameControlScript
struct  GameControlScript_t1485596768  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GameControlScript::ScrollSpeed
	float ___ScrollSpeed_2;
	// System.Single GameControlScript::TimeExtension
	float ___TimeExtension_3;
	// MoveGroundScript GameControlScript::MoveGroundScript
	MoveGroundScript_t2194609165 * ___MoveGroundScript_4;
	// System.Single GameControlScript::_timeRemaining
	float ____timeRemaining_5;
	// System.Single GameControlScript::_totalTimeElapsed
	float ____totalTimeElapsed_6;
	// System.Boolean GameControlScript::_isGameOver
	bool ____isGameOver_7;

public:
	inline static int32_t get_offset_of_ScrollSpeed_2() { return static_cast<int32_t>(offsetof(GameControlScript_t1485596768, ___ScrollSpeed_2)); }
	inline float get_ScrollSpeed_2() const { return ___ScrollSpeed_2; }
	inline float* get_address_of_ScrollSpeed_2() { return &___ScrollSpeed_2; }
	inline void set_ScrollSpeed_2(float value)
	{
		___ScrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_TimeExtension_3() { return static_cast<int32_t>(offsetof(GameControlScript_t1485596768, ___TimeExtension_3)); }
	inline float get_TimeExtension_3() const { return ___TimeExtension_3; }
	inline float* get_address_of_TimeExtension_3() { return &___TimeExtension_3; }
	inline void set_TimeExtension_3(float value)
	{
		___TimeExtension_3 = value;
	}

	inline static int32_t get_offset_of_MoveGroundScript_4() { return static_cast<int32_t>(offsetof(GameControlScript_t1485596768, ___MoveGroundScript_4)); }
	inline MoveGroundScript_t2194609165 * get_MoveGroundScript_4() const { return ___MoveGroundScript_4; }
	inline MoveGroundScript_t2194609165 ** get_address_of_MoveGroundScript_4() { return &___MoveGroundScript_4; }
	inline void set_MoveGroundScript_4(MoveGroundScript_t2194609165 * value)
	{
		___MoveGroundScript_4 = value;
		Il2CppCodeGenWriteBarrier(&___MoveGroundScript_4, value);
	}

	inline static int32_t get_offset_of__timeRemaining_5() { return static_cast<int32_t>(offsetof(GameControlScript_t1485596768, ____timeRemaining_5)); }
	inline float get__timeRemaining_5() const { return ____timeRemaining_5; }
	inline float* get_address_of__timeRemaining_5() { return &____timeRemaining_5; }
	inline void set__timeRemaining_5(float value)
	{
		____timeRemaining_5 = value;
	}

	inline static int32_t get_offset_of__totalTimeElapsed_6() { return static_cast<int32_t>(offsetof(GameControlScript_t1485596768, ____totalTimeElapsed_6)); }
	inline float get__totalTimeElapsed_6() const { return ____totalTimeElapsed_6; }
	inline float* get_address_of__totalTimeElapsed_6() { return &____totalTimeElapsed_6; }
	inline void set__totalTimeElapsed_6(float value)
	{
		____totalTimeElapsed_6 = value;
	}

	inline static int32_t get_offset_of__isGameOver_7() { return static_cast<int32_t>(offsetof(GameControlScript_t1485596768, ____isGameOver_7)); }
	inline bool get__isGameOver_7() const { return ____isGameOver_7; }
	inline bool* get_address_of__isGameOver_7() { return &____isGameOver_7; }
	inline void set__isGameOver_7(bool value)
	{
		____isGameOver_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
