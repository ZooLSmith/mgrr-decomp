// src/misc/cJammingDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD5220..00CD5220, 1 functions

#include "types.h"

// 00CD5220  cJammingDisp::vf00  size=83  [class]
undefined4 * __thiscall cJammingDisp::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[4];
  *param_1 = vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[4] = 0;
  }
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  DAT_01dc0ec8 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

