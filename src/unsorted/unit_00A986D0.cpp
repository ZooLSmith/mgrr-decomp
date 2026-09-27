// src/unsorted/unit_00A986D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A986D0..00A98B90, 7 functions

#include "mgrr.h"

// 00A986D0  FUN_00a986d0  size=215  [run]
undefined4 __fastcall FUN_00a986d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_00de3850(0,"_col.hkx",0);
  iVar3 = FUN_00de3cf0(uVar2);
  if (iVar3 != 0) {
    iVar4 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = RigidBodyCollision::RigidBodyCollision();
    }
    *(int *)(param_1 + 0x7b0) = iVar4;
    if (iVar4 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4f0);
      uVar2 = FUN_00de3ee0(uVar2);
      FUN_008f6410(uVar1,iVar3,uVar2);
      if ((*(uint *)(param_1 + 0x364) & 0x2000000) == 0) {
        FUN_008f2ea0();
      }
      else {
        FUN_008f03a0(0x200000,1);
        FUN_008f01e0(0x3f800000);
      }
    }
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f2cd0(1);
  }
  return 1;
}

// 00A987F0  FUN_00a987f0  size=74  [run]
undefined1 * __fastcall FUN_00a987f0(undefined1 *param_1)

{
  cEspControler::cEspControler();
  FUN_00a7c930();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  FUN_00eaa6e0(0x41200000,0);
  return param_1;
}

// 00A98890  FUN_00a98890  size=76  [run]
void __fastcall FUN_00a98890(undefined2 *param_1)

{
  *param_1 = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1b4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  *(undefined4 *)(param_1 + 0x22a) = 0;
  RayCastManager::getWork(param_1 + 0x228);
  return;
}

// 00A98940  FUN_00a98940  size=183  [run]
int * FUN_00a98940(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iStack_8;
  undefined4 uStack_4;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  iVar2 = FUN_00a8f420(param_2);
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(iVar2 + 4))(param_3);
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    iStack_8 = *(int *)(iVar2 + 8);
    uStack_4 = param_4;
    pcVar1 = *(code **)(*piVar3 + 0x114);
    piVar3[0x181] = iStack_8;
    piVar3[0x182] = iStack_8;
    (*pcVar1)(&iStack_8);
    if (*(int *)(param_1 + 0x4c) != 0) {
      pcVar1 = *(code **)(*piVar3 + 0x40);
      piVar3[0x13c] = param_1;
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        (**(code **)(*piVar3 + 0x44))();
        (**(code **)*piVar3)(1);
        return (int *)0x0;
      }
    }
    return piVar3;
  }
  return (int *)0x0;
}

// 00A98A20  FUN_00a98a20  size=191  [run]
undefined4 FUN_00a98a20(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (((*(int *)(param_1 + 0x4f0) != 0) && (*(int *)(*(int *)(param_1 + 0x4f0) + 0x4c) != 0)) &&
     (iVar1 = FUN_00a7c800(), iVar1 != 0)) {
    uVar2 = *(uint *)(iVar1 + 0x4b0);
  }
  if (((DAT_01bea060 & 0x1000) != 0) || ((char)DAT_01bea060 < '\0')) {
    if ((0xa0200 < (int)uVar2) && ((int)uVar2 < 0xa020a)) {
      return 0;
    }
    if (uVar2 != 0xaf000) {
      return 1;
    }
    return 0;
  }
  if ((0x7fffff < (int)uVar2) && ((int)uVar2 < 0x800005)) {
    return 0;
  }
  uVar2 = uVar2 & 0xffff0000;
  if ((int)uVar2 < 0x90001) {
    if (uVar2 == 0x90000) {
      return 0;
    }
    if (uVar2 == 0x10000) {
      uVar3 = 1;
    }
    else {
      if (uVar2 != 0x20000) goto LAB_00a98ab3;
      uVar3 = 2;
    }
    uVar2 = FUN_0043ff60(uVar3);
  }
  else {
    if (uVar2 == 0xd0000) {
      return 0;
    }
    if (uVar2 == 0xf0000) {
      return 0;
    }
LAB_00a98ab3:
    uVar2 = DAT_01bea070 & 0x10000000;
  }
  if (uVar2 != 0) {
    return 1;
  }
  return 0;
}

// 00A98AE0  FUN_00a98ae0  size=175  [run]
void __thiscall FUN_00a98ae0(undefined4 param_1,code *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  DAT_01bea060 = DAT_01bea060 | 0x2000;
  if (param_3 < 1) {
LAB_00a98b54:
    if (param_4 <= param_5) {
      do {
        iVar1 = FUN_00a8f490(param_4,param_4);
        if (iVar1 != 0) {
          (*param_2)(0,param_1);
        }
        param_4 = param_4 + 1;
      } while (param_4 <= param_5);
      DAT_01bea060 = DAT_01bea060 & 0xffffdfff;
      return;
    }
  }
  else {
    if (param_3 < 6) {
      if (param_3 < 2) goto LAB_00a98b54;
    }
    else {
      param_3 = 5;
    }
    FUN_00dd75d0(param_2,param_1,0xffffffff);
    for (; param_4 <= param_5; param_4 = param_4 + 1) {
      iVar1 = FUN_00a8f490(param_4,param_4);
      if (iVar1 != 0) {
        FUN_00dd79a0(param_3);
      }
    }
  }
  DAT_01bea060 = DAT_01bea060 & 0xffffdfff;
  return;
}

// 00A98B90  FUN_00a98b90  size=149  [run]
void __thiscall
FUN_00a98b90(undefined4 param_1,code *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  DAT_01bea060 = DAT_01bea060 | 0x2000;
  if (param_3 < 1) {
LAB_00a98bf7:
    iVar1 = FUN_00a8f490(param_4,param_5);
    if (iVar1 != 0) {
      (*param_2)(0,param_1);
      DAT_01bea060 = DAT_01bea060 & 0xffffdfff;
      return;
    }
  }
  else {
    if (param_3 < 6) {
      if (param_3 < 2) goto LAB_00a98bf7;
    }
    else {
      param_3 = 5;
    }
    FUN_00dd75d0(param_2,param_1,0xffffffff);
    iVar1 = FUN_00a8f490(param_4,param_5);
    if (iVar1 != 0) {
      FUN_00dd79a0(param_3);
    }
  }
  DAT_01bea060 = DAT_01bea060 & 0xffffdfff;
  return;
}

