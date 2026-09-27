// src/unsorted/unit_00C6E970.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C6E970..00C6EC80, 9 functions

#include "types.h"

// 00C6E970  FUN_00c6e970  size=75  [run]
uint __thiscall FUN_00c6e970(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar2 < param_3) {
    return uVar2 & 0xffffff00;
  }
  FID_conflict__memcpy(param_2,*(void **)(param_1 + 0x10),param_3);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (param_3 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
    return CONCAT31(uVar3,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar3,1);
}

// 00C6E9C0  FUN_00c6e9c0  size=116  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00c6e9c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01d644ac & 1) == 0) {
    _DAT_01d644ac = _DAT_01d644ac | 1;
    DAT_01d644a8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01d644a8;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01d644a8);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00c6da10(param_1,param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00C6EA40  FUN_00c6ea40  size=65  [run]
void __fastcall FUN_00c6ea40(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C6EA90  FUN_00c6ea90  size=93  [run]
undefined4 __thiscall FUN_00c6ea90(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00c6d5a0();
  return 1;
}

// 00C6EAF0  FUN_00c6eaf0  size=103  [run]
int * __thiscall FUN_00c6eaf0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 4);
  iVar2 = *(int *)(*param_3 + 8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)(*param_3 + 4) = iVar2;
  *(int *)(*param_3 + 8) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00C6EB60  FUN_00c6eb60  size=65  [run]
void __fastcall FUN_00c6eb60(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C6EBB0  FUN_00c6ebb0  size=93  [run]
undefined4 __thiscall FUN_00c6ebb0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00c6d680();
  return 1;
}

// 00C6EC10  FUN_00c6ec10  size=103  [run]
int * __thiscall FUN_00c6ec10(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 4);
  iVar2 = *(int *)(*param_3 + 8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)(*param_3 + 4) = iVar2;
  *(int *)(*param_3 + 8) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00C6EC80  FUN_00c6ec80  size=124  [run]
void FUN_00c6ec80(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  
  puVar2 = param_1;
  cVar4 = (**(code **)*param_1)();
  if (cVar4 == '\0') {
    uVar1 = *param_3;
    param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
    param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
    uVar3 = param_1._1_1_;
    param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
    param_1._0_3_ = CONCAT12(uVar3,param_1._0_2_);
    param_1 = (undefined4 *)CONCAT13((char)uVar1,param_1._0_3_);
    *param_3 = param_1;
  }
  FUN_00c6d730(puVar2,param_2,param_3);
  uVar1 = *param_3;
  param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
  param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
  param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
  uVar3 = param_1._1_1_;
  param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
  param_1._0_3_ = CONCAT12(uVar3,param_1._0_2_);
  param_1 = (undefined4 *)CONCAT13((char)uVar1,param_1._0_3_);
  *param_3 = param_1;
  return;
}

