// src/unsorted/unit_00AC5D00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC5D00..00AC5EA0, 4 functions

#include "mgrr.h"

// 00AC5D00  FUN_00ac5d00  size=190  [run]
void FUN_00ac5d00(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  
  switch(param_1) {
  case 0:
    FUN_009577e0(0x23a6f56d,param_2,0,0);
    return;
  case 1:
    FUN_00957930(param_2,0);
    return;
  case 2:
    FUN_00955810(param_2,1);
    return;
  case 3:
    sVar1 = FUN_00dde2d0(1,2);
    FUN_00955810(param_2,(int)sVar1);
    return;
  case 4:
    sVar1 = FUN_00dde2d0(1,5);
    FUN_00955810(param_2,(int)sVar1);
    return;
  case 5:
    sVar1 = FUN_00dde2d0(10,0x14);
    FUN_00955810(param_2,(int)sVar1);
  }
  return;
}

// 00AC5DE0  FUN_00ac5de0  size=56  [run]
undefined4 FUN_00ac5de0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x32c))();
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00AC5E20  FUN_00ac5e20  size=51  [run]
undefined4 FUN_00ac5e20(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = FUN_00b7e570();
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00AC5EA0  FUN_00ac5ea0  size=219  [run]
undefined4 FUN_00ac5ea0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_24;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x150) != 0xffff) {
    FUN_00c76e60();
    local_30 = *(undefined4 *)(param_1 + 0x150);
    local_2c = FUN_00a81330();
    iVar1 = *(int *)(param_1 + 0x364);
    local_50 = *(undefined4 *)(iVar1 + 0x40);
    local_4c = *(undefined4 *)(iVar1 + 0x44);
    local_48 = *(undefined4 *)(iVar1 + 0x48);
    local_44 = *(undefined4 *)(iVar1 + 0x4c);
    if (*(int *)(param_1 + 0x36c) != 0) {
      local_40 = *(undefined4 *)(param_1 + 400);
      local_24 = *(undefined2 *)(param_1 + 0x1ba);
      local_3c = *(undefined4 *)(param_1 + 0x194);
      local_20 = 1;
      local_38 = *(undefined4 *)(param_1 + 0x198);
      local_34 = *(undefined4 *)(param_1 + 0x19c);
    }
    FUN_00c765b0();
    uVar2 = FUN_00c770c0(&local_50,&local_54);
    *(undefined4 *)(param_1 + 0x378) = local_54;
    return uVar2;
  }
  return 0;
}

