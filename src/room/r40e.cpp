// src/room/r40e.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71570..00A7B830, 4 functions

#include "types.h"

// 00A71570  R40e::vf04  size=26  [class]
void __fastcall R40e::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A72F30  R40e::vf08  size=87  [class]
void __fastcall R40e::vf08(int *param_1)

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

// 00A790C0  R40e::vf00  size=348  [class]
void __fastcall R40e::vf00(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  FUN_00dd7240();
  FUN_00a75080(0x20);
  FUN_00a71970();
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  piVar3 = (int *)FUN_00910da0();
  local_120 = 0x41200000;
  local_11c = 0x3f800000;
  local_118 = 0x41a00000;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_100 = 0x43150000;
  local_fc = 0x43b18000;
  local_f8 = 0;
  uVar4 = (**(code **)(*piVar3 + 4))(local_e4,local_e0,&local_100,&local_110,&local_120,1);
  FUN_00910ab0(uVar4);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    FUN_004066f0();
    uVar2 = *(uint *)(iVar1 + 0xc);
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 0x200;
    puVar5[0xb] = 0xf;
    if (DAT_01885d68 != 1) {
      piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x88),4);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x88),0x20);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x88),0x40000000);
  return;
}

// 00A7B830  R40e::vf14  size=62  [class]
undefined4 * __thiscall R40e::vf14(undefined4 *param_1,byte param_2)

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

