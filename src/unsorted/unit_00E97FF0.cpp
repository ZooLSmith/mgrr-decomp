// src/unsorted/unit_00E97FF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E97FF0..00E98140, 4 functions

#include "mgrr.h"

// 00E97FF0  FUN_00e97ff0  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e97ff0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01d644ac & 1) == 0) {
    _DAT_01d644ac = _DAT_01d644ac | 1;
    DAT_01d644a8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01d644a8;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x14;
  param_1[5] = FUN_00e96da0;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E98060  FUN_00e98060  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e98060(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01be99c4 & 1) == 0) {
    _DAT_01be99c4 = _DAT_01be99c4 | 1;
    DAT_01be99c0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01be99c0;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x20;
  param_1[5] = FUN_00e96df0;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E980D0  FUN_00e980d0  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e980d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda77c & 1) == 0) {
    _DAT_01dda77c = _DAT_01dda77c | 1;
    DAT_01dda778 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda778;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x14;
  param_1[5] = FUN_00e96e40;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E98140  FUN_00e98140  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e98140(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda784 & 1) == 0) {
    _DAT_01dda784 = _DAT_01dda784 | 1;
    DAT_01dda780 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda780;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x20;
  param_1[5] = FUN_00e96eb0;
  FUN_00ea3ce0(param_1);
  return param_1;
}

