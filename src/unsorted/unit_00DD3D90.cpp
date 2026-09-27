// src/unsorted/unit_00DD3D90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3D90..00DD3D90, 1 functions

#include "mgrr.h"

// 00DD3D90  FUN_00dd3d90  size=56  [run]
void __thiscall FUN_00dd3d90(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_2 + -4);
  }
  if (piVar1 == param_1) {
    (**(code **)(*param_1 + 0x3c))(param_2,param_3);
    return;
  }
  (**(code **)(*piVar1 + 0x3c))(param_2,param_3);
  return;
}

