// src/unsorted/unit_00CBD8A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBD8A0..00CBE4C0, 20 functions

#include "mgrr.h"

// 00CBD8A0  FUN_00cbd8a0  size=87  [run]
void __thiscall FUN_00cbd8a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x38) * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x94);
    uVar2 = *(undefined4 *)(iVar3 + 0x98);
    *param_2 = *(undefined4 *)(iVar3 + 0x90);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00CBD900  FUN_00cbd900  size=120  [run]
void __thiscall FUN_00cbd900(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = param_2;
  }
  if ((*(int *)(param_1 + 0x188) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x188) + 0x14), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  if ((*(int *)(param_1 + 0x18c) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18c) + 0x14), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  if ((*(int *)(param_1 + 400) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 400) + 0x14), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  if ((*(int *)(param_1 + 0x194) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x194) + 0x14), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  if ((*(int *)(param_1 + 0x198) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x198) + 0x14), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  return;
}

// 00CBD980  FUN_00cbd980  size=19  [run]
void __fastcall FUN_00cbd980(int param_1)

{
  if (*(int *)(param_1 + 0x3c) - 8U < 2) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

// 00CBD9A0  FUN_00cbd9a0  size=31  [run]
void __fastcall FUN_00cbd9a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}

// 00CBD9C0  FUN_00cbd9c0  size=46  [run]
void __thiscall FUN_00cbd9c0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 1;
  *(undefined4 *)(param_1 + 0x164) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x168) = 1;
  }
  return;
}

// 00CBD9F0  FUN_00cbd9f0  size=31  [run]
void __fastcall FUN_00cbd9f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 1;
  return;
}

// 00CBDA10  FUN_00cbda10  size=32  [run]
void __fastcall FUN_00cbda10(int param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 0x15c) = 1;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}

// 00CBDA30  FUN_00cbda30  size=106  [run]
void __fastcall FUN_00cbda30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x154) != 0) {
    switch(*(undefined4 *)(param_1 + 0x148)) {
    case 1:
    case 2:
    case 3:
      *(undefined4 *)(param_1 + 0x148) = 7;
      break;
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0x14c) = 1;
    }
    if (*(int *)(param_1 + 0x168) != 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (((iVar1 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar1 + 0x80))) &&
         (iVar1 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x3b0) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  return;
}

// 00CBDAD0  FUN_00cbdad0  size=72  [run]
void __thiscall FUN_00cbdad0(int param_1,float param_2,float param_3)

{
  if ((param_2 < 0.0 == (param_2 == 0.0)) &&
     (*(float *)(param_1 + 0x144) = param_2 * 60.0, param_3 != -1.0)) {
    *(float *)(param_1 + 0x140) = param_3 * 60.0;
    return;
  }
  return;
}

// 00CBDB20  FUN_00cbdb20  size=20  [run]
void __fastcall FUN_00cbdb20(int param_1)

{
  if (*(int *)(param_1 + 0x170) == 0) {
    *(undefined4 *)(param_1 + 0x16c) = 1;
  }
  return;
}

// 00CBDB40  FUN_00cbdb40  size=93  [run]
void __thiscall FUN_00cbdb40(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xa8);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x138) * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x94);
    uVar2 = *(undefined4 *)(iVar3 + 0x98);
    *param_2 = *(undefined4 *)(iVar3 + 0x90);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00CBDBD0  FUN_00cbdbd0  size=107  [run]
void __thiscall FUN_00cbdbd0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if (*(int *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x1c) = param_2;
  }
  if (*(int *)(param_1 + 0x18c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18c) + 0x1c) = param_2;
  }
  if (*(int *)(param_1 + 400) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 400) + 0x1c) = param_2;
  }
  if (*(int *)(param_1 + 0x194) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x194) + 0x1c) = param_2;
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x198) + 0x20) = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = param_2;
  }
  return;
}

// 00CBDC80  FUN_00cbdc80  size=340  [run]
bool FUN_00cbdc80(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = FUN_00f98a90();
  fVar2 = (float)iVar11 * 0.00078125 * 1094.0;
  iVar11 = FUN_00f98aa0();
  fVar3 = (float)iVar11 * 0.0013888889 * 144.0;
  iVar11 = FUN_00f98a90();
  fVar4 = (float)iVar11 * 0.00078125 * 90.0;
  iVar11 = FUN_00f98aa0();
  fVar5 = (float)iVar11 * 0.0013888889 * 90.0;
  bVar9 = *param_1 < fVar2 - fVar4;
  bVar1 = fVar4 + fVar2 < *param_1;
  bVar12 = param_1[1] < fVar3 - fVar5;
  bVar10 = bVar12 || (bVar1 || bVar9);
  if (param_1[1] <= fVar5 + fVar3) {
    if (!bVar12 && (!bVar1 && !bVar9)) goto LAB_00cbddad;
  }
  else {
    bVar10 = true;
  }
  fVar6 = *param_1 - fVar2;
  fVar8 = param_1[1] - fVar3;
  fVar7 = ABS(fVar6 / fVar4);
  fVar4 = ABS(fVar8 / fVar5);
  if (fVar7 <= fVar4) {
    *param_1 = fVar6 / fVar4 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar4;
  }
  else {
    *param_1 = fVar6 / fVar7 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar7;
  }
LAB_00cbddad:
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return !bVar10;
}

// 00CBDE20  FUN_00cbde20  size=340  [run]
bool FUN_00cbde20(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = FUN_00f98a90();
  fVar2 = (float)iVar11 * 0.00078125 * 1094.0;
  iVar11 = FUN_00f98aa0();
  fVar3 = (float)iVar11 * 0.0013888889 * 144.0;
  iVar11 = FUN_00f98a90();
  fVar4 = (float)iVar11 * 0.00078125 * 90.0;
  iVar11 = FUN_00f98aa0();
  fVar5 = (float)iVar11 * 0.0013888889 * 90.0;
  bVar9 = *param_1 < fVar2 - fVar4;
  bVar1 = fVar4 + fVar2 < *param_1;
  bVar12 = param_1[1] < fVar3 - fVar5;
  bVar10 = bVar12 || (bVar1 || bVar9);
  if (param_1[1] <= fVar5 + fVar3) {
    if (!bVar12 && (!bVar1 && !bVar9)) goto LAB_00cbdf4d;
  }
  else {
    bVar10 = true;
  }
  fVar6 = *param_1 - fVar2;
  fVar8 = param_1[1] - fVar3;
  fVar7 = ABS(fVar6 / fVar4);
  fVar4 = ABS(fVar8 / fVar5);
  if (fVar7 <= fVar4) {
    *param_1 = fVar6 / fVar4 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar4;
  }
  else {
    *param_1 = fVar6 / fVar7 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar7;
  }
LAB_00cbdf4d:
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return !bVar10;
}

// 00CBDF80  FUN_00cbdf80  size=192  [run]
void __thiscall FUN_00cbdf80(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = -1;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar2 = 0;
  }
  if (*(int *)(param_1 + 0x20) == param_2) {
    iVar2 = -1;
LAB_00cbdfa7:
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar2 = 1;
    }
  }
  else if (iVar2 == -1) goto LAB_00cbdfa7;
  if (*(int *)(param_1 + 0x24) == param_2) {
    iVar2 = -1;
LAB_00cbdfc1:
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar2 = 2;
    }
  }
  else if (iVar2 == -1) goto LAB_00cbdfc1;
  if (*(int *)(param_1 + 0x28) == param_2) {
    iVar2 = -1;
LAB_00cbdfdb:
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar2 = 3;
    }
  }
  else if (iVar2 == -1) goto LAB_00cbdfdb;
  if (*(int *)(param_1 + 0x2c) == param_2) {
    iVar2 = -1;
  }
  else if (iVar2 != -1) goto LAB_00cbe000;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar2 = 4;
  }
LAB_00cbe000:
  if ((*(int *)(param_1 + 0x30) != param_2) && (iVar2 != -1)) {
    *(int *)(param_1 + 0x20 + iVar2 * 4) = param_2;
    iVar1 = (iVar2 + 4) * 0x10;
    *(undefined4 *)(iVar1 + param_1) = *param_3;
    iVar1 = iVar1 + param_1;
    *(undefined4 *)(iVar1 + 4) = param_3[1];
    *(undefined4 *)(iVar1 + 8) = param_3[2];
    *(undefined4 *)(iVar1 + 0xc) = param_3[3];
    *(undefined4 *)(param_1 + 0x90 + iVar2 * 4) = param_4;
  }
  return;
}

// 00CBE040  FUN_00cbe040  size=340  [run]
bool FUN_00cbe040(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = FUN_00f98a90();
  fVar2 = (float)iVar11 * 0.00078125 * 1094.0;
  iVar11 = FUN_00f98aa0();
  fVar3 = (float)iVar11 * 0.0013888889 * 144.0;
  iVar11 = FUN_00f98a90();
  fVar4 = (float)iVar11 * 0.00078125 * 90.0;
  iVar11 = FUN_00f98aa0();
  fVar5 = (float)iVar11 * 0.0013888889 * 90.0;
  bVar9 = *param_1 < fVar2 - fVar4;
  bVar1 = fVar4 + fVar2 < *param_1;
  bVar12 = param_1[1] < fVar3 - fVar5;
  bVar10 = bVar12 || (bVar1 || bVar9);
  if (param_1[1] <= fVar5 + fVar3) {
    if (!bVar12 && (!bVar1 && !bVar9)) goto LAB_00cbe16d;
  }
  else {
    bVar10 = true;
  }
  fVar6 = *param_1 - fVar2;
  fVar8 = param_1[1] - fVar3;
  fVar7 = ABS(fVar6 / fVar4);
  fVar4 = ABS(fVar8 / fVar5);
  if (fVar7 <= fVar4) {
    *param_1 = fVar6 / fVar4 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar4;
  }
  else {
    *param_1 = fVar6 / fVar7 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar7;
  }
LAB_00cbe16d:
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return !bVar10;
}

// 00CBE1A0  FUN_00cbe1a0  size=218  [run]
void __thiscall FUN_00cbe1a0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar2 = -1;
    piVar3 = (int *)(param_1 + 0x24);
    iVar4 = 2;
    do {
      if ((iVar2 == -1) && (piVar3[-1] == 0)) {
        iVar2 = iVar4 + -2;
      }
      if (piVar3[-1] == param_2) {
        iVar2 = -1;
LAB_00cbe1d5:
        if (*piVar3 == 0) {
          iVar2 = iVar4 + -1;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe1d5;
      if (*piVar3 == param_2) {
        iVar2 = -1;
LAB_00cbe1eb:
        if (piVar3[1] == 0) {
          iVar2 = iVar4;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe1eb;
      if (piVar3[1] == param_2) {
        iVar2 = -1;
LAB_00cbe202:
        if (piVar3[2] == 0) {
          iVar2 = iVar4 + 1;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe202;
      if (piVar3[2] == param_2) {
        iVar2 = -1;
LAB_00cbe21a:
        if (piVar3[3] == 0) {
          iVar2 = iVar4 + 2;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe21a;
      if (piVar3[3] == param_2) {
        iVar2 = -1;
      }
      iVar1 = iVar4 + 3;
      piVar3 = piVar3 + 5;
      iVar4 = iVar4 + 5;
    } while (iVar1 < 10);
    if (iVar2 != -1) {
      *(int *)(param_1 + 0x20 + iVar2 * 4) = param_2;
      iVar4 = (iVar2 + 5) * 0x10;
      *(undefined4 *)(iVar4 + param_1) = *param_3;
      iVar4 = iVar4 + param_1;
      *(undefined4 *)(iVar4 + 4) = param_3[1];
      *(undefined4 *)(iVar4 + 8) = param_3[2];
      *(undefined4 *)(iVar4 + 0xc) = param_3[3];
      *(undefined4 *)(param_1 + 0xf0 + iVar2 * 4) = param_4;
    }
  }
  return;
}

// 00CBE280  FUN_00cbe280  size=340  [run]
bool FUN_00cbe280(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = FUN_00f98a90();
  fVar2 = (float)iVar11 * 0.00078125 * 1094.0;
  iVar11 = FUN_00f98aa0();
  fVar3 = (float)iVar11 * 0.0013888889 * 144.0;
  iVar11 = FUN_00f98a90();
  fVar4 = (float)iVar11 * 0.00078125 * 90.0;
  iVar11 = FUN_00f98aa0();
  fVar5 = (float)iVar11 * 0.0013888889 * 90.0;
  bVar9 = *param_1 < fVar2 - fVar4;
  bVar1 = fVar4 + fVar2 < *param_1;
  bVar12 = param_1[1] < fVar3 - fVar5;
  bVar10 = bVar12 || (bVar1 || bVar9);
  if (param_1[1] <= fVar5 + fVar3) {
    if (!bVar12 && (!bVar1 && !bVar9)) goto LAB_00cbe3ad;
  }
  else {
    bVar10 = true;
  }
  fVar6 = *param_1 - fVar2;
  fVar8 = param_1[1] - fVar3;
  fVar7 = ABS(fVar6 / fVar4);
  fVar4 = ABS(fVar8 / fVar5);
  if (fVar7 <= fVar4) {
    *param_1 = fVar6 / fVar4 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar4;
  }
  else {
    *param_1 = fVar6 / fVar7 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar7;
  }
LAB_00cbe3ad:
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return !bVar10;
}

// 00CBE3E0  FUN_00cbe3e0  size=218  [run]
void __thiscall FUN_00cbe3e0(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar2 = -1;
    piVar3 = (int *)(param_1 + 0x24);
    iVar4 = 2;
    do {
      if ((iVar2 == -1) && (piVar3[-1] == 0)) {
        iVar2 = iVar4 + -2;
      }
      if (piVar3[-1] == param_2) {
        iVar2 = -1;
LAB_00cbe415:
        if (*piVar3 == 0) {
          iVar2 = iVar4 + -1;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe415;
      if (*piVar3 == param_2) {
        iVar2 = -1;
LAB_00cbe42b:
        if (piVar3[1] == 0) {
          iVar2 = iVar4;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe42b;
      if (piVar3[1] == param_2) {
        iVar2 = -1;
LAB_00cbe442:
        if (piVar3[2] == 0) {
          iVar2 = iVar4 + 1;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe442;
      if (piVar3[2] == param_2) {
        iVar2 = -1;
LAB_00cbe45a:
        if (piVar3[3] == 0) {
          iVar2 = iVar4 + 2;
        }
      }
      else if (iVar2 == -1) goto LAB_00cbe45a;
      if (piVar3[3] == param_2) {
        iVar2 = -1;
      }
      iVar1 = iVar4 + 3;
      piVar3 = piVar3 + 5;
      iVar4 = iVar4 + 5;
    } while (iVar1 < 10);
    if (iVar2 != -1) {
      *(int *)(param_1 + 0x20 + iVar2 * 4) = param_2;
      iVar4 = (iVar2 + 5) * 0x10;
      *(undefined4 *)(iVar4 + param_1) = *param_3;
      iVar4 = iVar4 + param_1;
      *(undefined4 *)(iVar4 + 4) = param_3[1];
      *(undefined4 *)(iVar4 + 8) = param_3[2];
      *(undefined4 *)(iVar4 + 0xc) = param_3[3];
      *(undefined4 *)(param_1 + 0xf0 + iVar2 * 4) = param_4;
    }
  }
  return;
}

// 00CBE4C0  FUN_00cbe4c0  size=340  [run]
bool FUN_00cbe4c0(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = FUN_00f98a90();
  fVar2 = (float)iVar11 * 0.00078125 * 1094.0;
  iVar11 = FUN_00f98aa0();
  fVar3 = (float)iVar11 * 0.0013888889 * 144.0;
  iVar11 = FUN_00f98a90();
  fVar4 = (float)iVar11 * 0.00078125 * 90.0;
  iVar11 = FUN_00f98aa0();
  fVar5 = (float)iVar11 * 0.0013888889 * 90.0;
  bVar9 = *param_1 < fVar2 - fVar4;
  bVar1 = fVar4 + fVar2 < *param_1;
  bVar12 = param_1[1] < fVar3 - fVar5;
  bVar10 = bVar12 || (bVar1 || bVar9);
  if (param_1[1] <= fVar5 + fVar3) {
    if (!bVar12 && (!bVar1 && !bVar9)) goto LAB_00cbe5ed;
  }
  else {
    bVar10 = true;
  }
  fVar6 = *param_1 - fVar2;
  fVar8 = param_1[1] - fVar3;
  fVar7 = ABS(fVar6 / fVar4);
  fVar4 = ABS(fVar8 / fVar5);
  if (fVar7 <= fVar4) {
    *param_1 = fVar6 / fVar4 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar4;
  }
  else {
    *param_1 = fVar6 / fVar7 + fVar2;
    param_1[1] = fVar3 + fVar8 / fVar7;
  }
LAB_00cbe5ed:
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return !bVar10;
}

