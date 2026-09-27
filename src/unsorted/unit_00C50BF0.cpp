// src/unsorted/unit_00C50BF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C50BF0..00C50BF0, 1 functions

#include "mgrr.h"

// 00C50BF0  FUN_00c50bf0  size=237  [run]
/* WARNING: Removing unreachable block (ram,0x00c50cb4) */
/* WARNING: Removing unreachable block (ram,0x00c50c65) */
/* WARNING: Removing unreachable block (ram,0x00c50c6e) */
/* WARNING: Removing unreachable block (ram,0x00c50c70) */
/* WARNING: Removing unreachable block (ram,0x00c50c7d) */
/* WARNING: Removing unreachable block (ram,0x00c50c96) */
/* WARNING: Removing unreachable block (ram,0x00c50c9d) */
/* WARNING: Removing unreachable block (ram,0x00c50cbe) */

void __fastcall FUN_00c50bf0(int *param_1)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  if (param_1[0x4a] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x44));
  }
  (**(code **)(*param_1 + 8))(&stack0x00000004);
  uVar1 = FUN_00a1d5c0();
  FUN_00a6eda0(0x20,uVar1);
  FUN_00a18e90(&stack0xffffffe8,unaff_retaddr,0x49200);
  if (param_1[0x4a] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x44));
  }
  return;
}

