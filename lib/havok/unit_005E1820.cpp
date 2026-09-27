// lib/havok/unit_005E1820.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E1820..005E1820, 1 functions

#include "types.h"

// 005E1820  hkpCdBodyPairCollector::hkpCdBodyPairCollector  size=74  [run]
void __fastcall hkpCdBodyPairCollector::hkpCdBodyPairCollector(undefined4 *param_1)

{
  *param_1 = hkpAllCdBodyPairCollector::vftable;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

