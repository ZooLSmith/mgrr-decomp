// src/collision/RayCastClosestPointsWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090E600..0090E6A0, 4 functions

#include "types.h"

// 0090E600  RayCastClosestPointsWork::vf00  size=6  [class]
undefined * RayCastClosestPointsWork::vf00(void)

{
  return &DAT_01b35dec;
}

// 0090E610  FUN_0090e610  size=4  [between]
undefined4 __fastcall FUN_0090e610(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// 0090E620  hkpCdPointCollector::hkpCdPointCollector_21  size=122  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_21(undefined4 *param_1)

{
  *param_1 = RayCastClosestPointsWork::vftable;
  if (param_1[9] != 0) {
    FUN_010060a0();
  }
  if (param_1[8] != 0) {
    FUN_010060a0();
  }
  FUN_00905a90();
  param_1[0xc] = hkpAllCdPointCollector::vftable;
  param_1[0x11] = 0;
  if (-1 < (int)param_1[0x12]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],(param_1[0x12] & 0x3fffffff) * 0x30);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  param_1[0xc] = vftable;
  *param_1 = RayCastWork::vftable;
  return;
}

// 0090E6A0  RayCastClosestPointsWork::vf04  size=30  [class]
undefined4 __thiscall RayCastClosestPointsWork::vf04(undefined4 param_1,byte param_2)

{
  hkpCdPointCollector::hkpCdPointCollector_21();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

