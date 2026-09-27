// src/unsorted/unit_00A12010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A12010..00A12110, 2 functions

#include "mgrr.h"

// 00A12010  FUN_00a12010  size=248  [run]
undefined4 __thiscall FUN_00a12010(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x360) == 0) {
    iVar4 = param_1;
  }
  if (*(int *)(param_2 + 0x360) != 0) {
    param_2 = *(int *)(param_2 + 0x360);
  }
  iVar2 = *(int *)(iVar4 + 0x360);
  if (*(int *)(iVar4 + 0x360) == 0) {
    iVar2 = iVar4;
  }
  iVar1 = *(int *)(param_2 + 0x360);
  if (*(int *)(param_2 + 0x360) == 0) {
    iVar1 = param_2;
  }
  if (*(short *)(iVar2 + 0x358) != *(short *)(iVar1 + 0x358)) {
    return 0;
  }
  puVar3 = (undefined4 *)(param_2 + 0xb0);
  puVar5 = (undefined4 *)(iVar4 + 0xb0);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0xf0);
  puVar5 = (undefined4 *)(iVar4 + 0xf0);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00a074d0(param_2,1);
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x358)) {
    iVar2 = 0;
    do {
      if ((iVar4 < 0) || (*(short *)(param_2 + 0x358) <= iVar4)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x350) + iVar2;
      }
      FUN_00a074d0(iVar1,0);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0xb0;
    } while (iVar4 < *(short *)(param_1 + 0x358));
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x10000;
  return 1;
}

// 00A12110  FUN_00a12110  size=97  [run]
undefined4 __thiscall FUN_00a12110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x360) == 0) {
    iVar3 = param_1;
  }
  iVar1 = *(int *)(param_2 + 0x360);
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = param_2;
  }
  if (*(short *)(iVar3 + 0x358) != *(short *)(iVar2 + 0x358)) {
    return 0;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x360) = param_2;
  }
  else {
    *(int *)(param_1 + 0x360) = iVar1;
  }
  cModelBase::setRootPartsNo(*(undefined4 *)(param_1 + 0x368));
  return 1;
}

