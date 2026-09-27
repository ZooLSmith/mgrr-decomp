// src/collision/BoundingBox.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A66FE0..00A6AB20, 8 functions

#include "types.h"

// 00A66FE0  BoundingBox::vf0C  size=1149  [class]
void __thiscall BoundingBox::vf0C(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float *local_6c;
  float *local_68;
  float *pfStack_64;
  float afStack_60 [6];
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float *pfStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  
  local_94 = 0.0;
  iVar1 = param_1 + 0x70;
  do {
    if (local_94 == 4.2039e-45) {
      local_98 = (float *)0x0;
    }
    else {
      local_98 = (float *)((int)local_94 + 1);
    }
    iVar3 = ((int)local_94 + 0x10) * 0x10;
    local_90 = *(float *)(iVar3 + param_1);
    local_68 = (float *)(iVar3 + param_1);
    local_6c = (float *)(param_1 + 0x108 + (int)local_94 * 0x10);
    local_88 = *local_6c;
    local_8c = *(float *)(param_1 + 0x140) * -0.5;
    local_7c = *(float *)(param_1 + 0x140) * 0.5;
    local_80 = local_90;
    local_78 = local_88;
    D3DXVec3TransformNormal(&local_90,&local_90,iVar1);
    fVar2 = *(float *)(param_1 + 0xa4) + (float)local_98;
    local_94 = *(float *)(param_1 + 0xa8) + local_94;
    D3DXVec3TransformNormal(&local_8c,&local_8c,iVar1);
    local_80 = local_80 + *(float *)(param_1 + 0xa0);
    local_7c = *(float *)(param_1 + 0xa4) + local_7c;
    local_78 = *(float *)(param_1 + 0xa8) + local_78;
    FUN_00f95f40(&local_90,&local_80,param_2,0);
    pfStack_64 = (float *)(((int)fVar2 + 0x10) * 0x10 + param_1);
    iVar3 = 0;
    local_98 = (float *)(param_1 + 0x108 + (int)fVar2 * 0x10);
    do {
      if (iVar3 == 0) {
        local_8c = -0.5;
      }
      else {
        local_8c = 0.5;
      }
      local_8c = *(float *)(param_1 + 0x140) * local_8c;
      local_90 = *local_68;
      local_88 = *local_6c;
      local_80 = *pfStack_64;
      local_78 = *local_98;
      local_7c = local_8c;
      D3DXVec3TransformNormal(&local_90,&local_90,iVar1);
      local_98 = (float *)(*(float *)(param_1 + 0xa4) + (float)local_98);
      local_94 = *(float *)(param_1 + 0xa8) + local_94;
      D3DXVec3TransformNormal(&local_8c,&local_8c,iVar1);
      local_80 = *(float *)(param_1 + 0xa0) + local_80;
      local_7c = *(float *)(param_1 + 0xa4) + local_7c;
      local_78 = *(float *)(param_1 + 0xa8) + local_78;
      FUN_00f95f40(&local_90,&local_80,param_2,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    local_94 = (float)((int)local_94 + 1);
  } while ((int)local_94 < 4);
  local_94 = (float)(param_1 + 0x100);
  local_98 = (float *)0x4;
  pfVar5 = afStack_60 + 2;
  do {
    D3DXVec3TransformNormal(pfVar5 + -2,local_94,iVar1);
    local_94 = (float)((int)local_94 + 0x10);
    local_98 = (float *)((int)local_98 + -1);
    pfVar5[-2] = *(float *)(param_1 + 0xa0) + pfVar5[-2];
    pfVar5[-1] = *(float *)(param_1 + 0xa4) + pfVar5[-1];
    *pfVar5 = *(float *)(param_1 + 0xa8) + *pfVar5;
    pfVar5 = pfVar5 + 4;
  } while (local_98 != (float *)0x0);
  local_68 = (float *)(param_2 & 0x50ffffff);
  FUN_00f960b0(afStack_60,local_68,0);
  local_6c = (float *)(*(float *)(param_1 + 0x140) * 0.5);
  local_94 = 0.0;
  pfStack_64 = (float *)-(float)local_6c;
  do {
    if (local_94 == 4.2039e-45) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)local_94 + 1;
    }
    iVar4 = ((int)local_94 + 0x10) * 0x10;
    afStack_60[0] = *(float *)(iVar4 + param_1);
    puStack_1c = (undefined4 *)(iVar4 + param_1);
    puStack_14 = (undefined4 *)(param_1 + 0x108 + (int)local_94 * 0x10);
    afStack_60[2] = (float)*puStack_14;
    pfStack_20 = (float *)((iVar3 + 0x10) * 0x10 + param_1);
    afStack_60[3] = 0.0;
    puStack_18 = (undefined4 *)(param_1 + 0x108 + iVar3 * 0x10);
    afStack_60[4] = *pfStack_20;
    uStack_48 = *puStack_18;
    local_98 = (float *)0x4;
    uStack_44 = 0;
    fStack_40 = *pfStack_20;
    uStack_38 = *puStack_18;
    uStack_34 = 0;
    fStack_30 = (float)*puStack_1c;
    uStack_28 = *puStack_14;
    uStack_24 = 0;
    pfVar5 = afStack_60;
    afStack_60[1] = (float)pfStack_64;
    afStack_60[5] = (float)pfStack_64;
    fStack_3c = (float)local_6c;
    fStack_2c = (float)local_6c;
    do {
      D3DXVec3TransformNormal(pfVar5,pfVar5,iVar1);
      local_98 = (float *)((int)local_98 + -1);
      *pfVar5 = *pfVar5 + *(float *)(param_1 + 0xa0);
      pfVar5[1] = *(float *)(param_1 + 0xa4) + pfVar5[1];
      pfVar5[2] = pfVar5[2] + *(float *)(param_1 + 0xa8);
      pfVar5 = pfVar5 + 4;
    } while (local_98 != (float *)0x0);
    FUN_00f960b0(afStack_60,local_68,0);
    afStack_60[0] = *pfStack_20;
    afStack_60[1] = (float)pfStack_64;
    afStack_60[2] = (float)*puStack_18;
    local_98 = (float *)0x4;
    afStack_60[3] = 0.0;
    afStack_60[4] = (float)*puStack_1c;
    afStack_60[5] = (float)pfStack_64;
    uStack_48 = *puStack_14;
    uStack_44 = 0;
    fStack_40 = (float)*puStack_1c;
    fStack_3c = (float)local_6c;
    uStack_38 = *puStack_14;
    uStack_34 = 0;
    fStack_30 = *pfStack_20;
    fStack_2c = (float)local_6c;
    uStack_28 = *puStack_18;
    uStack_24 = 0;
    pfVar5 = afStack_60;
    do {
      D3DXVec3TransformNormal(pfVar5,pfVar5,iVar1);
      local_98 = (float *)((int)local_98 + -1);
      *pfVar5 = *pfVar5 + *(float *)(param_1 + 0xa0);
      pfVar5[1] = pfVar5[1] + *(float *)(param_1 + 0xa4);
      pfVar5[2] = *(float *)(param_1 + 0xa8) + pfVar5[2];
      pfVar5 = pfVar5 + 4;
    } while (local_98 != (float *)0x0);
    FUN_00f960b0(afStack_60,local_68,0);
    local_94 = (float)((int)local_94 + 1);
  } while ((int)local_94 < 4);
  return;
}

// 00A67470  BoundingBox::vf18  size=366  [class]
undefined4 __thiscall BoundingBox::vf18(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_ESI;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [28];
  
  D3DXVec3TransformNormal(local_20,param_2,param_1 + 0xb0);
  fVar1 = *(float *)(param_1 + 0xe0) + unaff_ESI;
  fVar3 = *(float *)(param_1 + 0xe4) + fStack_28;
  fVar2 = *(float *)(param_1 + 0xe8) + fStack_24;
  if ((*(float *)(param_1 + 0x140) * -0.5 < fVar3) &&
     (fVar4 = *(float *)(param_1 + 0x140) * 0.5, fVar4 < fVar3 == (fVar4 == fVar3))) {
    fVar4 = fVar1 - *(float *)(param_1 + 0x100);
    fVar3 = fVar2 - *(float *)(param_1 + 0x108);
    if ((0.0 < (*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x108)) * fVar4 -
               (*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x100)) * fVar3) ||
       ((*(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x108)) * fVar4 -
        (*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x100)) * fVar3 < 0.0)) {
      return 0;
    }
    fVar1 = fVar1 - *(float *)(param_1 + 0x120);
    fVar2 = fVar2 - *(float *)(param_1 + 0x128);
    if (0.0 < (*(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x128)) * fVar1 -
              (*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x120)) * fVar2) {
      return 0;
    }
    if (0.0 <= (*(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x128)) * fVar1 -
               (*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x120)) * fVar2) {
      return 1;
    }
  }
  return 0;
}

// 00A675E0  BoundingBox::vf14  size=1024  [class]
undefined4 __thiscall BoundingBox::vf14(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float local_80;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [16];
  int iStack_68;
  float fStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  float fStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  float fStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  float fStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  if (((*param_2 - *param_3 == 0.0) && (param_2[1] - param_3[1] == 0.0)) &&
     (param_2[2] - param_3[2] == 0.0)) {
    uVar3 = (**(code **)(*param_1 + 0x18))(param_2);
    return uVar3;
  }
  D3DXVec3TransformNormal(&local_80,param_2,param_1 + 0x2c);
  fStack_88 = (float)param_1[0x39] + fStack_88;
  fStack_84 = (float)param_1[0x3a] + fStack_84;
  D3DXVec3TransformNormal(auStack_7c,param_3,param_1 + 0x2c);
  fStack_88 = (float)param_1[0x38] + fStack_88;
  fStack_84 = (float)param_1[0x39] + fStack_84;
  local_80 = (float)param_1[0x3a] + local_80;
  fVar2 = (float)param_1[0x50] * 0.5;
  if ((fVar2 < fStack_94) && (fVar2 < fStack_84)) {
    return 0;
  }
  fVar1 = -fVar2;
  if ((fStack_94 < fVar1) && (fStack_84 < fVar1)) {
    return 0;
  }
  iStack_38 = param_1[0x40];
  iStack_30 = param_1[0x42];
  uStack_2c = 0;
  iStack_48 = param_1[0x44];
  iStack_40 = param_1[0x46];
  uStack_3c = 0;
  iStack_58 = param_1[0x48];
  iStack_50 = param_1[0x4a];
  uStack_4c = 0;
  iStack_68 = param_1[0x4c];
  iStack_60 = param_1[0x4e];
  uStack_5c = 0;
  fStack_64 = fVar1;
  fStack_54 = fVar1;
  fStack_44 = fVar1;
  fStack_34 = fVar1;
  iVar4 = FUN_00d97880(auStack_78,&stack0xffffff68,&fStack_88,&iStack_68,&iStack_58,&iStack_48,
                       &iStack_38);
  if (iVar4 == 0) {
    iStack_68 = param_1[0x40];
    iStack_60 = param_1[0x42];
    uStack_5c = 0;
    iStack_58 = param_1[0x44];
    iStack_50 = param_1[0x46];
    uStack_4c = 0;
    iStack_48 = param_1[0x48];
    iStack_40 = param_1[0x4a];
    uStack_3c = 0;
    iStack_38 = param_1[0x4c];
    iStack_30 = param_1[0x4e];
    uStack_2c = 0;
    fStack_64 = fVar2;
    fStack_54 = fVar2;
    fStack_44 = fVar2;
    fStack_34 = fVar2;
    iVar4 = FUN_00d97880(auStack_78,&stack0xffffff68,&fStack_88,&iStack_68,&iStack_58,&iStack_48,
                         &iStack_38);
    if (iVar4 == 0) {
      iVar4 = 0;
      while( true ) {
        if (iVar4 == 3) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar4 + 1;
        }
        iStack_38 = param_1[(iVar4 + 0x10) * 4];
        iStack_30 = param_1[iVar4 * 4 + 0x42];
        uStack_2c = 0;
        iStack_48 = param_1[(iVar4 + 0x10) * 4];
        iStack_40 = param_1[iVar4 * 4 + 0x42];
        uStack_3c = 0;
        iStack_58 = param_1[(iVar5 + 0x10) * 4];
        iStack_50 = param_1[iVar5 * 4 + 0x42];
        uStack_4c = 0;
        iStack_68 = param_1[(iVar5 + 0x10) * 4];
        iStack_60 = param_1[iVar5 * 4 + 0x42];
        uStack_5c = 0;
        fStack_64 = fVar2;
        fStack_54 = fVar1;
        fStack_44 = fVar1;
        fStack_34 = fVar2;
        iVar5 = FUN_00d97880(auStack_78,&stack0xffffff68,&fStack_88,&iStack_68,&iStack_58,&iStack_48
                             ,&iStack_38);
        if ((iVar5 != 0) ||
           (iVar5 = FUN_00d97880(auStack_78,&stack0xffffff68,&fStack_88,&iStack_38,&iStack_48,
                                 &iStack_58,&iStack_68), iVar5 != 0)) break;
        iVar4 = iVar4 + 1;
        if (3 < iVar4) {
          return 0;
        }
      }
    }
  }
  return 1;
}

// 00A679E0  BoundingBox::vf10  size=110  [class]
void __thiscall BoundingBox::vf10(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  fVar2 = *(float *)(param_1 + 0x140);
  iVar7 = 0;
  do {
    if (iVar7 == 3) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar7 + 1;
    }
    iVar6 = iVar6 + 0x10;
    iVar1 = iVar7 + 0x10;
    fVar5 = *(float *)(param_1 + iVar1 * 0x10) - *(float *)(param_1 + iVar6 * 0x10);
    fVar4 = *(float *)(param_1 + 4 + iVar1 * 0x10) - *(float *)(param_1 + 4 + iVar6 * 0x10);
    fVar3 = *(float *)(param_1 + 8 + iVar1 * 0x10) - *(float *)(param_1 + 8 + iVar6 * 0x10);
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  *param_2 = fVar2;
  param_2[1] = fVar2;
  param_2[2] = fVar2;
  return;
}

// 00A67C00  BoundingBox::vf00  size=6  [class]
undefined * BoundingBox::vf00(void)

{
  return &DAT_01be99d8;
}

// 00A67C10  BoundingBox::vf04  size=31  [class]
undefined4 * __thiscall BoundingBox::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = BoundingVolumeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A699A0  BoundingBox::vf08  size=632  [class]
undefined4 __thiscall BoundingBox::vf08(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e0 [144];
  undefined4 local_50;
  
  FUN_0118f7b0();
  local_50 = 0;
  local_190 = *(float *)(param_1 + 0xa0);
  local_18c = *(float *)(param_1 + 0xa4);
  local_188 = *(float *)(param_1 + 0xa8);
  local_184 = *(undefined4 *)(param_1 + 0xac);
  local_17c = SQRT(*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) +
                   *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) +
                   *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78));
  local_178 = SQRT(*(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80) +
                   *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84) +
                   *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88));
  fVar3 = SQRT(*(float *)(param_1 + 0x98) * *(float *)(param_1 + 0x98) +
               *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x94) +
               *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90));
  fVar1 = *(float *)(param_1 + 0x88);
  fVar2 = *(float *)(param_1 + 0x98);
  fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x78) / fVar3));
  fVar6 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
  local_170 = (float)fVar6;
  local_16c = (float)fVar5;
  fVar5 = (float10)fpatan((float10)*(float *)(param_1 + 0x74) / (float10)local_178,
                          (float10)*(float *)(param_1 + 0x70) / (float10)local_17c);
  local_168 = (float)fVar5;
  local_160 = *(float *)(param_1 + 0x100) + local_190;
  local_11c = *(float *)(param_1 + 0x140) * 0.5;
  local_15c = local_18c - local_11c;
  local_158 = *(float *)(param_1 + 0x108) + local_188;
  local_150 = *(float *)(param_1 + 0x110) + local_190;
  local_148 = *(float *)(param_1 + 0x118) + local_188;
  local_140 = local_190 + *(float *)(param_1 + 0x120);
  local_138 = *(float *)(param_1 + 0x128) + local_188;
  local_130 = *(float *)(param_1 + 0x130) + local_190;
  local_128 = *(float *)(param_1 + 0x138) + local_188;
  local_120 = *(float *)(param_1 + 0x100) + local_190;
  local_11c = local_11c + local_18c;
  local_118 = *(float *)(param_1 + 0x108) + local_188;
  local_110 = *(float *)(param_1 + 0x110) + local_190;
  local_108 = *(float *)(param_1 + 0x118) + local_188;
  local_100 = local_190 + *(float *)(param_1 + 0x120);
  local_f8 = *(float *)(param_1 + 0x128) + local_188;
  local_f0 = *(float *)(param_1 + 0x130) + local_190;
  local_e8 = local_188 + *(float *)(param_1 + 0x138);
  local_14c = local_15c;
  local_13c = local_15c;
  local_12c = local_15c;
  local_10c = local_11c;
  local_fc = local_11c;
  local_ec = local_11c;
  piVar4 = (int *)FUN_00910da0();
  (**(code **)(*piVar4 + 0x14))(param_2,local_e0,&local_160,&local_190,&local_170,1);
  return param_2;
}

// 00A6AB20  BoundingBox::thunk_vf1C  size=5  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __thiscall BoundingBox::thunk_vf1C(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte bStack_4;
  
  FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar2 = (**(code **)(*param_2 + 0x10))("height",0xb);
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x140);
    (**(code **)(*param_2 + 0x14))("height",0xb);
  }
  bStack_4 = (byte)param_1;
  bStack_4 = bStack_4 & bVar3;
  param_1 = param_1 + 0x100;
  iVar4 = 4;
  do {
    if ((_DAT_01be99c4 & 1) == 0) {
      _DAT_01be99c4 = _DAT_01be99c4 | 1;
      DAT_01be99c0 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar1 = DAT_01be99c0;
    cVar2 = (**(code **)(*param_2 + 0x10))("point",DAT_01be99c0);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_00a692d0(param_2,param_1);
      (**(code **)(*param_2 + 0x14))("point",iVar1);
    }
    bStack_4 = bStack_4 & bVar3;
    param_1 = param_1 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return bStack_4;
}

