// src/misc/esp39.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CCA90..00F36E70, 25 functions

#include "mgrr.h"
#include "esp39.h"

// 009CCA90  FUN_009cca90  size=1  [callgraph]
void FUN_009cca90(void)

{
  return;
}

// 009CCAA0  FUN_009ccaa0  size=1  [callgraph]
void FUN_009ccaa0(void)

{
  return;
}

// 009CCAB0  FUN_009ccab0  size=84  [callgraph]
void FUN_009ccab0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = 0x3f800000;
  FUN_00efd1f0(&local_20,&local_30,param_3);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  return;
}

// 009CD040  FUN_009cd040  size=127  [callgraph]
undefined4
FUN_009cd040(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = cEsp::FixTexture(&local_4,&local_8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    *param_1 = 0;
    return 0;
  }
  iVar1 = FUN_00fa0740(local_8);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016575ac,&DAT_016594f0);
  }
  return 1;
}

// 009CD2A0  FUN_009cd2a0  size=53  [callgraph]
int __fastcall FUN_009cd2a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x68);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 1;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 009CD310  FUN_009cd310  size=33  [callgraph]
bool FUN_009cd310(uint param_1)

{
  return (0x80000000U >> ((byte)param_1 & 0x1f) & *(uint *)(&DAT_01bea080 + (param_1 >> 5) * 4)) !=
         0;
}

// 009CD650  esp39::vf0C  size=1  [class]
void esp39::vf0C(void)

{
  return;
}

// 009CD660  esp39::vf00  size=36  [class]
undefined4 * __thiscall esp39::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009CF970  esp39::esp39  size=18  [class]
undefined4 * __fastcall esp39::esp39(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED4C80  esp39::vf14  size=1  [class]
void esp39::vf14(void)

{
  return;
}

// 00EDC9E0  FUN_00edc9e0  size=963  [callgraph]
undefined4 __thiscall FUN_00edc9e0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  float fVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  float10 fVar8;
  
  sVar4 = *(short *)(param_1 + 0x4e);
  if ((sVar4 == -3) || ((*(uint *)(param_1 + 0x30) & 0x100) != 0)) {
    if ('1' < *(char *)(*param_4 + 0x16)) {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
      *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x8000;
      cVar1 = *(char *)(*param_4 + 0x16);
      *(undefined1 *)(param_2 + 0x10) = 99;
      *(short *)(param_2 + 0xe) = cVar1 + -0x32;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = param_3;
      return 1;
    }
    sVar4 = *(char *)(*param_4 + 0x16) + 0x40;
    *(undefined1 *)(param_2 + 0x10) = 0x5c;
  }
  else {
    if ((sVar4 < -3) && (-0xe < sVar4)) {
      uVar3 = 9;
      sVar6 = (short)*(char *)(*param_4 + 0x16);
      if ((int)sVar4 + 0xdU < 10) {
        sVar7 = (short)*(char *)(*param_4 + 0x16);
        switch(sVar4) {
        case -0xd:
          uVar3 = 0x12;
          break;
        case -0xc:
          *(undefined1 *)(param_2 + 0x10) = 0x11;
          *(short *)(param_2 + 0xe) = sVar7;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        case -0xb:
          *(undefined1 *)(param_2 + 0x10) = 0x10;
          *(short *)(param_2 + 0xe) = sVar7;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        case -10:
          *(undefined1 *)(param_2 + 0x10) = 0xf;
          *(short *)(param_2 + 0xe) = sVar7;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        case -9:
          *(undefined1 *)(param_2 + 0x10) = 0xe;
          *(short *)(param_2 + 0xe) = sVar7;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        case -8:
          *(undefined1 *)(param_2 + 0x10) = 0xd;
          *(short *)(param_2 + 0xe) = sVar7;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        case -7:
          *(undefined1 *)(param_2 + 0x10) = 0xc;
          *(short *)(param_2 + 0xe) = sVar7;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        case -6:
          *(undefined1 *)(param_2 + 0x10) = 0xb;
          *(short *)(param_2 + 0xe) = sVar6;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        case -5:
          *(undefined1 *)(param_2 + 0x10) = 10;
          *(short *)(param_2 + 0xe) = sVar6;
          *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x2c) = param_3;
          return 1;
        }
      }
      *(undefined1 *)(param_2 + 0x10) = uVar3;
      *(short *)(param_2 + 0xe) = sVar6;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = param_3;
      return 1;
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x2000000) != 0) {
      iVar5 = (int)*(char *)(*param_4 + 0x16);
      if (iVar5 < 1) {
        iVar5 = 0;
        *(undefined1 *)(param_2 + 0x10) = 0x4b;
      }
      else if (iVar5 < 0x14) {
        *(undefined1 *)(param_2 + 0x10) = 0x4b;
      }
      else if (iVar5 < 0x1e) {
        *(undefined1 *)(param_2 + 0x10) = 0x4c;
        iVar5 = iVar5 + -0x14;
      }
      else {
        if (0x27 < iVar5) {
          return 0;
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
        *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x8000;
        *(undefined1 *)(param_2 + 0x10) = 99;
        iVar5 = iVar5 + -0x1e;
      }
      *(short *)(param_2 + 0xe) = (short)iVar5;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = param_3;
      return 1;
    }
    if (((*(uint *)(param_1 + 0x34) & 0x200000) == 0) &&
       (iVar5 = FUN_00de5650(param_1 + 0x130,*(undefined4 *)(param_1 + 300)), iVar5 == 0)) {
      if (((*(byte *)(param_1 + 0x3c) & 8) != 0) && (*(int *)(param_1 + 0x120) == 0)) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      }
      return 0;
    }
    if (*(char *)(*param_4 + 0x16) == -0x40) {
      *(undefined2 *)(param_2 + 0xe) = 0;
      *(undefined1 *)(param_2 + 0x10) = 0x51;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2c) = param_3;
      return 1;
    }
    fVar8 = (float10)FUN_00fdef70();
    fVar2 = (float)fVar8 - *(float *)(param_4[1] + 8);
    *(float *)(param_1 + 0x39c) = fVar2;
    sVar4 = FUN_00933520(fVar2,(int)*(char *)(*param_4 + 0x16));
    *(undefined1 *)(param_2 + 0x10) = 0x51;
  }
  *(short *)(param_2 + 0xe) = sVar4;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return 1;
}

// 00EDCDD0  FUN_00edcdd0  size=197  [callgraph]
void __fastcall FUN_00edcdd0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_1 + 0x6c) & 0x10) != 0) {
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_c = 3;
    FUN_00f4a3f0(&local_c,*(undefined4 *)(param_1 + 0x60));
    iVar1 = *(int *)(param_1 + 0x84);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) == 6)) {
      local_c = *(undefined4 *)(iVar1 + 0xb0);
      local_8 = *(undefined4 *)(iVar1 + 0xb4);
      local_4 = *(undefined4 *)(iVar1 + 0xb8);
    }
    if (*(float *)(param_1 + 0x408) != -2.0) {
      *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x404);
    }
    fVar2 = (float10)FUN_00e773a0(&local_c);
    *(float *)(param_1 + 0x404) = (float)fVar2;
    if (*(float *)(param_1 + 0x408) == -2.0) {
      *(float *)(param_1 + 0x408) = (float)fVar2;
      return;
    }
  }
  return;
}

// 00EDCEA0  FUN_00edcea0  size=5684  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00eddfdd) */
/* WARNING: Removing unreachable block (ram,0x00eddf47) */
/* WARNING: Removing unreachable block (ram,0x00edddfd) */
/* WARNING: Removing unreachable block (ram,0x00eddd2b) */
/* WARNING: Removing unreachable block (ram,0x00eddc9b) */
/* WARNING: Removing unreachable block (ram,0x00edda3f) */
/* WARNING: Removing unreachable block (ram,0x00edd9a9) */
/* WARNING: Removing unreachable block (ram,0x00edd8ab) */
/* WARNING: Removing unreachable block (ram,0x00edd747) */
/* WARNING: Removing unreachable block (ram,0x00edd697) */
/* WARNING: Removing unreachable block (ram,0x00edd5e2) */
/* WARNING: Removing unreachable block (ram,0x00edd558) */
/* WARNING: Removing unreachable block (ram,0x00edd5a2) */
/* WARNING: Removing unreachable block (ram,0x00edcfed) */
/* WARNING: Removing unreachable block (ram,0x00edd6f9) */
/* WARNING: Removing unreachable block (ram,0x00edd864) */
/* WARNING: Removing unreachable block (ram,0x00edd8f4) */
/* WARNING: Removing unreachable block (ram,0x00edd9f3) */
/* WARNING: Removing unreachable block (ram,0x00edda8b) */
/* WARNING: Removing unreachable block (ram,0x00eddce2) */
/* WARNING: Removing unreachable block (ram,0x00edddb6) */
/* WARNING: Removing unreachable block (ram,0x00edde46) */
/* WARNING: Removing unreachable block (ram,0x00eddf91) */
/* WARNING: Removing unreachable block (ram,0x00ede029) */

void FUN_00edcea0(float *param_1,float *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  undefined1 auStack_b4 [12];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float *local_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  undefined1 *local_68;
  uint uStack_64;
  undefined1 local_60 [36];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  puVar1 = (undefined4 *)param_1[2];
  *puVar1 = 0;
  local_7c = param_2;
  puVar1[1] = 0xbf800000;
  if ((float *)param_1[1] != (float *)0x0) {
    *(float *)param_1[1] = param_2[1];
  }
  puVar2 = (uint *)param_2[1];
  if (puVar2 == (uint *)0x0) goto LAB_00ede4bf;
  if ((*puVar2 & 0x20000000) != 0) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x4000;
  }
  puVar3 = (uint *)param_1[4];
  *puVar3 = puVar2[1];
  puVar3[1] = puVar2[2];
  puVar3[2] = puVar2[3];
  puVar3[3] = 0x3f800000;
  local_70 = (float)puVar2[4];
  puVar3 = (uint *)param_1[3];
  local_6c = (float)puVar2[5];
  local_68 = (undefined1 *)puVar2[6];
  switch(*(undefined1 *)((int)puVar2 + 0x151)) {
  case 0:
    break;
  case 1:
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_98 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar11 = (float10)FUN_00fdef70();
    local_a0 = (float)fVar11;
    local_94 = local_a0;
    fVar11 = (float10)FUN_00fdee60();
    local_a0 = (float)fVar11;
    local_90 = local_a0 * local_70 * local_94;
    fVar11 = (float10)FUN_00fded30();
    local_88 = (float)fVar11 * (float)local_68 * local_94;
    uVar8 = *puVar3 * 0x19660d + 0x3c6ef35f;
    *puVar3 = uVar8;
    local_a4 = (float)(uVar8 >> 8);
    pfVar6 = (float *)param_1[4];
    local_a0 = 1.0 - (float)(int)local_a4 * 5.960465e-08 * 2.0;
    local_8c = local_a0 * local_6c;
    *pfVar6 = local_90 + *pfVar6;
    pfVar6[1] = pfVar6[1] + local_8c;
    pfVar6[2] = pfVar6[2] + local_88;
    pfVar6[3] = local_84 + pfVar6[3];
    goto LAB_00edd4dd;
  case 2:
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_94 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar11 = (float10)FUN_00fdef70();
    local_9c = (float)fVar11;
    local_98 = local_9c;
    fVar11 = (float10)FUN_00fded30();
    local_9c = (float)fVar11;
    fVar11 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar11;
    local_90 = local_a8 * local_70 * local_9c * local_98;
    fVar11 = (float10)FUN_00fded30();
    local_a8 = (float)fVar11;
    local_88 = local_a8 * (float)local_68 * local_9c * local_98;
    fVar11 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar11;
    pfVar6 = (float *)param_1[4];
    local_8c = local_a8 * local_6c * local_98;
    *pfVar6 = *pfVar6 + local_90;
    pfVar6[1] = pfVar6[1] + local_8c;
    pfVar6[2] = pfVar6[2] + local_88;
    fVar5 = local_84 + pfVar6[3];
    goto LAB_00edd4c6;
  case 3:
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar11 = (float10)FUN_00fdef70();
    local_a8 = (float)fVar11;
    local_9c = local_a8;
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_98 = (float)fVar11 * (float)fVar11;
    local_94 = 1.0 - local_98;
    local_8c = (local_98 - 0.5) * local_6c;
    local_8c = local_8c + local_8c;
    fVar11 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar11;
    local_90 = local_a8 * local_70 * local_9c * local_94;
    fVar11 = (float10)FUN_00fded30();
    goto LAB_00edd490;
  case 4:
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar11 = (float10)FUN_00fdef70();
    local_a8 = (float)fVar11;
    local_9c = local_a8;
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_98 = (float)fVar11;
    if (local_6c != 0.0) {
      local_98 = 1.0 - (((float)local_68 / local_6c) * local_98 +
                       (local_6c - (float)local_68) / local_6c);
    }
    local_94 = 1.0 - local_98;
    local_8c = (local_98 - 0.5) * local_6c;
    local_8c = local_8c + local_8c;
    fVar11 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar11;
    local_90 = local_a8 * local_70 * local_9c * local_94;
    fVar11 = (float10)FUN_00fded30();
    local_a8 = (float)fVar11;
    fVar5 = local_a8 * local_70;
    goto LAB_00edd494;
  case 5:
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_94 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    fVar11 = (float10)FUN_00fded30();
    local_a8 = (float)fVar11;
    local_9c = local_a8;
    fVar11 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar11;
    local_90 = local_a8 * local_70 * local_9c;
    fVar11 = (float10)FUN_00fded30();
    local_a8 = (float)fVar11;
    local_88 = local_a8 * (float)local_68 * local_9c;
    fVar11 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar11;
    pfVar6 = (float *)param_1[4];
    local_8c = local_a8 * local_6c;
    *pfVar6 = local_90 + *pfVar6;
    fVar5 = pfVar6[1] + local_8c;
    goto LAB_00edd4b2;
  case 6:
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)((fVar11 + fVar11) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar11 = (float10)FUN_00fdef70();
    local_a8 = (float)fVar11;
    local_9c = local_a8;
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_98 = (float)fVar11 * (float)fVar11;
    local_94 = 1.0 - local_98;
    local_a8 = local_6c * (local_98 - 0.5);
    local_a8 = local_a8 + local_a8;
    local_8c = -local_6c + local_a8;
    fVar11 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar11;
    local_90 = local_a8 * local_70 * local_9c * local_94;
    fVar11 = (float10)FUN_00fded30();
LAB_00edd490:
    local_a8 = (float)fVar11;
    fVar5 = local_a8 * (float)local_68;
LAB_00edd494:
    pfVar6 = (float *)param_1[4];
    local_88 = fVar5 * local_9c * local_94;
    *pfVar6 = local_90 + *pfVar6;
    fVar5 = local_8c + pfVar6[1];
LAB_00edd4b2:
    pfVar6[1] = fVar5;
    pfVar6[2] = pfVar6[2] + local_88;
    fVar5 = pfVar6[3] + local_84;
LAB_00edd4c6:
    pfVar6[3] = fVar5;
    goto LAB_00edd4dd;
  default:
    FUN_00dd5650(&DAT_016d9f14,*(undefined1 *)((int)puVar2 + 0x151));
  }
  uVar8 = *puVar3 * 0x19660d + 0x3c6ef35f;
  uVar9 = uVar8 * 0x19660d + 0x3c6ef35f;
  local_90 = (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * local_70;
  uVar8 = uVar9 * 0x19660d + 0x3c6ef35f;
  *puVar3 = uVar8;
  local_a4 = (float)(uVar8 >> 8);
  local_8c = (1.0 - (float)(uVar9 >> 8) * 5.960465e-08 * 2.0) * local_6c;
  pfVar6 = (float *)param_1[4];
  local_a8 = 1.0 - (float)(int)local_a4 * 5.960465e-08 * 2.0;
  local_88 = local_a8 * (float)local_68;
  *pfVar6 = *pfVar6 + local_90;
  pfVar6[1] = pfVar6[1] + local_8c;
  pfVar6[2] = local_88 + pfVar6[2];
  pfVar6[3] = pfVar6[3] + local_84;
LAB_00edd4dd:
  if (((*puVar2 & 0x1000000) != 0) && (param_1[0x10] != 0.0)) {
    if ((*(uint *)*param_1 & 0x4000000) == 0) {
      uVar7 = FUN_00f3bee0();
    }
    else {
      uVar7 = FUN_00f3bfa0();
    }
    FUN_00f3c2a0(uVar7,param_1[3]);
  }
  if ((*puVar2 & 0x20000) == 0) {
    puVar3 = (uint *)param_1[8];
    *puVar3 = puVar2[7];
    puVar3[1] = puVar2[8];
    puVar3[2] = puVar2[9];
    puVar3[3] = 0x3f800000;
    uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
    *(uint *)param_1[3] = uVar8;
    *(float *)param_1[8] =
         (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[10] + *(float *)param_1[8]
    ;
    uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
    *(uint *)param_1[3] = uVar8;
    *(float *)((int)param_1[8] + 4) =
         (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0xb] +
         *(float *)((int)param_1[8] + 4);
    uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
    *(uint *)param_1[3] = uVar8;
    *(float *)((int)param_1[8] + 8) =
         (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0xc] +
         *(float *)((int)param_1[8] + 8);
  }
  else {
    uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
    *(uint *)param_1[3] = uVar8;
    *(float *)param_1[8] =
         (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[10] + (float)puVar2[7];
    *(undefined4 *)((int)param_1[8] + 4) = 0;
    *(undefined4 *)((int)param_1[8] + 8) = 0;
    local_70 = 0.0;
    uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
    *(uint *)param_1[3] = uVar8;
    local_6c = (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0xb] * 17.453293;
    uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
    *(uint *)param_1[3] = uVar8;
    local_a4 = (float)(uVar8 >> 8);
    local_a8 = 1.0 - (float)(int)local_a4 * 5.960465e-08 * 2.0;
    local_68 = (undefined1 *)(local_a8 * (float)puVar2[0xc] * 17.453293);
    FUN_00ddc1d0(local_60,&local_70,3);
    pfVar6 = (float *)param_1[8];
    D3DXVec3TransformNormal(pfVar6,pfVar6,local_60);
    *pfVar6 = *pfVar6 + fStack_3c;
    pfVar6[1] = fStack_38 + pfVar6[1];
    pfVar6[2] = fStack_34 + pfVar6[2];
    fStack_78 = (float)puVar2[8] * 17.453293;
    fStack_74 = (float)puVar2[9] * 17.453293;
    FUN_00ddc1d0(&local_6c,&local_7c,3);
    pfVar6 = (float *)param_1[8];
    D3DXVec3TransformNormal(pfVar6,pfVar6,&local_6c);
    *pfVar6 = *pfVar6 + fStack_30;
    pfVar6[1] = fStack_2c + pfVar6[1];
    pfVar6[2] = fStack_28 + pfVar6[2];
  }
  puVar3 = (uint *)param_1[9];
  *puVar3 = puVar2[0xe];
  puVar3[1] = puVar2[0xf];
  puVar3[2] = puVar2[0x10];
  puVar3[3] = 0x3f800000;
  puVar3 = (uint *)param_1[7];
  *puVar3 = puVar2[0x55];
  puVar3[1] = puVar2[0x56];
  puVar3[2] = puVar2[0x57];
  puVar3[3] = 0x3f800000;
  *(uint *)param_1[5] = puVar2[0x21];
  *(uint *)((int)param_1[5] + 4) = puVar2[0x20];
  *(uint *)((int)param_1[5] + 0xc) = puVar2[0x58];
  *(uint *)((int)param_1[5] + 8) = puVar2[0x5c];
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)param_1[5] =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x23] + *(float *)param_1[5]
  ;
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)((int)param_1[5] + 4) =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x22] +
       *(float *)((int)param_1[5] + 4);
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)((int)param_1[5] + 0xc) =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x59] +
       *(float *)((int)param_1[5] + 0xc);
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  local_a4 = (float)(uVar8 >> 8);
  local_a8 = 1.0 - (float)(int)local_a4 * 5.960465e-08 * 2.0;
  *(float *)((int)param_1[5] + 8) = local_a8 * (float)puVar2[0x5d] + *(float *)((int)param_1[5] + 8)
  ;
  if ((char)puVar2[0x1e] == '\0') {
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)fVar11;
    local_70 = (float)puVar2[0x2d] * local_a8 * (float)puVar2[0x2a] + (float)puVar2[0x24];
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)fVar11;
    local_6c = (float)puVar2[0x2e] * local_a8 * (float)puVar2[0x2a] + (float)puVar2[0x25];
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)fVar11;
    local_68 = (undefined1 *)
               ((float)puVar2[0x2f] * local_a8 * (float)puVar2[0x2a] + (float)puVar2[0x2b]);
    uStack_64 = puVar2[0x28];
    *(float *)param_1[0xd] = local_70;
    *(float *)((int)param_1[0xd] + 4) = local_6c;
    *(undefined1 **)((int)param_1[0xd] + 8) = local_68;
    *(uint *)((int)param_1[0xd] + 0xc) = uStack_64;
  }
  else if ((char)puVar2[0x1e] == '\x01') {
    *(undefined4 *)param_1[0xd] = 0;
    *(undefined4 *)((int)param_1[0xd] + 4) = *(undefined4 *)param_1[5];
    *(undefined4 *)((int)param_1[0xd] + 8) = *(undefined4 *)((int)param_1[5] + 4);
    *(float *)param_1[5] = *(float *)((int)param_1[0xd] + 4) * (float)puVar2[0x29];
    local_a8 = *(float *)((int)param_1[0xd] + 8) * (float)puVar2[0x29];
    *(float *)((int)param_1[5] + 4) = local_a8;
  }
  if (((*puVar2 & 0x2000000) != 0) && (param_1[0xf] != 0.0)) {
    if ((*(uint *)*param_1 & 0x4000000) == 0) {
      iVar10 = FUN_00f3bf60();
    }
    else {
      iVar10 = FUN_00f3c020();
    }
    if (iVar10 == 0) {
      *(undefined4 *)param_1[0xf] = 0;
    }
    else {
      FUN_00f3c1b0(iVar10,param_1[3]);
    }
  }
  puVar3 = (uint *)param_1[6];
  *puVar3 = puVar2[0x11];
  puVar3[1] = puVar2[0x12];
  puVar3[2] = puVar2[0x13];
  puVar3[3] = 0x3f800000;
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)param_1[6] =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x14] + *(float *)param_1[6]
  ;
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)((int)param_1[6] + 4) =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x15] +
       *(float *)((int)param_1[6] + 4);
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)((int)param_1[6] + 8) =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x16] +
       *(float *)((int)param_1[6] + 8);
  pfVar6 = (float *)param_1[6];
  *pfVar6 = *pfVar6 * 0.017453292;
  pfVar6[1] = pfVar6[1] * 0.017453292;
  pfVar6[2] = pfVar6[2] * 0.017453292;
  pfVar6[3] = pfVar6[3] * 0.017453292;
  puVar3 = (uint *)param_1[10];
  *puVar3 = puVar2[0x17];
  puVar3[1] = puVar2[0x18];
  puVar3[2] = puVar2[0x19];
  puVar3[3] = 0x3f800000;
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)param_1[10] =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x1a] +
       *(float *)param_1[10];
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)((int)param_1[10] + 4) =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x1b] +
       *(float *)((int)param_1[10] + 4);
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  local_a4 = (float)(uVar8 >> 8);
  local_a8 = 1.0 - (float)(int)local_a4 * 5.960465e-08 * 2.0;
  *(float *)((int)param_1[10] + 8) =
       local_a8 * (float)puVar2[0x1c] + *(float *)((int)param_1[10] + 8);
  pfVar6 = (float *)param_1[10];
  *pfVar6 = *pfVar6 * 0.017453292;
  pfVar6[1] = pfVar6[1] * 0.017453292;
  pfVar6[2] = pfVar6[2] * 0.017453292;
  pfVar6[3] = pfVar6[3] * 0.017453292;
  if (((*puVar2 & 0x800000) != 0) && (param_1[0x11] != 0.0)) {
    if ((*(uint *)*param_1 & 0x4000000) == 0) {
      uVar7 = FUN_00f3bf20();
    }
    else {
      uVar7 = FUN_00f3bfe0();
    }
    FUN_00f3c4c0(uVar7,param_1[3]);
  }
  uVar8 = puVar2[0x33];
  puVar3 = (uint *)param_1[0xb];
  local_a0 = (float)puVar2[0x34];
  local_9c = (float)puVar2[0x35];
  *puVar3 = puVar2[0x32];
  puVar3[1] = uVar8;
  puVar3[2] = (uint)local_a0;
  puVar3[3] = (uint)local_9c;
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)param_1[0xb] =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x36] +
       *(float *)param_1[0xb];
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)((int)param_1[0xb] + 4) =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x37] +
       *(float *)((int)param_1[0xb] + 4);
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  *(float *)((int)param_1[0xb] + 8) =
       (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * (float)puVar2[0x38] +
       *(float *)((int)param_1[0xb] + 8);
  uVar8 = *(uint *)param_1[3] * 0x19660d + 0x3c6ef35f;
  *(uint *)param_1[3] = uVar8;
  local_a4 = (float)(uVar8 >> 8);
  local_a8 = 1.0 - (float)(int)local_a4 * 5.960465e-08 * 2.0;
  *(float *)((int)param_1[0xb] + 0xc) =
       local_a8 * (float)puVar2[0x39] + *(float *)((int)param_1[0xb] + 0xc);
  puVar1 = (undefined4 *)param_1[0xb];
  puVar4 = (undefined4 *)param_1[0xc];
  *puVar4 = *puVar1;
  puVar4[1] = puVar1[1];
  puVar4[2] = puVar1[2];
  puVar4[3] = puVar1[3];
  if (*(char *)((int)puVar2 + 0x79) == '\0') {
    local_a8 = (float)puVar2[0x3e];
    local_9c = (float)puVar2[0x3f];
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)fVar11;
    local_a8 = local_a8 - local_a0 * local_9c;
    *(float *)param_1[0xe] = local_a8;
  }
  else if (*(char *)((int)puVar2 + 0x79) == '\x01') {
    if (*(char *)((int)puVar2 + 0x13e) != '\0') {
      fVar11 = (float10)FUN_00dde300(0,0x3f800000);
      local_a0 = (float)fVar11;
      local_a8 = (float)*(byte *)((int)puVar2 + 0x13e) * 0.01 * local_a0;
      *(float *)param_1[0xe] = local_a8;
    }
    fVar11 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)(ushort)puVar2[0x4f] + (float)*(byte *)((int)puVar2 + 0x13f) * (float)fVar11;
    *(float *)((int)param_1[0xe] + 4) = local_a8;
    if ((*(char *)((int)puVar2 + 0x13f) != '\0') && ((puVar2[0x50] & 0x80000000) != 0)) {
      *(uint *)((int)*param_1 + 4) = *(uint *)((int)*param_1 + 4) | 0x8000000;
    }
    *(float *)param_1[0xc] = (float)puVar2[0x3f] * *(float *)param_1[0xc];
    *(float *)((int)param_1[0xc] + 4) = (float)puVar2[0x40] * *(float *)((int)param_1[0xc] + 4);
    *(float *)((int)param_1[0xc] + 8) = (float)puVar2[0x41] * *(float *)((int)param_1[0xc] + 8);
    *(float *)((int)param_1[0xc] + 0xc) = (float)puVar2[0x42] * *(float *)((int)param_1[0xc] + 0xc);
  }
  if (0 < *(short *)((int)puVar2 + 0xea)) {
    *(undefined4 *)((int)param_1[0xc] + 0xc) = 0;
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12] = 0x3f800000;
  }
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13] = 0x3f800000;
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14] = 0x3f800000;
    fVar5 = local_7c[4];
    if ((((fVar5 != 0.0) && ((((uint *)*local_7c)[1] & 0x40000000) == 0)) &&
        (uVar8 = *(uint *)*local_7c, (uVar8 & 0x100000) == 0)) &&
       (((uVar8 & 1) == 0 && ((*(uint *)*param_1 & 0x4000000) == 0)))) {
      local_a0 = *(float *)((int)fVar5 + 0x10);
      local_9c = *(float *)((int)fVar5 + 0x18);
      local_98 = *(float *)((int)fVar5 + 0x20);
      local_94 = *(float *)((int)fVar5 + 0x24);
      fStack_80 = *(float *)((int)fVar5 + 0x28);
      fStack_74 = *(float *)((int)fVar5 + 0x30);
      fStack_78 = *(float *)((int)fVar5 + 0x34);
      local_a4 = *(float *)((int)fVar5 + 0x38);
      local_a8 = *(float *)((int)fVar5 + 0x14) * *(float *)((int)fVar5 + 0x14) + local_a0 * local_a0
                 + local_9c * local_9c;
      fVar11 = (float10)FUN_00fdef70();
      local_a8 = (float)fVar11;
      fStack_80 = local_94 * local_94 + local_98 * local_98 + fStack_80 * fStack_80;
      local_70 = local_a8;
      fVar11 = (float10)FUN_00fdef70();
      fStack_80 = (float)fVar11;
      local_a4 = fStack_78 * fStack_78 + fStack_74 * fStack_74 + local_a4 * local_a4;
      local_6c = fStack_80;
      fVar11 = (float10)FUN_00fdef70();
      local_68 = (undefined1 *)(float)fVar11;
      local_a4 = (local_6c + local_70 + (float)local_68) * 0.33333334;
      *(float *)param_1[0x14] = local_a4;
    }
  }
  if (((*(float *)((int)local_7c[3] + 0x44) != 1.0) && ((*(uint *)*local_7c & 0x100000) == 0)) &&
     (((*(uint *)*local_7c & 1) == 0 && (*(short *)(local_7c + 5) != -3)))) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000000;
  }
  if ((uint *)param_1[0x15] != (uint *)0x0) {
    *(uint *)param_1[0x15] = puVar2[0x5a];
  }
  if (*(short *)((int)puVar2 + 0xea) == 0) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x8000;
  }
  if ((((*(char *)((int)puVar2 + 0x79) == '\0') && ((float)puVar2[0x3b] == 1.0)) &&
      ((float)puVar2[0x3c] == 1.0)) && ((float)puVar2[0x3d] == 1.0)) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x800;
  }
  if ((param_1[0x16] != 0.0) && ((*(uint *)*param_1 & 0x400) != 0)) {
    local_70 = -1.0;
    local_6c = 1.0;
    local_68 = (undefined1 *)0x3f800000;
    FUN_00ddd140(local_60,&local_70);
    local_70 = *local_7c;
    local_90 = param_1[4];
    local_68 = local_60;
    local_6c = *param_1;
    local_8c = param_1[8];
    local_88 = param_1[9];
    local_84 = param_1[0x16];
    FUN_00edc180(&local_90,&local_70);
  }
  if ((undefined1 *)param_1[0x17] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[0x17] = *(undefined1 *)((int)puVar2 + 0x152);
  }
  if ((undefined1 *)param_1[0x18] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[0x18] = *(undefined1 *)((int)puVar2 + 0x153);
    __security_check_cookie(local_14 ^ (uint)auStack_b4);
    return;
  }
LAB_00ede4bf:
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

// 00EDE4F0  FUN_00ede4f0  size=5692  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00edf65f) */
/* WARNING: Removing unreachable block (ram,0x00edf5c7) */
/* WARNING: Removing unreachable block (ram,0x00edf46e) */
/* WARNING: Removing unreachable block (ram,0x00edf379) */
/* WARNING: Removing unreachable block (ram,0x00edf2e7) */
/* WARNING: Removing unreachable block (ram,0x00edf099) */
/* WARNING: Removing unreachable block (ram,0x00edf001) */
/* WARNING: Removing unreachable block (ram,0x00edeeee) */
/* WARNING: Removing unreachable block (ram,0x00eded56) */
/* WARNING: Removing unreachable block (ram,0x00edecb3) */
/* WARNING: Removing unreachable block (ram,0x00edebf8) */
/* WARNING: Removing unreachable block (ram,0x00edeb6e) */
/* WARNING: Removing unreachable block (ram,0x00edebb8) */
/* WARNING: Removing unreachable block (ram,0x00ede63c) */
/* WARNING: Removing unreachable block (ram,0x00eded0b) */
/* WARNING: Removing unreachable block (ram,0x00edeea5) */
/* WARNING: Removing unreachable block (ram,0x00edef37) */
/* WARNING: Removing unreachable block (ram,0x00edf04d) */
/* WARNING: Removing unreachable block (ram,0x00edf0e5) */
/* WARNING: Removing unreachable block (ram,0x00edf330) */
/* WARNING: Removing unreachable block (ram,0x00edf425) */
/* WARNING: Removing unreachable block (ram,0x00edf4b7) */
/* WARNING: Removing unreachable block (ram,0x00edf613) */
/* WARNING: Removing unreachable block (ram,0x00edf6ab) */

void __thiscall FUN_00ede4f0(int param_1,uint *param_2)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  undefined1 auStack_b4 [8];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  double local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  uint uStack_64;
  undefined1 local_60 [36];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
  *(uint **)(param_1 + 0x24) = param_2;
  if (param_2 == (uint *)0x0) {
    __security_check_cookie(local_14 ^ (uint)auStack_b4);
    return;
  }
  if ((*param_2 & 0x20000000) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x4000;
  }
  puVar1 = (uint *)(param_1 + 0x114);
  *(uint *)(param_1 + 0x180) = param_2[1];
  *(uint *)(param_1 + 0x184) = param_2[2];
  *(uint *)(param_1 + 0x188) = param_2[3];
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  local_70 = (float)param_2[4];
  local_6c = (float)param_2[5];
  local_68 = (float)param_2[6];
  switch(*(undefined1 *)((int)param_2 + 0x151)) {
  default:
    uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
    uVar5 = uVar4 * 0x19660d + 0x3c6ef35f;
    local_90 = (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * local_70;
    uVar4 = uVar5 * 0x19660d + 0x3c6ef35f;
    *puVar1 = uVar4;
    uVar4 = uVar4 >> 8;
    local_98 = (double)CONCAT44(local_98._4_4_,uVar4);
    local_8c = (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) * local_6c;
    local_ac = 1.0 - (float)uVar4 * 5.960465e-08 * 2.0;
    local_88 = local_ac * local_68;
    *(float *)(param_1 + 0x180) = local_90 + *(float *)(param_1 + 0x180);
    *(float *)(param_1 + 0x184) = local_8c + *(float *)(param_1 + 0x184);
    *(float *)(param_1 + 0x188) = local_88 + *(float *)(param_1 + 0x188);
    *(float *)(param_1 + 0x18c) = local_84 + *(float *)(param_1 + 0x18c);
    goto LAB_00edeb22;
  case 1:
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar7 = (float10)FUN_00fdef70();
    local_a8 = (float)fVar7;
    local_9c = local_a8;
    fVar7 = (float10)FUN_00fdee60();
    local_a8 = (float)fVar7;
    local_90 = local_a8 * local_70 * local_9c;
    fVar7 = (float10)FUN_00fded30();
    local_88 = (float)fVar7 * local_68 * local_9c;
    uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
    *puVar1 = uVar4;
    uVar4 = uVar4 >> 8;
    local_98 = (double)CONCAT44(local_98._4_4_,uVar4);
    local_a8 = 1.0 - (float)uVar4 * 5.960465e-08 * 2.0;
    local_8c = local_a8 * local_6c;
    *(float *)(param_1 + 0x180) = local_90 + *(float *)(param_1 + 0x180);
    *(float *)(param_1 + 0x184) = local_8c + *(float *)(param_1 + 0x184);
    *(float *)(param_1 + 0x188) = local_88 + *(float *)(param_1 + 0x188);
    *(float *)(param_1 + 0x18c) = local_84 + *(float *)(param_1 + 0x18c);
    goto LAB_00edeb22;
  case 2:
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_9c = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar7 = (float10)FUN_00fdef70();
    local_a4 = (float)fVar7;
    local_a0 = local_a4;
    fVar7 = (float10)FUN_00fded30();
    local_a4 = (float)fVar7;
    fVar7 = (float10)FUN_00fdee60();
    local_ac = (float)fVar7;
    local_90 = local_ac * local_70 * local_a4 * local_a0;
    fVar7 = (float10)FUN_00fded30();
    local_ac = (float)fVar7;
    local_88 = local_ac * local_68 * local_a4 * local_a0;
    fVar7 = (float10)FUN_00fdee60();
    local_ac = (float)fVar7;
    local_8c = local_ac * local_6c * local_a0;
    break;
  case 3:
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar7 = (float10)FUN_00fdef70();
    local_ac = (float)fVar7;
    local_a4 = local_ac;
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)fVar7 * (float)fVar7;
    local_9c = 1.0 - local_a0;
    local_8c = (local_a0 - 0.5) * local_6c;
    local_8c = local_8c + local_8c;
    fVar7 = (float10)FUN_00fdee60();
    local_ac = (float)fVar7;
    local_90 = local_ac * local_70 * local_a4 * local_9c;
    fVar7 = (float10)FUN_00fded30();
    goto LAB_00edeabe;
  case 4:
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar7 = (float10)FUN_00fdef70();
    local_ac = (float)fVar7;
    local_a4 = local_ac;
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)fVar7;
    if (local_6c != 0.0) {
      local_a0 = 1.0 - ((local_68 / local_6c) * local_a0 + (local_6c - local_68) / local_6c);
    }
    local_9c = 1.0 - local_a0;
    local_8c = (local_a0 - 0.5) * local_6c;
    local_8c = local_8c + local_8c;
    fVar7 = (float10)FUN_00fdee60();
    local_ac = (float)fVar7;
    local_90 = local_ac * local_70 * local_a4 * local_9c;
    fVar7 = (float10)FUN_00fded30();
    local_ac = (float)fVar7;
    fVar2 = local_ac * local_70;
    goto LAB_00edeac2;
  case 5:
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_9c = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    fVar7 = (float10)FUN_00fded30();
    local_ac = (float)fVar7;
    local_a4 = local_ac;
    fVar7 = (float10)FUN_00fdee60();
    local_ac = (float)fVar7;
    local_90 = local_ac * local_70 * local_a4;
    fVar7 = (float10)FUN_00fded30();
    local_ac = (float)fVar7;
    local_88 = local_ac * local_68 * local_a4;
    fVar7 = (float10)FUN_00fdee60();
    local_ac = (float)fVar7;
    local_8c = local_ac * local_6c;
    break;
  case 6:
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a8 = (float)((fVar7 + fVar7) * (float10)3.1415927410125732);
    FUN_00dde300(0,0x3f800000);
    fVar7 = (float10)FUN_00fdef70();
    local_ac = (float)fVar7;
    local_a4 = local_ac;
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)fVar7 * (float)fVar7;
    local_9c = 1.0 - local_a0;
    local_ac = local_6c * (local_a0 - 0.5);
    local_ac = local_ac + local_ac;
    local_8c = -local_6c + local_ac;
    fVar7 = (float10)FUN_00fdee60();
    local_ac = (float)fVar7;
    local_90 = local_ac * local_70 * local_a4 * local_9c;
    fVar7 = (float10)FUN_00fded30();
LAB_00edeabe:
    local_ac = (float)fVar7;
    fVar2 = local_ac * local_68;
LAB_00edeac2:
    local_88 = fVar2 * local_a4 * local_9c;
  }
  *(float *)(param_1 + 0x180) = local_90 + *(float *)(param_1 + 0x180);
  *(float *)(param_1 + 0x184) = local_8c + *(float *)(param_1 + 0x184);
  *(float *)(param_1 + 0x188) = local_88 + *(float *)(param_1 + 0x188);
  *(float *)(param_1 + 0x18c) = local_84 + *(float *)(param_1 + 0x18c);
LAB_00edeb22:
  if ((*param_2 & 0x1000000) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) {
      uVar3 = FUN_00f3bee0();
    }
    else {
      uVar3 = FUN_00f3bfa0();
    }
    FUN_00f3c2a0(uVar3,puVar1);
  }
  if ((*param_2 & 0x20000) == 0) {
    *(uint *)(param_1 + 0x150) = param_2[7];
    *(uint *)(param_1 + 0x154) = param_2[8];
    *(uint *)(param_1 + 0x158) = param_2[9];
    *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
    uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
    *puVar1 = uVar4;
    *(float *)(param_1 + 0x150) =
         (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[10] +
         *(float *)(param_1 + 0x150);
    uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
    *puVar1 = uVar4;
    *(float *)(param_1 + 0x154) =
         (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0xb] +
         *(float *)(param_1 + 0x154);
    uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
    *puVar1 = uVar4;
    *(float *)(param_1 + 0x158) =
         (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0xc] +
         *(float *)(param_1 + 0x158);
  }
  else {
    uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
    *puVar1 = uVar4;
    *(float *)(param_1 + 0x150) =
         (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[10] + (float)param_2[7];
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    local_70 = 0.0;
    uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
    *puVar1 = uVar4;
    uVar5 = *puVar1 * 0x19660d + 0x3c6ef35f;
    fVar2 = (float)param_2[0xb];
    *puVar1 = uVar5;
    local_98._0_4_ = (float)(uVar5 >> 8);
    local_6c = (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * fVar2 * 17.453293;
    local_ac = 1.0 - (float)(int)local_98._0_4_ * 5.960465e-08 * 2.0;
    local_68 = local_ac * (float)param_2[0xc] * 17.453293;
    FUN_00ddc1d0(local_60,&local_70,3);
    D3DXVec3TransformNormal(param_1 + 0x150,param_1 + 0x150,local_60);
    *(float *)(param_1 + 0x150) = fStack_3c + *(float *)(param_1 + 0x150);
    *(float *)(param_1 + 0x154) = fStack_38 + *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x158) = fStack_34 + *(float *)(param_1 + 0x158);
    fStack_78 = (float)param_2[8] * 17.453293;
    fStack_74 = (float)param_2[9] * 17.453293;
    FUN_00ddc1d0(&local_6c,&fStack_7c,3);
    D3DXVec3TransformNormal(param_1 + 0x150,param_1 + 0x150,&local_6c);
    *(float *)(param_1 + 0x150) = fStack_30 + *(float *)(param_1 + 0x150);
    *(float *)(param_1 + 0x154) = fStack_2c + *(float *)(param_1 + 0x154);
    *(float *)(param_1 + 0x158) = fStack_28 + *(float *)(param_1 + 0x158);
  }
  *(uint *)(param_1 + 0x160) = param_2[0xe];
  *(uint *)(param_1 + 0x164) = param_2[0xf];
  *(uint *)(param_1 + 0x168) = param_2[0x10];
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  *(uint *)(param_1 + 0x140) = param_2[0x55];
  *(uint *)(param_1 + 0x144) = param_2[0x56];
  *(uint *)(param_1 + 0x148) = param_2[0x57];
  *(undefined4 *)(param_1 + 0x14c) = 0x3f800000;
  *(uint *)(param_1 + 0x1f0) = param_2[0x21];
  *(uint *)(param_1 + 500) = param_2[0x20];
  *(uint *)(param_1 + 0x1fc) = param_2[0x58];
  *(uint *)(param_1 + 0x1f8) = param_2[0x5c];
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x1f0) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x23] +
       *(float *)(param_1 + 0x1f0);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 500) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x22] +
       *(float *)(param_1 + 500);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x1fc) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x59] +
       *(float *)(param_1 + 0x1fc);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  uVar4 = uVar4 >> 8;
  local_98 = (double)CONCAT44(local_98._4_4_,uVar4);
  local_ac = 1.0 - (float)uVar4 * 5.960465e-08 * 2.0;
  *(float *)(param_1 + 0x1f8) = local_ac * (float)param_2[0x5d] + *(float *)(param_1 + 0x1f8);
  if ((char)param_2[0x1e] == '\0') {
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_ac = (float)fVar7;
    local_70 = (float)param_2[0x2d] * local_ac * (float)param_2[0x2a] + (float)param_2[0x24];
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_ac = (float)fVar7;
    local_6c = (float)param_2[0x2e] * local_ac * (float)param_2[0x2a] + (float)param_2[0x25];
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    local_ac = (float)fVar7;
    local_68 = (float)param_2[0x2f] * local_ac * (float)param_2[0x2a] + (float)param_2[0x2b];
    uStack_64 = param_2[0x28];
    *(float *)(param_1 + 0x260) = local_70;
    *(float *)(param_1 + 0x264) = local_6c;
    *(float *)(param_1 + 0x268) = local_68;
    *(uint *)(param_1 + 0x26c) = uStack_64;
  }
  else if ((char)param_2[0x1e] == '\x01') {
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(float *)(param_1 + 0x264) = *(float *)(param_1 + 0x1f0);
    local_ac = *(float *)(param_1 + 500);
    *(float *)(param_1 + 0x268) = local_ac;
    *(float *)(param_1 + 0x1f0) = (float)param_2[0x29] * *(float *)(param_1 + 0x1f0);
    *(float *)(param_1 + 500) = local_ac * (float)param_2[0x29];
  }
  if ((*param_2 & 0x2000000) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) {
      iVar6 = FUN_00f3bf60();
    }
    else {
      iVar6 = FUN_00f3c020();
    }
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x278) = 0;
    }
    else {
      FUN_00f3c1b0(iVar6,puVar1);
    }
  }
  *(uint *)(param_1 + 0x1b0) = param_2[0x11];
  *(uint *)(param_1 + 0x1b4) = param_2[0x12];
  *(uint *)(param_1 + 0x1b8) = param_2[0x13];
  *(undefined4 *)(param_1 + 0x1bc) = 0x3f800000;
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x1b0) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x14] +
       *(float *)(param_1 + 0x1b0);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x1b4) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x15] +
       *(float *)(param_1 + 0x1b4);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x1b8) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x16] +
       *(float *)(param_1 + 0x1b8);
  *(float *)(param_1 + 0x1b0) = *(float *)(param_1 + 0x1b0) * 0.017453292;
  *(float *)(param_1 + 0x1b4) = *(float *)(param_1 + 0x1b4) * 0.017453292;
  *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) * 0.017453292;
  *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1bc) * 0.017453292;
  *(uint *)(param_1 + 0x1d0) = param_2[0x17];
  *(uint *)(param_1 + 0x1d4) = param_2[0x18];
  *(uint *)(param_1 + 0x1d8) = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x1d0) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x1a] +
       *(float *)(param_1 + 0x1d0);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x1d4) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x1b] +
       *(float *)(param_1 + 0x1d4);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  local_98._0_4_ = (float)(uVar4 >> 8);
  local_ac = 1.0 - (float)(int)local_98._0_4_ * 5.960465e-08 * 2.0;
  *(float *)(param_1 + 0x1d8) = local_ac * (float)param_2[0x1c] + *(float *)(param_1 + 0x1d8);
  *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x1d0) * 0.017453292;
  *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x1d4) * 0.017453292;
  *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x1d8) * 0.017453292;
  *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x1dc) * 0.017453292;
  if ((*param_2 & 0x800000) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) {
      uVar3 = FUN_00f3bf20();
    }
    else {
      uVar3 = FUN_00f3bfe0();
    }
    FUN_00f3c4c0(uVar3,puVar1);
  }
  uVar4 = param_2[0x33];
  local_a8 = (float)param_2[0x34];
  local_a4 = (float)param_2[0x35];
  *(uint *)(param_1 + 0x240) = param_2[0x32];
  *(uint *)(param_1 + 0x244) = uVar4;
  *(float *)(param_1 + 0x248) = local_a8;
  *(float *)(param_1 + 0x24c) = local_a4;
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x240) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x36] +
       *(float *)(param_1 + 0x240);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x244) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x37] +
       *(float *)(param_1 + 0x244);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  *(float *)(param_1 + 0x248) =
       (1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0) * (float)param_2[0x38] +
       *(float *)(param_1 + 0x248);
  uVar4 = *puVar1 * 0x19660d + 0x3c6ef35f;
  *puVar1 = uVar4;
  uVar4 = uVar4 >> 8;
  local_98 = (double)CONCAT44(local_98._4_4_,uVar4);
  local_ac = 1.0 - (float)uVar4 * 5.960465e-08 * 2.0;
  *(float *)(param_1 + 0x24c) = local_ac * (float)param_2[0x39] + *(float *)(param_1 + 0x24c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
  if (*(char *)((int)param_2 + 0x79) == '\0') {
    local_ac = (float)param_2[0x3e];
    local_a8 = (float)param_2[0x3f];
    local_98 = (double)local_ac;
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    *(float *)(param_1 + 0x270) = (float)((float10)local_98 - fVar7 * (float10)local_a8);
  }
  else if (*(char *)((int)param_2 + 0x79) == '\x01') {
    if (*(char *)((int)param_2 + 0x13e) != '\0') {
      fVar7 = (float10)FUN_00dde300(0,0x3f800000);
      local_a8 = (float)fVar7;
      local_ac = (float)(uint)*(byte *)((int)param_2 + 0x13e);
      *(float *)(param_1 + 0x270) = (float)(int)local_ac * 0.01 * local_a8;
    }
    fVar7 = (float10)FUN_00dde300(0,0x3f800000);
    *(float *)(param_1 + 0x274) =
         (float)(ushort)param_2[0x4f] + (float)*(byte *)((int)param_2 + 0x13f) * (float)fVar7;
    if ((*(char *)((int)param_2 + 0x13f) != '\0') && ((param_2[0x50] & 0x80000000) != 0)) {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x8000000;
    }
    *(float *)(param_1 + 0x250) = (float)param_2[0x3f] * *(float *)(param_1 + 0x250);
    *(float *)(param_1 + 0x254) = (float)param_2[0x40] * *(float *)(param_1 + 0x254);
    *(float *)(param_1 + 600) = (float)param_2[0x41] * *(float *)(param_1 + 600);
    *(float *)(param_1 + 0x25c) = (float)param_2[0x42] * *(float *)(param_1 + 0x25c);
  }
  local_ac = (float)(int)*(short *)((int)param_2 + 0xea);
  if (*(float *)(param_1 + 0x118) < (float)(int)local_ac) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  if ((((iVar6 != 0) && ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0)) &&
      ((*(uint *)(param_1 + 0x38) & 0x100000) == 0)) &&
     (((*(uint *)(param_1 + 0x38) & 1) == 0 && ((*(uint *)(param_1 + 0x30) & 0x4000000) == 0)))) {
    local_a8 = *(float *)(iVar6 + 0x10);
    local_a4 = *(float *)(iVar6 + 0x18);
    local_a0 = *(float *)(iVar6 + 0x20);
    local_9c = *(float *)(iVar6 + 0x24);
    fStack_7c = *(float *)(iVar6 + 0x28);
    fStack_78 = *(float *)(iVar6 + 0x30);
    fStack_74 = *(float *)(iVar6 + 0x34);
    local_ac = *(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) + local_a8 * local_a8 +
               local_a4 * local_a4;
    local_98._0_4_ = *(float *)(iVar6 + 0x38);
    fVar7 = (float10)FUN_00fdef70();
    local_ac = (float)fVar7;
    fStack_7c = local_9c * local_9c + local_a0 * local_a0 + fStack_7c * fStack_7c;
    local_70 = local_ac;
    fVar7 = (float10)FUN_00fdef70();
    fStack_7c = (float)fVar7;
    local_98._0_4_ = fStack_74 * fStack_74 + fStack_78 * fStack_78 + local_98._0_4_ * local_98._0_4_
    ;
    local_6c = fStack_7c;
    fVar7 = (float10)FUN_00fdef70();
    local_68 = (float)fVar7;
    local_98 = (double)CONCAT44(local_98._4_4_,local_68);
    *(float *)(param_1 + 0x10c) = (local_6c + local_70 + local_68) * 0.33333334;
  }
  if (((*(float *)(param_1 + 0xa4) != 1.0) && ((*(uint *)(param_1 + 0x38) & 0x100000) == 0)) &&
     (((*(uint *)(param_1 + 0x38) & 1) == 0 && (*(short *)(param_1 + 0x4e) != -3)))) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000000;
  }
  *(uint *)(param_1 + 0x380) = param_2[0x5a];
  if (*(short *)((int)param_2 + 0xea) == 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x8000;
  }
  if ((((*(char *)((int)param_2 + 0x79) == '\0') && ((float)param_2[0x3b] == 1.0)) &&
      ((float)param_2[0x3c] == 1.0)) && ((float)param_2[0x3d] == 1.0)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800;
  }
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    local_70 = -1.0;
    local_6c = 1.0;
    local_68 = 1.0;
    FUN_00ddd140(local_60,&local_70);
    FUN_00edc5c0(local_60);
  }
  if (((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) && ((*(uint *)(param_1 + 0x38) & 0x8000) != 0))
  {
    FUN_00edc5c0(param_1 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0x40e) = *(undefined1 *)((int)param_2 + 0x152);
  *(undefined1 *)(param_1 + 0x40f) = *(undefined1 *)((int)param_2 + 0x153);
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

// 00EDFB50  FUN_00edfb50  size=197  [callgraph]
void __fastcall FUN_00edfb50(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float local_4;
  
  if ((*(byte *)(param_1 + 0x6c) & 0x10) == 0) {
    fVar5 = (float10)1;
  }
  else {
    fVar5 = (float10)cSceneEspManager::getEventTimeRate(param_1);
  }
  local_4 = (float)fVar5;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 != (undefined4 *)0x0)) {
    pfVar1 = (float *)*puVar2;
    if ((float *)((int)pfVar1 + 0xfU & 0xfffffff0) != pfVar1) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (pfVar1 != (float *)0x0) {
      local_4 = *pfVar1 * local_4;
    }
  }
  if ((((*(byte *)(param_1 + 0x6c) & 1) == 0) && ((*(byte *)(param_1 + 0x38) & 2) == 0)) &&
     ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    fVar5 = (float10)FUN_009d59a0(param_1);
    local_4 = (float)(fVar5 * (float10)local_4);
    iVar4 = FUN_00f410c0();
    if (iVar4 != 0) {
      fVar5 = (float10)FUN_00f410d0();
      *(float *)(param_1 + 0x110) = (float)(fVar5 * (float10)local_4);
      return;
    }
  }
  else {
    fVar5 = (float10)FUN_009d59c0(param_1);
    local_4 = (float)(fVar5 * (float10)local_4);
  }
  *(float *)(param_1 + 0x110) = local_4;
  return;
}

// 00EDFC20  FUN_00edfc20  size=162  [callgraph]
void __thiscall FUN_00edfc20(int param_1,int *param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = *(int *)(param_1 + 0x50) + 0x10;
  }
  param_2[3] = *(int *)(*(int *)(param_1 + 0x28) + 0x1e54);
  param_2[5] = *(int *)(*(int *)(param_1 + 0x28) + 0x1e60);
  if ((*(byte *)(param_1 + 0x6c) & 0x10) == 0) {
    fVar2 = (float10)1;
  }
  else {
    fVar2 = (float10)cSceneEspManager::getEventTimeRate(param_1);
  }
  param_2[8] = (int)(float)fVar2;
  if ((float *)param_2[2] != (float *)0x0) {
    param_2[8] = (int)(*(float *)param_2[2] * (float)param_2[8]);
  }
  fVar2 = (float10)FUN_009d59a0(param_1);
  param_2[7] = (int)(float)fVar2;
  iVar1 = FUN_00f410c0();
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00f410d0();
    param_2[7] = (int)(float)(fVar2 * (float10)(float)param_2[7]);
  }
  fVar2 = (float10)FUN_009d59c0(param_1);
  param_2[9] = (int)(float)fVar2;
  param_2[6] = *(int *)(param_1 + 0x84);
  param_2[4] = *(int *)(param_1 + 0x88);
  return;
}

// 00EDFCD0  FUN_00edfcd0  size=163  [callgraph]
void __thiscall FUN_00edfcd0(int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  param_2[2] = *(uint *)(param_1 + 0x24);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar2 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
  }
  param_2[1] = uVar3;
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(uint **)(param_1 + 0x58);
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar2 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
  }
  *param_2 = uVar3;
  if (*(int *)(param_1 + 0x50) != 0) {
    param_2[3] = *(int *)(param_1 + 0x50) + 0x10;
    param_2[4] = *(uint *)(param_1 + 0x84);
    return;
  }
  param_2[3] = 0;
  param_2[4] = *(uint *)(param_1 + 0x84);
  return;
}

// 00EDFD80  FUN_00edfd80  size=28  [callgraph]
void __fastcall FUN_00edfd80(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00edc5c0(*(int *)(param_1 + 0x50) + 0x10);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

// 00EDFDA0  FUN_00edfda0  size=541  [callgraph]
undefined4 __thiscall FUN_00edfda0(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  ushort local_4;
  
  if ((*(uint *)(param_1 + 0x34) & 0x80000000) != 0) {
    return 1;
  }
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x431);
  if ((*(byte *)(iVar3 + 0x1e) == bVar2) ||
     (*(float *)(param_1 + 0x118) <= (float)*(byte *)(iVar3 + 0x27))) goto LAB_00edff35;
  fVar4 = *(float *)(param_1 + 0x43c) * *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x438);
  *(float *)(param_1 + 0x438) = fVar4;
  uVar1 = (uint)ROUND(fVar4);
  local_4 = (ushort)uVar1;
  *(ushort *)(param_1 + 0x432) = local_4;
  if ((local_4 <= bVar2) && ((uVar1 & 0xffff) < *(uint *)(param_1 + 0x434))) goto LAB_00edff35;
  iVar3 = *(int *)(param_2 + 8);
  if ((*(uint *)(iVar3 + 0x20) & 0x40000000) == 0) {
    iVar7 = FUN_00412ef0(iVar3 + 0x20,0);
    if (iVar7 == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return 0;
    }
    iVar7 = *(int *)(param_1 + 0x434);
    fVar4 = (float)*(byte *)(iVar3 + 0x1e);
    *(float *)(param_1 + 0x438) = fVar4;
    fVar5 = (float)iVar7;
    if (iVar7 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (fVar5 < fVar4 != (fVar5 == fVar4)) goto LAB_00edfef7;
  }
  else {
    if (bVar2 == 0) {
      iVar7 = *(int *)(param_1 + 0x434);
LAB_00edfef7:
      fVar4 = (float)(iVar7 + -1);
      if (iVar7 + -1 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
    }
    else {
      fVar4 = (float)bVar2;
    }
    *(float *)(param_1 + 0x438) = fVar4;
  }
  local_4 = (ushort)(int)ROUND(*(float *)(param_1 + 0x438));
  *(ushort *)(param_1 + 0x432) = local_4;
LAB_00edff35:
  if ((*(byte *)(param_1 + 0x38) & 0x80) != 0) {
    uVar6 = *(short *)(param_1 + 0x432) + 1;
    *(ushort *)(param_1 + 0x442) = uVar6;
    if ((bVar2 < uVar6) || (*(uint *)(param_1 + 0x434) <= (uint)uVar6)) {
      uVar1 = *(uint *)(*(int *)(param_2 + 8) + 0x20);
      if ((uVar1 & 0x40000000) != 0) {
        *(undefined2 *)(param_1 + 0x442) = *(undefined2 *)(param_1 + 0x432);
        return 1;
      }
      if (-1 < (int)uVar1) {
        *(undefined2 *)(param_1 + 0x442) = *(undefined2 *)(param_1 + 0x432);
        return 1;
      }
      *(ushort *)(param_1 + 0x442) = (ushort)*(byte *)(*(int *)(param_2 + 8) + 0x1e);
    }
  }
  return 1;
}

// 00EDFFC0  FUN_00edffc0  size=219  [callgraph]
void __thiscall FUN_00edffc0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  if ((((*(uint *)(param_1 + 0x34) & 0x80000000) == 0) &&
      ((*(uint *)(param_1 + 0x3c) & 0x200000) != 0)) &&
     (iVar3 = *(int *)(param_2 + 8), *(float *)(iVar3 + 0x5c) != 0.0)) {
    fVar1 = *(float *)(param_1 + 0x110);
    if (fVar1 == 1.0) {
      fVar2 = *(float *)(iVar3 + 0x5c);
    }
    else {
      fVar2 = *(float *)(iVar3 + 0x5c);
      if (fVar2 < 2.0) {
        fVar2 = fVar2 / ((fVar1 - fVar2 * fVar1) + fVar2);
      }
      else {
        fVar4 = (float10)FUN_00fdc1f0();
        fVar2 = (float)fVar4;
      }
    }
    fVar2 = *(float *)(param_1 + 0x42c) * fVar2;
    *(float *)(param_1 + 0x42c) = fVar2;
    if (((*(uint *)(param_1 + 0x34) & 0x2000000) != 0) && (fVar2 < 0.01)) {
      *(undefined2 *)(param_1 + 0x428) = *(undefined2 *)(param_1 + 0x42a);
      return;
    }
  }
  return;
}

// 00EE00A0  esp39::vf18  size=56  [class]
undefined4 __thiscall esp39::vf18(int param_1,int param_2)

{
  if (((*(int *)(param_1 + 100) != param_2) &&
      ((*(int **)(param_1 + 0x420) == (int *)0x0 ||
       (**(int **)(param_1 + 0x420) != *(int *)(param_2 + 8))))) &&
     ((*(int **)(param_1 + 0x424) == (int *)0x0 ||
      (**(int **)(param_1 + 0x424) != *(int *)(param_2 + 8))))) {
    return 0;
  }
  return 1;
}

// 00F12A40  esp39::vf08  size=80  [class]
void __fastcall esp39::vf08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
    FUN_00efb130(piVar1);
    FUN_00efbd40(piVar1);
    return;
  }
  *piVar1 = 0;
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

// 00F36B00  FUN_00f36b00  size=607  [callgraph]
undefined4 __thiscall
FUN_00f36b00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  
  iVar8 = cEsp::preTrans(param_2,param_3,param_4);
  if ((iVar8 != 0) && (iVar8 = FUN_00f12b50(), iVar8 != 0)) {
    if (*(int *)(param_1 + 0x50) != 0) {
      if (*(short *)(param_1 + 0x400) != -1) {
        FUN_009cca90(param_1,&DAT_016dca24);
        return 0;
      }
      *(undefined1 *)(param_1 + 0x4d8) = 0;
      iVar8 = FUN_009d4a80();
      if (iVar8 != 0) {
        *(int *)(param_1 + 0x548) = (int)*(char *)(iVar8 + 0x10);
        *(undefined1 *)(param_1 + 0x4d8) = *(undefined1 *)(iVar8 + 0x11);
      }
      pfVar9 = (float *)FUN_009d4ac0();
      if (pfVar9 != (float *)0x0) {
        *(undefined4 *)(param_1 + 0x47c) = 0;
        *(float *)(param_1 + 0x4a0) = *pfVar9 * 0.001;
        *(float *)(param_1 + 0x4a4) = pfVar9[1] * 0.001;
        *(float *)(param_1 + 0x4d0) = pfVar9[2];
        *(float *)(param_1 + 0x4cc) = pfVar9[3];
        *(float *)(param_1 + 0x544) = pfVar9[3];
      }
      if (*(float *)(param_1 + 0x4cc) == 0.0) {
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x1f0);
      }
      if (*(float *)(param_1 + 0x4d0) == 0.0) {
        *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x1f0);
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined4 *)(param_1 + 0x4c0) = 1;
      iVar8 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
      *(int *)(param_1 + 0x540) = iVar8;
      if (iVar8 != 0) {
        fVar1 = *(float *)(param_1 + 0x170);
        uVar10 = 0;
        fVar2 = *(float *)(param_1 + 0x180);
        fVar3 = *(float *)(param_1 + 0x174);
        fVar4 = *(float *)(param_1 + 0x184);
        fVar5 = *(float *)(param_1 + 0x178);
        fVar6 = *(float *)(param_1 + 0x188);
        if (*(int *)(param_1 + 0x450) != 0) {
          iVar8 = 0;
          do {
            iVar7 = *(int *)(param_1 + 0x540);
            *(float *)(iVar7 + iVar8) = fVar1 + fVar2;
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 0xc;
            *(float *)(iVar7 + -8 + iVar8) = fVar3 + fVar4;
            *(float *)(iVar7 + -4 + iVar8) = fVar5 + fVar6;
          } while (uVar10 < *(uint *)(param_1 + 0x450));
        }
        *(undefined4 *)(param_1 + 0x4ac) = 0;
        *(undefined4 *)(param_1 + 0x4d4) = 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100000;
        *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4e0);
        *(undefined4 *)(param_1 + 0x4f4) = *(undefined4 *)(param_1 + 0x4e4);
        *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4e8);
        *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4ec);
        return 1;
      }
      FUN_009cca90(param_1,&DAT_016dca4c);
      return 0;
    }
    FUN_009cca90(param_1,&DAT_016dc9fc);
  }
  return 0;
}

// 00F36D60  esp39::preTrans  size=271  [class]
/* WARNING: Removing unreachable block (ram,0x00f36dd1) */

undefined4 __thiscall esp39::preTrans(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  
  iVar3 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x40;
  if ((*(int *)(param_2 + 4) != 0) &&
     (puVar4 = (uint *)(*(int *)(param_2 + 4) + 0x80), puVar4 != (uint *)0x0)) {
    uVar2 = *puVar4;
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (uVar2 != 0) {
      *(undefined2 *)(param_1 + 0x460) = *(undefined2 *)(uVar2 + 2);
    }
  }
  sVar1 = *(short *)(param_1 + 0x460);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x450) = 0x3fc90fdb;
  }
  else {
    if (sVar1 == 1) {
      *(undefined4 *)(param_1 + 0x450) = 0x3f860a92;
      *(undefined4 *)(param_1 + 0x454) = 0xbf860a92;
      *(undefined4 *)(param_1 + 0x45c) = 0x3f800000;
      return 1;
    }
    if (sVar1 == 2) {
      *(undefined4 *)(param_1 + 0x450) = 0x3fc90fdb;
      *(undefined4 *)(param_1 + 0x454) = 0x3f490fdb;
      *(undefined4 *)(param_1 + 0x458) = 0xbf490fdb;
      *(undefined4 *)(param_1 + 0x45c) = 0x3f800000;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x45c) = 0x3f800000;
  return 1;
}

// 00F36E70  esp39::addOtTransList  size=480  [class]
void __fastcall esp39::addOtTransList(int param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (DAT_01edd490 != 0) {
    puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = cEspDrawWork::vftable;
      puVar4[9] = 0;
      *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x124);
      FUN_00f051c0(puVar4 + 0x10);
      if (0.01 < *(float *)(param_1 + 0x124)) {
        iVar1 = param_1 + 0x3c8;
        FUN_00edfcd0(iVar1);
        FUN_00f26b40(puVar4);
        uVar5 = *(undefined4 *)(param_1 + 0x84);
        uVar3 = *(undefined4 *)(param_1 + 0x28);
        FUN_00f45d50();
        puStack_18 = puVar4;
        iStack_14 = param_1;
        iStack_10 = iVar1;
        uStack_c = uVar3;
        uStack_8 = uVar5;
        FUN_00f49500(&puStack_18);
        puVar6 = &DAT_01bea1d0;
        if (DAT_01beb8c0 != (undefined *)0x0) {
          puVar6 = DAT_01beb8c0;
        }
        uVar5 = FUN_00e9fe70();
        FUN_00edc9e0(puVar4,puVar4,iVar1,puVar6 + 0x2d0,uVar5);
      }
      sVar2 = *(short *)(param_1 + 0x460);
      if (sVar2 == 0) {
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x45c);
        cEspDrawWork::cEspDrawWork(*(undefined4 *)(param_1 + 0x450));
        return;
      }
      if (sVar2 == 1) {
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x45c);
        cEspDrawWork::cEspDrawWork(*(undefined4 *)(param_1 + 0x450));
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x45c);
        cEspDrawWork::cEspDrawWork(*(undefined4 *)(param_1 + 0x454));
        return;
      }
      if (sVar2 != 2) {
        FUN_009cca90(param_1,&DAT_016dcc60);
        return;
      }
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x45c);
      cEspDrawWork::cEspDrawWork(*(undefined4 *)(param_1 + 0x450));
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x45c);
      cEspDrawWork::cEspDrawWork(*(undefined4 *)(param_1 + 0x454));
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x45c);
      cEspDrawWork::cEspDrawWork(*(undefined4 *)(param_1 + 0x458));
      return;
    }
  }
  FUN_009cca90(param_1,&DAT_016dcc38);
  return;
}

