// src/misc/cQTECallAlarmParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBD3D0..00D32030, 4 functions

#include "mgrr.h"
#include "cQTECallAlarmParts.h"

// 00CBD3D0  cQTECallAlarmParts::vf08  size=170  [class]
void __fastcall cQTECallAlarmParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xd8);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xec);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xee);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf0);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf2);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf4);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CE3CC0  cQTECallAlarmParts::vf00  size=63  [class]
undefined4 * __thiscall cQTECallAlarmParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D25710  cQTECallAlarmParts::create  size=267  [class]
void __fastcall cQTECallAlarmParts::create(int param_1)

{
  int iVar1;
  
  if (DAT_01dc2d8c != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 0:
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00d15620(*(undefined4 *)(param_1 + 0x44));
      *(uint *)(param_1 + 0x48) = (uint)DAT_01dc1418;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      return;
    }
    break;
  case 1:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(1), iVar1 != 0)) {
      FUN_00cdeec0(0);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 2;
      return;
    }
    break;
  case 2:
    if ((*(uint *)(param_1 + 0x48) != (uint)DAT_01dc1418) || (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_00d15620(*(undefined4 *)(param_1 + 0x44));
      *(uint *)(param_1 + 0x48) = (uint)DAT_01dc1418;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 3;
      return;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(2), iVar1 != 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

// 00D32030  cQTECallAlarmParts::cQTECallAlarmParts  size=102  [class]
undefined4 * cQTECallAlarmParts::cQTECallAlarmParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[4] = 1;
    puVar1[0x12] = 1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0xf] = 0;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x13] = 0;
    puVar1[3] = "cQTECallAlarmParts";
    puVar1[2] = 7;
    uVar2 = FUN_00d29960(0x36);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

