// src/unsorted/unit_00D79790.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D79790..00D798D0, 3 functions

#include "types.h"

// 00D79790  FUN_00d79790  size=125  [run]
undefined4 * __thiscall
FUN_00d79790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 *param_8,undefined4 param_9
            )

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_5;
  param_1[5] = param_6;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[8] = *param_8;
  param_1[9] = param_8[1];
  param_1[10] = param_8[2];
  param_1[0xb] = param_8[3];
  param_1[0x15] = 0;
  param_1[0x14] = param_9;
  FUN_004105d0();
  if (param_7 != 0) {
    param_1[0x15] = 1;
    FUN_0043e160(param_7);
  }
  return param_1;
}

// 00D79810  FUN_00d79810  size=179  [run]
undefined4 * __thiscall
FUN_00d79810(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 *param_8,undefined4 param_9
            ,undefined4 *param_10,undefined4 *param_11)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_5;
  param_1[5] = param_6;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[8] = *param_8;
  param_1[9] = param_8[1];
  param_1[10] = param_8[2];
  param_1[0xb] = param_8[3];
  param_1[0xc] = *param_10;
  param_1[0xd] = param_10[1];
  param_1[0xe] = param_10[2];
  param_1[0xf] = param_10[3];
  param_1[0x10] = *param_11;
  param_1[0x11] = param_11[1];
  param_1[0x12] = param_11[2];
  param_1[0x13] = param_11[3];
  param_1[0x15] = 0;
  param_1[0x14] = param_9;
  FUN_004105d0();
  if (param_7 != 0) {
    param_1[0x15] = 1;
    FUN_0043e160(param_7);
  }
  return param_1;
}

// 00D798D0  FUN_00d798d0  size=35  [run]
void __fastcall FUN_00d798d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_00900a90(0x1f);
  }
  return;
}

