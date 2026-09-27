// src/unsorted/unit_00DC7D60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DC7D60..00DC7DA0, 2 functions

#include "types.h"

// 00DC7D60  FUN_00dc7d60  size=55  [run]
void __fastcall FUN_00dc7d60(int param_1)

{
  int iVar1;
  
  FUN_00db9880(0x3f800000);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  FUN_00dad840();
  *(undefined4 *)(param_1 + 0x920) = 1;
  return;
}

// 00DC7DA0  FUN_00dc7da0  size=109  [run]
void __thiscall FUN_00dc7da0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*param_1 != 0) {
    if ((char)param_1[0x14] == '\0') {
      Camera::Math::safePositionTargetXz_2(param_1 + 4,param_1 + 8,param_1 + 0xc,param_1[0x11]);
      FUN_00dbdff0(param_2);
    }
    else {
      FUN_00dc4ee0(param_2);
    }
    *param_1 = 0;
  }
  if (param_4 == 0) {
    FUN_00dc4fc0(param_2,param_3);
  }
  FUN_00da8900(param_1 + 0x30);
  return;
}

