// src/unsorted/unit_009D25B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D25B0..009D2930, 7 functions

#include "types.h"

// 009D25B0  FUN_009d25b0  size=198  [run]
undefined4 FUN_009d25b0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  *param_1 = *param_2 >> 0x1d & 1;
  param_1[1] = *param_2 >> 0x1e & 1;
  param_1[2] = *(byte *)((int)param_2 + 3) & 1;
  param_1[3] = *param_2 >> 0x19 & 1;
  param_1[4] = *param_2 >> 0x1c & 1;
  param_1[5] = *param_2 >> 0x17 & 1;
  uVar1 = *param_2;
  param_1[0xb] = 0;
  param_1[6] = uVar1 >> 0x1b & 1;
  param_1[10] = 0;
  param_1[7] = *param_2 >> 0x1f;
  param_1[9] = *param_2 >> 0x16 & 1;
  if (((*param_2 & 0x4000000) != 0) && (param_3 != (uint *)0x0)) {
    param_1[0xb] = *param_3;
    if ((char)param_3[4] == '\0') {
      param_1[10] = 1;
    }
    else if ((char)param_3[4] == '\x01') {
      param_1[10] = 0;
      param_1[8] = *param_2 >> 0x14 & 1;
      return 1;
    }
  }
  param_1[8] = *param_2 >> 0x14 & 1;
  return 1;
}

// 009D26E0  FUN_009d26e0  size=224  [run]
void FUN_009d26e0(undefined4 *param_1,uint *param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  
  param_1[8] = *param_2 >> 0x1f;
  param_1[1] = *param_2 >> 0x1e & 1;
  *param_1 = 0;
  param_1[2] = 0;
  if ((*param_2 & 0x20000000) != 0) {
    if ((*param_2 & 0x40000) == 0) {
      *param_1 = 1;
    }
    else {
      param_1[2] = 1;
    }
  }
  param_1[3] = *(byte *)((int)param_2 + 3) & 1;
  param_1[4] = *param_2 >> 0x19 & 1;
  param_1[5] = *param_2 >> 0x1c & 1;
  param_1[6] = *param_2 >> 0x17 & 1;
  uVar1 = *param_2;
  param_1[0xe] = 0;
  param_1[7] = uVar1 >> 0x1b & 1;
  param_1[0xc] = 0;
  if (param_4 == 0) {
    param_1[0xb] = 0;
  }
  else {
    param_1[0xb] = (int)*(short *)(param_4 + 0xc);
  }
  param_1[0xd] = 0;
  param_1[10] = *param_2 >> 0x16 & 1;
  if (((*param_2 & 0x4000000) != 0) && (param_3 != (undefined4 *)0x0)) {
    param_1[0xe] = *param_3;
    if (*(char *)(param_3 + 4) == '\0') {
      param_1[0xc] = 1;
    }
    else if (*(char *)(param_3 + 4) == '\x01') {
      param_1[0xc] = 0;
    }
  }
  if ((param_5 != 0) && (*(char *)(param_5 + 0x2f) != '\0')) {
    param_1[0xd] = 1;
  }
  param_1[0x10] = *(ushort *)((int)param_2 + 2) & 1;
  return;
}

// 009D2840  FUN_009d2840  size=39  [run]
undefined4 __thiscall FUN_009d2840(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  FUN_00a7c970(param_3);
  *param_1 = param_2;
  return 1;
}

// 009D2880  FUN_009d2880  size=95  [run]
void __thiscall FUN_009d2880(int *param_1,int *param_2)

{
  int iVar1;
  
  FUN_00edfcd0(*param_1 + 0x3c8);
  *param_2 = *param_1;
  param_2[2] = *(int *)(DAT_01b78870 + 0x1e74);
  param_2[4] = *param_1 + 0x3c8;
  param_2[3] = DAT_01b78870;
  param_2[1] = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c800();
    param_2[1] = iVar1;
  }
  return;
}

// 009D2900  FUN_009d2900  size=21  [run]
undefined4 * __fastcall FUN_009d2900(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00a7c930();
  return param_1;
}

// 009D2920  FUN_009d2920  size=15  [run]
void FUN_009d2920(void)

{
  switchD_0080dbae::default();
  return;
}

// 009D2930  FUN_009d2930  size=74  [run]
void FUN_009d2930(int *param_1)

{
  if (((*(uint *)(*param_1 + 0x3c) >> 0x14 & 1) != 0) ||
     ((*(uint *)(*param_1 + 0x3c) >> 0x11 & 1) != 0)) {
    FUN_00efda00(param_1[1] + 0x10,param_1[4],param_1[3]);
    FUN_00efde00(param_1[1] + 0x10,param_1[4],param_1[3]);
  }
  return;
}

