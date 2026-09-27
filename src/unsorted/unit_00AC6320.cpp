// src/unsorted/unit_00AC6320.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC6320..00AC6320, 1 functions

#include "mgrr.h"

// 00AC6320  FUN_00ac6320  size=50  [run]
void __fastcall FUN_00ac6320(int param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf50();
  switchD_0080dbae::default();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f40f0(param_1);
    }
  }
  return;
}

