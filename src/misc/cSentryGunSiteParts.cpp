// src/misc/cSentryGunSiteParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD84D0..00D17910, 4 functions

#include "mgrr.h"
#include "cSentryGunSiteParts.h"

// 00CD84D0  cSentryGunSiteParts::cSentryGunSiteParts  size=101  [class]
void __fastcall cSentryGunSiteParts::cSentryGunSiteParts(undefined4 *param_1)

{
  param_1[0x19] = 0x3f800000;
  param_1[1] = 0;
  param_1[0x21] = 0;
  param_1[2] = 0;
  param_1[0x22] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[0x10] = 0;
  param_1[0x18] = 0;
  param_1[0x23] = 0;
  param_1[4] = 1;
  param_1[0x20] = 1;
  param_1[0x24] = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}

// 00CE3E10  cSentryGunSiteParts::vf00  size=63  [class]
undefined4 * __thiscall cSentryGunSiteParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D177D0  cSentryGunSiteParts::vf08  size=318  [class]
void __fastcall cSentryGunSiteParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8e);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9c);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb2);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xc4);
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xc6);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  FUN_00d033f0();
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x90) = (uint)DAT_01dc1418;
  if ((((iVar1 == 0) || (iVar3 = *(int *)(iVar1 + 0x78), iVar3 == 0)) ||
      (*(int *)(iVar3 + 0x10) == 0)) ||
     ((iVar3 = iVar3 + *(int *)(iVar3 + 0x10), iVar3 == 0 ||
      (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0x28))))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(uint *)(param_1 + 0x28) * 0x1b0 + iVar3;
  }
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar3 + 4);
  if (((iVar1 == 0) || (iVar3 = *(int *)(iVar1 + 0x78), iVar3 == 0)) ||
     ((*(int *)(iVar3 + 0x10) == 0 ||
      ((iVar3 = iVar3 + *(int *)(iVar3 + 0x10), iVar3 == 0 ||
       (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0x30))))))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(uint *)(param_1 + 0x30) * 0x1b0 + iVar3;
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar3 + 4);
  if (iVar1 != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D17910  cSentryGunSiteParts::create  size=613  [class]
void __fastcall cSentryGunSiteParts::create(int param_1)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float local_20;
  float local_1c;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
  }
  else if (((*(int *)(param_1 + 0x40) == 1) && (*(int *)(param_1 + 0x18) != 0)) &&
          (iVar5 = FUN_00cdf400(1), iVar5 != 0)) {
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  iVar5 = FUN_00d9fa80(&local_20,param_1 + 0x50);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        fVar3 = *(float *)(param_1 + 100) + 0.1;
        *(float *)(param_1 + 100) = fVar3;
        if (1.0 < fVar3) {
          *(undefined4 *)(param_1 + 100) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 100) = 0x3e99999a;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 100) = 0x3f800000;
      iVar5 = FUN_00f98a90();
      local_20 = (float)iVar5 * 0.5;
      iVar5 = FUN_00f98aa0();
      local_1c = (float)iVar5 * 0.5;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    pfVar1 = (float *)(param_1 + 0x70);
    fVar4 = ABS(local_20 - *pfVar1) * *(float *)(param_1 + 100);
    fVar3 = ABS(local_1c - *(float *)(param_1 + 0x74)) * *(float *)(param_1 + 100);
    if (local_20 <= *pfVar1) {
      if ((local_20 < *pfVar1) && (fVar4 = *pfVar1 - fVar4, *pfVar1 = fVar4, fVar4 < local_20)) {
        *pfVar1 = local_20;
      }
    }
    else {
      fVar4 = *pfVar1 + fVar4;
      *pfVar1 = fVar4;
      if (local_20 < fVar4) {
        *pfVar1 = local_20;
      }
    }
    if (local_1c <= *(float *)(param_1 + 0x74)) {
      if ((local_1c < *(float *)(param_1 + 0x74)) &&
         (fVar3 = *(float *)(param_1 + 0x74) - fVar3, *(float *)(param_1 + 0x74) = fVar3,
         fVar3 < local_1c)) {
        *(float *)(param_1 + 0x74) = local_1c;
      }
    }
    else {
      fVar3 = fVar3 + *(float *)(param_1 + 0x74);
      *(float *)(param_1 + 0x74) = fVar3;
      if (local_1c < fVar3) {
        *(float *)(param_1 + 0x74) = local_1c;
      }
    }
    FUN_00cb27c0(*(undefined4 *)(param_1 + 0x1c),pfVar1);
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x8c);
  uVar2 = (uint)((*(uint *)(DAT_01dc14c8 + 0xe40) & *(uint *)(DAT_01dc14c8 + 0xcf8)) != 0);
  *(uint *)(param_1 + 0x8c) = uVar2;
  if (iVar5 == 0) {
    if ((uVar2 != 1) || (*(int *)(param_1 + 0x18) == 0)) goto LAB_00d17b41;
    uVar6 = 4;
  }
  else {
    if (((iVar5 != 1) || (uVar2 != 0)) || (*(int *)(param_1 + 0x18) == 0)) goto LAB_00d17b41;
    uVar6 = 5;
  }
  FUN_00cdeec0(uVar6);
LAB_00d17b41:
  if ((*(uint *)(param_1 + 0x90) != (uint)DAT_01dc1418) || (DAT_01dc2d8c != 0)) {
    FUN_00d033f0();
    *(uint *)(param_1 + 0x90) = (uint)DAT_01dc1418;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

