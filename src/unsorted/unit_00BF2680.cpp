// src/unsorted/unit_00BF2680.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BF2680..00BF2680, 1 functions

#include "mgrr.h"

// 00BF2680  FUN_00bf2680  size=112  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00bf2680(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01be9f04 & 1) == 0) {
    _DAT_01be9f04 = _DAT_01be9f04 | 1;
    DAT_01be9f00 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01be9f00;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01be9f00);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00bc9930(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

