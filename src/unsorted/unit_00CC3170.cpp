// src/unsorted/unit_00CC3170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC3170..00CC31E0, 2 functions

#include "types.h"

// 00CC3170  FUN_00cc3170  size=103  [run]
float10 __thiscall FUN_00cc3170(int param_1,int param_2,float param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x614 + param_2 * 4);
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 8) {
      return (float10)param_3 / (float10)(float)piVar2[1];
    }
  }
  return (float10)param_3 / (float10)0;
}

// 00CC31E0  FUN_00cc31e0  size=181  [run]
void __thiscall FUN_00cc31e0(int param_1,int param_2,int param_3,float param_4,int param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x614 + param_3 * 4);
  if (((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= uVar4)) ||
     (iVar3 = uVar4 * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x6ec + param_2 * 0x14) = 0;
    return;
  }
  iVar1 = param_1 + param_2 * 0x14;
  *(float *)(param_1 + (param_2 * 5 + 0x1b8) * 4) = param_4;
  *(int *)(iVar1 + 0x6dc) = param_3;
  if (*(float *)(iVar3 + 0xd0) <= param_4) {
    if (param_5 < 0) {
      fVar2 = 0.0;
      *(undefined2 *)(iVar1 + 0x6e8) = 0;
      goto LAB_00cc3269;
    }
  }
  else {
    param_5 = 6;
  }
  fVar2 = *(float *)(iVar3 + 0xd0);
  *(short *)(iVar1 + 0x6e8) = (short)param_5;
  fVar2 = (param_4 - fVar2) / (float)param_5;
LAB_00cc3269:
  *(float *)(iVar1 + 0x6e4) = fVar2;
  *(undefined4 *)(iVar1 + 0x6ec) = 1;
  return;
}

