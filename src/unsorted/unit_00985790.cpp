// src/unsorted/unit_00985790.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00985790..00985790, 1 functions

#include "types.h"

// 00985790  FUN_00985790  size=76  [run]
void __fastcall FUN_00985790(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar1 != 0) {
    FUN_00cc1340();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

