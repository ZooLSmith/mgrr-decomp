// src/player/pl1500/state/StateMachineContextPl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4B70..008AA2F0, 4 functions

#include "mgrr.h"
#include "StateMachineContextPl1500.h"

// 008A4B70  StateMachineContextPl1500::StateMachineContextPl1500  size=169  [class]
undefined4 * __thiscall
StateMachineContextPl1500::StateMachineContextPl1500
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  StateMachineContextPl0010::StateMachineContextPl0010(param_2,param_3);
  *param_1 = vftable;
  param_1[0x178] = param_3;
  cEspControler::cEspControler();
  param_1[0x1ad] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ae] = 0;
  param_1[0x15d] = 0x40799999;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x179] = 10;
  param_1[0x17a] = 0xb;
  param_1[0x17b] = 0xc;
  param_1[0x17c] = 0xd;
  param_1[0x17d] = 0xe;
  return param_1;
}

// 008A4C20  StateMachineContextPl1500::vf00  size=6  [class]
undefined * StateMachineContextPl1500::vf00(void)

{
  return &DAT_01b35bdc;
}

// 008A4C30  StateMachineContextPl1500::~StateMachineContextPl1500  size=33  [class]
void __fastcall StateMachineContextPl1500::~StateMachineContextPl1500(undefined4 *param_1)

{
  *param_1 = vftable;
  StateMachineContextPl0010::~StateMachineContextPl0010();
  cEspControler::~cEspControler();
  StateMachineContextPl0010::~StateMachineContextPl0010();
  return;
}

// 008AA2F0  StateMachineContextPl1500::vf04  size=54  [class]
undefined4 * __thiscall StateMachineContextPl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  StateMachineContextPl0010::~StateMachineContextPl0010();
  cEspControler::~cEspControler();
  StateMachineContextPl0010::~StateMachineContextPl0010();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

