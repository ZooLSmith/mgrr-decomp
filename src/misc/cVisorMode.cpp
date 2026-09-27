// src/misc/cVisorMode.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC12A0..00D35A60, 4 functions

#include "mgrr.h"
#include "cVisorMode.h"

// 00CC12A0  cVisorMode::vf08  size=102  [class]
void __fastcall cVisorMode::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x90) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x94) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb2);
  }
  *(uint *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x20) = 0x3b03126f;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CF2AF0  cVisorMode::vf00  size=79  [class]
undefined4 * __thiscall cVisorMode::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  DAT_01bea084 = DAT_01bea084 & 0xfff7ffff;
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

// 00D27060  cVisorMode::vf14  size=486  [class]
void __fastcall cVisorMode::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (DAT_01dc136c != 0) {
    DAT_01bea084 = DAT_01bea084 & 0xfff7ffff;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    DAT_01dc136c = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x9c)) {
  case 0:
    if (((byte)DAT_01bea090 & 0x40) != 0) {
      *(uint *)(param_1 + 0xa4) = (uint)DAT_01dc1418;
      FUN_00d18320();
      FUN_00e5e050("core_se_sys_augment_in",0);
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
    break;
  case 1:
    fVar1 = *(float *)(param_1 + 0xa0) + 1.0;
    *(float *)(param_1 + 0xa0) = fVar1;
    if (5.0 <= fVar1) {
      DAT_01bea084 = DAT_01bea084 | 0x80000;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar2 = FUN_00cdf400(0), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x9c) = 3;
    }
    break;
  case 3:
    if (((byte)DAT_01bea090 & 0x40) == 0) {
      FUN_00e5e050("core_se_sys_augment_out",0);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 0xa0) + 1.0;
    *(float *)(param_1 + 0xa0) = fVar1;
    if (10.0 <= fVar1) {
      DAT_01bea084 = DAT_01bea084 & 0xfff7ffff;
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    break;
  case 5:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar2 = FUN_00cdf400(1), iVar2 != 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0xa4) != (uint)DAT_01dc1418) || (DAT_01dc2d8c != 0)) {
    FUN_00d18320();
    *(uint *)(param_1 + 0xa4) = (uint)DAT_01dc1418;
  }
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0x90),0x3fc00000,0x3fc00000,0x44480000,0x44160000);
  return;
}

// 00D35A60  cVisorMode::cVisorMode  size=103  [class]
undefined4 * cVisorMode::cVisorMode(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0xb0,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
    puVar1[0x28] = 0;
    *puVar1 = vftable;
    puVar1[0x27] = 0;
    puVar1[0x29] = 1;
    puVar1[3] = "cVisorMode";
    puVar1[2] = 10;
    uVar2 = FUN_00d29960(0x4f);
    puVar1[5] = uVar2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

