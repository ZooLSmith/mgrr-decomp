// src/effect/et4010/Et4010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D7850..00AB8290, 4 functions

#include "types.h"

// 005D7850  Et4010::vf50  size=16  [class]
void Et4010::vf50(void)

{
  Behavior::vf50();
  switchD_0080dbae::default();
  return;
}

// 00AA6A80  Et4010::Et4010  size=18  [class]
undefined4 * __fastcall Et4010::Et4010(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6AA0  Et4010::vf04  size=6  [class]
undefined * Et4010::vf04(void)

{
  return &DAT_01b352c4;
}

// 00AB8290  Et4010::vf00  size=105  [class]
undefined4 * __thiscall Et4010::vf00(undefined4 *param_1,byte param_2)

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

