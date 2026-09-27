// src/unsorted/unit_00F0AEF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F0AEF0..00F0B160, 5 functions

#include "types.h"

// 00F0AEF0  FUN_00f0aef0  size=234  [run]
undefined4 FUN_00f0aef0(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar2 = (uint *)*param_1;
  if ((puVar2[1] & 0x10000000) != 0) {
    return 1;
  }
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 4);
  uVar6 = 1;
  fVar4 = (float)(int)*(short *)(iVar3 + 0xea);
  fVar5 = *(float *)(param_2 + 0xc) + 1.0;
  if (fVar5 <= 0.0001) {
    fVar5 = 0.0001;
  }
  if (fVar5 <= fVar4) {
    *(float *)(param_1[1] + 0xc) = (fVar5 / fVar4) * *(float *)(*(int *)(param_2 + 8) + 0xc);
    return 1;
  }
  if ((*puVar2 & 0x8000) == 0) {
    *puVar2 = *puVar2 | 0x8000;
    *(undefined4 *)(param_1[1] + 0xc) = *(undefined4 *)(*(int *)(param_2 + 8) + 0xc);
    return 1;
  }
  cVar1 = *(char *)(iVar3 + 0x79);
  if (cVar1 == '\0') {
    uVar6 = FUN_00ef9a10(param_1,param_2);
  }
  else if (cVar1 == '\x01') {
    uVar6 = FUN_00ed4600(param_1,param_2);
    return uVar6;
  }
  return uVar6;
}

// 00F0AFE0  FUN_00f0afe0  size=215  [run]
undefined4 __thiscall FUN_00f0afe0(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_1 + 0x34) & 0x10000000) != 0) {
    return 1;
  }
  uVar4 = 1;
  fVar2 = (float)(int)*(short *)(*(int *)(param_2 + 4) + 0xea);
  fVar3 = *(float *)(param_1 + 0x118) + 1.0;
  if (fVar3 <= 0.0001) {
    fVar3 = 0.0001;
  }
  if (fVar3 <= fVar2) {
    *(float *)(param_1 + 0x25c) = (fVar3 / fVar2) * *(float *)(param_1 + 0x24c);
    return 1;
  }
  if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x8000;
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
    return 1;
  }
  cVar1 = *(char *)(*(int *)(param_2 + 4) + 0x79);
  if (cVar1 == '\0') {
    uVar4 = FUN_00ef9d70(param_2);
  }
  else if (cVar1 == '\x01') {
    uVar4 = FUN_00edb410(param_2);
    return uVar4;
  }
  return uVar4;
}

// 00F0B0C0  FUN_00f0b0c0  size=71  [run]
void FUN_00f0b0c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_2;
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    iVar3 = 0;
    do {
      pbVar2 = (byte *)(*(int *)(iVar1 + 0xc) + iVar3);
      if (((*pbVar2 & 1) != 0) && ((param_2[1] & *(uint *)(pbVar2 + 0x40)) != 0)) {
        FUN_00efa1f0(param_1,param_2,pbVar2 + 0x10);
      }
      iVar1 = *param_2;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x70;
    } while (uVar4 < *(uint *)(iVar1 + 0x14));
  }
  return;
}

// 00F0B110  FUN_00f0b110  size=68  [run]
void __thiscall FUN_00f0b110(int param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar3 = 0;
    do {
      pbVar1 = (byte *)(*(int *)(param_2 + 0xc) + iVar3);
      if (((*pbVar1 & 1) != 0) && ((*(uint *)(param_1 + 0x380) & *(uint *)(pbVar1 + 0x40)) != 0)) {
        FUN_00efa730(param_2,pbVar1 + 0x10);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (uVar2 < *(uint *)(param_2 + 0x14));
  }
  return;
}

// 00F0B160  FUN_00f0b160  size=974  [run]
void FUN_00f0b160(int *param_1,int *param_2)

{
  float fVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  iVar6 = param_1[1];
  if ((((param_2[2] & 1U) == 0) && ((*(byte *)*param_2 & 2) == 0)) &&
     ((*(uint *)*param_1 & 0x2000) == 0)) {
    fVar1 = *(float *)(iVar6 + 0x1c);
  }
  else {
    fVar1 = *(float *)(iVar6 + 0x24);
  }
  *(float *)param_1[3] = fVar1 * *(float *)(iVar6 + 0x20);
  local_14 = *(undefined4 *)param_1[2];
  local_1c = *param_2;
  local_38 = param_1[1];
  local_18 = *param_1;
  local_10 = param_2[3];
  local_34 = param_1[5];
  local_2c = param_1[7];
  local_28 = param_1[4];
  local_30 = param_1[6];
  local_24 = param_1[0x15];
  FUN_00efc530(&local_38,&local_1c);
  local_18 = param_1[1];
  local_10 = *(undefined4 *)param_1[3];
  local_14 = param_2[1];
  local_30 = param_1[0x13];
  local_1c = *param_2;
  local_2c = param_1[0x14];
  local_34 = param_1[2];
  local_38 = *param_1;
  iVar6 = FUN_00edb1a0(&local_38,&local_1c);
  if ((iVar6 == 0) || ((float)((undefined4 *)param_1[2])[1] == 0.0)) {
    *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x1000000;
  }
  else {
    local_34 = param_1[1];
    puVar2 = *(uint **)(local_34 + 4);
    if ((*puVar2 & 0x4000000) != 0) {
      local_30 = *(undefined4 *)param_1[2];
      local_28 = param_2[8];
      local_24 = param_2[9];
      local_2c = *(int *)param_1[3];
      local_38 = *param_2;
      local_20 = CONCAT31(local_20._1_3_,(char)param_2[10]);
      local_14 = param_1[0x17];
      local_10 = param_1[0x18];
      local_18 = param_1[0x16];
      local_1c = *param_1;
      FUN_00ed4db0(&local_1c,&local_38);
    }
    if ((*puVar2 & 0x40000000) != 0) {
      local_18 = param_1[1];
      local_10 = *(undefined4 *)param_1[2];
      local_14 = param_2[5];
      local_34 = param_1[10];
      local_c = *(undefined4 *)param_1[3];
      local_30 = param_1[0xb];
      local_1c = *param_2;
      local_8 = (float)param_2[1];
      local_38 = *param_1;
      FUN_00f0aef0(&local_38,&local_1c);
    }
    iVar6 = *(int *)(param_1[1] + 0x18);
    if (((iVar6 != 0) && ((*(byte *)(iVar6 + 0x68) & 0x40) != 0)) &&
       ((*(uint *)(*param_2 + 4) & 0x40000) == 0)) {
      puVar3 = (undefined4 *)param_1[6];
      *puVar3 = *(undefined4 *)(iVar6 + 0x40);
      puVar3[1] = *(undefined4 *)(iVar6 + 0x44);
      puVar3[2] = *(undefined4 *)(iVar6 + 0x48);
      puVar3[3] = *(undefined4 *)(iVar6 + 0x4c);
      *(uint *)*param_1 = *(uint *)*param_1 | 0x4000;
    }
    local_14 = param_1[7];
    local_18 = param_1[1];
    local_10 = param_2[4];
    local_8 = *(float *)param_1[2];
    local_4 = *(undefined4 *)param_1[3];
    local_38 = param_1[5];
    local_c = *(undefined4 *)param_1[0x15];
    local_1c = *param_1;
    local_34 = param_1[6];
    local_30 = param_1[0xe];
    FUN_00ef8770(&local_38,&local_1c);
    local_18 = param_1[1];
    local_38 = param_1[8];
    local_14 = *(undefined4 *)param_1[3];
    local_30 = param_1[0xf];
    local_34 = param_1[9];
    FUN_00ef96e0(&local_38,&local_1c);
    local_10 = *(undefined4 *)param_1[2];
    local_14 = param_1[1];
    local_c = *(undefined4 *)param_1[3];
    local_38 = param_1[0xc];
    local_18 = *param_1;
    local_8 = (float)param_2[1];
    local_1c = *param_2;
    local_34 = param_1[0xd];
    local_30 = param_1[0x10];
    FUN_00efa0d0(&local_38,&local_1c);
    if ((*(int *)param_1[0x15] == 0) && (pfVar4 = (float *)param_2[7], pfVar4 != (float *)0x0)) {
      pfVar5 = (float *)param_1[5];
      *pfVar5 = *pfVar4 + *pfVar5;
      pfVar5[1] = pfVar4[1] + pfVar5[1];
      pfVar5[2] = pfVar4[2] + pfVar5[2];
      pfVar5[3] = pfVar4[3] + pfVar5[3];
    }
    *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfeffffff;
  }
  local_18 = param_2[6];
  if (local_18 != 0) {
    local_1c = param_1[1];
    local_14 = *(undefined4 *)param_1[3];
    local_10 = param_2[2];
    local_30 = param_1[6];
    local_c = CONCAT22(local_c._2_2_,*(undefined2 *)((int)param_2 + 0x29));
    local_2c = param_1[0x11];
    local_34 = param_1[5];
    local_24 = param_1[0x14];
    local_20 = param_1[0x13];
    local_28 = param_1[0x12];
    local_38 = *param_1;
    FUN_00f0b0c0(&local_38,&local_1c);
  }
  if ((param_1[0x11] != 0) && (*(float *)(param_1[0x11] + 0x1c) != 0.0)) {
    *(float *)(param_1[0x11] + 0x1c) = *(float *)param_1[3] + *(float *)(param_1[0x11] + 0x1c);
  }
  return;
}

