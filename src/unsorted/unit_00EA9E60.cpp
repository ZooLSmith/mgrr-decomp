// src/unsorted/unit_00EA9E60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EA9E60..00EA9E80, 2 functions

#include "mgrr.h"

// 00EA9E60  FUN_00ea9e60  size=31  [run]
void __thiscall FUN_00ea9e60(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  return;
}

// 00EA9E80  FUN_00ea9e80  size=40  [run]
undefined4 __thiscall FUN_00ea9e80(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x10) != 1) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = *(undefined4 *)(param_1 + 0x1c);
  return 1;
}

