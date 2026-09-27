// src/unsorted/unit_00A1CD90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1CD90..00A1D230, 2 functions

#include "mgrr.h"

// 00A1CD90  FUN_00a1cd90  size=1085  [run]
void __thiscall FUN_00a1cd90(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    return;
  }
  iVar2 = *(int *)(param_3 + 0x4f0);
  iVar1 = FUN_00c1d6c0();
  if (((iVar1 != 0) || (iVar2 == 0)) || (iVar2 = FUN_00a7c7e0(), iVar2 == 0)) {
    FUN_00a1a050();
    if (*(int *)(param_3 + 0x4f0) == 0) {
      return;
    }
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 == (int *)0x0) {
      return;
    }
    FUN_00a1ae60(param_3,param_4);
    (**(code **)(*piVar3 + 0x1c8))();
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    FUN_00a1a840(param_2,param_3,param_4,0);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 1:
    iVar2 = FUN_00a1b140(param_3,param_4);
    if (iVar2 != 0) {
      FUN_00a1a840(param_2,param_3,param_4,1);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    break;
  case 2:
    iVar2 = HoldEntitySignalContext::HoldEntitySignalContext(param_3,param_4);
    if (iVar2 != 0) {
      HoldEntitySignalContext::HoldEntitySignalContext_2(param_3,param_4);
      FUN_00a1a7b0(param_2,param_3,param_4,2);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    break;
  case 3:
    FUN_00a1a890(param_2,param_3,param_4,0);
    FUN_00a1a840(param_2,param_3,param_4,3);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 4:
    iVar2 = FUN_00a1b1f0(param_3,param_4);
    if (iVar2 != 0) {
      FUN_00a1a890(param_2,param_3,param_4,1);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      return;
    }
    break;
  case 5:
    FUN_00a1a7f0(param_2,param_3,param_4,2);
    FUN_00a1a840(param_2,param_3,param_4,4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 6:
    FUN_00a1a890(param_2,param_3,param_4,3);
    FUN_00a1a730(param_2,param_3,param_4,0);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 7:
    FUN_00a1a890(param_2,param_3,param_4,4);
    FUN_00a1a730(param_2,param_3,param_4,1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 8:
    FUN_00a1a770(param_2,param_3,param_4,0);
    FUN_00a1a730(param_2,param_3,param_4,2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 9:
    FUN_00a1a770(param_2,param_3,param_4,1);
    FUN_00a1a730(param_2,param_3,param_4,3);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 10:
    FUN_00a1a770(param_2,param_3,param_4,2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0xb:
    FUN_00a1a770(param_2,param_3,param_4,3);
    FUN_00a1a730(param_2,param_3,param_4,4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0xc:
    FUN_00a1a770(param_2,param_3,param_4,4);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0xd:
    FUN_00a1a890(param_2,param_3,param_4,5);
    FUN_00a1a840(param_2,param_3,param_4,5);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0xe:
    iVar2 = FUN_00a1a540(param_3,param_4);
    if (iVar2 == 0) {
      FUN_00a1aeb0(param_3,1,param_4);
      return;
    }
    goto LAB_00a1d152;
  case 0xf:
    FUN_00a1a840(param_2,param_3,param_4,6);
    FUN_00a1a890(param_2,param_3,param_4,6);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0x10:
    FUN_00a1a890(param_2,param_3,param_4,7);
    FUN_00a1a840(param_2,param_3,param_4,7);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0x11:
    FUN_00a1a770(param_2,param_3,param_4,5);
    FUN_00a1a730(param_2,param_3,param_4,5);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0x12:
    FUN_00a1a770(param_2,param_3,param_4,6);
    FUN_00a1a730(param_2,param_3,param_4,6);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0x13:
    FUN_00a1bcd0(param_2,param_3,param_4,0);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0x14:
    FUN_00a1b750(param_3,param_4);
LAB_00a1d152:
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return;
  case 0x15:
    uVar4 = FUN_00a1d5c0();
    iVar2 = FUN_00a1c910(param_3,param_4,uVar4);
    if (iVar2 != 0) {
      FUN_00a1a050();
      return;
    }
    FUN_00a1aeb0(param_3,1,param_4);
    return;
  default:
    FUN_00a1a050();
    if ((*(int *)(param_3 + 0x4f0) != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0))
    {
      FUN_00a1ae60(param_3,param_4);
      (**(code **)(*piVar3 + 0x1c8))();
    }
  }
  return;
}

// 00A1D230  thunk_FUN_00a1bdd0  size=5  [run]
void __fastcall thunk_FUN_00a1bdd0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  FUN_00a1a050();
  if (param_1[0x2e] != 0) {
    FUN_00dd4940(param_1[0x2e]);
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -0x10);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_00974ae0();
    }
    FUN_00dd4940(iVar1 + -0x10);
  }
  iVar1 = param_1[10];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_009818f0();
    }
    FUN_00dd4940(iVar1 + -4);
  }
  if (param_1[8] != 0) {
    FUN_00dd4940(param_1[8]);
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    puVar3 = (undefined2 *)(iVar1 + 8 + iVar2 * 0xc);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar3[-6] = 0xffff;
      *(undefined4 *)(puVar3 + -10) = 1;
      *(undefined4 *)(puVar3 + -8) = 0;
      puVar3[-5] = 0xffff;
      puVar3 = puVar3 + -6;
    }
    FUN_00dd4940(iVar1 + -4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return;
}

