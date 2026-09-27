// src/effect/EspControllerHitStrip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAAAB0..00EAAD60, 3 functions

#include "mgrr.h"
#include "EspControllerHitStrip.h"

// 00EAAAB0  EspControllerHitStrip::EspControllerHitStrip  size=75  [class]
undefined4 * __fastcall EspControllerHitStrip::EspControllerHitStrip(undefined4 *param_1)

{
  cEspControler::cEspControler();
  *param_1 = vftable;
  param_1[9] = 4;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return param_1;
}

// 00EAAB00  EspControllerHitStrip::~EspControllerHitStrip  size=11  [class]
void __fastcall EspControllerHitStrip::~EspControllerHitStrip(undefined4 *param_1)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  return;
}

// 00EAAD60  EspControllerHitStrip::vf00  size=36  [class]
undefined4 * __thiscall EspControllerHitStrip::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

