// src/unsorted/unit_00AC5E20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC5E20..00AC5EA0, 2 functions

#include "types.h"

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

