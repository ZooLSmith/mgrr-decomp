// src/misc/cSavingIcon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD8430..00D33A50, 5 functions

#include "mgrr.h"
#include "cSavingIcon.h"

// 00CD8430  cSavingIcon::cSavingIcon  size=97  [class]
void __fastcall cSavingIcon::cSavingIcon(undefined4 *param_1)

{
  undefined4 local_14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = local_14;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = local_14;
  return;
}

// 00CF1FF0  cSavingIcon::vf00  size=63  [class]
undefined4 * __thiscall cSavingIcon::vf00(undefined4 *param_1,byte param_2)

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

// 00CF2030  cSavingIcon::vf08  size=107  [class]
void __fastcall cSavingIcon::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x13c);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 != 0) {
    FUN_00cdeec0(3);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}

// 00CF20A0  cSavingIcon::vf14  size=326  [class]
void __fastcall cSavingIcon::vf14(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_00cf2197;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0x1c))) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)(*(uint *)(param_1 + 0x1c) * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c));
    }
    *(undefined4 *)(param_1 + 0x40) = *puVar2;
    *(undefined4 *)(param_1 + 0x44) = puVar2[1];
    *(undefined4 *)(param_1 + 0x48) = puVar2[2];
    *(undefined4 *)(param_1 + 0x4c) = puVar2[3];
    FUN_00cb27c0(*(undefined4 *)(param_1 + 0x24),(undefined4 *)(param_1 + 0x40));
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x2c);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar3 = 3;
      goto LAB_00cf218f;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x2c);
        }
        if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0)) &&
           (*(int *)(param_1 + 0x18) != 0)) {
          iVar1 = FUN_00cdf400(0);
          if (iVar1 != 0) {
            FUN_00cdeec0(0);
          }
        }
      }
      goto LAB_00cf2197;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x2c);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar3 = 2;
LAB_00cf218f:
      FUN_00cdeec0(uVar3);
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_00cf2197:
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    local_20 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x50);
    local_1c = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x54);
    local_18 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x58);
    local_14 = *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x5c);
    FUN_00cb27c0(*(undefined4 *)(param_1 + 0x24),&local_20);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

// 00D33A50  cSavingIcon::cSavingIcon_2  size=156  [class]
undefined4 * cSavingIcon::cSavingIcon_2(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x60,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = local_14;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = local_14;
    puVar1[3] = "cSavingIcon";
    puVar1[2] = 10;
    uVar2 = FUN_00d29960(0x41);
    puVar1[5] = uVar2;
    puVar1[4] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}

