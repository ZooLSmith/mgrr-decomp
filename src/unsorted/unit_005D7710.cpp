// src/unsorted/unit_005D7710.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D7710..005D7710, 1 functions

#include "mgrr.h"

// 005D7710  FUN_005d7710  size=312  [run]
void __thiscall FUN_005d7710(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  
  (**(code **)(*param_1 + 0x6c))(param_2);
  (**(code **)(*param_1 + 0x88))(param_3);
  switchD_0080dbae::default();
  if (param_1[0x21c] != 0) {
    param_1[0x21c] = 1;
    return;
  }
  iVar3 = 0xffff;
  if (param_4 == 0x1a) {
    iVar3 = 0x10d;
  }
  else if (param_4 == 0x1b) {
    iVar3 = 0x10c;
  }
  else if (param_4 == 0x1c) {
    iVar3 = 0x107;
  }
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) || ((iVar3 != 0x10d && (iVar3 != 0x10c)))) {
    if (iVar3 == 0xffff) goto LAB_005d7809;
  }
  else {
    iVar3 = 0x2b2;
  }
  FUN_004039a0(iVar3,param_1,0);
  iVar3 = FUN_00a7c8a0();
  FUN_00e020f0(*(undefined4 *)(iVar3 + 0x4f0));
  iVar3 = FUN_00d467a0();
  if (iVar3 == 0) {
    FUN_00a8c930(0,&stack0xfffffe98);
    param_1[0x21c] = 1;
    return;
  }
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 != 0) {
    puVar4 = &stack0xfffffe94;
    FUN_00a7c8a0(puVar4);
    FUN_00a963e0(puVar4);
  }
LAB_005d7809:
  param_1[0x21c] = 1;
  return;
}

