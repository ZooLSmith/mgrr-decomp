// src/misc/cEnemyEnergyGaugeParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD2B80..00D14160, 4 functions

#include "types.h"

// 00CD2B80  cEnemyEnergyGaugeParts::cEnemyEnergyGaugeParts  size=207  [class]
undefined4 * cEnemyEnergyGaugeParts::cEnemyEnergyGaugeParts(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x39] = 0;
  *extraout_EDX = vftable;
  extraout_EDX[0x3a] = 0;
  extraout_EDX[0x3c] = 0x1e;
  extraout_EDX[0x3b] = 0;
  extraout_EDX[0x32] = 0xffffffff;
  extraout_EDX[0x33] = 0xffffffff;
  extraout_EDX[0x34] = 0;
  extraout_EDX[0x36] = 0;
  extraout_EDX[0x37] = 0;
  extraout_EDX[0x38] = 0;
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x3e] = 0;
  extraout_EDX[0x3f] = 0;
  extraout_EDX[0x40] = 0;
  extraout_EDX[0x41] = 0;
  extraout_EDX[0x42] = 0;
  extraout_EDX[0x24] = 0;
  extraout_EDX[0x25] = 0;
  extraout_EDX[0x26] = 0;
  extraout_EDX[0x27] = 0;
  extraout_EDX[0x28] = 0;
  extraout_EDX[0x29] = 0;
  extraout_EDX[0x2a] = 0;
  extraout_EDX[0x2b] = 0;
  extraout_EDX[0x2c] = 0;
  extraout_EDX[0x2d] = 0;
  extraout_EDX[0x2e] = 0;
  extraout_EDX[0x2f] = 0;
  extraout_EDX[0x30] = 0;
  extraout_EDX[0x31] = 0;
  return extraout_EDX;
}

// 00CE35A0  cEnemyEnergyGaugeParts::vf00  size=63  [class]
undefined4 * __thiscall cEnemyEnergyGaugeParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D13FB0  cEnemyEnergyGaugeParts::vf08  size=431  [class]
void __fastcall cEnemyEnergyGaugeParts::vf08(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0xc4);
  }
  *(uint *)(param_1 + 0x90) = uVar1;
  if (iVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar3 + 0xc6);
  }
  *(uint *)(param_1 + 0x94) = uVar1;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 200);
  }
  *(uint *)(param_1 + 0x98) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xca);
  }
  *(uint *)(param_1 + 0x9c) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xcc);
  }
  *(uint *)(param_1 + 0xa0) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xd8);
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xda);
  }
  *(uint *)(param_1 + 0xa8) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xec);
  }
  *(uint *)(param_1 + 0xac) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0xee);
  }
  *(uint *)(param_1 + 0xb0) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x114);
  }
  *(uint *)(param_1 + 0xb4) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x116);
  }
  *(uint *)(param_1 + 0xb8) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x148);
  }
  *(uint *)(param_1 + 0xbc) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14a);
  }
  *(uint *)(param_1 + 0xc0) = uVar2;
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x14c);
  }
  *(uint *)(param_1 + 0xc4) = uVar2;
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = uVar1 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined2 *)(iVar3 + 0x3ed) = 0x101;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined2 *)(iVar3 + 0x3ed) = 0x101;
  }
  FUN_00cfef30(1);
  if (*(int *)(param_1 + 0x104) == 0) {
    FUN_00cecfb0(1);
    return;
  }
  *(undefined4 *)(param_1 + 0x108) = 1;
  FUN_00ced560(1);
  return;
}

// 00D14160  cEnemyEnergyGaugeParts::vf14  size=284  [class]
void __fastcall cEnemyEnergyGaugeParts::vf14(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0xc4),0x40000000,0x40000000,0x43960000,0x43480000);
  if (((byte)DAT_01bea090 & 0x40) == 0) {
    if (*(int *)(param_1 + 0xf8) != 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 1;
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    if (*(int *)(param_1 + 0xfc) == 1) {
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      uVar1 = 0;
      if (0x3c < *(int *)(param_1 + 0x100)) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      }
    }
    else if (*(int *)(param_1 + 0xfc) == 2) {
      uVar1 = *(uint *)(param_1 + 0x100) & 0x80000003;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
      }
      uVar1 = (uint)((int)uVar1 < 2);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      if (0xc < *(int *)(param_1 + 0x100)) {
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = 1;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(uint *)(*(int *)(param_1 + 0x14) + 4) = uVar1;
  }
  FUN_00cfef30(0);
  if (*(int *)(param_1 + 0x104) == 0) {
    FUN_00cecfb0(0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  FUN_00ced560(0);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}

