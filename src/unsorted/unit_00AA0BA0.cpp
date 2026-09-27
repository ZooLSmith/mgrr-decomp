// src/unsorted/unit_00AA0BA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA0BA0..00AA0BA0, 1 functions

#include "types.h"

// 00AA0BA0  FUN_00aa0ba0  size=139  [run]
undefined4 __thiscall FUN_00aa0ba0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  if (param_2 < 0) {
    return 0;
  }
  if (param_3 < 0) {
    param_3 = DAT_01d5bad4;
  }
  iVar1 = FUN_00c1a020(param_3,param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x1c,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(undefined4 **)(param_1 + 0x808) = puVar2;
    FUN_00c9da40(iVar1);
    return 1;
  }
  return 0;
}

