// src/unsorted/unit_008F8A50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F8A50..008F90A0, 12 functions

#include "types.h"

// 008F8A50  FUN_008f8a50  size=39  [run]
undefined4 * __fastcall FUN_008f8a50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  _memset(param_1 + 2,0,0xa4);
  return param_1;
}

// 008F8A80  FUN_008f8a80  size=49  [run]
undefined4 * __fastcall FUN_008f8a80(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  _memset(param_1 + 2,0,0xa4);
  param_1[0x2b] = 0;
  return param_1;
}

// 008F8AC0  FUN_008f8ac0  size=315  [run]
undefined4 FUN_008f8ac0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xb0,&DAT_01b7c270);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_0164bb84);
    return 0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  _memset(puVar1 + 2,0,0xa4);
  puVar1[0x2b] = 0;
  iVar2 = FUN_00dd3500(4,&DAT_01b7c270);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00a7c930();
  }
  puVar1[0x2b] = iVar2;
  if (iVar2 == 0) {
    FUN_00dd4920(puVar1);
    FUN_00dd5650(&DAT_0164bb40);
    return 0;
  }
  FUN_004066f0();
  if ((*(char *)(param_1 + 0x28) == '\x01') &&
     (iVar2 = (int)*(char *)(param_1 + 0x20) + param_1 + 0x10, iVar2 != 0)) {
    *(undefined4 **)(iVar2 + 0xc) = puVar1;
    FUN_01190090(DAT_01b35da8);
    FUN_00406760();
    return 1;
  }
  if ((*(char *)(param_1 + 0x28) == '\x02') &&
     (iVar2 = (int)*(char *)(param_1 + 0x20) + param_1 + 0x10, iVar2 != 0)) {
    *(undefined4 **)(iVar2 + 0xc) = puVar1;
    FUN_011a31a0(DAT_01b35dac);
    FUN_00406760();
    return 1;
  }
  if (puVar1[0x2b] != 0) {
    FUN_00dd4920(puVar1[0x2b]);
    puVar1[0x2b] = 0;
  }
  FUN_00dd4920(puVar1);
  FUN_00dd5650(&DAT_0164bb10);
  FUN_00406760();
  return 0;
}

// 008F8C00  FUN_008f8c00  size=77  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8c00(int param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(uint **)(param_1 + 0xc);
    if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x400) == 0)) {
      *puVar1 = *puVar1 | 0x400;
      puVar1[0xc] = 0;
    }
    puVar1 = *(uint **)(param_1 + 0xc);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = *puVar1 | 0x400;
      puVar1[0xc] = param_2;
      return;
    }
  }
  _DAT_00000000 = _DAT_00000000 | 0x400;
  uRam00000030 = param_2;
  return;
}

// 008F8C50  FUN_008f8c50  size=113  [run]
void FUN_008f8c50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_004066f0();
  if ((param_1 == 0) || (uVar2 = *(uint *)(param_1 + 0xc), uVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((-(uint)(uVar2 != 0) & uVar2) + 0x30);
  }
  *param_2 = uVar3;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 008F8CF0  FUN_008f8cf0  size=33  [run]
bool FUN_008f8cf0(undefined4 param_1,uint param_2)

{
  uint local_4;
  
  FUN_008f8c50(param_1,&local_4);
  return (local_4 & param_2) != 0;
}

// 008F8D20  FUN_008f8d20  size=284  [run]
void FUN_008f8d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_24 = 0;
  if (0 < *(int *)(param_5 + 0xbc)) {
    local_30 = 0;
    do {
      iVar5 = *(int *)(param_5 + 0xb8) + local_30;
      local_28 = 0;
      if (0 < *(int *)(iVar5 + 0x1c)) {
        iVar2 = 8;
        iVar3 = 0;
        do {
          iVar1 = *(int *)(iVar5 + 0x18);
          local_1c = *(float *)(iVar3 + 4 + iVar1);
          local_18 = *(float *)(iVar2 + iVar1);
          if (*(short *)(iVar5 + 0x24) == 0xc) {
            local_20 = *(float *)(iVar3 + iVar1);
            iVar4 = iVar3 + 0xc;
            iVar2 = iVar2 + 0xc;
            local_14 = 0;
          }
          else {
            local_14 = *(undefined4 *)(iVar3 + 0xc + iVar1);
            iVar4 = iVar3 + 0x10;
            local_20 = *(float *)(iVar3 + iVar1);
            iVar2 = iVar2 + 0x10;
          }
          D3DXVec3TransformNormal(&local_20,&local_20,param_6);
          local_20 = *(float *)(param_6 + 0x30) + local_20;
          local_1c = *(float *)(param_6 + 0x34) + local_1c;
          local_18 = *(float *)(param_6 + 0x38) + local_18;
          FUN_008f80d0(param_2,param_3,param_4,&local_20);
          local_28 = local_28 + 1;
          iVar3 = iVar4;
        } while (local_28 < *(int *)(iVar5 + 0x1c));
      }
      local_30 = local_30 + 0x70;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_5 + 0xbc));
  }
  return;
}

// 008F8E50  FUN_008f8e50  size=348  [run]
void FUN_008f8e50(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = 0;
  local_24 = 0;
  if (0 < *(int *)(param_2 + 0xbc)) {
    local_34 = 0;
    do {
      iVar5 = *(int *)(param_2 + 0xb8) + local_34;
      local_28 = 0;
      if (0 < *(int *)(iVar5 + 0x1c)) {
        iVar4 = 8;
        iVar6 = 0;
        do {
          iVar3 = *(int *)(iVar5 + 0x18);
          local_1c = *(float *)(iVar6 + 4 + iVar3);
          local_18 = *(float *)(iVar4 + iVar3);
          if (*(short *)(iVar5 + 0x24) == 0xc) {
            local_20 = *(float *)(iVar6 + iVar3);
            iVar7 = iVar6 + 0xc;
            iVar4 = iVar4 + 0xc;
            local_14 = 0.0;
          }
          else {
            local_14 = *(float *)(iVar6 + 0xc + iVar3);
            iVar7 = iVar6 + 0x10;
            local_20 = *(float *)(iVar6 + iVar3);
            iVar4 = iVar4 + 0x10;
          }
          D3DXVec3TransformNormal(&local_20,&local_20,param_3);
          fVar1 = *(float *)(param_3 + 0x34);
          fVar2 = *(float *)(param_3 + 0x38);
          local_28 = local_28 + 1;
          *param_1 = *param_1 + *(float *)(param_3 + 0x30) + local_20;
          param_1[1] = fVar1 + local_1c + param_1[1];
          param_1[2] = fVar2 + local_18 + param_1[2];
          param_1[3] = local_14 + param_1[3];
          iVar6 = iVar7;
        } while (local_28 < *(int *)(iVar5 + 0x1c));
      }
      local_30 = local_30 + *(int *)(iVar5 + 0x1c);
      local_34 = local_34 + 0x70;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_2 + 0xbc));
    if (local_30 != 0) {
      fVar1 = (float)local_30;
      *param_1 = *param_1 / fVar1;
      param_1[1] = param_1[1] / fVar1;
      param_1[2] = param_1[2] / fVar1;
      param_1[3] = param_1[3] / fVar1;
    }
  }
  return;
}

// 008F8FB0  FUN_008f8fb0  size=53  [run]
void __thiscall FUN_008f8fb0(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 8);
  if (((*(uint *)(iVar1 + 0xc) <= uVar2) && (*(int *)(iVar1 + 4) != 0)) && (uVar2 != 0)) {
    *(uint *)(iVar1 + 8) = uVar2 - 1;
  }
  (**(code **)(*(int *)*param_1 + 0xc))(((int *)*param_1)[1],&param_2);
  return;
}

// 008F9000  FUN_008f9000  size=14  [run]
void __fastcall FUN_008f9000(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 008F9010  FUN_008f9010  size=136  [run]
void __thiscall FUN_008f9010(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x50) == 0) &&
     (iVar4 = *(int *)(param_1 + 4), iVar4 != iVar4 + *(int *)(param_1 + 8) * 4)) {
    while (iVar3 = FUN_00a81330(), iVar3 != param_2) {
      iVar4 = iVar4 + 4;
      if (iVar4 == *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4) {
        return;
      }
    }
    uVar1 = *(uint *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 4);
    iVar3 = iVar2 + uVar1 * 4;
    if ((((iVar4 != iVar3) && (iVar2 != 0)) && (uVar1 != 0)) && ((uint)(iVar4 - iVar2 >> 2) < uVar1)
       ) {
      while (iVar4 != iVar3 + -4) {
        iVar4 = iVar4 + 4;
        FUN_00a7c960(iVar4);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
  }
  return;
}

// 008F90A0  FUN_008f90a0  size=73  [run]
void __thiscall FUN_008f90a0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  param_1[1] = param_1[1] + 1;
  return;
}

