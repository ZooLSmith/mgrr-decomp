// src/unsorted/unit_00EC1A50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1A50..00EC1A50, 1 functions

#include "mgrr.h"

// 00EC1A50  FUN_00ec1a50  size=94  [run]
void __fastcall FUN_00ec1a50(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00ec3b70();
    (**(code **)(*(int *)(param_1 + 8) + 8))();
  }
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
  return;
}

