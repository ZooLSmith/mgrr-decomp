// src/unsorted/unit_00C680F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C680F0..00C682C0, 5 functions

#include "mgrr.h"

// 00C680F0  FUN_00c680f0  size=32  [run]
undefined4 * __fastcall FUN_00c680f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  FUN_00a7c930();
  return param_1;
}

// 00C681D0  FUN_00c681d0  size=157  [run]
undefined4 __thiscall FUN_00c681d0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(uint *)(param_1 + 0x28) = param_3;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return 1;
  }
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 0x24 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x24),*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar3 = param_3 - 1;
    iVar2 = iVar1;
    if (-1 < iVar3) {
      do {
        FUN_00401040(iVar2,4,8,FUN_00a7c930);
        *(undefined4 *)(iVar2 + 0x20) = 0;
        iVar2 = iVar2 + 0x24;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      *(int *)(param_1 + 0x24) = iVar1;
      return 1;
    }
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return 1;
}

// 00C68270  FUN_00c68270  size=39  [run]
void __fastcall FUN_00c68270(int param_1)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// 00C682A0  FUN_00c682a0  size=12  [run]
undefined4 __fastcall FUN_00c682a0(undefined4 param_1)

{
  FUN_00904d60();
  return param_1;
}

// 00C682C0  FUN_00c682c0  size=30  [run]
undefined4 __thiscall FUN_00c682c0(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

