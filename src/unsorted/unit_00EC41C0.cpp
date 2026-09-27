// src/unsorted/unit_00EC41C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC41C0..00EC41F0, 2 functions

#include "mgrr.h"

// 00EC41C0  FUN_00ec41c0  size=39  [run]
undefined4 * __fastcall FUN_00ec41c0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}

// 00EC41F0  FUN_00ec41f0  size=90  [run]
void __fastcall FUN_00ec41f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x6c),0);
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x68);
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00ec3b70();
  }
  Hw::cHeap::cHeap_3();
  return;
}

