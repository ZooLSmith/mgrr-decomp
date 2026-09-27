// src/unsorted/unit_00BB49C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BB49C0..00BB5830, 14 functions

#include "mgrr.h"

// 00BB49C0  FUN_00bb49c0  size=205  [run]
void __thiscall FUN_00bb49c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  return;
}

// 00BB4A90  FUN_00bb4a90  size=262  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00bb4a90(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  if ((DAT_01bea090 & 0x80000000) != 0) {
    iVar1 = FUN_009c4bf0();
    if (iVar1 < 3) {
      _DAT_01d61384 = 0x10;
      _DAT_01d61388 = 0;
      _DAT_01d6138c = 1;
    }
  }
  return;
}

// 00BB4BA0  FUN_00bb4ba0  size=205  [run]
void __thiscall FUN_00bb4ba0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar4 + 0xc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  FUN_008e0b70(0);
  iVar1 = (**(code **)(*piVar3 + 0x84))();
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(iVar1 + 4);
  return;
}

// 00BB4C70  FUN_00bb4c70  size=264  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00bb4c70(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar4 + 0xc) != (int *)0x0) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar4 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar5);
  }
  _DAT_01bea9a0 = 1;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar1 = FUN_00dd6d80(puVar5);
    if (iVar1 != 0) {
      FUN_005ca330(0x40000000);
    }
  }
  return;
}

// 00BB4D80  FUN_00bb4d80  size=498  [run]
void __thiscall FUN_00bb4d80(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar6 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar1 != 0) & (uint)piVar3;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar8 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar1 = FUN_00dd6d80(puVar8);
    if (iVar1 != 0) {
      FUN_005ca330(0x41a00000);
      uStack_20 = 0;
      uStack_1c = 0x3f800000;
      uStack_18 = 0;
      FUN_005ca1f0(&uStack_20);
      uStack_20 = 0xbdb2b8c2;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_005ca220(&uStack_20);
    }
  }
  *(undefined4 *)(uVar6 + 0x3a0) = 0;
  *(undefined4 *)(uVar6 + 0x3a4) = 0x3f800000;
  *(undefined4 *)(uVar6 + 0x3a8) = 0;
  *(undefined4 *)(uVar6 + 0x3ac) = local_14;
  *(undefined4 *)(uVar6 + 0x3b0) = 0xbdb2b8c2;
  *(undefined4 *)(uVar6 + 0x3b4) = 0;
  *(undefined4 *)(uVar6 + 0x3b8) = 0;
  *(undefined4 *)(uVar6 + 0x3bc) = local_14;
  *(undefined4 *)(uVar7 + 0xb74) = 1;
  FUN_00a9e060(4);
  iVar1 = FUN_00a81330();
  if ((((iVar1 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
      (iVar4 = FUN_00a81330(), iVar4 != 0)) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    FUN_00a8c5f0(4,iVar1,iVar4,0x700,0);
  }
  return;
}

// 00BB4F80  FUN_00bb4f80  size=342  [run]
void __thiscall FUN_00bb4f80(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar6 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  pfVar4 = (float *)FUN_00a925a0(&local_20);
  pfVar5 = (float *)(uVar6 + 0x40);
  local_20 = *pfVar5 + *pfVar4;
  local_18 = pfVar4[2] + *(float *)(uVar6 + 0x48);
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    local_20 = *(float *)(iVar2 + 0x40);
    local_18 = *(float *)(iVar2 + 0x48);
  }
  fVar7 = (float10)local_20;
  if (*(int **)(param_1 + 0x30) == (int *)0x0) {
    return;
  }
  local_20 = 0.0;
  fVar7 = (float10)fpatan(fVar7 - (float10)*pfVar5,
                          (float10)local_18 - (float10)*(float *)(uVar6 + 0x48));
  local_1c = (float)fVar7;
  local_18 = 0.0;
  (**(code **)(**(int **)(param_1 + 0x30) + 0x7c))(pfVar5,&local_20);
  return;
}

// 00BB50E0  FUN_00bb50e0  size=342  [run]
void __thiscall FUN_00bb50e0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar6 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  pfVar4 = (float *)FUN_00a925a0(&local_20);
  pfVar5 = (float *)(uVar6 + 0x40);
  local_20 = *pfVar5 + *pfVar4;
  local_18 = pfVar4[2] + *(float *)(uVar6 + 0x48);
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    local_20 = *(float *)(iVar2 + 0x40);
    local_18 = *(float *)(iVar2 + 0x48);
  }
  fVar7 = (float10)local_20;
  if (*(int **)(param_1 + 0x30) == (int *)0x0) {
    return;
  }
  local_20 = 0.0;
  fVar7 = (float10)fpatan(fVar7 - (float10)*pfVar5,
                          (float10)local_18 - (float10)*(float *)(uVar6 + 0x48));
  local_1c = (float)fVar7;
  local_18 = 0.0;
  (**(code **)(**(int **)(param_1 + 0x30) + 0x7c))(pfVar5,&local_20);
  return;
}

// 00BB5240  FUN_00bb5240  size=184  [run]
void __thiscall FUN_00bb5240(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  return;
}

// 00BB5300  FUN_00bb5300  size=193  [run]
void __thiscall FUN_00bb5300(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  *(undefined4 *)(param_1 + 100) = 0x3eb2b8c2;
  return;
}

// 00BB53D0  FUN_00bb53d0  size=311  [run]
void __thiscall FUN_00bb53d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar4 + 0xc) != (int *)0x0) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar4 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar5);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar1 = FUN_00dd6d80(puVar5);
    if (iVar1 != 0) {
      FUN_005ca330(0x40e00000);
    }
  }
  FUN_00da8810(0);
  FUN_00db3e80(0,1,&DAT_01bea1d0);
  FUN_00dc1270(0,0);
  return;
}

// 00BB5510  FUN_00bb5510  size=202  [run]
void __thiscall FUN_00bb5510(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  *(undefined4 *)(param_1 + 100) = 0x3e32b8c2;
  *(undefined4 *)(param_1 + 0x60) = 0xbe97e9d8;
  return;
}

// 00BB55E0  FUN_00bb55e0  size=184  [run]
void __thiscall FUN_00bb55e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  FUN_008e0b70(0);
  FUN_008e3c10();
  FUN_008e5c50(0x1f);
  return;
}

// 00BB56A0  FUN_00bb56a0  size=391  [run]
void __thiscall FUN_00bb56a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    FUN_00dd6d80(puVar6);
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  if ((!bVar2) || (*(int *)(*(int *)(param_1 + 0x30) + 0x87c) != 0)) {
    FUN_00b7aa80();
    FUN_008e5c50(6);
    FUN_008e0b70(1);
    CharacterControl::setHeight(0x3fc00000);
    CharacterControl::setHeight(0x3fe66666);
    CharacterControl::setRadius(0x3eb33333);
    FUN_008e0af0(1);
    FUN_008e4580(uVar4 + 0x40,1);
    FUN_008e6d00();
    FUN_00d82510(0xb,100);
    *(undefined4 *)(uVar5 + 0x324) = *(undefined4 *)(uVar5 + 0x328);
    *(undefined4 *)(uVar5 + 0x32c) = 1;
  }
  return;
}

// 00BB5830  FUN_00bb5830  size=1539  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bb5830(undefined4 *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  undefined *puStack_188;
  float *pfStack_184;
  float *pfStack_180;
  float *pfStack_17c;
  undefined4 *puStack_178;
  undefined4 *puStack_174;
  float *pfStack_170;
  float *pfStack_16c;
  float *pfStack_168;
  float *local_164;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  int *local_144;
  float local_140;
  float local_13c;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float local_114;
  undefined4 uStack_110;
  undefined1 auStack_10c [4];
  float fStack_108;
  float fStack_104;
  float local_100 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float local_e0 [2];
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [112];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    local_164 = (float *)&DAT_01be9ef4;
    pfStack_168 = (float *)0xbb585b;
    (**(code **)*param_1)();
    pfStack_168 = (float *)0xbb5862;
    iVar6 = FUN_00dd6d80();
    uVar9 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  local_144 = *(int **)(uVar9 + 0xc);
  if (local_144 == (int *)0x0) {
    uVar8 = 0;
  }
  else {
    local_164 = (float *)&DAT_01be9db8;
    pfStack_168 = (float *)0xbb5885;
    (**(code **)(*local_144 + 4))();
    pfStack_168 = (float *)0xbb588c;
    iVar6 = FUN_00dd6d80();
    uVar8 = -(uint)(iVar6 != 0) & (uint)local_144;
  }
  if (param_1 != (undefined4 *)0x0) {
    local_164 = (float *)&DAT_01be9ef4;
    pfStack_168 = (float *)0xbb58ab;
    (**(code **)*param_1)();
    pfStack_168 = (float *)0xbb58b2;
    FUN_00dd6d80();
  }
  local_164 = (float *)0xbb58c3;
  iVar6 = FUN_00a81330();
  if ((iVar6 != 0) && (*(int *)((int)local_114 + 0x30) != 0)) {
    local_164 = (float *)0x0;
    pfStack_168 = (float *)0xbb58e1;
    iVar6 = FUN_00a12210();
    local_d0 = *(float *)(iVar6 + 0x40);
    pfVar1 = (float *)(iVar6 + 0x10);
    local_cc = *(undefined4 *)(iVar6 + 0x44);
    local_c8 = *(float *)(iVar6 + 0x48);
    local_c4 = *(float *)(iVar6 + 0x4c);
    local_140 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) + *pfVar1 * *pfVar1 +
                     *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
    local_13c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                     *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                     *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
    fVar12 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                  *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                  *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
    local_148 = *(float *)(iVar6 + 0x28) / fVar12;
    local_144 = (int *)(*(float *)(iVar6 + 0x38) / fVar12);
    local_164 = (float *)-(*(float *)(iVar6 + 0x18) / fVar12);
    pfStack_168 = (float *)0xbb5996;
    fVar10 = (float10)FUN_00ddbaa0();
    local_118 = (float)fVar10;
    fVar10 = (float10)fpatan((float10)local_148,(float10)(float)local_144);
    local_e0[0] = (float)fVar10;
    fVar10 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_13c,
                             (float10)*pfVar1 / (float10)local_140);
    local_d8 = (float)fVar10;
    local_100[0] = 0.0;
    local_100[1] = 1.0;
    local_100[2] = 0.0;
    pfStack_16c = local_100;
    pfStack_170 = (float *)0xbb59e2;
    pfStack_168 = pfStack_16c;
    local_164 = pfVar1;
    D3DXVec3TransformNormal();
    uStack_ac = 0;
    puStack_178 = &uStack_ac;
    uStack_a8 = 0;
    uStack_a4 = 0x3f800000;
    pfStack_17c = (float *)0xbb5a0c;
    puStack_174 = puStack_178;
    pfStack_170 = pfVar1;
    D3DXVec3TransformNormal();
    local_c8 = 1.0;
    pfStack_184 = &local_c8;
    local_c4 = 0.0;
    fStack_c0 = 0.0;
    puStack_188 = (undefined *)0xbb5a36;
    pfStack_180 = pfStack_184;
    pfStack_17c = pfVar1;
    D3DXVec3TransformNormal();
    puVar2 = *(undefined4 **)(uVar8 + 2000);
    local_164 = (float *)(fStack_124 * _DAT_018a9664 + local_100[3]);
    fVar5 = fStack_120 * _DAT_018a9664 + fStack_f0;
    fVar4 = fStack_11c * _DAT_018a9664 + fStack_ec;
    fVar12 = local_118 * _DAT_018a9664 + fStack_e8;
    fStack_154 = local_100[3] - (float)local_164;
    fStack_150 = fStack_f0 - fVar5;
    fStack_14c = fStack_ec - fVar4;
    local_148 = fStack_e8 - fVar12;
    pfStack_16c = (float *)0x0;
    puStack_188 = (undefined *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puStack_188 = &DAT_01be9ef4;
      (**(code **)*puVar2)();
      iVar6 = FUN_00dd6d80();
      puStack_188 = (undefined *)pfStack_16c;
      if (iVar6 != 0) {
        puStack_188 = (undefined *)puVar2[0xdd];
      }
    }
    if (*(int *)(uVar9 + 0x330) == 0x1d) {
      puStack_188 = (undefined *)((float)puStack_188 * 0.5);
    }
    FUN_00ddcfe0(auStack_74,&fStack_d4);
    puStack_188 = auStack_74;
    D3DXVec3TransformNormal(&fStack_154,&fStack_154);
    fStack_f0 = (float)uStack_110;
    fStack_ec = local_148;
    fStack_e8 = fStack_108;
    uStack_e4 = fStack_104;
    fStack_120 = fVar5 * -1.0;
    fStack_11c = fVar4 * -1.0;
    local_118 = fVar12 * -1.0;
    local_114 = fStack_154 * -1.0;
    fVar3 = local_118 * local_118 + fStack_11c * fStack_11c + fStack_120 * fStack_120;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&fStack_120,&fStack_120);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_120 = 0.0;
      fStack_11c = 1.0;
      local_118 = 0.0;
    }
    fStack_134 = fStack_154;
    local_140 = fVar5;
    local_13c = fVar4;
    fStack_138 = fVar12;
    FUN_00ddcfe0(auStack_80,local_e0,0xbfc90fdb);
    D3DXVec3TransformNormal(&local_140,&local_140,auStack_80);
    FUN_00ddcfe0(auStack_8c,&local_13c,*(undefined4 *)((int)fStack_150 + 0x60));
    D3DXVec3TransformNormal(&fStack_14c,&fStack_14c,auStack_8c);
    puStack_188 = (undefined *)((float)puStack_178 + (float)puStack_188);
    pfStack_184 = (float *)((float)puStack_174 + (float)pfStack_184);
    pfStack_180 = (float *)((float)pfStack_170 + (float)pfStack_180);
    pfStack_17c = (float *)((float)pfStack_16c + (float)pfStack_17c);
    fStack_128 = (float)puStack_188 + fVar12;
    fStack_124 = (float)pfStack_184 + fStack_154;
    fStack_120 = (float)pfStack_180 + fStack_150;
    fStack_11c = (float)pfStack_17c + fStack_14c;
    FUN_00db6410(&local_d8,&puStack_188,&fStack_128,&fStack_138);
    puStack_188 = (undefined *)
                  SQRT(local_d0 * local_d0 + local_d8 * local_d8 + fStack_d4 * fStack_d4);
    pfStack_184 = (float *)SQRT(fStack_c0 * fStack_c0 + local_c8 * local_c8 + local_c4 * local_c4);
    fVar4 = SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4);
    fVar5 = fStack_c0 / fVar4;
    fVar12 = fStack_b0 / fVar4;
    fVar10 = (float10)FUN_00ddbaa0(-(local_d0 / fVar4));
    fVar11 = (float10)fpatan((float10)fVar5,(float10)fVar12);
    fStack_108 = (float)fVar11;
    fStack_104 = (float)fVar10;
    fVar10 = (float10)fpatan((float10)fStack_d4 / (float10)(float)pfStack_184,
                             (float10)local_d8 / (float10)(float)puStack_188);
    local_100[0] = (float)fVar10;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      piVar7 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar7 + 0x6c))(&local_118);
      (**(code **)(*piVar7 + 0x88))(auStack_10c);
    }
  }
  return;
}

