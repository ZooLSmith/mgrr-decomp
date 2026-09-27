// lib/havok/unit_005ED9F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005ED9F0..005ED9F0, 1 functions

#include "mgrr.h"
#include "hkpAllRayHitCollector.h"

// 005ED9F0  hkpAllRayHitCollector::vf04  size=117  [run]
undefined4 * __thiscall hkpAllRayHitCollector::vf04(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x60);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = hkpRayHitCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,800);
  }
  return param_1;
}

