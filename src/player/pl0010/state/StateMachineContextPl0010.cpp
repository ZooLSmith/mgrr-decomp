// src/player/pl0010/state/StateMachineContextPl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BD3610..00BF1BA0, 3 functions

#include "types.h"

// 00BD3610  StateMachineContextPl0010::vf00  size=6  [class]
undefined * StateMachineContextPl0010::vf00(void)

{
  return &DAT_01be9ef4;
}

// 00BE6600  StateMachineContextPl0010::vf04  size=30  [class]
undefined4 __thiscall StateMachineContextPl0010::vf04(undefined4 param_1,byte param_2)

{
  StateMachineContext::StateMachineContext();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BF1BA0  StateMachineContextPl0010::StateMachineContextPl0010  size=2371  [class]
undefined4 * __thiscall
StateMachineContextPl0010::StateMachineContextPl0010
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  StateMachineContext::StateMachineContext_2(param_2);
  param_1[4] = 0;
  param_1[0x1c] = 0;
  param_1[3] = param_3;
  param_1[0x1d] = 0;
  *param_1 = vftable;
  param_1[5] = 0;
  param_1[0xd] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_00a7f290(0);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  local_84 = (undefined4 *)0x1;
  do {
    FUN_00a7c930();
    local_84 = (undefined4 *)((int)local_84 + -1);
  } while (-1 < (int)local_84);
  FUN_00a7c930();
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  piVar1 = (int *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    *piVar1 = (int)lib::AllocatedArray<FreeRunActivity::Info>::vftable;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  local_84 = &DAT_01b7bd48;
  FUN_00be6d80(0x1e,&local_84);
  local_84 = (undefined4 *)0x1e;
  do {
    local_80 = 1;
    FUN_00a7c930();
    FUN_00a7c930();
    local_78 = 0;
    local_74 = 0;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_6c = 0;
    local_5c = 0;
    local_64 = 0;
    local_60 = 0;
    local_40 = 0;
    local_54 = 0;
    local_3c = 0;
    local_58 = 0;
    local_38 = 0;
    local_50 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_00a7c950();
    FUN_00a7c950();
    (**(code **)(*piVar1 + 8))(&local_80);
    local_84 = (undefined4 *)((int)local_84 + -1);
  } while (local_84 != (undefined4 *)0x0);
  param_1[0x23] = 0;
  param_1[0x30] = piVar1;
  param_1[0x44] = 0;
  param_1[99] = 0x40800000;
  param_1[0xc2] = 0;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[0x60] = 0;
  param_1[199] = 0;
  param_1[0xbc] = 0;
  param_1[0x61] = 0x43340000;
  param_1[0xbd] = 0;
  param_1[0xc1] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  FUN_00a7c950();
  if (param_1[0xd2] == 0) {
    iVar2 = FUN_00dd29b0(0x20,0x20,0,0);
    param_1[0xd2] = iVar2;
    if (iVar2 == 0) {
      uVar3 = (**(code **)(DAT_01b7bd48 + 0x18))();
      uVar3 = FUN_00dd2960(0x20,uVar3);
      FUN_00dd5650(&DAT_0163cadc,uVar3);
    }
    else {
      param_1[0xd3] = 8;
      param_1[0xd4] = 0;
      param_1[0xd5] = 1;
    }
  }
  param_1[0xcb] = 1;
  param_1[0xcf] = 0x42100000;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xd0] = 0x43390000;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xf0] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0x3f800000;
  param_1[0xef] = 0x3f800000;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0x158] = 0x3fcccccd;
  param_1[0xf2] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0x3f800000;
  param_1[0xf5] = 0x3f800000;
  param_1[0xf6] = 0x3f800000;
  param_1[0xf7] = 0x3f800000;
  FUN_00a7c950();
  param_1[0x102] = 0xffffffff;
  param_1[0x103] = 0xffffffff;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0x3f800000;
  param_1[0x10b] = 0x3f800000;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0x3f800000;
  param_1[0x11e] = 1;
  param_1[0x11c] = 0x3f060a92;
  param_1[0x11f] = 0;
  param_1[0x11d] = 0x3f060a92;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0x3f800000;
  param_1[0x128] = 0;
  param_1[0xfb] = 0;
  param_1[0xfe] = 0;
  param_1[0xfc] = 0;
  param_1[0x100] = 0;
  param_1[0xdc] = 0;
  param_1[0xfd] = 0;
  param_1[0xff] = 0;
  FUN_00a7c950();
  FUN_00a7c950();
  FUN_00a7c950();
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0x3f800000;
  param_1[0x13f] = 0x3f800000;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x140] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0x3f800000;
  param_1[0x148] = 0;
  param_1[0x62] = 0;
  param_1[0x15d] = 0x40266666;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0xcd] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if (param_1[0x165] == 0) {
    iVar2 = FUN_00dd29b0(0xe00,0x20,0,0);
    param_1[0x165] = iVar2;
    if (iVar2 == 0) {
      uVar3 = (**(code **)(DAT_01b7bd48 + 0x18))();
      uVar3 = FUN_00dd2960(0xe00,uVar3);
      FUN_00dd5650(&DAT_0163cadc,uVar3);
    }
    else {
      param_1[0x166] = 0x20;
      param_1[0x167] = 0;
      param_1[0x168] = 1;
    }
  }
  if (param_1[0x16a] == 0) {
    iVar2 = FUN_00dd29b0(0xe00,0x20,0,0);
    param_1[0x16a] = iVar2;
    if (iVar2 == 0) {
      uVar3 = (**(code **)(DAT_01b7bd48 + 0x18))();
      uVar3 = FUN_00dd2960(0xe00,uVar3);
      FUN_00dd5650(&DAT_0163cadc,uVar3);
    }
    else {
      param_1[0x16b] = 0x20;
      param_1[0x16c] = 0;
      param_1[0x16d] = 1;
    }
  }
  if (param_1[0x16f] == 0) {
    iVar2 = FUN_00dd29b0(0x380,0x20,0,0);
    param_1[0x16f] = iVar2;
    if (iVar2 == 0) {
      uVar3 = (**(code **)(DAT_01b7bd48 + 0x18))();
      uVar3 = FUN_00dd2960(0x380,uVar3);
      FUN_00dd5650(&DAT_0163cadc,uVar3);
    }
    else {
      param_1[0x170] = 8;
      param_1[0x171] = 0;
      param_1[0x172] = 1;
    }
  }
  iVar2 = FUN_00a82090("Pl001c",0x1001c,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar7 = &DAT_01b353e0;
      (**(code **)(*piVar1 + 4))(&DAT_01b353e0);
      iVar2 = FUN_00dd6d80(puVar7);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    param_1[0xe3] = uVar4;
  }
  iVar2 = FUN_00a82090("Pl001c",0x1001c,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar7 = &DAT_01b353e0;
      (**(code **)(*piVar1 + 4))(&DAT_01b353e0);
      iVar2 = FUN_00dd6d80(puVar7);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    param_1[0xe4] = uVar4;
  }
  iVar2 = FUN_00a82090("zangekiEffectDiskDummy",0x40006,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    FUN_00dd5650("zangekiStatePl0010::startup failed to create EffectDiskDummy");
  }
  iVar2 = FUN_00a82090("zangekiCameraDummy",0x4000d,0);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    FUN_00dd5650("zangekiStatePl0010::startup failed to create CameraDummy");
  }
  FUN_00a81330();
  iVar2 = FUN_00a7c8a0();
  if (iVar2 == 0) {
    FUN_00dd5650("zangekiStatePl0010::startup failed to setRoutine CameraDummy");
  }
  uVar8 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 1;
  FUN_00a81330(1,0,0,0);
  FUN_00a7c8a0();
  FUN_00a8caf0(uVar3,uVar5,uVar6,uVar8);
  param_1[0x173] = 0xbf800000;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x174] = 0x3e99999a;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0x3f800000;
  param_1[0xdb] = 0x3f800000;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0x175] = 0;
  param_1[0xdc] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  return param_1;
}

