// src/unsorted/unit_008A0770.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A0770..008A07C0, 2 functions

#include "types.h"

// 008A0770  FUN_008a0770  size=36  [run]
undefined4 __fastcall FUN_008a0770(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(*param_1 + 0x34) != 0)) {
      uVar2 = FUN_00a81330();
      return uVar2;
    }
  }
  return 0;
}

// 008A07C0  FUN_008a07c0  size=82  [run]
undefined4 __thiscall FUN_008a07c0(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_00c4e710(param_2,param_3);
    if (((iVar1 != 0) &&
        (((0 < *(int *)(iVar1 + 0x30) || (param_4 == 0)) && ((*(byte *)(iVar1 + 8) & 1) != 0)))) &&
       (*(int *)(iVar1 + 0x34) != 0)) {
      *param_1 = iVar1;
      param_1[1] = 0x43f00000;
      return 1;
    }
  }
  return 0;
}

