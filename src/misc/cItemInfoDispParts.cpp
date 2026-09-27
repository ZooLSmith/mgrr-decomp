// src/misc/cItemInfoDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEF300..00D30800, 3 functions

#include "types.h"

// 00CEF300  cItemInfoDispParts::vf00  size=30  [class]
undefined4 __thiscall cItemInfoDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_33();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D249D0  cItemInfoDispParts::vf14  size=1547  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemInfoDispParts::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_1 + 0x18);
  pfVar5 = (float *)0x0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x78);
    if ((((iVar2 == 0) || (*(int *)(iVar2 + 0x10) == 0)) ||
        (iVar2 = iVar2 + *(int *)(iVar2 + 0x10), iVar2 == 0)) ||
       (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0x108))) {
      pfVar5 = (float *)0x0;
    }
    else {
      pfVar5 = (float *)(*(uint *)(param_1 + 0x108) * 0x1b0 + iVar2);
    }
  }
  iVar3 = FUN_00f98a90();
  *(float *)(param_1 + 0x150) = (float)iVar3 * 0.00078125 * *pfVar5;
  iVar3 = FUN_00f98aa0();
  *(float *)(param_1 + 0x154) = (float)iVar3 * 0.0013888889 * pfVar5[1];
  switch(*(undefined4 *)(param_1 + 0x110)) {
  case 0:
    *(undefined4 *)(param_1 + 0x110) = 1;
  case 1:
    if ((*(int *)(param_1 + 0x114) == 0) && (*(int *)(param_1 + 0x1a0) != 0)) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    }
    else {
      *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
      if (0x24 < *(int *)(param_1 + 0x114)) {
        *(undefined4 *)(param_1 + 0x114) = 0;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
      }
    }
    break;
  case 2:
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x120) + 4) = (uint)((int)uVar6 < 2);
    iVar3 = FUN_00ca8620(param_1 + 0x114,0xc);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    }
    break;
  case 3:
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x11c) + 4) = (uint)((int)uVar6 < 2);
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x124) + 4) = (uint)((int)uVar6 < 2);
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    fVar7 = (float10)FUN_00cb2310(*(undefined4 *)(param_1 + 0x104),(int)uVar6 < 2);
    fVar8 = (float10)*(float *)(param_1 + 0x118) + (float10)_DAT_018b8c20;
    *(float *)(param_1 + 0x118) = (float)fVar8;
    iVar3 = extraout_EDX;
    if (fVar7 < fVar8) {
      *(float *)(param_1 + 0x118) = (float)fVar7;
    }
    goto LAB_00d24b9a;
  case 4:
    fVar1 = *(float *)(param_1 + 0x118) + _DAT_018b8c20;
    *(float *)(param_1 + 0x118) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x118) == 1.0) {
      *(undefined4 *)(*(int *)(param_1 + 0x124) + 4) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x108),1);
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x198) != 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
    }
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    break;
  case 6:
    iVar3 = param_1 + 0x114;
    if (*(int *)(param_1 + 0x1a0) == 0) {
      uVar9 = 0x1e;
    }
    else {
      uVar9 = 0x3c;
    }
    goto LAB_00d24b9d;
  case 7:
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x11c) + 4) = (uint)(1 < (int)uVar6);
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x120) + 4) = (uint)(1 < (int)uVar6);
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x108),1 < (int)uVar6);
    iVar3 = extraout_EDX_00;
LAB_00d24b9a:
    uVar9 = 0xc;
    goto LAB_00d24b9d;
  case 8:
    if (*(int *)(param_1 + 0x1a0) != 0) {
      *(undefined4 *)(param_1 + 0x110) = 10;
      break;
    }
    iVar3 = param_1 + 0x114;
    uVar9 = 0x3c;
LAB_00d24b9d:
    iVar3 = FUN_00ca8620(iVar3,uVar9);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    }
    break;
  case 9:
    uVar6 = *(uint *)(param_1 + 0x114) & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x104),0 < (int)uVar6);
    iVar3 = FUN_00ca8620(extraout_EDX_01,4);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x110) = 0xb;
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x1a4) < 1) {
      *(undefined4 *)(param_1 + 0x110) = 9;
    }
  }
  if (*(int *)(param_1 + 0x110) != 0xb) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = *(undefined4 *)(param_1 + 0x1a0);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = *(undefined4 *)(param_1 + 0x1a0);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = *(undefined4 *)(param_1 + 0x1a0);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = *(undefined4 *)(param_1 + 0x1a0);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = *(undefined4 *)(param_1 + 0x1a0);
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0xac) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = *(undefined4 *)(param_1 + 0x1a0);
    }
    fVar1 = *(float *)(param_1 + 0x118);
    local_30 = (*(float *)(param_1 + 0x140) - *(float *)(param_1 + 0x130)) * fVar1 +
               *(float *)(param_1 + 0x130);
    local_2c = (*(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x134)) * fVar1 +
               *(float *)(param_1 + 0x134);
    local_28 = (*(float *)(param_1 + 0x148) - *(float *)(param_1 + 0x138)) * fVar1 +
               *(float *)(param_1 + 0x138);
    local_24 = fVar1 * (*(float *)(param_1 + 0x14c) - *(float *)(param_1 + 0x13c)) +
               *(float *)(param_1 + 0x13c);
    *(float *)(param_1 + 0x40) = local_30 - *(float *)(param_1 + 0x150);
    *(float *)(param_1 + 0x44) = local_2c - *(float *)(param_1 + 0x154);
    if (DAT_01dc1494 == 0) {
      puVar4 = &DAT_01dc14e0;
    }
    else {
      puVar4 = (undefined4 *)(DAT_01dc1494 + 0x40);
    }
    local_40 = *puVar4;
    local_3c = puVar4[1];
    local_38 = puVar4[2];
    local_34 = puVar4[3];
    FUN_00d9fa80(&local_20,&local_40);
    iVar3 = *(int *)(param_1 + 0x120);
    if (*(int *)(iVar3 + 0x18) != 0) {
      *(undefined4 *)(iVar3 + 0x80) = local_20;
      *(undefined4 *)(iVar3 + 0x84) = local_1c;
    }
    FUN_00cb5540(&local_20,&local_30,0x3f800000);
    iVar3 = *(int *)(param_1 + 0x124);
    uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x204);
    if (*(int *)(iVar3 + 0x18) != 0) {
      *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x11c) + 0x200);
      *(undefined4 *)(iVar3 + 0x84) = uVar9;
    }
  }
  FUN_00d14e00();
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0x10c),0x40c00000,0x40c00000,0x43c80000,0x43960000);
  return;
}

// 00D30800  cItemInfoDispParts::vf08  size=950  [class]
void __fastcall cItemInfoDispParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar3;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x8c);
  }
  *(uint *)(param_1 + 0x94) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xec);
  }
  *(uint *)(param_1 + 0x98) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xee);
  }
  *(uint *)(param_1 + 0x9c) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xf0);
  }
  *(uint *)(param_1 + 0xa0) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xf4);
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xf6);
  }
  *(uint *)(param_1 + 0xa8) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0xf8);
  }
  *(uint *)(param_1 + 0xac) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x100);
  }
  *(uint *)(param_1 + 0xb0) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x102);
  }
  *(uint *)(param_1 + 0xb4) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x104);
  }
  *(uint *)(param_1 + 0xb8) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x106);
  }
  *(uint *)(param_1 + 0xbc) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x108);
  }
  *(uint *)(param_1 + 0xc0) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x10a);
  }
  *(uint *)(param_1 + 0xc4) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x10c);
  }
  *(uint *)(param_1 + 200) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x114);
  }
  *(uint *)(param_1 + 0xcc) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x116);
  }
  *(uint *)(param_1 + 0xd0) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x118);
  }
  *(uint *)(param_1 + 0xd4) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x11a);
  }
  *(uint *)(param_1 + 0xd8) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x11c);
  }
  *(uint *)(param_1 + 0xdc) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x11e);
  }
  *(uint *)(param_1 + 0xe0) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x120);
  }
  *(uint *)(param_1 + 0xe4) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x128);
  }
  *(uint *)(param_1 + 0xe8) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x12a);
  }
  *(uint *)(param_1 + 0xec) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 300);
  }
  *(uint *)(param_1 + 0xf0) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x12e);
  }
  *(uint *)(param_1 + 0xf4) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x130);
  }
  *(uint *)(param_1 + 0xf8) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x132);
  }
  *(uint *)(param_1 + 0xfc) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x134);
  }
  *(uint *)(param_1 + 0x100) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x148);
  }
  *(uint *)(param_1 + 0x104) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x14a);
  }
  *(uint *)(param_1 + 0x108) = uVar2;
  if (iVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar4 + 0x14c);
  }
  *(uint *)(param_1 + 0x10c) = uVar2;
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x104) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x104) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x108) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x108) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(1);
  }
  iVar4 = FUN_00d29960(4);
  *(int *)(param_1 + 0x11c) = iVar4;
  *(undefined4 *)(iVar4 + 0x214) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x11c) + 4) = 0;
  piVar5 = (int *)(param_1 + 0x120);
  iVar4 = 2;
  do {
    iVar1 = FUN_00d29960(5);
    *piVar5 = iVar1;
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
    iVar1 = *piVar5;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4) = 0;
  } while (iVar4 != 0);
  if (DAT_01dc2d70 != 0) {
    *(undefined4 *)(param_1 + 0x110) = 0xb;
  }
  return;
}

