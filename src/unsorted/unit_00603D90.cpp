// src/unsorted/unit_00603D90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00603D90..00603DC0, 2 functions

#include "mgrr.h"

// 00603D90  FUN_00603d90  size=36  [run]
void __fastcall FUN_00603d90(int *param_1)

{
  if (param_1[0x13b] != param_1[0x2cc]) {
    FUN_00aa92c0(5);
                    /* WARNING: Could not recover jumptable at 0x00603db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  return;
}

// 00603DC0  FUN_00603dc0  size=34  [run]
void __fastcall FUN_00603dc0(int param_1)

{
  if (*(int *)(param_1 + 0x4ec) != *(int *)(param_1 + 0xb30)) {
    *(undefined4 *)(param_1 + 0xb34) = 0x41f00000;
    FUN_00aa92c0(6);
  }
  return;
}

