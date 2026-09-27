// src/unsorted/unit_00900320.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00900320..009003E0, 4 functions

#include "types.h"

// 00900320  FUN_00900320  size=39  [run]
void __thiscall FUN_00900320(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
    if (iVar1 == 1) {
      (**(code **)(*(int *)*param_1 + 0x48))(param_2,0);
    }
  }
  return;
}

// 00900350  FUN_00900350  size=39  [run]
void __thiscall FUN_00900350(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)*param_1 + 0x18))();
    if (iVar1 == 1) {
      (**(code **)(*(int *)*param_1 + 0x44))(param_2,0);
    }
  }
  return;
}

// 00900380  FUN_00900380  size=43  [run]
void __fastcall FUN_00900380(int *param_1)

{
  if (*param_1 != 0) {
    FUN_011a3130(param_1[3]);
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(1);
      param_1[3] = 0;
    }
  }
  return;
}

// 009003E0  FUN_009003e0  size=16  [run]
void __fastcall FUN_009003e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

