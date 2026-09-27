// src/hw/cInfoHash.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9E0E0..00F9E260, 4 functions

#include "mgrr.h"

// 00F9E0E0  Hw::cInfoHash::pushNormal  size=113  [class]
undefined4 __thiscall Hw::cInfoHash::pushNormal(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00fa8e80();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016eba34);
    return 0;
  }
  param_1[2] = param_1[2] | 2;
  if ((param_1[2] & 0x2000000U) != 0) {
    param_1[2] = param_1[2] | 0x4000000;
    param_1[2] = param_1[2] & 0xfdffffff;
  }
  *puVar1 = param_2;
  if (*param_1 == 0) {
    puVar1[1] = 0;
    *param_1 = (int)puVar1;
    param_1[5] = param_1[5] + 1;
    return 1;
  }
  puVar1[1] = *param_1;
  param_1[2] = param_1[2] | 0x20;
  *param_1 = (int)puVar1;
  param_1[5] = param_1[5] + 1;
  return 1;
}

// 00F9E160  Hw::cInfoHash::pushReduce  size=91  [class]
undefined4 __thiscall Hw::cInfoHash::pushReduce(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00fa8e80();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016eba6c);
    return 0;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  *puVar1 = param_2;
  if (*(int *)(param_1 + 4) == 0) {
    puVar1[1] = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(undefined4 **)(param_1 + 4) = puVar1;
    return 1;
  }
  puVar1[1] = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(undefined4 **)(param_1 + 4) = puVar1;
  return 1;
}

// 00F9E1C0  Hw::cInfoHash::eraseNormal  size=153  [class]
undefined4 __thiscall Hw::cInfoHash::eraseNormal(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    FUN_00dd5650(&DAT_016ebaa8);
    return 0;
  }
  if (*piVar2 != param_2) {
    do {
      piVar1 = piVar2;
      piVar2 = (int *)piVar1[1];
      if (piVar2 == (int *)0x0) {
        FUN_00dd5650(&DAT_016ebaf0);
        return 1;
      }
    } while (*piVar2 != param_2);
    if (piVar1 != (int *)0x0) {
      piVar1[1] = piVar2[1];
      goto LAB_00f9e205;
    }
  }
  *param_1 = piVar2[1];
LAB_00f9e205:
  piVar2[1] = 0;
  FUN_00fa8fa0(piVar2);
  param_1[5] = param_1[5] + -1;
  if (*param_1 == 0) {
    param_1[2] = param_1[2] & 0xfffffffd;
    return 1;
  }
  if (*(int *)(*param_1 + 4) != 0) {
    return 1;
  }
  param_1[2] = param_1[2] & 0xffffffdf;
  return 1;
}

// 00F9E260  Hw::cInfoHash::eraseReduce  size=156  [class]
undefined4 __thiscall Hw::cInfoHash::eraseReduce(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 == (int *)0x0) {
    FUN_00dd5650(&DAT_016ebb30);
    return 0;
  }
  if (*piVar2 != param_2) {
    do {
      piVar1 = piVar2;
      piVar2 = (int *)piVar1[1];
      if (piVar2 == (int *)0x0) {
        FUN_00dd5650(&DAT_016ebb78);
        return 1;
      }
    } while (*piVar2 != param_2);
    if (piVar1 != (int *)0x0) {
      piVar1[1] = piVar2[1];
      goto LAB_00f9e2a7;
    }
  }
  *(int *)(param_1 + 4) = piVar2[1];
LAB_00f9e2a7:
  piVar2[1] = 0;
  FUN_00fa8fa0(piVar2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  if (*(int *)(param_1 + 4) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
    return 1;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 4) != 0) {
    return 1;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffef;
  return 1;
}

