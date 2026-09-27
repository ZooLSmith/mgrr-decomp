// src/misc/MonThrowMoto.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051B540..00AB9790, 4 functions

#include "mgrr.h"
#include "MonThrowMoto.h"

// 0051B540  MonThrowMoto::vf4C  size=16  [class]
void MonThrowMoto::vf4C(void)

{
  ExcelStage::vf4C();
  Bh0064::vf64();
  return;
}

// 00AB12C0  MonThrowMoto::MonThrowMoto  size=18  [class]
undefined4 * __fastcall MonThrowMoto::MonThrowMoto(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB12E0  MonThrowMoto::vf04  size=6  [class]
undefined * MonThrowMoto::vf04(void)

{
  return &DAT_01b34f5c;
}

// 00AB9790  MonThrowMoto::destruct  size=43  [class]
undefined4 __thiscall MonThrowMoto::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

