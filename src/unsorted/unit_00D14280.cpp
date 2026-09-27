// src/unsorted/unit_00D14280.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D14280..00D14440, 2 functions

#include "mgrr.h"

// 00D14280  FUN_00d14280  size=437  [run]
void __thiscall FUN_00d14280(int param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_8 [8];
  
  uVar3 = FUN_00fdbc60();
  FUN_0095c6a0(local_8,&DAT_016563c4,uVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  uVar3 = FUN_00fdbc60();
  if ((param_2 < 0.001) && (0.0 < param_2)) {
    uVar3 = 1;
  }
  FUN_0095c6a0(local_8,".%d%%%%",uVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0x24) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)))) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  fVar6 = (float10)FUN_00cff240(*(undefined4 *)(param_1 + 0x24));
  iVar4 = *(int *)(param_1 + 0x18);
  if ((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x24))) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(uint *)(param_1 + 0x24) * 0x400 + 0x50 + *(int *)(iVar4 + 0x7c);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
     (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar4 = 0;
    }
    fVar6 = (float10)FUN_00ddb510((float)((float10)*(float *)(param_1 + 0x80) -
                                         fVar6 * (float10)*(float *)(iVar5 + 0x10)),0);
    *(float *)(iVar4 + 0xc0) = (float)fVar6;
    return;
  }
  return;
}

// 00D14440  FUN_00d14440  size=437  [run]
void __thiscall FUN_00d14440(int param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_8 [8];
  
  uVar3 = FUN_00fdbc60();
  FUN_0095c6a0(local_8,&DAT_016563c4,uVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  uVar3 = FUN_00fdbc60();
  if ((param_2 < 0.001) && (0.0 < param_2)) {
    uVar3 = 1;
  }
  FUN_0095c6a0(local_8,".%d%%%%",uVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0x24) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)))) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  fVar6 = (float10)FUN_00d00730(*(undefined4 *)(param_1 + 0x24));
  iVar4 = *(int *)(param_1 + 0x18);
  if ((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x24))) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(uint *)(param_1 + 0x24) * 0x400 + 0x50 + *(int *)(iVar4 + 0x7c);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
     (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar4 = 0;
    }
    fVar6 = (float10)FUN_00ddb510((float)((float10)*(float *)(param_1 + 0xcc) -
                                         fVar6 * (float10)*(float *)(iVar5 + 0x10)),0);
    *(float *)(iVar4 + 0xc0) = (float)fVar6;
    return;
  }
  return;
}

