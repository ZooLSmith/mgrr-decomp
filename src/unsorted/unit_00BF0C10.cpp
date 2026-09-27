// src/unsorted/unit_00BF0C10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BF0C10..00BF0C10, 1 functions

#include "mgrr.h"

// 00BF0C10  FUN_00bf0c10  size=1402  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00bf0c10(float param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined *puVar12;
  float local_24;
  int *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar12 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar12);
    uVar6 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  local_20 = *(int **)(uVar6 + 0xc);
  if (local_20 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar12 = &DAT_01be9db8;
    (**(code **)(*local_20 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar12);
    piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)local_20);
  }
  if (*(int *)((int)local_24 + 0x1e0) == 0) {
    piVar7[0x4fe] = 0;
  }
  else {
    *(undefined4 *)((int)local_24 + 0x1e0) = 0;
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar12 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar12);
      uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    (**(code **)(*(int *)(uVar4 + 400) + 8))(0x41200000,0,0);
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar12 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar12);
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 == 0) || (local_20 = (int *)0x1, *(int *)((int)local_24 + 0x30) == 0)) {
    local_20 = (int *)0x0;
  }
  _DAT_01bea9a0 = 1;
  FUN_00bbc310(param_2);
  if ((local_20 == (int *)0x0) || (*(int *)(*(int *)((int)local_24 + 0x30) + 0x87c) != 0)) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar12 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar12);
      uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    *(undefined4 *)(uVar4 + 0x500) = 0;
    _DAT_01bea9a0 = 0;
    iVar3 = (**(code **)(*piVar7 + 0x84))();
    uStack_1c = *(undefined4 *)(iVar3 + 4);
    local_20 = (int *)0x0;
    uStack_18 = 0;
    (**(code **)(*piVar7 + 0x88))(&local_20);
    FUN_00b7aa80();
    FUN_008e6d00();
    FUN_008e5c50(6);
    FUN_008e0b70(1);
    FUN_00d82510(0xb,100);
    *(undefined4 *)(uVar6 + 0x32c) = 1;
    switchD_0080dbae::default();
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
      puVar12 = &DAT_01b35260;
      (**(code **)(*piVar7 + 4))(&DAT_01b35260);
      iVar3 = FUN_00dd6d80(puVar12);
      if (iVar3 != 0) {
        FUN_005ca330(0x3f800000);
        local_24 = 0.0;
        local_20 = (int *)0x0;
        uStack_1c = 0;
        FUN_005ca1f0(&local_24);
        local_24 = 0.0;
        local_20 = (int *)0x0;
        uStack_1c = 0;
        FUN_005ca220(&local_24);
      }
    }
    *(undefined4 *)(uVar6 + 0x3a0) = 0;
    *(undefined4 *)(uVar6 + 0x3a4) = 0;
    *(undefined4 *)(uVar6 + 0x3a8) = 0;
    *(undefined4 *)(uVar6 + 0x3ac) = 0x3f800000;
    *(undefined4 *)(uVar6 + 0x3bc) = 0x3f800000;
    *(undefined4 *)(uVar6 + 0x3b0) = 0;
    *(undefined4 *)(uVar6 + 0x3b4) = 0;
    *(undefined4 *)(uVar6 + 0x3b8) = 0;
    return;
  }
  local_20 = (int *)FUN_00a92f90();
  iVar3 = FUN_00e26e90();
  if (iVar3 != 0) {
    FUN_00e36ac0(0,0);
  }
  FUN_00bcf3e0(param_2,1,0,0x41a00000,0x41a00000);
  FUN_00bb5830(param_2);
  *(float *)((int)local_24 + 0xcc) = *(float *)((int)local_24 + 0xcc) + 1.0;
  (**(code **)(*piVar7 + 0x220))(0x40000000);
  FUN_00be6620(param_2,unaff_EBX,100,0,0);
  FUN_00bd5f40(param_2,0x40a00000,0xc0a00000,0,0);
  puVar2 = (undefined4 *)piVar7[500];
  if (puVar2 != (undefined4 *)0x0) {
    puVar12 = &DAT_01be9ef4;
    (**(code **)*puVar2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar12);
    if (iVar3 != 0) {
      puVar2[0xde] = 0;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar12 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar12);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar4 + 0x2f4) == 0) {
    FUN_00bbb050(param_2);
  }
  FUN_00bbc9f0(&local_24,param_2);
  if (*(int *)(uVar6 + 0x2f8) == 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      uVar5 = FUN_00a7c8a0();
      iVar3 = FUN_00860b50(uVar5);
      if (iVar3 != 0) {
        FUN_005ca1a0(*(int *)(uVar6 + 0x528) == 0);
      }
    }
    fVar11 = (float10)fpatan((float10)local_24,(float10)(float)local_20 - (float10)1.0);
    fVar8 = (float10)180.0;
    fVar11 = ABS(fVar8 - fVar11 * (float10)57.29578);
    if (ABS((float10)(float)local_20) + ABS((float10)local_24) < (float10)100.0) {
      fVar11 = (float10)*(float *)(uVar6 + 0x3f8);
    }
    fVar9 = fVar11 - (float10)*(float *)(uVar6 + 0x3f8);
    fVar10 = (float10)360.0;
    if (fVar8 < fVar9) {
      fVar9 = fVar11 - ((float10)*(float *)(uVar6 + 0x3f8) + fVar10);
    }
    if (fVar9 < (float10)-180.0) {
      fVar9 = fVar11 - ((float10)*(float *)(uVar6 + 0x3f8) - fVar10);
    }
    fVar9 = fVar9 + (float10)*(float *)(uVar6 + 0x3f8);
    *(float *)(uVar6 + 0x3f8) = (float)fVar9;
    if (fVar10 < fVar9) {
      do {
        fVar9 = fVar9 - fVar10;
      } while (fVar10 < fVar9);
      *(float *)(uVar6 + 0x3f8) = (float)fVar9;
    }
    fVar11 = (float10)*(float *)(uVar6 + 0x3f8);
    if (fVar11 < (float10)0) {
      do {
        fVar11 = fVar11 + fVar10;
      } while (fVar11 < (float10)0);
      *(float *)(uVar6 + 0x3f8) = (float)fVar11;
    }
    if ((*(float *)(uVar6 + 0x3f8) < 270.0) && (fVar8 < (float10)*(float *)(uVar6 + 0x3f8))) {
      *(undefined4 *)(uVar6 + 0x3f8) = 0x43870000;
    }
    if (((float10)*(float *)(uVar6 + 0x3f8) <= fVar8) &&
       (fVar1 = *(float *)(uVar6 + 0x3f8), !NAN(fVar1) && 90.0 < fVar1 != (fVar1 == 90.0))) {
      *(undefined4 *)(uVar6 + 0x3f8) = 0x42b40000;
      return;
    }
  }
  return;
}

