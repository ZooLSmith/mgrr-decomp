// src/unsorted/unit_00B92A30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B92A30..00B930D0, 12 functions

#include "mgrr.h"

// 00B92A30  FUN_00b92a30  size=187  [run]
void FUN_00b92a30(int *param_1,undefined4 *param_2,float param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar2);
  }
  local_70 = 0;
  local_6c = 0x447a0000;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0xc47a0000;
  local_58[0] = 0;
  param_3 = param_3 * 0.017453292;
  local_74 = param_3;
  D3DXMatrixRotationZ();
  puVar1 = auStack_78;
  D3DXVec3TransformNormal(puVar1,puVar1,local_58);
  D3DXMatrixRotationZ(auStack_64);
  D3DXVec3TransformNormal(auStack_7c,auStack_7c,&local_6c);
  *param_1 = (int)local_50;
  param_1[1] = (int)puVar1;
  param_1[2] = (int)local_50;
  param_1[3] = (int)param_3;
  return;
}

// 00B92AF0  FUN_00b92af0  size=232  [run]
void FUN_00b92af0(int *param_1,undefined4 *param_2,float param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  float fVar5;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if ((*(byte *)(uVar1 + 0x310) & 1) == 0) {
    local_70 = 0x447a0000;
    local_60 = 0xc47a0000;
  }
  else {
    local_70 = 0xc47a0000;
    local_60 = 0x447a0000;
  }
  local_6c = 0;
  local_68 = 0;
  local_5c = 0;
  local_58[0] = 0;
  fVar5 = (param_3 + 90.0) * 0.017453292;
  local_74 = fVar5;
  D3DXMatrixRotationZ();
  puVar3 = auStack_78;
  D3DXVec3TransformNormal(puVar3,puVar3,local_58);
  D3DXMatrixRotationZ(auStack_64);
  D3DXVec3TransformNormal(auStack_7c,auStack_7c,&local_6c);
  *param_1 = (int)local_50;
  param_1[1] = (int)puVar3;
  param_1[2] = (int)local_50;
  param_1[3] = (int)fVar5;
  return;
}

// 00B92BE0  FUN_00b92be0  size=124  [run]
void FUN_00b92be0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (((((*(int *)(uVar1 + 0x2f4) == 0) && (*(int *)(uVar1 + 0x2f8) == 0)) &&
       (*(int *)(uVar1 + 0x2fc) == 0)) &&
      (((*(int *)(uVar1 + 0x300) == 0 && (*(int *)(uVar1 + 0x304) < 1)) &&
       (*(float *)(uVar1 + 0x5d8) <= 0.0)))) || (param_4 != 0)) {
    FUN_00d82510(0xb,param_3);
  }
  return;
}

// 00B92C60  FUN_00b92c60  size=84  [run]
undefined4 FUN_00b92c60(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar2);
  }
  iVar1 = FUN_00a81330();
  if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && (*(int *)(iVar1 + 0x878) != 0)) {
    return 1;
  }
  return 0;
}

// 00B92CC0  FUN_00b92cc0  size=104  [run]
void FUN_00b92cc0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar3);
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35260;
    (**(code **)(*piVar2 + 4))(&DAT_01b35260);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      piVar2[0x234] = 0;
    }
  }
  return;
}

// 00B92D70  FUN_00b92d70  size=114  [run]
void FUN_00b92d70(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  char *pcVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  switch(*(undefined4 *)(uVar2 + 0x4c4)) {
  case 0:
    pcVar4 = "bgm_Zangeki_Exit";
    break;
  case 1:
    pcVar4 = "bgm_Zangeki_SP_Exit";
    break;
  case 2:
    pcVar4 = "bgm_Zangeki_SP_Ray1_Exit";
    break;
  case 3:
    pcVar4 = "bgm_Zangeki_SP_Ray2_Exit";
    break;
  case 4:
    pcVar4 = "bgm_Datsu_Exit";
    break;
  default:
    goto switchD_00b92da5_default;
  }
  FUN_00e5e1b0(pcVar4);
switchD_00b92da5_default:
  *(undefined4 *)(uVar2 + 0x4c4) = 5;
  return;
}

// 00B92E00  FUN_00b92e00  size=77  [run]
void FUN_00b92e00(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    fRam00000524 = fRam00000524 + 240.0;
    return;
  }
  puVar3 = &DAT_01be9ef4;
  (**(code **)*param_1)(&DAT_01be9ef4);
  iVar1 = FUN_00dd6d80(puVar3);
  uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  *(float *)(uVar2 + 0x524) = *(float *)(uVar2 + 0x524) + 240.0;
  return;
}

// 00B92EA0  FUN_00b92ea0  size=74  [run]
void FUN_00b92ea0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  (**(code **)(*(int *)(uVar1 + 0x240) + 8))(0x41200000,0,0);
  return;
}

// 00B92F30  FUN_00b92f30  size=179  [run]
void FUN_00b92f30(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if ((*(int *)(uVar1 + 0x330) != 0x20) && (5 < param_2)) {
switchD_00b92f94_caseD_0:
    FUN_005ee210();
    return;
  }
  switch(param_2) {
  case 0:
    goto switchD_00b92f94_caseD_0;
  case 1:
    FUN_005ee240();
    return;
  case 2:
    FUN_005ee270();
    return;
  case 3:
    FUN_005ee2a0();
    return;
  case 4:
    FUN_005ee2d0();
    return;
  default:
    FUN_005ee300();
    return;
  }
}

// 00B93000  FUN_00b93000  size=143  [run]
void FUN_00b93000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar2);
  }
  iVar1 = FUN_00a8cbe0(0);
  if (iVar1 == 0) {
    FUN_00a8cbe0(0);
  }
  FUN_005ee330(param_2,param_3,param_4,param_5,param_6,*param_7,param_7[1]);
  return;
}

// 00B93090  FUN_00b93090  size=53  [run]
undefined4 FUN_00b93090(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return uRam000000dc;
  }
  puVar2 = &DAT_01be9ef4;
  (**(code **)*param_1)(&DAT_01be9ef4);
  iVar1 = FUN_00dd6d80(puVar2);
  return *(undefined4 *)((-(uint)(iVar1 != 0) & (uint)param_1) + 0xdc);
}

// 00B930D0  FUN_00b930d0  size=53  [run]
undefined4 FUN_00b930d0(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return uRam000000e4;
  }
  puVar2 = &DAT_01be9ef4;
  (**(code **)*param_1)(&DAT_01be9ef4);
  iVar1 = FUN_00dd6d80(puVar2);
  return *(undefined4 *)((-(uint)(iVar1 != 0) & (uint)param_1) + 0xe4);
}

