// src/unsorted/unit_00EC3B70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC3B70..00EC3C30, 5 functions

#include "mgrr.h"

// 00EC3B70  FUN_00ec3b70  size=59  [run]
void __fastcall FUN_00ec3b70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00EC3BB0  FUN_00ec3bb0  size=36  [run]
void __fastcall FUN_00ec3bb0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00ec3b70();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00EC3BE0  FUN_00ec3be0  size=42  [run]
void __fastcall FUN_00ec3be0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00ec3b70();
                    /* WARNING: Could not recover jumptable at 0x00ec3c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00EC3C10  FUN_00ec3c10  size=21  [run]
undefined4 * __fastcall FUN_00ec3c10(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00EC3C30  FUN_00ec3c30  size=36  [run]
void __fastcall FUN_00ec3c30(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00ec3b70();
  }
  Hw::cHeap::cHeap_3();
  return;
}

