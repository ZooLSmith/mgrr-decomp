// lib/havok/unit_00933670.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00933670..00933670, 1 functions

#include "mgrr.h"
#include "hkpClosestRayHitCollector.h"

// 00933670  hkpClosestRayHitCollector::vf04  size=47  [run]
undefined4 * __thiscall hkpClosestRayHitCollector::vf04(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpRayHitCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x70);
  }
  return param_1;
}

