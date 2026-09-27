// src/unsorted/unit_00A61C50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A61C50..00A61C50, 1 functions

#include "types.h"

// 00A61C50  FUN_00a61c50  size=195  [run]
undefined4 * __thiscall FUN_00a61c50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[5] = param_2;
  param_1[0xda] = 0;
  Hw::cHeapFixed::cHeapFixed();
  *param_1 = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[0x2c] = 0xffffffff;
  param_1[8] = 0;
  puVar1 = param_1 + 0x1c;
  iVar2 = 0x10;
  do {
    puVar1[0x15] = 0xbf800000;
    puVar1[-0x13] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x2d] = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0xc4] = 0x3f800000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  (**(code **)(param_1[0xdc] + 0x40))(0x24,0x10,0x10,param_1[5],"antiqueScrollFactoryFixed");
  return param_1;
}

