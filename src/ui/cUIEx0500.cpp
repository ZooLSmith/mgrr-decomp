// src/ui/cUIEx0500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB4690..00CE8B80, 6 functions

#include "types.h"

// 00CB4690  cUIEx0500::vf04  size=28  [class]
void __fastcall cUIEx0500::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 00CB46B0  FUN_00cb46b0  size=131  [between]
/* WARNING: Removing unreachable block (ram,0x00cb470e) */

void __fastcall FUN_00cb46b0(int param_1)

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

// 00CB4740  cUIEx0500::vf14  size=85  [class]
void __thiscall cUIEx0500::vf14(int param_1,float param_2)

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
  FUN_00cb46b0();
  return;
}

// 00CCF990  cUIEx0500::vf00  size=31  [class]
undefined4 * __thiscall cUIEx0500::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIExtendObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCF9B0  cUIEx0500::vf08  size=210  [class]
void __thiscall cUIEx0500::vf08(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  (**(code **)(*param_1 + 4))();
  param_1[0x10] = *param_2;
  iVar1 = param_2[1];
  param_1[2] = iVar1;
  if (iVar1 < 1) {
    param_1[2] = 2;
  }
  else {
    param_1[2] = iVar1 + 1;
  }
  param_1[4] = (int)((float)(int)((param_2[2] < 1) - 1 & param_2[2]) * 0.016666668);
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = param_2[3];
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (100 < iVar1) {
    iVar1 = 100;
  }
  param_1[3] = iVar1;
  param_1[7] = param_2[6];
  param_1[8] = param_2[7];
  param_1[0xe] = param_2[8];
  param_1[0xf] = param_2[9];
  param_1[9] = 0;
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_1[2] * 8 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_1[2] * 8),param_3);
  param_1[10] = iVar1;
  FUN_00cb46b0();
  FUN_00cb46b0();
  param_1[0xb] = (uint)(param_2[3] == 0);
  param_1[0xc] = (int)(float)param_2[4];
  param_1[0xd] = (int)(float)param_2[4];
  return;
}

// 00CE8B80  cUIEx0500::vf1C  size=1026  [class]
void __thiscall cUIEx0500::vf1C(int param_1,int *param_2,int param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iStack_11c;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
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
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_6c;
  int iStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  if (((param_4 != (int *)0x0) && (iVar5 = (**(code **)(*param_4 + 8))(), iVar5 == 1)) &&
     ((0.0 < *(float *)(param_3 + 0x4c) || (0.0 < *(float *)(param_3 + 0x5c))))) {
    FUN_00ce5440(&fStack_a0,auStack_50,param_3);
    FUN_00cacde0(auStack_50,*(undefined4 *)(param_3 + 0x6c));
    if ((*param_2 != 0) &&
       (puVar6 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar6 != (undefined4 *)0x0)) {
      cUIPrimWorkBase::cUIPrimWorkBase();
      puVar6[0x4c] = 0;
      puVar6[0x4d] = 0;
      *puVar6 = cUIPrimWorkStrip::vftable;
      iVar5 = FUN_00caf910(param_2,*(int *)(param_1 + 8) * 2,9);
      if (iVar5 != 0) {
        puVar6[0x35] = *(undefined4 *)(param_3 + 0x74);
        fVar2 = (float)(*(int *)(param_1 + 8) + -1);
        if (iStack_6c == 0) {
          fVar4 = fStack_80 + fStack_88;
          fVar3 = fStack_88;
        }
        else {
          fVar3 = fStack_80 + fStack_88;
          fVar4 = fStack_88;
        }
        if (iStack_68 == 0) {
          fVar1 = fStack_7c / fVar2;
        }
        else {
          fStack_84 = fStack_84 + fStack_7c;
          fVar1 = (fStack_7c / fVar2) * -1.0;
        }
        iStack_11c = 0;
        if (0 < *(int *)(param_1 + 8)) {
          do {
            iVar5 = *(int *)(param_1 + 0x28);
            fStack_100 = (*(float *)(iVar5 + 4 + iStack_11c * 8) -
                         *(float *)(iVar5 + iStack_11c * 8)) * *(float *)(param_1 + 0x24) +
                         *(float *)(iVar5 + iStack_11c * 8) + fStack_a0;
            fStack_fc = (fStack_8c / fVar2) * (float)iStack_11c + fStack_9c;
            fStack_ec = (float)iStack_11c * fVar1 * fStack_74 + fStack_74 * fStack_84;
            uStack_f8 = 0;
            uStack_f4 = 0x3f800000;
            uStack_e8 = 0;
            uStack_e4 = 0;
            uStack_e0 = *(undefined4 *)(param_3 + 0x40);
            uStack_dc = *(undefined4 *)(param_3 + 0x44);
            uStack_d8 = *(undefined4 *)(param_3 + 0x48);
            uStack_d4 = *(undefined4 *)(param_3 + 0x4c);
            fStack_d0 = fStack_90 + fStack_100;
            uStack_c8 = 0;
            uStack_c4 = 0x3f800000;
            uStack_b8 = 0;
            uStack_b4 = 0;
            uStack_b0 = *(undefined4 *)(param_3 + 0x40);
            uStack_ac = *(undefined4 *)(param_3 + 0x44);
            uStack_a8 = *(undefined4 *)(param_3 + 0x48);
            uStack_a4 = *(undefined4 *)(param_3 + 0x4c);
            fStack_f0 = fStack_78 * fVar3;
            fStack_cc = fStack_fc;
            fStack_c0 = fStack_78 * fVar4;
            fStack_bc = fStack_ec;
            iVar5 = FUN_00caf960(&fStack_100,2);
            if (iVar5 == 0) {
              return;
            }
            iStack_11c = iStack_11c + 1;
          } while (iStack_11c < *(int *)(param_1 + 8));
        }
        iVar5 = FUN_00984620();
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 0x40) * 0x50;
          if (*(int *)(&DAT_01be15bc + iVar5) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined4 *)(&DAT_01be15b8 + iVar5);
          }
          puVar6[0x1a] = uVar7;
          puVar6[0x1d] = uStack_54;
          puVar6[0x1b] = 0;
        }
        iVar5 = *(int *)(param_3 + 0x6c);
        puVar6[0x47] = iVar5;
        puVar6[0x49] = (uint)(iVar5 == 3);
        FUN_00ccabb0(auStack_50,uStack_60,*(undefined4 *)(param_3 + 0x68),uStack_5c);
        puVar6[0x3a] = *(undefined4 *)(param_1 + 0x2c);
        uVar7 = *(undefined4 *)(param_1 + 0x34);
        puVar6[0x3b] = *(undefined4 *)(param_1 + 0x30);
        puVar6[0x3c] = uVar7;
        uVar7 = *(undefined4 *)(param_1 + 0x3c);
        puVar6[0x42] = *(undefined4 *)(param_1 + 0x38);
        puVar6[0x43] = uVar7;
        puVar6[0x46] = *(undefined4 *)(param_3 + 0x80);
        if (*(int *)(param_3 + 0x78) == 2) {
          FUN_00a30800(puVar6,0x3e,0);
          return;
        }
        if (*(int *)(param_3 + 0x78) == 1) {
          uVar7 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
          FUN_00a30800(puVar6,0x69,uVar7);
          return;
        }
        if (*(int *)(param_3 + 0x6c) == 3) {
          FUN_00a30800(puVar6,0x61,0);
          return;
        }
        uVar7 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
        FUN_00a30800(puVar6,0x67,uVar7);
      }
    }
  }
  return;
}

