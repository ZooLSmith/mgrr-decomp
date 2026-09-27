// src/unsorted/unit_00F97580.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F97580..00F975E0, 3 functions

#include "types.h"

// 00F97580  FUN_00f97580  size=51  [run]
undefined4 __thiscall FUN_00f97580(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (3 < param_2) {
    FUN_00dd5650(&DAT_016eb5e8);
    return 0;
  }
  *(undefined4 *)(param_1 + 4 + param_2 * 8) = param_3;
  *(undefined4 *)(param_1 + 8 + param_2 * 8) = param_4;
  return 1;
}

// 00F975C0  FUN_00f975c0  size=10  [run]
void __thiscall FUN_00f975c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}

// 00F975E0  FUN_00f975e0  size=21  [run]
undefined4 __thiscall FUN_00f975e0(int param_1,uint param_2)

{
  if (param_2 < 4) {
    return *(undefined4 *)(param_1 + 4 + param_2 * 8);
  }
  return 0;
}

