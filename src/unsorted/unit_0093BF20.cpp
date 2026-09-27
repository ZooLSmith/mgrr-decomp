// src/unsorted/unit_0093BF20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093BF20..0093BFE0, 3 functions

#include "types.h"

// 0093BF20  FUN_0093bf20  size=28  [run]
void __fastcall FUN_0093bf20(int param_1)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 0093BFD0  FUN_0093bfd0  size=6  [run]
undefined4 FUN_0093bfd0(void)

{
  return DAT_01b36a20;
}

// 0093BFE0  FUN_0093bfe0  size=30  [run]
void FUN_0093bfe0(void)

{
  if (DAT_01b36a20 != (int *)0x0) {
    (**(code **)(*DAT_01b36a20 + 0x14))(1);
    DAT_01b36a20 = (int *)0x0;
  }
  return;
}

