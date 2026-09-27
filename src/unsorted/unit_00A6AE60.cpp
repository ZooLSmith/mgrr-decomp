// src/unsorted/unit_00A6AE60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6AE60..00A6AE80, 2 functions

#include "types.h"

// 00A6AE60  FUN_00a6ae60  size=20  [run]
void __thiscall FUN_00a6ae60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  FUN_01006000();
  return;
}

// 00A6AE80  FUN_00a6ae80  size=30  [run]
void __fastcall FUN_00a6ae80(int param_1)

{
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_010060a0();
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}

