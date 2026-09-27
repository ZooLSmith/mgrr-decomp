// src/unsorted/unit_00E91420.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E91420..00E91420, 1 functions

#include "mgrr.h"

// 00E91420  FUN_00e91420  size=89  [run]
undefined4 __thiscall FUN_00e91420(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00e062b0(param_2,0);
    if (*(int *)(param_1 + 0x60) != 0) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    param_2 = (**(code **)(*(int *)(param_1 + 0x3c) + 4))();
    (**(code **)(*(int *)(param_1 + 0x5c) + 8))(&param_2);
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    return 1;
  }
  return 0;
}

