// src/unsorted/unit_00907210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00907210..00907740, 8 functions

#include "mgrr.h"

// 00907210  FUN_00907210  size=330  [run]
void __fastcall FUN_00907210(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_8;
  
  if (*(int *)(param_1 + 0x134) != 0) {
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = "TtV_CAST_MANAGER_UPDATE";
      uVar4 = rdtsc();
      puVar1[1] = (int)uVar4;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    FUN_00dd75d0(&LAB_009071b0,param_1,1);
    FUN_00dd75d0(&LAB_009071b0,param_1,2);
    FUN_00dd75d0(&LAB_009071b0,param_1,3);
    FUN_00dd75d0(&LAB_009071b0,param_1,4);
    iVar6 = FUN_00f98a40();
    iVar8 = 1;
    piVar9 = (int *)(param_1 + 0x88);
    local_8 = 5;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        do {
          iVar2 = *(int *)(piVar9[-2] + iVar7 * 4);
          *(undefined1 *)(iVar2 + 0x1c) = 0;
          iVar3 = *(int *)(param_1 + 0x138 + iVar8 * 4);
          *(int *)(*(int *)(param_1 + 0x14c + iVar8 * 4) + iVar3 * 4) = iVar2;
          *(int *)(param_1 + 0x138 + iVar8 * 4) = iVar3 + 1;
          iVar8 = (iVar8 + 1) % (int)(5 - (uint)(iVar6 != 0));
          iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar9);
      }
      piVar9 = piVar9 + 5;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar4 = rdtsc();
      puVar1[1] = (int)uVar4;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
  }
  return;
}

// 00907360  FUN_00907360  size=320  [run]
void __fastcall FUN_00907360(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_c;
  
  if (*(int *)(param_1 + 0x134) != 0) {
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = "TtV_CAST_MANAGER_UPDATE";
      uVar4 = rdtsc();
      puVar1[1] = (int)uVar4;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    FUN_00dd75d0(&LAB_009071b0,param_1,0xffffffff);
    iVar6 = FUN_00f98a40();
    iVar10 = 5 - (uint)(iVar6 != 0);
    piVar7 = (int *)(param_1 + 0x88);
    iVar6 = 0;
    local_c = 5;
    piVar9 = piVar7;
    do {
      iVar8 = 0;
      if (0 < *piVar9) {
        do {
          iVar2 = *(int *)(piVar9[-2] + iVar8 * 4);
          *(undefined1 *)(iVar2 + 0x1c) = 0;
          iVar3 = *(int *)(param_1 + 0x138 + iVar6 * 4);
          *(int *)(*(int *)(param_1 + 0x14c + iVar6 * 4) + iVar3 * 4) = iVar2;
          *(int *)(param_1 + 0x138 + iVar6 * 4) = iVar3 + 1;
          iVar8 = iVar8 + 1;
          iVar6 = (iVar6 + 1) % iVar10;
        } while (iVar8 < *piVar9);
      }
      piVar9 = piVar9 + 5;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (0 < *(int *)(param_1 + 0x138)) {
      FUN_00dd79a0(iVar10);
    }
    iVar6 = 5;
    do {
      *piVar7 = 0;
      piVar7 = piVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar4 = rdtsc();
      puVar1[1] = (int)uVar4;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
  }
  return;
}

// 009074A0  FUN_009074a0  size=108  [run]
void __fastcall FUN_009074a0(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  if (*(int *)(param_1 + 0x134) != 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar3 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
      *puVar1 = "TtRAY_CAST_MANAGER_WAIT";
      uVar2 = rdtsc();
      puVar1[1] = (int)uVar2;
      *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
    }
    pvVar3 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar3 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar2 = rdtsc();
      puVar1[1] = (int)uVar2;
      *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
    }
  }
  return;
}

// 00907560  FUN_00907560  size=123  [run]
undefined4
FUN_00907560(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1 == *(int **)(iVar1 + 0x10)) {
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 4) != 1) {
          FUN_00dd5650(&DAT_0164c28c);
          return 0;
        }
        RayCastWork::get(param_2,param_3,param_4,param_5,0,param_6,param_7,param_8);
        if (*(char *)(iVar1 + 0x16) != '\0') {
          return 1;
        }
      }
    }
    else {
      FUN_00dd5650(&DAT_0164c08c);
    }
  }
  return 0;
}

// 009075E0  FUN_009075e0  size=95  [run]
undefined4 FUN_009075e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1 == *(int **)(iVar1 + 0x10)) {
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 4) != 2) {
          FUN_00dd5650(&DAT_0164c2bc);
          return 0;
        }
        if (*(char *)(iVar1 + 0x16) != '\0') {
          FUN_00905980(param_2,param_3,param_4);
          return 1;
        }
      }
    }
    else {
      FUN_00dd5650(&DAT_0164c08c);
    }
  }
  return 0;
}

// 00907640  FUN_00907640  size=90  [run]
undefined4 FUN_00907640(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1 == *(int **)(iVar1 + 0x10)) {
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 4) != 4) {
          FUN_00dd5650(&DAT_0164c2f4);
          return 0;
        }
        if (*(char *)(iVar1 + 0x16) != '\0') {
          FUN_00905b30(param_2,param_3);
          return 1;
        }
      }
    }
    else {
      FUN_00dd5650(&DAT_0164c08c);
    }
  }
  return 0;
}

// 009076A0  FUN_009076a0  size=21  [run]
undefined4 * __fastcall FUN_009076a0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapVariable::cHeapVariable();
  return param_1;
}

// 00907740  FUN_00907740  size=43  [run]
void __fastcall FUN_00907740(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

