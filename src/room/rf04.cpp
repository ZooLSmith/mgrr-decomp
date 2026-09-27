// src/room/rf04.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6F240..00A7BA30, 5 functions

#include "types.h"

// 00A6F240  Rf04::vf0C  size=1  [class]
void Rf04::vf0C(void)

{
  return;
}

// 00A71710  Rf04::vf04  size=26  [class]
void __fastcall Rf04::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A731D0  Rf04::vf08  size=87  [class]
void __fastcall Rf04::vf08(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x22);
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    FUN_00a54c70();
    FUN_00dd4920(iVar1);
    param_1[0x20] = 0;
  }
  FUN_00a71970();
  (**(code **)(*param_1 + 0x18))();
  FUN_00dd7270();
  return;
}

// 00A7A520  Rf04::vf00  size=169  [class]
void Rf04::vf00(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_104 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [144];
  undefined4 local_50;
  undefined1 local_2c;
  
  FUN_00dd7240();
  FUN_00a75c80(0x20);
  FUN_00a71970();
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  piVar1 = (int *)FUN_00910da0();
  local_f0 = 0x447a0000;
  local_ec = 0x3f800000;
  local_e8 = 0x447a0000;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  uVar2 = (**(code **)(*piVar1 + 0x18))(local_104,local_e0,&local_100,&local_120,&local_f0,1);
  FUN_00910ab0(uVar2);
  return;
}

// 00A7BA30  Rf04::vf14  size=62  [class]
undefined4 * __thiscall Rf04::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = cRoomAbstract::vftable;
  FUN_00dd7270();
  param_1[4] = lib::Array<cRoomAbstract::stRoomEspUnit*>::vftable;
  if (param_1[5] != 0) {
    param_1[6] = 0;
  }
  param_1[5] = 0;
  param_1[7] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

