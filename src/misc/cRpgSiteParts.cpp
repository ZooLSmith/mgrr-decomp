// src/misc/cRpgSiteParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE3DA0..00D33940, 5 functions

#include "types.h"

// 00CE3DA0  cRpgSiteParts::vf00  size=63  [class]
undefined4 * __thiscall cRpgSiteParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D17390  cRpgSiteParts::vf08  size=91  [class]
void __fastcall cRpgSiteParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
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
  FUN_00d032b0();
  *(uint *)(param_1 + 0x6c) = (uint)DAT_01dc1418;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D173F0  cRpgSiteParts::vf14  size=988  [class]
void __fastcall cRpgSiteParts::vf14(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
  }
  else if (((*(int *)(param_1 + 0x28) == 1) && (*(int *)(param_1 + 0x18) != 0)) &&
          (iVar5 = FUN_00cdf400(1), iVar5 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  fVar2 = *(float *)(param_1 + 0x30) - DAT_01bea380;
  fVar4 = *(float *)(param_1 + 0x34) - DAT_01bea384;
  fVar3 = *(float *)(param_1 + 0x38) - DAT_01bea388;
  fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
  if (15.0 <= fVar2) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (1.0 - (fVar2 - 0.5) * 0.06896552) * 1.5 + 1.0;
  }
  if (*(float *)(param_1 + 100) <= fVar2) {
    if ((*(float *)(param_1 + 100) < fVar2) &&
       (fVar3 = *(float *)(param_1 + 100) + 0.1, *(float *)(param_1 + 100) = fVar3, fVar2 < fVar3))
    {
      *(float *)(param_1 + 100) = fVar2;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 100) - 0.1;
    *(float *)(param_1 + 100) = fVar3;
    if (fVar3 < fVar2) {
      *(float *)(param_1 + 100) = fVar2;
    }
  }
  iVar5 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar6 = uRam000000d0;
  if (((iVar5 != 0) && (uVar1 < *(uint *)(iVar5 + 0x80))) &&
     ((*(int *)(iVar5 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0 &&
      (uVar6 = *(undefined4 *)(param_1 + 100), uVar1 < *(uint *)(iVar5 + 0x80))))) {
    *(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x370 + uVar1 * 0x400) = *(undefined4 *)(param_1 + 100)
    ;
    uVar6 = uRam000000d0;
  }
  uRam000000d0 = uVar6;
  iVar5 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar6 = uRam000000d4;
  if ((((iVar5 != 0) && (uVar1 < *(uint *)(iVar5 + 0x80))) &&
      (*(int *)(iVar5 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) &&
     (uVar6 = *(undefined4 *)(param_1 + 100), uVar1 < *(uint *)(iVar5 + 0x80))) {
    *(undefined4 *)(*(int *)(iVar5 + 0x7c) + 0x374 + uVar1 * 0x400) = *(undefined4 *)(param_1 + 100)
    ;
    uVar6 = uRam000000d4;
  }
  uRam000000d4 = uVar6;
  iVar5 = FUN_00d9fa80(&local_30,param_1 + 0x30);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) == 0) {
      if (*(int *)(param_1 + 0x40) == 0) {
        fVar2 = *(float *)(param_1 + 0x44) + 0.1;
        *(float *)(param_1 + 0x44) = fVar2;
        if (1.0 < fVar2) {
          *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = 0x3e99999a;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
      iVar5 = FUN_00f98a90();
      local_30 = (float)iVar5 * 0.5;
      iVar5 = FUN_00f98aa0();
      local_2c = (float)iVar5 * 0.5;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    fVar3 = ABS(local_30 - *(float *)(param_1 + 0x50)) * *(float *)(param_1 + 0x44);
    fVar2 = ABS(local_2c - *(float *)(param_1 + 0x54)) * *(float *)(param_1 + 0x44);
    if (local_30 <= *(float *)(param_1 + 0x50)) {
      if ((local_30 < *(float *)(param_1 + 0x50)) &&
         (fVar3 = *(float *)(param_1 + 0x50) - fVar3, *(float *)(param_1 + 0x50) = fVar3,
         fVar3 < local_30)) {
        *(float *)(param_1 + 0x50) = local_30;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x50) + fVar3;
      *(float *)(param_1 + 0x50) = fVar3;
      if (local_30 < fVar3) {
        *(float *)(param_1 + 0x50) = local_30;
      }
    }
    if (local_2c <= *(float *)(param_1 + 0x54)) {
      if ((local_2c < *(float *)(param_1 + 0x54)) &&
         (fVar2 = *(float *)(param_1 + 0x54) - fVar2, *(float *)(param_1 + 0x54) = fVar2,
         fVar2 < local_2c)) {
        *(float *)(param_1 + 0x54) = local_2c;
      }
    }
    else {
      fVar2 = fVar2 + *(float *)(param_1 + 0x54);
      *(float *)(param_1 + 0x54) = fVar2;
      if (local_2c < fVar2) {
        *(float *)(param_1 + 0x54) = local_2c;
      }
    }
    iVar5 = FUN_00f98a90();
    local_20 = *(float *)(param_1 + 0x50) / ((float)iVar5 * 0.00078125);
    iVar5 = FUN_00f98aa0();
    local_1c = *(float *)(param_1 + 0x54) / ((float)iVar5 * 0.0013888889);
    FUN_00cb27c0(*(undefined4 *)(param_1 + 0x1c),&local_20);
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar5 + 0x80))) &&
       (iVar5 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0x3b0) = 1;
    }
  }
  iVar5 = *(int *)(param_1 + 0x68);
  uVar1 = (uint)((*(uint *)(DAT_01dc14c8 + 0xe40) & *(uint *)(DAT_01dc14c8 + 0xcf8)) != 0);
  *(uint *)(param_1 + 0x68) = uVar1;
  if (iVar5 == 0) {
    if ((uVar1 != 1) || (*(int *)(param_1 + 0x18) == 0)) goto LAB_00d1779d;
    uVar6 = 4;
  }
  else {
    if (((iVar5 != 1) || (uVar1 != 0)) || (*(int *)(param_1 + 0x18) == 0)) goto LAB_00d1779d;
    uVar6 = 5;
  }
  FUN_00cdeec0(uVar6);
LAB_00d1779d:
  if ((*(uint *)(param_1 + 0x6c) != (uint)DAT_01dc1418) || (DAT_01dc2d8c != 0)) {
    FUN_00d032b0();
    *(uint *)(param_1 + 0x6c) = (uint)DAT_01dc1418;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 00D338B0  cRpgSiteParts::cRpgSiteParts  size=135  [class]
undefined4 * cRpgSiteParts::cRpgSiteParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x70,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x11] = 0x3f800000;
    puVar1[2] = 0;
    puVar1[0x19] = 0x3f800000;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[10] = 0;
    puVar1[0x10] = 0;
    puVar1[0x1a] = 0;
    puVar1[4] = 1;
    puVar1[0x18] = 1;
    puVar1[0x1b] = 1;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[3] = "cRpgSiteParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0x3f);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D33940  FUN_00d33940  size=143  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d33940(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (DAT_01dc1314 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar5 = cRpgSiteParts::cRpgSiteParts();
      *(undefined4 *)(param_1 + 4) = uVar5;
      _DAT_01dc1318 = 1;
    }
    uVar4 = _DAT_01dc4ebc;
    uVar3 = _DAT_01dc4eb8;
    uVar5 = _DAT_01dc4eb4;
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x30) = _DAT_01dc4eb0;
    *(undefined4 *)(iVar1 + 0x34) = uVar5;
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    *(undefined4 *)(iVar1 + 0x3c) = uVar4;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 1;
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (puVar2[10] == 2) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      _DAT_01dc1318 = 0;
    }
  }
  DAT_01dc1314 = 0;
  return;
}

