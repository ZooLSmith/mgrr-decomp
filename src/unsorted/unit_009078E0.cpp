// src/unsorted/unit_009078E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009078E0..00907A60, 3 functions

#include "mgrr.h"

// 009078E0  FUN_009078e0  size=61  [run]
void __fastcall FUN_009078e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (piVar1 = piVar2, piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
  }
  return;
}

// 00907980  FUN_00907980  size=93  [run]
void __thiscall FUN_00907980(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  return;
}

// 00907A60  FUN_00907a60  size=165  [run]
void __thiscall FUN_00907a60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0x14))();
  iVar4 = 8 - param_1[0x1d];
  if (0 < iVar4) {
    puVar3 = (undefined4 *)(param_1[0x1d] * 0x60 + param_1[0x1c] + 0x14);
    do {
      if (puVar3 != (undefined4 *)0x14) {
        puVar3[-1] = 0x3f800000;
        *puVar3 = 0xffffffff;
        puVar3[0xb] = 0;
        puVar3[3] = 0xffffffff;
        puVar3[0xf] = 0;
      }
      puVar3 = puVar3 + 0x18;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0x1d] = 8;
  iVar4 = param_1[9];
  iVar1 = param_1[10];
  iVar2 = param_1[0xb];
  *param_2 = param_1[8];
  param_2[1] = iVar4;
  param_2[2] = iVar1;
  param_2[3] = iVar2;
  iVar4 = param_1[0xd];
  iVar1 = param_1[0xe];
  iVar2 = param_1[0xf];
  param_2[4] = param_1[0xc];
  param_2[5] = iVar4;
  param_2[6] = iVar1;
  param_2[7] = iVar2;
  *(char *)(param_2 + 8) = (char)param_1[0x10];
  param_2[9] = param_1[0x11];
  param_2[0xd] = 8;
  param_2[0xc] = param_1[0x1c];
  param_2[0xe] = 0;
  *(undefined2 *)(param_2 + 0xf) = 1;
  param_1[0xe0] = param_1[8];
  param_1[0xe1] = param_1[9];
  param_1[0xe2] = param_1[10];
  param_1[0xe3] = param_1[0xb];
  param_1[0xe4] = param_1[0xc];
  param_1[0xe5] = param_1[0xd];
  param_1[0xe6] = param_1[0xe];
  param_1[0xe7] = param_1[0xf];
  return;
}

