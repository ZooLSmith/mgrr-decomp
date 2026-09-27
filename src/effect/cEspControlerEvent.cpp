// src/effect/cEspControlerEvent.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAAA30..00EAAD30, 3 functions

#include "types.h"

// 00EAAA30  cEspControlerEvent::cEspControlerEvent_2  size=45  [class]
undefined4 * __fastcall cEspControlerEvent::cEspControlerEvent_2(undefined4 *param_1)

{
  cEspControler::cEspControler_2(6);
  *param_1 = vftable;
  param_1[0x2d] = 0xffffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2c] = 3;
  return param_1;
}

// 00EAAAA0  cEspControlerEvent::cEspControlerEvent  size=11  [class]
void __fastcall cEspControlerEvent::cEspControlerEvent(undefined4 *param_1)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  return;
}

// 00EAAD30  cEspControlerEvent::vf00  size=36  [class]
undefined4 * __thiscall cEspControlerEvent::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

