// src/ui/cUIEx0003.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB4500..00D29D20, 6 functions

#include "types.h"

// 00CB4500  cUIEx0003::vf04  size=28  [class]
void __fastcall cUIEx0003::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

// 00CB4520  FUN_00cb4520  size=131  [between]
/* WARNING: Removing unreachable block (ram,0x00cb457e) */

void __fastcall FUN_00cb4520(int param_1)

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

// 00CB45B0  cUIEx0003::vf14  size=85  [class]
void __thiscall cUIEx0003::vf14(int param_1,float param_2)

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
  FUN_00cb4520();
  return;
}

// 00CCF8D0  cUIEx0003::vf00  size=31  [class]
undefined4 * __thiscall cUIEx0003::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIExtendObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCF8F0  cUIEx0003::vf08  size=159  [class]
void __thiscall cUIEx0003::vf08(int *param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 4))();
  uVar1 = *param_2 & ((int)*param_2 < 1) - 1;
  param_1[2] = uVar1;
  if ((int)uVar1 < 1) {
    param_1[2] = 2;
  }
  else {
    param_1[2] = uVar1 + 1;
  }
  param_1[4] = (int)((float)(int)param_2[1] * 0.016666668);
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[2];
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (100 < (int)uVar1) {
    uVar1 = 100;
  }
  param_1[3] = uVar1;
  param_1[7] = param_2[6];
  param_1[8] = param_2[7];
  param_1[9] = 0;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_1[2] * 8 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_1[2] * 8),param_3);
  param_1[10] = iVar2;
  FUN_00cb4520();
  FUN_00cb4520();
  return;
}

// 00D29D20  cUIEx0003::vf1C  size=170  [class]
void cUIEx0003::vf1C(undefined4 param_1,int param_2,int *param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 0x60) - 1U < 4) {
    if (0.0 < *(float *)(param_2 + 0x4c)) goto LAB_00d29d64;
    fVar1 = *(float *)(param_2 + 0x5c);
  }
  else {
    fVar1 = *(float *)(param_2 + 0x4c);
  }
  if (fVar1 <= 0.0) {
    return;
  }
LAB_00d29d64:
  uVar2 = (**(code **)(*param_3 + 8))();
  switch(uVar2) {
  case 1:
    cUIPrimWorkStrip::cUIPrimWorkStrip_3(param_1,param_2,param_3);
    return;
  case 3:
    cMsgPrimWorkStrip::cMsgPrimWorkStrip_4(param_1,param_2,param_3);
    return;
  case 4:
    cMsgPrimWorkStrip::cMsgPrimWorkStrip_2(param_1,param_2,param_3);
    return;
  case 8:
    cUIPrimWorkStrip::cUIPrimWorkStrip_4(param_1,param_2,param_3);
  }
  return;
}

