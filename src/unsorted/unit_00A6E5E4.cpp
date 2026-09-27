// src/unsorted/unit_00A6E5E4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6E5E4..00A6E890, 13 functions

#include "mgrr.h"

// 00A6E5E4  FUN_00a6e5e4  size=88  [run]
int FUN_00a6e5e4(byte *param_1)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(in_EAX + 0x6c04)) {
    iVar2 = in_EAX + 4;
    do {
      pbVar3 = (byte *)(iVar2 + 0x34);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a6e625:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00a6e62a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a6e625;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a6e62a:
      if (iVar4 == 0) {
        return iVar2;
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 0x6c;
    } while (iVar6 < *(int *)(in_EAX + 0x6c04));
  }
  return 0;
}

// 00A6E640  FUN_00a6e640  size=6  [run]
undefined4 FUN_00a6e640(void)

{
  return DAT_01be9a34;
}

// 00A6E670  FUN_00a6e670  size=22  [run]
int __fastcall FUN_00a6e670(int param_1)

{
  FUN_00dd6df0();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}

// 00A6E690  FUN_00a6e690  size=105  [run]
void __thiscall FUN_00a6e690(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x138 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 0x138),param_4);
  param_1[8] = uVar1;
  if (uVar1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar2 = 0;
    uVar1 = param_2;
    do {
      *(undefined4 *)(iVar2 + param_1[8]) = 0;
      iVar2 = iVar2 + 0x138;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *param_1 = param_2;
  FUN_00dd8a10(param_2,param_3,param_4);
  return;
}

// 00A6E700  FUN_00a6e700  size=8  [run]
void FUN_00a6e700(void)

{
  FUN_00dd8da0();
  return;
}

// 00A6E710  FUN_00a6e710  size=36  [run]
void __fastcall FUN_00a6e710(int param_1)

{
  FUN_00dd8450();
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00A6E740  FUN_00a6e740  size=8  [run]
void FUN_00a6e740(void)

{
  FUN_00dd73f0();
  return;
}

// 00A6E760  FUN_00a6e760  size=8  [run]
void FUN_00a6e760(void)

{
  FUN_00dd8570();
  return;
}

// 00A6E770  FUN_00a6e770  size=71  [run]
void __thiscall FUN_00a6e770(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar3 = 0;
    do {
      if ((*(int *)(param_1[8] + 0x24 + iVar3) == param_2) &&
         (iVar1 = *(int *)(param_1[8] + iVar3), iVar1 != 0)) {
        FUN_00dd85c0(iVar1);
        *(undefined4 *)(iVar3 + param_1[8]) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x138;
    } while (uVar2 < *param_1);
  }
  return;
}

// 00A6E7C0  FUN_00a6e7c0  size=67  [run]
void __thiscall FUN_00a6e7c0(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_00dd8690(param_2);
  uVar2 = 0;
  if (*param_1 != 0) {
    iVar1 = 0;
    do {
      if (param_1[8] + 4 + iVar1 == param_2) {
        *(undefined4 *)(param_1[8] + iVar1) = 0;
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x138;
    } while (uVar2 < *param_1);
  }
  return;
}

// 00A6E810  FUN_00a6e810  size=42  [run]
void __fastcall FUN_00a6e810(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00dd8760();
  uVar1 = 0;
  if (*param_1 != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + param_1[8]) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x138;
    } while (uVar1 < *param_1);
  }
  return;
}

// 00A6E850  FUN_00a6e850  size=54  [run]
int * __thiscall FUN_00a6e850(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    piVar2 = (int *)param_1[8];
    do {
      if (*piVar2 == param_2) {
        return (int *)param_1[8] + uVar1 * 0x4e;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x4e;
    } while (uVar1 < *param_1);
  }
  return (int *)0x0;
}

// 00A6E890  FUN_00a6e890  size=64  [run]
int * __fastcall FUN_00a6e890(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_00dd7500();
  uVar2 = 0;
  if (*param_1 != 0) {
    piVar3 = (int *)param_1[8];
    do {
      if (*piVar3 == iVar1) {
        return (int *)param_1[8] + uVar2 * 0x4e;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x4e;
    } while (uVar2 < *param_1);
  }
  return (int *)0x0;
}

