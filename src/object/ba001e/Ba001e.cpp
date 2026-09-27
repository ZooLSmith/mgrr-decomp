// src/object/ba001e/Ba001e.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00404B00..00AB9110, 7 functions

#include "mgrr.h"
#include "Ba001e.h"

// 00404B00  Ba001e::startup  size=30  [class]
undefined4 Ba001e::startup(void)

{
  int iVar1;
  
  iVar1 = BehaviorBa::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00aa92c0(0);
  return 1;
}

// 00404B20  Ba001e::vf44  size=30  [class]
void Ba001e::vf44(void)

{
  FUN_00a8ca50(0,0,0);
  BehaviorBgBase::vf44();
  return;
}

// 00404B40  Ba001e::vf1C  size=19  [class]
void Ba001e::vf1C(void)

{
  Bh0056::vf1C();
  FUN_00aa92c0(0);
  return;
}

// 00404B60  Ba001e::vf20  size=31  [class]
void Ba001e::vf20(void)

{
  Bh0056::vf20();
  FUN_00a8ca50(0,0,0);
  return;
}

// 00AB04B0  Ba001e::Ba001e  size=18  [class]
undefined4 * __fastcall Ba001e::Ba001e(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB04D0  Ba001e::vf04  size=6  [class]
undefined * Ba001e::vf04(void)

{
  return &DAT_01b34b10;
}

// 00AB9110  Ba001e::destruct  size=43  [class]
undefined4 __thiscall Ba001e::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

