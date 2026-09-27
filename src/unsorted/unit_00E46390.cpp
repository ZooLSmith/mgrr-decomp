// src/unsorted/unit_00E46390.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E46390..00E46430, 4 functions

#include "types.h"

// 00E46390  FUN_00e46390  size=36  [run]
void __fastcall FUN_00e46390(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e46340();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E463C0  FUN_00e463c0  size=42  [run]
void __fastcall FUN_00e463c0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e46340();
                    /* WARNING: Could not recover jumptable at 0x00e463e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E46410  FUN_00e46410  size=21  [run]
undefined4 * __fastcall FUN_00e46410(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E46430  FUN_00e46430  size=36  [run]
void __fastcall FUN_00e46430(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e46340();
  }
  Hw::cHeap::cHeap_3();
  return;
}

