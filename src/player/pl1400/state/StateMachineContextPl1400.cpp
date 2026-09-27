// src/player/pl1400/state/StateMachineContextPl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0088D610..0089C370, 4 functions

#include "mgrr.h"
#include "StateMachineContextPl1400.h"

// 0088D610  StateMachineContextPl1400::StateMachineContextPl1400  size=435  [class]
undefined4 * __thiscall
StateMachineContextPl1400::StateMachineContextPl1400
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  StateMachineContextPl0010::StateMachineContextPl0010(param_2,param_3);
  *param_1 = vftable;
  param_1[0x178] = param_3;
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0xcf] = 0x41d00000;
  FUN_00a7c950();
  param_1[0x17b] = 0;
  param_1[0x17a] = 0;
  FUN_00a7c950();
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0x14;
  param_1[0x18a] = 0;
  param_1[0x184] = 0xffffffff;
  param_1[0x185] = 0xffffffff;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0x3f800000;
  param_1[0x193] = 0x3f800000;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a0] = 0;
  param_1[0x19f] = 0;
  param_1[0x19d] = 0;
  param_1[0x19c] = 0;
  param_1[0x19b] = 0;
  param_1[0x19a] = 0;
  param_1[0x198] = 0;
  param_1[0x197] = 0;
  param_1[0x196] = 0;
  param_1[0x195] = 0;
  param_1[0x1a3] = 0x3f800000;
  param_1[0x19e] = 0x3f800000;
  param_1[0x199] = 0x3f800000;
  param_1[0x194] = 0x3f800000;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a8] = 0;
  FUN_008609b0(10,&DAT_01b7bd48);
  iVar1 = param_1[0x1aa];
  if (iVar1 != iVar1 + param_1[0x1ac] * 4) {
    do {
      FUN_00a7c950();
      iVar1 = iVar1 + 4;
    } while (iVar1 != param_1[0x1aa] + param_1[0x1ac] * 4);
  }
  return param_1;
}

// 0088D7D0  StateMachineContextPl1400::vf00  size=6  [class]
undefined * StateMachineContextPl1400::vf00(void)

{
  return &DAT_01b35b78;
}

// 0088D7E0  StateMachineContextPl1400::~StateMachineContextPl1400  size=132  [class]
void __fastcall StateMachineContextPl1400::~StateMachineContextPl1400(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0x1aa] != 0) {
    param_1[0x1ac] = 0;
    if (param_1[0x1ad] != 0) {
      FUN_00dd48d0(param_1[0x1aa],0);
      param_1[0x1ad] = 0;
    }
    param_1[0x1aa] = 0;
    param_1[0x1ab] = 0;
  }
  StateMachineContext::StateMachineContext();
  if (param_1[0x1aa] != 0) {
    param_1[0x1ac] = 0;
    if (param_1[0x1ad] != 0) {
      FUN_00dd48d0(param_1[0x1aa],0);
      param_1[0x1ad] = 0;
    }
    param_1[0x1aa] = 0;
    param_1[0x1ab] = 0;
  }
  StateMachineContext::StateMachineContext();
  return;
}

// 0089C370  StateMachineContextPl1400::vf04  size=30  [class]
undefined4 __thiscall StateMachineContextPl1400::vf04(undefined4 param_1,byte param_2)

{
  ~StateMachineContextPl1400();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

