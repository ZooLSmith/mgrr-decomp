// lib/havok/unit_005EC620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EC620..005EC760, 2 functions

#include "mgrr.h"
#include "hkpAllRayHitCollector.h"
#include "hkpRayHitCollector.h"

// 005EC620  hkpAllRayHitCollector::hkpAllRayHitCollector  size=259  [run]
void __fastcall hkpAllRayHitCollector::hkpAllRayHitCollector(undefined4 *param_1)

{
  param_1[1] = 0x3f800000;
  *param_1 = vftable;
  param_1[4] = param_1 + 8;
  param_1[6] = 0x80000008;
  param_1[0xc] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x3c] = 0x3f800000;
  param_1[0x54] = 0x3f800000;
  param_1[0x6c] = 0x3f800000;
  param_1[0xd] = 0xffffffff;
  param_1[0x84] = 0x3f800000;
  param_1[0x10] = 0xffffffff;
  param_1[0x9c] = 0x3f800000;
  param_1[0x25] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0xb4] = 0x3f800000;
  param_1[0x3d] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  param_1[0x55] = 0xffffffff;
  param_1[0x58] = 0xffffffff;
  param_1[0x6d] = 0xffffffff;
  param_1[0x70] = 0xffffffff;
  param_1[0x85] = 0xffffffff;
  param_1[0x88] = 0xffffffff;
  param_1[0x9d] = 0xffffffff;
  param_1[0xa0] = 0xffffffff;
  param_1[0xb5] = 0xffffffff;
  param_1[0xb8] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x48] = 0;
  param_1[0x4c] = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  param_1[0x78] = 0;
  param_1[0x7c] = 0;
  param_1[0x90] = 0;
  param_1[0x94] = 0;
  param_1[0xa8] = 0;
  param_1[0xac] = 0;
  param_1[0xc0] = 0;
  param_1[0xc4] = 0;
  param_1[5] = 0;
  param_1[1] = 0x3f800000;
  return;
}

// 005EC760  hkpRayHitCollector::hkpRayHitCollector_2  size=77  [run]
void __fastcall hkpRayHitCollector::hkpRayHitCollector_2(undefined4 *param_1)

{
  *param_1 = hkpAllRayHitCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x60);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

