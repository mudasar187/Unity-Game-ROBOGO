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
// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnObjectsScript
struct  SpawnObjectsScript_t2462008850  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SpawnObjectsScript::ObstaclePrefab
	GameObject_t1756533147 * ___ObstaclePrefab_2;
	// UnityEngine.GameObject SpawnObjectsScript::PowerupPrefab
	GameObject_t1756533147 * ___PowerupPrefab_3;
	// UnityEngine.GameObject SpawnObjectsScript::BatteryPowerUp
	GameObject_t1756533147 * ___BatteryPowerUp_4;
	// UnityEngine.GameObject SpawnObjectsScript::soundSFXPowerUp
	GameObject_t1756533147 * ___soundSFXPowerUp_5;
	// UnityEngine.GameObject SpawnObjectsScript::shield
	GameObject_t1756533147 * ___shield_6;
	// UnityEngine.Light SpawnObjectsScript::inGameLight
	Light_t494725636 * ___inGameLight_7;
	// UnityEngine.UI.Text SpawnObjectsScript::gameScore
	Text_t356221433 * ___gameScore_8;
	// System.Single SpawnObjectsScript::SpawnCycle
	float ___SpawnCycle_9;
	// System.Single SpawnObjectsScript::_timeElapsed
	float ____timeElapsed_10;
	// System.Boolean SpawnObjectsScript::_spawnPowerup
	bool ____spawnPowerup_11;

public:
	inline static int32_t get_offset_of_ObstaclePrefab_2() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___ObstaclePrefab_2)); }
	inline GameObject_t1756533147 * get_ObstaclePrefab_2() const { return ___ObstaclePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_ObstaclePrefab_2() { return &___ObstaclePrefab_2; }
	inline void set_ObstaclePrefab_2(GameObject_t1756533147 * value)
	{
		___ObstaclePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ObstaclePrefab_2, value);
	}

	inline static int32_t get_offset_of_PowerupPrefab_3() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___PowerupPrefab_3)); }
	inline GameObject_t1756533147 * get_PowerupPrefab_3() const { return ___PowerupPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_PowerupPrefab_3() { return &___PowerupPrefab_3; }
	inline void set_PowerupPrefab_3(GameObject_t1756533147 * value)
	{
		___PowerupPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___PowerupPrefab_3, value);
	}

	inline static int32_t get_offset_of_BatteryPowerUp_4() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___BatteryPowerUp_4)); }
	inline GameObject_t1756533147 * get_BatteryPowerUp_4() const { return ___BatteryPowerUp_4; }
	inline GameObject_t1756533147 ** get_address_of_BatteryPowerUp_4() { return &___BatteryPowerUp_4; }
	inline void set_BatteryPowerUp_4(GameObject_t1756533147 * value)
	{
		___BatteryPowerUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___BatteryPowerUp_4, value);
	}

	inline static int32_t get_offset_of_soundSFXPowerUp_5() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___soundSFXPowerUp_5)); }
	inline GameObject_t1756533147 * get_soundSFXPowerUp_5() const { return ___soundSFXPowerUp_5; }
	inline GameObject_t1756533147 ** get_address_of_soundSFXPowerUp_5() { return &___soundSFXPowerUp_5; }
	inline void set_soundSFXPowerUp_5(GameObject_t1756533147 * value)
	{
		___soundSFXPowerUp_5 = value;
		Il2CppCodeGenWriteBarrier(&___soundSFXPowerUp_5, value);
	}

	inline static int32_t get_offset_of_shield_6() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___shield_6)); }
	inline GameObject_t1756533147 * get_shield_6() const { return ___shield_6; }
	inline GameObject_t1756533147 ** get_address_of_shield_6() { return &___shield_6; }
	inline void set_shield_6(GameObject_t1756533147 * value)
	{
		___shield_6 = value;
		Il2CppCodeGenWriteBarrier(&___shield_6, value);
	}

	inline static int32_t get_offset_of_inGameLight_7() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___inGameLight_7)); }
	inline Light_t494725636 * get_inGameLight_7() const { return ___inGameLight_7; }
	inline Light_t494725636 ** get_address_of_inGameLight_7() { return &___inGameLight_7; }
	inline void set_inGameLight_7(Light_t494725636 * value)
	{
		___inGameLight_7 = value;
		Il2CppCodeGenWriteBarrier(&___inGameLight_7, value);
	}

	inline static int32_t get_offset_of_gameScore_8() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___gameScore_8)); }
	inline Text_t356221433 * get_gameScore_8() const { return ___gameScore_8; }
	inline Text_t356221433 ** get_address_of_gameScore_8() { return &___gameScore_8; }
	inline void set_gameScore_8(Text_t356221433 * value)
	{
		___gameScore_8 = value;
		Il2CppCodeGenWriteBarrier(&___gameScore_8, value);
	}

	inline static int32_t get_offset_of_SpawnCycle_9() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ___SpawnCycle_9)); }
	inline float get_SpawnCycle_9() const { return ___SpawnCycle_9; }
	inline float* get_address_of_SpawnCycle_9() { return &___SpawnCycle_9; }
	inline void set_SpawnCycle_9(float value)
	{
		___SpawnCycle_9 = value;
	}

	inline static int32_t get_offset_of__timeElapsed_10() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ____timeElapsed_10)); }
	inline float get__timeElapsed_10() const { return ____timeElapsed_10; }
	inline float* get_address_of__timeElapsed_10() { return &____timeElapsed_10; }
	inline void set__timeElapsed_10(float value)
	{
		____timeElapsed_10 = value;
	}

	inline static int32_t get_offset_of__spawnPowerup_11() { return static_cast<int32_t>(offsetof(SpawnObjectsScript_t2462008850, ____spawnPowerup_11)); }
	inline bool get__spawnPowerup_11() const { return ____spawnPowerup_11; }
	inline bool* get_address_of__spawnPowerup_11() { return &____spawnPowerup_11; }
	inline void set__spawnPowerup_11(bool value)
	{
		____spawnPowerup_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
