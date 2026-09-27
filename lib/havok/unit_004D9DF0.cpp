// lib/havok/unit_004D9DF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004D9DF0..004D9DF0, 1 functions

#include "types.h"

// 004D9DF0  hkpCdPointCollector::hkpCdPointCollector_3  size=77  [run]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_3(undefined4 *param_1)

{
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

