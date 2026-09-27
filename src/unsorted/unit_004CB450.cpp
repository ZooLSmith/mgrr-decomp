// src/unsorted/unit_004CB450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004CB450..004CB580, 3 functions

#include "mgrr.h"

// 004CB450  FUN_004cb450  size=201  [run]
void __fastcall FUN_004cb450(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar3 = 0;
  iVar4 = param_1 + 0xde8;
  do {
    if (*(int *)(iVar4 + -0x20) == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
    }
    else {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        FUN_004cb2c0(iVar3);
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          FUN_00dd5650(&DAT_0163f198);
          goto LAB_004cb4cc;
        }
      }
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01b34e90;
        (**(code **)(*piVar2 + 4))(&DAT_01b34e90);
        iVar1 = FUN_00dd6d70(puVar5);
        if (iVar1 != 0) {
          FUN_004b6df0(param_1,iVar4 + -0x14);
          FUN_004cad00();
        }
      }
    }
LAB_004cb4cc:
    FUN_00a7c950();
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x24;
    if (0xd < iVar3) {
      *(undefined4 *)(param_1 + 0xfc4) = 1;
      FUN_00a805f0();
      return;
    }
  } while( true );
}

// 004CB520  FUN_004cb520  size=91  [run]
void __thiscall FUN_004cb520(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_0163f1f0;
  if (param_3 == 0) {
    puVar2 = &DAT_0163f1b8;
  }
  uVar3 = 0;
  while ((0 < param_2 && (uVar3 < 0xe))) {
    iVar1 = puVar2[uVar3];
    uVar3 = uVar3 + 1;
    if ((0xd < iVar1) || (*(int *)(param_1 + (iVar1 * 9 + 0x372) * 4) == 0)) {
      FUN_004cb2c0(iVar1);
      param_2 = param_2 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0xfc8) = 0;
  return;
}

// 004CB580  FUN_004cb580  size=843  [run]
void __fastcall FUN_004cb580(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_70 [16];
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_004cb804;
  }
  FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  iVar11 = FUN_00a81330();
  if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  iVar11 = FUN_00a81330();
  if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
    FUN_00aa4120(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  if (*(int *)(param_1 + 0x754) == 0) {
LAB_004cb6a4:
    uVar1 = 0x41200000;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x10b8);
    if (iVar11 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x12a8);
    }
    else if (iVar11 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x12ac);
    }
    else {
      if (iVar11 != 2) goto LAB_004cb6a4;
      uVar1 = *(undefined4 *)(param_1 + 0x12b0);
    }
  }
  *(undefined4 *)(param_1 + 0x920) = uVar1;
  iVar11 = FUN_004b8a30();
  if ((iVar11 != 0) && (uVar12 = FUN_00dde2d0(0,100), (uVar12 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x920) = 0x40a00000;
  }
  *(undefined4 *)(param_1 + 0x620) = 1;
  *(undefined4 *)(param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x928) = 0;
  *(undefined4 *)(param_1 + 0x92c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x940) = 0;
  RayCastManager::getWork(param_1 + 0x1160);
  fVar2 = *(float *)(param_1 + 0x40);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x4c);
  fVar9 = *(float *)(param_1 + 0x44) + 0.1;
  pfVar10 = (float *)FUN_00a8b8a0(local_70,0x40000000);
  fVar5 = *pfVar10;
  fVar6 = pfVar10[1];
  fVar7 = pfVar10[2];
  fVar8 = pfVar10[3];
  iVar11 = FUN_009f8b40();
  local_30 = iVar11 << 0x10 | 7;
  local_60[1] = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = "em0110_back_check";
  local_1c = 0;
  local_18 = 0;
  local_60[0] = param_1 + 0x1160;
  local_50 = fVar2;
  local_4c = fVar9;
  local_48 = fVar3;
  local_44 = fVar4;
  local_40 = fVar2 - fVar5;
  local_3c = fVar9 - fVar6;
  local_38 = fVar3 - fVar7;
  local_34 = fVar4 - fVar8;
  HavokRayCastManager::set(local_60);
LAB_004cb804:
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  *(float *)(param_1 + 0x11ec) = *(float *)(param_1 + 0x11ec) - *(float *)(param_1 + 0x910);
  iVar11 = FUN_00a81330();
  if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
     ((*(uint *)(iVar11 + 0x4c0) & 1) != 0)) {
    return;
  }
  iVar11 = FUN_00a81330();
  if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
     (uVar12 = FUN_004b72d0(), 6 < uVar12)) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x924) + *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x924) = fVar2;
  if (90.0 < fVar2) {
    *(undefined4 *)(param_1 + 0x924) = 0;
    iVar11 = FUN_00c195b0();
    if (4 < iVar11) {
      FUN_004baa10();
      return;
    }
    FUN_004ba900();
  }
  return;
}

