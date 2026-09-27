// src/misc/ContactPointCollector.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008EA0B0..008EA110, 3 functions

#include "types.h"

// 008EA0B0  ContactPointCollector::vf04  size=14  [class]
void __fastcall ContactPointCollector::vf04(int param_1)

{
  if (0x1f < *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 008EA0C0  hkpCdPointCollector::hkpCdPointCollector_15  size=77  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_15(undefined4 *param_1)

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

// 008EA110  ContactPointCollector::vf00  size=117  [class]
undefined4 * __thiscall ContactPointCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpAllCdPointCollector::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x30);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = hkpCdPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1a0);
  }
  return param_1;
}

