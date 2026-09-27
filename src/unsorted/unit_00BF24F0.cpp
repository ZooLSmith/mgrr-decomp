// src/unsorted/unit_00BF24F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BF24F0..00BF24F0, 1 functions

#include "mgrr.h"

// 00BF24F0  FUN_00bf24f0  size=145  [run]
void FUN_00bf24f0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  if ((((-1 < (int)DAT_01bea090) && (piVar3[0xc61] != 1)) && (-1 < (int)DAT_01bea090)) &&
     ((DAT_01bea090 & 2) == 0)) {
    fVar4 = (float10)(**(code **)(*piVar3 + 0x3b0))();
    FUN_00bc3000((float)(fVar4 * (float10)(float)piVar3[0xce3]));
  }
  return;
}

