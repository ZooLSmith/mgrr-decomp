// src/unsorted/unit_00A6D650.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6D650..00A6D650, 1 functions

#include "types.h"

// 00A6D650  FUN_00a6d650  size=65  [run]
void __fastcall FUN_00a6d650(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(0x41200000,0,1);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  return;
}

