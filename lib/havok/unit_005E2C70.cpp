// lib/havok/unit_005E2C70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E2C70..005E2C70, 1 functions

#include "types.h"

// 005E2C70  hkpAllCdBodyPairCollector::vf00  size=114  [run]
undefined4 * __thiscall hkpAllCdBodyPairCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = hkpCdBodyPairCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x114);
  }
  return param_1;
}

