// src/misc/StateMachineContext.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B79B20..00D821A0, 4 functions

#include "mgrr.h"
#include "StateMachineContext.h"

// 00B79B20  StateMachineContext::vf00  size=6  [class]
undefined * StateMachineContext::vf00(void)

{
  return &DAT_01dc53c0;
}

// 00B79B40  StateMachineContext::vf04  size=31  [class]
undefined4 * __thiscall StateMachineContext::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BD3340  StateMachineContext::StateMachineContext  size=710  [class]
void __fastcall StateMachineContext::StateMachineContext(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = StateMachineContextPl0010::vftable;
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(1);
    param_1[0x30] = 0;
  }
  if (param_1[0xd2] != 0) {
    param_1[0xd4] = 0;
    if (param_1[0xd5] != 0) {
      FUN_00dd48d0(param_1[0xd2],0);
      param_1[0xd5] = 0;
    }
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
  }
  FUN_00a7c950();
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0x167] = 0;
  param_1[0x16c] = 0;
  param_1[0x171] = 0;
  if (param_1[0x165] != 0) {
    param_1[0x167] = 0;
    if (param_1[0x168] != 0) {
      FUN_00dd48d0(param_1[0x165],0);
      param_1[0x168] = 0;
    }
    param_1[0x165] = 0;
    param_1[0x166] = 0;
  }
  if (param_1[0x16a] != 0) {
    param_1[0x16c] = 0;
    if (param_1[0x16d] != 0) {
      FUN_00dd48d0(param_1[0x16a],0);
      param_1[0x16d] = 0;
    }
    param_1[0x16a] = 0;
    param_1[0x16b] = 0;
  }
  if (param_1[0x16f] != 0) {
    param_1[0x171] = 0;
    if (param_1[0x172] != 0) {
      FUN_00dd48d0(param_1[0x16f],0);
      param_1[0x172] = 0;
    }
    param_1[0x16f] = 0;
    param_1[0x170] = 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  FUN_00a7c950();
  param_1[0x177] = 0;
  if (param_1[0x16f] != 0) {
    param_1[0x171] = 0;
    if (param_1[0x172] != 0) {
      FUN_00dd48d0(param_1[0x16f],0);
      param_1[0x172] = 0;
    }
    param_1[0x16f] = 0;
    param_1[0x170] = 0;
  }
  if (param_1[0x16a] != 0) {
    param_1[0x16c] = 0;
    if (param_1[0x16d] != 0) {
      FUN_00dd48d0(param_1[0x16a],0);
      param_1[0x16d] = 0;
    }
    param_1[0x16a] = 0;
    param_1[0x16b] = 0;
  }
  if (param_1[0x165] != 0) {
    param_1[0x167] = 0;
    if (param_1[0x168] != 0) {
      FUN_00dd48d0(param_1[0x165],0);
      param_1[0x168] = 0;
    }
    param_1[0x165] = 0;
    param_1[0x166] = 0;
  }
  if (param_1[299] != 0) {
    param_1[0x12d] = 0;
    if (param_1[0x12e] != 0) {
      FUN_00dd48d0(param_1[299],0);
      param_1[0x12e] = 0;
    }
    param_1[299] = 0;
    param_1[300] = 0;
  }
  if (param_1[0xd2] != 0) {
    param_1[0xd4] = 0;
    if (param_1[0xd5] != 0) {
      FUN_00dd48d0(param_1[0xd2],0);
      param_1[0xd5] = 0;
    }
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
  }
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *param_1 = vftable;
  return;
}

// 00D821A0  StateMachineContext::StateMachineContext_2  size=23  [class]
void __thiscall StateMachineContext::StateMachineContext_2(undefined4 *param_1,undefined4 param_2)

{
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[1] = param_2;
  return;
}

