// src/unsorted/unit_00CB3D40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3D40..00CB3D40, 1 functions

#include "types.h"

// 00CB3D40  FUN_00cb3d40  size=51  [run]
void __thiscall FUN_00cb3d40(int param_1,char *param_2)

{
  *(int *)(param_1 + 4) = (int)*param_2;
  *(int *)(param_1 + 8) = (int)param_2[1];
  *(int *)(param_1 + 0xc) = (int)param_2[2];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x10);
  return;
}

