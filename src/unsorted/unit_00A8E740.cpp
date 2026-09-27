// src/unsorted/unit_00A8E740.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8E740..00A8E760, 3 functions

#include "mgrr.h"

// 00A8E740  FUN_00a8e740  size=13  [run]
void __thiscall FUN_00a8e740(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x849) = param_2;
  return;
}

// 00A8E750  FUN_00a8e750  size=7  [run]
undefined1 __fastcall FUN_00a8e750(int param_1)

{
  return *(undefined1 *)(param_1 + 0x849);
}

// 00A8E760  FUN_00a8e760  size=35  [run]
void __fastcall FUN_00a8e760(int param_1)

{
  if (*(int *)(param_1 + 0x76c) != 0) {
    FUN_009fb990();
  }
  if (*(int *)(param_1 + 0x770) != 0) {
    FUN_009fb990();
    return;
  }
  return;
}

