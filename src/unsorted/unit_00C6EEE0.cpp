// src/unsorted/unit_00C6EEE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C6EEE0..00C6F180, 3 functions

#include "mgrr.h"

// 00C6EEE0  FUN_00c6eee0  size=164  [run]
int * FUN_00c6eee0(int *param_1,int *param_2,int param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_3 - (int)param_2) / 0x18;
  if (0 < iVar3) {
    do {
      iVar2 = iVar3 / 2;
      piVar1 = param_2 + iVar2 * 6;
      if (*(int *)(*piVar1 + 0xc) < *(int *)(*param_4 + 0xc)) {
        param_2 = piVar1 + 6;
        iVar2 = iVar3 + (-1 - iVar2);
      }
      else if (*(int *)(*piVar1 + 0xc) <= *(int *)(*param_4 + 0xc)) {
        iVar3 = FUN_00c6b6a0(piVar1 + 6,param_2 + iVar3 * 6,param_4,param_5,0);
        iVar2 = FUN_00c6d850(param_2,piVar1,param_4,param_5,0);
        *param_1 = iVar2;
        param_1[1] = iVar3;
        return param_1;
      }
      iVar3 = iVar2;
    } while (0 < iVar2);
  }
  *param_1 = (int)param_2;
  param_1[1] = (int)param_2;
  return param_1;
}

// 00C6EF90  FUN_00c6ef90  size=328  [run]
void FUN_00c6ef90(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  char cVar6;
  
  puVar4 = param_1;
  cVar6 = (**(code **)*param_1)();
  if (cVar6 == '\0') {
    uVar1 = *param_3;
    param_1._0_1_ = (undefined1)uVar1;
    param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
    param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
    uVar2 = CONCAT11(param_1._0_1_,param_1._1_1_);
    param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
    param_1 = (undefined4 *)CONCAT22(uVar2,param_1._0_2_);
    *param_3 = param_1;
    uVar1 = param_3[1];
    param_1._0_1_ = (undefined1)uVar1;
    param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
    param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
    uVar2 = CONCAT11(param_1._0_1_,param_1._1_1_);
    param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
    param_1 = (undefined4 *)CONCAT22(uVar2,param_1._0_2_);
    param_3[1] = param_1;
    uVar1 = param_3[2];
    param_1._0_1_ = (undefined1)uVar1;
    uVar3 = param_1._0_1_;
    param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
    param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
    uVar5 = param_1._1_1_;
    param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
    param_1._0_3_ = CONCAT12(uVar5,param_1._0_2_);
    param_1 = (undefined4 *)CONCAT13(uVar3,param_1._0_3_);
    param_3[2] = param_1;
  }
  FUN_00c6e9c0(puVar4,param_2,param_3);
  uVar1 = *param_3;
  param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
  param_1._0_1_ = (undefined1)uVar1;
  uVar3 = param_1._0_1_;
  param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
  param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
  uVar5 = param_1._1_1_;
  param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
  param_1._0_3_ = CONCAT12(uVar5,param_1._0_2_);
  param_1 = (undefined4 *)CONCAT13(uVar3,param_1._0_3_);
  *param_3 = param_1;
  uVar1 = param_3[1];
  param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
  param_1._0_1_ = (undefined1)uVar1;
  uVar3 = param_1._0_1_;
  param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
  param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
  uVar5 = param_1._1_1_;
  param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
  param_1._0_3_ = CONCAT12(uVar5,param_1._0_2_);
  param_1 = (undefined4 *)CONCAT13(uVar3,param_1._0_3_);
  param_3[1] = param_1;
  uVar1 = param_3[2];
  param_1._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
  param_1._0_1_ = (undefined1)uVar1;
  uVar3 = param_1._0_1_;
  param_1._2_1_ = (undefined1)((uint)uVar1 >> 0x10);
  param_1._1_1_ = (undefined1)((uint)uVar1 >> 8);
  uVar5 = param_1._1_1_;
  param_1._0_2_ = CONCAT11(param_1._2_1_,param_1._3_1_);
  param_1._0_3_ = CONCAT12(uVar5,param_1._0_2_);
  param_1 = (undefined4 *)CONCAT13(uVar3,param_1._0_3_);
  param_3[2] = param_1;
  return;
}

// 00C6F180  FUN_00c6f180  size=90  [run]
void __thiscall FUN_00c6f180(int param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  undefined2 uVar2;
  
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    sVar1 = *(short *)(param_1 + 0x1e);
    if (sVar1 < 0) {
      uVar2 = FUN_00c6dc80(&param_3);
      *(undefined2 *)(param_1 + 0x1e) = uVar2;
    }
    else if ((param_3[0x1f] == 0) || (*(int *)(param_3[0x1f] + 0xc) <= (int)sVar1)) {
      param_3 = (undefined4 *)0x0;
    }
    else {
      param_3 = (undefined4 *)(param_3[0x1d] + sVar1 * 4);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
  }
  return;
}

