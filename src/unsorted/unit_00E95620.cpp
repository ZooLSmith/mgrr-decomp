// src/unsorted/unit_00E95620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E95620..00E95620, 1 functions

#include "mgrr.h"

// 00E95620  FUN_00e95620  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e95620(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda774 & 1) == 0) {
    _DAT_01dda774 = _DAT_01dda774 | 1;
    DAT_01dda770 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda770;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0xc;
  param_1[5] = &LAB_00e94730;
  FUN_00ea3ce0(param_1);
  return param_1;
}

