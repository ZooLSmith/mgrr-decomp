// src/unsorted/unit_00F99FC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F99FC0..00F9A110, 3 functions

#include "types.h"

// 00F99FC0  FUN_00f99fc0  size=25  [run]
void __fastcall FUN_00f99fc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}

// 00F9A050  FUN_00f9a050  size=51  [run]
uint __thiscall FUN_00f9a050(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xc) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 8) + 0x2c);
    do {
      if (*piVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0xc;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  return 0xffffffff;
}

// 00F9A110  FUN_00f9a110  size=31  [run]
void __fastcall FUN_00f9a110(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  *param_1 = 0;
  return;
}

