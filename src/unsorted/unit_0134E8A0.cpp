// src/unsorted/unit_0134E8A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0134E8A0..0136CDA0, 455 functions

#include "mgrr.h"

// 0134E8A0  FUN_0134e8a0  size=99  [run]
uint FUN_0134e8a0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar3 = param_1;
  uVar5 = 0;
  FUN_0134e5b0();
  puVar6 = (undefined4 *)(&DAT_0225a080 + param_1 * 0x48);
  param_1 = 6;
  do {
    pcVar1 = (code *)*puVar6;
    uVar2 = puVar6[1];
    if (pcVar1 != (code *)0x0) {
      *(undefined4 *)(&DAT_0225d8e0 + iVar3 * 4) = 1;
      uVar4 = (*pcVar1)(uVar2);
      uVar5 = uVar5 | uVar4;
      *(undefined4 *)(&DAT_0225d8e0 + iVar3 * 4) = 0;
    }
    puVar6 = puVar6 + 3;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  FUN_0134e5f0();
  *(int *)(&DAT_0225da00 + iVar3 * 4) = *(int *)(&DAT_0225da00 + iVar3 * 4) + 1;
  return uVar5;
}

// 0134EB00  FUN_0134eb00  size=59  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134eb00(undefined *param_1,undefined4 param_2)

{
  _DAT_0225a41c = "\nCRI ERR/PCx86 Ver.1.01 Build:Aug 30 2012 16:01:16\n";
  if (param_1 == (undefined *)0x0) {
    PTR_FUN_01b28f2c = FUN_0134eb70;
  }
  else {
    PTR_FUN_01b28f2c = param_1;
  }
  DAT_0225a420 = param_2;
  return;
}

// 0134EB40  FUN_0134eb40  size=34  [run]
void FUN_0134eb40(undefined4 param_1)

{
  if (DAT_0225a424 != -1) {
    (*(code *)PTR_FUN_01b28f2c)(DAT_0225a420,param_1);
  }
  return;
}

// 0134EB70  FUN_0134eb70  size=5  [run]
void FUN_0134eb70(void)

{
  return;
}

// 0134EB80  FUN_0134eb80  size=13  [run]
void FUN_0134eb80(undefined4 param_1)

{
  DAT_0225a424 = param_1;
  return;
}

// 0134EB90  FUN_0134eb90  size=10  [run]
undefined4 FUN_0134eb90(void)

{
  return DAT_0225a424;
}

// 0134EBA0  FUN_0134eba0  size=26  [run]
int FUN_0134eba0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 & param_1 - 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// 0134EBC0  FUN_0134ebc0  size=18  [run]
bool FUN_0134ebc0(uint param_1)

{
  return (param_1 & 8) != 0;
}

// 0134EC10  FUN_0134ec10  size=25  [run]
int __fastcall FUN_0134ec10(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = *(uint *)(param_1 + 4); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// 0134EC50  FUN_0134ec50  size=19  [run]
void FUN_0134ec50(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 4))(param_1);
  return;
}

// 0134EC80  FUN_0134ec80  size=366  [run]
void __fastcall FUN_0134ec80(float *param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (param_2 >> 2) * 4;
  fVar7 = (float)iVar4;
  pfVar1 = param_1 + param_2;
  if (iVar4 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = (param_4 - param_3) / fVar7;
  pfVar3 = param_1 + (param_2 >> 2) * 4;
  fVar2 = fVar7 * 4.0;
  fVar5 = fVar7 + param_3;
  fVar6 = fVar5 + fVar7;
  fVar7 = fVar6 + fVar7;
  fVar8 = param_3;
  for (; param_1 < pfVar3; param_1 = param_1 + 4) {
    *param_1 = *param_1 * fVar8;
    param_1[1] = param_1[1] * fVar5;
    param_1[2] = param_1[2] * fVar6;
    param_1[3] = param_1[3] * fVar7;
    fVar8 = fVar8 + fVar2;
    fVar5 = fVar5 + fVar2;
    fVar6 = fVar6 + fVar2;
    fVar7 = fVar7 + fVar2;
  }
  if (param_1 < pfVar1) {
    fVar7 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = (param_4 - param_3) / fVar7;
    iVar4 = (int)pfVar1 + (3 - (int)param_1);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        *param_1 = *param_1 * param_3;
        param_1[1] = (fVar7 + param_3) * param_1[1];
        param_3 = fVar7 + fVar7 + param_3;
        param_1[2] = param_1[2] * param_3;
        param_3 = fVar7 + param_3;
        param_1[3] = param_1[3] * param_3;
        param_1 = param_1 + 4;
        param_3 = fVar7 + param_3;
      } while ((int)param_1 < (int)(pfVar1 + -3));
    }
    if (param_1 < pfVar1) {
      do {
        *param_1 = *param_1 * param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + fVar7;
      } while (param_1 < pfVar1);
      return;
    }
  }
  return;
}

// 0134EDF0  FUN_0134edf0  size=181  [run]
void __fastcall FUN_0134edf0(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 0134EEF0  FUN_0134eef0  size=27  [run]
undefined4 FUN_0134eef0(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 0134EF10  FUN_0134ef10  size=154  [run]
void FUN_0134ef10(float param_1,float param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = 0;
  for (uVar1 = *(uint *)(unaff_ESI + 4); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    uVar2 = uVar2 + 1;
  }
  if ((param_3 == '\0') && ((*(uint *)(unaff_ESI + 4) & 8) != 0)) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = 0;
  if (param_2 == param_1) {
    if (uVar2 != 0) {
      do {
        FUN_0134edf0();
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
      return;
    }
  }
  else if (uVar2 != 0) {
    do {
      FUN_0134ec80(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}

// 0134EFB0  FUN_0134efb0  size=58  [run]
undefined4 __thiscall FUN_0134efb0(undefined4 *param_1,int *param_2)

{
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 8))(param_1[8]);
  }
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 0134EFF0  FUN_0134eff0  size=118  [run]
void __thiscall FUN_0134eff0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(short *)(param_2 + 0xe) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    local_1c = *(undefined4 *)(iVar1 + 4);
    local_18 = *(undefined4 *)(iVar1 + 8);
    local_14 = *(undefined4 *)(iVar1 + 0xc);
    local_10 = *(undefined4 *)(iVar1 + 0x10);
    local_c = *(undefined4 *)(iVar1 + 0x14);
    local_8 = *(undefined4 *)(iVar1 + 0x18);
    (**(code **)(param_1 + 8))(param_2,&local_1c);
    FUN_0134ef10(*(undefined4 *)(param_1 + 0xc),local_c,*(undefined1 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0xc) = local_c;
  }
  return;
}

// 0134F070  FUN_0134f070  size=757  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0134f070(int param_1,int *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_28;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  if (param_3[2] != *(float *)(param_1 + 0x24)) {
    *(float *)(param_1 + 0x24) = param_3[2];
    fVar11 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar11 = fVar11 + (float10)4.2949673e+09;
    }
    fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar11 * (float10)param_3[2]));
    fVar11 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
    *(float *)(param_1 + 0x28) = (float)fVar11;
  }
  fVar4 = *(float *)(param_1 + 0x28);
  if (param_3[3] != *(float *)(param_1 + 0x2c)) {
    *(float *)(param_1 + 0x2c) = param_3[3];
    fVar11 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar11 = fVar11 + (float10)4.2949673e+09;
    }
    fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar11 * (float10)param_3[3]));
    fVar11 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
    *(float *)(param_1 + 0x30) = (float)fVar11;
  }
  fVar5 = *(float *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x1c);
  if (((*(byte *)(param_2 + 1) & 8) == 0) || (*(char *)(param_1 + 0x34) != '\0')) {
    uVar8 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar8 = *(int *)(param_1 + 0x10) - 1;
  }
  uVar10 = 0;
  if (uVar8 != 0) {
    do {
      pfVar9 = (float *)(*param_2 + *(ushort *)(param_2 + 3) * uVar10 * 4);
      pfVar1 = pfVar9 + *(ushort *)((int)param_2 + 0xe);
      fVar16 = *(float *)(*(int *)(param_1 + 0x20) + 4 + uVar10 * 8);
      fVar14 = *(float *)(*(int *)(param_1 + 0x20) + uVar10 * 8);
      for (; pfVar9 < pfVar1; pfVar9 = pfVar9 + 1) {
        fVar7 = *pfVar9;
        fVar13 = fVar7 * fVar7 + 1e-25;
        fVar16 = (fVar16 - fVar13) * fVar6 + fVar13;
        fVar13 = (float)(((uint)fVar16 & 0x7fffff) + 0x3f800000);
        fVar13 = (fVar13 - 1.0) / (fVar13 + 1.0);
        fVar13 = (((float)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 0.6931472 +
                 (fVar13 + fVar13) * (fVar13 * fVar13 * 0.33333334 + 1.0)) * 0.4342945 * 10.0 -
                 fVar2;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar15 = fVar5;
        if (0.0 <= fVar13 - fVar14) {
          fVar15 = fVar4;
        }
        fVar14 = (fVar14 - fVar13) * fVar15 + fVar13;
        fVar13 = fVar14 * (1.0 / fVar3 - 1.0) * 0.05;
        if (-37.0 <= fVar13) {
          if ((DAT_0225a42c & 1) == 0) {
            DAT_0225a42c = DAT_0225a42c | 1;
            _DAT_0225a428 = 27866352.0;
          }
          local_28 = (uint)(longlong)ROUND(fVar13 * _DAT_0225a428 + 1.0653532e+09);
          fVar13 = (float)((local_28 & 0x7fffff) + 0x3f800000);
          fVar13 = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                   (float)(local_28 & 0xff800000);
        }
        else {
          fVar13 = 0.0;
        }
        *pfVar9 = fVar7 * fVar13;
      }
      *(float *)(*(int *)(param_1 + 0x20) + 4 + uVar10 * 8) = fVar16;
      *(float *)(*(int *)(param_1 + 0x20) + uVar10 * 8) = fVar14;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  return;
}

// 0134F370  FUN_0134f370  size=998  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0134f370(int param_1,int *param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int aiStack_3c [7];
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((*(byte *)(param_2 + 1) & 8) == 0) || (*(char *)(param_1 + 0x34) != '\0')) {
    uVar11 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar11 = *(int *)(param_1 + 0x10) - 1;
  }
  fVar17 = (float)(int)uVar11;
  if ((int)uVar11 < 0) {
    fVar17 = fVar17 + 4.2949673e+09;
  }
  fVar2 = *param_3;
  fVar3 = param_3[1];
  local_8 = 1.0 / fVar17;
  if (param_3[2] != *(float *)(param_1 + 0x24)) {
    *(float *)(param_1 + 0x24) = param_3[2];
    fVar12 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar12 = fVar12 + (float10)4.2949673e+09;
    }
    fVar13 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar12 * (float10)param_3[2]));
    fVar12 = ROUND(fVar13);
    fVar13 = (float10)f2xm1(fVar13 - fVar12);
    fVar12 = (float10)fscale((float10)1 + fVar13,fVar12);
    *(float *)(param_1 + 0x28) = (float)fVar12;
  }
  local_14 = *(float *)(param_1 + 0x28);
  if (param_3[3] != *(float *)(param_1 + 0x2c)) {
    *(float *)(param_1 + 0x2c) = param_3[3];
    fVar12 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar12 = fVar12 + (float10)4.2949673e+09;
    }
    fVar13 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar12 * (float10)param_3[3]));
    fVar12 = ROUND(fVar13);
    fVar13 = (float10)f2xm1(fVar13 - fVar12);
    fVar12 = (float10)fscale((float10)1 + fVar13,fVar12);
    *(float *)(param_1 + 0x30) = (float)fVar12;
  }
  fVar17 = (*(float **)(param_1 + 0x20))[1];
  fVar16 = **(float **)(param_1 + 0x20);
  local_18 = *(float *)(param_1 + 0x30);
  uVar8 = 0;
  local_c = *(float *)(param_1 + 0x1c);
  if (uVar11 != 0) {
    uVar4 = *(ushort *)(param_2 + 3);
    iVar10 = *param_2;
    do {
      aiStack_3c[uVar8] = iVar10;
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + (uint)uVar4 * 4;
    } while (uVar8 < uVar11);
  }
  uVar8 = (uint)*(ushort *)((int)param_2 + 0xe);
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    uVar9 = 0;
    fVar14 = 0.0;
    if (3 < (int)uVar11) {
      do {
        piVar1 = aiStack_3c + uVar9;
        iVar10 = uVar9 + 1;
        iVar6 = uVar9 + 2;
        iVar7 = uVar9 + 3;
        uVar9 = uVar9 + 4;
        fVar14 = *(float *)aiStack_3c[iVar7] * *(float *)aiStack_3c[iVar7] +
                 *(float *)aiStack_3c[iVar6] * *(float *)aiStack_3c[iVar6] +
                 *(float *)aiStack_3c[iVar10] * *(float *)aiStack_3c[iVar10] +
                 *(float *)*piVar1 * *(float *)*piVar1 + fVar14;
      } while (uVar9 < uVar11 - 3);
    }
    for (; uVar9 < uVar11; uVar9 = uVar9 + 1) {
      fVar14 = *(float *)aiStack_3c[uVar9] * *(float *)aiStack_3c[uVar9] + fVar14;
    }
    fVar14 = fVar14 * local_8 + 1e-25;
    fVar17 = (fVar17 - fVar14) * local_c + fVar14;
    local_10 = (float)(((uint)fVar17 & 0x7fffff) + 0x3f800000);
    fVar14 = (local_10 - 1.0) / (local_10 + 1.0);
    fVar14 = (((float)((uint)fVar17 >> 0x17 & 0xff) - 127.0) * 0.6931472 +
             fVar14 * 2.0 * (fVar14 * fVar14 * 0.33333334 + 1.0)) * 0.4342945 * 10.0 - fVar2;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    fVar15 = local_18;
    if (0.0 <= fVar14 - fVar16) {
      fVar15 = local_14;
    }
    fVar16 = (fVar16 - fVar14) * fVar15 + fVar14;
    local_1c = fVar16 * (1.0 / fVar3 - 1.0) * 0.05;
    if (-37.0 <= local_1c) {
      if ((DAT_0225a42c & 1) == 0) {
        DAT_0225a42c = DAT_0225a42c | 1;
        _DAT_0225a428 = 27866352.0;
      }
      aiStack_3c[6] = (int)(longlong)ROUND(local_1c * _DAT_0225a428 + 1.0653532e+09);
      fVar14 = (float)((aiStack_3c[6] & 0x7fffffU) + 0x3f800000);
      fStack_20 = (float)(aiStack_3c[6] & 0xff800000);
      fVar14 = ((fVar14 * 0.32518977 + 0.020805772) * fVar14 + 0.65304345) * fStack_20;
    }
    else {
      fVar14 = 0.0;
    }
    uVar9 = 0;
    if (3 < (int)uVar11) {
      do {
        pfVar5 = (float *)aiStack_3c[uVar9];
        *pfVar5 = *pfVar5 * fVar14;
        aiStack_3c[uVar9] = (int)(pfVar5 + 1);
        pfVar5 = (float *)aiStack_3c[uVar9 + 1];
        *pfVar5 = fVar14 * *pfVar5;
        aiStack_3c[uVar9 + 1] = (int)(pfVar5 + 1);
        pfVar5 = (float *)aiStack_3c[uVar9 + 2];
        *pfVar5 = fVar14 * *pfVar5;
        aiStack_3c[uVar9 + 2] = (int)(pfVar5 + 1);
        pfVar5 = (float *)aiStack_3c[uVar9 + 3];
        *pfVar5 = fVar14 * *pfVar5;
        aiStack_3c[uVar9 + 3] = (int)(pfVar5 + 1);
        uVar9 = uVar9 + 4;
      } while (uVar9 < uVar11 - 3);
    }
    for (; uVar9 < uVar11; uVar9 = uVar9 + 1) {
      pfVar5 = (float *)aiStack_3c[uVar9];
      *pfVar5 = *pfVar5 * fVar14;
      aiStack_3c[uVar9] = (int)(pfVar5 + 1);
    }
  }
  *(float *)(*(int *)(param_1 + 0x20) + 4) = fVar17;
  **(float **)(param_1 + 0x20) = fVar16;
  return;
}

// 0134F760  FUN_0134f760  size=359  [run]
undefined4 __thiscall
FUN_0134f760(int param_1,int *param_2,undefined4 param_3,int param_4,int *param_5)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar7;
  int iVar6;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  *(int *)(param_1 + 4) = param_4;
  fVar1 = *(float *)(param_4 + 0xc);
  uVar2 = *(undefined4 *)(param_4 + 0x14);
  fVar3 = *(float *)(param_4 + 0x10);
  uVar4 = *(undefined4 *)(param_4 + 0x18);
  cVar5 = (char)uVar4;
  *(char *)(param_1 + 0x34) = cVar5;
  iVar9 = 0;
  for (uVar8 = param_5[1] & 0x3ffff; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
    iVar9 = iVar9 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar9;
  iVar6 = *param_5;
  *(int *)(param_1 + 0x14) = iVar6;
  fVar10 = (float10)*(int *)(param_1 + 0x14);
  *(float *)(param_1 + 0x24) = fVar1;
  if (iVar6 < 0) {
    fVar10 = fVar10 + (float10)4.2949673e+09;
  }
  *(float *)(param_1 + 0x2c) = fVar3;
  fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / ((float10)fVar1 * fVar10));
  fVar11 = ROUND(fVar12);
  fVar12 = (float10)f2xm1(fVar12 - fVar11);
  fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
  *(float *)(param_1 + 0x28) = (float)fVar11;
  fVar11 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar10 * (float10)fVar3));
  fVar10 = ROUND(fVar11);
  fVar11 = (float10)f2xm1(fVar11 - fVar10);
  fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
  *(float *)(param_1 + 0x30) = (float)fVar10;
  cVar7 = (char)((uint)uVar4 >> 8);
  if ((cVar7 == '\0') || (iVar9 == 1)) {
    *(code **)(param_1 + 8) = FUN_0134f070;
  }
  else {
    *(code **)(param_1 + 8) = FUN_0134f370;
    if (((*(byte *)(param_5 + 1) & 8) != 0) && (cVar5 == '\0')) {
      iVar9 = iVar9 + -1;
    }
  }
  iVar6 = 1;
  if (cVar7 == '\0') {
    iVar6 = iVar9;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  iVar9 = (**(code **)(*param_2 + 4))(iVar6 * 8);
  *(int *)(param_1 + 0x20) = iVar9;
  if (iVar9 == 0) {
    return 0x34;
  }
  fVar10 = (float10)*(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) < 0) {
    fVar10 = fVar10 + (float10)4.2949673e+09;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  fVar11 = (float10)1.4426950408889634 * ((float10)-1.0 / (fVar10 * (float10)0.02322));
  fVar10 = ROUND(fVar11);
  fVar11 = (float10)f2xm1(fVar11 - fVar10);
  fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
  *(float *)(param_1 + 0x1c) = (float)fVar10;
  return 1;
}

// 0134F8F0  FUN_0134f8f0  size=42  [run]
undefined4 * FUN_0134f8f0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803cb0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[8] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0134F930  FUN_0134f930  size=34  [run]
undefined4 * __thiscall FUN_0134f930(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0134F970  FUN_0134f970  size=45  [run]
void __thiscall FUN_0134f970(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  return;
}

// 0134FA30  FUN_0134fa30  size=24  [run]
void __thiscall FUN_0134fa30(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar7 = param_1[7];
  param_1[4] = *param_1 + fVar4;
  param_1[5] = fVar1 + fVar5;
  param_1[6] = fVar2 + fVar6;
  param_1[7] = fVar3 + fVar7;
  *param_2 = *param_1 + fVar4;
  param_2[1] = fVar1 + fVar5;
  param_2[2] = fVar2 + fVar6;
  param_2[3] = fVar3 + fVar7;
  return;
}

// 0134FA50  FUN_0134fa50  size=159  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0134fa50(float param_1)

{
  float10 fVar1;
  undefined4 local_c;
  
  if (param_1 < -37.0) {
    return (float10)0;
  }
  if ((DAT_0225a42c & 1) == 0) {
    DAT_0225a42c = DAT_0225a42c | 1;
    _DAT_0225a428 = 27866352.0;
  }
  local_c = (uint)(longlong)ROUND(_DAT_0225a428 * param_1 + 1.0653532e+09);
  fVar1 = (float10)(float)((local_c & 0x7fffff) + 0x3f800000);
  return (((float10)0.32518977 * fVar1 + (float10)0.020805772) * fVar1 + (float10)0.65304345) *
         (float10)(float)(local_c & 0xff800000);
}

// 0134FAF0  FUN_0134faf0  size=204  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0134faf0(float param_1)

{
  float fVar1;
  undefined4 local_c;
  
  if (param_1 * 0.05 < -37.0) {
    return (float10)0.0;
  }
  if ((DAT_0225a42c & 1) == 0) {
    DAT_0225a42c = DAT_0225a42c | 1;
    _DAT_0225a428 = 27866352.0;
  }
  local_c = (uint)(longlong)ROUND(_DAT_0225a428 * param_1 * 0.05 + 1.0653532e+09);
  fVar1 = (float)((local_c & 0x7fffff) + 0x3f800000);
  return (float10)(((fVar1 * 0.32518977 + 0.020805772) * fVar1 + 0.65304345) *
                  (float)(local_c & 0xff800000));
}

// 0134FBC0  FUN_0134fbc0  size=110  [run]
float10 FUN_0134fbc0(uint param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)(float)((param_1 & 0x7fffff) + 0x3f800000);
  fVar1 = (float10)1;
  fVar2 = (fVar2 - fVar1) / (fVar2 + fVar1);
  return (((float10)(param_1 >> 0x17 & 0xff) - (float10)127.0) * (float10)0.6931472 +
         (fVar2 + fVar2) * (fVar2 * fVar2 * (float10)0.33333334 + fVar1)) * (float10)0.4342945;
}

// 0134FC30  FUN_0134fc30  size=204  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0134fc30(float param_1)

{
  float fVar1;
  undefined4 local_c;
  
  if (param_1 * 0.05 < -37.0) {
    return (float10)0.0;
  }
  if ((DAT_0225a42c & 1) == 0) {
    DAT_0225a42c = DAT_0225a42c | 1;
    _DAT_0225a428 = 27866352.0;
  }
  local_c = (uint)(longlong)ROUND(_DAT_0225a428 * param_1 * 0.05 + 1.0653532e+09);
  fVar1 = (float)((local_c & 0x7fffff) + 0x3f800000);
  return (float10)(((fVar1 * 0.32518977 + 0.020805772) * fVar1 + 0.65304345) *
                  (float)(local_c & 0xff800000));
}

// 0134FD00  FUN_0134fd00  size=110  [run]
float10 FUN_0134fd00(uint param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)(float)((param_1 & 0x7fffff) + 0x3f800000);
  fVar1 = (float10)1;
  fVar2 = (fVar2 - fVar1) / (fVar2 + fVar1);
  return (((float10)(param_1 >> 0x17 & 0xff) - (float10)127.0) * (float10)0.6931472 +
         (fVar2 + fVar2) * (fVar2 * fVar2 * (float10)0.33333334 + fVar1)) * (float10)0.4342945;
}

// 0134FD90  FUN_0134fd90  size=35  [run]
void FUN_0134fd90(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 0134FDC0  FUN_0134fdc0  size=20  [run]
int __thiscall FUN_0134fdc0(int *param_1,int param_2)

{
  return *param_1 + (uint)*(ushort *)(param_1 + 3) * param_2 * 4;
}

// 0134FDF0  FUN_0134fdf0  size=34  [run]
undefined4 * __thiscall FUN_0134fdf0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0134FE30  FUN_0134fe30  size=34  [run]
undefined4 * __thiscall FUN_0134fe30(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0134FE70  FUN_0134fe70  size=34  [run]
undefined4 * __thiscall FUN_0134fe70(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0134FEB0  FUN_0134feb0  size=34  [run]
undefined4 * __thiscall FUN_0134feb0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0134FF10  FUN_0134ff10  size=106  [run]
undefined4 __thiscall FUN_0134ff10(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    param_1[1] = -0x3ec00000;
    param_1[2] = 0x40800000;
    param_1[3] = 0x3c23d70a;
    param_1[4] = 0x3dcccccd;
    param_1[5] = 0x3f800000;
    *(undefined2 *)(param_1 + 6) = 0x101;
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return uVar1;
}

// 0134FF80  FUN_0134ff80  size=168  [run]
undefined4 __thiscall FUN_0134ff80(int param_1,undefined2 param_2,undefined4 *param_3)

{
  float10 fVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    switch(param_2) {
    case 0:
      *(undefined4 *)(param_1 + 4) = *param_3;
      return 1;
    case 1:
      *(undefined4 *)(param_1 + 8) = *param_3;
      return 1;
    case 2:
      *(undefined4 *)(param_1 + 0xc) = *param_3;
      return 1;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = *param_3;
      return 1;
    case 4:
      fVar1 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x14) = (float)fVar1;
      return 1;
    case 5:
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)param_3;
      return 1;
    case 6:
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)param_3;
      return 1;
    default:
      return 0x1f;
    }
  }
  return 0x1f;
}

// 01350050  FUN_01350050  size=54  [run]
void __thiscall FUN_01350050(undefined4 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_01803cec;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 01350090  FUN_01350090  size=76  [run]
undefined4 * __thiscall FUN_01350090(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803cec;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    puVar1[6] = *(undefined4 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 013500E0  FUN_013500e0  size=39  [run]
undefined4 __thiscall FUN_013500e0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01350110  FUN_01350110  size=99  [run]
undefined4 __thiscall FUN_01350110(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x14) = (float)fVar1;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x15);
  return 1;
}

// 01350190  FUN_01350190  size=31  [run]
undefined4 * FUN_01350190(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803cec;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 013501B0  FUN_013501b0  size=35  [run]
void FUN_013501b0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 013501E0  FUN_013501e0  size=17  [run]
float10 FUN_013501e0(undefined4 *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)*param_1;
  *param_1 = (float *)*param_1 + 1;
  return (float10)fVar1;
}

// 01350200  FUN_01350200  size=15  [run]
undefined1 FUN_01350200(undefined4 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)*param_1;
  *param_1 = (undefined1 *)*param_1 + 1;
  return uVar1;
}

// 01350220  FUN_01350220  size=34  [run]
undefined4 * __thiscall FUN_01350220(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01350250  FUN_01350250  size=34  [run]
undefined4 * __thiscall FUN_01350250(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01350280  FUN_01350280  size=9  [run]
void FUN_01350280(void *param_1,void *param_2,size_t param_3)

{
  FID_conflict__memcpy(param_1,param_2,param_3);
  return;
}

// 01350290  FUN_01350290  size=9  [run]
void FUN_01350290(void *param_1,int param_2,size_t param_3)

{
  _memset(param_1,param_2,param_3);
  return;
}

// 013502B0  FUN_013502b0  size=34  [run]
void __thiscall
FUN_013502b0(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = param_3;
  *(undefined2 *)((int)param_1 + 0xe) = param_4;
  param_1[1] = param_5;
  return;
}

// 013502E0  FUN_013502e0  size=34  [run]
void __thiscall
FUN_013502e0(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
            undefined4 param_5)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = param_3;
  *(undefined2 *)((int)param_1 + 0xe) = param_4;
  param_1[1] = param_5;
  return;
}

// 01350410  FUN_01350410  size=25  [run]
void __fastcall FUN_01350410(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01803d04;
  FUN_01352010();
  *param_1 = &PTR_FUN_01803c4c;
  return;
}

// 01350430  FUN_01350430  size=27  [run]
undefined4 FUN_01350430(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01350450  FUN_01350450  size=64  [run]
void __thiscall FUN_01350450(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xac) == 1) {
    *(int *)(param_1 + 0x150) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x150) = 3;
  if (((param_2 == 8) || (param_2 == 4)) || (param_2 == 0xc)) {
    *(undefined4 *)(param_1 + 0x150) = 4;
  }
  return;
}

// 01350490  FUN_01350490  size=94  [run]
void __fastcall FUN_01350490(int param_1)

{
  float fVar1;
  undefined4 local_10;
  
  fVar1 = (float)*(int *)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x154) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_10 = (int)(longlong)
                  ROUND(fVar1 * (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x80)) * 0.001);
  *(int *)(param_1 + 0x148) = local_10 + *(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x40);
  return;
}

// 013504F0  FUN_013504f0  size=396  [run]
int __thiscall
FUN_013504f0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  float fVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_14;
  undefined4 local_c;
  uint local_8;
  
  *(undefined4 *)(param_1 + 0x160) = param_4;
  *(undefined4 *)(param_1 + 0x164) = param_2;
  FUN_01351b10((undefined4 *)(param_1 + 0x80));
  puVar6 = (undefined4 *)(param_1 + 0x80);
  puVar7 = (undefined4 *)(param_1 + 0xb0);
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar3 = param_5[1] & 0x3ffff;
  *(uint *)(param_1 + 0x14c) = uVar3;
  if (*(int *)(param_1 + 0xac) == 1) {
    *(uint *)(param_1 + 0x150) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x150) = 3;
    if (((uVar3 == 8) || (uVar3 == 4)) || (uVar3 == 0xc)) {
      *(undefined4 *)(param_1 + 0x150) = 4;
    }
  }
  *(undefined4 *)(param_1 + 0x154) = *param_5;
  uVar2 = (**(code **)(*param_3 + 4))();
  *(undefined1 *)(param_1 + 0x15e) = uVar2;
  local_c = *param_5;
  local_8 = param_5[1] ^ (*(uint *)(param_1 + 0x150) ^ param_5[1]) & 0x3ffff;
  uVar4 = (**(code **)(*param_3 + 0x20))();
  iVar5 = FUN_013521e0(param_2,param_3,&local_c,uVar4);
  if (iVar5 == 1) {
    fVar1 = (float)*(int *)(param_1 + 0x154);
    if (*(int *)(param_1 + 0x154) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_14 = (int)(longlong)
                    ROUND(fVar1 * (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x80)) * 0.001)
    ;
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x40) + local_14;
    iVar5 = FUN_013514f0();
    if ((iVar5 == 1) && (iVar5 = FUN_013515a0(), iVar5 == 1)) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined2 *)(param_1 + 0x15c) = 0;
      if (1 < *(uint *)(param_1 + 0x4c)) {
        switch(param_5[1] & 0x3ffff) {
        case 3:
        case 7:
        case 0xb:
        case 0xf:
          *(undefined1 *)(param_1 + 0x159) = 1;
        }
      }
      iVar5 = 1;
    }
  }
  return iVar5;
}

// 013506A0  FUN_013506a0  size=144  [run]
undefined4 __thiscall FUN_013506a0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_01352090(param_2);
  iVar2 = 0;
  for (uVar1 = param_1[0x54]; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    iVar2 = iVar2 + 1;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_013527b0(param_1[0x59]);
  }
  FUN_013527b0(param_1[0x59]);
  FUN_013527b0(param_1[0x59]);
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 01350790  FUN_01350790  size=505  [run]
uint __fastcall FUN_01350790(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar6;
  undefined3 extraout_var;
  undefined3 uVar5;
  int iVar7;
  int local_10;
  
  FUN_01351b10(param_1 + 0x80);
  iVar7 = *(int *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0xdc) != iVar7) {
    iVar3 = *(int *)(param_1 + 0x14c);
    if (iVar7 == 1) {
      *(int *)(param_1 + 0x150) = iVar3;
    }
    else {
      *(undefined4 *)(param_1 + 0x150) = 3;
      if (((iVar3 == 8) || (iVar3 == 4)) || (iVar3 == 0xc)) {
        *(undefined4 *)(param_1 + 0x150) = 4;
      }
    }
    iVar7 = 0;
    for (uVar4 = *(uint *)(param_1 + 0x150); uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
      iVar7 = iVar7 + 1;
    }
    uVar4 = FUN_01352140(*(undefined4 *)(param_1 + 0x164),iVar7);
    if (uVar4 != 1) {
      return uVar4 & 0xffffff00;
    }
    iVar7 = FUN_013520e0();
  }
  uVar6 = (undefined2)((uint)iVar7 >> 0x10);
  if ((*(float *)(param_1 + 0xb0) != *(float *)(param_1 + 0x80)) ||
     (*(int *)(param_1 + 0xdc) != *(int *)(param_1 + 0xac))) {
    FUN_01351640();
    uVar4 = FUN_013514f0();
    if (uVar4 != 1) goto LAB_0135093a;
    iVar7 = 0;
    for (uVar4 = *(uint *)(param_1 + 0x150); uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
      iVar7 = iVar7 + 1;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_013527e0();
    }
    fVar2 = (float)*(int *)(param_1 + 0x154);
    if (*(int *)(param_1 + 0x154) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    uVar6 = 0;
    local_10 = (int)(longlong)
                    ROUND(fVar2 * (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x80)) * 0.001)
    ;
    *(int *)(param_1 + 0x148) = local_10 + *(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x40);
  }
  fVar2 = *(float *)(param_1 + 0xb4);
  pfVar1 = (float *)(param_1 + 0x84);
  uVar5 = CONCAT21(uVar6,(fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                         fVar2 < *pfVar1);
  if (fVar2 != *pfVar1) {
    FUN_013527b0(*(undefined4 *)(param_1 + 0x164));
    FUN_013527b0(*(undefined4 *)(param_1 + 0x164));
    uVar4 = FUN_013515a0();
    if (uVar4 != 1) {
LAB_0135093a:
      return uVar4 & 0xffffff00;
    }
    FUN_013527e0();
    FUN_013527e0();
    FUN_01350490();
    uVar5 = extraout_var;
  }
  if (*(char *)(param_1 + 0x15e) != '\0') {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return CONCAT31(uVar5,1);
}

// 01350990  FUN_01350990  size=1511  [run]
void __thiscall FUN_01350990(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  void *_Dst;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  undefined4 uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x14c);
  uVar6 = (uint)*(ushort *)((int)param_2 + 0xe);
  if (uVar1 == 8) {
    fVar7 = *(float *)(param_1 + 0xd0);
    fVar8 = *(float *)(param_1 + 0xa0);
LAB_01350f23:
    FUN_01353440(*param_2,*param_3,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),
                 *(float *)(param_1 + 0xd8) * fVar7,*(float *)(param_1 + 0xa8) * fVar8,uVar6);
    return;
  }
  if (uVar1 == 4) {
    fVar7 = *(float *)(param_1 + 0xc4);
    fVar8 = *(float *)(param_1 + 0x94);
    goto LAB_01350f23;
  }
  uVar1 = uVar1 & 0xfffffff7;
  uVar5 = 0;
  uVar3 = uVar1;
  if (uVar1 == 0) {
LAB_013509d8:
    iVar4 = 0;
    for (; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar4 = iVar4 + 1;
    }
  }
  else {
    do {
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if (uVar5 < 3) goto LAB_013509d8;
    iVar4 = 2;
  }
  _Dst = (void *)(**(code **)(**(int **)(param_1 + 0x164) + 4))(iVar4 * uVar6 * 4);
  if (_Dst == (void *)0x0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x14c) & 7;
  if (uVar1 == 3) {
    pvVar9 = (void *)((int)_Dst + uVar6 * 4);
    FUN_01352dc0(*param_3,*param_3 + (uint)*(ushort *)(param_3 + 3) * 4,_Dst,pvVar9,uVar6,
                 *(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x88));
    FUN_01353440(*param_2,_Dst,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),
                 *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xc4),
                 *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x94),uVar6);
    uVar2 = *(undefined4 *)(param_1 + 0xa4);
    fVar7 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x94);
    fVar8 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xc4);
    uVar10 = *(undefined4 *)(param_1 + 0xd4);
LAB_01350d07:
    iVar4 = *param_2 + (uint)*(ushort *)(param_2 + 3) * 4;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 != 7) goto LAB_01350d1c;
      FUN_01353260(*param_3,*param_3 + (uint)*(ushort *)(param_3 + 3) * 4,_Dst,0x3ee8b439,0x3ee8b439
                   ,0x3ee8b439,0x3ee8b439,uVar6);
      FUN_01353440(*param_2 + (uint)*(ushort *)(param_2 + 3) * 8,_Dst,
                   *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),
                   *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xd8),
                   *(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0xa8),uVar6);
      FUN_01353260(*param_3,*param_3 + (uint)*(ushort *)(param_3 + 3) * 4,_Dst,0x3f620c4a,0x3f620c4a
                   ,0xbdef9db2,0xbdef9db2,uVar6);
      pvVar9 = (void *)((int)_Dst + uVar6 * 4);
      FUN_01353260(*param_3 + (uint)*(ushort *)(param_3 + 3) * 4,*param_3,pvVar9,0x3f620c4a,
                   0x3f620c4a,0xbdef9db2,0xbdef9db2,uVar6);
      FUN_013529e0(_Dst,pvVar9,uVar6,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x88)
                  );
      FUN_01353440(*param_2,_Dst,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),
                   *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xc4),
                   *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x94),uVar6);
      uVar2 = *(undefined4 *)(param_1 + 0xa4);
      fVar7 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x94);
      fVar8 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xc4);
      uVar10 = *(undefined4 *)(param_1 + 0xd4);
      goto LAB_01350d07;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xa4);
    fVar7 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x94);
    pvVar9 = (void *)*param_3;
    iVar4 = *param_2;
    fVar8 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xc4);
    uVar10 = *(undefined4 *)(param_1 + 0xd4);
  }
  FUN_01353440(iVar4,pvVar9,uVar10,uVar2,fVar8,fVar7,uVar6);
LAB_01350d1c:
  if ((*(byte *)(param_1 + 0x14c) & 0x30) != 0) {
    FID_conflict__memcpy(_Dst,(void *)*param_3,uVar6 * 4);
    pvVar9 = (void *)((int)_Dst + uVar6 * 4);
    FID_conflict__memcpy(pvVar9,(void *)(*param_3 + (uint)*(ushort *)(param_3 + 3) * 4),uVar6 * 4);
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_01352810(_Dst,uVar6);
    }
    if (*(int *)(param_1 + 0x134) != 0) {
      FUN_01352810(pvVar9,uVar6);
    }
    FUN_013529e0(_Dst,pvVar9,uVar6,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x88));
    uVar1 = (uint)((byte)(*(uint *)(param_1 + 0x14c) >> 2) & 1 | 2);
    FUN_01353440(*param_2 + *(ushort *)(param_2 + 3) * uVar1 * 4,_Dst,
                 *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),
                 *(float *)(param_1 + 200) * *(float *)(param_1 + 0xd8),
                 *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0xa8),uVar6);
    FUN_01353440(*param_2 + (uVar1 + 1) * (uint)*(ushort *)(param_2 + 3) * 4,pvVar9,
                 *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),
                 *(float *)(param_1 + 200) * *(float *)(param_1 + 0xd8),
                 *(float *)(param_1 + 0x98) * *(float *)(param_1 + 0xa8),uVar6);
  }
  if ((*(byte *)(param_1 + 0x14c) & 8) != 0) {
    uVar2 = FUN_01351740(*param_3,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),
                         *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd0),
                         *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa0),uVar6);
    FUN_01353440(uVar2);
  }
  (**(code **)(**(int **)(param_1 + 0x164) + 8))(_Dst);
  return;
}

// 01350F80  FUN_01350f80  size=894  [run]
void __thiscall FUN_01350f80(int param_1,int *param_2)

{
  void *_Src;
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_38;
  undefined4 local_34;
  ushort local_2c;
  ushort local_2a;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  byte local_7;
  char local_6;
  char local_5;
  
  cVar2 = FUN_01350790((short)param_2[3]);
  if ((((cVar2 != '\0') &&
       (FUN_013517e0(param_2,*(undefined4 *)(param_1 + 0x148)), *(short *)((int)param_2 + 0xe) != 0)
       ) && (local_18 = (**(code **)(**(int **)(param_1 + 0x164) + 4))
                                  ((*(uint *)(param_1 + 0x44) >> 1) * 8 + 8), local_18 != 0)) &&
     ((local_1c = (**(code **)(**(int **)(param_1 + 0x164) + 4))(*(int *)(param_1 + 0x44) * 4),
      local_1c != 0 &&
      (local_20 = (**(code **)(**(int **)(param_1 + 0x164) + 4))
                            ((uint)*(ushort *)(param_1 + 100) * 8), local_20 != 0)))) {
    if (*(int *)(param_1 + 0xac) == 0) {
      local_10 = (int *)0x0;
      for (uVar3 = *(uint *)(param_1 + 0x150); uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
        local_10 = (int *)((int)local_10 + 1);
      }
      uVar1 = *(ushort *)((int)param_2 + 0xe);
      uVar3 = (uint)uVar1;
      local_38 = (**(code **)(**(int **)(param_1 + 0x164) + 4))((int)local_10 * uVar3 * 4);
      if (local_38 == 0) {
        return;
      }
      local_34 = *(undefined4 *)(param_1 + 0x150);
      local_2c = uVar1;
      local_2a = uVar1;
      local_28 = local_38;
      FUN_013536f0(param_2,&local_38,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0x8c)
                   ,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0x90));
      piVar6 = (int *)0x0;
      if (local_10 != (int *)0x0) {
        local_14 = (int *)(*(int *)(param_1 + 0x4c) + -1);
        local_c = (int *)(param_1 + 0xe0);
        do {
          local_24 = local_38 + (uint)local_2c * (int)piVar6 * 4;
          piVar4 = local_14;
          if (piVar6 < local_14) {
            piVar4 = piVar6;
          }
          FUN_01352360(local_24,uVar3,local_1c,local_18,local_20,piVar6,piVar4);
          if (*local_c != 0) {
            FUN_01352810(local_24,uVar3);
          }
          local_c = local_c + 3;
          piVar6 = (int *)((int)piVar6 + 1);
        } while (piVar6 < local_10);
      }
      FUN_01350990(param_2,&local_38);
      (**(code **)(**(int **)(param_1 + 0x164) + 8))(local_28);
    }
    else {
      local_14 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 4))
                                  ((uint)*(ushort *)(param_2 + 3) * 4);
      if (local_14 == (int *)0x0) {
        return;
      }
      local_28 = FUN_0134ec10();
      local_c = (int *)(uint)*(ushort *)((int)param_2 + 0xe);
      local_6 = (*(uint *)(param_1 + 0x14c) & 0x30) != 0;
      local_7 = (byte)(*(uint *)(param_1 + 0x14c) >> 2) & 1 | 2;
      local_5 = *(int *)(param_1 + 0x128) != 0;
      uVar3 = 0;
      if (local_28 != 0) {
        local_10 = (int *)(param_1 + 0xe0);
        do {
          _Src = (void *)(*param_2 + *(ushort *)(param_2 + 3) * uVar3 * 4);
          FID_conflict__memcpy(local_14,_Src,(int)local_c * 4);
          FUN_01352360(_Src,local_c,local_1c,local_18,local_20,uVar3,
                       *(undefined1 *)(param_1 + 0x158 + uVar3));
          if (*local_10 != 0) {
            FUN_01352810(_Src,local_c);
          }
          if (((local_5 != '\0') && (local_6 != '\0')) &&
             ((uVar3 == local_7 || (uVar3 == local_7 + 1)))) {
            FUN_01352810(_Src,local_c);
          }
          FUN_01353440(_Src,local_14,*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xa8)
                       ,*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa4),local_c);
          local_10 = local_10 + 3;
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_28);
      }
      (**(code **)(**(int **)(param_1 + 0x164) + 8))(local_14);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (*(uint *)(param_1 + 0x5c) <= *(uint *)(param_1 + 0x30)) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    puVar7 = (undefined4 *)(param_1 + 0x80);
    puVar8 = (undefined4 *)(param_1 + 0xb0);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x164) + 8))(local_18);
    (**(code **)(**(int **)(param_1 + 0x164) + 8))(local_1c);
    (**(code **)(**(int **)(param_1 + 0x164) + 8))(local_20);
  }
  return;
}

// 01351310  FUN_01351310  size=410  [run]
undefined4 * __fastcall FUN_01351310(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01803d04;
  FUN_01351ff0();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x22] = 0x43340000;
  param_1[0x2a] = 0x3e800000;
  param_1[0x2b] = 0;
  param_1[0x37] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x43340000;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0x3f800000;
  param_1[0x33] = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0x35] = 0x3f800000;
  param_1[0x36] = 0x3e800000;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0xffffffff;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  return param_1;
}

// 013514B0  FUN_013514b0  size=34  [run]
undefined4 FUN_013514b0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 4))(0x170);
  if (iVar1 != 0) {
    uVar2 = FUN_01351310();
    return uVar2;
  }
  return 0;
}

// 013514F0  FUN_013514f0  size=165  [run]
int __fastcall FUN_013514f0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_10;
  
  fVar1 = (float)*(int *)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x154) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_10 = (int)(longlong)ROUND(*(float *)(param_1 + 0x80) * 0.001 * fVar1);
  if (local_10 != 0) {
    uVar4 = 0;
    for (uVar2 = *(uint *)(param_1 + 0x150); uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      uVar4 = uVar4 + 1;
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      do {
        iVar3 = FUN_01352760(*(undefined4 *)(param_1 + 0x164),local_10);
        if (iVar3 != 1) {
          return iVar3;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
  }
  return 1;
}

// 013515A0  FUN_013515a0  size=159  [run]
int __fastcall FUN_013515a0(int param_1)

{
  float fVar1;
  int iVar2;
  int local_10;
  
  fVar1 = (float)*(int *)(param_1 + 0x154);
  iVar2 = 1;
  if (*(int *)(param_1 + 0x154) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_10 = (int)(longlong)ROUND(*(float *)(param_1 + 0x84) * 0.001 * fVar1);
  if ((local_10 != 0) &&
     ((((*(byte *)(param_1 + 0x14c) & 0x10) == 0 ||
       (iVar2 = FUN_01352760(*(undefined4 *)(param_1 + 0x164),local_10), iVar2 == 1)) &&
      ((*(byte *)(param_1 + 0x14c) & 0x20) != 0)))) {
    iVar2 = FUN_01352760(*(undefined4 *)(param_1 + 0x164),local_10);
    return iVar2;
  }
  return iVar2;
}

// 01351640  FUN_01351640  size=62  [run]
void __fastcall FUN_01351640(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *(uint *)(param_1 + 0x150); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    iVar2 = iVar2 + 1;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_013527b0(*(undefined4 *)(param_1 + 0x164));
  }
  return;
}

// 01351680  FUN_01351680  size=41  [run]
void __fastcall FUN_01351680(int param_1)

{
  FUN_013527b0(*(undefined4 *)(param_1 + 0x164));
  FUN_013527b0(*(undefined4 *)(param_1 + 0x164));
  return;
}

// 013516F0  FUN_013516f0  size=26  [run]
void FUN_013516f0(void)

{
  FUN_013527e0();
  FUN_013527e0();
  return;
}

// 01351710  FUN_01351710  size=35  [run]
void FUN_01351710(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01351740  FUN_01351740  size=42  [run]
int __fastcall FUN_01351740(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[1];
  if ((uVar1 & 8) != 0) {
    iVar2 = 0;
    for (; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    return *param_1 + (uint)*(ushort *)(param_1 + 3) * (iVar2 + -1) * 4;
  }
  return 0;
}

// 01351770  FUN_01351770  size=104  [run]
void __fastcall FUN_01351770(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (uVar1 = param_1[1]; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    uVar3 = uVar3 + 1;
  }
  iVar2 = (uint)*(ushort *)(param_1 + 3) - (uint)*(ushort *)((int)param_1 + 0xe);
  if (iVar2 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      do {
        _memset((void *)(*param_1 +
                        (*(ushort *)(param_1 + 3) * uVar1 + (uint)*(ushort *)((int)param_1 + 0xe)) *
                        4),0,iVar2 * 4);
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar3);
    }
    *(short *)((int)param_1 + 0xe) = (short)param_1[3];
  }
  return;
}

// 013517E0  FUN_013517e0  size=113  [run]
void __thiscall FUN_013517e0(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 8) != 0x11) {
    *param_1 = 0xffffffff;
    return;
  }
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 == 0xffffffff) {
    param_1[1] = param_3;
    uVar1 = param_3;
  }
  else {
    if (param_3 <= param_1[1]) goto LAB_01351816;
    uVar1 = (uVar1 - param_1[1]) + param_3;
    param_1[1] = param_3;
  }
  *param_1 = uVar1;
LAB_01351816:
  uVar2 = (uint)*(ushort *)(param_2 + 0xc) - (uint)*(ushort *)(param_2 + 0xe);
  uVar1 = *param_1;
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  *param_1 = uVar1 - uVar2;
  FUN_01351770();
  if (*param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_2 + 8) = 0x2d;
  return;
}

// 01351860  FUN_01351860  size=48  [run]
undefined4 * __thiscall FUN_01351860(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803d04;
  FUN_01352010();
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01351900  FUN_01351900  size=35  [run]
undefined4 __thiscall FUN_01351900(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
    return uVar1;
  }
  return 1;
}

// 01351930  FUN_01351930  size=382  [run]
undefined4 __thiscall FUN_01351930(int param_1,undefined2 param_2,undefined4 *param_3)

{
  float10 fVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 4) = *param_3;
    return 1;
  case 1:
    *(undefined4 *)(param_1 + 8) = *param_3;
    return 1;
  case 2:
    *(undefined4 *)(param_1 + 0xc) = *param_3;
    return 1;
  case 10:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x10) = (float)fVar1;
    return 1;
  case 0xb:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x14) = (float)fVar1;
    return 1;
  case 0x14:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x18) = (float)fVar1;
    return 1;
  case 0x15:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x1c) = (float)fVar1;
    return 1;
  case 0x16:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x20) = (float)fVar1;
    return 1;
  case 0x17:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x24) = (float)fVar1;
    return 1;
  case 0x1e:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x28) = (float)fVar1;
    return 1;
  case 0x1f:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x2c) = (float)fVar1;
    return 1;
  case 0x20:
    *(undefined4 *)(param_1 + 0x30) = *param_3;
  }
  return 1;
}

// 01351B10  FUN_01351b10  size=24  [run]
void __thiscall FUN_01351b10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0xc; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_2 = param_2 + 1;
  }
  return;
}

// 01351B30  FUN_01351b30  size=123  [run]
void __thiscall FUN_01351b30(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_01803d2c;
  param_1[3] = 0x43340000;
  param_1[4] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0x3e800000;
  param_1[0xc] = 0;
  puVar2 = param_1 + 1;
  for (iVar1 = 0xc; param_2 = param_2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  return;
}

// 01351BB0  FUN_01351bb0  size=143  [run]
undefined4 * __thiscall FUN_01351bb0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803d2c;
    puVar1[3] = 0x43340000;
    puVar1[4] = 0x3f800000;
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0x3f800000;
    puVar1[8] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0x3e800000;
    puVar1[0xc] = 0;
    puVar3 = puVar1 + 1;
    for (iVar2 = 0xc; param_1 = param_1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      puVar3 = puVar3 + 1;
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01351C40  FUN_01351c40  size=39  [run]
undefined4 __thiscall FUN_01351c40(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01351C70  FUN_01351c70  size=258  [run]
undefined4 __thiscall FUN_01351c70(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x10) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x14) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x18) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1c) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x20) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x24) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x28) = (float)fVar1;
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x2c) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x30) = param_2[0xb];
  return 1;
}

// 01351DF0  FUN_01351df0  size=120  [run]
undefined4 * FUN_01351df0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x34);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803d2c;
    puVar1[3] = 0x43340000;
    puVar1[4] = 0x3f800000;
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0x3f800000;
    puVar1[8] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0x3e800000;
    puVar1[0xc] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01351E70  FUN_01351e70  size=35  [run]
void FUN_01351e70(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01351EA0  FUN_01351ea0  size=17  [run]
undefined4 FUN_01351ea0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 01351EC0  FUN_01351ec0  size=34  [run]
undefined4 * __thiscall FUN_01351ec0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01351F30  FUN_01351f30  size=181  [run]
void __fastcall FUN_01351f30(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 01351FF0  FUN_01351ff0  size=23  [run]
void __fastcall FUN_01351ff0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 01352010  FUN_01352010  size=1  [run]
void FUN_01352010(void)

{
  return;
}

// 01352020  FUN_01352020  size=93  [run]
void __thiscall FUN_01352020(int param_1,int *param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x60) != 0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4) != 0) {
          (**(code **)(*param_2 + 8))(*(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar1 * 4));
          *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar1 * 4) = 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x60));
    }
    (**(code **)(*param_2 + 8))(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

// 01352090  FUN_01352090  size=72  [run]
void __thiscall FUN_01352090(int param_1,int *param_2)

{
  FUN_01352020(param_2);
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*param_2 + 8))(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 8))(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 013520E0  FUN_013520e0  size=88  [run]
void __fastcall FUN_013520e0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4) != 0) {
        _memset(*(void **)(*(int *)(param_1 + 0x1c) + uVar1 * 4),0,
                (uint)*(ushort *)(param_1 + 0x54) * *(int *)(param_1 + 0x4c) * 8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 01352140  FUN_01352140  size=152  [run]
undefined4 __thiscall FUN_01352140(int param_1,int *param_2,int param_3)

{
  void *_Dst;
  undefined4 uVar1;
  uint uVar2;
  
  FUN_01352020(param_2);
  *(int *)(param_1 + 0x60) = param_3;
  _Dst = (void *)(**(code **)(*param_2 + 4))(param_3 * 4);
  *(void **)(param_1 + 0x1c) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  _memset(_Dst,0,*(int *)(param_1 + 0x60) * 4);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      uVar1 = (**(code **)(*param_2 + 4))
                        (*(int *)(param_1 + 0x4c) * (uint)*(ushort *)(param_1 + 0x54) * 8);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar2 * 4) = uVar1;
      if (*(int *)(*(int *)(param_1 + 0x1c) + uVar2 * 4) == 0) {
        return 0x34;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x60));
  }
  return 1;
}

// 013521E0  FUN_013521e0  size=369  [run]
undefined4 __thiscall
FUN_013521e0(undefined1 *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_c [4];
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  (**(code **)(*param_3 + 0x1c))(0,&local_8,local_c);
  if (local_8 == (undefined4 *)0x0) {
    return 0x4f;
  }
  puVar5 = local_8;
  puVar6 = (undefined4 *)(param_1 + 0x30);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_8 = local_8 + 0xc;
  uVar2 = (**(code **)(*param_3 + 0x10))();
  if ((*(uint *)(param_1 + 0x30) == (uVar2 & 0xffff)) && (*(int *)(param_1 + 0x38) == *param_4)) {
    *(undefined4 **)(param_1 + 100) = local_8;
    local_8 = (undefined4 *)((int)local_8 + (*(int *)(param_1 + 0x4c) * 2 + 0xfU & 0xfffffff0));
    *(undefined4 **)(param_1 + 0x14) = local_8;
    if (1 < *(uint *)(param_1 + 0x3c)) {
      *(undefined4 **)(param_1 + 0x18) = local_8 + *(int *)(param_1 + 0x50) * 2;
    }
    puVar5 = (undefined4 *)(param_1 + 0xc);
    FUN_01353cb0(*(undefined4 *)(param_1 + 0x34),0,0,puVar5);
    iVar4 = (**(code **)(*param_2 + 4))(*puVar5);
    *(int *)(param_1 + 4) = iVar4;
    if (iVar4 != 0) {
      puVar6 = (undefined4 *)(param_1 + 0x10);
      FUN_01353cb0(*(undefined4 *)(param_1 + 0x34),1,0,puVar6);
      iVar4 = (**(code **)(*param_2 + 4))(*puVar6);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 != 0) {
        FUN_01353cb0(*(undefined4 *)(param_1 + 0x34),0,*(undefined4 *)(param_1 + 4),puVar5);
        FUN_01353cb0(*(undefined4 *)(param_1 + 0x34),1,*(undefined4 *)(param_1 + 8),puVar6);
        uVar1 = (**(code **)(*param_5 + 4))(4);
        iVar4 = 0;
        *param_1 = uVar1;
        *(undefined4 *)(param_1 + 0x60) = 0;
        for (uVar2 = param_4[1] & 0x3ffff; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
          iVar4 = iVar4 + 1;
        }
        uVar3 = FUN_01352140(param_2,iVar4);
        return uVar3;
      }
    }
    return 0x34;
  }
  AK::Monitor::PostString
            (L"Soundbanks have been generated with convolution reverb parameters that do not match sound engine runtime conditions. No wet path will be heard."
             ,1);
  return 2;
}

// 01352360  FUN_01352360  size=369  [run]
void __thiscall
FUN_01352360(int param_1,void *param_2,int param_3,void *param_4,void *param_5,undefined4 param_6,
            int param_7,int param_8)

{
  void *_Src;
  size_t _Size;
  int iVar1;
  size_t _Size_00;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x34);
  FID_conflict__memcpy(param_4,param_2,param_3 * 4);
  _memset((void *)(param_3 * 4 + (int)param_4),0,(iVar1 - param_3) * 4);
  FUN_01353dd0(*(undefined4 *)(param_1 + 4),param_4,param_5);
  param_3 = *(int *)(param_1 + 0x14 + param_8 * 4);
  iVar1 = *(int *)(param_1 + 100);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    do {
      uVar2 = (uint)*(ushort *)(iVar1 + uVar3 * 2);
      FUN_01352510(param_6,param_5,param_3,uVar2);
      FUN_01354010(*(int *)(*(int *)(param_1 + 0x1c) + param_7 * 4) +
                   ((*(int *)(param_1 + 0x20) + uVar3) % *(uint *)(param_1 + 0x4c)) *
                   (uint)*(ushort *)(param_1 + 0x54) * 8,param_6,uVar2 * 2);
      uVar3 = uVar3 + 1;
      param_3 = param_3 + uVar2 * 8;
    } while (uVar3 < *(uint *)(param_1 + 0x4c));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x54);
  _Size = uVar2 * 8;
  uVar3 = *(uint *)(param_1 + 0x34);
  _Src = (void *)(*(int *)(*(int *)(param_1 + 0x1c) + param_7 * 4) +
                 (*(uint *)(param_1 + 0x20) % *(uint *)(param_1 + 0x4c)) * uVar2 * 8);
  FID_conflict__memcpy(param_5,_Src,_Size);
  _memset((void *)(_Size + (int)param_5),0,(uVar3 >> 1) * 8 + 8 + uVar2 * -8);
  FUN_01353ee0(*(undefined4 *)(param_1 + 8),param_5,param_4);
  FUN_01351f30();
  _Size_00 = *(int *)(param_1 + 0x30) * 4;
  FID_conflict__memcpy(param_2,(void *)(_Size_00 + (int)param_4),_Size_00);
  _memset(_Src,0,_Size);
  return;
}

// 013524E0  FUN_013524e0  size=37  [run]
int __thiscall FUN_013524e0(int param_1,int param_2,int param_3,int param_4)

{
  return *(int *)(param_4 + param_2 * 4) +
         ((uint)(*(int *)(param_1 + 0x20) + param_3) % *(uint *)(param_1 + 0x4c)) *
         (uint)*(ushort *)(param_1 + 0x54) * 8;
}

// 01352510  FUN_01352510  size=583  [run]
void __thiscall
FUN_01352510(char *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  float *pfVar24;
  int local_c;
  
  pfVar1 = param_3;
  uVar19 = param_5 >> 3;
  local_c = 4;
  do {
    local_c = local_c + -1;
  } while (local_c != 0);
  pfVar22 = param_2;
  pfVar24 = param_3;
  param_3 = (float *)uVar19;
  if (*param_1 == '\0') {
    if (uVar19 != 0) {
      do {
        fVar3 = *pfVar24;
        fVar4 = pfVar24[1];
        fVar5 = pfVar24[2];
        fVar6 = pfVar24[3];
        fVar7 = *param_4;
        fVar8 = param_4[2];
        fVar9 = param_4[3];
        fVar10 = param_4[1];
        fVar11 = param_4[2];
        fVar12 = param_4[3];
        *pfVar22 = fVar3 * *param_4 + fVar4 * -1.0 * param_4[1];
        pfVar22[1] = fVar3 * fVar10 + fVar4 * 1.0 * fVar7;
        pfVar22[2] = fVar5 * fVar11 + fVar6 * -1.0 * fVar9;
        pfVar22[3] = fVar5 * fVar12 + fVar6 * 1.0 * fVar8;
        pfVar2 = (float *)((int)pfVar1 + (0x10 - (int)param_2) + (int)pfVar22);
        fVar3 = *pfVar2;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[2];
        fVar6 = pfVar2[3];
        fVar7 = param_4[4];
        fVar8 = param_4[6];
        fVar9 = param_4[7];
        fVar10 = param_4[5];
        fVar11 = param_4[6];
        fVar12 = param_4[7];
        pfVar22[4] = fVar3 * param_4[4] + fVar4 * -1.0 * param_4[5];
        pfVar22[5] = fVar3 * fVar10 + fVar4 * 1.0 * fVar7;
        pfVar22[6] = fVar5 * fVar11 + fVar6 * -1.0 * fVar9;
        pfVar22[7] = fVar5 * fVar12 + fVar6 * 1.0 * fVar8;
        fVar3 = pfVar24[8];
        fVar4 = pfVar24[9];
        fVar5 = pfVar24[10];
        fVar6 = pfVar24[0xb];
        fVar7 = param_4[8];
        fVar8 = param_4[10];
        fVar9 = param_4[0xb];
        fVar10 = param_4[9];
        fVar11 = param_4[10];
        fVar12 = param_4[0xb];
        pfVar22[8] = fVar3 * param_4[8] + fVar4 * -1.0 * param_4[9];
        pfVar22[9] = fVar3 * fVar10 + fVar4 * 1.0 * fVar7;
        pfVar22[10] = fVar5 * fVar11 + fVar6 * -1.0 * fVar9;
        pfVar22[0xb] = fVar5 * fVar12 + fVar6 * 1.0 * fVar8;
        fVar3 = pfVar24[0xc];
        fVar4 = pfVar24[0xd];
        fVar5 = pfVar24[0xe];
        fVar6 = pfVar24[0xf];
        fVar7 = param_4[0xc];
        fVar8 = param_4[0xe];
        fVar9 = param_4[0xf];
        fVar10 = param_4[0xd];
        fVar11 = param_4[0xe];
        fVar12 = param_4[0xf];
        pfVar22[0xc] = fVar3 * param_4[0xc] + fVar4 * -1.0 * param_4[0xd];
        pfVar22[0xd] = fVar3 * fVar10 + fVar4 * 1.0 * fVar7;
        pfVar22[0xe] = fVar5 * fVar11 + fVar6 * -1.0 * fVar9;
        pfVar22[0xf] = fVar5 * fVar12 + fVar6 * 1.0 * fVar8;
        pfVar22 = pfVar22 + 0x10;
        pfVar24 = pfVar24 + 0x10;
        param_4 = param_4 + 0x10;
        param_3 = (float *)((int)param_3 - 1);
      } while (param_3 != (float *)0x0);
    }
  }
  else if (uVar19 != 0) {
    do {
      fVar3 = *pfVar24;
      fVar4 = pfVar24[1];
      fVar5 = pfVar24[2];
      fVar6 = pfVar24[3];
      fVar7 = *param_4;
      fVar8 = param_4[1];
      fVar9 = param_4[2];
      fVar10 = param_4[3];
      pfVar2 = (float *)((int)pfVar1 + (0x10 - (int)param_2) + (int)pfVar22);
      fVar11 = *pfVar2;
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = param_4[4];
      fVar16 = param_4[5];
      fVar17 = param_4[6];
      fVar18 = param_4[7];
      *pfVar22 = fVar3 * fVar7 - fVar8 * fVar4;
      pfVar22[1] = fVar3 * fVar8 + fVar7 * fVar4;
      pfVar22[2] = fVar5 * fVar9 - fVar10 * fVar6;
      pfVar22[3] = fVar5 * fVar10 + fVar9 * fVar6;
      fVar3 = pfVar24[8];
      fVar4 = pfVar24[9];
      fVar5 = pfVar24[10];
      fVar6 = pfVar24[0xb];
      fVar7 = param_4[8];
      fVar8 = param_4[9];
      fVar9 = param_4[10];
      fVar10 = param_4[0xb];
      pfVar22[4] = fVar11 * fVar15 - fVar16 * fVar12;
      pfVar22[5] = fVar11 * fVar16 + fVar15 * fVar12;
      pfVar22[6] = fVar13 * fVar17 - fVar18 * fVar14;
      pfVar22[7] = fVar13 * fVar18 + fVar17 * fVar14;
      fVar11 = pfVar24[0xc];
      fVar12 = pfVar24[0xd];
      fVar13 = pfVar24[0xe];
      fVar14 = pfVar24[0xf];
      fVar15 = param_4[0xc];
      fVar16 = param_4[0xd];
      fVar17 = param_4[0xe];
      fVar18 = param_4[0xf];
      pfVar22[8] = fVar3 * fVar7 - fVar8 * fVar4;
      pfVar22[9] = fVar3 * fVar8 + fVar7 * fVar4;
      pfVar22[10] = fVar5 * fVar9 - fVar10 * fVar6;
      pfVar22[0xb] = fVar5 * fVar10 + fVar9 * fVar6;
      pfVar22[0xc] = fVar11 * fVar15 - fVar16 * fVar12;
      pfVar22[0xd] = fVar11 * fVar16 + fVar15 * fVar12;
      pfVar22[0xe] = fVar13 * fVar17 - fVar18 * fVar14;
      pfVar22[0xf] = fVar13 * fVar18 + fVar17 * fVar14;
      pfVar22 = pfVar22 + 0x10;
      pfVar24 = pfVar24 + 0x10;
      param_4 = param_4 + 0x10;
      param_3 = (float *)((int)param_3 - 1);
    } while (param_3 != (float *)0x0);
  }
  iVar21 = param_5 + uVar19 * -8;
  if (iVar21 != 0) {
    iVar20 = (int)param_4 - (int)pfVar24;
    iVar23 = (int)pfVar22 - (int)pfVar24;
    iVar21 = (iVar21 - 1U >> 1) + 1;
    do {
      fVar3 = *pfVar24;
      fVar4 = pfVar24[1];
      fVar5 = pfVar24[2];
      fVar6 = pfVar24[3];
      pfVar1 = (float *)(iVar20 + (int)pfVar24);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar22 = (float *)(iVar20 + (int)pfVar24);
      fVar10 = pfVar22[1];
      fVar11 = pfVar22[2];
      fVar12 = pfVar22[3];
      pfVar2 = (float *)(iVar23 + (int)pfVar24);
      *pfVar2 = fVar3 * *pfVar22 + fVar4 * -1.0 * pfVar1[1];
      pfVar2[1] = fVar3 * fVar10 + fVar4 * 1.0 * fVar7;
      pfVar2[2] = fVar5 * fVar11 + fVar6 * -1.0 * fVar9;
      pfVar2[3] = fVar5 * fVar12 + fVar6 * 1.0 * fVar8;
      pfVar24 = pfVar24 + 4;
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  return;
}

// 01352760  FUN_01352760  size=69  [run]
undefined4 __thiscall FUN_01352760(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 >> 2;
  *param_1 = param_3 * 4;
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_2 + 4))(param_3 * 0x10);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
  }
  param_1[2] = 0;
  return 1;
}

// 013527B0  FUN_013527b0  size=42  [run]
void __thiscall FUN_013527b0(undefined4 *param_1,int *param_2)

{
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 8))(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

// 013527E0  FUN_013527e0  size=37  [run]
void __fastcall FUN_013527e0(int *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    _memset((void *)param_1[1],0,*param_1 * 4);
  }
  param_1[2] = 0;
  return;
}

// 01352810  FUN_01352810  size=196  [run]
void __thiscall FUN_01352810(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    iVar13 = param_1[2];
    iVar2 = *param_1;
    uVar11 = iVar2 - iVar13;
    puVar10 = puVar1 + iVar13;
    if (param_3 < uVar11) {
      for (uVar11 = param_3 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        *puVar10 = *param_2;
        puVar10[1] = uVar7;
        puVar10[2] = uVar8;
        puVar10[3] = uVar9;
        *param_2 = uVar3;
        param_2[1] = uVar4;
        param_2[2] = uVar5;
        param_2[3] = uVar6;
        puVar10 = puVar10 + 4;
        param_2 = param_2 + 4;
      }
      param_1[2] = iVar13 + param_3;
      return;
    }
    for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - uVar12) {
      uVar11 = uVar11 >> 2;
      uVar12 = uVar11;
      if (param_3 < uVar11) {
        uVar11 = param_3;
        uVar12 = param_3;
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar9 = param_2[3];
        *puVar10 = *param_2;
        puVar10[1] = uVar7;
        puVar10[2] = uVar8;
        puVar10[3] = uVar9;
        *param_2 = uVar3;
        param_2[1] = uVar4;
        param_2[2] = uVar5;
        param_2[3] = uVar6;
        puVar10 = puVar10 + 4;
        param_2 = param_2 + 4;
      }
      iVar13 = iVar13 + uVar12 * 4;
      param_1[2] = iVar13;
      if (iVar13 == iVar2) {
        iVar13 = 0;
        param_1[2] = 0;
        puVar10 = puVar1;
      }
      uVar11 = iVar2 - iVar13;
    }
  }
  return;
}

// 013528E0  FUN_013528e0  size=238  [run]
void __thiscall FUN_013528e0(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    iVar10 = *param_1;
    uVar11 = iVar10 - param_1[2];
    puVar9 = puVar1 + param_1[2];
    if (param_4 < uVar11) {
      uVar11 = param_4 >> 2;
      if (uVar11 != 0) {
        iVar10 = (int)param_2 - (int)puVar9;
        do {
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          puVar1 = (undefined4 *)(iVar10 + (int)puVar9);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar6;
          puVar9[2] = uVar7;
          puVar9[3] = uVar8;
          *param_3 = uVar2;
          param_3[1] = uVar3;
          param_3[2] = uVar4;
          param_3[3] = uVar5;
          puVar9 = puVar9 + 4;
          param_3 = param_3 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      param_1[2] = param_1[2] + param_4;
      return;
    }
    param_4 = param_4 >> 2;
    if (param_4 != 0) {
      puVar13 = param_3;
      param_3 = (undefined4 *)param_1[2];
      do {
        uVar11 = uVar11 >> 2;
        uVar12 = uVar11;
        if (param_4 < uVar11) {
          uVar11 = param_4;
          uVar12 = param_4;
        }
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          uVar6 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          *puVar9 = *param_2;
          puVar9[1] = uVar6;
          puVar9[2] = uVar7;
          puVar9[3] = uVar8;
          *puVar13 = uVar2;
          puVar13[1] = uVar3;
          puVar13[2] = uVar4;
          puVar13[3] = uVar5;
          param_2 = param_2 + 4;
          puVar9 = puVar9 + 4;
          puVar13 = puVar13 + 4;
        }
        param_3 = (undefined4 *)((int)param_3 + uVar12 * 4);
        param_1[2] = (int)param_3;
        if (param_3 == (undefined4 *)iVar10) {
          param_3 = (undefined4 *)0x0;
          param_1[2] = 0;
          puVar9 = puVar1;
        }
        param_4 = param_4 - uVar12;
        uVar11 = iVar10 - (int)param_3;
      } while (param_4 != 0);
    }
  }
  return;
}

// 013529E0  FUN_013529e0  size=981  [run]
void FUN_013529e0(float *param_1,float *param_2,int param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_8;
  
  fVar7 = param_4 * 0.0055555557 * 0.292894 + 0.707106;
  local_8 = 1.0 - fVar7 * fVar7;
  if (local_8 <= 0.0) {
    local_8 = 0.0;
  }
  else {
    local_8 = SQRT(local_8);
  }
  fVar9 = param_5 * 0.0055555557 * 0.292894 + 0.707106;
  param_4 = 1.0 - fVar9 * fVar9;
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  else {
    param_4 = SQRT(param_4);
  }
  if ((fVar9 == fVar7) && (param_4 == local_8)) {
    pfVar1 = param_1 + param_3;
    if (param_1 < pfVar1) {
      iVar6 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
        do {
          fVar7 = *param_1;
          fVar2 = *param_2;
          fVar3 = param_2[1];
          *param_2 = fVar7 * param_4 + fVar2 * fVar9;
          fVar4 = param_1[1];
          *param_1 = fVar2 * param_4 + fVar7 * fVar9;
          fVar7 = param_2[2];
          param_2[1] = fVar4 * param_4 + fVar3 * fVar9;
          fVar2 = param_1[2];
          param_1[1] = fVar3 * param_4 + fVar4 * fVar9;
          fVar3 = param_2[3];
          param_2[2] = fVar2 * param_4 + fVar7 * fVar9;
          fVar4 = param_1[3];
          param_1[2] = fVar7 * param_4 + fVar2 * fVar9;
          param_1[3] = fVar3 * param_4 + fVar4 * fVar9;
          param_2[3] = fVar4 * param_4 + fVar3 * fVar9;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      if (param_1 < pfVar1) {
        iVar6 = (int)param_2 - (int)param_1;
        do {
          fVar7 = *param_1;
          fVar2 = *(float *)(iVar6 + (int)param_1);
          *param_1 = fVar2 * param_4 + fVar7 * fVar9;
          *(float *)(iVar6 + (int)param_1) = fVar7 * param_4 + fVar2 * fVar9;
          param_1 = param_1 + 1;
        } while (param_1 < pfVar1);
        return;
      }
    }
  }
  else {
    fVar2 = (float)param_3;
    if (param_3 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    pfVar1 = param_1 + param_3;
    fVar9 = (fVar9 - fVar7) / fVar2;
    fVar2 = (param_4 - local_8) / fVar2;
    if (param_1 < pfVar1) {
      iVar6 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
        do {
          fVar3 = *param_1;
          fVar4 = *param_2;
          fVar5 = param_2[1];
          *param_2 = fVar3 * local_8 + fVar4 * fVar7;
          *param_1 = fVar4 * local_8 + fVar3 * fVar7;
          fVar7 = fVar9 + fVar7;
          local_8 = fVar2 + local_8;
          fVar3 = param_1[1];
          fVar4 = param_2[2];
          param_2[1] = fVar3 * local_8 + fVar5 * fVar7;
          param_1[1] = fVar5 * local_8 + fVar3 * fVar7;
          fVar7 = fVar9 + fVar7;
          local_8 = fVar2 + local_8;
          fVar3 = param_1[2];
          fVar5 = param_2[3];
          param_2[2] = fVar3 * local_8 + fVar4 * fVar7;
          fVar8 = fVar9 + fVar7;
          param_1[2] = fVar4 * local_8 + fVar3 * fVar7;
          local_8 = fVar2 + local_8;
          fVar7 = param_1[3];
          param_2[3] = fVar7 * local_8 + fVar5 * fVar8;
          param_1[3] = fVar5 * local_8 + fVar7 * fVar8;
          param_1 = param_1 + 4;
          fVar7 = fVar8 + fVar9;
          param_2 = param_2 + 4;
          local_8 = local_8 + fVar2;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        fVar3 = *param_1;
        fVar4 = *param_2;
        *param_2 = fVar3 * local_8 + fVar4 * fVar7;
        *param_1 = fVar4 * local_8 + fVar3 * fVar7;
        fVar7 = fVar7 + fVar9;
        param_2 = param_2 + 1;
        local_8 = local_8 + fVar2;
      }
    }
  }
  return;
}

// 01352DC0  FUN_01352dc0  size=1018  [run]
void FUN_01352dc0(float *param_1,float *param_2,float *param_3,float *param_4,int param_5,
                 float param_6,float param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_8;
  
  fVar9 = param_6 * 0.0055555557 * 0.292894 + 0.707106;
  local_8 = 1.0 - fVar9 * fVar9;
  if (local_8 <= 0.0) {
    local_8 = 0.0;
  }
  else {
    local_8 = SQRT(local_8);
  }
  fVar11 = param_7 * 0.0055555557 * 0.292894 + 0.707106;
  param_6 = 1.0 - fVar11 * fVar11;
  if (param_6 <= 0.0) {
    param_6 = 0.0;
  }
  else {
    param_6 = SQRT(param_6);
  }
  if ((fVar11 == fVar9) && (param_6 == local_8)) {
    pfVar1 = param_1 + param_5;
    if (param_1 < pfVar1) {
      iVar6 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
        do {
          fVar9 = *param_1;
          fVar2 = *param_2;
          fVar3 = param_2[1];
          *param_4 = fVar9 * param_6 + fVar2 * fVar11;
          fVar4 = param_1[1];
          *param_3 = fVar2 * param_6 + fVar9 * fVar11;
          fVar9 = param_2[2];
          param_4[1] = fVar4 * param_6 + fVar3 * fVar11;
          fVar2 = param_1[2];
          param_3[1] = fVar3 * param_6 + fVar4 * fVar11;
          fVar3 = param_2[3];
          param_4[2] = fVar2 * param_6 + fVar9 * fVar11;
          fVar4 = param_1[3];
          param_3[2] = fVar9 * param_6 + fVar2 * fVar11;
          param_3[3] = fVar3 * param_6 + fVar4 * fVar11;
          param_4[3] = fVar4 * param_6 + fVar3 * fVar11;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
          param_3 = param_3 + 4;
          param_4 = param_4 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      if (param_1 < pfVar1) {
        iVar8 = (int)param_2 - (int)param_1;
        iVar7 = (int)param_3 - (int)param_1;
        iVar6 = (int)param_4 - (int)param_1;
        do {
          fVar9 = *param_1;
          fVar2 = *(float *)(iVar8 + (int)param_1);
          *(float *)(iVar7 + (int)param_1) = fVar2 * param_6 + fVar9 * fVar11;
          *(float *)(iVar6 + (int)param_1) = fVar9 * param_6 + fVar2 * fVar11;
          param_1 = param_1 + 1;
        } while (param_1 < pfVar1);
        return;
      }
    }
  }
  else {
    fVar2 = (float)param_5;
    if (param_5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    pfVar1 = param_1 + param_5;
    fVar11 = (fVar11 - fVar9) / fVar2;
    fVar2 = (param_6 - local_8) / fVar2;
    if (param_1 < pfVar1) {
      iVar6 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
        do {
          fVar3 = *param_1;
          fVar4 = *param_2;
          fVar5 = param_2[1];
          *param_4 = fVar3 * local_8 + fVar4 * fVar9;
          *param_3 = fVar4 * local_8 + fVar3 * fVar9;
          fVar9 = fVar11 + fVar9;
          local_8 = fVar2 + local_8;
          fVar3 = param_1[1];
          fVar4 = param_2[2];
          param_4[1] = fVar3 * local_8 + fVar5 * fVar9;
          param_3[1] = fVar5 * local_8 + fVar3 * fVar9;
          fVar9 = fVar11 + fVar9;
          local_8 = fVar2 + local_8;
          fVar3 = param_1[2];
          fVar5 = param_2[3];
          param_4[2] = fVar3 * local_8 + fVar4 * fVar9;
          fVar10 = fVar11 + fVar9;
          param_3[2] = fVar4 * local_8 + fVar3 * fVar9;
          local_8 = fVar2 + local_8;
          fVar9 = param_1[3];
          param_4[3] = fVar9 * local_8 + fVar5 * fVar10;
          param_3[3] = fVar5 * local_8 + fVar9 * fVar10;
          param_1 = param_1 + 4;
          fVar9 = fVar10 + fVar11;
          param_2 = param_2 + 4;
          param_3 = param_3 + 4;
          param_4 = param_4 + 4;
          local_8 = local_8 + fVar2;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      if (param_1 < pfVar1) {
        iVar7 = (int)param_2 - (int)param_3;
        iVar6 = (int)param_4 - (int)param_3;
        do {
          fVar3 = *param_1;
          fVar4 = *(float *)(iVar7 + (int)param_3);
          *(float *)(iVar6 + (int)param_3) = fVar3 * local_8 + fVar4 * fVar9;
          *param_3 = fVar4 * local_8 + fVar3 * fVar9;
          param_1 = param_1 + 1;
          fVar9 = fVar9 + fVar11;
          param_3 = param_3 + 1;
          local_8 = local_8 + fVar2;
        } while (param_1 < pfVar1);
      }
    }
  }
  return;
}

// 013531D0  FUN_013531d0  size=130  [run]
void FUN_013531d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1[1];
  uVar1 = *(undefined2 *)((int)param_1 + 0xe);
  if ((uVar2 & 3) != 0) {
    FUN_013529e0(*param_1,*param_1 + (uint)*(ushort *)(param_1 + 3) * 4,uVar1,param_2,param_3);
  }
  if ((uVar2 & 0x30) != 0) {
    iVar3 = 2;
    if ((uVar2 & 4) != 0) {
      iVar3 = 3;
    }
    FUN_013529e0(*param_1 + (uint)*(ushort *)(param_1 + 3) * iVar3 * 4,
                 *param_1 + (iVar3 + 1) * (uint)*(ushort *)(param_1 + 3) * 4,uVar1,param_2,param_3);
  }
  return;
}

// 01353260  FUN_01353260  size=464  [run]
void FUN_01353260(float *param_1,float *param_2,float *param_3,float param_4,float param_5,
                 float param_6,float param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  if ((param_5 == param_4) && (param_7 == param_6)) {
    pfVar1 = param_3 + param_8;
    if (param_3 < pfVar1) {
      iVar10 = (int)param_1 - (int)param_3;
      do {
        pfVar2 = (float *)(iVar10 + (int)param_3);
        fVar6 = pfVar2[1];
        fVar7 = pfVar2[2];
        fVar4 = pfVar2[3];
        pfVar3 = (float *)((int)param_2 + (int)param_3 + (iVar10 - (int)param_1));
        fVar5 = pfVar3[1];
        fVar8 = pfVar3[2];
        fVar9 = pfVar3[3];
        *param_3 = *pfVar3 * param_7 + *pfVar2 * param_5;
        param_3[1] = fVar5 * param_7 + fVar6 * param_5;
        param_3[2] = fVar8 * param_7 + fVar7 * param_5;
        param_3[3] = fVar9 * param_7 + fVar4 * param_5;
        param_3 = param_3 + 4;
      } while (param_3 < pfVar1);
      return;
    }
  }
  else {
    fVar6 = (float)param_8;
    if (param_8 < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    pfVar1 = param_3 + param_8;
    fVar7 = (param_5 - param_4) / fVar6;
    fVar6 = (param_7 - param_6) / fVar6;
    if (param_3 < pfVar1) {
      iVar10 = (int)pfVar1 + (3 - (int)param_3);
      if (3 < (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2) {
        do {
          fVar4 = param_2[1];
          *param_3 = *param_2 * param_6 + param_4 * *param_1;
          fVar5 = param_2[2];
          param_3[1] = param_1[1] * (fVar7 + param_4) + fVar4 * (fVar6 + param_6);
          param_4 = fVar7 + fVar7 + param_4;
          param_6 = fVar6 + fVar6 + param_6;
          fVar4 = param_2[3];
          param_3[2] = param_1[2] * param_4 + fVar5 * param_6;
          param_4 = fVar7 + param_4;
          param_6 = fVar6 + param_6;
          param_3[3] = param_1[3] * param_4 + fVar4 * param_6;
          param_3 = param_3 + 4;
          param_4 = param_4 + fVar7;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
          param_6 = param_6 + fVar6;
        } while ((int)param_3 < (int)(pfVar1 + -3));
      }
      if (param_3 < pfVar1) {
        iVar10 = (int)param_1 - (int)param_2;
        do {
          *param_3 = *(float *)(iVar10 + (int)param_2) * param_4 + *param_2 * param_6;
          param_3 = param_3 + 1;
          param_4 = param_4 + fVar7;
          param_2 = param_2 + 1;
          param_6 = param_6 + fVar6;
        } while (param_3 < pfVar1);
      }
    }
  }
  return;
}

// 01353440  FUN_01353440  size=440  [run]
void FUN_01353440(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                 float param_6,int param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if ((param_4 == param_3) && (param_6 == param_5)) {
    pfVar1 = param_1 + param_7;
    if (param_1 < pfVar1) {
      iVar6 = (int)param_2 - (int)param_1;
      do {
        pfVar2 = (float *)(iVar6 + (int)param_1);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        *param_1 = *pfVar2 * param_6 + *param_1 * param_4;
        param_1[1] = fVar3 * param_6 + param_1[1] * param_4;
        param_1[2] = fVar4 * param_6 + param_1[2] * param_4;
        param_1[3] = fVar5 * param_6 + param_1[3] * param_4;
        param_1 = param_1 + 4;
      } while (param_1 < pfVar1);
      return;
    }
  }
  else {
    fVar3 = (float)param_7;
    if (param_7 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    pfVar1 = param_1 + param_7;
    fVar4 = (param_4 - param_3) / fVar3;
    fVar3 = (param_6 - param_5) / fVar3;
    if (param_1 < pfVar1) {
      iVar6 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * param_3 + *param_2 * param_5;
          param_1[1] = param_2[1] * (fVar3 + param_5) + (fVar4 + param_3) * param_1[1];
          param_3 = fVar4 + fVar4 + param_3;
          param_5 = fVar3 + fVar3 + param_5;
          param_1[2] = param_2[2] * param_5 + param_1[2] * param_3;
          param_3 = fVar4 + param_3;
          param_5 = fVar3 + param_5;
          param_1[3] = param_2[3] * param_5 + param_1[3] * param_3;
          param_1 = param_1 + 4;
          param_3 = param_3 + fVar4;
          param_2 = param_2 + 4;
          param_5 = param_5 + fVar3;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * param_3 + *param_2 * param_5;
        param_3 = param_3 + fVar4;
        param_2 = param_2 + 1;
        param_5 = param_5 + fVar3;
      }
    }
  }
  return;
}

// 01353600  FUN_01353600  size=221  [run]
void FUN_01353600(float *param_1,float *param_2,float param_3,float param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = param_1 + param_5;
  if (param_1 < pfVar1) {
    iVar2 = (int)pfVar1 + (3 - (int)param_1);
    if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
      do {
        *param_1 = *param_1 * param_3 + *param_2 * param_4;
        param_1[1] = param_2[1] * param_4 + param_1[1] * param_3;
        param_1[2] = param_2[2] * param_4 + param_1[2] * param_3;
        param_1[3] = param_2[3] * param_4 + param_3 * param_1[3];
        param_1 = param_1 + 4;
        param_2 = param_2 + 4;
      } while ((int)param_1 < (int)(pfVar1 + -3));
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)param_2 - (int)param_1;
      do {
        *param_1 = *(float *)(iVar2 + (int)param_1) * param_4 + *param_1 * param_3;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}

// 013536F0  FUN_013536f0  size=1417  [run]
/* WARNING: Removing unreachable block (ram,0x0135381f) */

void FUN_013536f0(int *param_1,int *param_2,float param_3,float param_4,float param_5,float param_6)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  float *local_10;
  uint local_c;
  
  uVar5 = param_1[1] & 0xfffffff7;
  local_c = 0;
  if (uVar5 != 0) {
    do {
      local_c = local_c + 1;
      uVar5 = uVar5 & uVar5 - 1;
    } while (uVar5 != 0);
    if (1 < local_c) {
      local_c = 2;
    }
  }
  uVar5 = param_1[1];
  uVar13 = (uint)*(ushort *)((int)param_1 + 0xe);
  if (((uVar5 == 8) || (uVar5 == 4)) || (uVar5 == 3)) {
    uVar12 = 0;
    for (; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
      uVar12 = uVar12 + 1;
    }
    uVar5 = 0;
    if (uVar12 != 0) {
      do {
        FID_conflict__memcpy
                  ((void *)(*param_2 + *(ushort *)(param_2 + 3) * uVar5 * 4),
                   (void *)(*param_1 + *(ushort *)(param_1 + 3) * uVar5 * 4),uVar13 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar12);
    }
  }
  else {
    iVar8 = 0;
    for (uVar5 = uVar5 & 0x33; uVar5 != 0; uVar5 = uVar5 & uVar5 - 1) {
      iVar8 = iVar8 + 1;
    }
    fVar14 = (float)iVar8;
    if (iVar8 < 0) {
      fVar14 = fVar14 + 4.2949673e+09;
    }
    uVar5 = param_1[1];
    local_10 = (float *)0x0;
    local_14 = 0.0;
    local_1c = 0.0;
    local_18 = 0.0;
    if ((uVar5 & 4) != 0) {
      if (((byte)uVar5 & 7) == 7) {
        local_14 = param_3 * param_3;
        local_10 = (float *)(param_4 * param_4);
      }
      else {
        fVar14 = fVar14 + 1.0;
      }
    }
    if ((uVar5 & 8) != 0) {
      local_18 = param_5 * param_5;
      local_1c = param_6 * param_6;
    }
    fVar4 = SQRT(1.0 / (local_14 + fVar14 + local_18));
    fVar3 = (float)uVar13;
    fVar14 = (SQRT(1.0 / ((float)local_10 + fVar14 + local_1c)) - fVar4) / fVar3;
    fVar16 = ((float)local_10 - local_14) / fVar3;
    fVar3 = (local_1c - local_18) / fVar3;
    if (local_c != 0) {
      uVar1 = *(ushort *)(param_2 + 3);
      local_10 = (float *)*param_2;
      pfVar11 = (float *)*param_1;
      uVar2 = *(ushort *)(param_1 + 3);
      local_1c = (float)local_c;
      do {
        uVar12 = 0;
        pfVar6 = pfVar11;
        pfVar7 = local_10;
        fVar15 = fVar4;
        if (3 < uVar13) {
          iVar8 = (uVar13 - 4 >> 2) + 1;
          uVar12 = iVar8 * 4;
          do {
            *pfVar7 = fVar15 * *pfVar6;
            pfVar7[1] = pfVar6[1] * (fVar15 + fVar14);
            fVar15 = fVar15 + fVar14 + fVar14;
            pfVar7[2] = pfVar6[2] * fVar15;
            fVar15 = fVar15 + fVar14;
            pfVar7[3] = pfVar6[3] * fVar15;
            pfVar6 = pfVar6 + 4;
            pfVar7 = pfVar7 + 4;
            iVar8 = iVar8 + -1;
            fVar15 = fVar15 + fVar14;
          } while (iVar8 != 0);
        }
        if (uVar12 < uVar13) {
          iVar8 = (int)pfVar7 - (int)pfVar6;
          iVar10 = uVar13 - uVar12;
          do {
            *(float *)(iVar8 + (int)pfVar6) = fVar15 * *pfVar6;
            pfVar6 = pfVar6 + 1;
            iVar10 = iVar10 + -1;
            fVar15 = fVar15 + fVar14;
          } while (iVar10 != 0);
        }
        pfVar11 = pfVar11 + uVar2;
        local_10 = local_10 + uVar1;
        local_1c = (float)((int)local_1c - 1);
      } while (local_1c != 0.0);
    }
    if (((byte)param_1[1] & 7) == 7) {
      pfVar11 = (float *)(*param_1 + (uint)*(ushort *)(param_1 + 3) * 8);
      uVar1 = *(ushort *)(param_2 + 3);
      pfVar6 = (float *)*param_2;
      local_1c = 2.8026e-45;
      do {
        uVar12 = 0;
        pfVar7 = pfVar6;
        pfVar9 = pfVar11;
        fVar15 = local_14;
        if (3 < uVar13) {
          iVar8 = (uVar13 - 4 >> 2) + 1;
          uVar12 = iVar8 * 4;
          do {
            *pfVar7 = *pfVar9 * fVar15 + *pfVar7;
            pfVar7[1] = pfVar9[1] * (fVar15 + fVar16) + pfVar7[1];
            fVar15 = fVar15 + fVar16 + fVar16;
            pfVar7[2] = pfVar9[2] * fVar15 + pfVar7[2];
            fVar15 = fVar15 + fVar16;
            pfVar7[3] = pfVar9[3] * fVar15 + pfVar7[3];
            pfVar9 = pfVar9 + 4;
            pfVar7 = pfVar7 + 4;
            iVar8 = iVar8 + -1;
            fVar15 = fVar15 + fVar16;
          } while (iVar8 != 0);
        }
        if (uVar12 < uVar13) {
          iVar8 = (int)pfVar9 - (int)pfVar7;
          iVar10 = uVar13 - uVar12;
          do {
            *pfVar7 = *(float *)(iVar8 + (int)pfVar7) * fVar15 + *pfVar7;
            pfVar7 = pfVar7 + 1;
            iVar10 = iVar10 + -1;
            fVar15 = fVar15 + fVar16;
          } while (iVar10 != 0);
        }
        pfVar6 = pfVar6 + uVar1;
        local_1c = (float)((int)local_1c + -1);
      } while (local_1c != 0.0);
    }
    if ((*(byte *)(param_1 + 1) & 0x30) != 0) {
      uVar1 = *(ushort *)(param_2 + 3);
      local_10 = (float *)*param_2;
      uVar2 = *(ushort *)(param_1 + 3);
      pfVar11 = (float *)(*param_1 + (uint)uVar2 * ((uVar5 & 4 | 8) >> 2) * 4);
      local_20 = 2;
      do {
        uVar12 = 0;
        pfVar6 = local_10;
        pfVar7 = pfVar11;
        fVar16 = fVar4;
        if (3 < uVar13) {
          iVar8 = (uVar13 - 4 >> 2) + 1;
          uVar12 = iVar8 * 4;
          do {
            *pfVar6 = *pfVar7 * fVar16 + *pfVar6;
            pfVar6[1] = pfVar7[1] * (fVar16 + fVar14) + pfVar6[1];
            fVar16 = fVar16 + fVar14 + fVar14;
            pfVar6[2] = pfVar7[2] * fVar16 + pfVar6[2];
            fVar16 = fVar16 + fVar14;
            pfVar6[3] = pfVar7[3] * fVar16 + pfVar6[3];
            pfVar7 = pfVar7 + 4;
            pfVar6 = pfVar6 + 4;
            iVar8 = iVar8 + -1;
            fVar16 = fVar16 + fVar14;
          } while (iVar8 != 0);
        }
        if (uVar12 < uVar13) {
          iVar8 = (int)pfVar7 - (int)pfVar6;
          iVar10 = uVar13 - uVar12;
          do {
            *pfVar6 = *(float *)(iVar8 + (int)pfVar6) * fVar16 + *pfVar6;
            pfVar6 = pfVar6 + 1;
            iVar10 = iVar10 + -1;
            fVar16 = fVar16 + fVar14;
          } while (iVar10 != 0);
        }
        pfVar11 = pfVar11 + uVar2;
        local_10 = local_10 + uVar1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    if (((uVar5 & 8) != 0) && (local_c != 0)) {
      uVar1 = *(ushort *)(param_2 + 3);
      pfVar11 = (float *)*param_2;
      local_20 = local_c;
      do {
        pfVar7 = (float *)FUN_01351740();
        uVar5 = 0;
        pfVar6 = pfVar11;
        fVar14 = local_18;
        if (3 < uVar13) {
          iVar8 = (uVar13 - 4 >> 2) + 1;
          uVar5 = iVar8 * 4;
          do {
            *pfVar6 = fVar14 * *pfVar7 + *pfVar6;
            pfVar6[1] = pfVar7[1] * (fVar14 + fVar3) + pfVar6[1];
            fVar14 = fVar14 + fVar3 + fVar3;
            pfVar6[2] = pfVar7[2] * fVar14 + pfVar6[2];
            fVar14 = fVar14 + fVar3;
            pfVar6[3] = pfVar7[3] * fVar14 + pfVar6[3];
            pfVar7 = pfVar7 + 4;
            pfVar6 = pfVar6 + 4;
            iVar8 = iVar8 + -1;
            fVar14 = fVar14 + fVar3;
          } while (iVar8 != 0);
        }
        if (uVar5 < uVar13) {
          iVar8 = (int)pfVar7 - (int)pfVar6;
          iVar10 = uVar13 - uVar5;
          do {
            *pfVar6 = *(float *)(iVar8 + (int)pfVar6) * fVar14 + *pfVar6;
            pfVar6 = pfVar6 + 1;
            iVar10 = iVar10 + -1;
            fVar14 = fVar14 + fVar3;
          } while (iVar10 != 0);
        }
        pfVar11 = pfVar11 + uVar1;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
      return;
    }
  }
  return;
}

// 01353CB0  FUN_01353cb0  size=284  [run]
int * FUN_01353cb0(uint param_1,int param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  int local_8;
  
  if ((param_1 & 1) != 0) {
    return (int *)0x0;
  }
  iVar7 = (int)param_1 >> 1;
  FUN_01354650(iVar7,param_2,0,&local_8);
  uVar3 = local_8 + 0x10 + ((iVar7 * 3) / 2) * 8;
  uVar4 = *param_4;
  *param_4 = uVar3;
  piVar8 = (int *)0x0;
  if (uVar3 <= uVar4) {
    piVar8 = param_3;
  }
  if (piVar8 != (int *)0x0) {
    piVar1 = piVar8 + 4;
    piVar8[1] = local_8 + (int)piVar1;
    *piVar8 = (int)piVar1;
    piVar8[2] = local_8 + (int)piVar1 + iVar7 * 8;
    FUN_01354650(iVar7,param_2,piVar1,&local_8);
    iVar5 = iVar7 - ((int)param_1 >> 0x1f) >> 1;
    if (param_2 == 0) {
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          iVar2 = iVar6 + 1;
          fVar9 = ((float10)iVar2 / (float10)iVar7 + (float10)0.5) * (float10)-3.141592653589793;
          fVar10 = (float10)fcos(fVar9);
          *(float *)(piVar8[2] + iVar6 * 8) = (float)fVar10;
          fVar9 = (float10)fsin(fVar9);
          *(float *)(piVar8[2] + 4 + iVar6 * 8) = (float)fVar9;
          iVar6 = iVar2;
        } while (iVar2 < iVar5);
      }
    }
    else if (0 < iVar5) {
      iVar6 = 0;
      do {
        iVar2 = iVar6 + 1;
        fVar9 = ((float10)iVar2 / (float10)iVar7 + (float10)0.5) * (float10)3.141592653589793;
        fVar10 = (float10)fcos(fVar9);
        *(float *)(piVar8[2] + iVar6 * 8) = (float)fVar10;
        fVar9 = (float10)fsin(fVar9);
        *(float *)(piVar8[2] + 4 + iVar6 * 8) = (float)fVar9;
        iVar6 = iVar2;
      } while (iVar2 < iVar5);
      return piVar8;
    }
    return piVar8;
  }
  return (int *)0x0;
}

// 01353DD0  FUN_01353dd0  size=259  [run]
void FUN_01353dd0(undefined4 *param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar3 = *(int *)*param_1;
  FUN_013545a0((int *)*param_1,param_2,param_1[1]);
  pfVar4 = (float *)param_1[1];
  pfVar8 = (float *)param_1[2];
  if (iVar3 / 2 != 0) {
    pfVar6 = param_3 + 2;
    pfVar7 = param_3 + iVar3 * 2 + -4;
    uVar5 = iVar3 / 2 + 1U >> 1;
    do {
      pfVar1 = (float *)(((int)pfVar4 - (int)param_3) + (int)pfVar7);
      pfVar2 = (float *)(((int)pfVar4 - (int)param_3) + (int)pfVar6);
      fVar9 = pfVar1[2] * 1.0 + *pfVar2;
      fVar10 = pfVar1[3] * -1.0 + pfVar2[1];
      fVar11 = *pfVar1 * 1.0 + pfVar2[2];
      fVar12 = pfVar1[1] * -1.0 + pfVar2[3];
      fVar13 = *pfVar2 - pfVar1[2] * 1.0;
      fVar15 = pfVar2[1] - pfVar1[3] * -1.0;
      fVar16 = pfVar2[2] - *pfVar1 * 1.0;
      fVar17 = pfVar2[3] - pfVar1[1] * -1.0;
      fVar14 = fVar13 * *pfVar8 + fVar15 * -1.0 * pfVar8[1];
      fVar13 = fVar13 * pfVar8[1] + fVar15 * 1.0 * *pfVar8;
      fVar15 = fVar16 * pfVar8[2] + fVar17 * -1.0 * pfVar8[3];
      fVar16 = fVar16 * pfVar8[3] + fVar17 * 1.0 * pfVar8[2];
      *pfVar6 = (fVar14 + fVar9) * 0.5;
      pfVar6[1] = (fVar13 + fVar10) * 0.5;
      pfVar6[2] = (fVar15 + fVar11) * 0.5;
      pfVar6[3] = (fVar16 + fVar12) * 0.5;
      *pfVar7 = (fVar11 - fVar15) * 1.0 * 0.5;
      pfVar7[1] = (fVar12 - fVar16) * -1.0 * 0.5;
      pfVar7[2] = (fVar9 - fVar14) * 1.0 * 0.5;
      pfVar7[3] = (fVar10 - fVar13) * -1.0 * 0.5;
      pfVar8 = pfVar8 + 4;
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar7 + -4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  fVar9 = *pfVar4;
  fVar10 = pfVar4[1];
  *param_3 = fVar10 + fVar9;
  param_3[iVar3 * 2] = fVar9 - fVar10;
  param_3[1] = 0.0;
  param_3[iVar3 * 2 + 1] = 0.0;
  return;
}

// 01353EE0  FUN_01353ee0  size=232  [run]
void FUN_01353ee0(float *param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  piVar3 = (int *)*param_1;
  iVar4 = *piVar3;
  pfVar5 = (float *)param_1[1];
  param_1 = (float *)param_1[2];
  fVar9 = *param_2;
  fVar10 = param_2[iVar4 * 2];
  *pfVar5 = fVar9 + param_2[iVar4 * 2];
  pfVar5[1] = fVar9 - fVar10;
  if (iVar4 / 2 != 0) {
    iVar6 = (int)param_2 - (int)pfVar5;
    param_2 = (float *)(iVar4 / 2 + 1U >> 1);
    pfVar7 = pfVar5 + 2;
    pfVar8 = pfVar5 + iVar4 * 2 + -4;
    do {
      pfVar1 = (float *)(iVar6 + (int)pfVar8);
      pfVar2 = (float *)(iVar6 + (int)pfVar7);
      fVar9 = pfVar1[2] * 1.0 + *pfVar2;
      fVar10 = pfVar1[3] * -1.0 + pfVar2[1];
      fVar11 = *pfVar1 * 1.0 + pfVar2[2];
      fVar12 = pfVar1[1] * -1.0 + pfVar2[3];
      fVar13 = *pfVar2 - pfVar1[2] * 1.0;
      fVar15 = pfVar2[1] - pfVar1[3] * -1.0;
      fVar16 = pfVar2[2] - *pfVar1 * 1.0;
      fVar17 = pfVar2[3] - pfVar1[1] * -1.0;
      fVar14 = fVar13 * *param_1 + fVar15 * -1.0 * param_1[1];
      fVar13 = fVar13 * param_1[1] + fVar15 * 1.0 * *param_1;
      fVar15 = fVar16 * param_1[2] + fVar17 * -1.0 * param_1[3];
      fVar16 = fVar16 * param_1[3] + fVar17 * 1.0 * param_1[2];
      *pfVar7 = fVar14 + fVar9;
      pfVar7[1] = fVar13 + fVar10;
      pfVar7[2] = fVar15 + fVar11;
      pfVar7[3] = fVar16 + fVar12;
      *pfVar8 = (fVar11 - fVar15) * 1.0;
      pfVar8[1] = (fVar12 - fVar16) * -1.0;
      pfVar8[2] = (fVar9 - fVar14) * 1.0;
      pfVar8[3] = (fVar10 - fVar13) * -1.0;
      param_1 = param_1 + 4;
      pfVar7 = pfVar7 + 4;
      pfVar8 = pfVar8 + -4;
      param_2 = (float *)((int)param_2 - 1);
    } while (param_2 != (float *)0x0);
  }
  FUN_013545a0(piVar3,pfVar5,param_3);
  return;
}

// 01353FD0  FUN_01353fd0  size=56  [run]
void FUN_01353fd0(float *param_1,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  
  pfVar1 = param_1 + param_4;
  if (param_1 < pfVar1) {
    iVar10 = param_2 - (int)param_1;
    do {
      pfVar2 = (float *)(iVar10 + (int)param_1);
      pfVar3 = (float *)((param_3 - param_2) + (int)pfVar2);
      fVar4 = pfVar3[1];
      fVar5 = pfVar3[2];
      fVar6 = pfVar3[3];
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      *param_1 = *pfVar3 + *pfVar2;
      param_1[1] = fVar4 + fVar7;
      param_1[2] = fVar5 + fVar8;
      param_1[3] = fVar6 + fVar9;
      param_1 = param_1 + 4;
    } while (param_1 < pfVar1);
  }
  return;
}

// 01354010  FUN_01354010  size=178  [run]
void FUN_01354010(float *param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  
  pfVar6 = param_1;
  pfVar1 = param_1 + param_3;
  param_1 = (float *)0x4;
  do {
    param_1 = (float *)((int)param_1 + -1);
  } while (param_1 != (float *)0x0);
  for (param_3 = param_3 >> 4; param_3 != 0; param_3 = param_3 - 1) {
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar5 = param_2[3];
    *pfVar6 = *param_2 + *pfVar6;
    pfVar6[1] = fVar3 + pfVar6[1];
    pfVar6[2] = fVar4 + pfVar6[2];
    pfVar6[3] = fVar5 + pfVar6[3];
    fVar3 = param_2[5];
    fVar4 = param_2[6];
    fVar5 = param_2[7];
    pfVar6[4] = param_2[4] + pfVar6[4];
    pfVar6[5] = fVar3 + pfVar6[5];
    pfVar6[6] = fVar4 + pfVar6[6];
    pfVar6[7] = fVar5 + pfVar6[7];
    fVar3 = param_2[9];
    fVar4 = param_2[10];
    fVar5 = param_2[0xb];
    pfVar6[8] = param_2[8] + pfVar6[8];
    pfVar6[9] = fVar3 + pfVar6[9];
    pfVar6[10] = fVar4 + pfVar6[10];
    pfVar6[0xb] = fVar5 + pfVar6[0xb];
    fVar3 = param_2[0xd];
    fVar4 = param_2[0xe];
    fVar5 = param_2[0xf];
    pfVar6[0xc] = param_2[0xc] + pfVar6[0xc];
    pfVar6[0xd] = fVar3 + pfVar6[0xd];
    pfVar6[0xe] = fVar4 + pfVar6[0xe];
    pfVar6[0xf] = fVar5 + pfVar6[0xf];
    param_2 = param_2 + 0x10;
    pfVar6 = pfVar6 + 0x10;
  }
  if (pfVar6 < pfVar1) {
    iVar7 = (int)param_2 - (int)pfVar6;
    do {
      pfVar2 = (float *)(iVar7 + (int)pfVar6);
      fVar3 = pfVar2[1];
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[3];
      *pfVar6 = *pfVar2 + *pfVar6;
      pfVar6[1] = fVar3 + pfVar6[1];
      pfVar6[2] = fVar4 + pfVar6[2];
      pfVar6[3] = fVar5 + pfVar6[3];
      pfVar6 = pfVar6 + 4;
    } while (pfVar6 < pfVar1);
  }
  return;
}

// 01354100  FUN_01354100  size=928  [run]
void FUN_01354100(int param_1,int param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  float *in_EAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  pfVar4 = *(float **)(param_2 + 0x48);
  local_20 = param_3;
  if (param_3 < 2) {
    iVar2 = *(int *)(param_2 + 4);
    pfVar5 = in_EAX + 1;
    pfVar3 = in_EAX + param_3 * 4 + 1;
    pfVar6 = pfVar4;
    local_1c = pfVar4;
    local_18 = in_EAX + param_3 * 6 + 1;
    local_14 = in_EAX + param_3 * 2 + 1;
    do {
      fVar7 = *pfVar4 * local_14[-1] - *local_14 * pfVar4[1];
      fVar10 = *local_14 * *pfVar4 + pfVar4[1] * local_14[-1];
      fVar15 = *local_18 * *local_1c + local_1c[1] * local_18[-1];
      fVar24 = *local_1c * local_18[-1] - *local_18 * local_1c[1];
      fVar29 = fVar24 + fVar7;
      fVar7 = fVar7 - fVar24;
      fVar30 = fVar15 + fVar10;
      fVar10 = fVar10 - fVar15;
      fVar24 = pfVar6[1] * pfVar3[-1] + *pfVar6 * *pfVar3;
      fVar15 = pfVar5[-1];
      fVar16 = *pfVar6 * pfVar3[-1] - pfVar6[1] * *pfVar3;
      fVar25 = fVar15 + fVar16;
      pfVar5[-1] = fVar25;
      fVar21 = *pfVar5 - fVar24;
      *pfVar5 = fVar24 + *pfVar5;
      pfVar3[-1] = fVar25 - fVar29;
      *pfVar3 = *pfVar5 - fVar30;
      pfVar5[-1] = pfVar5[-1] + fVar29;
      fVar15 = fVar15 - fVar16;
      *pfVar5 = *pfVar5 + fVar30;
      if (iVar2 == 0) {
        fVar24 = fVar15 + fVar10;
        fVar16 = fVar21 - fVar7;
        fVar15 = fVar15 - fVar10;
        fVar21 = fVar21 + fVar7;
      }
      else {
        fVar24 = fVar15 - fVar10;
        fVar16 = fVar21 + fVar7;
        fVar15 = fVar15 + fVar10;
        fVar21 = fVar21 - fVar7;
      }
      local_1c = local_1c + param_1 * 6;
      pfVar4 = pfVar4 + param_1 * 2;
      pfVar6 = pfVar6 + param_1 * 4;
      local_14[-1] = fVar24;
      *local_14 = fVar16;
      *local_18 = fVar21;
      local_18[-1] = fVar15;
      pfVar3 = pfVar3 + 2;
      pfVar5 = pfVar5 + 2;
      local_20 = local_20 - 1;
      local_18 = local_18 + 2;
      local_14 = local_14 + 2;
    } while (local_20 != 0);
    return;
  }
  local_20 = param_3 >> 1;
  pfVar5 = pfVar4;
  pfVar3 = pfVar4;
  if (*(int *)(param_2 + 4) == 0) {
    fVar16 = 1.0;
    fVar25 = -1.0;
    fVar29 = 1.0;
    fVar30 = -1.0;
    fVar15 = -1.0;
    fVar7 = 1.0;
    fVar10 = -1.0;
    fVar24 = 1.0;
  }
  else {
    fVar15 = 1.0;
    fVar7 = -1.0;
    fVar10 = 1.0;
    fVar24 = -1.0;
    fVar16 = -1.0;
    fVar25 = 1.0;
    fVar29 = -1.0;
    fVar30 = 1.0;
  }
  do {
    pfVar6 = in_EAX + param_3 * 2;
    fVar21 = pfVar5[param_1 * 2];
    fVar8 = (pfVar5 + param_1 * 2)[1];
    pfVar1 = in_EAX + param_3 * 6;
    fVar9 = *pfVar6 * *pfVar5 + pfVar6[1] * -1.0 * pfVar5[1];
    fVar11 = *pfVar6 * pfVar5[1] + pfVar6[1] * 1.0 * *pfVar5;
    fVar12 = pfVar6[2] * fVar21 + pfVar6[3] * -1.0 * fVar8;
    fVar13 = pfVar6[2] * fVar8 + pfVar6[3] * 1.0 * fVar21;
    fVar21 = pfVar4[param_1 * 6];
    fVar8 = (pfVar4 + param_1 * 6)[1];
    fVar14 = *pfVar1 * *pfVar4 + pfVar1[1] * -1.0 * pfVar4[1];
    fVar17 = *pfVar1 * pfVar4[1] + pfVar1[1] * 1.0 * *pfVar4;
    fVar19 = pfVar1[2] * fVar21 + pfVar1[3] * -1.0 * fVar8;
    fVar21 = pfVar1[2] * fVar8 + pfVar1[3] * 1.0 * fVar21;
    pfVar6 = in_EAX + param_3 * 4;
    fVar23 = fVar14 + fVar9;
    fVar26 = fVar17 + fVar11;
    fVar27 = fVar19 + fVar12;
    fVar28 = fVar21 + fVar13;
    fVar9 = fVar9 - fVar14;
    fVar11 = fVar11 - fVar17;
    fVar12 = fVar12 - fVar19;
    fVar13 = fVar13 - fVar21;
    fVar21 = pfVar3[param_1 * 4];
    fVar8 = (pfVar3 + param_1 * 4)[1];
    fVar19 = *pfVar6 * *pfVar3 + pfVar6[1] * -1.0 * pfVar3[1];
    fVar18 = *pfVar6 * pfVar3[1] + pfVar6[1] * 1.0 * *pfVar3;
    fVar20 = pfVar6[2] * fVar21 + pfVar6[3] * -1.0 * fVar8;
    fVar22 = pfVar6[2] * fVar8 + pfVar6[3] * 1.0 * fVar21;
    fVar21 = *in_EAX + fVar19;
    fVar8 = in_EAX[1] + fVar18;
    fVar14 = in_EAX[2] + fVar20;
    fVar17 = in_EAX[3] + fVar22;
    fVar19 = *in_EAX - fVar19;
    fVar18 = in_EAX[1] - fVar18;
    fVar20 = in_EAX[2] - fVar20;
    fVar22 = in_EAX[3] - fVar22;
    *pfVar6 = fVar21 - fVar23;
    pfVar6[1] = fVar8 - fVar26;
    pfVar6[2] = fVar14 - fVar27;
    pfVar6[3] = fVar17 - fVar28;
    *in_EAX = fVar21 + fVar23;
    in_EAX[1] = fVar8 + fVar26;
    in_EAX[2] = fVar14 + fVar27;
    in_EAX[3] = fVar17 + fVar28;
    pfVar6 = in_EAX + param_3 * 2;
    *pfVar6 = fVar11 * fVar16 + fVar19;
    pfVar6[1] = fVar9 * fVar25 + fVar18;
    pfVar6[2] = fVar13 * fVar29 + fVar20;
    pfVar6[3] = fVar12 * fVar30 + fVar22;
    pfVar6 = in_EAX + param_3 * 6;
    *pfVar6 = fVar11 * fVar15 + fVar19;
    pfVar6[1] = fVar9 * fVar7 + fVar18;
    pfVar6[2] = fVar13 * fVar10 + fVar20;
    pfVar6[3] = fVar12 * fVar24 + fVar22;
    pfVar4 = pfVar4 + param_1 * 0xc;
    in_EAX = in_EAX + 4;
    local_20 = local_20 - 1;
    pfVar5 = pfVar5 + param_1 * 4;
    pfVar3 = pfVar3 + param_1 * 8;
  } while (local_20 != 0);
  return;
}

// 013544B0  FUN_013544b0  size=181  [run]
void FUN_013544b0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_5[1];
  iVar3 = *param_5;
  puVar1 = param_1 + iVar2 * iVar3 * 2;
  if (iVar2 == 1) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1 = param_1 + 2;
      param_2 = param_2 + param_3 * param_4 * 2;
    } while (param_1 != puVar1);
  }
  else {
    do {
      FUN_013544b0(param_1,param_2,iVar3 * param_3,param_4,param_5 + 2,param_6);
      param_2 = param_2 + param_3 * param_4 * 2;
      param_1 = param_1 + iVar2 * 2;
    } while (param_1 != puVar1);
  }
  FUN_01354100(param_3,param_6,iVar2);
  return;
}

// 01354570  FUN_01354570  size=35  [run]
void FUN_01354570(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_013544b0(param_3,param_2,1,param_4,param_1 + 8,param_1);
  return;
}

// 013545A0  FUN_013545a0  size=33  [run]
void FUN_013545a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_013544b0(param_3,param_2,1,1,param_1 + 8,param_1);
  return;
}

// 013545D0  FUN_013545d0  size=121  [run]
void FUN_013545d0(int param_1,int *param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fddce0(SQRT((double)param_1));
  iVar1 = 4;
  do {
    while (param_1 % iVar1 != 0) {
      if (iVar1 == 2) {
        iVar1 = 3;
      }
      else if (iVar1 == 4) {
        iVar1 = 2;
      }
      else {
        iVar1 = iVar1 + 2;
      }
      if (fVar2 < (float10)iVar1) {
        iVar1 = param_1;
      }
    }
    param_1 = param_1 / iVar1;
    *param_2 = iVar1;
    param_2[1] = param_1;
    param_2 = param_2 + 2;
  } while (1 < param_1);
  return;
}

// 01354650  FUN_01354650  size=195  [run]
int * FUN_01354650(int param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar1 = param_1 * 8 + 0x57U & 0xfffffff0;
  piVar2 = (int *)0x0;
  if ((param_3 != (int *)0x0) && (uVar1 <= *param_4)) {
    piVar2 = param_3;
  }
  *param_4 = uVar1;
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[0x12] = (int)(param_3 + 0x14);
    if (param_2 == 0) {
      param_3 = (int *)0x0;
      if (0 < param_1) {
        do {
          fVar3 = (float10)(int)param_3;
          param_3 = (int *)((int)param_3 + 1);
          fVar3 = (fVar3 * (float10)-6.283185307179586) / (float10)param_1;
          fVar4 = (float10)fcos(fVar3);
          *(float *)(piVar2[0x12] + -8 + (int)param_3 * 8) = (float)fVar4;
          fVar3 = (float10)fsin(fVar3);
          *(float *)(piVar2[0x12] + -4 + (int)param_3 * 8) = (float)fVar3;
        } while ((int)param_3 < param_1);
      }
    }
    else {
      param_3 = (int *)0x0;
      if (0 < param_1) {
        do {
          fVar3 = (float10)(int)param_3;
          param_3 = (int *)((int)param_3 + 1);
          fVar3 = (fVar3 * (float10)6.283185307179586) / (float10)param_1;
          fVar4 = (float10)fcos(fVar3);
          *(float *)(piVar2[0x12] + -8 + (int)param_3 * 8) = (float)fVar4;
          fVar3 = (float10)fsin(fVar3);
          *(float *)(piVar2[0x12] + -4 + (int)param_3 * 8) = (float)fVar3;
        } while ((int)param_3 < param_1);
      }
    }
    FUN_013545d0(param_1,piVar2 + 2);
  }
  return piVar2;
}

// 01354720  FUN_01354720  size=171  [run]
uint FUN_01354720(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  while( true ) {
    uVar1 = param_1 & 0x80000001;
    bVar3 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
    }
    uVar1 = param_1;
    if (bVar3) {
      do {
        uVar1 = (int)uVar1 / 2;
        uVar2 = uVar1 & 0x80000001;
        bVar3 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
        }
      } while (bVar3);
    }
    uVar2 = (int)uVar1 / 3;
    if (uVar1 == ((int)uVar1 / 3) * 3) {
      do {
        uVar1 = uVar2;
        uVar2 = (int)uVar1 / 3;
      } while (uVar1 == ((int)uVar1 / 3) * 3);
    }
    uVar2 = (int)uVar1 / 5;
    if (uVar1 == ((int)uVar1 / 5) * 5) {
      do {
        uVar1 = uVar2;
        uVar2 = (int)uVar1 / 5;
      } while (uVar1 == ((int)uVar1 / 5) * 5);
    }
    if ((int)uVar1 < 2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// 013547E0  FUN_013547e0  size=25  [run]
void __fastcall FUN_013547e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01803ef8;
  FUN_01354de0();
  *param_1 = &PTR_FUN_01803c4c;
  return;
}

// 01354810  FUN_01354810  size=155  [run]
undefined4 __thiscall
FUN_01354810(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x58) = param_4;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    param_4 = param_4 + 4;
  }
  uVar2 = *param_5;
  uVar1 = (**(code **)(*param_3 + 4))(uVar2);
  FUN_01354df0(param_4,uVar1,uVar2);
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58) + 4;
  }
  uVar2 = FUN_01354ff0(param_2,iVar3,param_5[1] & 0x3ffff);
  FUN_013550a0(*(undefined1 *)(*(int *)(param_1 + 0x58) + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 0x58) + 4));
  *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x19) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x11) = 0;
  return uVar2;
}

// 013548C0  FUN_013548c0  size=27  [run]
undefined4 FUN_013548c0(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 013548E0  FUN_013548e0  size=153  [run]
void __thiscall FUN_013548e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(char *)(iVar1 + 0x19) != '\0') {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + 4;
    }
    iVar1 = FUN_01354ff0(*(undefined4 *)(param_1 + 0x5c),iVar1,*(undefined4 *)(param_2 + 4));
    if (iVar1 != 1) {
      return;
    }
    thunk_FUN_01354f50();
    *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x19) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(char *)(iVar1 + 0x11) != '\0') {
    FUN_013550a0(*(undefined1 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 4));
    *(undefined1 *)(*(int *)(param_1 + 0x58) + 0x11) = 0;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_01355140(param_2,0);
    return;
  }
  FUN_01355140(param_2,*(int *)(param_1 + 0x58) + 4);
  return;
}

// 01354980  FUN_01354980  size=35  [run]
void FUN_01354980(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 013549B0  FUN_013549b0  size=48  [run]
undefined4 * __thiscall FUN_013549b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ef8;
  FUN_01354de0();
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 013549E0  FUN_013549e0  size=54  [run]
undefined4 __thiscall FUN_013549e0(undefined4 *param_1,int *param_2)

{
  FUN_01355090(param_2);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01354A20  FUN_01354a20  size=29  [run]
undefined4 * __fastcall FUN_01354a20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01803ef8;
  FUN_01355430();
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}

// 01354A40  FUN_01354a40  size=60  [run]
undefined4 * FUN_01354a40(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x60);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803ef8;
    FUN_01355430();
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01354A90  FUN_01354a90  size=94  [run]
undefined4 __thiscall FUN_01354a90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_4 == 0) {
    param_1[5] = 0x3f000000;
    param_1[1] = 0;
    param_1[2] = 0x3f000000;
    fVar2 = (float10)FUN_00fdc1f0();
    param_1[3] = (int)(float)fVar2;
    *(undefined2 *)(param_1 + 4) = 0x100;
    *(undefined2 *)(param_1 + 6) = 0x101;
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return uVar1;
}

// 01354AF0  FUN_01354af0  size=229  [run]
undefined4 __thiscall FUN_01354af0(int param_1,undefined2 param_2,float *param_3)

{
  float10 fVar1;
  
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x14) = *param_3;
    *(undefined1 *)(param_1 + 0x19) = 1;
    return 1;
  case 1:
    *(float *)(param_1 + 4) = *param_3 * 0.01;
    *(undefined1 *)(param_1 + 0x11) = 1;
    return 1;
  case 2:
    *(float *)(param_1 + 8) = *param_3 * 0.01;
    return 1;
  case 3:
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0xc) = (float)fVar1;
    return 1;
  case 4:
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)param_3;
    *(undefined1 *)(param_1 + 0x19) = 1;
    return 1;
  default:
    return 0x1f;
  }
  if (*param_3 == (float)(undefined *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x11) = 1;
    return 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return 1;
}

// 01354BF0  FUN_01354bf0  size=35  [run]
void FUN_01354bf0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01354C20  FUN_01354c20  size=64  [run]
void __thiscall FUN_01354c20(undefined4 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_01803f18;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  return;
}

// 01354C60  FUN_01354c60  size=34  [run]
undefined4 * __thiscall FUN_01354c60(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01354C90  FUN_01354c90  size=84  [run]
undefined4 * __thiscall FUN_01354c90(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803f18;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)((int)puVar1 + 0x11) = 1;
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    puVar1[6] = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)((int)puVar1 + 0x19) = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01354CF0  FUN_01354cf0  size=39  [run]
undefined4 __thiscall FUN_01354cf0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01354D20  FUN_01354d20  size=144  [run]
void __thiscall FUN_01354d20(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float10 fVar4;
  
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  fVar1 = (float)param_2[1];
  *(float *)(param_1 + 4) = fVar1;
  fVar2 = (float)param_2[2];
  *(float *)(param_1 + 8) = fVar2;
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0xc) = (float)fVar4;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 4);
  uVar3 = *(undefined1 *)((int)param_2 + 0x11);
  *(float *)(param_1 + 4) = fVar1 * 0.01;
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  *(float *)(param_1 + 8) = fVar2 * 0.01;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}

// 01354DC0  FUN_01354dc0  size=31  [run]
undefined4 * FUN_01354dc0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803f18;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01354DE0  FUN_01354de0  size=1  [run]
void FUN_01354de0(void)

{
  return;
}

// 01354DF0  FUN_01354df0  size=90  [run]
void __thiscall FUN_01354df0(int param_1,undefined4 *param_2,char param_3,undefined4 param_4)

{
  *(char *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = *param_2;
  *(undefined4 *)(param_1 + 0x30) = param_2[1];
  *(undefined4 *)(param_1 + 0x34) = param_2[2];
  *(undefined4 *)(param_1 + 0x38) = param_2[3];
  *(undefined4 *)(param_1 + 0x3c) = param_2[4];
  *(undefined4 *)(param_1 + 0x40) = param_2[5];
  *(undefined4 *)(param_1 + 0x48) = param_4;
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  }
  return;
}

// 01354E50  FUN_01354e50  size=19  [run]
int __thiscall FUN_01354e50(int param_1,int param_2,int param_3)

{
  return *(int *)(param_1 + param_3 * 4) + param_2 * 4;
}

// 01354E90  FUN_01354e90  size=99  [run]
undefined4 __thiscall FUN_01354e90(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_3 + 3U & 0xfffffffc;
  uVar3 = 0;
  *(int *)(param_1 + 0x20) = param_4;
  *(uint *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((uVar1 != 0) && (param_4 != 0)) {
    do {
      iVar2 = (**(code **)(*param_2 + 4))(*(int *)(param_1 + 0x18) * 4);
      *(int *)(param_1 + uVar3 * 4) = iVar2;
      if (iVar2 == 0) {
        return 0x34;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  return 1;
}

// 01354F00  FUN_01354f00  size=71  [run]
void __thiscall FUN_01354f00(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    if (iVar1 != 0) {
      (**(code **)(*param_2 + 8))(iVar1);
      *(undefined4 *)(param_1 + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < *(uint *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 01354F50  FUN_01354f50  size=74  [run]
void __fastcall FUN_01354f50(int param_1)

{
  void *_Dst;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      _Dst = *(void **)(param_1 + uVar1 * 4);
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,*(int *)(param_1 + 0x18) * 4);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 01354FB0  FUN_01354fb0  size=13  [run]
void __thiscall FUN_01354fb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}

// 01354FF0  FUN_01354ff0  size=133  [run]
void __thiscall FUN_01354ff0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_c;
  
  FUN_01354f00(param_2);
  iVar3 = 0;
  for (uVar4 = param_4; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x44) = iVar3;
  cVar1 = *(char *)(param_3 + 0x14);
  *(char *)(param_1 + 0x51) = cVar1;
  if (((param_4 & 8) != 0) && (cVar1 == '\0')) {
    *(int *)(param_1 + 0x44) = iVar3 + -1;
  }
  fVar2 = (float)*(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_c = (undefined4)(longlong)ROUND(fVar2 * *(float *)(param_3 + 0x10));
  FUN_01354e90(param_2,local_c,*(undefined4 *)(param_1 + 0x44));
  return;
}

// 01355080  thunk_FUN_01354f50  size=5  [run]
void __fastcall thunk_FUN_01354f50(int param_1)

{
  void *_Dst;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      _Dst = *(void **)(param_1 + uVar1 * 4);
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,*(int *)(param_1 + 0x18) * 4);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 01355090  FUN_01355090  size=9  [run]
void FUN_01355090(void)

{
  FUN_01354f00();
  return;
}

// 013550A0  FUN_013550a0  size=159  [run]
void __thiscall FUN_013550a0(int param_1,char param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  undefined4 local_c;
  
  if ((param_2 != '\0') && (param_3 != (float)(undefined *)0x0)) {
    fVar2 = (float10)log2((float10)param_3);
    fVar2 = (float10)0.3010299956639812 * fVar2 * (float10)20.0;
    if ((float10)-0.6 <= fVar2) {
      fVar3 = 100.0;
    }
    else {
      fVar3 = -60.0 / (float)fVar2;
    }
    fVar1 = (float)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_c = (undefined4)(longlong)ROUND(fVar1 * fVar3);
    *(undefined4 *)(param_1 + 0x4c) = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
  return;
}

// 01355140  FUN_01355140  size=752  [run]
/* WARNING: Removing unreachable block (ram,0x013551bc) */

void __thiscall FUN_01355140(int param_1,int *param_2,float *param_3)

{
  float *pfVar1;
  void *_Dst;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  uint local_30;
  uint local_18;
  float *local_14;
  
  FUN_013517e0(param_2,*(undefined4 *)(param_1 + 0x4c));
  uVar12 = (uint)*(ushort *)((int)param_2 + 0xe);
  if (*(char *)(param_3 + 3) == '\0') {
    *param_3 = 0.0;
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    param_3[1] = 1.0;
  }
  iVar17 = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    fVar2 = *(float *)(param_1 + 0x34);
    fVar20 = (float)uVar12;
    fVar18 = (param_3[2] - fVar2) / fVar20;
    fVar25 = fVar18 * 4.0;
    iVar6 = *(int *)(param_1 + 0x18);
    fVar3 = *(float *)(param_1 + 0x2c);
    fVar26 = fVar18 + fVar2 + fVar18;
    fVar19 = (*param_3 - fVar3) / fVar20;
    fVar27 = fVar19 * 4.0;
    fVar4 = *(float *)(param_1 + 0x30);
    fVar28 = fVar19 + fVar3 + fVar19;
    iVar7 = *(int *)(param_1 + 0x1c);
    fVar20 = (param_3[1] - fVar4) / fVar20;
    fVar29 = fVar20 * 4.0;
    uVar16 = *(uint *)(param_1 + 0x44);
    uVar5 = *(ushort *)(param_2 + 3);
    local_14 = (float *)*param_2;
    fVar30 = fVar20 + fVar4;
    fVar31 = fVar30 + fVar20;
    do {
      fVar40 = 1.0 - fVar4;
      fVar42 = 1.0 - fVar30;
      fVar44 = 1.0 - fVar31;
      fVar46 = 1.0 - (fVar31 + fVar20);
      local_30 = 0;
      pfVar11 = local_14;
      iVar17 = iVar7;
      fVar21 = fVar4;
      fVar22 = fVar30;
      fVar23 = fVar31;
      fVar24 = fVar31 + fVar20;
      fVar32 = fVar2;
      fVar33 = fVar18 + fVar2;
      fVar34 = fVar26;
      fVar35 = fVar26 + fVar18;
      fVar36 = fVar3;
      fVar37 = fVar19 + fVar3;
      fVar38 = fVar28;
      fVar39 = fVar28 + fVar19;
      if (uVar12 != 0) {
        do {
          uVar13 = uVar12 - local_30;
          uVar14 = iVar6 - iVar17;
          if (uVar14 < uVar13) {
            uVar13 = uVar14;
          }
          uVar14 = uVar13 >> 2;
          if (uVar14 != 0) {
            iVar15 = (*(int *)(param_1 + local_18 * 4) + iVar17 * 4) - (int)pfVar11;
            do {
              fVar8 = pfVar11[1];
              fVar9 = pfVar11[2];
              fVar10 = pfVar11[3];
              pfVar1 = (float *)(iVar15 + (int)pfVar11);
              fVar48 = fVar21 * *pfVar1;
              fVar49 = fVar22 * pfVar1[1];
              fVar50 = fVar23 * pfVar1[2];
              fVar51 = fVar24 * pfVar1[3];
              fVar21 = fVar21 + fVar29;
              fVar22 = fVar22 + fVar29;
              fVar23 = fVar23 + fVar29;
              fVar24 = fVar24 + fVar29;
              pfVar1 = (float *)(iVar15 + (int)pfVar11);
              fVar41 = fVar36 * *pfVar1;
              fVar43 = fVar37 * pfVar1[1];
              fVar45 = fVar38 * pfVar1[2];
              fVar47 = fVar39 * pfVar1[3];
              fVar36 = fVar36 + fVar27;
              fVar37 = fVar37 + fVar27;
              fVar38 = fVar38 + fVar27;
              fVar39 = fVar39 + fVar27;
              fVar40 = (fVar48 + *pfVar11 * fVar40) * fVar32;
              fVar42 = (fVar49 + fVar8 * fVar42) * fVar33;
              fVar44 = (fVar50 + fVar9 * fVar44) * fVar34;
              fVar46 = (fVar51 + fVar10 * fVar46) * fVar35;
              fVar32 = fVar32 + fVar25;
              fVar33 = fVar33 + fVar25;
              fVar34 = fVar34 + fVar25;
              fVar35 = fVar35 + fVar25;
              pfVar1 = (float *)(iVar15 + (int)pfVar11);
              *pfVar1 = fVar41 + *pfVar11;
              pfVar1[1] = fVar43 + fVar8;
              pfVar1[2] = fVar45 + fVar9;
              pfVar1[3] = fVar47 + fVar10;
              *pfVar11 = fVar40;
              pfVar11[1] = fVar42;
              pfVar11[2] = fVar44;
              pfVar11[3] = fVar46;
              pfVar11 = pfVar11 + 4;
              uVar14 = uVar14 - 1;
              fVar40 = 1.0 - fVar21;
              fVar42 = 1.0 - fVar22;
              fVar44 = 1.0 - fVar23;
              fVar46 = 1.0 - fVar24;
            } while (uVar14 != 0);
          }
          local_30 = local_30 + uVar13;
          iVar17 = iVar17 + uVar13;
          if (iVar17 == iVar6) {
            iVar17 = 0;
          }
        } while (local_30 < uVar12);
      }
      local_18 = local_18 + 1;
      local_14 = local_14 + uVar5;
    } while (local_18 < uVar16);
  }
  *(int *)(param_1 + 0x1c) = iVar17;
  uVar16 = param_2[1];
  if ((uVar16 & 8) != 0) {
    local_14 = (float *)0x0;
    for (; uVar16 != 0; uVar16 = uVar16 & uVar16 - 1) {
      local_14 = (float *)((int)local_14 + 1);
    }
    _Dst = (void *)(*param_2 + (uint)*(ushort *)(param_2 + 3) * ((int)local_14 + -1) * 4);
    if (((_Dst != (void *)0x0) && (*(char *)(param_1 + 0x50) != '\0')) &&
       (*(char *)(param_3 + 5) == '\0')) {
      _memset(_Dst,0,uVar12 * 4);
    }
  }
  *(float *)(param_1 + 0x2c) = *param_3;
  *(float *)(param_1 + 0x30) = param_3[1];
  *(float *)(param_1 + 0x34) = param_3[2];
  *(float *)(param_1 + 0x38) = param_3[3];
  *(float *)(param_1 + 0x3c) = param_3[4];
  *(float *)(param_1 + 0x40) = param_3[5];
  return;
}

// 01355430  FUN_01355430  size=44  [run]
void __fastcall FUN_01355430(undefined4 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  param_1[0x11] = 0;
  return;
}

// 01355470  FUN_01355470  size=366  [run]
void __fastcall FUN_01355470(float *param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (param_2 >> 2) * 4;
  fVar7 = (float)iVar4;
  pfVar1 = param_1 + param_2;
  if (iVar4 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = (param_4 - param_3) / fVar7;
  pfVar3 = param_1 + (param_2 >> 2) * 4;
  fVar2 = fVar7 * 4.0;
  fVar5 = fVar7 + param_3;
  fVar6 = fVar5 + fVar7;
  fVar7 = fVar6 + fVar7;
  fVar8 = param_3;
  for (; param_1 < pfVar3; param_1 = param_1 + 4) {
    *param_1 = *param_1 * fVar8;
    param_1[1] = param_1[1] * fVar5;
    param_1[2] = param_1[2] * fVar6;
    param_1[3] = param_1[3] * fVar7;
    fVar8 = fVar8 + fVar2;
    fVar5 = fVar5 + fVar2;
    fVar6 = fVar6 + fVar2;
    fVar7 = fVar7 + fVar2;
  }
  if (param_1 < pfVar1) {
    fVar7 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = (param_4 - param_3) / fVar7;
    iVar4 = (int)pfVar1 + (3 - (int)param_1);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        *param_1 = *param_1 * param_3;
        param_1[1] = (fVar7 + param_3) * param_1[1];
        param_3 = fVar7 + fVar7 + param_3;
        param_1[2] = param_1[2] * param_3;
        param_3 = fVar7 + param_3;
        param_1[3] = param_1[3] * param_3;
        param_1 = param_1 + 4;
        param_3 = fVar7 + param_3;
      } while ((int)param_1 < (int)(pfVar1 + -3));
    }
    if (param_1 < pfVar1) {
      do {
        *param_1 = *param_1 * param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + fVar7;
      } while (param_1 < pfVar1);
      return;
    }
  }
  return;
}

// 013555E0  FUN_013555e0  size=181  [run]
void __fastcall FUN_013555e0(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 013556E0  FUN_013556e0  size=27  [run]
undefined4 FUN_013556e0(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01355700  FUN_01355700  size=154  [run]
void FUN_01355700(float param_1,float param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = 0;
  for (uVar1 = *(uint *)(unaff_ESI + 4); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    uVar2 = uVar2 + 1;
  }
  if ((param_3 == '\0') && ((*(uint *)(unaff_ESI + 4) & 8) != 0)) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = 0;
  if (param_2 == param_1) {
    if (uVar2 != 0) {
      do {
        FUN_013555e0();
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
      return;
    }
  }
  else if (uVar2 != 0) {
    do {
      FUN_01355470(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}

// 013557A0  FUN_013557a0  size=58  [run]
undefined4 __thiscall FUN_013557a0(undefined4 *param_1,int *param_2)

{
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 8))(param_1[8]);
  }
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 013557E0  FUN_013557e0  size=118  [run]
void __thiscall FUN_013557e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(short *)(param_2 + 0xe) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    local_1c = *(undefined4 *)(iVar1 + 4);
    local_18 = *(undefined4 *)(iVar1 + 8);
    local_14 = *(undefined4 *)(iVar1 + 0xc);
    local_10 = *(undefined4 *)(iVar1 + 0x10);
    local_c = *(undefined4 *)(iVar1 + 0x14);
    local_8 = *(undefined4 *)(iVar1 + 0x18);
    (**(code **)(param_1 + 8))(param_2,&local_1c);
    FUN_01355700(*(undefined4 *)(param_1 + 0xc),local_c,*(undefined1 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0xc) = local_c;
  }
  return;
}

// 01355860  FUN_01355860  size=773  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01355860(int param_1,int *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_2c;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  if (param_3[2] != *(float *)(param_1 + 0x24)) {
    *(float *)(param_1 + 0x24) = param_3[2];
    fVar11 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar11 = fVar11 + (float10)4.2949673e+09;
    }
    fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar11 * (float10)param_3[2]));
    fVar11 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
    *(float *)(param_1 + 0x28) = (float)fVar11;
  }
  fVar4 = *(float *)(param_1 + 0x28);
  if (param_3[3] != *(float *)(param_1 + 0x2c)) {
    *(float *)(param_1 + 0x2c) = param_3[3];
    fVar11 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar11 = fVar11 + (float10)4.2949673e+09;
    }
    fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar11 * (float10)param_3[3]));
    fVar11 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
    *(float *)(param_1 + 0x30) = (float)fVar11;
  }
  fVar5 = *(float *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x1c);
  if (((*(byte *)(param_2 + 1) & 8) == 0) || (*(char *)(param_1 + 0x34) != '\0')) {
    uVar8 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar8 = *(int *)(param_1 + 0x10) - 1;
  }
  uVar10 = 0;
  if (uVar8 != 0) {
    do {
      pfVar9 = (float *)(*param_2 + *(ushort *)(param_2 + 3) * uVar10 * 4);
      pfVar1 = pfVar9 + *(ushort *)((int)param_2 + 0xe);
      fVar17 = *(float *)(*(int *)(param_1 + 0x20) + 4 + uVar10 * 8);
      fVar15 = *(float *)(*(int *)(param_1 + 0x20) + uVar10 * 8);
      for (; pfVar9 < pfVar1; pfVar9 = pfVar9 + 1) {
        fVar14 = 0.0;
        fVar7 = *pfVar9;
        fVar13 = fVar7 * fVar7 + 1e-25;
        fVar17 = (fVar17 - fVar13) * fVar6 + fVar13;
        fVar13 = (float)(((uint)fVar17 & 0x7fffff) + 0x3f800000);
        fVar13 = (fVar13 - 1.0) / (fVar13 + 1.0);
        fVar13 = fVar2 - (((float)((uint)fVar17 >> 0x17 & 0xff) - 127.0) * 0.6931472 +
                         (fVar13 + fVar13) * (fVar13 * fVar13 * 0.33333334 + 1.0)) * 0.4342945 *
                         10.0;
        if (fVar13 <= 0.0) {
          fVar13 = fVar14;
        }
        fVar16 = fVar4;
        if (0.0 <= fVar13 - fVar15) {
          fVar16 = fVar5;
        }
        fVar15 = (fVar15 - fVar13) * fVar16 + fVar13;
        fVar13 = -(fVar15 * (fVar3 - 1.0)) * 0.05;
        if (-37.0 <= fVar13) {
          if ((DAT_0225a42c & 1) == 0) {
            DAT_0225a42c = DAT_0225a42c | 1;
            _DAT_0225a428 = 27866352.0;
          }
          local_2c = (uint)(longlong)ROUND(fVar13 * _DAT_0225a428 + 1.0653532e+09);
          fVar13 = (float)((local_2c & 0x7fffff) + 0x3f800000);
          fVar14 = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) *
                   (float)(local_2c & 0xff800000);
        }
        *pfVar9 = fVar7 * fVar14;
      }
      *(float *)(*(int *)(param_1 + 0x20) + 4 + uVar10 * 8) = fVar17;
      *(float *)(*(int *)(param_1 + 0x20) + uVar10 * 8) = fVar15;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  return;
}

// 01355B70  FUN_01355b70  size=1009  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01355b70(int param_1,int *param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int aiStack_40 [7];
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((*(byte *)(param_2 + 1) & 8) == 0) || (*(char *)(param_1 + 0x34) != '\0')) {
    uVar10 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar10 = *(int *)(param_1 + 0x10) - 1;
  }
  fVar16 = (float)(int)uVar10;
  if ((int)uVar10 < 0) {
    fVar16 = fVar16 + 4.2949673e+09;
  }
  fVar2 = *param_3;
  local_1c = param_3[1] - 1.0;
  local_8 = 1.0 / fVar16;
  if (param_3[2] != *(float *)(param_1 + 0x24)) {
    *(float *)(param_1 + 0x24) = param_3[2];
    fVar11 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar11 = fVar11 + (float10)4.2949673e+09;
    }
    fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar11 * (float10)param_3[2]));
    fVar11 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
    *(float *)(param_1 + 0x28) = (float)fVar11;
  }
  local_18 = *(float *)(param_1 + 0x28);
  if (param_3[3] != *(float *)(param_1 + 0x2c)) {
    *(float *)(param_1 + 0x2c) = param_3[3];
    fVar11 = (float10)*(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) < 0) {
      fVar11 = fVar11 + (float10)4.2949673e+09;
    }
    fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar11 * (float10)param_3[3]));
    fVar11 = ROUND(fVar12);
    fVar12 = (float10)f2xm1(fVar12 - fVar11);
    fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
    *(float *)(param_1 + 0x30) = (float)fVar11;
  }
  fVar16 = (*(float **)(param_1 + 0x20))[1];
  fVar15 = **(float **)(param_1 + 0x20);
  local_14 = *(float *)(param_1 + 0x30);
  uVar7 = 0;
  local_c = *(float *)(param_1 + 0x1c);
  if (uVar10 != 0) {
    uVar3 = *(ushort *)(param_2 + 3);
    iVar9 = *param_2;
    do {
      aiStack_40[uVar7] = iVar9;
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + (uint)uVar3 * 4;
    } while (uVar7 < uVar10);
  }
  uVar7 = (uint)*(ushort *)((int)param_2 + 0xe);
  while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
    uVar8 = 0;
    fVar13 = 0.0;
    if (3 < (int)uVar10) {
      do {
        piVar1 = aiStack_40 + uVar8;
        iVar9 = uVar8 + 1;
        iVar5 = uVar8 + 2;
        iVar6 = uVar8 + 3;
        uVar8 = uVar8 + 4;
        fVar13 = *(float *)aiStack_40[iVar6] * *(float *)aiStack_40[iVar6] +
                 *(float *)aiStack_40[iVar5] * *(float *)aiStack_40[iVar5] +
                 *(float *)aiStack_40[iVar9] * *(float *)aiStack_40[iVar9] +
                 *(float *)*piVar1 * *(float *)*piVar1 + fVar13;
      } while (uVar8 < uVar10 - 3);
    }
    for (; uVar8 < uVar10; uVar8 = uVar8 + 1) {
      fVar13 = *(float *)aiStack_40[uVar8] * *(float *)aiStack_40[uVar8] + fVar13;
    }
    fVar13 = fVar13 * local_8 + 1e-25;
    fVar16 = (fVar16 - fVar13) * local_c + fVar13;
    local_10 = (float)(((uint)fVar16 & 0x7fffff) + 0x3f800000);
    fVar13 = (local_10 - 1.0) / (local_10 + 1.0);
    fVar13 = fVar2 - (((float)((uint)fVar16 >> 0x17 & 0xff) - 127.0) * 0.6931472 +
                     fVar13 * 2.0 * (fVar13 * fVar13 * 0.33333334 + 1.0)) * 0.4342945 * 10.0;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar14 = local_18;
    if (0.0 <= fVar13 - fVar15) {
      fVar14 = local_14;
    }
    fVar15 = (fVar15 - fVar13) * fVar14 + fVar13;
    local_20 = -(fVar15 * local_1c) * 0.05;
    if (-37.0 <= local_20) {
      if ((DAT_0225a42c & 1) == 0) {
        DAT_0225a42c = DAT_0225a42c | 1;
        _DAT_0225a428 = 27866352.0;
      }
      aiStack_40[6] = (int)(longlong)ROUND(local_20 * _DAT_0225a428 + 1.0653532e+09);
      fVar13 = (float)((aiStack_40[6] & 0x7fffffU) + 0x3f800000);
      fStack_24 = (float)(aiStack_40[6] & 0xff800000);
      fVar13 = ((fVar13 * 0.32518977 + 0.020805772) * fVar13 + 0.65304345) * fStack_24;
    }
    else {
      fVar13 = 0.0;
    }
    uVar8 = 0;
    if (3 < (int)uVar10) {
      do {
        pfVar4 = (float *)aiStack_40[uVar8];
        aiStack_40[uVar8] = (int)(pfVar4 + 1);
        *pfVar4 = fVar13 * *pfVar4;
        pfVar4 = (float *)aiStack_40[uVar8 + 1];
        *pfVar4 = *pfVar4 * fVar13;
        aiStack_40[uVar8 + 1] = (int)(pfVar4 + 1);
        pfVar4 = (float *)aiStack_40[uVar8 + 2];
        *pfVar4 = *pfVar4 * fVar13;
        aiStack_40[uVar8 + 2] = (int)(pfVar4 + 1);
        pfVar4 = (float *)aiStack_40[uVar8 + 3];
        *pfVar4 = *pfVar4 * fVar13;
        aiStack_40[uVar8 + 3] = (int)(pfVar4 + 1);
        uVar8 = uVar8 + 4;
      } while (uVar8 < uVar10 - 3);
    }
    for (; uVar8 < uVar10; uVar8 = uVar8 + 1) {
      pfVar4 = (float *)aiStack_40[uVar8];
      *pfVar4 = *pfVar4 * fVar13;
      aiStack_40[uVar8] = (int)(pfVar4 + 1);
    }
  }
  *(float *)(*(int *)(param_1 + 0x20) + 4) = fVar16;
  **(float **)(param_1 + 0x20) = fVar15;
  return;
}

// 01355F70  FUN_01355f70  size=359  [run]
undefined4 __thiscall
FUN_01355f70(int param_1,int *param_2,undefined4 param_3,int param_4,int *param_5)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar7;
  int iVar6;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  *(int *)(param_1 + 4) = param_4;
  fVar1 = *(float *)(param_4 + 0xc);
  uVar2 = *(undefined4 *)(param_4 + 0x14);
  fVar3 = *(float *)(param_4 + 0x10);
  uVar4 = *(undefined4 *)(param_4 + 0x18);
  cVar5 = (char)uVar4;
  *(char *)(param_1 + 0x34) = cVar5;
  iVar9 = 0;
  for (uVar8 = param_5[1] & 0x3ffff; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
    iVar9 = iVar9 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar9;
  iVar6 = *param_5;
  *(int *)(param_1 + 0x14) = iVar6;
  fVar10 = (float10)*(int *)(param_1 + 0x14);
  *(float *)(param_1 + 0x24) = fVar1;
  if (iVar6 < 0) {
    fVar10 = fVar10 + (float10)4.2949673e+09;
  }
  *(float *)(param_1 + 0x2c) = fVar3;
  fVar12 = (float10)1.4426950408889634 * ((float10)-2.2 / ((float10)fVar1 * fVar10));
  fVar11 = ROUND(fVar12);
  fVar12 = (float10)f2xm1(fVar12 - fVar11);
  fVar11 = (float10)fscale((float10)1 + fVar12,fVar11);
  *(float *)(param_1 + 0x28) = (float)fVar11;
  fVar11 = (float10)1.4426950408889634 * ((float10)-2.2 / (fVar10 * (float10)fVar3));
  fVar10 = ROUND(fVar11);
  fVar11 = (float10)f2xm1(fVar11 - fVar10);
  fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
  *(float *)(param_1 + 0x30) = (float)fVar10;
  cVar7 = (char)((uint)uVar4 >> 8);
  if ((cVar7 == '\0') || (iVar9 == 1)) {
    *(code **)(param_1 + 8) = FUN_01355860;
  }
  else {
    *(code **)(param_1 + 8) = FUN_01355b70;
    if (((*(byte *)(param_5 + 1) & 8) != 0) && (cVar5 == '\0')) {
      iVar9 = iVar9 + -1;
    }
  }
  iVar6 = 1;
  if (cVar7 == '\0') {
    iVar6 = iVar9;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  iVar9 = (**(code **)(*param_2 + 4))(iVar6 * 8);
  *(int *)(param_1 + 0x20) = iVar9;
  if (iVar9 == 0) {
    return 0x34;
  }
  fVar10 = (float10)*(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) < 0) {
    fVar10 = fVar10 + (float10)4.2949673e+09;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  fVar11 = (float10)1.4426950408889634 * ((float10)-1.0 / (fVar10 * (float10)0.02322));
  fVar10 = ROUND(fVar11);
  fVar11 = (float10)f2xm1(fVar11 - fVar10);
  fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
  *(float *)(param_1 + 0x1c) = (float)fVar10;
  return 1;
}

// 01356100  FUN_01356100  size=42  [run]
undefined4 * FUN_01356100(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803f44;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[8] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01356130  FUN_01356130  size=45  [run]
void __thiscall FUN_01356130(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  return;
}

// 01356160  FUN_01356160  size=35  [run]
void FUN_01356160(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 013561A0  FUN_013561a0  size=34  [run]
undefined4 * __thiscall FUN_013561a0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 013561E0  FUN_013561e0  size=106  [run]
undefined4 __thiscall FUN_013561e0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    param_1[1] = -0x3e100000;
    param_1[2] = 0x40800000;
    param_1[3] = 0x3dcccccd;
    param_1[4] = 0x3c23d70a;
    param_1[5] = 0x3f800000;
    *(undefined2 *)(param_1 + 6) = 0x101;
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return uVar1;
}

// 01356250  FUN_01356250  size=168  [run]
undefined4 __thiscall FUN_01356250(int param_1,undefined2 param_2,undefined4 *param_3)

{
  float10 fVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    switch(param_2) {
    case 0:
      *(undefined4 *)(param_1 + 4) = *param_3;
      return 1;
    case 1:
      *(undefined4 *)(param_1 + 8) = *param_3;
      return 1;
    case 2:
      *(undefined4 *)(param_1 + 0xc) = *param_3;
      return 1;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = *param_3;
      return 1;
    case 4:
      fVar1 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x14) = (float)fVar1;
      return 1;
    case 5:
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)param_3;
      return 1;
    case 6:
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)param_3;
      return 1;
    default:
      return 0x1f;
    }
  }
  return 0x1f;
}

// 01356320  FUN_01356320  size=54  [run]
void __thiscall FUN_01356320(undefined4 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_01803f60;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 01356360  FUN_01356360  size=76  [run]
undefined4 * __thiscall FUN_01356360(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803f60;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar1[5] = *(undefined4 *)(param_1 + 0x14);
    puVar1[6] = *(undefined4 *)(param_1 + 0x18);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 013563B0  FUN_013563b0  size=39  [run]
undefined4 __thiscall FUN_013563b0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 013563E0  FUN_013563e0  size=99  [run]
undefined4 __thiscall FUN_013563e0(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x14) = (float)fVar1;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x15);
  return 1;
}

// 01356460  FUN_01356460  size=31  [run]
undefined4 * FUN_01356460(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803f60;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01356480  FUN_01356480  size=35  [run]
void FUN_01356480(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 013564B0  FUN_013564b0  size=34  [run]
undefined4 * __thiscall FUN_013564b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 013564F0  FUN_013564f0  size=8  [run]
undefined4 FUN_013564f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01356500  FUN_01356500  size=20  [run]
void FUN_01356500(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01356520  FUN_01356520  size=20  [run]
void FUN_01356520(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01356540  FUN_01356540  size=20  [run]
void FUN_01356540(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 01356570  FUN_01356570  size=38  [run]
uint __thiscall FUN_01356570(int param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x56) == '\0') {
    param_2 = param_2 & 0xfffffff7;
  }
  if ((((byte)param_2 & 7) == 7) && (*(char *)(param_1 + 0x55) == '\0')) {
    param_2 = param_2 & 0xfffffffb;
  }
  return param_2;
}

// 013565A0  FUN_013565a0  size=602  [run]
int __thiscall FUN_013565a0(int param_1,uint param_2)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_10;
  
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      uVar6 = uVar7;
      uVar7 = uVar6 + 1;
      param_2 = param_2 & param_2 - 1;
    } while (param_2 != 0);
    if (uVar7 != 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 4))(uVar7 * 0x2c);
      *(int *)(param_1 + 4) = iVar3;
      if (iVar3 == 0) {
        return 0x34;
      }
      uVar4 = 0;
      if (3 < (int)uVar7) {
        iVar3 = 0;
        iVar8 = (uVar6 - 3 >> 2) + 1;
        uVar4 = iVar8 * 4;
        do {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
          }
          puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 0x2c + iVar3);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
          }
          puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x2c + iVar3 + 0x84);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
          }
          puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3 + 0x84);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
          }
          iVar3 = iVar3 + 0xb0;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (uVar4 < uVar7) {
        iVar3 = uVar4 * 0x2c;
        iVar8 = uVar7 - uVar4;
        do {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
          }
          iVar3 = iVar3 + 0x2c;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar6 = 0;
      fVar1 = (float)*(int *)(param_1 + 0xa4);
      if (*(int *)(param_1 + 0xa4) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_10 = (undefined4)(longlong)ROUND(fVar1 * *(float *)(param_1 + 0x50) * 0.001);
      if (uVar7 != 0) {
        do {
          uVar12 = *(undefined4 *)(param_1 + 0x24);
          uVar11 = *(undefined4 *)(param_1 + 0x18);
          uVar10 = *(undefined4 *)(param_1 + 0x1c);
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(uVar9,uVar10,uVar11,uVar12);
          iVar3 = FUN_01358870(*(undefined4 *)(param_1 + 0x10),local_10,uVar2,uVar9,uVar10,uVar11,
                               uVar12);
          if (iVar3 != 1) {
            return iVar3;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
    }
  }
  return 1;
}

// 01356800  FUN_01356800  size=74  [run]
void __fastcall FUN_01356800(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0xa0) != 0) {
      do {
        FUN_01358350(*(undefined4 *)(param_1 + 0x10));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0xa0));
    }
    (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

// 01356850  FUN_01356850  size=27  [run]
undefined4 FUN_01356850(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01356870  FUN_01356870  size=48  [run]
void __thiscall FUN_01356870(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      FUN_01358380();
    }
  }
  return;
}

// 013568F0  FUN_013568f0  size=306  [run]
void __fastcall FUN_013568f0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float local_10;
  float local_c;
  int local_8;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0xa0) != 0) {
    do {
      FUN_013583b0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x24));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xa0));
  }
  local_8 = *(int *)(param_1 + 8);
  if ((local_8 != 0) && (*(char *)(param_1 + 0x54) != '\0')) {
    pfVar1 = (float *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0xa4);
    FUN_01357540(iVar2,pfVar1,&local_10,&local_c);
    uVar5 = 0;
    if (*(int *)(local_8 + 0x90) != 0) {
      fVar3 = (float)iVar2;
      if (iVar2 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      pfVar4 = (float *)(local_8 + 0xc);
      do {
        fVar6 = *(float *)(param_1 + 0x2c) * (1.0 / fVar3);
        pfVar4[1] = fVar6;
        if (*pfVar1 == 0.0) {
          pfVar4[1] = fVar6 * 6.2831855;
        }
        pfVar4[-2] = local_10;
        pfVar4[-1] = local_c;
        if (pfVar4[2] != *pfVar1) {
          if (pfVar4[2] == 0.0) {
            fVar6 = *pfVar4 * 0.15915494;
          }
          else {
            if (*pfVar1 != 0.0) goto LAB_01356a0d;
            fVar6 = *pfVar4 * 6.2831855;
          }
          *pfVar4 = fVar6;
        }
LAB_01356a0d:
        pfVar4[2] = *pfVar1;
        uVar5 = uVar5 + 1;
        pfVar4 = pfVar4 + 6;
      } while (uVar5 < *(uint *)(local_8 + 0x90));
    }
  }
  return;
}

// 01356A30  FUN_01356a30  size=75  [run]
undefined4 * __fastcall FUN_01356a30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01803f80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  _memset(param_1 + 6,0,0x40);
  _memset(param_1 + 0x16,0,0x40);
  return param_1;
}

// 01356A80  FUN_01356a80  size=114  [run]
undefined4 __thiscall FUN_01356a80(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x54) != '\0') {
    iVar2 = 0;
    uVar1 = param_2;
    if (param_2 != 0) {
      do {
        iVar2 = iVar2 + 1;
        uVar1 = uVar1 & uVar1 - 1;
      } while (uVar1 != 0);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 4))(0x94);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_013576f0();
        }
        *(int *)(param_1 + 8) = iVar2;
        if (iVar2 == 0) {
          return 0x34;
        }
        FUN_01357cf0(param_2,*(undefined4 *)(param_1 + 0xa4),param_1 + 0x28);
      }
    }
  }
  return 1;
}

// 01356B00  FUN_01356b00  size=30  [run]
void __fastcall FUN_01356b00(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 01356B20  FUN_01356b20  size=194  [run]
int __thiscall FUN_01356b20(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = *(uint *)(param_2 + 4);
  if (*(char *)(param_1 + 0x56) == '\0') {
    uVar4 = uVar4 & 0xfffffff7;
  }
  if ((((byte)uVar4 & 7) == 7) && (*(char *)(param_1 + 0x55) == '\0')) {
    uVar4 = uVar4 & 0xfffffffb;
  }
  iVar3 = 0;
  for (uVar1 = uVar4; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    iVar3 = iVar3 + 1;
  }
  bVar5 = iVar3 != *(int *)(param_1 + 0xa0);
  if ((*(char *)(param_1 + 0x94) != *(char *)(param_1 + 0x54)) || (bVar5)) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(*(int *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    iVar2 = FUN_01356a80(uVar4);
    if (iVar2 != 1) {
      return iVar2;
    }
  }
  if ((*(float *)(param_1 + 0x90) != *(float *)(param_1 + 0x50)) || (bVar5)) {
    FUN_01356800();
    iVar2 = FUN_013565a0(uVar4);
    if (iVar2 != 1) {
      return iVar2;
    }
    FUN_01356870(iVar3);
  }
  *(int *)(param_1 + 0xa0) = iVar3;
  return 1;
}

// 01356BF0  FUN_01356bf0  size=914  [run]
void __thiscall FUN_01356bf0(int param_1,int *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  undefined4 local_40;
  uint local_1c;
  uint local_c;
  
  puVar10 = *(undefined4 **)(param_1 + 0xc);
  puVar11 = (undefined4 *)(param_1 + 0x18);
  for (iVar8 = 0x10; puVar10 = puVar10 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = *puVar10;
    puVar11 = puVar11 + 1;
  }
  FUN_01357e00(0);
  if (*(char *)(param_1 + 0x54) == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0x57) != '\0') {
    iVar8 = FUN_01356b20(param_2);
    if (iVar8 != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 0x57) = 0;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    FUN_013568f0();
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    fVar12 = (float)*(int *)(param_1 + 0xa4);
    if (*(int *)(param_1 + 0xa4) < 0) {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    local_40 = (undefined4)(longlong)ROUND(fVar12 * *(float *)(param_1 + 0x50) * 0.001);
    FUN_013517e0(param_2,local_40);
    uVar6 = (uint)*(ushort *)((int)param_2 + 0xe);
    if (*(ushort *)((int)param_2 + 0xe) != 0) {
      uVar9 = param_2[1];
      if (*(char *)(param_1 + 0x56) == '\0') {
        uVar9 = uVar9 & 0xfffffff7;
      }
      local_c = 0;
      for (uVar7 = uVar9; uVar7 != 0; uVar7 = uVar7 & uVar7 - 1) {
        local_c = local_c + 1;
      }
      if ((*(char *)(param_1 + 0x55) != '\0') || (bVar5 = true, ((byte)uVar9 & 7) != 7)) {
        bVar5 = false;
      }
      _Dst = (void *)(**(code **)(**(int **)(param_1 + 0x10) + 4))
                               ((uint)*(ushort *)(param_2 + 3) * 4);
      if (_Dst != (void *)0x0) {
        fVar12 = (100.0 - *(float *)(param_1 + 0x88)) * 0.01;
        fVar13 = (100.0 - *(float *)(param_1 + 0x48)) * 0.01;
        if (*(char *)(param_1 + 0x54) == '\0') {
          local_1c = 0;
          if (local_c != 0) {
            do {
              if ((!bVar5) || (local_1c != 2)) {
                pvVar1 = (void *)(*param_2 + *(ushort *)(param_2 + 3) * local_1c * 4);
                FID_conflict__memcpy(_Dst,pvVar1,uVar6 * 4);
                FUN_01358900(pvVar1,uVar6,0);
                FUN_01353440(pvVar1,_Dst,*(float *)(param_1 + 0x84) * (1.0 - fVar12),
                             *(float *)(param_1 + 0x44) * (1.0 - fVar13),
                             *(float *)(param_1 + 0x84) * fVar12,*(float *)(param_1 + 0x44) * fVar13
                             ,uVar6);
              }
              local_1c = local_1c + 1;
            } while (local_1c < local_c);
          }
        }
        else {
          iVar8 = (**(code **)(**(int **)(param_1 + 0x10) + 4))(uVar6 * 4);
          uVar2 = *(undefined4 *)(param_1 + 0x34);
          uVar3 = *(undefined4 *)(param_1 + 0x24);
          uVar4 = *(undefined4 *)(param_1 + 100);
          local_1c = 0;
          if (local_c != 0) {
            do {
              if ((!bVar5) || (local_1c != 2)) {
                if (iVar8 != 0) {
                  FUN_013578a0(iVar8,uVar6,uVar3,uVar4,uVar2);
                }
                pvVar1 = (void *)(*param_2 + *(ushort *)(param_2 + 3) * local_1c * 4);
                FID_conflict__memcpy(_Dst,pvVar1,uVar6 * 4);
                FUN_01358900(pvVar1,uVar6,iVar8);
                FUN_01353440(pvVar1,_Dst,*(float *)(param_1 + 0x84) * (1.0 - fVar12),
                             *(float *)(param_1 + 0x44) * (1.0 - fVar13),
                             *(float *)(param_1 + 0x84) * fVar12,*(float *)(param_1 + 0x44) * fVar13
                             ,uVar6);
              }
              local_1c = local_1c + 1;
            } while (local_1c < local_c);
          }
          if (iVar8 != 0) {
            (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar8);
          }
        }
        (**(code **)(**(int **)(param_1 + 0x10) + 8))(_Dst);
        puVar10 = (undefined4 *)(param_1 + 0x18);
        puVar11 = (undefined4 *)(param_1 + 0x58);
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
      }
    }
  }
  return;
}

// 01356F90  FUN_01356f90  size=104  [run]
undefined4 * FUN_01356f90(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0xa8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803f80;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0x26] = 0xffffffff;
    puVar1[0x27] = 0;
    _memset(puVar1 + 6,0,0x40);
    _memset(puVar1 + 0x16,0,0x40);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01357000  FUN_01357000  size=178  [run]
void __thiscall
FUN_01357000(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  *(undefined4 **)(param_1 + 0xc) = param_4;
  puVar3 = (undefined4 *)(param_1 + 0x18);
  for (iVar1 = 0x10; param_4 = param_4 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_4;
    puVar3 = puVar3 + 1;
  }
  FUN_01357e00(0);
  if (*(char *)(param_1 + 0x54) == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar3 = (undefined4 *)(param_1 + 0x18);
  puVar5 = (undefined4 *)(param_1 + 0x58);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x14) = param_3;
  uVar4 = param_5[1] & 0x3ffff;
  if (*(char *)(param_1 + 0x56) == '\0') {
    uVar4 = param_5[1] & 0x3fff7;
  }
  if ((((byte)uVar4 & 7) == 7) && (*(char *)(param_1 + 0x55) == '\0')) {
    uVar4 = uVar4 & 0xfffffffb;
  }
  iVar1 = 0;
  for (uVar2 = uVar4; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0xa0) = iVar1;
  *(undefined4 *)(param_1 + 0xa4) = *param_5;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar1 = FUN_013565a0(uVar4);
  if (iVar1 == 1) {
    FUN_01356a80(uVar4);
  }
  return;
}

// 013570C0  FUN_013570c0  size=67  [run]
undefined4 __thiscall FUN_013570c0(undefined4 *param_1,int *param_2)

{
  FUN_01356800();
  if (param_1[2] != 0) {
    (**(code **)(*(int *)param_1[4] + 8))(param_1[2]);
    param_1[2] = 0;
  }
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 01357110  FUN_01357110  size=14  [run]
float10 FUN_01357110(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2((float10)param_1);
  return (float10)0.6931471805599453 * fVar1;
}

// 01357120  FUN_01357120  size=15  [run]
void FUN_01357120(void)

{
  FUN_00fe090a();
  return;
}

// 01357130  FUN_01357130  size=14  [run]
float10 FUN_01357130(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)log2((float10)param_1);
  return (float10)0.6931471805599453 * fVar1;
}

// 01357160  FUN_01357160  size=27  [run]
void __thiscall FUN_01357160(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

// 01357180  FUN_01357180  size=42  [run]
float10 __thiscall FUN_01357180(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[1] * param_2 - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 013571E0  FUN_013571e0  size=35  [run]
void __thiscall FUN_013571e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  for (iVar1 = 0x10; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_2 = param_2 + 1;
  }
  FUN_01357e00(0);
  return;
}

// 01357210  FUN_01357210  size=36  [run]
float10 FUN_01357210(int param_1,float param_2)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar2;
  fVar1 = (float10)fsin((float10)fVar2);
  return fVar1 * (float10)param_2;
}

// 01357240  FUN_01357240  size=106  [run]
float10 FUN_01357240(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1[4] + param_1[3];
  if (1.0 <= fVar2) {
    fVar2 = fVar2 - 1.0;
  }
  fVar1 = fVar2;
  if (0.5 < fVar2) {
    fVar1 = 1.0 - fVar2;
  }
  param_1[3] = fVar2;
  fVar2 = (fVar1 * 4.0 - 1.0) * param_2 * param_1[1] - param_1[2] * *param_1;
  *param_1 = fVar2;
  return (float10)fVar2;
}

// 013572B0  FUN_013572b0  size=92  [run]
float10 FUN_013572b0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_1[4] + param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = fVar1 - 1.0;
  }
  if (param_3 < fVar1) {
    param_2 = -param_2;
  }
  param_1[3] = fVar1;
  fVar1 = param_1[1] * param_2 - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 01357310  FUN_01357310  size=87  [run]
float10 FUN_01357310(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[4] + param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = fVar1 - 1.0;
  }
  param_1[3] = fVar1;
  fVar1 = (fVar1 * 2.0 - 1.0) * param_2 * param_1[1] - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 01357370  FUN_01357370  size=87  [run]
float10 FUN_01357370(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_1[4] + param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = fVar1 - 1.0;
  }
  param_1[3] = fVar1;
  fVar1 = (1.0 - fVar1 * 2.0) * param_2 * param_1[1] - param_1[2] * *param_1;
  *param_1 = fVar1;
  return (float10)fVar1;
}

// 01357440  FUN_01357440  size=16  [run]
int __thiscall FUN_01357440(int param_1,int param_2)

{
  return param_1 + param_2 * 0x18;
}

// 01357490  FUN_01357490  size=168  [run]
void __thiscall
FUN_01357490(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)param_2;
  if (param_2 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar1 = (float)param_3[1];
  *(float *)(param_1 + 0x10) = fVar1 / fVar3;
  if (*param_3 == 0) {
    *(float *)(param_1 + 0x10) = (fVar1 / fVar3) * 6.2831855;
  }
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  iVar2 = *param_3;
  if (*(int *)(param_1 + 0x14) == iVar2) {
    *(int *)(param_1 + 0x14) = iVar2;
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 0.15915494;
    *(int *)(param_1 + 0x14) = *param_3;
    return;
  }
  if (iVar2 == 0) {
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * 6.2831855;
    *(int *)(param_1 + 0x14) = *param_3;
    return;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}

// 01357540  FUN_01357540  size=154  [run]
void __thiscall
FUN_01357540(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(float *)(param_3 + 8) == (float)(undefined *)0x0) {
    FUN_01358a40(0,0,0,param_4,param_5,param_1);
    return;
  }
  fVar1 = (float10)param_2;
  if (param_2 < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  fVar2 = (float10)log2((fVar1 * (float10)0.5) / (float10)*(float *)(param_3 + 4));
  fVar3 = (float10)1.4426950408889634 *
          -((float10)0.6931471805599453 * fVar2 * (float10)*(float *)(param_3 + 8));
  fVar2 = ROUND(fVar3);
  fVar3 = (float10)f2xm1(fVar3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  FUN_01358a40(1,(float)(fVar2 * fVar1 * (float10)0.5),param_2,param_4,param_5);
  return;
}

// 013575E0  FUN_013575e0  size=44  [run]
void __thiscall FUN_013575e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  return;
}

// 01357610  FUN_01357610  size=86  [run]
void __thiscall FUN_01357610(undefined4 *param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  if (param_2[5] == 0) {
    fVar1 = (float10)FUN_00fe090a();
    param_1[3] = (float)fVar1;
    return;
  }
  fVar1 = (float10)FUN_00fe090a();
  param_1[3] = (float)fVar1;
  return;
}

// 01357670  FUN_01357670  size=61  [run]
void FUN_01357670(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  uVar1 = param_1;
  FUN_01357540(param_1,param_2,&param_1,&param_2);
  FUN_01357490(uVar1,uVar2,param_1,param_2);
  return;
}

// 013576B0  FUN_013576b0  size=35  [run]
void FUN_013576b0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 013576F0  FUN_013576f0  size=193  [run]
void __fastcall FUN_013576f0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return;
}

// 013577C0  FUN_013577c0  size=209  [run]
void __thiscall FUN_013577c0(float param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float local_8;
  
  pfVar2 = param_3;
  local_8 = param_1;
  FUN_01357540(param_2,param_3,&local_8,&param_3);
  uVar4 = 0;
  if (*(int *)((int)param_1 + 0x90) != 0) {
    fVar1 = (float)param_2;
    if (param_2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    pfVar3 = (float *)((int)param_1 + 0xc);
    do {
      fVar5 = pfVar2[1] * (1.0 / fVar1);
      pfVar3[1] = fVar5;
      if (*pfVar2 == 0.0) {
        pfVar3[1] = fVar5 * 6.2831855;
      }
      pfVar3[-2] = local_8;
      pfVar3[-1] = (float)param_3;
      if (pfVar3[2] != *pfVar2) {
        if (pfVar3[2] == 0.0) {
          fVar5 = *pfVar3 * 0.15915494;
        }
        else {
          if (*pfVar2 != 0.0) goto LAB_0135787d;
          fVar5 = *pfVar3 * 6.2831855;
        }
        *pfVar3 = fVar5;
      }
LAB_0135787d:
      pfVar3[2] = *pfVar2;
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 6;
    } while (uVar4 < *(uint *)((int)param_1 + 0x90));
  }
  return;
}

// 013578A0  FUN_013578a0  size=764  [run]
void __thiscall
FUN_013578a0(float *param_1,float *param_2,int param_3,float param_4,float param_5,float param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float local_1c;
  float local_10;
  
  fVar3 = param_1[1];
  local_1c = *param_1;
  fVar4 = param_1[2];
  local_10 = param_1[3];
  fVar5 = param_1[4];
  fVar8 = (float10)param_3;
  fVar6 = param_1[5];
  pfVar1 = param_2 + param_3;
  if (param_3 < 0) {
    fVar8 = fVar8 + (float10)4.2949673e+09;
  }
  fVar8 = ((float10)param_4 - (float10)param_5) / fVar8;
  fVar2 = (float)fVar8;
  switch(fVar6) {
  case 0.0:
    if (param_2 < pfVar1) {
      fVar9 = (float10)local_10;
      fVar10 = (float10)param_5;
      do {
        fVar10 = fVar10 + fVar8;
        pfVar7 = param_2 + 1;
        fVar9 = (float10)fVar5 + fVar9;
        fVar11 = (float10)fsin(fVar9);
        *param_2 = (float)(fVar11 * fVar10);
        param_2 = pfVar7;
      } while (pfVar7 < pfVar1);
      local_10 = (float)fVar9;
    }
    break;
  case 1.4013e-45:
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      param_5 = param_5 + fVar2;
      local_10 = fVar5 + local_10;
      if (1.0 <= local_10) {
        local_10 = local_10 - 1.0;
      }
      fVar12 = local_10;
      if (0.5 < local_10) {
        fVar12 = 1.0 - local_10;
      }
      local_1c = (fVar12 * 4.0 - 1.0) * param_5 * fVar3 - fVar4 * local_1c;
      *param_2 = local_1c;
    }
    break;
  case 2.8026e-45:
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      param_5 = param_5 + fVar2;
      local_10 = fVar5 + local_10;
      if (1.0 <= local_10) {
        local_10 = local_10 - 1.0;
      }
      fVar12 = param_5;
      if (param_6 < local_10) {
        fVar12 = -param_5;
      }
      local_1c = fVar12 * fVar3 - fVar4 * local_1c;
      *param_2 = local_1c;
    }
    break;
  case 4.2039e-45:
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      param_5 = param_5 + fVar2;
      local_10 = fVar5 + local_10;
      if (1.0 <= local_10) {
        local_10 = local_10 - 1.0;
      }
      local_1c = (local_10 * 2.0 - 1.0) * param_5 * fVar3 - fVar4 * local_1c;
      *param_2 = local_1c;
    }
    break;
  case 5.60519e-45:
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      param_5 = param_5 + fVar2;
      local_10 = fVar5 + local_10;
      if (1.0 <= local_10) {
        local_10 = local_10 - 1.0;
      }
      local_1c = (1.0 - local_10 * 2.0) * param_5 * fVar3 - fVar4 * local_1c;
      *param_2 = local_1c;
    }
  }
  *param_1 = local_1c;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  param_1[3] = local_10;
  param_1[4] = fVar5;
  param_1[5] = fVar6;
  if (fVar6 == 0.0) {
    fVar8 = (float10)FUN_00fe090a();
    param_1[3] = (float)fVar8;
    return;
  }
  fVar8 = (float10)FUN_00fe090a();
  param_1[3] = (float)fVar8;
  return;
}

// 01357BC0  FUN_01357bc0  size=260  [run]
void __thiscall FUN_01357bc0(undefined4 *param_1,undefined4 param_2,int *param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  float fVar5;
  float local_10;
  
  piVar3 = param_3;
  uVar2 = param_2;
  FUN_01357540(param_2,param_3,&param_2,&param_3);
  FUN_01357490(uVar2,piVar3,param_2,param_3);
  iVar1 = param_1[5];
  if (*piVar3 == 0) {
    fVar5 = 6.2831855;
  }
  else {
    fVar5 = 1.0;
  }
  local_10 = fVar5 * param_4 * 0.0027777778;
  if (iVar1 == 1) {
    local_10 = local_10 + 0.25;
  }
  else if (iVar1 == 3) {
    local_10 = local_10 + 0.5;
  }
  if (local_10 < 0.0) {
    local_10 = local_10 + fVar5;
  }
  if (fVar5 <= local_10) {
    local_10 = local_10 - fVar5;
  }
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = local_10;
  param_1[4] = param_1[4];
  param_1[5] = iVar1;
  if (iVar1 != 0) {
    fVar4 = (float10)FUN_00fe090a();
    param_1[3] = (float)fVar4;
    return;
  }
  fVar4 = (float10)FUN_00fe090a();
  param_1[3] = (float)fVar4;
  return;
}

// 01357CD0  FUN_01357cd0  size=28  [run]
undefined4 __thiscall FUN_01357cd0(undefined4 param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01357CF0  FUN_01357cf0  size=127  [run]
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_01357cf0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 extraout_ECX_00;
  uint auStack_20 [4];
  
  iVar1 = 0;
  for (uVar2 = param_2; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x90) = iVar1;
  if (iVar1 != 0) {
    auStack_20[3] = 0x1357d1e;
    auStack_20[3 - iVar1] = (uint)(&stack0xfffffff0 + iVar1 * -4);
    auStack_20[2 - iVar1] = param_4 + 0x10;
    auStack_20[1 - iVar1] = param_2;
    auStack_20[-iVar1] = 0x1357d31;
    FUN_01358b40();
    uVar2 = 0;
    uVar3 = extraout_ECX;
    if (*(int *)(param_1 + 0x90) != 0) {
      do {
        auStack_20[3 - iVar1] = uVar3;
        auStack_20[3 - iVar1] = *(undefined4 *)(&stack0xfffffff0 + uVar2 * 4 + iVar1 * -4);
        auStack_20[2 - iVar1] = param_4;
        auStack_20[1 - iVar1] = param_3;
        auStack_20[-iVar1] = 0x1357d59;
        FUN_01357bc0();
        uVar2 = uVar2 + 1;
        uVar3 = extraout_ECX_00;
      } while (uVar2 < *(uint *)(param_1 + 0x90));
    }
  }
  return;
}

// 01357D70  FUN_01357d70  size=23  [run]
void FUN_01357d70(int *param_1,int param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01357DA0  FUN_01357da0  size=34  [run]
undefined4 * __thiscall FUN_01357da0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01357DD0  FUN_01357dd0  size=13  [run]
void __thiscall FUN_01357dd0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  return;
}

// 01357DE0  FUN_01357de0  size=13  [run]
void __thiscall FUN_01357de0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 7) = param_2;
  return;
}

// 01357E00  FUN_01357e00  size=16  [run]
void __thiscall FUN_01357e00(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x43) = param_2;
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return;
}

// 01357E10  FUN_01357e10  size=128  [run]
void __thiscall FUN_01357e10(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    param_1[0xf] = 0x40400000;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0x3f800000;
    param_1[0xb] = 0;
    param_1[0xd] = 0x42c80000;
    param_1[0xc] = 0x3f800000;
    param_1[0x10] = 0x1000001;
    *(undefined1 *)(param_1 + 0xe) = 1;
    return;
  }
  (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return;
}

// 01357E90  FUN_01357e90  size=472  [run]
undefined4 __thiscall FUN_01357e90(int param_1,undefined2 param_2,float *param_3)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  undefined4 local_c;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  switch(param_2) {
  case 0:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x43) = 1;
    *(float *)(param_1 + 0x3c) = fVar1;
    break;
  case 1:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 0x34) = fVar1;
    return 1;
  case 2:
    cVar2 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x43) = 1;
    *(bool *)(param_1 + 0x42) = cVar2 != '\0';
    return 1;
  case 5:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 4) = fVar1;
    return 1;
  case 6:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 8) = fVar1;
    return 1;
  case 7:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 0xc) = fVar1;
    return 1;
  case 8:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    local_c = (undefined4)(longlong)ROUND(fVar1);
    *(undefined4 *)(param_1 + 0x14) = local_c;
    return 1;
  case 9:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 0x18) = fVar1;
    return 1;
  case 10:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 0x10) = fVar1 * 0.01;
    return 1;
  case 0xe:
    cVar2 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x43) = 1;
    *(bool *)(param_1 + 0x40) = cVar2 != '\0';
    return 1;
  case 0x10:
    fVar3 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x30) = (float)fVar3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    return 1;
  case 0x11:
    cVar2 = *(char *)param_3;
    *(undefined1 *)(param_1 + 0x43) = 1;
    *(bool *)(param_1 + 0x41) = cVar2 != '\0';
    return 1;
  case 0x12:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 0x1c) = fVar1 * 0.01;
    return 1;
  case 0x13:
    fVar1 = *param_3;
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 0x20) = fVar1 * 0.01;
    return 1;
  case 0x14:
    *(float *)(param_1 + 0x24) = *param_3;
    return 1;
  case 0x15:
    local_c = (undefined4)(longlong)ROUND(*param_3);
    *(undefined4 *)(param_1 + 0x2c) = local_c;
    return 1;
  case 0x16:
    *(float *)(param_1 + 0x28) = *param_3;
    return 1;
  }
  return 1;
}

// 013580D0  FUN_013580d0  size=43  [run]
void __thiscall FUN_013580d0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x10;
  *param_1 = &PTR_FUN_01803fc4;
  puVar2 = param_1;
  while( true ) {
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar2 = *param_2;
  }
  *(undefined1 *)((int)param_1 + 0x43) = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}

// 01358100  FUN_01358100  size=63  [run]
undefined4 * __thiscall FUN_01358100(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0x10;
    *puVar1 = &PTR_FUN_01803fc4;
    puVar3 = puVar1;
    while( true ) {
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      *puVar3 = *param_1;
    }
    *(undefined1 *)((int)puVar1 + 0x43) = 1;
    *(undefined1 *)(puVar1 + 0xe) = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01358140  FUN_01358140  size=39  [run]
undefined4 __thiscall FUN_01358140(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 01358170  FUN_01358170  size=231  [run]
void __thiscall FUN_01358170(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  *(undefined4 *)(param_1 + 0x3c) = *param_2;
  *(undefined4 *)(param_1 + 4) = param_2[1];
  *(undefined4 *)(param_1 + 8) = param_2[2];
  *(undefined4 *)(param_1 + 0xc) = param_2[3];
  fVar1 = (float)param_2[4];
  *(float *)(param_1 + 0x10) = fVar1;
  *(undefined4 *)(param_1 + 0x18) = param_2[5];
  *(undefined4 *)(param_1 + 0x14) = param_2[6];
  fVar2 = (float)param_2[7];
  *(float *)(param_1 + 0x1c) = fVar2;
  fVar3 = (float)param_2[8];
  *(float *)(param_1 + 0x20) = fVar3;
  *(undefined4 *)(param_1 + 0x24) = param_2[9];
  *(undefined4 *)(param_1 + 0x2c) = param_2[10];
  *(undefined4 *)(param_1 + 0x28) = param_2[0xb];
  *(float *)(param_1 + 0x10) = fVar1 * 0.01;
  *(float *)(param_1 + 0x1c) = fVar2 * 0.01;
  *(float *)(param_1 + 0x20) = fVar3 * 0.01;
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x30) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x34) = param_2[0xd];
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)((int)param_2 + 0x39);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)((int)param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}

// 01358270  FUN_01358270  size=31  [run]
undefined4 * FUN_01358270(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803fc4;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01358290  FUN_01358290  size=35  [run]
void FUN_01358290(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 013582C0  FUN_013582c0  size=17  [run]
undefined4 FUN_013582c0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 013582E0  FUN_013582e0  size=17  [run]
undefined4 FUN_013582e0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 01358300  FUN_01358300  size=34  [run]
undefined4 * __thiscall FUN_01358300(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01358350  FUN_01358350  size=43  [run]
void __thiscall FUN_01358350(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(*param_2 + 8))(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 01358380  FUN_01358380  size=38  [run]
void __fastcall FUN_01358380(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    _memset(*(void **)(param_1 + 0xc),0,*(int *)(param_1 + 8) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 013583B0  FUN_013583b0  size=193  [run]
void __thiscall FUN_013583b0(uint *param_1,uint param_2,uint param_3,uint param_4,float param_5)

{
  uint uVar1;
  float fVar2;
  uint local_c;
  
  uVar1 = *param_1;
  param_1[8] = param_2;
  param_1[9] = param_3;
  fVar2 = (float)(int)uVar1;
  param_1[10] = param_4;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_c = (uint)(longlong)ROUND(param_5 * fVar2);
  param_1[1] = (local_c >> 2) * 4;
  if (0x18fff < (local_c >> 2) * 0x20 + 0x1000) {
    local_c = (uint)(longlong)ROUND((98304.0 / ((fVar2 + fVar2) * 4.0)) * fVar2);
    param_1[1] = local_c & 0xfffffffc;
  }
  if (uVar1 <= param_1[1]) {
    param_1[1] = param_1[1] - 4;
  }
  return;
}

// 01358480  FUN_01358480  size=577  [run]
void __thiscall FUN_01358480(int *param_1,float *param_2,uint param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = param_4;
  fVar10 = (float)param_1[5];
  fVar15 = (float)(int)param_3;
  if ((int)param_3 < 0) {
    fVar15 = fVar15 + 4.2949673e+09;
  }
  uVar2 = param_1[2];
  fVar11 = (float)param_1[6];
  fVar12 = (float)param_1[7];
  uVar7 = param_1[4];
  iVar5 = uVar2 - *param_1;
  uVar4 = 0;
  fVar13 = ((float)param_1[8] - fVar10) / fVar15;
  fVar14 = ((float)param_1[9] - fVar11) / fVar15;
  fVar15 = ((float)param_1[10] - fVar12) / fVar15;
  if (3 < (int)param_3) {
    param_4 = (param_3 - 4 >> 2) + 1;
    uVar4 = param_4 * 4;
    pfVar8 = param_2;
    do {
      param_2 = pfVar8 + 4;
      fVar1 = *(float *)(iVar3 + ((iVar5 + uVar7) % uVar2) * 4);
      uVar6 = (uVar7 + 1) % uVar2;
      fVar9 = fVar1 * (fVar10 + fVar13) + *pfVar8;
      *(float *)(iVar3 + uVar7 * 4) = fVar9;
      *pfVar8 = fVar9 * (fVar12 + fVar15) + fVar1 * (fVar11 + fVar14);
      fVar10 = fVar10 + fVar13 + fVar13;
      fVar11 = fVar11 + fVar14 + fVar14;
      fVar12 = fVar12 + fVar15 + fVar15;
      fVar1 = *(float *)(iVar3 + ((iVar5 + uVar6) % uVar2) * 4);
      uVar7 = (uVar6 + 1) % uVar2;
      fVar9 = fVar1 * fVar10 + pfVar8[1];
      *(float *)(iVar3 + uVar6 * 4) = fVar9;
      pfVar8[1] = fVar9 * fVar12 + fVar1 * fVar11;
      fVar10 = fVar10 + fVar13;
      fVar11 = fVar11 + fVar14;
      fVar12 = fVar12 + fVar15;
      fVar1 = *(float *)(iVar3 + ((iVar5 + uVar7) % uVar2) * 4);
      uVar6 = (uVar7 + 1) % uVar2;
      fVar9 = fVar1 * fVar10 + pfVar8[2];
      *(float *)(iVar3 + uVar7 * 4) = fVar9;
      pfVar8[2] = fVar9 * fVar12 + fVar1 * fVar11;
      fVar10 = fVar10 + fVar13;
      fVar11 = fVar11 + fVar14;
      fVar12 = fVar12 + fVar15;
      fVar1 = *(float *)(iVar3 + ((iVar5 + uVar6) % uVar2) * 4);
      uVar7 = (uVar6 + 1) % uVar2;
      param_4 = param_4 + -1;
      fVar9 = fVar1 * fVar10 + pfVar8[3];
      *(float *)(iVar3 + uVar6 * 4) = fVar9;
      pfVar8[3] = fVar9 * fVar12 + fVar1 * fVar11;
      pfVar8 = param_2;
    } while (param_4 != 0);
  }
  if (uVar4 < param_3) {
    param_3 = param_3 - uVar4;
    uVar4 = uVar7;
    do {
      fVar10 = fVar10 + fVar13;
      fVar11 = fVar11 + fVar14;
      fVar12 = fVar12 + fVar15;
      fVar1 = *(float *)(iVar3 + ((iVar5 + uVar4) % uVar2) * 4);
      uVar7 = (uVar4 + 1) % uVar2;
      param_3 = param_3 + -1;
      fVar9 = fVar1 * fVar10 + *param_2;
      *(float *)(iVar3 + uVar4 * 4) = fVar9;
      *param_2 = fVar9 * fVar12 + fVar1 * fVar11;
      uVar4 = uVar7;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  param_1[5] = param_1[8];
  param_1[6] = param_1[9];
  param_1[4] = uVar7;
  param_1[7] = param_1[10];
  return;
}

// 013586D0  FUN_013586d0  size=404  [run]
uint __thiscall FUN_013586d0(int *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_14;
  
  fVar12 = (float)param_1[5];
  fVar3 = (float)param_3;
  if (param_3 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  uVar1 = param_1[2];
  fVar14 = (float)param_1[7];
  fVar13 = (float)param_1[6];
  uVar8 = param_1[4];
  iVar2 = *param_1;
  fVar9 = (float)param_1[10] - fVar14;
  fVar15 = (float)param_1[8] - fVar12;
  fVar16 = (float)param_1[9] - fVar13;
  uVar6 = uVar1 - iVar2;
  if (param_3 != 0) {
    fVar4 = (float)param_1[1];
    if (param_1[1] < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    iVar7 = param_4 - (int)param_2;
    param_4 = param_3;
    do {
      iVar5 = (uVar1 - iVar2) + uVar8;
      fVar10 = (float)iVar5;
      if (iVar5 < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      fVar10 = fVar10 + fVar4 * *(float *)(iVar7 + (int)param_2);
      local_14 = (uint)(longlong)ROUND(fVar10);
      fVar11 = (float)(int)local_14;
      if ((int)local_14 < 0) {
        fVar11 = fVar11 + 4.2949673e+09;
      }
      fVar10 = fVar10 - fVar11;
      fVar12 = fVar12 + fVar15 / fVar3;
      fVar14 = fVar14 + fVar9 / fVar3;
      fVar13 = fVar13 + fVar16 / fVar3;
      fVar10 = (1.0 - fVar10) * *(float *)(param_5 + (local_14 % uVar1) * 4) +
               *(float *)(param_5 + ((local_14 + 1) % uVar1) * 4) * fVar10;
      fVar11 = fVar10 * fVar12 + *param_2;
      *(float *)(param_5 + uVar8 * 4) = fVar11;
      uVar6 = (uVar8 + 1) / uVar1;
      uVar8 = (uVar8 + 1) % uVar1;
      param_4 = param_4 + -1;
      *param_2 = fVar11 * fVar14 + fVar10 * fVar13;
      param_2 = param_2 + 1;
    } while (param_4 != 0);
  }
  param_1[5] = param_1[8];
  param_1[4] = uVar8;
  param_1[6] = param_1[9];
  param_1[7] = param_1[10];
  return uVar6;
}

// 01358870  FUN_01358870  size=141  [run]
undefined4 __thiscall
FUN_01358870(uint *param_1,int *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  *param_1 = param_3 + 3 & 0xfffffffc;
  FUN_013583b0(param_5,param_6,param_7,param_8);
  param_1[5] = param_1[8];
  uVar1 = *param_1 * 2 + 0x400;
  param_1[6] = param_1[9];
  param_1[2] = uVar1;
  param_1[7] = param_1[10];
  uVar1 = (**(code **)(*param_2 + 4))(uVar1 * 4);
  param_1[3] = uVar1;
  if (uVar1 == 0) {
    return 0x34;
  }
  param_1[4] = 0;
  return 1;
}

// 01358900  FUN_01358900  size=53  [run]
void __thiscall FUN_01358900(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    FUN_013586d0(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  FUN_01358480(param_2,param_3,*(undefined4 *)(param_1 + 0xc));
  return;
}

// 01358950  FUN_01358950  size=235  [run]
void __thiscall FUN_01358950(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    iVar4 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      do {
        fVar5 = *param_2 * fVar2 - fVar3 * *param_1;
        *param_2 = fVar5;
        fVar5 = fVar2 * param_2[1] - fVar3 * fVar5;
        param_2[1] = fVar5;
        fVar6 = fVar2 * param_2[2] - fVar3 * fVar5;
        fVar5 = param_2[3] * fVar2 - fVar3 * fVar6;
        param_2[2] = fVar6;
        param_2[3] = fVar5;
        param_2 = param_2 + 4;
        *param_1 = fVar5;
      } while ((int)param_2 < (int)(pfVar1 + -3));
    }
    if (param_2 < pfVar1) {
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar5 = *param_1;
      do {
        fVar5 = *param_2 * fVar2 - fVar3 * fVar5;
        *param_2 = fVar5;
        param_2 = param_2 + 1;
      } while (param_2 < pfVar1);
      *param_1 = fVar5;
    }
  }
  return;
}

// 01358A40  FUN_01358a40  size=178  [run]
void FUN_01358a40(int param_1,float param_2,int param_3,float *param_4,float *param_5)

{
  float10 fVar1;
  
  if (param_1 == 0) {
    *param_5 = 0.0;
    *param_4 = 1.0;
  }
  else {
    if (param_1 == 1) {
      fVar1 = (float10)param_3;
      if (param_3 < 0) {
        fVar1 = fVar1 + (float10)4.2949673e+09;
      }
      fVar1 = (float10)fcos(((float10)param_2 / fVar1) * (float10)6.2831855);
      fVar1 = (float10)2.0 - fVar1;
      fVar1 = SQRT(fVar1 * fVar1 - (float10)1) - fVar1;
      *param_5 = (float)fVar1;
      *param_4 = (float)(fVar1 + (float10)1);
      return;
    }
    if (param_1 == 2) {
      fVar1 = (float10)param_3;
      if (param_3 < 0) {
        fVar1 = fVar1 + (float10)4.2949673e+09;
      }
      fVar1 = (float10)fcos(((float10)param_2 / fVar1) * (float10)6.2831855);
      fVar1 = fVar1 + (float10)2.0;
      fVar1 = fVar1 - SQRT(fVar1 * fVar1 - (float10)1);
      *param_5 = (float)fVar1;
      *param_4 = (float)((float10)1 - fVar1);
      return;
    }
  }
  return;
}

// 01358B00  FUN_01358b00  size=38  [run]
void __thiscall FUN_01358b00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01358a40(param_2,param_3,param_4,param_1 + 4,param_1 + 8);
  return;
}

// 01358B40  FUN_01358b40  size=490  [run]
void FUN_01358b40(uint param_1,float *param_2,void *param_3)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  for (uVar1 = param_1; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    uVar3 = uVar3 + 1;
  }
  _memset(param_3,0,uVar3 * 4);
  switch(param_2[2]) {
  case 0.0:
    iVar4 = 0;
    if ((param_1 & 2) != 0) {
      iVar4 = 2;
      *(float *)((int)param_3 + 4) = param_2[1];
      if ((param_1 & 4) != 0) {
        *(float *)((int)param_3 + 8) = param_2[1] * 0.5;
        iVar4 = 3;
      }
    }
    if ((param_1 & 0x10) != 0) {
      *(undefined4 *)((int)param_3 + iVar4 * 4) = 0;
      *(float *)((int)param_3 + iVar4 * 4 + 4) = param_2[1];
    }
    break;
  case 1.4013e-45:
    if ((param_1 & 0x10) != 0) {
      uVar1 = (param_1 & 4 | 8) >> 2;
      *(float *)((int)param_3 + uVar1 * 4) = param_2[1];
      *(float *)((int)param_3 + uVar1 * 4 + 4) = param_2[1];
    }
    break;
  case 2.8026e-45:
    if ((param_1 & 0x30) == 0) {
      if (((param_1 & 3) != 0) && (*(float *)((int)param_3 + 4) = param_2[1], (param_1 & 4) != 0)) {
        *(float *)((int)param_3 + 8) = param_2[1] * 0.5;
      }
    }
    else {
      *(float *)((int)param_3 + 4) = param_2[1] * 0.5;
      iVar4 = 2;
      if ((param_1 & 4) != 0) {
        *(float *)((int)param_3 + 8) = param_2[1] * 0.25;
        iVar4 = 3;
      }
      *(float *)((int)param_3 + iVar4 * 4) = param_2[1] * 0.5;
      *(float *)((int)param_3 + iVar4 * 4 + 4) = param_2[1];
    }
    break;
  case 4.2039e-45:
    uVar1 = 0;
    for (param_1 = param_1 & 0xfffffff7; param_1 != 0; param_1 = param_1 & param_1 - 1) {
      uVar1 = uVar1 + 1;
    }
    uVar5 = 1;
    if (1 < uVar1) {
      do {
        iVar4 = FUN_00fde949();
        uVar5 = uVar5 + 1;
        *(float *)((int)param_3 + uVar5 * 4 + -4) = (float)iVar4 * 3.051851e-05 * param_2[1];
      } while (uVar5 < uVar1);
    }
  }
  uVar1 = 0;
  if (3 < (int)uVar3) {
    iVar4 = (uVar3 - 4 >> 2) + 1;
    pfVar2 = (float *)((int)param_3 + 8);
    uVar1 = iVar4 * 4;
    do {
      pfVar2[-2] = pfVar2[-2] + *param_2;
      pfVar2[-1] = pfVar2[-1] + *param_2;
      *pfVar2 = *pfVar2 + *param_2;
      pfVar2[1] = *param_2 + pfVar2[1];
      pfVar2 = pfVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  for (; uVar1 < uVar3; uVar1 = uVar1 + 1) {
    *(float *)((int)param_3 + uVar1 * 4) = *(float *)((int)param_3 + uVar1 * 4) + *param_2;
  }
  return;
}

// 01358D80  FUN_01358d80  size=366  [run]
void __fastcall FUN_01358d80(float *param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (param_2 >> 2) * 4;
  fVar7 = (float)iVar4;
  pfVar1 = param_1 + param_2;
  if (iVar4 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = (param_4 - param_3) / fVar7;
  pfVar3 = param_1 + (param_2 >> 2) * 4;
  fVar2 = fVar7 * 4.0;
  fVar5 = fVar7 + param_3;
  fVar6 = fVar5 + fVar7;
  fVar7 = fVar6 + fVar7;
  fVar8 = param_3;
  for (; param_1 < pfVar3; param_1 = param_1 + 4) {
    *param_1 = *param_1 * fVar8;
    param_1[1] = param_1[1] * fVar5;
    param_1[2] = param_1[2] * fVar6;
    param_1[3] = param_1[3] * fVar7;
    fVar8 = fVar8 + fVar2;
    fVar5 = fVar5 + fVar2;
    fVar6 = fVar6 + fVar2;
    fVar7 = fVar7 + fVar2;
  }
  if (param_1 < pfVar1) {
    fVar7 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = (param_4 - param_3) / fVar7;
    iVar4 = (int)pfVar1 + (3 - (int)param_1);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        *param_1 = *param_1 * param_3;
        param_1[1] = (fVar7 + param_3) * param_1[1];
        param_3 = fVar7 + fVar7 + param_3;
        param_1[2] = param_1[2] * param_3;
        param_3 = fVar7 + param_3;
        param_1[3] = param_1[3] * param_3;
        param_1 = param_1 + 4;
        param_3 = fVar7 + param_3;
      } while ((int)param_1 < (int)(pfVar1 + -3));
    }
    if (param_1 < pfVar1) {
      do {
        *param_1 = *param_1 * param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + fVar7;
      } while (param_1 < pfVar1);
      return;
    }
  }
  return;
}

// 01358EF0  FUN_01358ef0  size=181  [run]
void __fastcall FUN_01358ef0(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 01358FC0  FUN_01358fc0  size=115  [run]
undefined4 __thiscall
FUN_01358fc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  for (uVar1 = param_5[1] & 0x3ffff; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(param_1 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0xc) = *param_5;
  *(undefined4 *)(param_1 + 4) = param_4;
  fVar3 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x10) = (float)fVar3;
  fVar3 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x14) = (float)fVar3;
  return 1;
}

// 01359050  FUN_01359050  size=27  [run]
undefined4 FUN_01359050(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01359070  FUN_01359070  size=154  [run]
void FUN_01359070(float param_1,float param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  int unaff_ESI;
  
  uVar2 = 0;
  for (uVar1 = *(uint *)(unaff_ESI + 4); uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    uVar2 = uVar2 + 1;
  }
  if ((param_3 == '\0') && ((*(uint *)(unaff_ESI + 4) & 8) != 0)) {
    uVar2 = uVar2 - 1;
  }
  uVar1 = 0;
  if (param_2 == param_1) {
    if (uVar2 != 0) {
      do {
        FUN_01358ef0();
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
      return;
    }
  }
  else if (uVar2 != 0) {
    do {
      FUN_01358d80(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}

// 01359110  FUN_01359110  size=92  [run]
void FUN_01359110(float param_1,float param_2)

{
  uint uVar1;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 4);
  if ((uVar1 & 8) != 0) {
    for (; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    }
    if (param_2 == param_1) {
      FUN_01358ef0();
      return;
    }
    FUN_01358d80(param_1,param_2);
  }
  return;
}

// 01359170  FUN_01359170  size=39  [run]
undefined4 __thiscall FUN_01359170(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 013591A0  FUN_013591a0  size=146  [run]
void __thiscall FUN_013591a0(int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 8) != 0) && (*(short *)(param_2 + 0xe) != 0)) {
    fVar1 = (float10)FUN_00fdc1f0();
    fVar2 = (float10)FUN_00fdc1f0();
    FUN_01359070(*(undefined4 *)(param_1 + 0x10),(float)fVar1,0);
    FUN_01359110(*(undefined4 *)(param_1 + 0x14),(float)fVar2);
    *(float *)(param_1 + 0x10) = (float)fVar1;
    *(float *)(param_1 + 0x14) = (float)fVar2;
  }
  return;
}

// 01359250  FUN_01359250  size=31  [run]
undefined4 * FUN_01359250(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01803fe8;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01359270  FUN_01359270  size=35  [run]
void FUN_01359270(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 013592B0  FUN_013592b0  size=34  [run]
undefined4 * __thiscall FUN_013592b0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 013592F0  FUN_013592f0  size=48  [run]
undefined4 __thiscall FUN_013592f0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return uVar1;
}

// 01359320  FUN_01359320  size=58  [run]
undefined4 __thiscall FUN_01359320(int param_1,short param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 4) = *param_3;
      return 1;
    }
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 8) = *param_3;
      return 1;
    }
  }
  return 0x1f;
}

// 01359360  FUN_01359360  size=30  [run]
void __thiscall FUN_01359360(undefined4 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_01804004;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  return;
}

// 01359380  FUN_01359380  size=52  [run]
undefined4 * __thiscall FUN_01359380(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01804004;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 013593C0  FUN_013593c0  size=39  [run]
undefined4 __thiscall FUN_013593c0(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 013593F0  FUN_013593f0  size=26  [run]
undefined4 __thiscall FUN_013593f0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  return 1;
}

// 01359420  FUN_01359420  size=31  [run]
undefined4 * FUN_01359420(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01804004;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 01359440  FUN_01359440  size=35  [run]
void FUN_01359440(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01359470  FUN_01359470  size=34  [run]
undefined4 * __thiscall FUN_01359470(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01359530  FUN_01359530  size=41  [run]
void __thiscall FUN_01359530(int param_1,float param_2,int param_3)

{
  float fVar1;
  
  fVar1 = (float)param_3;
  if (param_3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(param_1 + 8) = 1.0 - (param_2 * 6.2831855) / fVar1;
  return;
}

// 01359580  FUN_01359580  size=150  [run]
undefined4 __thiscall FUN_01359580(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  iVar2 = (**(code **)(*param_2 + 4))(*(int *)(param_1 + 0xf4) * 0xc);
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      iVar2 = 0;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar2);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
        }
        fVar1 = (float)*(int *)(param_1 + 0xf8);
        if (*(int *)(param_1 + 0xf8) < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xc;
        *(float *)(*(int *)(param_1 + 0xc) + -4 + iVar2) = 1.0 - 251.32742 / fVar1;
      } while (uVar4 < *(uint *)(param_1 + 0xf4));
    }
    return 1;
  }
  return 0x34;
}

// 01359620  FUN_01359620  size=188  [run]
void __thiscall FUN_01359620(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)(param_2 + 0xc);
  do {
    if (*(char *)((int)puVar1 + 5) != '\0') {
      FUN_0135a730(uVar2,*(undefined4 *)(param_1 + 0xf8),puVar1[-3],puVar1[-1],puVar1[-2],*puVar1);
      FUN_0135a790(uVar2,*(undefined1 *)(puVar1 + 1));
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 5;
  } while (uVar2 < 3);
  uVar2 = 0;
  puVar1 = (undefined4 *)(param_2 + 0x48);
  do {
    if (*(char *)((int)puVar1 + 5) != '\0') {
      FUN_0135a730(uVar2,*(undefined4 *)(param_1 + 0xf8),puVar1[-3],puVar1[-1],puVar1[-2],*puVar1);
      FUN_0135a790(uVar2,*(undefined1 *)(puVar1 + 1));
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 5;
  } while (uVar2 < 3);
  return;
}

// 013596E0  FUN_013596e0  size=67  [run]
undefined4 __fastcall FUN_013596e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0135a700();
  FUN_0135a700();
  uVar2 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar1 + 4 + iVar3) = 0;
      *(undefined4 *)(iVar1 + iVar3) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar2 < *(uint *)(param_1 + 0xf4));
  }
  return 1;
}

// 01359730  FUN_01359730  size=27  [run]
undefined4 FUN_01359730(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01359750  FUN_01359750  size=240  [run]
int __thiscall
FUN_01359750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 8) = param_2;
  iVar2 = 0;
  for (uVar1 = param_5[1] & 0x3ffff; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(param_1 + 0xf4) = iVar2;
  *(undefined4 *)(param_1 + 0xf8) = *param_5;
  iVar2 = FUN_0135a620(param_2,*(undefined2 *)(param_1 + 0xf4),3);
  if (((iVar2 == 1) && (iVar2 = FUN_0135a620(param_2,*(undefined2 *)(param_1 + 0xf4),3), iVar2 == 1)
      ) && (iVar2 = FUN_01359580(param_2), iVar2 == 1)) {
    FUN_0135a3e0(param_1 + 0x60);
    FUN_01359620(param_1 + 0x60);
    FUN_0135acb0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                 *(undefined4 *)(param_1 + 0xe0),1);
    FUN_0135a8f0(*(undefined4 *)(param_1 + 0xe4),1);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xec);
    iVar2 = 1;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xf0);
  }
  return iVar2;
}

// 01359840  FUN_01359840  size=83  [run]
undefined4 __thiscall FUN_01359840(undefined4 *param_1,int *param_2)

{
  FUN_0135a6d0(param_2);
  FUN_0135a6d0(param_2);
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 8))(param_1[3]);
    param_1[3] = 0;
  }
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 013598A0  FUN_013598a0  size=612  [run]
void __thiscall FUN_013598a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  piVar2 = param_2;
  FUN_0135a3e0(param_1 + 0x60);
  FUN_01359620(param_1 + 0x60);
  if (*(char *)(param_1 + 0xe8) != '\0') {
    FUN_0135acb0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                 *(undefined4 *)(param_1 + 0xe0),0);
    FUN_0135a8f0(*(undefined4 *)(param_1 + 0xe4),0);
  }
  if (*(short *)((int)param_2 + 0xe) != 0) {
    FUN_01351770();
    uVar3 = (uint)*(ushort *)(param_2 + 3);
    uVar5 = (uint)*(ushort *)((int)param_2 + 0xe);
    pvVar4 = (void *)(**(code **)(**(int **)(param_1 + 8) + 4))
                               (*(int *)(param_1 + 0xf4) * uVar3 * 4);
    if (pvVar4 != (void *)0x0) {
      uVar6 = 0;
      if (*(int *)(param_1 + 0xf4) != 0) {
        param_2 = pvVar4;
        do {
          FID_conflict__memcpy
                    (param_2,(void *)(*piVar2 + *(ushort *)(piVar2 + 3) * uVar6 * 4),uVar5 * 4);
          param_2 = (int *)((int)param_2 + uVar3 * 4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0xf4));
      }
      FUN_0135a870(piVar2);
      FUN_0135b5d0(piVar2);
      FUN_0135abc0(piVar2);
      FUN_0135a870(piVar2);
      fVar7 = (100.0 - *(float *)(param_1 + 0xf0)) * 0.01;
      fVar8 = (100.0 - *(float *)(param_1 + 0x100)) * 0.01;
      uVar6 = 0;
      if (*(int *)(param_1 + 0xf4) != 0) {
        param_2 = pvVar4;
        do {
          iVar1 = *piVar2 + *(ushort *)(piVar2 + 3) * uVar6 * 4;
          FUN_01353440(iVar1,param_2,*(float *)(param_1 + 0xfc) * (1.0 - fVar8),
                       *(float *)(param_1 + 0xec) * (1.0 - fVar7),*(float *)(param_1 + 0xfc) * fVar8
                       ,*(float *)(param_1 + 0xec) * fVar7,uVar5);
          FUN_0135b740(iVar1,uVar5);
          param_2 = (int *)((int)param_2 + uVar3 * 4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0xf4));
      }
      (**(code **)(**(int **)(param_1 + 8) + 8))(pvVar4);
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xec);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xf0);
    }
  }
  return;
}

// 01359B10  FUN_01359b10  size=66  [run]
undefined4 * __fastcall FUN_01359b10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01804020;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0135a600();
  FUN_0135a600();
  FUN_0135ac80();
  FUN_0135a8d0();
  FUN_01359bf0();
  return param_1;
}

// 01359B60  FUN_01359b60  size=89  [run]
undefined4 * FUN_01359b60(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x104);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01804020;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_0135a600();
    FUN_0135a600();
    FUN_0135ac80();
    FUN_0135a8d0();
    FUN_01359bf0();
    puVar2 = puVar1;
  }
  return puVar2;
}

// 01359BC0  FUN_01359bc0  size=35  [run]
void FUN_01359bc0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 01359BF0  FUN_01359bf0  size=231  [run]
void __fastcall FUN_01359bf0(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0x447a0000;
  param_1[6] = 0;
  param_1[7] = 0x447a0000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x447a0000;
  param_1[3] = 0x3f800000;
  *(undefined2 *)(param_1 + 4) = 0x100;
  param_1[8] = 0x3f800000;
  *(undefined2 *)(param_1 + 9) = 0x100;
  param_1[0xd] = 0x3f800000;
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x447a0000;
  param_1[0x15] = 0;
  param_1[0x16] = 0x447a0000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x447a0000;
  param_1[0xf] = 0;
  param_1[0x12] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x13) = 0x100;
  param_1[0x14] = 0;
  param_1[0x17] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x18) = 0x100;
  param_1[0x19] = 0;
  param_1[0x1c] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1d) = 0x100;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x42480000;
  param_1[0x20] = 0x42480000;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x42c80000;
  return;
}

// 01359CE0  FUN_01359ce0  size=44  [run]
undefined4 __fastcall FUN_01359ce0(undefined4 param_1)

{
  FUN_0135a600();
  FUN_0135a600();
  FUN_0135ac80();
  FUN_0135a8d0();
  FUN_01359bf0();
  return param_1;
}

// 01359D20  FUN_01359d20  size=34  [run]
undefined4 * __thiscall FUN_01359d20(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01359D50  FUN_01359d50  size=13  [run]
void __thiscall FUN_01359d50(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x11) = param_2;
  return;
}

// 01359D60  FUN_01359d60  size=13  [run]
void __thiscall FUN_01359d60(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}

// 01359D80  FUN_01359d80  size=35  [run]
undefined4 __thiscall FUN_01359d80(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
    return uVar1;
  }
  return 1;
}

// 01359DB0  FUN_01359db0  size=833  [run]
undefined4 __thiscall FUN_01359db0(int param_1,short param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_c;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  iVar2 = (int)param_2;
  if (param_2 < 0x3c) {
    iVar3 = iVar2 / 10;
    if (param_2 < 0) {
      if (param_2 < 0x1e) {
        return 0x1f;
      }
    }
    else if (param_2 < 0x1e) {
      switch(iVar2 % 10) {
      case 0:
        fVar1 = *param_3;
        param_1 = param_1 + iVar3 * 0x14;
        *(undefined1 *)(param_1 + 0x15) = 1;
        local_c = (undefined4)(longlong)ROUND(fVar1);
        *(undefined4 *)(param_1 + 4) = local_c;
        return 1;
      case 1:
        param_1 = param_1 + iVar3 * 0x14;
        *(float *)(param_1 + 8) = *param_3;
        *(undefined1 *)(param_1 + 0x15) = 1;
        return 1;
      case 2:
        param_1 = param_1 + iVar3 * 0x14;
        *(float *)(param_1 + 0xc) = *param_3;
        *(undefined1 *)(param_1 + 0x15) = 1;
        return 1;
      case 3:
        param_1 = param_1 + iVar3 * 0x14;
        *(float *)(param_1 + 0x10) = *param_3;
        *(undefined1 *)(param_1 + 0x15) = 1;
        return 1;
      case 4:
        goto switchD_01359e0a_caseD_4;
      default:
        return 0x1f;
      }
    }
    iVar3 = (iVar2 + -0x1e) / 10;
    switch(iVar2 % 10) {
    case 0:
      local_c = (undefined4)(longlong)ROUND(*param_3);
      *(undefined4 *)(param_1 + 0x40 + iVar3 * 0x14) = local_c;
      *(undefined1 *)(param_1 + 0x51 + iVar3 * 0x14) = 1;
      return 1;
    case 1:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x51 + iVar3 * 0x14) = 1;
      *(float *)(param_1 + 0x44 + iVar3 * 0x14) = fVar1;
      return 1;
    case 2:
      *(float *)(param_1 + 0x48 + iVar3 * 0x14) = *param_3;
      *(undefined1 *)(param_1 + 0x51 + iVar3 * 0x14) = 1;
      return 1;
    case 3:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x51 + iVar3 * 0x14) = 1;
      *(float *)(param_1 + 0x4c + iVar3 * 0x14) = fVar1;
      return 1;
    case 4:
      if (*param_3 != (float)(undefined *)0x0) {
        *(undefined1 *)(param_1 + (iVar3 * 5 + 0x14) * 4) = 1;
        *(undefined1 *)(param_1 + 0x51 + iVar3 * 0x14) = 1;
        return 1;
      }
      *(undefined1 *)(param_1 + (iVar3 * 5 + 0x14) * 4) = 0;
      *(undefined1 *)(param_1 + 0x51 + iVar3 * 0x14) = 1;
      return 1;
    }
  }
  else {
    switch(iVar2) {
    case 0x3c:
      fVar1 = *param_3;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      local_c = (undefined4)(longlong)ROUND(fVar1);
      *(undefined4 *)(param_1 + 0x7c) = local_c;
      return 1;
    case 0x3d:
      *(float *)(param_1 + 0x80) = *param_3;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      return 1;
    case 0x3e:
      *(float *)(param_1 + 0x84) = *param_3;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      return 1;
    case 0x3f:
      *(float *)(param_1 + 0x88) = *param_3;
      *(undefined1 *)(param_1 + 0x8c) = 1;
      return 1;
    case 0x40:
      fVar4 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x90) = (float)fVar4;
      return 1;
    case 0x41:
      *(float *)(param_1 + 0x94) = *param_3;
      return 1;
    }
  }
  return 0x1f;
switchD_01359e0a_caseD_4:
  if (*param_3 != (float)(undefined *)0x0) {
    param_1 = param_1 + iVar3 * 0x14;
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x15) = 1;
    return 1;
  }
  param_1 = param_1 + iVar3 * 0x14;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return 1;
}

// 0135A140  FUN_0135a140  size=72  [run]
undefined4 * __thiscall FUN_0135a140(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_0180403c;
  FUN_01359bf0();
  iVar1 = 0x25;
  puVar2 = param_1;
  while( true ) {
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar2 = *param_2;
  }
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  *(undefined1 *)((int)param_1 + 0x65) = 1;
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)(param_1 + 0x23) = 1;
  return param_1;
}

// 0135A190  FUN_0135a190  size=98  [run]
undefined4 * __thiscall FUN_0135a190(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x98);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180403c;
    FUN_01359bf0();
    iVar2 = 0x25;
    puVar3 = puVar1;
    while( true ) {
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      *puVar3 = *param_1;
    }
    *(undefined1 *)((int)puVar1 + 0x15) = 1;
    *(undefined1 *)((int)puVar1 + 0x29) = 1;
    *(undefined1 *)((int)puVar1 + 0x3d) = 1;
    *(undefined1 *)((int)puVar1 + 0x51) = 1;
    *(undefined1 *)((int)puVar1 + 0x65) = 1;
    *(undefined1 *)((int)puVar1 + 0x79) = 1;
    *(undefined1 *)(puVar1 + 0x23) = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0135A200  FUN_0135a200  size=39  [run]
undefined4 __thiscall FUN_0135a200(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 0135A230  FUN_0135a230  size=418  [run]
undefined4 __thiscall FUN_0135a230(int param_1,undefined4 *param_2)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)param_2 + 0x1d);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((int)param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)((int)param_2 + 0x32);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((int)param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((int)param_2 + 0x37);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((int)param_2 + 0x3b);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((int)param_2 + 0x3f);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)((int)param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x54) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x58) = param_2[0x12];
  *(undefined4 *)(param_1 + 0x5c) = param_2[0x13];
  *(undefined4 *)(param_1 + 0x60) = param_2[0x14];
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((int)param_2 + 0x55);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((int)param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((int)param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((int)param_2 + 0x61);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)((int)param_2 + 0x65);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((int)param_2 + 0x66);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)((int)param_2 + 0x6a);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((int)param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((int)param_2 + 0x72);
  fVar1 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x90) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)((int)param_2 + 0x7a);
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined1 *)(param_1 + 0x3d) = 1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined1 *)(param_1 + 0x65) = 1;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return 1;
}

// 0135A3E0  FUN_0135a3e0  size=52  [run]
void __thiscall FUN_0135a3e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x25; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    param_2 = param_2 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined1 *)((int)param_1 + 0x65) = 0;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}

// 0135A420  FUN_0135a420  size=47  [run]
undefined4 * __fastcall FUN_0135a420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0180403c;
  FUN_01359bf0();
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  *(undefined1 *)((int)param_1 + 0x51) = 1;
  *(undefined1 *)((int)param_1 + 0x65) = 1;
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)(param_1 + 0x23) = 1;
  return param_1;
}

// 0135A450  FUN_0135a450  size=75  [run]
undefined4 * FUN_0135a450(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x98);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180403c;
    FUN_01359bf0();
    *(undefined1 *)((int)puVar1 + 0x15) = 1;
    *(undefined1 *)((int)puVar1 + 0x29) = 1;
    *(undefined1 *)((int)puVar1 + 0x3d) = 1;
    *(undefined1 *)((int)puVar1 + 0x51) = 1;
    *(undefined1 *)((int)puVar1 + 0x65) = 1;
    *(undefined1 *)((int)puVar1 + 0x79) = 1;
    *(undefined1 *)(puVar1 + 0x23) = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0135A4A0  FUN_0135a4a0  size=34  [run]
void __thiscall FUN_0135a4a0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x15) = param_2;
  *(undefined1 *)(param_1 + 0x29) = param_2;
  *(undefined1 *)(param_1 + 0x3d) = param_2;
  *(undefined1 *)(param_1 + 0x51) = param_2;
  *(undefined1 *)(param_1 + 0x65) = param_2;
  *(undefined1 *)(param_1 + 0x79) = param_2;
  *(undefined1 *)(param_1 + 0x8c) = param_2;
  return;
}

// 0135A4D0  FUN_0135a4d0  size=35  [run]
void FUN_0135a4d0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 0135A500  FUN_0135a500  size=17  [run]
undefined4 FUN_0135a500(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 0135A520  FUN_0135a520  size=17  [run]
undefined4 FUN_0135a520(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 0135A540  FUN_0135a540  size=34  [run]
undefined4 * __thiscall FUN_0135a540(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0135A600  FUN_0135a600  size=28  [run]
void __fastcall FUN_0135a600(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  return;
}

// 0135A620  FUN_0135a620  size=165  [run]
undefined4 __thiscall FUN_0135a620(int *param_1,int *param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *(ushort *)((int)param_1 + 0xe) = param_3;
  *(ushort *)(param_1 + 3) = param_4;
  iVar1 = (uint)param_3 * (uint)param_4;
  param_1[1] = iVar1;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_2 + 4))(iVar1 * 0x24);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
    uVar3 = 0;
    if (param_1[1] != 0) {
      iVar1 = 0;
      do {
        puVar2 = (undefined4 *)(*param_1 + iVar1);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0x3f800000;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0x24;
      } while (uVar3 < (uint)param_1[1]);
    }
  }
  return 1;
}

// 0135A6D0  FUN_0135a6d0  size=34  [run]
void __thiscall FUN_0135a6d0(int *param_1,int *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 8))(*param_1);
    *param_1 = 0;
  }
  return;
}

// 0135A700  FUN_0135a700  size=38  [run]
void __fastcall FUN_0135a700(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = 0;
    do {
      FUN_0135be70();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  return;
}

// 0135A730  FUN_0135a730  size=88  [run]
void __thiscall
FUN_0135a730(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)(param_1 + 0xe) != 0) {
    do {
      FUN_0135b9d0(param_4,param_3,param_5,param_6,param_7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 0xe));
  }
  return;
}

// 0135A790  FUN_0135a790  size=37  [run]
void __thiscall FUN_0135a790(int param_1,byte param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 & 0x1f);
  if (param_3 != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar1;
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~uVar1;
  return;
}

// 0135A7C0  FUN_0135a7c0  size=168  [run]
uint __thiscall FUN_0135a7c0(int param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  uVar5 = 0;
  for (uVar4 = param_3[1]; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
    uVar5 = uVar5 + 1;
  }
  uVar1 = *(ushort *)((int)param_3 + 0xe);
  local_8 = 0;
  uVar4 = (uint)uVar1;
  if (uVar5 != 0) {
    do {
      uVar2 = *(ushort *)(param_3 + 3);
      iVar3 = *param_3;
      uVar4 = *(ushort *)(param_1 + 0xc) * local_8;
      uVar6 = 0;
      if (*(ushort *)(param_1 + 0xc) != 0) {
        do {
          if ((*(uint *)(param_1 + 8) & 1 << ((byte)uVar6 & 0x1f)) != 0) {
            FUN_0135be90(iVar3 + uVar2 * local_8 * 4,(uint)uVar1);
          }
          uVar4 = (uint)*(ushort *)(param_1 + 0xc);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar5);
  }
  return uVar4;
}

// 0135A870  FUN_0135a870  size=19  [run]
void __thiscall FUN_0135a870(undefined4 *param_1,undefined4 param_2)

{
  FUN_0135a7c0(*param_1,param_2);
  return;
}

// 0135A8B0  FUN_0135a8b0  size=20  [run]
void FUN_0135a8b0(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 0135A8D0  FUN_0135a8d0  size=32  [run]
void __fastcall FUN_0135a8d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 0135A8F0  FUN_0135a8f0  size=128  [run]
void __thiscall FUN_0135a8f0(float *param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == (float)(undefined *)0x0) {
    param_1[4] = 0.0;
  }
  else if (50.0 < param_2) {
    param_1[4] = 2.8026e-45;
  }
  else {
    param_1[4] = 1.4013e-45;
  }
  fVar1 = param_2;
  if (50.0 <= param_2) {
    fVar1 = 50.0;
  }
  fVar2 = (50.0 - fVar1) * -0.02;
  fVar1 = (param_2 - 50.0) * 0.02;
  *param_1 = fVar2;
  param_1[2] = fVar1;
  if (param_3 != '\0') {
    param_1[1] = fVar2;
    param_1[3] = fVar1;
  }
  return;
}

// 0135A970  FUN_0135a970  size=583  [run]
void __thiscall FUN_0135a970(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = param_1[1];
  pfVar1 = param_2 + param_3;
  if (param_1[4] == 1.4013e-45) {
    fVar8 = (float)param_3;
    if (param_3 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = (*param_1 - fVar4) / fVar8;
    if (param_2 < pfVar1) {
      iVar3 = (int)pfVar1 + (3 - (int)param_2);
      if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
        do {
          fVar6 = *param_2;
          if (*param_2 <= fVar4) {
            fVar6 = fVar4;
          }
          *param_2 = fVar6;
          fVar4 = fVar4 + fVar8;
          fVar6 = param_2[1];
          if (param_2[1] <= fVar4) {
            fVar6 = fVar4;
          }
          param_2[1] = fVar6;
          fVar4 = fVar4 + fVar8;
          fVar6 = param_2[2];
          if (param_2[2] <= fVar4) {
            fVar6 = fVar4;
          }
          param_2[2] = fVar6;
          fVar4 = fVar4 + fVar8;
          fVar6 = param_2[3];
          if (param_2[3] <= fVar4) {
            fVar6 = fVar4;
          }
          param_2[3] = fVar6;
          param_2 = param_2 + 4;
          fVar4 = fVar4 + fVar8;
        } while ((int)param_2 < (int)(pfVar1 + -3));
      }
      if (param_2 < pfVar1) {
        do {
          fVar6 = *param_2;
          if (*param_2 <= fVar4) {
            fVar6 = fVar4;
          }
          *param_2 = fVar6;
          param_2 = param_2 + 1;
          fVar4 = fVar4 + fVar8;
        } while (param_2 < pfVar1);
        return;
      }
    }
  }
  else {
    fVar8 = (float)param_3;
    if (param_3 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar6 = param_1[3];
    fVar7 = (*param_1 - fVar4) / fVar8;
    fVar8 = (param_1[2] - fVar6) / fVar8;
    if (param_2 < pfVar1) {
      iVar3 = (int)pfVar1 + (3 - (int)param_2);
      if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
        do {
          fVar2 = *param_2;
          fVar5 = fVar4;
          if (fVar4 < fVar2) {
            fVar5 = fVar2;
          }
          fVar4 = fVar4 + fVar7;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * fVar6;
          }
          fVar2 = param_2[1];
          *param_2 = fVar5;
          fVar5 = fVar4;
          if (fVar4 < fVar2) {
            fVar5 = fVar2;
          }
          fVar4 = fVar4 + fVar7;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * (fVar6 + fVar8);
          }
          fVar2 = param_2[2];
          fVar6 = fVar6 + fVar8 + fVar8;
          param_2[1] = fVar5;
          fVar5 = fVar4;
          if (fVar4 < fVar2) {
            fVar5 = fVar2;
          }
          fVar4 = fVar4 + fVar7;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * fVar6;
          }
          fVar2 = param_2[3];
          fVar6 = fVar6 + fVar8;
          param_2[2] = fVar5;
          fVar5 = fVar4;
          if (fVar4 < fVar2) {
            fVar5 = fVar2;
          }
          fVar4 = fVar4 + fVar7;
          if (fVar2 <= 0.0) {
            fVar5 = fVar5 - fVar2 * fVar6;
          }
          param_2[3] = fVar5;
          param_2 = param_2 + 4;
          fVar6 = fVar6 + fVar8;
        } while ((int)param_2 < (int)(pfVar1 + -3));
      }
      for (; param_2 < pfVar1; param_2 = param_2 + 1) {
        fVar2 = *param_2;
        fVar5 = fVar4;
        if (fVar4 < fVar2) {
          fVar5 = fVar2;
        }
        fVar4 = fVar4 + fVar7;
        if (fVar2 <= 0.0) {
          fVar5 = fVar5 - fVar2 * fVar6;
        }
        *param_2 = fVar5;
        fVar6 = fVar6 + fVar8;
      }
    }
  }
  return;
}

// 0135ABC0  FUN_0135abc0  size=93  [run]
void __thiscall FUN_0135abc0(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  uint uVar3;
  
  if (param_1[4] != 0) {
    uVar3 = 0;
    for (uVar2 = param_2[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_0135a970(*param_2 + *(ushort *)(param_2 + 3) * uVar2 * 4,uVar1);
        uVar2 = uVar2 + 1;
        param_1 = extraout_ECX;
      } while (uVar2 < uVar3);
    }
  }
  param_1[1] = *param_1;
  param_1[3] = param_1[2];
  return;
}

// 0135AC40  FUN_0135ac40  size=20  [run]
void FUN_0135ac40(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 0135AC60  FUN_0135ac60  size=20  [run]
void FUN_0135ac60(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 0135AC80  FUN_0135ac80  size=42  [run]
void __fastcall FUN_0135ac80(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 0135ACB0  FUN_0135acb0  size=107  [run]
void __thiscall
FUN_0135acb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  float10 fVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  fVar1 = (float10)FUN_00fdc1f0();
  fVar1 = fVar1 * (float10)4.0 - (float10)3.0;
  param_1[5] = param_4;
  param_1[3] = (float)fVar1;
  if (param_5 != '\0') {
    param_1[2] = param_3;
    param_1[4] = (float)fVar1;
    param_1[6] = param_4;
  }
  return;
}

// 0135AD20  FUN_0135ad20  size=1058  [run]
void __thiscall FUN_0135ad20(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = (float)param_3;
  fVar6 = (*(float *)(param_1 + 0x18) * 0.01 * 0.3333333 + 0.6666666) * *(float *)(param_1 + 0x10);
  if (param_3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar9 = ((*(float *)(param_1 + 0x14) * 0.01 * 0.3333333 + 0.6666666) * *(float *)(param_1 + 0xc) -
          fVar6) / fVar2;
  fVar5 = (float10)FUN_00fdc1f0();
  fVar8 = (float)fVar5;
  fVar5 = (float10)FUN_00fdc1f0();
  pfVar1 = param_2 + param_3;
  fVar2 = (float)((fVar5 - (float10)fVar8) / (float10)fVar2);
  if (param_2 < pfVar1) {
    iVar4 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        fVar3 = ABS(*param_2 * fVar6);
        if (0.6666666 < fVar3) {
          fVar7 = 1.0;
        }
        else {
          fVar7 = 2.0 - fVar3 * 3.0;
          fVar7 = (3.0 - fVar7 * fVar7) * 0.3333333;
        }
        if (fVar3 <= 0.3333333) {
          fVar7 = fVar3 * 2.0;
        }
        if (*param_2 * fVar6 <= 0.0) {
          fVar7 = -fVar7;
        }
        fVar10 = param_2[1] * (fVar6 + fVar9);
        fVar6 = fVar6 + fVar9 + fVar9;
        fVar3 = ABS(fVar10);
        *param_2 = fVar7 * fVar8;
        if (0.6666666 < fVar3) {
          fVar7 = 1.0;
        }
        else {
          fVar7 = 2.0 - fVar3 * 3.0;
          fVar7 = (3.0 - fVar7 * fVar7) * 0.3333333;
        }
        if (fVar3 <= 0.3333333) {
          fVar7 = fVar3 * 2.0;
        }
        if (fVar10 <= 0.0) {
          fVar7 = -fVar7;
        }
        fVar11 = param_2[2] * fVar6;
        fVar6 = fVar6 + fVar9;
        fVar10 = fVar8 + fVar2 + fVar2;
        fVar3 = ABS(fVar11);
        param_2[1] = fVar7 * (fVar8 + fVar2);
        if (0.6666666 < fVar3) {
          fVar8 = 1.0;
        }
        else {
          fVar8 = 2.0 - fVar3 * 3.0;
          fVar8 = (3.0 - fVar8 * fVar8) * 0.3333333;
        }
        if (fVar3 <= 0.3333333) {
          fVar8 = fVar3 * 2.0;
        }
        if (fVar11 <= 0.0) {
          fVar8 = -fVar8;
        }
        fVar11 = param_2[3] * fVar6;
        fVar6 = fVar6 + fVar9;
        fVar7 = fVar10 + fVar2;
        fVar3 = ABS(fVar11);
        param_2[2] = fVar8 * fVar10;
        if (0.6666666 < fVar3) {
          fVar10 = 1.0;
        }
        else {
          fVar8 = 2.0 - fVar3 * 3.0;
          fVar10 = (3.0 - fVar8 * fVar8) * 0.3333333;
        }
        if (fVar3 <= 0.3333333) {
          fVar10 = fVar3 * 2.0;
        }
        if (fVar11 <= 0.0) {
          fVar10 = -fVar10;
        }
        fVar8 = fVar7 + fVar2;
        param_2[3] = fVar10 * fVar7;
        param_2 = param_2 + 4;
      } while ((int)param_2 < (int)(pfVar1 + -3));
    }
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      fVar7 = *param_2 * fVar6;
      fVar6 = fVar6 + fVar9;
      fVar3 = ABS(fVar7);
      if (0.6666666 < fVar3) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = 2.0 - fVar3 * 3.0;
        fVar10 = (3.0 - fVar10 * fVar10) * 0.3333333;
      }
      if (fVar3 <= 0.3333333) {
        fVar10 = fVar3 * 2.0;
      }
      if (fVar7 <= 0.0) {
        fVar10 = -fVar10;
      }
      fVar10 = fVar10 * fVar8;
      fVar8 = fVar8 + fVar2;
      *param_2 = fVar10;
    }
  }
  return;
}

// 0135B150  FUN_0135b150  size=269  [run]
void __thiscall FUN_0135b150(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = *(float *)(param_1 + 0x10);
  fVar2 = (float)param_3;
  if (param_3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar9 = *(float *)(param_1 + 0xc) - fVar10;
  fVar3 = (float10)FUN_00fdc1f0();
  fVar11 = (float)fVar3;
  fVar3 = (float10)FUN_00fdc1f0();
  fVar4 = (float10)fVar11;
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    do {
      fVar7 = *param_2 * fVar10;
      fVar10 = fVar10 + fVar9 / fVar2;
      fVar6 = (float10)1.4426950408889634 * -ABS((float10)fVar7);
      fVar5 = ROUND(fVar6);
      fVar6 = (float10)f2xm1(fVar6 - fVar5);
      fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
      fVar8 = (float)((float10)1 - fVar5);
      if (-fVar7 <= 0.0) {
        fVar8 = -fVar8;
      }
      *param_2 = fVar8 * fVar11;
      param_2 = param_2 + 1;
      fVar11 = fVar11 + (float)((fVar3 - fVar4) / (float10)fVar2);
    } while (param_2 < pfVar1);
  }
  return;
}

// 0135B260  FUN_0135b260  size=416  [run]
void __thiscall FUN_0135b260(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = *(float *)(param_1 + 0x10);
  fVar2 = (float)param_3;
  if (param_3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar13 = *(float *)(param_1 + 0xc) - fVar15;
  fVar3 = (float10)FUN_00fdc1f0();
  fVar14 = (float)fVar3;
  fVar4 = (float10)FUN_00fdc1f0();
  fVar5 = (float10)fVar14;
  fVar6 = (float10)FUN_00fdc1f0();
  fVar7 = (float10)-0.2;
  pfVar1 = param_2 + param_3;
  fVar10 = (float10)1.4426950408889634 * fVar6 * fVar7;
  fVar3 = ROUND(fVar10);
  fVar10 = (float10)f2xm1(fVar10 - fVar3);
  fVar10 = (float10)fscale((float10)1 + fVar10,fVar3);
  fVar3 = (float10)1;
  fVar10 = fVar3 / (fVar3 - fVar10);
  for (; param_2 < pfVar1; param_2 = param_2 + 1) {
    fVar12 = *param_2 * fVar15;
    fVar15 = fVar15 + fVar13 / fVar2;
    fVar8 = fVar3 / fVar6 - fVar10 * (float10)0.2;
    if (fVar12 != -0.2) {
      fVar8 = (float10)fVar12 - fVar7;
      fVar11 = (float10)1.4426950408889634 * -(fVar8 * fVar6);
      fVar9 = ROUND(fVar11);
      fVar11 = (float10)f2xm1(fVar11 - fVar9);
      fVar9 = (float10)fscale((float10)1 + fVar11,fVar9);
      fVar8 = fVar8 / (fVar3 - fVar9) + fVar10 * fVar7;
    }
    fVar12 = (float)fVar8;
    if (fVar12 < 1.0) {
      if (fVar12 <= -1.0) {
        fVar12 = -1.0;
      }
    }
    else {
      fVar12 = 1.0;
    }
    *param_2 = fVar12 * fVar14;
    fVar14 = fVar14 + (float)((fVar4 - fVar5) / (float10)fVar2);
  }
  return;
}

// 0135B400  FUN_0135b400  size=457  [run]
void __thiscall FUN_0135b400(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *(float *)(param_1 + 0x10);
  fVar2 = (float)param_3;
  if (param_3 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar6 = (*(float *)(param_1 + 0xc) - fVar8) / fVar2;
  fVar4 = (float10)FUN_00fdc1f0();
  fVar7 = (float)fVar4;
  fVar4 = (float10)FUN_00fdc1f0();
  pfVar1 = param_2 + param_3;
  fVar2 = (float)((fVar4 - (float10)fVar7) / (float10)fVar2);
  if (param_2 < pfVar1) {
    iVar3 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2) {
      do {
        fVar5 = *param_2 * fVar8;
        if (fVar5 < 1.0) {
          if (fVar5 <= -1.0) {
            fVar5 = -1.0;
          }
        }
        else {
          fVar5 = 1.0;
        }
        *param_2 = fVar5 * fVar7;
        fVar5 = (fVar8 + fVar6) * param_2[1];
        fVar8 = fVar8 + fVar6 + fVar6;
        if (fVar5 < 1.0) {
          if (fVar5 <= -1.0) {
            fVar5 = -1.0;
          }
        }
        else {
          fVar5 = 1.0;
        }
        param_2[1] = fVar5 * (fVar7 + fVar2);
        fVar5 = param_2[2] * fVar8;
        fVar7 = fVar7 + fVar2 + fVar2;
        fVar8 = fVar8 + fVar6;
        if (fVar5 < 1.0) {
          if (fVar5 <= -1.0) {
            fVar5 = -1.0;
          }
        }
        else {
          fVar5 = 1.0;
        }
        param_2[2] = fVar5 * fVar7;
        fVar5 = param_2[3] * fVar8;
        fVar7 = fVar7 + fVar2;
        fVar8 = fVar8 + fVar6;
        if (fVar5 < 1.0) {
          if (fVar5 <= -1.0) {
            fVar5 = -1.0;
          }
        }
        else {
          fVar5 = 1.0;
        }
        param_2[3] = fVar5 * fVar7;
        param_2 = param_2 + 4;
        fVar7 = fVar7 + fVar2;
      } while ((int)param_2 < (int)(pfVar1 + -3));
    }
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      fVar5 = *param_2 * fVar8;
      fVar8 = fVar8 + fVar6;
      if (fVar5 < 1.0) {
        if (fVar5 <= -1.0) {
          fVar5 = -1.0;
        }
      }
      else {
        fVar5 = 1.0;
      }
      *param_2 = fVar5 * fVar7;
      fVar7 = fVar7 + fVar2;
    }
  }
  return;
}

// 0135B5D0  FUN_0135b5d0  size=351  [run]
void __thiscall FUN_0135b5d0(undefined4 *param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  switch(*param_1) {
  case 1:
    uVar3 = 0;
    for (uVar2 = param_2[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_0135ad20(*param_2 + *(ushort *)(param_2 + 3) * uVar2 * 4,uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    break;
  case 2:
    uVar3 = 0;
    for (uVar2 = param_2[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_0135b150(*param_2 + *(ushort *)(param_2 + 3) * uVar2 * 4,uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    break;
  case 3:
    uVar3 = 0;
    for (uVar2 = param_2[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_0135b260(*param_2 + *(ushort *)(param_2 + 3) * uVar2 * 4,uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    break;
  case 4:
    uVar3 = 0;
    for (uVar2 = param_2[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = *(undefined2 *)((int)param_2 + 0xe);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        FUN_0135b400(*param_2 + *(ushort *)(param_2 + 3) * uVar2 * 4,uVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  param_1[2] = param_1[1];
  param_1[4] = param_1[3];
  param_1[6] = param_1[5];
  return;
}

// 0135B740  FUN_0135b740  size=222  [run]
void __thiscall FUN_0135b740(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = param_1[2];
  fVar5 = *param_1;
  fVar7 = param_1[1];
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    iVar4 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        fVar6 = *param_2;
        fVar3 = param_2[1];
        fVar5 = fVar7 * fVar2 + (fVar6 - fVar5);
        *param_2 = fVar5;
        fVar7 = param_2[2];
        fVar6 = fVar5 * fVar2 + (fVar3 - fVar6);
        param_2[1] = fVar6;
        fVar5 = param_2[3];
        fVar6 = fVar6 * fVar2 + (fVar7 - fVar3);
        param_2[2] = fVar6;
        fVar7 = fVar6 * fVar2 + (fVar5 - fVar7);
        param_2[3] = fVar7;
        param_2 = param_2 + 4;
      } while ((int)param_2 < (int)(pfVar1 + -3));
    }
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      fVar6 = *param_2 - fVar5;
      fVar5 = *param_2;
      fVar7 = fVar7 * fVar2 + fVar6;
      *param_2 = fVar7;
    }
  }
  *param_1 = fVar5;
  param_1[1] = fVar7;
  return;
}

// 0135B820  FUN_0135b820  size=244  [run]
void __thiscall FUN_0135b820(float *param_1,float *param_2,int param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = param_1[2];
  fVar5 = *param_1;
  fVar7 = param_1[1];
  pfVar1 = param_2 + param_3;
  if (param_2 < pfVar1) {
    iVar4 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        fVar6 = *param_2;
        fVar3 = param_2[1];
        fVar5 = fVar7 * fVar2 + (fVar6 * param_4 - fVar5);
        *param_2 = fVar5;
        fVar7 = param_2[2];
        fVar5 = fVar5 * fVar2 + (fVar3 * param_4 - fVar6 * param_4);
        param_2[1] = fVar5;
        fVar6 = fVar5 * fVar2 + (fVar7 * param_4 - fVar3 * param_4);
        param_2[2] = fVar6;
        fVar5 = param_2[3] * param_4;
        fVar7 = fVar6 * fVar2 + (fVar5 - fVar7 * param_4);
        param_2[3] = fVar7;
        param_2 = param_2 + 4;
      } while ((int)param_2 < (int)(pfVar1 + -3));
    }
    for (; param_2 < pfVar1; param_2 = param_2 + 1) {
      fVar6 = *param_2;
      fVar7 = fVar7 * fVar2 + (fVar6 * param_4 - fVar5);
      *param_2 = fVar7;
      fVar5 = fVar6 * param_4;
    }
  }
  *param_1 = fVar5;
  param_1[1] = fVar7;
  return;
}

// 0135B930  FUN_0135b930  size=33  [run]
void __thiscall FUN_0135b930(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  return;
}

// 0135B960  FUN_0135b960  size=106  [run]
float10 __thiscall FUN_0135b960(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_1;
  fVar1 = param_1[2];
  fVar2 = param_2[1];
  param_2[1] = *param_2;
  fVar3 = param_1[1];
  fVar4 = *param_2;
  *param_2 = param_3;
  fVar5 = param_1[4];
  fVar6 = param_2[3];
  param_2[3] = param_2[2];
  fVar7 = param_1[3] * param_2[2] + fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7 * param_3;
  param_2[2] = fVar7;
  return (float10)fVar7;
}

// 0135B9D0  FUN_0135b9d0  size=1142  [run]
void __thiscall
FUN_0135b9d0(float *param_1,undefined4 param_2,int param_3,float param_4,undefined4 param_5,
            float param_6)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = (float10)param_3;
  if (param_3 < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  fVar5 = (float)fVar1;
  fVar4 = fVar5 * 0.5 * 0.9;
  if (fVar4 <= param_4) {
    param_4 = fVar4;
  }
  switch(param_2) {
  case 0:
    fVar1 = (float10)FUN_00fdc1f0();
    fVar7 = (float)fVar1;
    fVar10 = fVar7 - 1.0;
    fVar2 = ((float10)param_4 * (float10)6.2831855) / (float10)fVar5;
    fVar4 = fVar7 + 1.0;
    fVar3 = (float10)fcos(fVar2);
    fVar11 = fVar10 * (float)fVar3;
    fVar8 = fVar4 * (float)fVar3;
    fVar5 = fVar4 - fVar11;
    fVar9 = (fVar8 + fVar10) * -2.0;
    fVar11 = fVar11 + fVar4;
    fVar2 = (float10)fsin(fVar2);
    fVar6 = (float)(fVar2 * (float10)0.5 *
                    SQRT(((float10)1 / fVar1 + fVar1) * (float10)(float)(undefined *)0x0 +
                         (float10)2.0) * SQRT(fVar1) * (float10)2.0);
    fVar4 = (fVar5 - fVar6) * fVar7;
    fVar5 = (fVar5 + fVar6) * fVar7;
    fVar7 = (fVar10 - fVar8) * fVar7 * 2.0;
    fVar10 = fVar11 + fVar6;
    fVar11 = fVar11 - fVar6;
    break;
  case 1:
    fVar1 = ((float10)param_4 * (float10)6.2831855) / fVar1;
    fVar2 = (float10)fcos(fVar1);
    fVar3 = (float10)FUN_00fdc1f0();
    fVar1 = (float10)fsin((float10)(float)fVar1);
    fVar7 = (float)fVar2 * -2.0;
    fVar11 = (float)(fVar1 / ((float10)param_6 + (float10)param_6));
    fVar5 = fVar11 * (float)fVar3;
    fVar11 = fVar11 / (float)fVar3;
    fVar4 = 1.0 - fVar5;
    fVar5 = fVar5 + 1.0;
    fVar10 = fVar11 + 1.0;
    fVar11 = 1.0 - fVar11;
    fVar9 = fVar7;
    break;
  case 2:
    fVar1 = (float10)FUN_00fdc1f0();
    fVar4 = (float)fVar1;
    fVar11 = fVar4 + 1.0;
    fVar2 = ((float10)param_4 * (float10)6.2831855) / (float10)fVar5;
    fVar8 = fVar4 - 1.0;
    fVar3 = (float10)fcos(fVar2);
    fVar5 = fVar8 * (float)fVar3;
    fVar6 = fVar11 * (float)fVar3;
    fVar10 = fVar5 + fVar11;
    fVar11 = fVar11 - fVar5;
    fVar7 = (fVar6 + fVar8) * fVar4 * -2.0;
    fVar2 = (float10)fsin(fVar2);
    fVar9 = (float)(fVar2 * (float10)0.5 *
                    SQRT(((float10)1 / fVar1 + fVar1) * (float10)(float)(undefined *)0x0 +
                         (float10)2.0) * SQRT(fVar1) * (float10)2.0);
    fVar5 = (fVar10 + fVar9) * fVar4;
    fVar4 = (fVar10 - fVar9) * fVar4;
    fVar10 = fVar11 + fVar9;
    fVar11 = fVar11 - fVar9;
    fVar9 = (fVar8 - fVar6) * 2.0;
    break;
  default:
    fVar1 = (float10)fptan(((float10)param_4 * (float10)3.1415927) / fVar1);
    fVar4 = (float)((float10)1 / fVar1);
    param_5 = fVar4 * 1.4142135;
    fVar10 = fVar4 * fVar4 + 1.0;
    fVar5 = 1.0 / (fVar10 + param_5);
    fVar7 = fVar5 * 2.0;
    fVar9 = (1.0 - fVar4 * fVar4) * fVar7;
    goto LAB_0135bde8;
  case 4:
    fVar1 = (float10)fptan(((float10)param_4 * (float10)3.1415927) / fVar1);
    fVar4 = (float)fVar1;
    param_5 = fVar4 * 1.4142135;
    fVar10 = fVar4 * fVar4 + 1.0;
    fVar5 = 1.0 / (fVar10 + param_5);
    fVar7 = fVar5 * -2.0;
    fVar9 = -((fVar4 * fVar4 - 1.0) * fVar7);
LAB_0135bde8:
    fVar11 = (fVar10 - param_5) * fVar5;
    fVar10 = 1.0;
    fVar4 = fVar5;
    break;
  case 5:
    fVar7 = 0.0;
    fVar1 = ((float10)param_4 * (float10)6.2831855) / fVar1;
    fVar2 = (float10)fsin(fVar1);
    fVar2 = fVar2 / ((float10)param_6 + (float10)param_6);
    fVar5 = (float)fVar2;
    fVar4 = (float)-fVar2;
    fVar10 = (float)(fVar2 + (float10)1);
    fVar1 = (float10)fcos(fVar1);
    fVar11 = (float)((float10)1 - fVar2);
    fVar9 = (float)(fVar1 * (float10)-2.0);
    break;
  case 6:
    fVar5 = 1.0;
    fVar4 = 1.0;
    fVar1 = ((float10)param_4 * (float10)6.2831855) / fVar1;
    fVar2 = (float10)fsin(fVar1);
    fVar2 = fVar2 / ((float10)param_6 + (float10)param_6);
    fVar1 = (float10)fcos(fVar1);
    fVar7 = (float)(fVar1 * (float10)-2.0);
    fVar10 = (float)(fVar2 + (float10)1);
    fVar11 = (float)((float10)1 - fVar2);
    fVar9 = (float)(fVar1 * (float10)-2.0);
  }
  fVar10 = 1.0 / fVar10;
  param_1[1] = fVar10 * fVar7;
  *param_1 = fVar10 * fVar5;
  param_1[2] = fVar10 * fVar4;
  param_1[3] = -(fVar10 * fVar9);
  param_1[4] = -(fVar10 * fVar11);
  return;
}

// 0135BE70  FUN_0135be70  size=24  [run]
void __fastcall FUN_0135be70(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 0135BE90  FUN_0135be90  size=702  [run]
void __thiscall FUN_0135be90(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_1c = param_1[5];
  pfVar1 = param_2 + param_3;
  local_18 = param_1[6];
  local_14 = param_1[7];
  local_10 = param_1[8];
  if (param_2 < pfVar1) {
    iVar7 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2) {
      fVar2 = param_1[2];
      fVar3 = *param_1;
      fVar4 = param_1[1];
      fVar5 = param_1[4];
      fVar6 = param_1[3];
      do {
        fVar10 = *param_2;
        fVar8 = fVar6 * local_14 +
                fVar4 * local_1c + fVar3 * *param_2 + fVar2 * local_18 + fVar5 * local_10;
        *param_2 = fVar8;
        fVar11 = param_2[1];
        fVar9 = fVar6 * fVar8 +
                fVar4 * fVar10 + fVar3 * param_2[1] + fVar2 * local_1c + fVar5 * local_14;
        param_2[1] = fVar9;
        local_18 = param_2[2];
        local_10 = fVar6 * fVar9 +
                   fVar4 * fVar11 + fVar3 * param_2[2] + fVar2 * fVar10 + fVar5 * fVar8;
        param_2[2] = local_10;
        local_1c = param_2[3];
        local_14 = fVar6 * local_10 +
                   fVar4 * local_18 + fVar3 * param_2[3] + fVar2 * fVar11 + fVar5 * fVar9;
        param_2[3] = local_14;
        param_2 = param_2 + 4;
      } while ((int)param_2 < (int)(pfVar1 + -3));
    }
    if (param_2 < pfVar1) {
      fVar2 = *param_1;
      fVar3 = param_1[2];
      fVar4 = param_1[1];
      fVar5 = param_1[4];
      fVar6 = param_1[3];
      fVar10 = local_18;
      fVar11 = local_10;
      do {
        local_10 = local_14;
        local_18 = local_1c;
        local_1c = *param_2;
        local_14 = fVar6 * local_10 +
                   fVar4 * local_18 + fVar2 * *param_2 + fVar3 * fVar10 + fVar5 * fVar11;
        *param_2 = local_14;
        param_2 = param_2 + 1;
        fVar10 = local_18;
        fVar11 = local_10;
      } while (param_2 < pfVar1);
    }
  }
  param_1[5] = local_1c;
  param_1[6] = local_18;
  param_1[7] = local_14;
  param_1[8] = local_10;
  return;
}

// 0135C230  FUN_0135c230  size=313  [run]
void __thiscall FUN_0135c230(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x72c)) {
  case 0:
    iVar2 = 0;
    for (uVar1 = param_2 & 0xfffffff7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    *(int *)(param_1 + 0x794) = iVar2;
    *(uint *)(param_1 + 0x798) = param_2 & 0xfffffff7;
    goto switchD_0135c247_default;
  case 1:
    iVar2 = 0;
    for (uVar1 = param_2 & 4; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x798) = 4;
    break;
  case 2:
    iVar2 = 0;
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x798) = 3;
    break;
  case 3:
    iVar2 = 0;
    for (uVar1 = param_2 & 7; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x798) = 7;
    break;
  case 4:
    iVar2 = 0;
    for (uVar1 = param_2 & 0x33; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x798) = 0x33;
    break;
  case 5:
    iVar2 = 0;
    for (uVar1 = param_2 & 0x37; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x798) = 0x37;
    break;
  case 6:
    iVar2 = 0;
    for (uVar1 = param_2 & 1; uVar1 != 0; uVar1 = uVar1 & uVar1 - 1) {
      iVar2 = iVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x798) = 1;
    break;
  default:
    goto switchD_0135c247_default;
  }
  *(int *)(param_1 + 0x794) = iVar2;
switchD_0135c247_default:
  if ((*(char *)(param_1 + 0x73c) != '\0') && ((param_2 & 8) != 0)) {
    *(int *)(param_1 + 0x794) = *(int *)(param_1 + 0x794) + 1;
    *(uint *)(param_1 + 0x798) = *(uint *)(param_1 + 0x798) | 8;
  }
  return;
}

// 0135C390  FUN_0135c390  size=66  [run]
void __thiscall FUN_0135c390(int param_1,uint param_2)

{
  if (((*(char *)(param_1 + 0x728) != '\0') || (*(char *)(param_1 + 0x70c) != '\0')) &&
     ((*(uint *)(param_1 + 0x798) & param_2) != 0)) {
    *(undefined1 *)(param_1 + 0x7a4) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x7a4) = 0;
  return;
}

// 0135C3E0  FUN_0135c3e0  size=160  [run]
int __fastcall FUN_0135c3e0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x700);
  do {
    if (*(char *)(puVar3 + 3) != '\0') {
      iVar1 = FUN_0135ebe0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x794),
                           *(undefined4 *)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0x738),0);
      if (iVar1 != 1) {
        return iVar1;
      }
      if (puVar3[-3] != 0) {
        FUN_0135e340(puVar3[-3] + -1,*(undefined4 *)(param_1 + 0x7a0),puVar3[-1],puVar3[-2],*puVar3)
        ;
      }
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 7;
  } while (uVar2 < 2);
  return 1;
}

// 0135C480  FUN_0135c480  size=40  [run]
void __fastcall FUN_0135c480(int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    FUN_0135ec50(*(undefined4 *)(param_1 + 8));
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 0135C4B0  FUN_0135c4b0  size=82  [run]
void __fastcall FUN_0135c4b0(int param_1)

{
  char *pcVar1;
  int local_8;
  
  pcVar1 = (char *)(param_1 + 0x70c);
  local_8 = 2;
  do {
    if (*pcVar1 != '\0') {
      FUN_0135eca0();
      FUN_0135eba0();
      FUN_0135e7e0();
    }
    pcVar1 = pcVar1 + 0x1c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 0135C510  FUN_0135c510  size=96  [run]
int __fastcall FUN_0135c510(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x738);
  if (((*(char *)(param_1 + 0x73d) != '\0') && (*(char *)(param_1 + 0x7a4) != '\0')) &&
     (uVar3 = 0, *(int *)(param_1 + 0x79c) != 0)) {
    do {
      iVar2 = FUN_01352760(*(undefined4 *)(param_1 + 8),uVar1);
      if (iVar2 != 1) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x79c));
  }
  return 1;
}

// 0135C570  FUN_0135c570  size=48  [run]
void __fastcall FUN_0135c570(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x79c) != 0) {
    do {
      FUN_013527b0(*(undefined4 *)(param_1 + 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x79c));
  }
  return;
}

// 0135C5A0  FUN_0135c5a0  size=44  [run]
void __fastcall FUN_0135c5a0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x79c) != 0) {
    do {
      FUN_013527e0();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x79c));
  }
  return;
}

// 0135C610  FUN_0135c610  size=27  [run]
undefined4 FUN_0135c610(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 0135C670  FUN_0135c670  size=238  [run]
int __thiscall
FUN_0135c670(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  uVar1 = (**(code **)(*param_3 + 4))();
  *(undefined1 *)(param_1 + 0x7a5) = uVar1;
  iVar3 = 0;
  for (uVar2 = param_5[1] & 0x3ffff; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x79c) = iVar3;
  FUN_0135d0e0((undefined4 *)(param_1 + 0x6f4));
  if (*(char *)(param_1 + 0x7a5) != '\0') {
    *(undefined4 *)(param_1 + 0x730) = 0;
  }
  puVar4 = (undefined4 *)(param_1 + 0x6f4);
  puVar5 = (undefined4 *)(param_1 + 0x740);
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x7a0) = *param_5;
  uVar2 = param_5[1];
  FUN_0135c230(uVar2 & 0x3ffff);
  if (((*(char *)(param_1 + 0x728) == '\0') && (*(char *)(param_1 + 0x70c) == '\0')) ||
     ((*(uint *)(param_1 + 0x798) & uVar2 & 0x3ffff) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x7a4) = uVar1;
  iVar3 = FUN_0135c3e0();
  if ((iVar3 == 1) && (iVar3 = FUN_0135c510(), iVar3 == 1)) {
    iVar3 = *(int *)(param_1 + 4);
    *(undefined2 *)(iVar3 + 4) = 0;
    *(undefined1 *)(iVar3 + 6) = 0;
    iVar3 = 1;
  }
  return iVar3;
}

// 0135C760  FUN_0135c760  size=108  [run]
undefined4 __thiscall FUN_0135c760(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 2;
  do {
    FUN_0135ec50(param_1[2]);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar2 = 0;
  if (param_1[0x1e7] != 0) {
    do {
      FUN_013527b0(param_1[2]);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x1e7]);
  }
  (**(code **)*param_1)(0);
  (**(code **)(*param_2 + 8))(param_1);
  return 1;
}

// 0135C7D0  FUN_0135c7d0  size=739  [run]
void __thiscall FUN_0135c7d0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  FUN_0135d0e0(param_1 + 0x6f4);
  if (*(char *)(param_1 + 0x7a5) != '\0') {
    *(undefined4 *)(param_1 + 0x730) = 0;
  }
  iVar6 = *(int *)(param_1 + 4);
  uVar5 = 0;
  pcVar4 = (char *)(iVar6 + 4);
  while (*pcVar4 == '\0') {
    uVar5 = uVar5 + 1;
    pcVar4 = pcVar4 + 1;
    if (2 < uVar5) goto LAB_0135c812;
  }
  if (((*(byte *)(iVar6 + 4) & 0x80) == 0) && ((*(byte *)(iVar6 + 5) & 0x40) == 0))
  goto LAB_0135c8be;
  iVar6 = 2;
  do {
    FUN_0135ec50(*(undefined4 *)(param_1 + 8));
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = FUN_0135c3e0();
  if (iVar6 == 1) {
    FUN_0135c4b0();
LAB_0135c8be:
    bVar1 = *(byte *)(*(int *)(param_1 + 4) + 4);
    if (((((bVar1 & 0x20) != 0) || ((bVar1 & 0x40) != 0)) ||
        ((*(byte *)(*(int *)(param_1 + 4) + 5) & 0x20) != 0)) ||
       ((cVar2 = FUN_0135cb20(0), cVar2 != '\0' || (cVar2 = FUN_0135cb20(1), cVar2 != '\0')))) {
      iVar6 = 2;
      do {
        FUN_0135ec50(*(undefined4 *)(param_1 + 8));
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      FUN_0135c570();
      FUN_0135c230(*(undefined4 *)(param_2 + 4));
      if (((*(char *)(param_1 + 0x728) == '\0') && (*(char *)(param_1 + 0x70c) == '\0')) ||
         ((*(uint *)(param_1 + 0x798) & *(uint *)(param_2 + 4)) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0x7a4) = uVar3;
      iVar6 = FUN_0135c3e0();
      if (iVar6 != 1) {
        return;
      }
      iVar6 = FUN_0135c510();
      if (iVar6 != 1) {
        return;
      }
      FUN_0135c4b0();
      FUN_0135c5a0();
    }
    if ((*(byte *)(*(int *)(param_1 + 4) + 4) & 4) != 0) {
      FUN_0135c570();
      iVar6 = FUN_0135c510();
      if (iVar6 != 1) {
        return;
      }
      FUN_0135c5a0();
    }
    cVar2 = FUN_0135cb20(9);
    if (((((cVar2 != '\0') || (cVar2 = FUN_0135cb20(0xb), cVar2 != '\0')) ||
         (cVar2 = FUN_0135cb20(10), cVar2 != '\0')) || (cVar2 = FUN_0135cb20(0xc), cVar2 != '\0'))
       && (*(int *)(param_1 + 0x6f4) != 0)) {
      FUN_0135e340(*(int *)(param_1 + 0x6f4) + -1,*(undefined4 *)(param_1 + 0x7a0),
                   *(undefined4 *)(param_1 + 0x6fc),*(undefined4 *)(param_1 + 0x6f8),
                   *(undefined4 *)(param_1 + 0x700));
    }
    cVar2 = FUN_0135cb20(0x10);
    if ((((cVar2 != '\0') || (cVar2 = FUN_0135cb20(0x12), cVar2 != '\0')) ||
        ((cVar2 = FUN_0135cb20(0x11), cVar2 != '\0' || (cVar2 = FUN_0135cb20(0x13), cVar2 != '\0')))
        ) && (*(int *)(param_1 + 0x710) != 0)) {
      FUN_0135e340(*(int *)(param_1 + 0x710) + -1,*(undefined4 *)(param_1 + 0x7a0),
                   *(undefined4 *)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x714),
                   *(undefined4 *)(param_1 + 0x71c));
    }
LAB_0135c812:
    iVar6 = *(int *)(param_1 + 4);
    *(undefined2 *)(iVar6 + 4) = 0;
    *(undefined1 *)(iVar6 + 6) = 0;
    iVar6 = 0;
    if (*(char *)(param_1 + 0x70c) != '\0') {
      iVar6 = *(int *)(param_1 + 0x230) * 4;
    }
    if (*(char *)(param_1 + 0x728) != '\0') {
      iVar6 = *(int *)(param_1 + 0x50c) * 4;
    }
    iVar6 = (**(code **)(**(int **)(param_1 + 8) + 4))(iVar6 + (uint)*(ushort *)(param_2 + 0xc) * 8)
    ;
    if (iVar6 != 0) {
      FUN_0135f4f0(param_2,param_1 + 0xc,iVar6);
      (**(code **)(**(int **)(param_1 + 8) + 8))(iVar6);
    }
  }
  return;
}

// 0135CAC0  FUN_0135cac0  size=29  [run]
undefined4 * __fastcall FUN_0135cac0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01804070;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0135ce80();
  return param_1;
}

// 0135CAE0  FUN_0135cae0  size=52  [run]
undefined4 * FUN_0135cae0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x7a8);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01804070;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_0135ce80();
    puVar2 = puVar1;
  }
  return puVar2;
}

// 0135CB20  FUN_0135cb20  size=56  [run]
bool __thiscall FUN_0135cb20(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return (1 << ((char)param_2 + (char)iVar1 * -8 & 0x1fU) & (uint)*(byte *)(iVar1 + param_1)) != 0;
}

// 0135CBE0  FUN_0135cbe0  size=35  [run]
void FUN_0135cbe0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 0135CCB0  FUN_0135ccb0  size=194  [run]
int __fastcall FUN_0135ccb0(int param_1)

{
  FUN_0135dbd0();
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  return param_1;
}

// 0135CE30  FUN_0135ce30  size=78  [run]
undefined4 * __thiscall FUN_0135ce30(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_01804070;
  iVar1 = 1;
  do {
    FUN_0135d810();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0135CE80  FUN_0135ce80  size=535  [run]
int __fastcall FUN_0135ce80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 1;
  do {
    FUN_0135ccb0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  puVar2 = (undefined4 *)(param_1 + 0x5b8);
  iVar1 = 1;
  do {
    *puVar2 = 0x3f800000;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    FUN_00401040(puVar2 + 5,0x10,6,&LAB_0135cbc0);
    puVar2 = puVar2 + 0x1d;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  *(undefined4 *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x6bc) = 0;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0;
  *(undefined4 *)(param_1 + 0x6cc) = 0;
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x6d4) = 0;
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  *(undefined4 *)(param_1 + 0x6dc) = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined1 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined1 *)(param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6f0) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x6f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x708) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x710) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x714) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x718) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined2 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x724) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x728) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x72c) = 0x400;
  *(undefined4 *)(param_1 + 0x734) = 0;
  *(undefined1 *)(param_1 + 0x74c) = 0;
  *(undefined4 *)(param_1 + 0x750) = 0;
  *(undefined1 *)(param_1 + 0x768) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x73c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x740) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x744) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x748) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x754) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x758) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x75c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x760) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x764) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x76c) = 0;
  *(undefined2 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x770) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x774) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x778) = 0x400;
  *(undefined4 *)(param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0x780) = 0xffffffff;
  return param_1;
}

// 0135D0B0  FUN_0135d0b0  size=35  [run]
undefined4 __thiscall FUN_0135d0b0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x14))(param_3,param_4);
    return uVar1;
  }
  return 1;
}

// 0135D0E0  FUN_0135d0e0  size=24  [run]
void __thiscall FUN_0135d0e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// 0135D100  FUN_0135d100  size=39  [run]
undefined4 __thiscall FUN_0135d100(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 0135D130  FUN_0135d130  size=217  [run]
undefined4 __thiscall FUN_0135d130(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float10 fVar4;
  
  puVar1 = param_2;
  pfVar3 = (float *)(param_1 + 0x18);
  param_2 = (undefined4 *)0x2;
  do {
    puVar2 = puVar1;
    *(undefined1 *)(pfVar3 + 2) = *(undefined1 *)puVar2;
    fVar4 = (float10)FUN_00fdc1f0();
    *pfVar3 = (float)fVar4;
    fVar4 = (float10)FUN_00fdc1f0();
    pfVar3[1] = (float)fVar4;
    pfVar3[-4] = *(float *)((int)puVar2 + 9);
    pfVar3[-3] = *(float *)((int)puVar2 + 0xd);
    pfVar3[-2] = *(float *)((int)puVar2 + 0x11);
    pfVar3[-1] = *(float *)((int)puVar2 + 0x15);
    pfVar3 = pfVar3 + 7;
    param_2 = (undefined4 *)((int)param_2 + -1);
    puVar1 = (undefined4 *)((int)puVar2 + 0x19);
  } while (param_2 != (undefined4 *)0x0);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((int)puVar2 + 0x19);
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x44) = (float)fVar4;
  fVar4 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x48) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((int)puVar2 + 0x25);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)((int)puVar2 + 0x29);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)((int)puVar2 + 0x2a);
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined1 *)(param_1 + 6) = 0xff;
  return 1;
}

// 0135D210  FUN_0135d210  size=428  [run]
undefined4 __thiscall FUN_0135d210(int param_1,short param_2,float *param_3)

{
  byte *pbVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_c;
  
  if (param_3 != (float *)0x0) {
    iVar2 = (int)param_2;
    switch(iVar2) {
    case 0:
      *(float *)(param_1 + 0x40) = *param_3;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)param_3;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)param_3;
      break;
    case 3:
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x44) = (float)fVar3;
      break;
    case 4:
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x48) = (float)fVar3;
      break;
    case 5:
      *(float *)(param_1 + 0x4c) = *param_3;
      break;
    case 6:
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)param_3;
      break;
    case 7:
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x18) = (float)fVar3;
      break;
    case 8:
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x1c) = (float)fVar3;
      break;
    case 9:
      local_c = (undefined4)(longlong)ROUND(*param_3);
      *(undefined4 *)(param_1 + 8) = local_c;
      break;
    case 10:
      *(float *)(param_1 + 0xc) = *param_3;
      break;
    case 0xb:
      *(float *)(param_1 + 0x10) = *param_3;
      break;
    case 0xc:
      *(float *)(param_1 + 0x14) = *param_3;
      break;
    case 0xd:
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)param_3;
      break;
    case 0xe:
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x34) = (float)fVar3;
      break;
    case 0xf:
      fVar3 = (float10)FUN_00fdc1f0();
      *(float *)(param_1 + 0x38) = (float)fVar3;
      break;
    case 0x10:
      local_c = (undefined4)(longlong)ROUND(*param_3);
      *(undefined4 *)(param_1 + 0x24) = local_c;
      break;
    case 0x11:
      *(float *)(param_1 + 0x28) = *param_3;
      break;
    case 0x12:
      *(float *)(param_1 + 0x2c) = *param_3;
      break;
    case 0x13:
      *(float *)(param_1 + 0x30) = *param_3;
    }
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    pbVar1 = (byte *)(iVar2 + 4 + param_1);
    *pbVar1 = *pbVar1 | '\x01' << ((char)param_2 + (char)iVar2 * -8 & 0x1fU);
    return 1;
  }
  return 0x1f;
}

// 0135D490  FUN_0135d490  size=156  [run]
void __thiscall FUN_0135d490(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_0180408c;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x447a0000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x447a0000;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x400;
  puVar2 = (undefined4 *)(param_2 + 8);
  puVar3 = param_1 + 2;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((int)param_1 + 6) = 0xff;
  return;
}

// 0135D530  FUN_0135d530  size=180  [run]
undefined4 * __thiscall FUN_0135d530(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180408c;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar1[3] = 0x3f800000;
    puVar1[4] = 0x447a0000;
    puVar1[5] = 0x3f800000;
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    puVar1[0xb] = 0x447a0000;
    puVar1[0xc] = 0x3f800000;
    puVar1[0xd] = 0x3f800000;
    puVar1[0xe] = 0x3f800000;
    puVar1[0x10] = 0;
    *(undefined2 *)(puVar1 + 0x14) = 0;
    puVar1[0x11] = 0x3f800000;
    puVar1[0x12] = 0x3f800000;
    puVar1[0x13] = 0x400;
    puVar3 = (undefined4 *)(param_1 + 8);
    puVar4 = puVar1 + 2;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)(puVar1 + 1) = 0xffff;
    *(undefined1 *)((int)puVar1 + 6) = 0xff;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0135D5F0  FUN_0135d5f0  size=142  [run]
undefined4 * FUN_0135d5f0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0180408c;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x3f800000;
    puVar1[4] = 0x447a0000;
    puVar1[5] = 0x3f800000;
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0x3f800000;
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0x3f800000;
    puVar1[0xb] = 0x447a0000;
    puVar1[0xc] = 0x3f800000;
    puVar1[0xd] = 0x3f800000;
    puVar1[0xe] = 0x3f800000;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0x3f800000;
    puVar1[0x12] = 0x3f800000;
    puVar1[0x13] = 0x400;
    *(undefined2 *)(puVar1 + 0x14) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0135D680  FUN_0135d680  size=42  [run]
void __thiscall FUN_0135d680(int param_1,short param_2)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  pbVar1 = (byte *)(iVar2 + param_1);
  *pbVar1 = *pbVar1 | '\x01' << ((char)param_2 + (char)iVar2 * -8 & 0x1fU);
  return;
}

// 0135D6C0  FUN_0135d6c0  size=17  [run]
undefined4 FUN_0135d6c0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  return uVar1;
}

// 0135D6E0  FUN_0135d6e0  size=35  [run]
void FUN_0135d6e0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 0135D720  FUN_0135d720  size=34  [run]
undefined4 * __thiscall FUN_0135d720(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0135D7D0  FUN_0135d7d0  size=30  [run]
undefined4 __thiscall FUN_0135d7d0(undefined4 *param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    *param_2 = ((uint)param_1[1] >> 1) * 8 + 8;
  }
  return *param_1;
}

// 0135D7F0  FUN_0135d7f0  size=13  [run]
void __thiscall FUN_0135d7f0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

// 0135D810  FUN_0135d810  size=1  [run]
void FUN_0135d810(void)

{
  return;
}

// 0135D820  FUN_0135d820  size=528  [run]
int __thiscall
FUN_0135d820(int param_1,int *param_2,uint param_3,undefined4 param_4,int *param_5,char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(int **)(param_1 + 0x224) = param_5;
  *(uint *)(param_1 + 0x21c) = param_3;
  *(undefined4 *)(param_1 + 0x220) = param_4;
  FUN_01360ca0(param_5,0,0,(undefined4 *)(param_1 + 0x214));
  iVar2 = (**(code **)(*param_2 + 4))(*(undefined4 *)(param_1 + 0x214));
  *(int *)(param_1 + 0x20c) = iVar2;
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x218);
    FUN_01360ca0(*(undefined4 *)(param_1 + 0x224),1,0,puVar1);
    iVar2 = (**(code **)(*param_2 + 4))(*puVar1);
    *(int *)(param_1 + 0x210) = iVar2;
    if (iVar2 != 0) {
      FUN_01360ca0(*(undefined4 *)(param_1 + 0x224),0,*(undefined4 *)(param_1 + 0x20c),
                   param_1 + 0x214);
      FUN_01360ca0(*(undefined4 *)(param_1 + 0x224),1,*(undefined4 *)(param_1 + 0x210),puVar1);
      iVar2 = FUN_01360b70(param_2,*(undefined4 *)(param_1 + 0x224),2,1,0);
      if (iVar2 == 1) {
        param_3 = 0;
        if (*(int *)(param_1 + 0x21c) != 0) {
          param_5 = (int *)(param_1 + 0x1ec);
          do {
            iVar2 = FUN_0135fe40(param_2,*(undefined4 *)(param_1 + 0x224));
            if (iVar2 != 1) {
              return iVar2;
            }
            iVar2 = FUN_0135fe40(param_2,*(undefined4 *)(param_1 + 0x224));
            if (iVar2 != 1) {
              return iVar2;
            }
            iVar2 = FUN_0135fe40(param_2,*(undefined4 *)(param_1 + 0x224));
            if (iVar2 != 1) {
              return iVar2;
            }
            iVar2 = (**(code **)(*param_2 + 4))((*(uint *)(param_1 + 0x224) >> 1) * 4 + 4);
            *param_5 = iVar2;
            if (iVar2 == 0) {
              return 0x34;
            }
            param_5 = param_5 + 1;
            *(undefined1 *)(param_3 + 0x204 + param_1) = 0;
            param_3 = param_3 + 1;
          } while (param_3 < *(uint *)(param_1 + 0x21c));
        }
        *(char *)(param_1 + 0x232) = param_6;
        param_3 = 0;
        if (*(int *)(param_1 + 0x21c) != 0) {
          do {
            if ((param_6 != '\0') &&
               (iVar2 = FUN_0135fa40(param_2,(*(uint *)(param_1 + 0x224) >> 2) +
                                             *(uint *)(param_1 + 0x224)), iVar2 != 1)) {
              return iVar2;
            }
            iVar2 = FUN_0135f770(param_2,*(undefined4 *)(param_1 + 0x224),
                                 *(undefined4 *)(param_1 + 0x224));
            if (iVar2 != 1) {
              return iVar2;
            }
            param_3 = param_3 + 1;
          } while (param_3 < *(uint *)(param_1 + 0x21c));
        }
        iVar2 = 1;
      }
      return iVar2;
    }
  }
  return 0x34;
}

// 0135DA30  FUN_0135da30  size=222  [run]
void __thiscall FUN_0135da30(int param_1,int *param_2)

{
  int *piVar1;
  int local_10;
  
  piVar1 = param_2;
  if (*(int *)(param_1 + 0x20c) != 0) {
    (**(code **)(*param_2 + 8))(*(int *)(param_1 + 0x20c));
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  if (*(int *)(param_1 + 0x210) != 0) {
    (**(code **)(*param_2 + 8))(*(int *)(param_1 + 0x210));
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  FUN_013605c0(param_2);
  param_2 = (int *)(param_1 + 0x1ec);
  local_10 = 6;
  do {
    FUN_0135fe80(piVar1);
    FUN_0135fe80(piVar1);
    FUN_0135fe80(piVar1);
    if (*(char *)(param_1 + 0x232) != '\0') {
      FUN_0135fa80(piVar1);
    }
    FUN_0135fa80(piVar1);
    if (*param_2 != 0) {
      (**(code **)(*piVar1 + 8))(*param_2);
      *param_2 = 0;
    }
    param_2 = param_2 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return;
}

// 0135DB10  FUN_0135db10  size=181  [run]
void __fastcall FUN_0135db10(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 *local_c;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    local_c = (undefined4 *)(param_1 + 0x1ec);
    puVar2 = (undefined1 *)(param_1 + 0x164);
    do {
      puVar2[-0x48] = 0;
      *puVar2 = 0;
      puVar2[0x48] = 0;
      if (*(char *)(param_1 + 0x232) != '\0') {
        FUN_0135fab0();
      }
      FUN_0135fab0();
      if ((void *)*local_c != (void *)0x0) {
        _memset((void *)*local_c,0,(*(uint *)(param_1 + 0x224) >> 1) * 4 + 4);
      }
      local_c = local_c + 1;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0xc;
    } while (uVar1 < *(uint *)(param_1 + 0x21c));
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined2 *)(param_1 + 0x230) = 0x101;
  return;
}

// 0135DBD0  FUN_0135dbd0  size=521  [run]
void __fastcall FUN_0135dbd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  puVar1 = param_1 + 0x45;
  iVar2 = 0xb;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined2 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  return;
}

// 0135DDE0  FUN_0135dde0  size=1366  [run]
void __thiscall
FUN_0135dde0(int *param_1,int *param_2,int param_3,int *param_4,float param_5,char param_6,
            undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined1 uVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  float10 fVar19;
  char cStack00000017;
  uint local_50;
  int *local_38;
  uint local_30;
  uint local_2c;
  int local_20;
  float local_18;
  int *local_14;
  int *local_10;
  int *local_8;
  
  if (param_6 != '\0') {
    param_1[0x8a] = 0;
    *(undefined1 *)(param_1 + 0x8c) = 1;
  }
  uVar7 = param_1[0x89];
  fVar3 = (float)param_1[0x44];
  uVar15 = uVar7 >> 2;
  fVar10 = (float)(int)uVar7;
  if ((int)uVar7 < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  local_14 = param_1 + 0x1e;
  local_10 = param_1 + 0x6b;
  local_38 = param_1 + 0x7b;
  uVar18 = 0;
  local_8 = param_1;
  do {
    local_2c = (uint)*(ushort *)((int)param_4 + 0xe);
    local_30 = param_1[0x8b];
    uVar16 = (uint)*(ushort *)((int)param_2 + 0xe);
    uVar11 = (undefined1)param_1[0x8c];
    local_20 = param_3;
    cVar4 = *(char *)((int)param_1 + 0x231);
    uVar5 = *(ushort *)(param_2 + 3);
    iVar8 = *param_2;
    local_18 = (float)param_1[0x8a];
    uVar6 = *(ushort *)(param_4 + 3);
    iVar9 = *param_4;
    do {
      uVar14 = uVar16;
      if (local_30 <= uVar16) {
        uVar14 = local_30;
      }
      local_30 = local_30 - uVar14;
      iVar17 = uVar16 - uVar14;
      if (((cVar4 != '\0') && (iVar17 == 0)) && (param_2[2] != 0x11)) {
        param_4[2] = 0x2b;
        uVar16 = 0;
        cStack00000017 = cVar4;
        goto LAB_0135e2bb;
      }
      uVar16 = FUN_0135fce0(iVar8 + uVar5 * uVar18 * 4 + (local_20 + uVar14) * 4,iVar17);
      if (*local_8 == local_8[3]) {
        cVar4 = '\0';
      }
      local_20 = local_20 + uVar14 + uVar16;
      uVar16 = iVar17 - (uVar16 & 0xffff);
      cStack00000017 = cVar4;
      if (((cVar4 == '\0') || (*local_8 == local_8[3])) || (uVar16 != 0)) {
        if ((param_2[2] == 0x11) && (uVar16 == 0)) goto LAB_0135df5e;
        cVar12 = '\0';
      }
      else {
        if (param_2[2] != 0x11) {
          param_4[2] = 0x2b;
          goto LAB_0135e2bb;
        }
LAB_0135df5e:
        cVar12 = '\x01';
      }
      if (((char)param_1[(uVar18 + (*(byte *)((int)param_1 + uVar18 + 0x204) & 1) * 6) * 3 + 0x47]
           == '\0') && (cVar13 = FUN_0135fd20(param_7,uVar7,cVar12), cVar13 != '\0')) {
        FUN_0135faf0();
        FUN_01360c30(param_7,uVar7,0x3f800000);
        FUN_01360500(param_7,uVar7,param_1[0x83]);
        FUN_013604e0();
      }
      if (((char)param_1[(uVar18 + (*(byte *)((int)param_1 + uVar18 + 0x204) - 1 & 1) * 6) * 3 +
                         0x47] == '\0') &&
         (cVar13 = FUN_0135fd20(param_7,uVar7,cVar12), cVar13 != '\0')) {
        FUN_0135faf0();
        FUN_01360c30(param_7,uVar7,0x3f800000);
        FUN_01360500(param_7,uVar7,param_1[0x83]);
        FUN_013604e0();
      }
      uVar14 = (uint)*(byte *)((int)param_1 + uVar18 + 0x204);
      iVar17 = uVar18 + (uVar14 - 1 & 1) * 6;
      if (((char)param_1[iVar17 * 3 + 0x47] == '\0') ||
         (iVar1 = uVar18 + (uVar14 & 1) * 6, (char)param_1[iVar1 * 3 + 0x47] == '\0')) {
LAB_0135e117:
        if ((char)*local_10 != '\0') goto LAB_0135e123;
      }
      else {
        if ((char)*local_10 == '\0') {
          FUN_01360590(param_1[iVar1 * 3 + 0x45],param_1[iVar17 * 3 + 0x45],*local_38,uVar15,
                       local_18,uVar11);
          uVar11 = 0;
          goto LAB_0135e117;
        }
LAB_0135e123:
        if (uVar7 <= (uint)(*local_14 - local_14[3])) {
          FUN_01360530(param_7,uVar7,param_1[0x84]);
          FUN_01360c30(param_7,uVar7,1.0 / ((fVar3 * 4.0) / fVar10));
          FUN_0135fa00(param_7,uVar15);
          local_18 = local_18 + 100.0 / param_5;
          *(char *)local_10 = '\0';
          if (1.0 <= local_18) {
            *(undefined1 *)
             (param_1 + (uVar18 + (*(byte *)((int)param_1 + uVar18 + 0x204) & 1) * 6) * 3 + 0x47) =
                 0;
            fVar19 = (float10)FUN_00fddce0((double)local_18);
            local_50 = (uint)(longlong)ROUND(fVar19);
            if (local_50 < 2) {
              pcVar2 = (char *)((int)param_1 + uVar18 + 0x204);
              *pcVar2 = *pcVar2 + '\x01';
            }
            else {
              *(undefined1 *)
               (param_1 +
               (uVar18 + (*(byte *)((int)param_1 + uVar18 + 0x204) - 1 & 1) * 6) * 3 + 0x47) = 0;
              iVar17 = FUN_0135faf0();
              local_30 = (local_50 - 2) * uVar15 - iVar17;
            }
            local_18 = local_18 - (float)fVar19;
          }
        }
      }
      if ((((cVar12 == '\0') || (local_8[3] != 0)) || ((char)*local_10 != '\0')) ||
         (cVar13 = '\x01', local_14[3] != 0)) {
        cVar13 = '\0';
      }
      uVar14 = FUN_0135fa20(iVar9 + uVar6 * uVar18 * 4 + local_2c * 4,
                            *(ushort *)(param_4 + 3) - local_2c,cVar13);
      local_2c = local_2c + (uVar14 & 0xffff);
      if ((cVar13 != '\0') && (cVar13 = FUN_0135f730(), cVar13 != '\0')) {
        param_4[2] = 0x11;
        goto LAB_0135e2bb;
      }
      if (local_2c == *(ushort *)(param_4 + 3)) {
        param_4[2] = 0x2d;
        goto LAB_0135e2bb;
      }
    } while ((cVar12 != '\0') || (uVar16 != 0));
    param_4[2] = 0x2b;
LAB_0135e2bb:
    local_38 = local_38 + 1;
    local_8 = local_8 + 5;
    local_10 = local_10 + 3;
    local_14 = local_14 + 6;
    uVar18 = uVar18 + 1;
    if ((uint)param_1[0x87] <= uVar18) {
      *(short *)((int)param_2 + 0xe) = (short)uVar16;
      *(undefined2 *)((int)param_4 + 0xe) = (undefined2)local_2c;
      param_1[0x8a] = (int)local_18;
      param_1[0x8b] = local_30;
      *(undefined1 *)(param_1 + 0x8c) = uVar11;
      *(char *)((int)param_1 + 0x231) = cStack00000017;
      return;
    }
  } while( true );
}

// 0135E340  FUN_0135e340  size=1142  [run]
void __thiscall
FUN_0135e340(float *param_1,undefined4 param_2,int param_3,float param_4,undefined4 param_5,
            float param_6)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = (float10)param_3;
  if (param_3 < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  fVar5 = (float)fVar1;
  fVar4 = fVar5 * 0.5 * 0.9;
  if (fVar4 <= param_4) {
    param_4 = fVar4;
  }
  switch(param_2) {
  case 0:
    fVar1 = (float10)FUN_00fdc1f0();
    fVar7 = (float)fVar1;
    fVar10 = fVar7 - 1.0;
    fVar2 = ((float10)param_4 * (float10)6.2831855) / (float10)fVar5;
    fVar4 = fVar7 + 1.0;
    fVar3 = (float10)fcos(fVar2);
    fVar11 = fVar10 * (float)fVar3;
    fVar8 = fVar4 * (float)fVar3;
    fVar5 = fVar4 - fVar11;
    fVar9 = (fVar8 + fVar10) * -2.0;
    fVar11 = fVar11 + fVar4;
    fVar2 = (float10)fsin(fVar2);
    fVar6 = (float)(fVar2 * (float10)0.5 *
                    SQRT(((float10)1 / fVar1 + fVar1) * (float10)(float)(undefined *)0x0 +
                         (float10)2.0) * SQRT(fVar1) * (float10)2.0);
    fVar4 = (fVar5 - fVar6) * fVar7;
    fVar5 = (fVar5 + fVar6) * fVar7;
    fVar7 = (fVar10 - fVar8) * fVar7 * 2.0;
    fVar10 = fVar11 + fVar6;
    fVar11 = fVar11 - fVar6;
    break;
  case 1:
    fVar1 = ((float10)param_4 * (float10)6.2831855) / fVar1;
    fVar2 = (float10)fcos(fVar1);
    fVar3 = (float10)FUN_00fdc1f0();
    fVar1 = (float10)fsin((float10)(float)fVar1);
    fVar7 = (float)fVar2 * -2.0;
    fVar11 = (float)(fVar1 / ((float10)param_6 + (float10)param_6));
    fVar5 = fVar11 * (float)fVar3;
    fVar11 = fVar11 / (float)fVar3;
    fVar4 = 1.0 - fVar5;
    fVar5 = fVar5 + 1.0;
    fVar10 = fVar11 + 1.0;
    fVar11 = 1.0 - fVar11;
    fVar9 = fVar7;
    break;
  case 2:
    fVar1 = (float10)FUN_00fdc1f0();
    fVar4 = (float)fVar1;
    fVar11 = fVar4 + 1.0;
    fVar2 = ((float10)param_4 * (float10)6.2831855) / (float10)fVar5;
    fVar8 = fVar4 - 1.0;
    fVar3 = (float10)fcos(fVar2);
    fVar5 = fVar8 * (float)fVar3;
    fVar6 = fVar11 * (float)fVar3;
    fVar10 = fVar5 + fVar11;
    fVar11 = fVar11 - fVar5;
    fVar7 = (fVar6 + fVar8) * fVar4 * -2.0;
    fVar2 = (float10)fsin(fVar2);
    fVar9 = (float)(fVar2 * (float10)0.5 *
                    SQRT(((float10)1 / fVar1 + fVar1) * (float10)(float)(undefined *)0x0 +
                         (float10)2.0) * SQRT(fVar1) * (float10)2.0);
    fVar5 = (fVar10 + fVar9) * fVar4;
    fVar4 = (fVar10 - fVar9) * fVar4;
    fVar10 = fVar11 + fVar9;
    fVar11 = fVar11 - fVar9;
    fVar9 = (fVar8 - fVar6) * 2.0;
    break;
  default:
    fVar1 = (float10)fptan(((float10)param_4 * (float10)3.1415927) / fVar1);
    fVar4 = (float)((float10)1 / fVar1);
    param_5 = fVar4 * 1.4142135;
    fVar10 = fVar4 * fVar4 + 1.0;
    fVar5 = 1.0 / (fVar10 + param_5);
    fVar7 = fVar5 * 2.0;
    fVar9 = (1.0 - fVar4 * fVar4) * fVar7;
    goto LAB_0135e758;
  case 4:
    fVar1 = (float10)fptan(((float10)param_4 * (float10)3.1415927) / fVar1);
    fVar4 = (float)fVar1;
    param_5 = fVar4 * 1.4142135;
    fVar10 = fVar4 * fVar4 + 1.0;
    fVar5 = 1.0 / (fVar10 + param_5);
    fVar7 = fVar5 * -2.0;
    fVar9 = -((fVar4 * fVar4 - 1.0) * fVar7);
LAB_0135e758:
    fVar11 = (fVar10 - param_5) * fVar5;
    fVar10 = 1.0;
    fVar4 = fVar5;
    break;
  case 5:
    fVar7 = 0.0;
    fVar1 = ((float10)param_4 * (float10)6.2831855) / fVar1;
    fVar2 = (float10)fsin(fVar1);
    fVar2 = fVar2 / ((float10)param_6 + (float10)param_6);
    fVar5 = (float)fVar2;
    fVar4 = (float)-fVar2;
    fVar10 = (float)(fVar2 + (float10)1);
    fVar1 = (float10)fcos(fVar1);
    fVar11 = (float)((float10)1 - fVar2);
    fVar9 = (float)(fVar1 * (float10)-2.0);
    break;
  case 6:
    fVar5 = 1.0;
    fVar4 = 1.0;
    fVar1 = ((float10)param_4 * (float10)6.2831855) / fVar1;
    fVar2 = (float10)fsin(fVar1);
    fVar2 = fVar2 / ((float10)param_6 + (float10)param_6);
    fVar1 = (float10)fcos(fVar1);
    fVar7 = (float)(fVar1 * (float10)-2.0);
    fVar10 = (float)(fVar2 + (float10)1);
    fVar11 = (float)((float10)1 - fVar2);
    fVar9 = (float)(fVar1 * (float10)-2.0);
  }
  fVar10 = 1.0 / fVar10;
  param_1[1] = fVar10 * fVar7;
  *param_1 = fVar10 * fVar5;
  param_1[2] = fVar10 * fVar4;
  param_1[3] = -(fVar10 * fVar9);
  param_1[4] = -(fVar10 * fVar11);
  return;
}

// 0135E7E0  FUN_0135e7e0  size=124  [run]
void __fastcall FUN_0135e7e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

// 0135E860  FUN_0135e860  size=711  [run]
void __thiscall FUN_0135e860(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar2 = param_1 + param_4 * 4 + 5;
  local_14 = pfVar2[1];
  pfVar1 = param_2 + param_3;
  local_18 = *pfVar2;
  local_10 = pfVar2[2];
  local_c = pfVar2[3];
  if (param_2 < pfVar1) {
    iVar8 = (int)pfVar1 + (3 - (int)param_2);
    if (3 < (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) {
      fVar3 = param_1[2];
      fVar4 = *param_1;
      fVar5 = param_1[1];
      fVar6 = param_1[4];
      fVar7 = param_1[3];
      do {
        fVar11 = *param_2;
        fVar9 = fVar7 * local_10 +
                fVar6 * local_c + fVar5 * local_18 + fVar4 * *param_2 + fVar3 * local_14;
        *param_2 = fVar9;
        fVar12 = param_2[1];
        fVar10 = fVar7 * fVar9 +
                 fVar6 * local_10 + fVar5 * fVar11 + fVar4 * param_2[1] + fVar3 * local_18;
        param_2[1] = fVar10;
        local_14 = param_2[2];
        local_c = fVar7 * fVar10 +
                  fVar6 * fVar9 + fVar5 * fVar12 + fVar4 * param_2[2] + fVar3 * fVar11;
        param_2[2] = local_c;
        local_18 = param_2[3];
        local_10 = fVar7 * local_c +
                   fVar6 * fVar10 + fVar5 * local_14 + fVar4 * param_2[3] + fVar3 * fVar12;
        param_2[3] = local_10;
        param_2 = param_2 + 4;
      } while ((int)param_2 < (int)(pfVar1 + -3));
    }
    if (param_2 < pfVar1) {
      fVar3 = *param_1;
      fVar4 = param_1[2];
      fVar5 = param_1[1];
      fVar6 = param_1[4];
      fVar7 = param_1[3];
      fVar11 = local_14;
      fVar12 = local_c;
      do {
        local_14 = local_18;
        local_c = local_10;
        local_18 = *param_2;
        local_10 = fVar7 * local_c +
                   fVar6 * fVar12 + fVar5 * local_14 + fVar3 * *param_2 + fVar4 * fVar11;
        *param_2 = local_10;
        param_2 = param_2 + 1;
        fVar11 = local_14;
        fVar12 = local_c;
      } while (param_2 < pfVar1);
    }
  }
  *pfVar2 = local_18;
  pfVar2[1] = local_14;
  pfVar2[2] = local_10;
  pfVar2[3] = local_c;
  return;
}

// 0135EB30  FUN_0135eb30  size=85  [run]
void FUN_0135eb30(int *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  for (uVar2 = param_1[1]; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar3 = uVar3 + 1;
  }
  uVar1 = *(undefined2 *)((int)param_1 + 0xe);
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      FUN_0135e860(*param_1 + *(ushort *)(param_1 + 3) * uVar2 * 4,uVar1,uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

// 0135EB90  FUN_0135eb90  size=15  [run]
void __fastcall FUN_0135eb90(undefined4 *param_1)

{
  FUN_01360fc0();
  param_1[3] = *param_1;
  return;
}

// 0135EBA0  FUN_0135eba0  size=49  [run]
void __fastcall FUN_0135eba0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x234);
    do {
      FUN_01360fc0();
      puVar1[3] = *puVar1;
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 7;
    } while (uVar2 < *(uint *)(param_1 + 0x21c));
  }
  return;
}

// 0135EBE0  FUN_0135ebe0  size=105  [run]
int __thiscall
FUN_0135ebe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  FUN_0135d820(param_2,param_3,param_4,param_5,param_6);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    do {
      iVar1 = FUN_0135fa40(param_2,(*(uint *)(param_1 + 0x224) >> 2) + *(uint *)(param_1 + 0x224));
      if (iVar1 != 1) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x21c));
  }
  return 1;
}

// 0135EC50  FUN_0135ec50  size=65  [run]
void __thiscall FUN_0135ec50(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    do {
      FUN_0135fa80(param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x21c));
  }
  FUN_0135da30(param_2);
  return;
}

// 0135ECA0  FUN_0135eca0  size=55  [run]
void __fastcall FUN_0135eca0(int param_1)

{
  uint uVar1;
  
  FUN_0135db10();
  uVar1 = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    do {
      FUN_01360fc0();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x21c));
  }
  return;
}

// 0135ECE0  FUN_0135ece0  size=1230  [run]
undefined4 __thiscall
FUN_0135ece0(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,int param_6,
            float param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  undefined1 uVar5;
  uint uVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  uint local_44;
  undefined4 local_30;
  uint local_28;
  uint local_20;
  uint local_18;
  int local_10;
  float local_c;
  
  uVar6 = *(uint *)(param_1 + 0x224);
  fVar4 = *(float *)(param_1 + 0x110);
  uVar9 = uVar6 >> 2;
  fVar7 = (float)(int)uVar6;
  local_30 = 0x2d;
  if ((int)uVar6 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  uVar5 = *(undefined1 *)(param_1 + 0x230);
  local_28 = *(uint *)(param_1 + 0x22c);
  local_c = *(float *)(param_1 + 0x228);
  local_18 = 0;
  local_10 = 0;
  local_20 = 0;
  uVar10 = param_3;
  while (((uVar10 != 0 || (local_18 < param_3)) && (local_20 < 100))) {
    local_20 = local_20 + 1;
    uVar11 = uVar10;
    if (local_28 <= uVar10) {
      uVar11 = local_28;
    }
    local_28 = local_28 - uVar11;
    iVar12 = uVar10 - uVar11;
    uVar10 = 0;
    if ((param_2 != 0) && (iVar12 != 0)) {
      uVar10 = FUN_01361150(param_2 + (local_10 + uVar11) * 4,iVar12,param_7);
    }
    local_10 = local_10 + uVar11 + uVar10;
    uVar10 = iVar12 - (uVar10 & 0xffff);
    if ((*(char *)(param_1 + 0x11c +
                  (param_5 + (*(byte *)(param_5 + 0x204 + param_1) & 1) * 6) * 0xc) == '\0') &&
       (cVar8 = FUN_0135fd20(param_8,uVar6,param_4), cVar8 != '\0')) {
      FUN_0135faf0();
      FUN_01360c30(param_8,uVar6,0x3f800000);
      FUN_01360500(param_8,uVar6,*(undefined4 *)(param_1 + 0x20c));
      FUN_013604e0();
    }
    if ((*(char *)(param_1 + 0x11c +
                  (param_5 + (*(byte *)(param_5 + 0x204 + param_1) - 1 & 1) * 6) * 0xc) == '\0') &&
       (cVar8 = FUN_0135fd20(param_8,uVar6,param_4), cVar8 != '\0')) {
      FUN_0135faf0();
      FUN_01360c30(param_8,uVar6,0x3f800000);
      FUN_01360500(param_8,uVar6,*(undefined4 *)(param_1 + 0x20c));
      FUN_013604e0();
    }
    uVar11 = (uint)*(byte *)(param_5 + 0x204 + param_1);
    iVar12 = param_5 + (uVar11 - 1 & 1) * 6;
    if (((*(char *)(param_1 + 0x11c + iVar12 * 0xc) != '\0') &&
        (iVar1 = param_5 + (uVar11 & 1) * 6, *(char *)(param_1 + 0x11c + iVar1 * 0xc) != '\0')) &&
       (*(char *)(param_1 + 0x1ac + param_5 * 0xc) == '\0')) {
      FUN_01360590(*(undefined4 *)(param_1 + (iVar1 * 3 + 0x45) * 4),
                   *(undefined4 *)(param_1 + (iVar12 * 3 + 0x45) * 4),
                   *(undefined4 *)(param_1 + 0x1ec + param_5 * 4),uVar9,local_c,uVar5);
      uVar5 = 0;
    }
    pcVar2 = (char *)(param_1 + 0x1ac + param_5 * 0xc);
    if ((*(char *)(param_1 + 0x1ac + param_5 * 0xc) != '\0') &&
       (iVar12 = param_5 * 3 + 0xf,
       uVar6 <= (uint)(*(int *)(param_1 + iVar12 * 8) - *(int *)(param_1 + 0xc + iVar12 * 8)))) {
      FUN_01360530(param_8,uVar6,*(undefined4 *)(param_1 + 0x210));
      FUN_01360c30(param_8,uVar6,1.0 / ((fVar4 * 4.0) / fVar7));
      FUN_0135fa00(param_8,uVar9);
      local_c = local_c + 1.0 / param_7;
      *pcVar2 = '\0';
      if (1.0 <= local_c) {
        *(undefined1 *)
         (param_1 + 0x11c + (param_5 + (*(byte *)(param_5 + 0x204 + param_1) & 1) * 6) * 0xc) = 0;
        fVar13 = (float10)FUN_00fddce0((double)local_c);
        local_44 = (uint)(longlong)ROUND(fVar13);
        if (local_44 < 2) {
          pcVar3 = (char *)(param_5 + 0x204 + param_1);
          *pcVar3 = *pcVar3 + '\x01';
        }
        else {
          *(undefined1 *)
           (param_1 + 0x11c + (param_5 + (*(byte *)(param_5 + 0x204 + param_1) - 1 & 1) * 6) * 0xc)
               = 0;
          iVar12 = FUN_0135faf0();
          local_28 = (local_44 - 2) * uVar9 - iVar12;
        }
        local_c = local_c - (float)fVar13;
      }
    }
    if ((((char)param_4 == '\0') || (*(int *)(param_1 + 0x240 + param_5 * 0x1c) != 0)) ||
       ((*pcVar2 != '\0' || (cVar8 = '\x01', *(int *)(param_1 + 0x84 + param_5 * 0x18) != 0)))) {
      cVar8 = '\0';
    }
    uVar11 = FUN_0135fa20(param_6 + local_18 * 4,param_3 - local_18,cVar8);
    local_18 = local_18 + (uVar11 & 0xffff);
    if ((cVar8 != '\0') && (cVar8 = FUN_0135f730(), cVar8 != '\0')) {
      local_30 = 0x11;
    }
  }
  if (param_5 == *(int *)(param_1 + 0x21c) + -1) {
    *(float *)(param_1 + 0x228) = local_c;
    *(uint *)(param_1 + 0x22c) = local_28;
    *(undefined1 *)(param_1 + 0x230) = uVar5;
  }
  return local_30;
}

// 0135F1C0  FUN_0135f1c0  size=366  [run]
void __fastcall FUN_0135f1c0(float *param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = (param_2 >> 2) * 4;
  fVar7 = (float)iVar4;
  pfVar1 = param_1 + param_2;
  if (iVar4 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  fVar7 = (param_4 - param_3) / fVar7;
  pfVar3 = param_1 + (param_2 >> 2) * 4;
  fVar2 = fVar7 * 4.0;
  fVar5 = fVar7 + param_3;
  fVar6 = fVar5 + fVar7;
  fVar7 = fVar6 + fVar7;
  fVar8 = param_3;
  for (; param_1 < pfVar3; param_1 = param_1 + 4) {
    *param_1 = *param_1 * fVar8;
    param_1[1] = param_1[1] * fVar5;
    param_1[2] = param_1[2] * fVar6;
    param_1[3] = param_1[3] * fVar7;
    fVar8 = fVar8 + fVar2;
    fVar5 = fVar5 + fVar2;
    fVar6 = fVar6 + fVar2;
    fVar7 = fVar7 + fVar2;
  }
  if (param_1 < pfVar1) {
    fVar7 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = (param_4 - param_3) / fVar7;
    iVar4 = (int)pfVar1 + (3 - (int)param_1);
    if (3 < (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) {
      do {
        *param_1 = *param_1 * param_3;
        param_1[1] = (fVar7 + param_3) * param_1[1];
        param_3 = fVar7 + fVar7 + param_3;
        param_1[2] = param_1[2] * param_3;
        param_3 = fVar7 + param_3;
        param_1[3] = param_1[3] * param_3;
        param_1 = param_1 + 4;
        param_3 = fVar7 + param_3;
      } while ((int)param_1 < (int)(pfVar1 + -3));
    }
    if (param_1 < pfVar1) {
      do {
        *param_1 = *param_1 * param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + fVar7;
      } while (param_1 < pfVar1);
      return;
    }
  }
  return;
}

// 0135F330  FUN_0135f330  size=181  [run]
void __fastcall FUN_0135f330(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 0135F3F0  FUN_0135f3f0  size=54  [run]
void FUN_0135f3f0(float param_1,float param_2)

{
  if (param_2 == param_1) {
    FUN_0135f330();
    return;
  }
  FUN_0135f1c0(param_1,param_2);
  return;
}

// 0135F430  FUN_0135f430  size=186  [run]
void FUN_0135f430(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int iVar1;
  
  if (*(char *)(param_2 + (param_4 + 0x40) * 0x1c) != '\0') {
    FUN_0135ece0(param_1,param_7,param_8,param_3,param_5,param_9,param_10);
    iVar1 = param_2 + param_4 * 0x1c;
    if (*(int *)(param_2 + 0x6e8 + param_4 * 0x1c) != 0) {
      FUN_0135e860(param_5,param_7,param_3);
    }
    FUN_01353440(param_6,param_5,0x3f800000,0x3f800000,*(undefined4 *)(iVar1 + 0x748),
                 *(undefined4 *)(iVar1 + 0x6fc),param_7);
  }
  return;
}

// 0135F4F0  FUN_0135f4f0  size=553  [run]
void FUN_0135f4f0(int *param_1,uint param_2,int param_3)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_1c;
  int local_14;
  int local_8;
  
  iVar2 = param_2;
  FUN_013517e0(param_1,*(int *)(param_2 + 0x72c) * 0xc);
  uVar3 = (uint)*(ushort *)((int)param_1 + 0xe);
  if (*(ushort *)((int)param_1 + 0xe) != 0) {
    _Dst = (void *)(param_3 + uVar3 * 4);
    uVar1 = param_1[1];
    local_14 = 0;
    local_8 = 0;
    param_2 = 1;
    local_1c = 6;
    do {
      if ((uVar1 & param_2) != 0) {
        if ((param_2 & 8) == 0) {
          iVar4 = (uint)*(ushort *)(param_1 + 3) * local_14;
          local_14 = local_14 + 1;
          iVar4 = *param_1 + iVar4 * 4;
        }
        else {
          iVar4 = FUN_01351740();
        }
        if ((*(char *)(iVar2 + 0x798) != '\0') && ((*(uint *)(iVar2 + 0x78c) & param_2) != 0)) {
          _memset(_Dst,0,uVar3 * 4);
          FUN_0135f430(iVar4,iVar2,local_8,0,param_3,_Dst,uVar3,param_1[2] == 0x11,
                       *(undefined4 *)(iVar2 + 0x6f8),param_3 + uVar3 * 8);
          FUN_0135f430(iVar4,iVar2,local_8,1,param_3,_Dst,uVar3,param_1[2] == 0x11,
                       *(undefined4 *)(iVar2 + 0x714),param_3 + uVar3 * 8);
          local_8 = local_8 + 1;
        }
        if (*(char *)(iVar2 + 0x731) != '\0') {
          FUN_01352810(iVar4,uVar3);
        }
        if (((*(char *)(iVar2 + 0x798) == '\0') || ((*(uint *)(iVar2 + 0x78c) & param_2) == 0)) &&
           ((*(int *)(iVar2 + 0x720) != 6 || ((param_2 != 2 || ((uVar1 & 2) == 0)))))) {
          if (*(float *)(iVar2 + 0x724) == *(float *)(iVar2 + 0x770)) {
            FUN_0135f330();
          }
          else {
            FUN_0135f1c0(*(float *)(iVar2 + 0x770),*(float *)(iVar2 + 0x724));
          }
        }
        else {
          FUN_01353440(iVar4,_Dst,*(undefined4 *)(iVar2 + 0x770),*(undefined4 *)(iVar2 + 0x724),
                       *(undefined4 *)(iVar2 + 0x774),*(undefined4 *)(iVar2 + 0x728),uVar3);
        }
      }
      param_2 = param_2 << 1 | (uint)((int)param_2 < 0);
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    puVar5 = (undefined4 *)(iVar2 + 0x6e8);
    puVar6 = (undefined4 *)(iVar2 + 0x734);
    for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

// 0135F730  FUN_0135f730  size=55  [run]
uint __fastcall FUN_0135f730(uint *param_1)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  
  if (param_1[3] != 0) {
    return in_EAX & 0xffffff00;
  }
  uVar3 = (param_1[5] + param_1[1]) % *param_1;
  uVar1 = param_1[2];
  if (uVar1 <= uVar3) {
    return CONCAT31((int3)(uVar3 - uVar1 >> 8),uVar3 - uVar1 == 0);
  }
  iVar2 = (uVar1 - uVar3) + *param_1;
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0);
}

// 0135F770  FUN_0135f770  size=26  [run]
void __thiscall FUN_0135f770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x14) = param_4;
  FUN_0135fa40(param_2,param_3);
  return;
}

// 0135F790  FUN_0135f790  size=376  [run]
uint __thiscall FUN_0135f790(uint *param_1,float *param_2,int param_3,float *param_4)

{
  uint in_EAX;
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != (float *)0x0) {
    in_EAX = param_1[3];
    uVar5 = param_1[5];
    if (uVar5 <= *param_1 - in_EAX) {
      uVar3 = *param_1 - param_1[1];
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      uVar4 = 0;
      pfVar1 = param_4 + param_1[1];
      pfVar2 = param_2;
      if (3 < (int)uVar3) {
        iVar6 = (uVar3 - 4 >> 2) + 1;
        uVar4 = iVar6 * 4;
        do {
          *pfVar1 = *pfVar1 + *pfVar2;
          pfVar1[1] = pfVar2[1] + pfVar1[1];
          pfVar1[2] = pfVar2[2] + pfVar1[2];
          pfVar1[3] = pfVar2[3] + pfVar1[3];
          pfVar1 = pfVar1 + 4;
          pfVar2 = pfVar2 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (uVar4 < uVar3) {
        iVar6 = (int)pfVar2 - (int)pfVar1;
        iVar7 = uVar3 - uVar4;
        do {
          *pfVar1 = *(float *)(iVar6 + (int)pfVar1) + *pfVar1;
          pfVar1 = pfVar1 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar5 = uVar5 - uVar3;
      if (uVar5 != 0) {
        param_2 = param_2 + uVar3;
        uVar3 = 0;
        if (3 < (int)uVar5) {
          iVar6 = (uVar5 - 4 >> 2) + 1;
          uVar3 = iVar6 * 4;
          do {
            *param_4 = *param_2 + *param_4;
            param_4[1] = param_2[1] + param_4[1];
            param_4[2] = param_2[2] + param_4[2];
            param_4[3] = param_2[3] + param_4[3];
            param_4 = param_4 + 4;
            param_2 = param_2 + 4;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (uVar3 < uVar5) {
          iVar6 = (int)param_2 - (int)param_4;
          iVar7 = uVar5 - uVar3;
          do {
            *param_4 = *(float *)(iVar6 + (int)param_4) + *param_4;
            param_4 = param_4 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      uVar5 = param_1[3];
      param_1[3] = uVar5 + param_3;
      param_1[1] = (param_1[1] + param_3) % *param_1;
      return CONCAT31((int3)(uVar5 + param_3 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

// 0135F910  FUN_0135f910  size=238  [run]
uint __thiscall FUN_0135f910(uint *param_1,void *param_2,uint param_3,char param_4,void *param_5)

{
  size_t _Size;
  size_t _Size_00;
  uint uVar1;
  
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    if ((param_4 == '\0') || (param_1[3] != 0)) {
      uVar1 = param_1[3];
      _param_4 = uVar1;
      if (param_3 <= uVar1) {
        _param_4 = param_3;
      }
      param_1[3] = uVar1 - _param_4;
    }
    else {
      _param_4 = (param_1[5] + param_1[1]) % *param_1;
      uVar1 = param_1[2];
      if (uVar1 < _param_4) {
        _param_4 = _param_4 - uVar1;
      }
      else {
        _param_4 = (uVar1 - _param_4) + *param_1;
      }
      if (param_3 <= _param_4) {
        _param_4 = param_3;
      }
    }
    uVar1 = *param_1 - param_1[2];
    param_3 = _param_4;
    if (uVar1 <= _param_4) {
      param_3 = uVar1;
    }
    _Size = param_3 * 4;
    FID_conflict__memcpy(param_2,(void *)((int)param_5 + param_1[2] * 4),_Size);
    _memset((void *)((int)param_5 + param_1[2] * 4),0,_Size);
    if (_param_4 - param_3 != 0) {
      _Size_00 = (_param_4 - param_3) * 4;
      FID_conflict__memcpy((void *)(_Size + (int)param_2),param_5,_Size_00);
      _memset(param_5,0,_Size_00);
    }
    param_1[2] = (param_1[2] + _param_4) % *param_1;
    return _param_4;
  }
  return 0;
}

// 0135FA00  FUN_0135fa00  size=24  [run]
void __thiscall FUN_0135fa00(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0135f790(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  return;
}

// 0135FA20  FUN_0135fa20  size=28  [run]
void __thiscall FUN_0135fa20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0135f910(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x10));
  return;
}

// 0135FA40  FUN_0135fa40  size=55  [run]
int __thiscall FUN_0135fa40(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_3;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  iVar1 = (**(code **)(*param_2 + 4))(param_3 * 4);
  param_1[4] = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 0135FA80  FUN_0135fa80  size=43  [run]
void __thiscall FUN_0135fa80(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 8))(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 0135FAB0  FUN_0135fab0  size=51  [run]
void __fastcall FUN_0135fab0(int *param_1)

{
  if ((void *)param_1[4] != (void *)0x0) {
    _memset((void *)param_1[4],0,*param_1 * 4);
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

// 0135FAF0  FUN_0135faf0  size=42  [run]
uint __thiscall FUN_0135faf0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1[3];
  if (uVar1 <= param_2) {
    param_2 = uVar1;
  }
  param_1[3] = uVar1 - param_2;
  param_1[2] = (param_1[2] + param_2) % *param_1;
  return param_2;
}

// 0135FB20  FUN_0135fb20  size=137  [run]
uint __thiscall FUN_0135fb20(uint *param_1,void *param_2,uint param_3,void *param_4)

{
  uint uVar1;
  
  uVar1 = *param_1 - param_1[3];
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    uVar1 = *param_1 - param_1[1];
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    if (uVar1 != 0) {
      FID_conflict__memcpy((void *)((int)param_4 + param_1[1] * 4),param_2,uVar1 * 4);
    }
    if (param_3 - uVar1 != 0) {
      FID_conflict__memcpy(param_4,(void *)((int)param_2 + uVar1 * 4),(param_3 - uVar1) * 4);
    }
    param_1[3] = param_1[3] + param_3;
    param_1[1] = (param_1[1] + param_3) % *param_1;
    return param_3;
  }
  return 0;
}

// 0135FBB0  FUN_0135fbb0  size=138  [run]
uint __thiscall FUN_0135fbb0(uint *param_1,void *param_2,uint param_3,void *param_4)

{
  uint uVar1;
  
  if (param_1[3] < param_3) {
    param_3 = param_1[3];
  }
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    uVar1 = *param_1 - param_1[2];
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    FID_conflict__memcpy(param_2,(void *)((int)param_4 + param_1[2] * 4),uVar1 * 4);
    if (param_3 - uVar1 != 0) {
      FID_conflict__memcpy((void *)(uVar1 * 4 + (int)param_2),param_4,(param_3 - uVar1) * 4);
    }
    param_1[3] = param_1[3] - param_3;
    param_1[2] = (param_1[2] + param_3) % *param_1;
    return param_3;
  }
  return 0;
}

// 0135FC40  FUN_0135fc40  size=156  [run]
undefined4 __thiscall
FUN_0135fc40(int *param_1,void *param_2,uint param_3,char param_4,void *param_5)

{
  uint uVar1;
  
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    if (param_4 == '\0') {
      if (param_3 <= (uint)param_1[3]) {
LAB_0135fc91:
        uVar1 = *param_1 - param_1[2];
        if (param_3 < uVar1) {
          uVar1 = param_3;
        }
        FID_conflict__memcpy(param_2,(void *)((int)param_5 + param_1[2] * 4),uVar1 * 4);
        if (param_3 - uVar1 != 0) {
          FID_conflict__memcpy((void *)(uVar1 * 4 + (int)param_2),param_5,(param_3 - uVar1) * 4);
        }
        return 1;
      }
    }
    else {
      uVar1 = param_1[3];
      if (uVar1 != 0) {
        if (param_3 <= uVar1) {
          uVar1 = param_3;
        }
        if (param_3 - uVar1 != 0) {
          _memset((void *)((int)param_2 + uVar1 * 4),0,(param_3 - uVar1) * 4);
        }
        goto LAB_0135fc91;
      }
    }
  }
  return 0;
}

// 0135FCE0  FUN_0135fce0  size=24  [run]
void __thiscall FUN_0135fce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0135fb20(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  return;
}

// 0135FD00  FUN_0135fd00  size=24  [run]
void __thiscall FUN_0135fd00(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0135fbb0(param_2,param_3,*(undefined4 *)(param_1 + 0x10));
  return;
}

// 0135FD20  FUN_0135fd20  size=28  [run]
void __thiscall FUN_0135fd20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0135fc40(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x10));
  return;
}

// 0135FD40  FUN_0135fd40  size=181  [run]
void __fastcall FUN_0135fd40(float *param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float in_XMM0_Da;
  
  if (in_XMM0_Da != 1.0) {
    pfVar1 = param_1 + param_2;
    pfVar3 = param_1 + (param_2 & 0xfffffffc);
    for (; param_1 < pfVar3; param_1 = param_1 + 4) {
      *param_1 = *param_1 * in_XMM0_Da;
      param_1[1] = param_1[1] * in_XMM0_Da;
      param_1[2] = param_1[2] * in_XMM0_Da;
      param_1[3] = param_1[3] * in_XMM0_Da;
    }
    if (param_1 < pfVar1) {
      iVar2 = (int)pfVar1 + (3 - (int)param_1);
      if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
        do {
          *param_1 = *param_1 * in_XMM0_Da;
          param_1[1] = param_1[1] * in_XMM0_Da;
          param_1[2] = in_XMM0_Da * param_1[2];
          param_1[3] = param_1[3] * in_XMM0_Da;
          param_1 = param_1 + 4;
        } while ((int)param_1 < (int)(pfVar1 + -3));
      }
      for (; param_1 < pfVar1; param_1 = param_1 + 1) {
        *param_1 = *param_1 * in_XMM0_Da;
      }
    }
  }
  return;
}

// 0135FE00  FUN_0135fe00  size=20  [run]
void FUN_0135fe00(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 <= in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 0135FE20  FUN_0135fe20  size=20  [run]
void FUN_0135fe20(float param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  float in_XMM0_Da;
  
  if (param_1 < in_XMM0_Da) {
    *in_EAX = param_2;
  }
  return;
}

// 0135FE40  FUN_0135fe40  size=49  [run]
int __thiscall FUN_0135fe40(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  
  param_1[1] = param_3;
  iVar1 = (**(code **)(*param_2 + 4))((param_3 >> 1) * 8 + 8);
  *param_1 = iVar1;
  return (-(uint)(iVar1 != 0) & 0xffffffcd) + 0x34;
}

// 0135FE80  FUN_0135fe80  size=38  [run]
void __thiscall FUN_0135fe80(int *param_1,int *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 8))(*param_1);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

// 0135FEB0  FUN_0135feb0  size=172  [run]
void __thiscall FUN_0135feb0(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar4 = *(uint *)(param_1 + 4) >> 1;
  if (1 < uVar4) {
    iVar5 = uVar4 - 1;
    pfVar2 = param_2;
    do {
      pfVar3 = pfVar2 + 2;
      fVar6 = (float10)pfVar2[3];
      iVar5 = iVar5 + -1;
      fVar7 = (float10)*pfVar3;
      *pfVar3 = (float)SQRT(fVar7 * fVar7 + fVar6 * fVar6);
      fVar6 = (float10)fpatan(fVar6,fVar7);
      pfVar2[3] = (float)-fVar6;
      pfVar2 = pfVar3;
    } while (iVar5 != 0);
  }
  fVar1 = *param_2;
  fVar6 = (float10)param_2[1];
  *(undefined1 *)(param_1 + 9) = 1;
  fVar7 = (float10)fVar1;
  *param_2 = (float)SQRT(fVar7 * fVar7 + fVar6 * fVar6);
  fVar6 = (float10)fpatan(fVar6,fVar7);
  param_2[1] = (float)fVar6;
  fVar6 = (float10)param_2[uVar4 * 2 + 1];
  fVar7 = (float10)param_2[uVar4 * 2];
  param_2[uVar4 * 2] = (float)SQRT(fVar7 * fVar7 + fVar6 * fVar6);
  fVar6 = (float10)fpatan(fVar6,fVar7);
  param_2[uVar4 * 2 + 1] = (float)fVar6;
  return;
}

// 0135FF60  FUN_0135ff60  size=170  [run]
void __thiscall FUN_0135ff60(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  
  uVar5 = *(uint *)(param_1 + 4) >> 1;
  if (1 < uVar5) {
    iVar6 = uVar5 - 1;
    pfVar3 = param_2;
    do {
      pfVar4 = pfVar3 + 2;
      fVar1 = *pfVar4;
      iVar6 = iVar6 + -1;
      fVar7 = (float10)fcos((float10)pfVar3[3] * (float10)-1.0);
      *pfVar4 = (float)(fVar7 * (float10)fVar1);
      fVar7 = (float10)fsin((float10)pfVar3[3] * (float10)-1.0);
      pfVar3[3] = (float)(fVar7 * (float10)fVar1);
      pfVar3 = pfVar4;
    } while (iVar6 != 0);
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  *(undefined1 *)(param_1 + 9) = 0;
  fVar7 = (float10)fcos((float10)fVar2);
  *param_2 = (float)(fVar7 * (float10)fVar1);
  fVar7 = (float10)fsin((float10)fVar2);
  param_2[1] = (float)(fVar7 * (float10)fVar1);
  fVar1 = param_2[uVar5 * 2];
  fVar2 = param_2[uVar5 * 2 + 1];
  fVar7 = (float10)fcos((float10)fVar2);
  param_2[uVar5 * 2] = (float)(fVar7 * (float10)fVar1);
  fVar7 = (float10)fsin((float10)fVar2);
  param_2[uVar5 * 2 + 1] = (float)(fVar7 * (float10)fVar1);
  return;
}

// 01360010  FUN_01360010  size=37  [run]
void __thiscall
FUN_01360010(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  FUN_01360dc0(param_4,param_2,param_5);
  *(undefined2 *)(param_1 + 8) = 1;
  return;
}

// 01360040  FUN_01360040  size=87  [run]
void __thiscall
FUN_01360040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_0135ff60(param_5);
  }
  FUN_01360ed0(param_4,param_5,param_2);
  FUN_0135fd40();
  return;
}

// 013600A0  FUN_013600a0  size=1077  [run]
void __thiscall
FUN_013600a0(int param_1,int param_2,int param_3,int param_4,int param_5,float param_6,char param_7,
            int param_8)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = *(uint *)(param_1 + 4) >> 1;
  uVar8 = uVar7 + 1;
  uVar9 = 0;
  if (3 < (int)uVar8) {
    pfVar2 = (float *)(param_3 + 8);
    pfVar5 = (float *)(param_8 + 0x10);
    fVar11 = 1.0 - param_6;
    do {
      fVar1 = *pfVar2;
      pfVar5[-4] = *(float *)(param_2 + uVar9 * 8) * fVar11 + pfVar2[-2] * param_6;
      fVar12 = pfVar2[2];
      *(float *)((param_8 - param_3) + (int)pfVar2) =
           *(float *)((param_2 - param_3) + (int)pfVar2) * fVar11 + fVar1 * param_6;
      fVar1 = pfVar2[4];
      *pfVar5 = *(float *)((param_2 - param_8) + (int)pfVar5) * fVar11 + fVar12 * param_6;
      pfVar5[2] = *(float *)(param_2 + 0x18 + uVar9 * 8) * fVar11 + fVar1 * param_6;
      uVar9 = uVar9 + 4;
      pfVar2 = pfVar2 + 8;
      pfVar5 = pfVar5 + 8;
    } while (uVar9 < uVar7 - 2);
  }
  if (uVar9 < uVar8) {
    pfVar2 = (float *)(param_3 + uVar9 * 8);
    iVar6 = uVar8 - uVar9;
    do {
      *(float *)((param_8 - param_3) + (int)pfVar2) =
           *(float *)((param_2 - param_3) + (int)pfVar2) * (1.0 - param_6) + *pfVar2 * param_6;
      pfVar2 = pfVar2 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (param_7 != '\0') {
    uVar9 = 0;
    if (3 < (int)uVar8) {
      iVar6 = (uVar7 - 3 >> 2) + 1;
      uVar9 = iVar6 * 4;
      puVar3 = (undefined4 *)(param_4 + 8);
      puVar10 = (undefined4 *)(param_2 + 0xc);
      do {
        puVar3[-2] = puVar10[-2];
        iVar6 = iVar6 + -1;
        puVar3[-1] = *puVar10;
        *puVar3 = puVar10[2];
        puVar3[1] = puVar10[4];
        puVar3 = puVar3 + 4;
        puVar10 = puVar10 + 8;
      } while (iVar6 != 0);
    }
    if (uVar9 < uVar8) {
      puVar3 = (undefined4 *)(param_2 + 4 + uVar9 * 8);
      do {
        uVar9 = uVar9 + 1;
        *(undefined4 *)(param_4 + -4 + uVar9 * 4) = *puVar3;
        puVar3 = puVar3 + 2;
      } while (uVar9 < uVar8);
    }
  }
  fVar11 = (float)param_5;
  if (param_5 < 0) {
    fVar11 = fVar11 + 4.2949673e+09;
  }
  fVar1 = (float)*(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = (fVar11 * 6.2831855) / fVar1;
  fVar11 = 0.0;
  uVar9 = 0;
  if (3 < (int)uVar8) {
    _param_7 = (float *)(param_8 + 0x1c);
    pfVar2 = (float *)(param_2 + 0xc);
    pfVar5 = (float *)(param_3 + 4);
    param_5 = (uVar7 - 3 >> 2) + 1;
    pfVar4 = (float *)(param_4 + 8);
    uVar9 = param_5 * 4;
    do {
      fVar12 = pfVar4[-2];
      fVar13 = *pfVar5;
      *(float *)((param_8 - param_3) + (int)pfVar5) = fVar12;
      fVar12 = ((fVar13 - *(float *)((param_2 - param_3) + (int)pfVar5)) - fVar11) + fVar11 + fVar12
      ;
      pfVar4[-2] = fVar12;
      if (3.1415927 <= fVar12) {
        pfVar4[-2] = fVar12 - 6.2831855;
      }
      if (pfVar4[-2] < -3.1415927) {
        pfVar4[-2] = pfVar4[-2] + 6.2831855;
      }
      fVar11 = fVar11 + fVar1;
      if (6.2831855 <= fVar11) {
        fVar11 = fVar11 - 6.2831855;
      }
      fVar12 = ((pfVar5[2] - *pfVar2) - fVar11) + fVar11 + pfVar4[-1];
      *(float *)((int)pfVar2 + (param_8 - param_2)) = pfVar4[-1];
      pfVar4[-1] = fVar12;
      if (3.1415927 <= fVar12) {
        pfVar4[-1] = fVar12 - 6.2831855;
      }
      if (pfVar4[-1] < -3.1415927) {
        pfVar4[-1] = pfVar4[-1] + 6.2831855;
      }
      fVar11 = fVar11 + fVar1;
      if (6.2831855 <= fVar11) {
        fVar11 = fVar11 - 6.2831855;
      }
      fVar12 = ((pfVar5[4] - pfVar2[2]) - fVar11) + fVar11 + *pfVar4;
      _param_7[-2] = *pfVar4;
      *pfVar4 = fVar12;
      if (3.1415927 <= fVar12) {
        *pfVar4 = fVar12 - 6.2831855;
      }
      if (*pfVar4 < -3.1415927) {
        *pfVar4 = *pfVar4 + 6.2831855;
      }
      fVar11 = fVar11 + fVar1;
      if (6.2831855 <= fVar11) {
        fVar11 = fVar11 - 6.2831855;
      }
      fVar12 = ((pfVar5[6] - pfVar2[4]) - fVar11) + fVar11 + pfVar4[1];
      *_param_7 = pfVar4[1];
      pfVar4[1] = fVar12;
      if (3.1415927 <= fVar12) {
        pfVar4[1] = fVar12 - 6.2831855;
      }
      if (pfVar4[1] < -3.1415927) {
        pfVar4[1] = pfVar4[1] + 6.2831855;
      }
      fVar11 = fVar11 + fVar1;
      if (6.2831855 <= fVar11) {
        fVar11 = fVar11 - 6.2831855;
      }
      _param_7 = _param_7 + 8;
      pfVar4 = pfVar4 + 4;
      pfVar5 = pfVar5 + 8;
      pfVar2 = pfVar2 + 8;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if (uVar9 < uVar8) {
    pfVar2 = (float *)(param_3 + 4 + uVar9 * 8);
    do {
      fVar12 = *(float *)(param_4 + uVar9 * 4);
      fVar13 = ((*pfVar2 - *(float *)((param_2 - param_3) + (int)pfVar2)) - fVar11) + fVar11 +
               fVar12;
      *(float *)((param_8 - param_3) + (int)pfVar2) = fVar12;
      *(float *)(param_4 + uVar9 * 4) = fVar13;
      if (3.1415927 <= fVar13) {
        *(float *)(param_4 + uVar9 * 4) = fVar13 - 6.2831855;
      }
      fVar12 = *(float *)(param_4 + uVar9 * 4);
      if (fVar12 < -3.1415927) {
        *(float *)(param_4 + uVar9 * 4) = fVar12 + 6.2831855;
      }
      fVar11 = fVar11 + fVar1;
      if (6.2831855 <= fVar11) {
        fVar11 = fVar11 - 6.2831855;
      }
      uVar9 = uVar9 + 1;
      pfVar2 = pfVar2 + 2;
    } while (uVar9 < uVar8);
  }
  *(undefined2 *)(param_1 + 8) = 0x101;
  return;
}

// 013604E0  FUN_013604e0  size=9  [run]
void __fastcall FUN_013604e0(undefined4 *param_1)

{
  FUN_0135feb0(*param_1);
  return;
}

// 01360500  FUN_01360500  size=36  [run]
void __thiscall
FUN_01360500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01360dc0(param_4,param_2,*param_1);
  *(undefined2 *)(param_1 + 2) = 1;
  return;
}

// 01360530  FUN_01360530  size=86  [run]
void __thiscall
FUN_01360530(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)((int)param_1 + 9) != '\0') {
    FUN_0135ff60(uVar1);
  }
  FUN_01360ed0(param_4,uVar1,param_2);
  FUN_0135fd40();
  return;
}

// 01360590  FUN_01360590  size=42  [run]
void __thiscall
FUN_01360590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_013600a0(param_2,param_3,param_4,param_5,param_6,param_7,*param_1);
  return;
}

// 013605C0  FUN_013605c0  size=34  [run]
void __thiscall FUN_013605c0(int *param_1,int *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 8))(*param_1);
    *param_1 = 0;
  }
  return;
}

// 013605F0  FUN_013605f0  size=53  [run]
void __fastcall FUN_013605f0(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = param_1[1];
  uVar3 = uVar1 >> 1;
  puVar4 = (undefined4 *)*param_1;
  if (uVar3 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0x3f800000;
      puVar4 = puVar4 + 1;
    }
  }
  fVar2 = (float)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  param_1[2] = fVar2;
  return;
}

// 01360630  FUN_01360630  size=200  [run]
void __thiscall FUN_01360630(int *param_1,char param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar7 = (float10)0;
  fVar6 = fVar7;
  if (param_3 != '\0') {
    fVar6 = (float10)3.141592653589793;
  }
  uVar3 = param_1[1];
  uVar2 = uVar3 >> 1;
  fVar4 = (float10)(int)uVar3;
  iVar1 = *param_1;
  if ((int)uVar3 < 0) {
    fVar4 = fVar4 + (float10)4294967296.0;
  }
  uVar3 = 0;
  fVar4 = (float10)6.283185307179586 / (fVar4 - (float10)1.0);
  if (param_2 == '\0') {
    if (uVar2 != 0) {
      do {
        uVar3 = uVar3 + 1;
        fVar5 = (float10)fcos(fVar6);
        fVar5 = (float10)0.54 - fVar5 * (float10)0.46;
        *(float *)(iVar1 + -4 + uVar3 * 4) = (float)fVar5;
        fVar7 = fVar5 * fVar5 + fVar7;
        fVar6 = fVar4 + fVar6;
      } while (uVar3 < uVar2);
      param_1[2] = (int)(float)(fVar7 + fVar7);
      return;
    }
  }
  else if (uVar2 != 0) {
    do {
      uVar3 = uVar3 + 1;
      fVar5 = (float10)fcos(fVar6);
      fVar5 = (float10)0.54 - fVar5 * (float10)0.46;
      *(float *)(iVar1 + -4 + uVar3 * 4) = (float)SQRT(fVar5);
      fVar7 = fVar5 + fVar7;
      fVar6 = fVar4 + fVar6;
    } while (uVar3 < uVar2);
    param_1[2] = (int)(float)(fVar7 + fVar7);
    return;
  }
  param_1[2] = (int)(float)(fVar7 + fVar7);
  return;
}

// 01360700  FUN_01360700  size=174  [run]
void __thiscall FUN_01360700(int *param_1,char param_2,char param_3)

{
  int iVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar8 = (float10)0;
  fVar7 = fVar8;
  if (param_3 != '\0') {
    fVar7 = (float10)3.141592653589793;
  }
  uVar4 = param_1[1];
  uVar3 = uVar4 >> 1;
  fVar5 = (float10)(int)uVar4;
  iVar1 = *param_1;
  if ((int)uVar4 < 0) {
    fVar5 = fVar5 + (float10)4294967296.0;
  }
  fVar2 = (float10)1;
  uVar4 = 0;
  fVar5 = (float10)6.283185307179586 / (fVar5 - fVar2);
  if (param_2 == '\0') {
    if (uVar3 != 0) {
      do {
        uVar4 = uVar4 + 1;
        fVar6 = (float10)fcos(fVar7);
        fVar6 = (fVar2 - fVar6) * (float10)0.5;
        *(float *)(iVar1 + -4 + uVar4 * 4) = (float)fVar6;
        fVar8 = fVar6 * fVar6 + fVar8;
        fVar7 = fVar5 + fVar7;
      } while (uVar4 < uVar3);
    }
  }
  else if (uVar3 != 0) {
    do {
      uVar4 = uVar4 + 1;
      fVar6 = (float10)fcos(fVar7);
      fVar6 = (fVar2 - fVar6) * (float10)0.5;
      *(float *)(iVar1 + -4 + uVar4 * 4) = (float)SQRT(fVar6);
      fVar8 = fVar6 + fVar8;
      fVar7 = fVar5 + fVar7;
    } while (uVar4 < uVar3);
    param_1[2] = (int)(float)(fVar8 + fVar8);
    return;
  }
  param_1[2] = (int)(float)(fVar8 + fVar8);
  return;
}

// 013607B0  FUN_013607b0  size=232  [run]
void __thiscall FUN_013607b0(int *param_1,char param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar8 = (float10)0;
  fVar7 = fVar8;
  if (param_3 != '\0') {
    fVar7 = (float10)3.141592653589793;
  }
  uVar3 = param_1[1];
  uVar2 = uVar3 >> 1;
  fVar4 = (float10)(int)uVar3;
  iVar1 = *param_1;
  if ((int)uVar3 < 0) {
    fVar4 = fVar4 + (float10)4294967296.0;
  }
  uVar3 = 0;
  fVar4 = (float10)6.283185307179586 / (fVar4 - (float10)1.0);
  if (param_2 == '\0') {
    if (uVar2 != 0) {
      do {
        uVar3 = uVar3 + 1;
        fVar5 = (float10)fcos(fVar7);
        fVar6 = (float10)fcos(fVar7 + fVar7);
        fVar5 = fVar6 * (float10)0.08 + ((float10)0.42 - fVar5 * (float10)0.5);
        *(float *)(iVar1 + -4 + uVar3 * 4) = (float)fVar5;
        fVar8 = fVar5 * fVar5 + fVar8;
        fVar7 = fVar4 + fVar7;
      } while (uVar3 < uVar2);
      param_1[2] = (int)(float)(fVar8 + fVar8);
      return;
    }
  }
  else if (uVar2 != 0) {
    do {
      uVar3 = uVar3 + 1;
      fVar5 = (float10)fcos(fVar7);
      fVar6 = (float10)fcos(fVar7 + fVar7);
      fVar5 = fVar6 * (float10)0.08 + ((float10)0.42 - fVar5 * (float10)0.5);
      *(float *)(iVar1 + -4 + uVar3 * 4) = (float)SQRT(fVar5);
      fVar8 = fVar5 + fVar8;
      fVar7 = fVar4 + fVar7;
    } while (uVar3 < uVar2);
    param_1[2] = (int)(float)(fVar8 + fVar8);
    return;
  }
  param_1[2] = (int)(float)(fVar8 + fVar8);
  return;
}

// 013608A0  FUN_013608a0  size=320  [run]
void __thiscall FUN_013608a0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = uVar1 >> 1;
  uVar4 = 0;
  if (3 < uVar5) {
    pfVar3 = (float *)(param_2 + 4);
    pfVar2 = (float *)(param_4 + 0xc);
    iVar6 = (uVar5 - 4 >> 2) + 1;
    uVar4 = iVar6 * 4;
    do {
      pfVar3[-1] = pfVar2[-3] * pfVar3[-1];
      *pfVar3 = *(float *)((param_4 - param_2) + (int)pfVar3) * *pfVar3;
      pfVar3[1] = pfVar2[-1] * pfVar3[1];
      pfVar3[2] = *pfVar2 * pfVar3[2];
      pfVar3 = pfVar3 + 4;
      pfVar2 = pfVar2 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar4 < uVar5) {
    iVar6 = uVar5 - uVar4;
    pfVar3 = (float *)(param_2 + uVar4 * 4);
    uVar4 = uVar4 + iVar6;
    do {
      *pfVar3 = *(float *)((int)pfVar3 + (param_4 - param_2)) * *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar4 < uVar1) {
    if (3 < (int)(uVar1 - uVar4)) {
      pfVar3 = (float *)(param_4 + -8 + (uVar1 - uVar4) * 4);
      iVar6 = ((uVar1 - uVar4) - 4 >> 2) + 1;
      pfVar2 = (float *)(param_2 + 8 + uVar4 * 4);
      uVar4 = uVar4 + iVar6 * 4;
      do {
        pfVar2[-2] = pfVar3[1] * pfVar2[-2];
        pfVar2[-1] = *pfVar3 * pfVar2[-1];
        *pfVar2 = pfVar3[-1] * *pfVar2;
        pfVar2[1] = pfVar3[-2] * pfVar2[1];
        pfVar2 = pfVar2 + 4;
        pfVar3 = pfVar3 + -4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (uVar4 < uVar1) {
      pfVar3 = (float *)(param_4 + -4 + (uVar1 - uVar4) * 4);
      do {
        *(float *)(param_2 + uVar4 * 4) = *(float *)(param_2 + uVar4 * 4) * *pfVar3;
        uVar4 = uVar4 + 1;
        pfVar3 = pfVar3 + -1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}

// 013609F0  FUN_013609f0  size=366  [run]
void __thiscall FUN_013609f0(int param_1,int param_2,undefined4 param_3,float param_4,int param_5)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = uVar1 >> 1;
  uVar4 = 0;
  if (3 < uVar5) {
    pfVar3 = (float *)(param_2 + 4);
    pfVar2 = (float *)(param_5 + 0xc);
    iVar6 = (uVar5 - 4 >> 2) + 1;
    uVar4 = iVar6 * 4;
    do {
      pfVar3[-1] = pfVar2[-3] * param_4 * pfVar3[-1];
      *pfVar3 = *(float *)((param_5 - param_2) + (int)pfVar3) * param_4 * *pfVar3;
      pfVar3[1] = pfVar2[-1] * param_4 * pfVar3[1];
      pfVar3[2] = *pfVar2 * param_4 * pfVar3[2];
      pfVar3 = pfVar3 + 4;
      pfVar2 = pfVar2 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar4 < uVar5) {
    iVar6 = uVar5 - uVar4;
    pfVar3 = (float *)(param_2 + uVar4 * 4);
    uVar4 = uVar4 + iVar6;
    do {
      *pfVar3 = *(float *)((int)pfVar3 + (param_5 - param_2)) * param_4 * *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (uVar4 < uVar1) {
    if (3 < (int)(uVar1 - uVar4)) {
      pfVar3 = (float *)(param_5 + -8 + (uVar1 - uVar4) * 4);
      iVar6 = ((uVar1 - uVar4) - 4 >> 2) + 1;
      pfVar2 = (float *)(param_2 + 8 + uVar4 * 4);
      uVar4 = uVar4 + iVar6 * 4;
      do {
        pfVar2[-2] = pfVar3[1] * param_4 * pfVar2[-2];
        pfVar2[-1] = param_4 * *pfVar3 * pfVar2[-1];
        *pfVar2 = pfVar3[-1] * param_4 * *pfVar2;
        pfVar2[1] = pfVar3[-2] * param_4 * pfVar2[1];
        pfVar2 = pfVar2 + 4;
        pfVar3 = pfVar3 + -4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (uVar4 < uVar1) {
      pfVar3 = (float *)(param_5 + -4 + (uVar1 - uVar4) * 4);
      do {
        *(float *)(param_2 + uVar4 * 4) = *pfVar3 * param_4 * *(float *)(param_2 + uVar4 * 4);
        uVar4 = uVar4 + 1;
        pfVar3 = pfVar3 + -1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}

// 01360B70  FUN_01360b70  size=181  [run]
undefined4 __thiscall
FUN_01360b70(undefined4 *param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  param_1[1] = param_3;
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 4))((param_3 & 0xfffffffe) * 2);
  *param_1 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 0x34;
  }
  if (param_4 == 1) {
    FUN_01360630(param_5,param_6);
    return 1;
  }
  if (param_4 == 2) {
    FUN_01360700(param_5,param_6);
    return 1;
  }
  if (param_4 == 3) {
    FUN_013607b0(param_5,param_6);
    return 1;
  }
  uVar3 = (uint)param_1[1] >> 1;
  if (uVar3 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0x3f800000;
      puVar2 = puVar2 + 1;
    }
  }
  fVar1 = (float)(int)param_1[1];
  if ((int)param_1[1] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  param_1[2] = fVar1;
  return 1;
}

// 01360C30  FUN_01360c30  size=68  [run]
void __thiscall
FUN_01360c30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  if (param_4 == 1.0) {
    FUN_013608a0(param_2,param_3,*param_1);
    return;
  }
  FUN_013609f0(param_2,param_3,param_4,*param_1);
  return;
}

// 01360CA0  FUN_01360ca0  size=284  [run]
int * FUN_01360ca0(uint param_1,int param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  int local_8;
  
  if ((param_1 & 1) != 0) {
    return (int *)0x0;
  }
  iVar7 = (int)param_1 >> 1;
  FUN_01361fa0(iVar7,param_2,0,&local_8);
  uVar3 = local_8 + 0x10 + ((iVar7 * 3) / 2) * 8;
  uVar4 = *param_4;
  *param_4 = uVar3;
  piVar8 = (int *)0x0;
  if (uVar3 <= uVar4) {
    piVar8 = param_3;
  }
  if (piVar8 != (int *)0x0) {
    piVar1 = piVar8 + 4;
    piVar8[1] = local_8 + (int)piVar1;
    *piVar8 = (int)piVar1;
    piVar8[2] = local_8 + (int)piVar1 + iVar7 * 8;
    FUN_01361fa0(iVar7,param_2,piVar1,&local_8);
    iVar5 = iVar7 - ((int)param_1 >> 0x1f) >> 1;
    if (param_2 == 0) {
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          iVar2 = iVar6 + 1;
          fVar9 = ((float10)iVar2 / (float10)iVar7 + (float10)0.5) * (float10)-3.141592653589793;
          fVar10 = (float10)fcos(fVar9);
          *(float *)(piVar8[2] + iVar6 * 8) = (float)fVar10;
          fVar9 = (float10)fsin(fVar9);
          *(float *)(piVar8[2] + 4 + iVar6 * 8) = (float)fVar9;
          iVar6 = iVar2;
        } while (iVar2 < iVar5);
      }
    }
    else if (0 < iVar5) {
      iVar6 = 0;
      do {
        iVar2 = iVar6 + 1;
        fVar9 = ((float10)iVar2 / (float10)iVar7 + (float10)0.5) * (float10)3.141592653589793;
        fVar10 = (float10)fcos(fVar9);
        *(float *)(piVar8[2] + iVar6 * 8) = (float)fVar10;
        fVar9 = (float10)fsin(fVar9);
        *(float *)(piVar8[2] + 4 + iVar6 * 8) = (float)fVar9;
        iVar6 = iVar2;
      } while (iVar2 < iVar5);
      return piVar8;
    }
    return piVar8;
  }
  return (int *)0x0;
}

// 01360DC0  FUN_01360dc0  size=259  [run]
void FUN_01360dc0(undefined4 *param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar3 = *(int *)*param_1;
  FUN_01361ef0((int *)*param_1,param_2,param_1[1]);
  pfVar4 = (float *)param_1[1];
  pfVar8 = (float *)param_1[2];
  if (iVar3 / 2 != 0) {
    pfVar6 = param_3 + 2;
    pfVar7 = param_3 + iVar3 * 2 + -4;
    uVar5 = iVar3 / 2 + 1U >> 1;
    do {
      pfVar1 = (float *)(((int)pfVar4 - (int)param_3) + (int)pfVar7);
      pfVar2 = (float *)(((int)pfVar4 - (int)param_3) + (int)pfVar6);
      fVar9 = pfVar1[2] * 1.0 + *pfVar2;
      fVar10 = pfVar1[3] * -1.0 + pfVar2[1];
      fVar11 = *pfVar1 * 1.0 + pfVar2[2];
      fVar12 = pfVar1[1] * -1.0 + pfVar2[3];
      fVar13 = *pfVar2 - pfVar1[2] * 1.0;
      fVar15 = pfVar2[1] - pfVar1[3] * -1.0;
      fVar16 = pfVar2[2] - *pfVar1 * 1.0;
      fVar17 = pfVar2[3] - pfVar1[1] * -1.0;
      fVar14 = fVar13 * *pfVar8 + fVar15 * -1.0 * pfVar8[1];
      fVar13 = fVar13 * pfVar8[1] + fVar15 * 1.0 * *pfVar8;
      fVar15 = fVar16 * pfVar8[2] + fVar17 * -1.0 * pfVar8[3];
      fVar16 = fVar16 * pfVar8[3] + fVar17 * 1.0 * pfVar8[2];
      *pfVar6 = (fVar14 + fVar9) * 0.5;
      pfVar6[1] = (fVar13 + fVar10) * 0.5;
      pfVar6[2] = (fVar15 + fVar11) * 0.5;
      pfVar6[3] = (fVar16 + fVar12) * 0.5;
      *pfVar7 = (fVar11 - fVar15) * 1.0 * 0.5;
      pfVar7[1] = (fVar12 - fVar16) * -1.0 * 0.5;
      pfVar7[2] = (fVar9 - fVar14) * 1.0 * 0.5;
      pfVar7[3] = (fVar10 - fVar13) * -1.0 * 0.5;
      pfVar8 = pfVar8 + 4;
      pfVar6 = pfVar6 + 4;
      pfVar7 = pfVar7 + -4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  fVar9 = *pfVar4;
  fVar10 = pfVar4[1];
  *param_3 = fVar10 + fVar9;
  param_3[iVar3 * 2] = fVar9 - fVar10;
  param_3[1] = 0.0;
  param_3[iVar3 * 2 + 1] = 0.0;
  return;
}

// 01360ED0  FUN_01360ed0  size=232  [run]
void FUN_01360ed0(float *param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  piVar3 = (int *)*param_1;
  iVar4 = *piVar3;
  pfVar5 = (float *)param_1[1];
  param_1 = (float *)param_1[2];
  fVar9 = *param_2;
  fVar10 = param_2[iVar4 * 2];
  *pfVar5 = fVar9 + param_2[iVar4 * 2];
  pfVar5[1] = fVar9 - fVar10;
  if (iVar4 / 2 != 0) {
    iVar6 = (int)param_2 - (int)pfVar5;
    param_2 = (float *)(iVar4 / 2 + 1U >> 1);
    pfVar7 = pfVar5 + 2;
    pfVar8 = pfVar5 + iVar4 * 2 + -4;
    do {
      pfVar1 = (float *)(iVar6 + (int)pfVar8);
      pfVar2 = (float *)(iVar6 + (int)pfVar7);
      fVar9 = pfVar1[2] * 1.0 + *pfVar2;
      fVar10 = pfVar1[3] * -1.0 + pfVar2[1];
      fVar11 = *pfVar1 * 1.0 + pfVar2[2];
      fVar12 = pfVar1[1] * -1.0 + pfVar2[3];
      fVar13 = *pfVar2 - pfVar1[2] * 1.0;
      fVar15 = pfVar2[1] - pfVar1[3] * -1.0;
      fVar16 = pfVar2[2] - *pfVar1 * 1.0;
      fVar17 = pfVar2[3] - pfVar1[1] * -1.0;
      fVar14 = fVar13 * *param_1 + fVar15 * -1.0 * param_1[1];
      fVar13 = fVar13 * param_1[1] + fVar15 * 1.0 * *param_1;
      fVar15 = fVar16 * param_1[2] + fVar17 * -1.0 * param_1[3];
      fVar16 = fVar16 * param_1[3] + fVar17 * 1.0 * param_1[2];
      *pfVar7 = fVar14 + fVar9;
      pfVar7[1] = fVar13 + fVar10;
      pfVar7[2] = fVar15 + fVar11;
      pfVar7[3] = fVar16 + fVar12;
      *pfVar8 = (fVar11 - fVar15) * 1.0;
      pfVar8[1] = (fVar12 - fVar16) * -1.0;
      pfVar8[2] = (fVar9 - fVar14) * 1.0;
      pfVar8[3] = (fVar10 - fVar13) * -1.0;
      param_1 = param_1 + 4;
      pfVar7 = pfVar7 + 4;
      pfVar8 = pfVar8 + -4;
      param_2 = (float *)((int)param_2 - 1);
    } while (param_2 != (float *)0x0);
  }
  FUN_01361ef0(piVar3,pfVar5,param_3);
  return;
}

// 01360FC0  FUN_01360fc0  size=23  [run]
void __fastcall FUN_01360fc0(int param_1)

{
  FUN_0135fab0();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 01360FE0  FUN_01360fe0  size=364  [run]
uint __thiscall FUN_01360fe0(int *param_1,float *param_2,ushort param_3,int param_4,float param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_18;
  float local_8;
  
  iVar3 = param_1[1];
  iVar1 = *param_1;
  iVar2 = param_1[3];
  if (iVar1 == iVar2) {
    return 0;
  }
  local_8 = (float)param_1[6];
  uVar4 = 0;
  while( true ) {
    if (0.0 <= local_8) {
      uVar5 = (int)local_8 & 0xffff;
      if ((int)(param_3 - 1) <= (int)uVar5) {
        if ((int)(param_3 - 1) < (int)uVar5) {
          fVar9 = (float)param_3;
          uVar6 = (uint)param_3;
        }
        else {
          uVar6 = (uint)param_3;
          param_1[5] = (int)param_2[uVar5];
          fVar9 = (float)(uVar5 + 1);
        }
        goto LAB_0136112b;
      }
      fVar9 = param_2[uVar5];
      fVar7 = param_2[uVar5 + 1];
    }
    else {
      fVar9 = (float)param_1[5];
      fVar7 = *param_2;
    }
    uVar6 = 0;
    if ((uVar4 & 0xffff) == iVar1 - iVar2) break;
    if (local_8 < 0.0) {
      fVar8 = local_8 + 1.0;
    }
    else {
      local_18 = (int)(longlong)ROUND(local_8);
      fVar8 = (float)local_18;
      if (local_18 < 0) {
        fVar8 = fVar8 + 4.2949673e+09;
      }
      fVar8 = local_8 - fVar8;
    }
    *(float *)(param_4 + iVar3 * 4) = fVar8 * (fVar7 - fVar9) + fVar9;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 1;
    local_8 = local_8 + param_5;
    if (iVar3 == *param_1) {
      iVar3 = 0;
    }
  }
  param_1[5] = (int)fVar9;
  if (0.0 < local_8) {
    fVar9 = (float)(((int)local_8 & 0xffffU) + 1);
    uVar6 = ((int)local_8 & 0xffffU) + 1 & 0xffff;
LAB_0136112b:
    local_8 = local_8 - fVar9;
  }
  param_1[1] = iVar3;
  param_1[6] = (int)local_8;
  param_1[3] = (uVar4 & 0xffff) + param_1[3];
  return uVar6;
}

// 01361150  FUN_01361150  size=31  [run]
void __thiscall FUN_01361150(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01360fe0(param_2,param_3,*(undefined4 *)(param_1 + 0x10),param_4);
  return;
}

// 01361190  FUN_01361190  size=133  [run]
void __thiscall FUN_01361190(int param_1,int param_2,int param_3)

{
  float *in_EAX;
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = *(float **)(param_1 + 0x48);
  pfVar1 = in_EAX + param_3 * 2;
  do {
    fVar3 = pfVar1[1] * *pfVar2 + pfVar2[1] * *pfVar1;
    fVar4 = *pfVar2 * *pfVar1 - pfVar2[1] * pfVar1[1];
    *pfVar1 = *in_EAX - fVar4;
    pfVar1[1] = in_EAX[1] - fVar3;
    *in_EAX = *in_EAX + fVar4;
    in_EAX[1] = in_EAX[1] + fVar3;
    pfVar2 = pfVar2 + param_2 * 2;
    pfVar1 = pfVar1 + 2;
    in_EAX = in_EAX + 2;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

// 01361230  FUN_01361230  size=928  [run]
void FUN_01361230(int param_1,int param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  float *in_EAX;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  pfVar4 = *(float **)(param_2 + 0x48);
  local_20 = param_3;
  if (param_3 < 2) {
    iVar2 = *(int *)(param_2 + 4);
    pfVar5 = in_EAX + 1;
    pfVar3 = in_EAX + param_3 * 4 + 1;
    pfVar6 = pfVar4;
    local_1c = pfVar4;
    local_18 = in_EAX + param_3 * 6 + 1;
    local_14 = in_EAX + param_3 * 2 + 1;
    do {
      fVar7 = *pfVar4 * local_14[-1] - *local_14 * pfVar4[1];
      fVar10 = *local_14 * *pfVar4 + pfVar4[1] * local_14[-1];
      fVar15 = *local_18 * *local_1c + local_1c[1] * local_18[-1];
      fVar24 = *local_1c * local_18[-1] - *local_18 * local_1c[1];
      fVar29 = fVar24 + fVar7;
      fVar7 = fVar7 - fVar24;
      fVar30 = fVar15 + fVar10;
      fVar10 = fVar10 - fVar15;
      fVar24 = pfVar6[1] * pfVar3[-1] + *pfVar6 * *pfVar3;
      fVar15 = pfVar5[-1];
      fVar16 = *pfVar6 * pfVar3[-1] - pfVar6[1] * *pfVar3;
      fVar25 = fVar15 + fVar16;
      pfVar5[-1] = fVar25;
      fVar21 = *pfVar5 - fVar24;
      *pfVar5 = fVar24 + *pfVar5;
      pfVar3[-1] = fVar25 - fVar29;
      *pfVar3 = *pfVar5 - fVar30;
      pfVar5[-1] = pfVar5[-1] + fVar29;
      fVar15 = fVar15 - fVar16;
      *pfVar5 = *pfVar5 + fVar30;
      if (iVar2 == 0) {
        fVar24 = fVar15 + fVar10;
        fVar16 = fVar21 - fVar7;
        fVar15 = fVar15 - fVar10;
        fVar21 = fVar21 + fVar7;
      }
      else {
        fVar24 = fVar15 - fVar10;
        fVar16 = fVar21 + fVar7;
        fVar15 = fVar15 + fVar10;
        fVar21 = fVar21 - fVar7;
      }
      local_1c = local_1c + param_1 * 6;
      pfVar4 = pfVar4 + param_1 * 2;
      pfVar6 = pfVar6 + param_1 * 4;
      local_14[-1] = fVar24;
      *local_14 = fVar16;
      *local_18 = fVar21;
      local_18[-1] = fVar15;
      pfVar3 = pfVar3 + 2;
      pfVar5 = pfVar5 + 2;
      local_20 = local_20 - 1;
      local_18 = local_18 + 2;
      local_14 = local_14 + 2;
    } while (local_20 != 0);
    return;
  }
  local_20 = param_3 >> 1;
  pfVar5 = pfVar4;
  pfVar3 = pfVar4;
  if (*(int *)(param_2 + 4) == 0) {
    fVar16 = 1.0;
    fVar25 = -1.0;
    fVar29 = 1.0;
    fVar30 = -1.0;
    fVar15 = -1.0;
    fVar7 = 1.0;
    fVar10 = -1.0;
    fVar24 = 1.0;
  }
  else {
    fVar15 = 1.0;
    fVar7 = -1.0;
    fVar10 = 1.0;
    fVar24 = -1.0;
    fVar16 = -1.0;
    fVar25 = 1.0;
    fVar29 = -1.0;
    fVar30 = 1.0;
  }
  do {
    pfVar6 = in_EAX + param_3 * 2;
    fVar21 = pfVar5[param_1 * 2];
    fVar8 = (pfVar5 + param_1 * 2)[1];
    pfVar1 = in_EAX + param_3 * 6;
    fVar9 = *pfVar6 * *pfVar5 + pfVar6[1] * -1.0 * pfVar5[1];
    fVar11 = *pfVar6 * pfVar5[1] + pfVar6[1] * 1.0 * *pfVar5;
    fVar12 = pfVar6[2] * fVar21 + pfVar6[3] * -1.0 * fVar8;
    fVar13 = pfVar6[2] * fVar8 + pfVar6[3] * 1.0 * fVar21;
    fVar21 = pfVar4[param_1 * 6];
    fVar8 = (pfVar4 + param_1 * 6)[1];
    fVar14 = *pfVar1 * *pfVar4 + pfVar1[1] * -1.0 * pfVar4[1];
    fVar17 = *pfVar1 * pfVar4[1] + pfVar1[1] * 1.0 * *pfVar4;
    fVar19 = pfVar1[2] * fVar21 + pfVar1[3] * -1.0 * fVar8;
    fVar21 = pfVar1[2] * fVar8 + pfVar1[3] * 1.0 * fVar21;
    pfVar6 = in_EAX + param_3 * 4;
    fVar23 = fVar14 + fVar9;
    fVar26 = fVar17 + fVar11;
    fVar27 = fVar19 + fVar12;
    fVar28 = fVar21 + fVar13;
    fVar9 = fVar9 - fVar14;
    fVar11 = fVar11 - fVar17;
    fVar12 = fVar12 - fVar19;
    fVar13 = fVar13 - fVar21;
    fVar21 = pfVar3[param_1 * 4];
    fVar8 = (pfVar3 + param_1 * 4)[1];
    fVar19 = *pfVar6 * *pfVar3 + pfVar6[1] * -1.0 * pfVar3[1];
    fVar18 = *pfVar6 * pfVar3[1] + pfVar6[1] * 1.0 * *pfVar3;
    fVar20 = pfVar6[2] * fVar21 + pfVar6[3] * -1.0 * fVar8;
    fVar22 = pfVar6[2] * fVar8 + pfVar6[3] * 1.0 * fVar21;
    fVar21 = *in_EAX + fVar19;
    fVar8 = in_EAX[1] + fVar18;
    fVar14 = in_EAX[2] + fVar20;
    fVar17 = in_EAX[3] + fVar22;
    fVar19 = *in_EAX - fVar19;
    fVar18 = in_EAX[1] - fVar18;
    fVar20 = in_EAX[2] - fVar20;
    fVar22 = in_EAX[3] - fVar22;
    *pfVar6 = fVar21 - fVar23;
    pfVar6[1] = fVar8 - fVar26;
    pfVar6[2] = fVar14 - fVar27;
    pfVar6[3] = fVar17 - fVar28;
    *in_EAX = fVar21 + fVar23;
    in_EAX[1] = fVar8 + fVar26;
    in_EAX[2] = fVar14 + fVar27;
    in_EAX[3] = fVar17 + fVar28;
    pfVar6 = in_EAX + param_3 * 2;
    *pfVar6 = fVar11 * fVar16 + fVar19;
    pfVar6[1] = fVar9 * fVar25 + fVar18;
    pfVar6[2] = fVar13 * fVar29 + fVar20;
    pfVar6[3] = fVar12 * fVar30 + fVar22;
    pfVar6 = in_EAX + param_3 * 6;
    *pfVar6 = fVar11 * fVar15 + fVar19;
    pfVar6[1] = fVar9 * fVar7 + fVar18;
    pfVar6[2] = fVar13 * fVar10 + fVar20;
    pfVar6[3] = fVar12 * fVar24 + fVar22;
    pfVar4 = pfVar4 + param_1 * 0xc;
    in_EAX = in_EAX + 4;
    local_20 = local_20 - 1;
    pfVar5 = pfVar5 + param_1 * 4;
    pfVar3 = pfVar3 + param_1 * 8;
  } while (local_20 != 0);
  return;
}

// 013615E0  FUN_013615e0  size=350  [run]
void __thiscall FUN_013615e0(int param_1,int param_2,int param_3)

{
  float fVar1;
  float *in_EAX;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_8;
  
  pfVar2 = *(float **)(param_3 + 0x48);
  fVar1 = pfVar2[param_2 * param_1 * 2 + 1];
  pfVar3 = pfVar2;
  local_8 = param_1;
  do {
    fVar5 = in_EAX[param_1 * 2 + 1] * *pfVar3 + in_EAX[param_1 * 2] * pfVar3[1];
    fVar6 = in_EAX[param_1 * 4] * pfVar2[1] + in_EAX[param_1 * 4 + 1] * *pfVar2;
    fVar7 = in_EAX[param_1 * 4] * *pfVar2 - pfVar2[1] * in_EAX[param_1 * 4 + 1];
    fVar4 = in_EAX[param_1 * 2] * *pfVar3 - pfVar3[1] * in_EAX[param_1 * 2 + 1];
    fVar8 = fVar7 + fVar4;
    fVar9 = fVar6 + fVar5;
    pfVar3 = pfVar3 + param_2 * 2;
    in_EAX[param_1 * 2] = *in_EAX - fVar8 * 0.5;
    in_EAX[param_1 * 2 + 1] = in_EAX[1] - fVar9 * 0.5;
    fVar7 = fVar1 * (fVar4 - fVar7);
    fVar5 = fVar1 * (fVar5 - fVar6);
    *in_EAX = *in_EAX + fVar8;
    in_EAX[1] = in_EAX[1] + fVar9;
    in_EAX[param_1 * 4] = fVar5 + in_EAX[param_1 * 2];
    in_EAX[param_1 * 4 + 1] = in_EAX[param_1 * 2 + 1] - fVar7;
    fVar4 = in_EAX[param_1 * 2 + 1];
    in_EAX[param_1 * 2] = in_EAX[param_1 * 2] - fVar5;
    in_EAX[param_1 * 2 + 1] = fVar7 + fVar4;
    pfVar2 = pfVar2 + param_2 * 4;
    in_EAX = in_EAX + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 01361740  FUN_01361740  size=874  [run]
void __fastcall FUN_01361740(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float *local_1c;
  float *local_c;
  
  pfVar10 = *(float **)(in_EAX + 0x48);
  iVar5 = param_2 * param_4;
  fVar1 = pfVar10[iVar5 * 2];
  fVar2 = pfVar10[iVar5 * 2 + 1];
  fVar3 = pfVar10[iVar5 * 4];
  fVar4 = pfVar10[iVar5 * 4 + 1];
  pfVar6 = (float *)(param_4 * 0x18 + (int)param_3);
  if (0 < param_4) {
    pfVar7 = pfVar6 + param_4 * -6;
    iVar5 = ((int)param_3 + param_4 * 8) - (int)pfVar6;
    iVar9 = ((int)param_3 + param_4 * 0x20) - (int)pfVar6;
    iVar8 = (param_4 * 0x10 + (int)param_3) - (int)pfVar6;
    param_3 = pfVar10;
    local_1c = pfVar10;
    local_c = pfVar10;
    do {
      fVar15 = *pfVar7;
      fVar12 = *(float *)(iVar5 + 4 + (int)pfVar6);
      fVar17 = pfVar7[1];
      fVar13 = *(float *)(iVar5 + (int)pfVar6) * local_1c[1] + fVar12 * *local_1c;
      fVar11 = *(float *)(iVar5 + (int)pfVar6) * *local_1c - fVar12 * local_1c[1];
      fVar12 = *(float *)(iVar8 + 4 + (int)pfVar6);
      fVar14 = *(float *)(iVar8 + (int)pfVar6) * *param_3 - fVar12 * param_3[1];
      fVar16 = fVar12 * *param_3 + *(float *)(iVar8 + (int)pfVar6) * param_3[1];
      fVar18 = *pfVar6 * local_c[1] + pfVar6[1] * *local_c;
      fVar12 = *(float *)(iVar9 + 4 + (int)pfVar6);
      fVar19 = *pfVar6 * *local_c - pfVar6[1] * local_c[1];
      fVar21 = *(float *)(iVar9 + (int)pfVar6) * *pfVar10 - fVar12 * pfVar10[1];
      fVar23 = pfVar10[1] * *(float *)(iVar9 + (int)pfVar6) + fVar12 * *pfVar10;
      fVar20 = fVar21 + fVar11;
      fVar11 = fVar11 - fVar21;
      fVar12 = fVar19 + fVar14;
      fVar14 = fVar14 - fVar19;
      fVar22 = fVar18 + fVar16;
      fVar16 = fVar16 - fVar18;
      *pfVar7 = fVar12 + fVar20 + *pfVar7;
      fVar24 = fVar23 + fVar13;
      fVar13 = fVar13 - fVar23;
      pfVar7[1] = fVar22 + fVar24 + pfVar7[1];
      fVar21 = fVar1 * fVar20 + fVar15 + fVar3 * fVar12;
      fVar23 = fVar1 * fVar24 + fVar17 + fVar3 * fVar22;
      fVar19 = fVar4 * fVar16 + fVar2 * fVar13;
      fVar18 = -(fVar2 * fVar11) - fVar4 * fVar14;
      *(float *)(iVar5 + (int)pfVar6) = fVar21 - fVar19;
      *(float *)(iVar5 + 4 + (int)pfVar6) = fVar23 - fVar18;
      *(float *)(iVar9 + (int)pfVar6) = fVar19 + fVar21;
      *(float *)(iVar9 + 4 + (int)pfVar6) = fVar18 + fVar23;
      fVar12 = fVar3 * fVar20 + fVar15 + fVar1 * fVar12;
      fVar15 = fVar3 * fVar24 + fVar17 + fVar1 * fVar22;
      fVar17 = fVar2 * fVar16 - fVar4 * fVar13;
      *(float *)(iVar8 + (int)pfVar6) = fVar17 + fVar12;
      fVar11 = fVar4 * fVar11 - fVar2 * fVar14;
      *(float *)(iVar8 + 4 + (int)pfVar6) = fVar11 + fVar15;
      local_1c = local_1c + param_2 * 2;
      param_3 = param_3 + param_2 * 4;
      local_c = local_c + param_2 * 6;
      pfVar10 = pfVar10 + param_2 * 8;
      *pfVar6 = fVar12 - fVar17;
      pfVar6[1] = fVar15 - fVar11;
      pfVar6 = pfVar6 + 2;
      pfVar7 = pfVar7 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 01361AB0  FUN_01361ab0  size=696  [run]
void __thiscall FUN_01361ab0(float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float local_114 [62];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  int local_8;
  
  iVar2 = in_EAX[0x12];
  iVar3 = *in_EAX;
  if (0 < param_3) {
    local_10 = 0;
    local_c = param_1;
    local_18 = param_3;
    do {
      if (0 < param_4) {
        pfVar8 = local_114;
        pfVar4 = local_c;
        local_8 = param_4;
        do {
          *pfVar8 = *pfVar4;
          pfVar8[1] = pfVar4[1];
          pfVar4 = pfVar4 + param_3 * 2;
          pfVar8 = pfVar8 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        local_8 = local_10;
        local_1c = param_2 * param_3;
        local_14 = param_4;
        pfVar8 = local_c;
        do {
          *pfVar8 = local_114[0];
          iVar5 = 0;
          pfVar8[1] = local_114[1];
          iVar9 = 1;
          if (1 < param_4) {
            if (3 < param_4 + -1) {
              fVar10 = *pfVar8;
              fVar11 = pfVar8[1];
              do {
                iVar5 = iVar5 + local_8;
                if (iVar3 <= iVar5) {
                  iVar5 = iVar5 - iVar3;
                }
                fVar1 = *(float *)(iVar2 + iVar5 * 8);
                iVar6 = iVar5 + local_8;
                fVar10 = fVar10 + (local_114[iVar9 * 2] * fVar1 -
                                  local_114[iVar9 * 2 + 1] * *(float *)(iVar2 + 4 + iVar5 * 8));
                fVar11 = fVar11 + fVar1 * local_114[iVar9 * 2 + 1] +
                                  local_114[iVar9 * 2] * *(float *)(iVar2 + 4 + iVar5 * 8);
                *pfVar8 = fVar10;
                pfVar8[1] = fVar11;
                if (iVar3 <= iVar6) {
                  iVar6 = iVar6 - iVar3;
                }
                fVar1 = *(float *)(iVar2 + iVar6 * 8);
                fVar10 = fVar10 + (fVar1 * local_114[iVar9 * 2 + 2] -
                                  local_114[iVar9 * 2 + 3] * *(float *)(iVar2 + 4 + iVar6 * 8));
                iVar7 = iVar6 + local_8;
                fVar11 = fVar11 + fVar1 * local_114[iVar9 * 2 + 3] +
                                  local_114[iVar9 * 2 + 2] * *(float *)(iVar2 + 4 + iVar6 * 8);
                *pfVar8 = fVar10;
                pfVar8[1] = fVar11;
                if (iVar3 <= iVar7) {
                  iVar7 = iVar7 - iVar3;
                }
                fVar1 = *(float *)(iVar2 + iVar7 * 8);
                fVar10 = fVar10 + (fVar1 * local_114[iVar9 * 2 + 4] -
                                  local_114[iVar9 * 2 + 5] * *(float *)(iVar2 + 4 + iVar7 * 8));
                iVar5 = iVar7 + local_8;
                fVar11 = fVar11 + fVar1 * local_114[iVar9 * 2 + 5] +
                                  local_114[iVar9 * 2 + 4] * *(float *)(iVar2 + 4 + iVar7 * 8);
                *pfVar8 = fVar10;
                pfVar8[1] = fVar11;
                if (iVar3 <= iVar5) {
                  iVar5 = iVar5 - iVar3;
                }
                fVar1 = *(float *)(iVar2 + iVar5 * 8);
                iVar6 = iVar9 * 2;
                iVar7 = iVar9 * 2;
                iVar9 = iVar9 + 4;
                fVar10 = fVar10 + (fVar1 * local_114[iVar6 + 6] -
                                  local_114[iVar7 + 7] * *(float *)(iVar2 + 4 + iVar5 * 8));
                fVar11 = fVar11 + fVar1 * local_114[iVar7 + 7] +
                                  local_114[iVar6 + 6] * *(float *)(iVar2 + 4 + iVar5 * 8);
                *pfVar8 = fVar10;
                pfVar8[1] = fVar11;
              } while (iVar9 < param_4 + -3);
            }
            if (iVar9 < param_4) {
              fVar10 = *pfVar8;
              fVar11 = pfVar8[1];
              do {
                iVar5 = iVar5 + local_8;
                if (iVar3 <= iVar5) {
                  iVar5 = iVar5 - iVar3;
                }
                fVar1 = *(float *)(iVar2 + iVar5 * 8);
                iVar6 = iVar9 * 2;
                iVar7 = iVar9 * 2;
                iVar9 = iVar9 + 1;
                fVar10 = fVar10 + (local_114[iVar6] * fVar1 -
                                  local_114[iVar7 + 1] * *(float *)(iVar2 + 4 + iVar5 * 8));
                fVar11 = fVar11 + fVar1 * local_114[iVar7 + 1] +
                                  local_114[iVar6] * *(float *)(iVar2 + 4 + iVar5 * 8);
                *pfVar8 = fVar10;
                pfVar8[1] = fVar11;
              } while (iVar9 < param_4);
            }
          }
          local_8 = local_8 + param_2 * param_3;
          pfVar8 = pfVar8 + param_3 * 2;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_10 = local_10 + param_2;
      local_c = local_c + 2;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

// 01361D70  FUN_01361d70  size=311  [run]
void FUN_01361d70(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,
                 undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = param_5[1];
  iVar3 = *param_5;
  if (uVar2 == 1) {
    puVar4 = param_1;
    do {
      *puVar4 = *param_2;
      puVar1 = param_2 + 1;
      param_2 = param_2 + param_3 * param_4 * 2;
      puVar4[1] = *puVar1;
      puVar4 = puVar4 + 2;
    } while (puVar4 != param_1 + uVar2 * iVar3 * 2);
  }
  else {
    puVar4 = param_1;
    do {
      FUN_01361d70(puVar4,param_2,iVar3 * param_3,param_4,param_5 + 2,param_6);
      param_2 = param_2 + param_3 * param_4 * 2;
      puVar4 = puVar4 + uVar2 * 2;
    } while (puVar4 != param_1 + uVar2 * iVar3 * 2);
  }
  switch(iVar3) {
  case 2:
    FUN_01361190(param_3,uVar2);
    return;
  case 3:
    FUN_013615e0(param_3,param_6);
    return;
  case 4:
    uVar5 = uVar2 & 0x80000001;
    bVar6 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar6 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar6) {
      FUN_01361230(param_3,param_6,uVar2);
      return;
    }
    break;
  case 5:
    FUN_01361740(param_1,uVar2);
    return;
  }
  FUN_01361ab0(param_3,uVar2,iVar3);
  return;
}

// 01361EC0  FUN_01361ec0  size=35  [run]
void FUN_01361ec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01361d70(param_3,param_2,1,param_4,param_1 + 8,param_1);
  return;
}

// 01361EF0  FUN_01361ef0  size=33  [run]
void FUN_01361ef0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01361d70(param_3,param_2,1,1,param_1 + 8,param_1);
  return;
}

// 01361F20  FUN_01361f20  size=121  [run]
void FUN_01361f20(int param_1,int *param_2)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00fddce0(SQRT((double)param_1));
  iVar1 = 4;
  do {
    while (param_1 % iVar1 != 0) {
      if (iVar1 == 2) {
        iVar1 = 3;
      }
      else if (iVar1 == 4) {
        iVar1 = 2;
      }
      else {
        iVar1 = iVar1 + 2;
      }
      if (fVar2 < (float10)iVar1) {
        iVar1 = param_1;
      }
    }
    param_1 = param_1 / iVar1;
    *param_2 = iVar1;
    param_2[1] = param_1;
    param_2 = param_2 + 2;
  } while (1 < param_1);
  return;
}

// 01361FA0  FUN_01361fa0  size=195  [run]
int * FUN_01361fa0(int param_1,int param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  
  uVar1 = param_1 * 8 + 0x57U & 0xfffffff0;
  piVar2 = (int *)0x0;
  if ((param_3 != (int *)0x0) && (uVar1 <= *param_4)) {
    piVar2 = param_3;
  }
  *param_4 = uVar1;
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[0x12] = (int)(param_3 + 0x14);
    if (param_2 == 0) {
      param_3 = (int *)0x0;
      if (0 < param_1) {
        do {
          fVar3 = (float10)(int)param_3;
          param_3 = (int *)((int)param_3 + 1);
          fVar3 = (fVar3 * (float10)-6.283185307179586) / (float10)param_1;
          fVar4 = (float10)fcos(fVar3);
          *(float *)(piVar2[0x12] + -8 + (int)param_3 * 8) = (float)fVar4;
          fVar3 = (float10)fsin(fVar3);
          *(float *)(piVar2[0x12] + -4 + (int)param_3 * 8) = (float)fVar3;
        } while ((int)param_3 < param_1);
      }
    }
    else {
      param_3 = (int *)0x0;
      if (0 < param_1) {
        do {
          fVar3 = (float10)(int)param_3;
          param_3 = (int *)((int)param_3 + 1);
          fVar3 = (fVar3 * (float10)6.283185307179586) / (float10)param_1;
          fVar4 = (float10)fcos(fVar3);
          *(float *)(piVar2[0x12] + -8 + (int)param_3 * 8) = (float)fVar4;
          fVar3 = (float10)fsin(fVar3);
          *(float *)(piVar2[0x12] + -4 + (int)param_3 * 8) = (float)fVar3;
        } while ((int)param_3 < param_1);
      }
    }
    FUN_01361f20(param_1,piVar2 + 2);
  }
  return piVar2;
}

// 01362070  FUN_01362070  size=171  [run]
uint FUN_01362070(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  while( true ) {
    uVar1 = param_1 & 0x80000001;
    bVar3 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
    }
    uVar1 = param_1;
    if (bVar3) {
      do {
        uVar1 = (int)uVar1 / 2;
        uVar2 = uVar1 & 0x80000001;
        bVar3 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
        }
      } while (bVar3);
    }
    uVar2 = (int)uVar1 / 3;
    if (uVar1 == ((int)uVar1 / 3) * 3) {
      do {
        uVar1 = uVar2;
        uVar2 = (int)uVar1 / 3;
      } while (uVar1 == ((int)uVar1 / 3) * 3);
    }
    uVar2 = (int)uVar1 / 5;
    if (uVar1 == ((int)uVar1 / 5) * 5) {
      do {
        uVar1 = uVar2;
        uVar2 = (int)uVar1 / 5;
      } while (uVar1 == ((int)uVar1 / 5) * 5);
    }
    if ((int)uVar1 < 2) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// 01362130  FUN_01362130  size=15  [run]
int FUN_01362130(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}

// 01362220  FUN_01362220  size=27  [run]
undefined4 FUN_01362220(undefined4 *param_1)

{
  *param_1 = 3;
  *(undefined2 *)(param_1 + 1) = 1;
  return 1;
}

// 01362240  FUN_01362240  size=70  [run]
void __fastcall FUN_01362240(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xb4);
  iVar1 = 4;
  do {
    if (*piVar2 != 0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 8))(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

// 01362290  FUN_01362290  size=46  [run]
undefined4 __thiscall FUN_01362290(undefined4 *param_1,int *param_2)

{
  FUN_01362240();
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 0136BE80  FUN_0136be80  size=1021  [run]
undefined4 __thiscall FUN_0136be80(int *param_1,uint param_2)

{
  ulonglong uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int *_Base;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST0;
  uint local_18;
  uint local_c;
  
  FUN_01362240();
  if ((*(int *)(param_1[2] + 0x20) == 0) && (*(int *)(param_1[2] + 0x14) != 0)) {
    iVar3 = 0x24;
    uVar4 = 0;
    do {
      *(undefined4 *)(iVar3 + param_1[2]) = *(undefined4 *)(&UNK_018040fc + iVar3);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < *(uint *)(param_1[2] + 0x14));
  }
  iVar3 = param_1[2];
  if (*(int *)(iVar3 + 0x1c) == 0) {
    param_2 = param_2 & 0xfffffff7;
  }
  iVar6 = 0;
  for (uVar4 = param_2; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
    iVar6 = iVar6 + 1;
  }
  param_1[0x75] = iVar6;
  switch(param_2) {
  case 3:
    switch(*(undefined4 *)(iVar3 + 0x14)) {
    case 4:
      param_1[1] = (int)&LAB_01363d20;
      break;
    case 8:
      param_1[1] = (int)&LAB_01364190;
      break;
    case 0xc:
      param_1[1] = (int)&LAB_013647e0;
      break;
    case 0x10:
      param_1[1] = (int)&LAB_01364ff0;
    }
    break;
  case 4:
    switch(*(undefined4 *)(iVar3 + 0x14)) {
    case 4:
      param_1[1] = (int)&LAB_013622c0;
      break;
    case 8:
      param_1[1] = (int)&LAB_013626d0;
      break;
    case 0xc:
      param_1[1] = (int)&LAB_01362c70;
      break;
    case 0x10:
      param_1[1] = (int)&LAB_013633f0;
    }
    break;
  default:
    switch(*(undefined4 *)(iVar3 + 0x14)) {
    case 4:
      param_1[1] = (int)&LAB_0136a0e0;
      break;
    case 8:
      param_1[1] = (int)&LAB_0136a5c0;
      break;
    case 0xc:
      param_1[1] = (int)&LAB_0136ac40;
      break;
    case 0x10:
      param_1[1] = (int)&LAB_0136b480;
    }
    break;
  case 0x37:
    switch(*(undefined4 *)(iVar3 + 0x14)) {
    case 4:
      param_1[1] = (int)&LAB_013659f0;
      break;
    case 8:
      param_1[1] = (int)&LAB_01365f90;
      break;
    case 0xc:
      param_1[1] = (int)&LAB_01366710;
      break;
    case 0x10:
      param_1[1] = (int)&LAB_013670c0;
    }
    break;
  case 0x3f:
    switch(*(undefined4 *)(iVar3 + 0x14)) {
    case 4:
      param_1[1] = (int)&LAB_01367c80;
      break;
    case 8:
      param_1[1] = (int)&LAB_01368270;
      break;
    case 0xc:
      param_1[1] = (int)&LAB_01368a80;
      break;
    case 0x10:
      param_1[1] = (int)&LAB_01369490;
    }
  }
  fVar2 = (float)param_1[0x73];
  if (param_1[0x73] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_18 = (uint)(longlong)ROUND(fVar2 * *(float *)(iVar3 + 0x18));
  param_1[9] = local_18;
  if (local_18 != 0) {
    iVar3 = (**(code **)(*(int *)param_1[3] + 4))(local_18 * 4);
    param_1[6] = iVar3;
    if (iVar3 == 0) {
      return 0x34;
    }
    param_1[7] = iVar3;
    param_1[8] = iVar3 + param_1[9] * 4;
  }
  local_c = 0;
  if (*(int *)(param_1[2] + 0x14) != 0) {
    fVar8 = (float10)0.001;
    puVar7 = (uint *)(param_1 + 0xd);
    do {
      fVar9 = (float10)param_1[0x73];
      if (param_1[0x73] < 0) {
        fVar9 = fVar9 + (float10)4.2949673e+09;
      }
      uVar1 = (ulonglong)
              ROUND(fVar9 * (float10)*(float *)((int)puVar7 + param_1[2] + (-0x10 - (int)param_1)) *
                            fVar8);
      local_18 = (uint)uVar1;
      *puVar7 = local_18;
      if ((uVar1 & 1) == 0) {
        *puVar7 = local_18 + 1;
      }
      iVar3 = FUN_00fdbc60();
      while (uVar4 = 3, 3 < iVar3 + 1) {
        while (*puVar7 % uVar4 != 0) {
          uVar4 = uVar4 + 2;
          if (iVar3 + 1 <= (int)uVar4) goto LAB_0136c177;
        }
        *puVar7 = *puVar7 + 2;
      }
LAB_0136c177:
      local_c = local_c + 1;
      puVar7 = puVar7 + 1;
      fVar8 = extraout_ST0;
    } while (local_c < *(uint *)(param_1[2] + 0x14));
  }
  _Base = param_1 + 0xd;
  _qsort(_Base,*(size_t *)(param_1[2] + 0x14),4,FUN_01362130);
  param_2 = 0;
  if ((*(uint *)(param_1[2] + 0x14) & 0xfffffffc) != 0) {
    piVar5 = param_1 + 0x2d;
    do {
      iVar3 = _Base[3];
      iVar6 = (**(code **)(*(int *)param_1[3] + 4))(iVar3 * 0x10);
      *piVar5 = iVar6;
      if (iVar6 == 0) {
        return 0x34;
      }
      piVar5[4] = iVar6;
      piVar5[8] = iVar3 * 0x10 + iVar6;
      _Base[0x10] = (iVar3 - *_Base) * 0x10 + iVar6;
      _Base[0x11] = *piVar5 + 4 + (iVar3 - _Base[1]) * 0x10;
      _Base[0x12] = *piVar5 + 8 + (iVar3 - _Base[2]) * 0x10;
      _Base[0x13] = *piVar5 + 0xc;
      param_2 = param_2 + 1;
      _Base = _Base + 4;
      piVar5 = piVar5 + 1;
    } while (param_2 < *(uint *)(param_1[2] + 0x14) >> 2);
  }
  (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1[2] + 100) = 0;
  return 1;
}

// 0136C390  FUN_0136c390  size=212  [run]
undefined4 * __fastcall FUN_0136c390(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_01804360;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x71] = 0xffffffff;
  param_1[0x72] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  _memset(param_1 + 0x1d,0,0x40);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  _memset(param_1 + 0xd,0,0x40);
  _memset(param_1 + 0x3c,0,0x40);
  _memset(param_1 + 0x4c,0,0x40);
  _memset(param_1 + 0x5c,0,0x40);
  return param_1;
}

// 0136C470  FUN_0136c470  size=167  [run]
void __thiscall
FUN_0136c470(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 *param_5)

{
  float fVar1;
  undefined1 uVar2;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x1cc) = *param_5;
  uVar2 = (**(code **)(*param_3 + 4))();
  *(undefined1 *)(param_1 + 0x1d8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_4 + 0x10);
  fVar1 = (float)*(int *)(param_1 + 0x1cc);
  if (*(int *)(param_1 + 0x1cc) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0x1b8) = 1.0 - 62.831856 / fVar1;
  local_c = (undefined4)(longlong)ROUND(fVar1 * *(float *)(param_4 + 4));
  *(undefined4 *)(param_1 + 0x1d0) = local_c;
  FUN_0136be80(param_5[1] & 0x3ffff);
  return;
}

// 0136C520  FUN_0136c520  size=376  [run]
void __thiscall FUN_0136c520(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  
  if (*(char *)(param_1[2] + 100) != '\0') {
    iVar3 = FUN_0136be80(param_2[1]);
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*param_1 + 8))();
  }
  if ((((char)param_1[0x76] != '\0') && (uVar4 = param_2[1], (uVar4 & 8) != 0)) &&
     (*(int *)(param_1[2] + 0x1c) == 0)) {
    iVar3 = 0;
    for (; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
      iVar3 = iVar3 + 1;
    }
    _memset((void *)(*param_2 + (uint)*(ushort *)(param_2 + 3) * (iVar3 + -1) * 4),0,
            (uint)*(ushort *)((int)param_2 + 0xe) * 4);
  }
  if (param_1[0x75] != 0) {
    iVar3 = param_1[2];
    if ((*(float *)(iVar3 + 4) != (float)param_1[4]) || (*(float *)(iVar3 + 8) != (float)param_1[5])
       ) {
      FUN_0136c700();
      iVar3 = param_1[2];
      fVar1 = 1.0 / *(float *)(iVar3 + 8);
      fVar1 = (1.0 - fVar1) / (fVar1 + 1.0);
      fVar2 = 1.0 - fVar1;
      param_1[10] = (int)(1.0 / fVar2);
      param_1[0xb] = (int)((-1.0 / fVar2) * fVar1);
      param_1[4] = *(int *)(iVar3 + 4);
      param_1[5] = *(int *)(iVar3 + 8);
      fVar1 = (float)param_1[0x73];
      if (param_1[0x73] < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_c = (int)(longlong)ROUND(fVar1 * *(float *)(iVar3 + 4));
      param_1[0x74] = local_c;
    }
    if ((char)param_1[0x76] != '\0') {
      param_1[0x6f] = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    FUN_013517e0(param_2,param_1[0x74]);
    if (*(short *)((int)param_2 + 0xe) != 0) {
      (*(code *)param_1[1])(param_2);
      param_1[0x6f] = *(int *)(param_1[2] + 0xc);
      param_1[0x70] = *(int *)(param_1[2] + 0x10);
    }
  }
  return;
}

// 0136C6A0  FUN_0136c6a0  size=34  [run]
undefined4 FUN_0136c6a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 4))(0x1e0);
  if (iVar1 != 0) {
    uVar2 = FUN_0136c390();
    return uVar2;
  }
  return 0;
}

// 0136C700  FUN_0136c700  size=252  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0136c700(int param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  unkbyte10 Var5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = 1.0 / *(float *)(*(int *)(param_1 + 8) + 8);
  fVar1 = 1.0 - 1.0 / (fVar1 * fVar1);
  Var5 = FUN_00fdc1f0();
  fVar6 = (float10)log2(Var5);
  fVar6 = (float10)0.3010299956639812 * fVar6 * (float10)_DAT_0225a430;
  if ((float10)1 < (float10)fVar1 * fVar6) {
    fVar1 = (float)((float10)1 / fVar6);
  }
  uVar4 = 0;
  if (*(int *)(*(int *)(param_1 + 8) + 0x14) != 0) {
    do {
      fVar7 = (float10)FUN_00fdc1f0();
      uVar2 = uVar4 >> 2;
      uVar3 = uVar4 & 3;
      fVar6 = (float10)log2(fVar7);
      uVar4 = uVar4 + 1;
      fVar6 = (float10)0.3010299956639812 * fVar6 * (float10)_DAT_0225a430 * (float10)fVar1;
      *(float *)(param_1 + (uVar3 + 0x3c + uVar2 * 4) * 4) = (float)(((float10)1 - fVar6) * fVar7);
      *(float *)(param_1 + (uVar3 + 0x4c + uVar2 * 4) * 4) = (float)fVar6;
    } while (uVar4 < *(uint *)(*(int *)(param_1 + 8) + 0x14));
  }
  return;
}

// 0136C830  FUN_0136c830  size=92  [run]
uint FUN_0136c830(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*param_1 & 1) == 0) {
    *param_1 = *param_1 + 1;
  }
  uVar3 = FUN_00fdbc60();
  iVar1 = uVar3 + 1;
  do {
    uVar4 = 3;
    if (iVar1 < 4) {
      return uVar3;
    }
    uVar2 = *param_1;
    while (uVar3 = uVar2 / uVar4, uVar2 % uVar4 != 0) {
      uVar4 = uVar4 + 2;
      if (iVar1 <= (int)uVar4) {
        return uVar3;
      }
    }
    *param_1 = uVar2 + 2;
  } while( true );
}

// 0136C8C0  FUN_0136c8c0  size=35  [run]
void FUN_0136c8c0(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 0136C900  FUN_0136c900  size=34  [run]
undefined4 * __thiscall FUN_0136c900(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803c4c;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0136C940  FUN_0136c940  size=134  [run]
void __thiscall FUN_0136c940(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  
  if (param_4 == 0) {
    param_1[1] = 0x40800000;
    param_1[2] = 0x40000000;
    fVar1 = (float10)FUN_00fdc1f0();
    param_1[3] = (int)(float)fVar1;
    fVar1 = (float10)FUN_00fdc1f0();
    param_1[4] = (int)(float)fVar1;
    param_1[5] = 8;
    param_1[6] = 0;
    param_1[7] = 1;
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 0x19) = 1;
    return;
  }
  (**(code **)(*param_1 + 0x14))(param_3,param_4);
  return;
}

// 0136C9D0  FUN_0136c9d0  size=235  [run]
undefined4 __thiscall FUN_0136c9d0(int param_1,short param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  switch((int)param_2) {
  case 0:
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)param_3;
    return 1;
  case 1:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_3;
    return 1;
  case 2:
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  case 3:
    fVar3 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0xc) = (float)fVar3;
    return 1;
  case 4:
    fVar3 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x10) = (float)fVar3;
    return 1;
  case 5:
    uVar2 = *(undefined4 *)param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return 1;
  case 6:
    cVar1 = *param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    *(uint *)(param_1 + 0x1c) = (uint)(cVar1 != '\0');
    return 1;
  case 7:
    uVar2 = *(undefined4 *)param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    return 1;
  default:
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = *(undefined4 *)param_3;
    *(undefined1 *)(param_1 + 100) = 1;
    return 1;
  }
}

// 0136CAE0  FUN_0136cae0  size=63  [run]
void __thiscall FUN_0136cae0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_01804388;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  puVar2 = (undefined4 *)(param_2 + 0x14);
  puVar3 = param_1 + 5;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}

// 0136CB20  FUN_0136cb20  size=83  [run]
undefined4 * __thiscall FUN_0136cb20(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(0x68);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01804388;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    puVar1[3] = *(undefined4 *)(param_1 + 0xc);
    puVar1[4] = *(undefined4 *)(param_1 + 0x10);
    puVar3 = (undefined4 *)(param_1 + 0x14);
    puVar4 = puVar1 + 5;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)(puVar1 + 0x19) = 1;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0136CB80  FUN_0136cb80  size=39  [run]
undefined4 __thiscall FUN_0136cb80(undefined4 *param_1,int *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(0);
    (**(code **)(*param_2 + 8))(param_1);
  }
  return 1;
}

// 0136CBB0  FUN_0136cbb0  size=175  [run]
void __thiscall FUN_0136cbb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  iVar1 = param_2[2];
  *(int *)(param_1 + 0x14) = iVar1;
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0xc) = (float)fVar5;
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x10) = (float)fVar5;
  *(undefined4 *)(param_1 + 0x18) = param_2[5];
  *(uint *)(param_1 + 0x1c) = (uint)(*(char *)(param_2 + 6) != '\0');
  iVar2 = *(int *)((int)param_2 + 0x19);
  param_2 = (undefined4 *)((int)param_2 + 0x1d);
  *(int *)(param_1 + 0x20) = iVar2;
  if ((iVar2 == 1) && (uVar3 = 0, iVar1 != 0)) {
    puVar4 = (undefined4 *)(param_1 + 0x24);
    do {
      *puVar4 = *param_2;
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 100) = 1;
  return;
}

// 0136CC70  FUN_0136cc70  size=31  [run]
undefined4 * FUN_0136cc70(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(0x68);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_01804388;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0136CC90  FUN_0136cc90  size=35  [run]
void FUN_0136cc90(int *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(0);
    (**(code **)(*param_1 + 8))(param_2);
  }
  return;
}

// 0136CCC0  FUN_0136ccc0  size=34  [run]
undefined4 * __thiscall FUN_0136ccc0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_01803ccc;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0136CCF0  FUN_0136ccf0  size=14  [run]
LPCRITICAL_SECTION __fastcall FUN_0136ccf0(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return param_1;
}

// 0136CD30  FUN_0136cd30  size=29  [run]
void FUN_0136cd30(LPCSTR param_1,int param_2,LPWSTR param_3)

{
  MultiByteToWideChar(0,0,param_1,-1,param_3,param_2);
  return;
}

// 0136CD60  FUN_0136cd60  size=33  [run]
void __fastcall FUN_0136cd60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}

// 0136CD90  FUN_0136cd90  size=13  [run]
void __thiscall FUN_0136cd90(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_3;
  return;
}

// 0136CDA0  FUN_0136cda0  size=13  [run]
void __thiscall FUN_0136cda0(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - param_3;
  return;
}

