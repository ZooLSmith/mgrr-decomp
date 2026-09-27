// src/misc/cSlashPointDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF0B00..00D32130, 4 functions

#include "types.h"

// 00CF0B00  cSlashPointDispParts::vf00  size=30  [class]
undefined4 __thiscall cSlashPointDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_28();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF0B20  cSlashPointDispParts::vf14  size=647  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cSlashPointDispParts::vf14(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((_DAT_01dc5070 & 1) == 0) {
    _DAT_01dc5070 = _DAT_01dc5070 | 1;
    _DAT_01dc5060 = 55.0;
    _DAT_01dc5064 = -55.0;
    _DAT_01dc5068 = 0.0;
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    if (*(int *)(param_1 + 0x4c) == 0) break;
    *(undefined4 *)(param_1 + 0x48) = 1;
  case 1:
    uVar5 = *(uint *)(param_1 + 100) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x70) + 4) = (uint)((int)uVar5 < 2);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (9 < *(int *)(param_1 + 100)) {
      *(undefined4 *)(param_1 + 100) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4) = 1;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
switchD_00cf0b6d_caseD_2:
      fVar2 = *(float *)(param_1 + 0x68) + _DAT_018b7834;
      *(float *)(param_1 + 0x68) = fVar2;
      if (1.0 < fVar2) {
        *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
      }
      if ((1.0 <= *(float *)(param_1 + 0x68)) && (iVar4 = FUN_00ce4dd0(1), iVar4 != 0)) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
switchD_00cf0b6d_caseD_3:
        *(undefined4 *)(param_1 + 0x48) = 4;
      }
    }
    break;
  case 2:
    goto switchD_00cf0b6d_caseD_2;
  case 3:
    goto switchD_00cf0b6d_caseD_3;
  case 4:
    if (*(int *)(param_1 + 0x4c) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(undefined4 *)(param_1 + 0x48) = 5;
    }
    break;
  case 5:
    uVar5 = *(uint *)(param_1 + 100) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x6c) + 4) = (uint)(2 < (int)uVar5);
    uVar5 = *(uint *)(param_1 + 100) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x70) + 4) = (uint)(2 < (int)uVar5);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (4 < *(int *)(param_1 + 100)) {
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x70) + 4) = 0;
      *(undefined4 *)(param_1 + 0x48) = 6;
    }
    break;
  case 6:
    iVar4 = FUN_00ce4dd0(2);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fVar2 = *(float *)(param_1 + 0x68);
    pfVar1 = (float *)(param_1 + 0x50);
    local_20 = *pfVar1 + _DAT_01dc5060 * fVar2;
    local_1c = *(float *)(param_1 + 0x54) + _DAT_01dc5064 * fVar2;
    local_18 = *(float *)(param_1 + 0x58) + _DAT_01dc5068 * fVar2;
    local_14 = *(float *)(param_1 + 0x5c) + _DAT_01dc506c * fVar2;
    if (*(int *)(param_1 + 0x18) != 0) {
      *(float *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
      *(float *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
      *(float *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x40) < *(uint *)(iVar4 + 0x80))) &&
       (*(int *)(iVar4 + 0x7c) + 0x2a0 + *(uint *)(param_1 + 0x40) * 0x400 != 0)) {
      FUN_00cb5540(pfVar1,&local_20,*(undefined4 *)(param_1 + 0x68));
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      iVar4 = *(int *)(param_1 + 0x70);
      if (*(int *)(iVar4 + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        return;
      }
      *(float *)(iVar4 + 0x80) = *pfVar1;
      *(undefined4 *)(iVar4 + 0x84) = uVar3;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 00D320B0  cSlashPointDispParts::cSlashPointDispParts  size=115  [class]
undefined4 * cSlashPointDispParts::cSlashPointDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x1a] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x18] = 0xffffffff;
    puVar1[0x19] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[3] = "cSlashPointDispParts";
    puVar1[2] = 7;
    uVar2 = FUN_00d29960(0x45);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D32130  cSlashPointDispParts::vf08  size=349  [class]
void __fastcall cSlashPointDispParts::vf08(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0x9c);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0x8a);
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0x9e);
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0xb0);
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xb2);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xec);
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xee);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x148);
  }
  *(uint *)(param_1 + 0x3c) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14a);
  }
  *(uint *)(param_1 + 0x40) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14c);
  }
  *(uint *)(param_1 + 0x44) = uVar2;
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = uVar1 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = FUN_00d29960(4);
  *(int *)(param_1 + 0x6c) = iVar3;
  *(undefined4 *)(iVar3 + 0x214) = 4;
  iVar3 = FUN_00d29960(5);
  *(int *)(param_1 + 0x70) = iVar3;
  *(undefined4 *)(iVar3 + 0x1e8) = 4;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

