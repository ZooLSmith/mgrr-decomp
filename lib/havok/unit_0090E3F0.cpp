// lib/havok/unit_0090E3F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090E3F0..0090E3F0, 1 functions

#include "mgrr.h"
#include "hkpRayHitCollector.h"

// 0090E3F0  hkpRayHitCollector::hkpRayHitCollector  size=96  [run]
void __fastcall hkpRayHitCollector::hkpRayHitCollector(undefined4 *param_1)

{
  *param_1 = RayCastMultiHitWork::vftable;
  RayCastMultiHitWork::vf14();
  param_1[0x18] = hkpAllRayHitCollector::vftable;
  param_1[0x1d] = 0;
  if (-1 < (int)param_1[0x1e]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1c],(param_1[0x1e] & 0x3fffffff) * 0x60);
  }
  param_1[0x1c] = 0;
  param_1[0x1e] = 0x80000000;
  param_1[0x18] = vftable;
  *param_1 = RayCastWork::vftable;
  return;
}

