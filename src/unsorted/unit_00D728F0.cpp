// src/unsorted/unit_00D728F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D728F0..00D72980, 3 functions

#include "mgrr.h"

// 00D728F0  FUN_00d728f0  size=51  [run]
int __thiscall FUN_00d728f0(int param_1,byte param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x98))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D72970  FUN_00d72970  size=6  [run]
undefined4 FUN_00d72970(void)

{
  return DAT_01dc5260;
}

// 00D72980  FUN_00d72980  size=30  [run]
void FUN_00d72980(void)

{
  if (DAT_01dc5260 != (int *)0x0) {
    (**(code **)(*DAT_01dc5260 + 0xc))(1);
    DAT_01dc5260 = (int *)0x0;
  }
  return;
}

