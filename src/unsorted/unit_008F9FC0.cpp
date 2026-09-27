// src/unsorted/unit_008F9FC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F9FC0..008FA330, 4 functions

#include "mgrr.h"

// 008F9FC0  FUN_008f9fc0  size=222  [run]
void FUN_008f9fc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar2 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = -0x80000000;
  FUN_01130a20(&local_2c);
  iVar1 = 0;
  if (0 < local_28) {
    do {
      local_20 = *(float *)(iVar2 + local_2c);
      local_1c = *(float *)(iVar2 + 4 + local_2c);
      local_18 = *(float *)(iVar2 + 8 + local_2c);
      local_14 = *(undefined4 *)(iVar2 + 0xc + local_2c);
      D3DXVec3TransformNormal(&local_20,&local_20,param_6);
      local_20 = *(float *)(param_6 + 0x30) + local_20;
      local_1c = *(float *)(param_6 + 0x34) + local_1c;
      local_18 = *(float *)(param_6 + 0x38) + local_18;
      FUN_008f80d0(param_2,param_3,param_4,&local_20);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < local_28);
  }
  local_28 = 0;
  if (-1 < local_24) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 << 4);
  }
  return;
}

// 008FA0A0  FUN_008fa0a0  size=305  [run]
void FUN_008fa0a0(int *param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = -0x80000000;
  FUN_01130a20(&local_3c);
  local_40 = 0;
  if (0 < local_38) {
    do {
      local_30 = *(float *)(iVar2 + local_3c);
      local_2c = *(float *)(iVar2 + 4 + local_3c);
      local_28 = *(float *)(iVar2 + 8 + local_3c);
      local_24 = *(float *)(iVar2 + 0xc + local_3c);
      D3DXVec3TransformNormal(&local_30,&local_30,param_3);
      local_30 = *(float *)(param_3 + 0x30) + local_30;
      local_2c = *(float *)(param_3 + 0x34) + local_2c;
      local_28 = *(float *)(param_3 + 0x38) + local_28;
      fStack_14 = local_24;
      fStack_20 = local_30;
      fStack_1c = local_2c;
      fStack_18 = local_28;
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
      }
      pfVar1 = (float *)(param_1[1] * 0x10 + *param_1);
      iVar2 = iVar2 + 0x10;
      *pfVar1 = fStack_20;
      pfVar1[1] = fStack_1c;
      pfVar1[2] = fStack_18;
      pfVar1[3] = fStack_14;
      param_1[1] = param_1[1] + 1;
      local_40 = local_40 + 1;
    } while (local_40 < local_38);
  }
  local_38 = 0;
  if (-1 < local_34) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_3c,local_34 << 4);
  }
  return;
}

// 008FA1E0  FUN_008fa1e0  size=321  [run]
void FUN_008fa1e0(float *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar2 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = -0x80000000;
  FUN_01130a20(&local_2c);
  if (local_28 != 0) {
    local_30 = 0;
    if (0 < local_28) {
      do {
        local_20 = *(float *)(iVar2 + local_2c);
        local_1c = *(float *)(iVar2 + 4 + local_2c);
        local_18 = *(float *)(iVar2 + 8 + local_2c);
        local_14 = *(float *)(iVar2 + 0xc + local_2c);
        D3DXVec3TransformNormal(&local_20,&local_20,param_3);
        local_20 = *(float *)(param_3 + 0x30) + local_20;
        local_30 = local_30 + 1;
        iVar2 = iVar2 + 0x10;
        local_1c = *(float *)(param_3 + 0x34) + local_1c;
        local_18 = *(float *)(param_3 + 0x38) + local_18;
        *param_1 = *param_1 + local_20;
        param_1[1] = local_1c + param_1[1];
        param_1[2] = local_18 + param_1[2];
        param_1[3] = param_1[3] + local_14;
      } while (local_30 < local_28);
    }
    fVar1 = (float)local_28;
    *param_1 = *param_1 / fVar1;
    param_1[1] = param_1[1] / fVar1;
    param_1[2] = param_1[2] / fVar1;
    param_1[3] = param_1[3] / fVar1;
  }
  if (-1 < local_24) {
    local_28 = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 << 4);
  }
  return;
}

// 008FA330  FUN_008fa330  size=102  [run]
void __fastcall FUN_008fa330(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008fa390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}

