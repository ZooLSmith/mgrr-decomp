// src/unsorted/unit_00A19070.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A19070..00A191F0, 3 functions

#include "types.h"

// 00A19070  FUN_00a19070  size=265  [run]
void __thiscall FUN_00a19070(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_14 = *param_1;
  local_18 = param_1[3];
  local_10 = param_1[4];
  local_c = param_1[5];
  iVar1 = *(int *)(param_2 + 0x334) + 0x10;
  local_1c = param_3;
  local_20 = iVar1;
  FUN_00a134e0(&local_20);
  if (((*(char *)(param_2 + 0x470) == '\0') || ((*(byte *)(param_2 + 0x472) & 0x80) == 0)) ||
     (*(char *)(param_2 + 0x471) == '\0')) {
    local_8 = *param_1;
    local_c = param_1[2];
    local_10 = param_1[3];
    local_14 = *(undefined4 *)(*(int *)(param_2 + 0x330) + 100);
    local_1c = *(undefined4 *)(param_2 + 800);
    local_18 = param_3;
    iVar2 = *(int *)(param_2 + 0x360);
    if (*(int *)(param_2 + 0x360) == 0) {
      iVar2 = param_2;
    }
    local_20 = iVar1;
    local_4 = iVar2;
    FUN_00a135c0(&local_20);
    if ((*(uint *)(param_2 + 0x364) & 0x10000) != 0) {
      FUN_00a0c350();
      FUN_00a15bc0(iVar2,iVar2 + 0x350);
      *(uint *)(param_2 + 0x364) = *(uint *)(param_2 + 0x364) & 0xfffeffff;
    }
    FUN_00a0bff0(*(undefined4 *)(param_2 + 800),param_1[6]);
  }
  return;
}

// 00A19180  FUN_00a19180  size=100  [run]
void __thiscall FUN_00a19180(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if ((param_1[1] == param_2) && ((*(uint *)(param_2 + 0x364) & 0x100000) != 0)) {
      iVar1 = FUN_00d467a0();
      if (iVar1 != 0) {
        *(uint *)(param_2 + 0x364) = *(uint *)(param_2 + 0x364) | 0x1000;
        FUN_00a19070(param_2,param_3);
        return;
      }
      *(uint *)(param_2 + 0x364) = *(uint *)(param_2 + 0x364) | 0x200000;
    }
    FUN_00a19070(param_2,param_3);
  }
  return;
}

// 00A191F0  FUN_00a191f0  size=17  [run]
void FUN_00a191f0(void)

{
  cModelDataResource::release();
  FUN_00a147a0();
  return;
}

