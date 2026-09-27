// src/unsorted/unit_009333B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009333B0..009335E0, 3 functions

#include "mgrr.h"

// 009333B0  FUN_009333b0  size=151  [run]
void FUN_009333b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    if (param_3 == 0) {
      (**(code **)(*piVar1 + 200))(param_2);
      (**(code **)(*piVar1 + 0xd0))(param_2);
      (**(code **)(*piVar1 + 0xd4))(param_2);
    }
    else if (param_3 != 1) {
      return;
    }
    if (piVar1[0x12d] == 0x10010) {
      (**(code **)(*piVar1 + 200))(param_2);
      (**(code **)(*piVar1 + 0xd0))(param_2);
      (**(code **)(*piVar1 + 0xd4))(param_2);
      return;
    }
    (**(code **)(*piVar1 + 0xcc))(param_2,param_4);
  }
  return;
}

// 00933520  FUN_00933520  size=189  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00933520(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00fdbc60();
  iVar1 = (param_2 - iVar1) + 0x3ff;
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = 0x7ff;
  if (iVar1 < 0x800) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// 009335E0  FUN_009335e0  size=87  [run]
undefined4 * __fastcall FUN_009335e0(undefined4 *param_1)

{
  FUN_00e03940();
  *param_1 = 0xfff;
  param_1[1] = 0xffff;
  param_1[2] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[4] = 0x3f800000;
  return param_1;
}

