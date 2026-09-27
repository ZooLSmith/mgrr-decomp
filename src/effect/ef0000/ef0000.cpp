// src/effect/ef0000/ef0000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F84D0..00AB7DE0, 7 functions

#include "mgrr.h"
#include "ef0000.h"

// 009F84D0  ef0000::vf10  size=1  [class]
void ef0000::vf10(void)

{
  return;
}

// 009F84E0  ef0000::vf14  size=1  [class]
void ef0000::vf14(void)

{
  return;
}

// 009F84F0  ef0000::vf18  size=1  [class]
void ef0000::vf18(void)

{
  return;
}

// 009F8500  ef0000::vf50  size=1  [class]
void ef0000::vf50(void)

{
  return;
}

// 00AA6930  ef0000::ef0000  size=18  [class]
undefined4 * __fastcall ef0000::ef0000(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6950  ef0000::vf04  size=6  [class]
undefined * ef0000::vf04(void)

{
  return &DAT_01b7b378;
}

// 00AB7DE0  ef0000::vf00  size=105  [class]
undefined4 * __thiscall ef0000::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

