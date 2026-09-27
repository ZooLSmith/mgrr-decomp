// src/effect/EspAtkController.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CEF20..009D5ED0, 5 functions

#include "types.h"

// 009CEF20  EspAtkController::EspAtkController  size=18  [class]
undefined4 * __fastcall EspAtkController::EspAtkController(undefined4 *param_1)

{
  cEspControler::cEspControler();
  *param_1 = vftable;
  return param_1;
}

// 009D4730  EspAtkController::vf04  size=18  [class]
void EspAtkController::vf04(void)

{
  FUN_00eaa8c0(0);
  FUN_00eaa840();
  return;
}

// 009D4750  EspAtkController::vf08  size=41  [class]
void EspAtkController::vf08(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00eaa750(param_1,param_2);
    return;
  }
  FUN_00eaa6e0(param_1,param_2);
  return;
}

// 009D4780  EspAtkController::thunk_vf0C  size=5  [class]
void __fastcall EspAtkController::thunk_vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

// 009D5ED0  EspAtkController::vf00  size=36  [class]
undefined4 * __thiscall EspAtkController::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

