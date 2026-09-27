// src/unsorted/unit_00D825C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D825C0..00D82650, 5 functions

#include "types.h"

// 00D825C0  FUN_00d825c0  size=3  [run]
void FUN_00d825c0(void)

{
  return;
}

// 00D825D0  FUN_00d825d0  size=78  [run]
undefined4 __thiscall FUN_00d825d0(undefined4 *param_1,undefined4 param_2)

{
  int *unaff_retaddr;
  
  (**(code **)(**(int **)*param_1 + 8))(&param_2);
  if (unaff_retaddr[7] == 0) {
    (**(code **)(*unaff_retaddr + 8))(param_2);
    unaff_retaddr[5] = 1;
    unaff_retaddr[7] = 1;
    return 1;
  }
  return 1;
}

// 00D82620  FUN_00d82620  size=31  [run]
undefined4 __fastcall FUN_00d82620(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4920(*param_1);
    *param_1 = 0;
  }
  return 1;
}

// 00D82640  FUN_00d82640  size=9  [run]
void __fastcall FUN_00d82640(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00D82650  FUN_00d82650  size=26  [run]
void __fastcall FUN_00d82650(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4920(*param_1);
    *param_1 = 0;
  }
  return;
}

