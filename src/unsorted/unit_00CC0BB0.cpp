// src/unsorted/unit_00CC0BB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC0BB0..00CC0D80, 4 functions

#include "mgrr.h"

// 00CC0BB0  FUN_00cc0bb0  size=29  [run]
void FUN_00cc0bb0(void)

{
  if (DAT_01dc1364 != (undefined4 *)0x0) {
    (**(code **)*DAT_01dc1364)(1);
    DAT_01dc1364 = (undefined4 *)0x0;
  }
  return;
}

// 00CC0BD0  FUN_00cc0bd0  size=12  [run]
bool FUN_00cc0bd0(void)

{
  return DAT_01dc1364 != 0;
}

// 00CC0C50  FUN_00cc0c50  size=301  [run]
void __fastcall FUN_00cc0c50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xac) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xb4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  return;
}

// 00CC0D80  FUN_00cc0d80  size=683  [run]
undefined4 __fastcall FUN_00cc0d80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0xb8),0x40000000,0x40000000,0x43960000,0x43480000);
  uVar5 = 0;
  switch(*(undefined4 *)(param_1 + 0xdc)) {
  case 0:
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
    }
    break;
  case 1:
    uVar4 = *(uint *)(param_1 + 0xe0) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xe8) + 4) = (uint)((int)uVar4 < 2);
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    if (*(int *)(param_1 + 0xe0) < 0xd) goto switchD_00cc0dd1_default;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 0;
    }
    break;
  case 2:
    uVar4 = *(uint *)(param_1 + 0xe0) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xe4) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xe0) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xec) + 4) = (uint)((int)uVar4 < 2);
    goto LAB_00cc0f29;
  case 3:
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    iVar2 = *(int *)(param_1 + 0xe0);
    bVar7 = SBORROW4(iVar2,0x1e);
    iVar1 = iVar2 + -0x1e;
    bVar6 = iVar2 == 0x1e;
    uVar5 = 1;
    goto LAB_00cc0f36;
  case 4:
    uVar4 = *(uint *)(param_1 + 0xe0) & 0x80000003;
    uVar5 = 1;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xe4) + 4) = (uint)(2 < (int)uVar4);
    uVar4 = *(uint *)(param_1 + 0xe0) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xe8) + 4) = (uint)(2 < (int)uVar4);
    uVar4 = *(uint *)(param_1 + 0xe0) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xec) + 4) = (uint)(2 < (int)uVar4);
LAB_00cc0f29:
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    iVar2 = *(int *)(param_1 + 0xe0);
    bVar7 = SBORROW4(iVar2,0xc);
    iVar1 = iVar2 + -0xc;
    bVar6 = iVar2 == 0xc;
LAB_00cc0f36:
    if (bVar6 || bVar7 != iVar1 < 0) goto switchD_00cc0dd1_default;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    break;
  default:
    goto switchD_00cc0dd1_default;
  }
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
switchD_00cc0dd1_default:
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 == 0) || (*(uint *)(iVar2 + 0x80) <= *(uint *)(param_1 + 0xb4))) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(uint *)(param_1 + 0xb4) * 0x400 + 0x2a0 + *(int *)(iVar2 + 0x7c);
  }
  local_40 = *(undefined4 *)(iVar2 + 0x90);
  local_3c = *(undefined4 *)(iVar2 + 0x94);
  local_38 = 0;
  local_34 = 0x3f800000;
  puVar3 = (undefined4 *)FUN_00caac30(2);
  local_30 = *puVar3;
  local_2c = puVar3[1];
  local_28 = puVar3[2];
  local_24 = puVar3[3];
  FUN_00d9fa80(&local_20,&local_30);
  FUN_00cb5540(&local_20,&local_40,0x3f800000);
  iVar2 = *(int *)(param_1 + 0xe8);
  if (*(int *)(iVar2 + 0x18) != 0) {
    *(undefined4 *)(iVar2 + 0x80) = local_20;
    *(undefined4 *)(iVar2 + 0x84) = local_1c;
  }
  iVar2 = *(int *)(param_1 + 0xec);
  if (*(int *)(iVar2 + 0x18) != 0) {
    *(undefined4 *)(iVar2 + 0x80) = local_40;
    *(undefined4 *)(iVar2 + 0x84) = local_3c;
  }
  return uVar5;
}

