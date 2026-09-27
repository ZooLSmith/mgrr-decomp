// src/unsorted/unit_00D1BDF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D1BDF0..00D1BE80, 4 functions

#include "mgrr.h"

// 00D1BDF0  FUN_00d1bdf0  size=36  [run]
void __fastcall FUN_00d1bdf0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b6e0();
  }
  Hw::cHeap::cHeap_5();
  return;
}

// 00D1BE20  FUN_00d1be20  size=42  [run]
void __fastcall FUN_00d1be20(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b6e0();
                    /* WARNING: Could not recover jumptable at 0x00d1be45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00D1BE50  FUN_00d1be50  size=36  [run]
void __fastcall FUN_00d1be50(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b720();
  }
  Hw::cHeap::cHeap_5();
  return;
}

// 00D1BE80  FUN_00d1be80  size=42  [run]
void __fastcall FUN_00d1be80(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00d0b720();
                    /* WARNING: Could not recover jumptable at 0x00d1bea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

