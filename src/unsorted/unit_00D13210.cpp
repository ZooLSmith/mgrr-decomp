// src/unsorted/unit_00D13210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D13210..00D13D50, 6 functions

#include "mgrr.h"

// 00D13210  FUN_00d13210  size=1040  [run]
void __fastcall FUN_00d13210(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float local_28;
  char local_20 [32];
  
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  local_20[0x10] = '\0';
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = '\0';
  local_20[0x18] = '\0';
  local_20[0x19] = '\0';
  local_20[0x1a] = '\0';
  local_20[0x1b] = '\0';
  local_20[0x1c] = '\0';
  local_20[0x1d] = '\0';
  local_20[0x1e] = '\0';
  local_20[0x1f] = 0;
  bVar5 = false;
  local_20[0] = '\0';
  FUN_00ca84a0((int)*(short *)(param_1 + 0x134),local_20,0x20);
  sVar6 = 0;
  do {
    if (local_20[sVar6] == '\0') break;
    sVar6 = sVar6 + 1;
  } while (sVar6 < 0x20);
  sVar1 = *(short *)(param_1 + 0x13a);
  *(float *)(param_1 + 0x148) = (float)(int)sVar6 * 3.0;
  if (sVar1 == 0) {
    iVar8 = *(int *)(param_1 + 0x18);
    if ((iVar8 == 0) || (iVar7 = FUN_00cdf400(0), iVar7 == 0)) goto LAB_00d133bc;
    if ((*(uint *)(param_1 + 0xa4) < *(uint *)(iVar8 + 0x80)) &&
       (iVar8 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar8 + 0x7c), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0x3b0) = 1;
    }
    iVar8 = *(int *)(param_1 + 0x18);
    if (((iVar8 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar8 + 0x80))) &&
       (iVar8 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar8 + 0x7c), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0x3b0) = 1;
    }
    iVar8 = *(int *)(param_1 + 0x18);
    if (((iVar8 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar8 + 0x80))) &&
       (iVar8 = *(uint *)(param_1 + 0xac) * 0x400 + *(int *)(iVar8 + 0x7c), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0x3b0) = 1;
    }
    *(short *)(param_1 + 0x13a) = *(short *)(param_1 + 0x13a) + 1;
    bVar5 = true;
LAB_00d13333:
    *(short *)(param_1 + 0x13a) = *(short *)(param_1 + 0x13a) + 1;
  }
  else {
    if (sVar1 == 1) goto LAB_00d13333;
    if (sVar1 != 2) {
      return;
    }
  }
  if (*(float *)(param_1 + 0x144) < *(float *)(param_1 + 0x148)) {
    fVar4 = *(float *)(param_1 + 0x144) + 1.0;
    *(float *)(param_1 + 0x144) = fVar4;
    if (*(float *)(param_1 + 0x148) < fVar4) {
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x148);
    }
    iVar8 = FUN_00fdbc60();
    local_20[-iVar8] = '\0';
    bVar5 = true;
  }
  if (((*(short *)(param_1 + 0x134) == *(short *)(param_1 + 0x12e)) &&
      (*(short *)(param_1 + 0x138) == *(short *)(param_1 + 0x132))) && (!bVar5)) {
    return;
  }
LAB_00d133bc:
  local_28 = 0.0;
  fVar9 = (float10)FUN_00cfe890(6,local_20);
  *(float *)(param_1 + 0x14c) = (float)fVar9;
  if (0.0 < *(float *)(param_1 + 0x144)) {
    iVar8 = *(int *)(param_1 + 0x18);
    if ((((iVar8 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar8 + 0x80))) &&
        (piVar2 = *(int **)(*(uint *)(param_1 + 0xa8) * 0x400 + 0x3f0 + *(int *)(iVar8 + 0x7c)),
        piVar2 != (int *)0x0)) && (iVar8 = (**(code **)(*piVar2 + 8))(), iVar8 == 4)) {
      FUN_00cb3cc0(piVar2,local_20);
    }
    iVar8 = *(int *)(param_1 + 0x18);
    if (((iVar8 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar8 + 0x80))) &&
       ((piVar2 = *(int **)(*(uint *)(param_1 + 0xac) * 0x400 + 0x3f0 + *(int *)(iVar8 + 0x7c)),
        piVar2 != (int *)0x0 && (iVar8 = (**(code **)(*piVar2 + 8))(), iVar8 == 4)))) {
      FUN_00cb3cc0(piVar2,local_20);
    }
    iVar8 = *(int *)(param_1 + 0x18);
    if (((iVar8 == 0) || (*(uint *)(iVar8 + 0x80) <= *(uint *)(param_1 + 0xa4))) ||
       ((piVar2 = *(int **)(*(int *)(iVar8 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0xa4) * 0x400),
        piVar2 == (int *)0x0 || (iVar8 = (**(code **)(*piVar2 + 8))(), iVar8 != 8)))) {
      local_28 = 0.0;
    }
    else {
      local_28 = (float)piVar2[1];
    }
    fVar9 = (float10)FUN_00cb5b90(5,*(undefined4 *)(param_1 + 0x14c));
    iVar8 = *(int *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0xa4);
    if (((iVar8 != 0) && (uVar3 < *(uint *)(iVar8 + 0x80))) &&
       (*(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
      if (uVar3 < *(uint *)(iVar8 + 0x80)) {
        iVar8 = *(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400;
      }
      else {
        iVar8 = 0;
      }
      *(float *)(iVar8 + 0xd0) = (float)fVar9;
    }
    local_28 = (float)(fVar9 * (float10)local_28);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0xb0);
  if (((iVar8 != 0) && (uVar3 < *(uint *)(iVar8 + 0x80))) &&
     (*(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
    if (uVar3 < *(uint *)(iVar8 + 0x80)) {
      iVar8 = *(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400;
    }
    else {
      iVar8 = 0;
    }
    fVar9 = (float10)FUN_00ddb510(local_28,0);
    *(float *)(iVar8 + 0xc0) = (float)fVar9;
  }
  iVar8 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0xb4);
  if (((iVar8 != 0) && (uVar3 < *(uint *)(iVar8 + 0x80))) &&
     (*(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
    if (uVar3 < *(uint *)(iVar8 + 0x80)) {
      iVar8 = *(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400;
    }
    else {
      iVar8 = 0;
    }
    fVar9 = (float10)FUN_00ddb510(local_28,0);
    *(float *)(iVar8 + 0xc0) = (float)fVar9;
  }
  uVar3 = *(uint *)(param_1 + 0xb8);
  iVar8 = *(int *)(param_1 + 0x18);
  if (((iVar8 != 0) && (uVar3 < *(uint *)(iVar8 + 0x80))) &&
     (*(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
    if (uVar3 < *(uint *)(iVar8 + 0x80)) {
      iVar8 = *(int *)(iVar8 + 0x7c) + 0x2a0 + uVar3 * 0x400;
    }
    else {
      iVar8 = 0;
    }
    fVar9 = (float10)FUN_00ddb510(local_28,0);
    *(float *)(iVar8 + 0xc0) = (float)fVar9;
  }
  return;
}

// 00D13620  FUN_00d13620  size=429  [run]
void __fastcall FUN_00d13620(int param_1)

{
  short sVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float local_88 [2];
  undefined1 local_80;
  undefined1 local_7f [127];
  
  if (*(short *)(param_1 + 300) == 0) {
    return;
  }
  bVar3 = false;
  local_80 = 0;
  _memset(local_7f,0,0x7f);
  FUN_00ca84a0((int)*(short *)(param_1 + 0x138),&local_80,0x80);
  sVar1 = *(short *)(param_1 + 0x13c);
  if (sVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 200) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 200) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 200),1,3);
    *(short *)(param_1 + 0x13c) = *(short *)(param_1 + 0x13c) + 1;
LAB_00d136eb:
    bVar3 = true;
    if ((*(int *)(param_1 + 0x18) == 0) || (iVar4 = FUN_00cdf400(0), iVar4 == 0)) goto LAB_00d13721;
    *(short *)(param_1 + 0x13c) = *(short *)(param_1 + 0x13c) + 1;
  }
  else {
    if (sVar1 == 1) goto LAB_00d136eb;
    if (sVar1 != 2) {
      return;
    }
  }
  if ((*(short *)(param_1 + 0x138) == *(short *)(param_1 + 0x132)) && (!bVar3)) {
    return;
  }
LAB_00d13721:
  fVar6 = (float10)FUN_00cfe890(0xc,&local_80);
  *(float *)(param_1 + 0x154) = (float)fVar6;
  FUN_00cce090(*(undefined4 *)(param_1 + 0xc0),&local_80);
  FUN_00cce090(*(undefined4 *)(param_1 + 0xc4),&local_80);
  pfVar5 = (float *)FUN_00cb3240(local_88,*(undefined4 *)(param_1 + 0xbc));
  fVar2 = *pfVar5;
  fVar6 = (float10)FUN_00cb5b90(0xb,*(undefined4 *)(param_1 + 0x154));
  local_88[0] = (float)fVar6;
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xbc),(float)fVar6);
  FUN_00cb28a0(*(undefined4 *)(param_1 + 200),fVar2 * local_88[0] + 11.0);
  return;
}

// 00D137D0  FUN_00d137d0  size=495  [run]
void __fastcall FUN_00d137d0(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_30 [2];
  float local_28;
  float local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  if (*(short *)(param_1 + 0x12a) == 0) {
    return;
  }
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_1 = 0;
  bVar2 = false;
  local_20 = 0;
  FUN_00ca84a0((int)*(short *)(param_1 + 0x136),&local_20,0x20);
  sVar1 = *(short *)(param_1 + 0x13e);
  if (sVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0xd8) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xd8),1,3);
    *(short *)(param_1 + 0x13e) = *(short *)(param_1 + 0x13e) + 1;
LAB_00d138ab:
    bVar2 = true;
    if ((*(int *)(param_1 + 0x18) == 0) || (iVar3 = FUN_00cdf400(0), iVar3 == 0)) goto LAB_00d138de;
    *(short *)(param_1 + 0x13e) = *(short *)(param_1 + 0x13e) + 1;
  }
  else {
    if (sVar1 == 1) goto LAB_00d138ab;
    if (sVar1 != 2) goto LAB_00d138de;
  }
  if (*(short *)(param_1 + 0x136) != *(short *)(param_1 + 0x130)) {
    bVar2 = true;
  }
LAB_00d138de:
  if (*(short *)(param_1 + 300) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x98);
    uVar7 = 0xc2040000;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x98);
    uVar7 = 0;
  }
  FUN_00cb2900(uVar6,uVar7);
  if (bVar2) {
    fVar5 = (float10)FUN_00cfe890(0x10,&local_20);
    *(float *)(param_1 + 0x150) = (float)fVar5;
    FUN_00cce090(*(undefined4 *)(param_1 + 0xd0),&local_20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0xd4),&local_20);
    pfVar4 = (float *)FUN_00cb3240(local_30,*(undefined4 *)(param_1 + 0xcc));
    local_28 = *pfVar4;
    local_24 = pfVar4[1];
    fVar5 = (float10)FUN_00cb5b90(0xf,*(undefined4 *)(param_1 + 0x150));
    local_30[0] = (float)fVar5;
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xcc),(float)fVar5);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0xd8),local_28 * local_30[0] + 11.0);
  }
  return;
}

// 00D139C0  FUN_00d139c0  size=602  [run]
void __fastcall FUN_00d139c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_01dc1418 == '\0') {
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar3 + 0x80))) &&
       (piVar1 = *(int **)(*(uint *)(param_1 + 0xa0) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar1 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar1 + 8))();
      if (iVar3 == 1) {
        iVar3 = FUN_00cf7390(piVar1 + 10,0x79c096fa);
        if (iVar3 == 0) {
          FUN_00dd5650(&DAT_016b9264,0x79c096fa);
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    iVar2 = 0x2eb626d0;
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar3 + 0x80))) &&
       (piVar1 = *(int **)(*(uint *)(param_1 + 0xa0) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar1 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar1 + 8))();
      if (iVar3 == 1) {
        piVar1[9] = 0x2eb626d0;
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0xa4))) ||
       (piVar1 = *(int **)(*(uint *)(param_1 + 0xa4) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar1 == (int *)0x0)) goto LAB_00d13bd1;
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 != 1) goto LAB_00d13bd1;
    iVar3 = FUN_00cf7390(piVar1 + 10,0x79c096fa);
    if (iVar3 != 0) goto LAB_00d13bd1;
    uVar4 = 0x79c096fa;
  }
  else {
    iVar2 = FUN_00cc6e50(0x5a);
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar3 + 0x80))) &&
       (piVar1 = *(int **)(*(uint *)(param_1 + 0xa0) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar1 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar1 + 8))();
      if (iVar3 == 1) {
        iVar3 = FUN_00cf7390(piVar1 + 10,0x6709e058);
        if (iVar3 == 0) {
          FUN_00dd5650(&DAT_016b9264,0x6709e058);
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar3 + 0x80))) &&
       (piVar1 = *(int **)(*(uint *)(param_1 + 0xa0) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar1 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar1 + 8))();
      if (iVar3 == 1) {
        piVar1[9] = iVar2;
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0xa4))) ||
       (piVar1 = *(int **)(*(uint *)(param_1 + 0xa4) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar1 == (int *)0x0)) goto LAB_00d13bd1;
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 != 1) goto LAB_00d13bd1;
    iVar3 = FUN_00cf7390(piVar1 + 10,0x6709e058);
    if (iVar3 != 0) goto LAB_00d13bd1;
    uVar4 = 0x6709e058;
  }
  FUN_00dd5650(&DAT_016b9264,uVar4);
LAB_00d13bd1:
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar3 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0xa4) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar1 + 8))();
    if (iVar3 == 1) {
      piVar1[9] = iVar2;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(7);
  }
  return;
}

// 00D13C20  FUN_00d13c20  size=298  [run]
void __thiscall FUN_00d13c20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 uStack_10;
  undefined4 uStack_f;
  undefined4 uStack_b;
  undefined4 uStack_7;
  undefined2 uStack_3;
  undefined1 uStack_1;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0xa8))();
  if (iVar2 < 100000000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 99999999;
  }
  if ((DAT_01bea094 & 0x8000000) == 0) {
    iVar3 = FUN_00cecb20();
    if ((param_2 == 1) || (iVar2 != *(int *)(param_1 + 0x3a4))) {
      if (DAT_01dc08a8 == 0) {
        *(int *)(param_1 + 0x3a4) = iVar2;
      }
      else {
        *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + iVar3;
        iVar2 = *(int *)(param_1 + 0x3a4);
        if (99999999 < iVar2) {
          iVar2 = 99999999;
        }
        *(int *)(param_1 + 0x3a4) = iVar2;
      }
      uStack_10 = 0;
      uStack_f = 0;
      uStack_b = 0;
      uStack_7 = 0;
      uStack_3 = 0;
      uStack_1 = 0;
      FUN_00ca84a0(*(undefined4 *)(param_1 + 0x3a4),&uStack_10,0x10);
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf8) < *(uint *)(iVar2 + 0x80))) &&
         (piVar1 = *(int **)(*(uint *)(param_1 + 0xf8) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
         piVar1 != (int *)0x0)) {
        iVar2 = (**(code **)(*piVar1 + 8))();
        if (iVar2 == 4) {
          FUN_00cb3cc0(piVar1,&uStack_10);
        }
      }
      fVar4 = (float10)FUN_00cfee50(*(undefined4 *)(param_1 + 0xf8));
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xfc),
                   (float)(fVar4 + (float10)*(float *)(param_1 + 0x214)));
    }
  }
  return;
}

// 00D13D50  FUN_00d13d50  size=597  [run]
void __thiscall FUN_00d13d50(int param_1,float param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_8 [8];
  
  uVar3 = FUN_00fdbc60();
  FUN_00ca84a0(uVar3,local_8,8);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar4 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0x9c) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0xa0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)))) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  uVar3 = FUN_00fdbc60();
  if ((param_2 < 0.001) && (0.0 < param_2)) {
    uVar3 = 1;
  }
  FUN_0095c6a0(local_8,".%d%%%%",uVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar4 + 0x80))) &&
      (piVar1 = *(int **)(*(uint *)(param_1 + 0xa4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar1 = *(int **)(*(uint *)(param_1 + 0xa8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 4)))) {
    FUN_00cb3cc0(piVar1,local_8);
  }
  fVar6 = (float10)FUN_00cfee50(*(undefined4 *)(param_1 + 0xa4));
  iVar4 = *(int *)(param_1 + 0x18);
  if ((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x98))) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(uint *)(param_1 + 0x98) * 0x400 + 0x50 + *(int *)(iVar4 + 0x7c);
  }
  uVar2 = *(uint *)(param_1 + 0x94);
  if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
     (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar2 * 0x400 != 0)) {
    if (uVar2 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar2 * 0x400;
    }
    else {
      iVar4 = 0;
    }
    fVar6 = (float10)FUN_00ddb510((float)((float10)*(float *)(param_1 + 0x3a0) -
                                         fVar6 * (float10)*(float *)(iVar5 + 0x10)),0);
    *(float *)(iVar4 + 0xc0) = (float)fVar6;
    return;
  }
  return;
}

