// src/ui/cUIEx1010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB4A70..00CEA360, 6 functions

#include "types.h"

// 00CB4A70  cUIEx1010::vf04  size=28  [class]
void __fastcall cUIEx1010::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 00CB4A90  FUN_00cb4a90  size=131  [between]
/* WARNING: Removing unreachable block (ram,0x00cb4aee) */

void __fastcall FUN_00cb4a90(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (iVar4 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      sVar3 = FUN_00dde2d0(0,100);
      if ((int)sVar3 < *(int *)(param_1 + 0xc)) {
        fVar1 = *(float *)(param_1 + 0x20);
      }
      else {
        fVar1 = *(float *)(param_1 + 0x1c);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar4 * 8) =
           *(undefined4 *)(*(int *)(param_1 + 0x28) + 4 + iVar4 * 8);
      DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
      fVar2 = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
      iVar4 = iVar4 + 1;
      *(float *)(*(int *)(param_1 + 0x28) + -4 + iVar4 * 8) = (1.0 - (fVar2 + fVar2)) * fVar1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return;
}

// 00CB4B20  cUIEx1010::vf14  size=85  [class]
void __thiscall cUIEx1010::vf14(int param_1,float param_2)

{
  if (param_2 <= *(float *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    param_2 = -0.016666668;
  }
  else {
    *(float *)(param_1 + 0x14) = (param_2 - *(float *)(param_1 + 0x18)) + *(float *)(param_1 + 0x14)
    ;
  }
  *(float *)(param_1 + 0x18) = param_2;
  if (*(float *)(param_1 + 0x14) < *(float *)(param_1 + 0x10)) {
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x10);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_00cb4a90();
  return;
}

// 00CCFC80  cUIEx1010::vf00  size=31  [class]
undefined4 * __thiscall cUIEx1010::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIExtendObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCFCA0  cUIEx1010::vf08  size=189  [class]
void __thiscall cUIEx1010::vf08(int *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(*param_1 + 4))();
  uVar2 = *param_2 & ((int)*param_2 < 1) - 1;
  param_1[2] = uVar2;
  if ((int)uVar2 < 1) {
    param_1[2] = 2;
  }
  else {
    param_1[2] = uVar2 + 1;
  }
  param_1[4] = (int)((float)(int)(((int)param_2[1] < 1) - 1 & param_2[1]) * 0.016666668);
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = param_2[2];
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (100 < (int)uVar2) {
    uVar2 = 100;
  }
  param_1[3] = uVar2;
  param_1[7] = param_2[6];
  param_1[8] = param_2[7];
  param_1[9] = 0;
  param_1[0xb] = param_2[8];
  param_1[0xc] = param_2[9];
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_1[2] * 8 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_1[2] * 8),param_3);
  param_1[10] = iVar1;
  FUN_00cb4a90();
  FUN_00cb4a90();
  return;
}

// 00CEA360  cUIEx1010::vf1C  size=843  [class]
void __thiscall cUIEx1010::vf1C(int param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iStack_114;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 auStack_a0 [16];
  undefined1 auStack_60 [76];
  undefined4 uStack_14;
  
  if (param_4 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_3 + 0x60) - 1U < 4) {
    if (0.0 < *(float *)(param_3 + 0x4c)) goto LAB_00cea3ba;
    fVar2 = *(float *)(param_3 + 0x5c);
  }
  else {
    fVar2 = *(float *)(param_3 + 0x4c);
  }
  if (fVar2 <= 0.0) {
    return;
  }
LAB_00cea3ba:
  iVar3 = (**(code **)(*param_4 + 8))();
  if ((((iVar3 == 1) && (FUN_00ce5440(auStack_60,auStack_a0,param_3), *param_2 != 0)) &&
      (iVar3 = cPrimHeap::allocBuffer(0xd0,0x20), iVar3 != 0)) &&
     ((iVar3 = cUIPrimWorkScreenSlide::cUIPrimWorkScreenSlide(), iVar3 != 0 &&
      (iVar4 = FUN_00cb03c0(param_2,*(int *)(param_1 + 8) * 2), iVar4 != 0)))) {
    fVar2 = (float)(*(int *)(param_1 + 8) + -1);
    iVar4 = FUN_00f98aa0();
    iStack_114 = 0;
    auStack_a0[0xe] = 0;
    auStack_a0[0xd] = 0;
    auStack_a0[0xc] = 0;
    auStack_a0[0xb] = 0;
    auStack_a0[9] = 0;
    auStack_a0[8] = 0;
    auStack_a0[7] = 0;
    auStack_a0[6] = 0;
    auStack_a0[4] = 0;
    auStack_a0[3] = 0;
    auStack_a0[2] = 0;
    auStack_a0[1] = 0;
    auStack_a0[0xf] = 0x3f800000;
    auStack_a0[10] = 0x3f800000;
    auStack_a0[5] = 0x3f800000;
    auStack_a0[0] = 0x3f800000;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        pfVar1 = (float *)(*(int *)(param_1 + 0x28) + iStack_114 * 8);
        fStack_100 = (*(float *)(*(int *)(param_1 + 0x28) + 4 + iStack_114 * 8) - *pfVar1) *
                     *(float *)(param_1 + 0x24) + *pfVar1;
        fStack_fc = ((float)iVar4 / fVar2) * (float)iStack_114;
        uStack_f8 = 0;
        uStack_f0 = 0;
        uStack_f4 = 0x3f800000;
        fStack_ec = (float)iStack_114 * (1.0 / fVar2);
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = *(undefined4 *)(param_3 + 0x40);
        uStack_dc = *(undefined4 *)(param_3 + 0x44);
        uStack_d8 = *(undefined4 *)(param_3 + 0x48);
        uStack_d4 = *(undefined4 *)(param_3 + 0x4c);
        iVar5 = FUN_00f98a90();
        fStack_d0 = (float)iVar5 + fStack_100;
        fStack_cc = fStack_fc;
        uStack_c8 = 0;
        uStack_c4 = 0x3f800000;
        uStack_c0 = 0x3f800000;
        fStack_bc = fStack_ec;
        uStack_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = *(undefined4 *)(param_3 + 0x40);
        uStack_ac = *(undefined4 *)(param_3 + 0x44);
        uStack_a8 = *(undefined4 *)(param_3 + 0x48);
        uStack_a4 = *(undefined4 *)(param_3 + 0x4c);
        iVar5 = FUN_00cb04c0(&fStack_100,2);
        if (iVar5 == 0) {
          return;
        }
        iStack_114 = iStack_114 + 1;
      } while (iStack_114 < *(int *)(param_1 + 8));
    }
    uVar6 = *(undefined4 *)(param_3 + 0x68);
    puVar7 = auStack_a0;
    puVar8 = (undefined4 *)(iVar3 + 0x10);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)(iVar3 + 0xa4) = uVar6;
    *(undefined4 *)(iVar3 + 0x50) = uStack_14;
    *(float *)(iVar3 + 0x44) = *(float *)(iVar3 + 0x44) - 1.0;
    *(float *)(iVar3 + 0xa8) = *(float *)(param_1 + 0x2c) * 0.00078125;
    *(undefined4 *)(iVar3 + 0xac) = 0;
    *(undefined4 *)(iVar3 + 0xb0) = 0;
    *(undefined4 *)(iVar3 + 0xb4) = 0;
    *(float *)(iVar3 + 0xb8) = *(float *)(param_1 + 0x30) * 0.00078125;
    *(undefined4 *)(iVar3 + 0xbc) = 0;
    if (*(int *)(param_3 + 0x78) == 2) {
      FUN_00a30800(iVar3,0x3e,0);
      return;
    }
    if (*(int *)(param_3 + 0x78) == 1) {
      uVar6 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
      FUN_00a30800(extraout_ECX,0x69,uVar6);
      return;
    }
    uVar6 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
    FUN_00a30800(extraout_ECX_00,0x67,uVar6);
  }
  return;
}

