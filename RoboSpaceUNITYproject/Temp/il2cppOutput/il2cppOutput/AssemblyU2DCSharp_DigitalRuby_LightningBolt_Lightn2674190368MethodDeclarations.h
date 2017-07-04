#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DigitalRuby.LightningBolt.LightningBoltScript
struct LightningBoltScript_t2674190368;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void DigitalRuby.LightningBolt.LightningBoltScript::.ctor()
extern "C"  void LightningBoltScript__ctor_m783568302 (LightningBoltScript_t2674190368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GetPerpendicularVector(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void LightningBoltScript_GetPerpendicularVector_m419055817 (LightningBoltScript_t2674190368 * __this, Vector3_t2243707580 * ___directionNormalized0, Vector3_t2243707580 * ___side1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::GenerateLightningBolt(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Int32,System.Single)
extern "C"  void LightningBoltScript_GenerateLightningBolt_m102171145 (LightningBoltScript_t2674190368 * __this, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___end1, int32_t ___generation2, int32_t ___totalGenerations3, float ___offsetAmount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::RandomVector(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
extern "C"  void LightningBoltScript_RandomVector_m2735642628 (LightningBoltScript_t2674190368 * __this, Vector3_t2243707580 * ___start0, Vector3_t2243707580 * ___end1, float ___offsetAmount2, Vector3_t2243707580 * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::SelectOffsetFromAnimationMode()
extern "C"  void LightningBoltScript_SelectOffsetFromAnimationMode_m414907106 (LightningBoltScript_t2674190368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateLineRenderer()
extern "C"  void LightningBoltScript_UpdateLineRenderer_m1665101364 (LightningBoltScript_t2674190368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Start()
extern "C"  void LightningBoltScript_Start_m54503946 (LightningBoltScript_t2674190368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Update()
extern "C"  void LightningBoltScript_Update_m3707593747 (LightningBoltScript_t2674190368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::Trigger()
extern "C"  void LightningBoltScript_Trigger_m1773885410 (LightningBoltScript_t2674190368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DigitalRuby.LightningBolt.LightningBoltScript::UpdateFromMaterialChange()
extern "C"  void LightningBoltScript_UpdateFromMaterialChange_m373840140 (LightningBoltScript_t2674190368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
