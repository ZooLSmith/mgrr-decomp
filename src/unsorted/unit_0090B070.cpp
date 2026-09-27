// src/unsorted/unit_0090B070.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090B070..0090B090, 2 functions

#include "types.h"

// 0090B070  FUN_0090b070  size=21  [run]
undefined4 * __fastcall FUN_0090b070(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapVariable::cHeapVariable();
  return param_1;
}

// 0090B090  FUN_0090b090  size=160  [run]
void __fastcall FUN_0090b090(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0xc))();
  if (iVar1 != 0) {
    FUN_009078e0();
    (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x6c),0);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  piVar2 = (int *)(param_1 + 0x80);
  iVar1 = 5;
  do {
    if (*piVar2 != 0) {
      piVar2[2] = 0;
      if (piVar2[3] != 0) {
        FUN_00dd48d0(*piVar2,0);
        piVar2[3] = 0;
      }
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    piVar2 = piVar2 + 5;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00dd7270();
  FUN_00dd7270();
  FUN_00dd7340();
  return;
}

