// src/misc/cRadarMapDestIconParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD65D0..00CF0F30, 4 functions

#include "types.h"

// 00CD65D0  cRadarMapDestIconParts::cRadarMapDestIconParts  size=309  [class]
void __fastcall cRadarMapDestIconParts::cRadarMapDestIconParts(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 1;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[10] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3f800000;
  return;
}

// 00CD6710  cRadarMapDestIconParts::vf14  size=199  [class]
void __fastcall cRadarMapDestIconParts::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_01dc0ec8;
  iVar4 = 0;
  iVar3 = 0;
  do {
    if ((*(int *)(param_1 + 0x24 + iVar4 * 4) == 0) || (iVar2 != 0)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1a8);
      if ((iVar1 != 0) && (iVar4 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)(iVar1 + iVar4 * 4) = 0;
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1a8);
      if ((iVar1 != 0) && (iVar4 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)(iVar1 + iVar4 * 4) = 1;
      }
      FUN_00cbdc80(param_1 + 0x50 + iVar3,&local_20);
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x1ac);
      if ((iVar1 != 0) && (iVar4 < *(int *)(*(int *)(param_1 + 0x18) + 0x1a4))) {
        *(undefined4 *)(iVar3 + iVar1) = local_20;
        *(undefined4 *)(iVar3 + 4 + iVar1) = local_1c;
        *(undefined4 *)(iVar3 + 8 + iVar1) = local_18;
        *(undefined4 *)(iVar3 + 0xc + iVar1) = local_14;
      }
    }
    *(undefined4 *)(param_1 + 0x24 + iVar4 * 4) = 0;
    iVar3 = iVar3 + 0x10;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0xa0);
  return;
}

// 00CDE5C0  cRadarMapDestIconParts::vf00  size=63  [class]
undefined4 * __thiscall cRadarMapDestIconParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF0F30  cRadarMapDestIconParts::vf08  size=85  [class]
void __fastcall cRadarMapDestIconParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8e);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

