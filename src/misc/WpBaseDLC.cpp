// src/misc/WpBaseDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A90160..00AA8CE0, 4 functions

#include "mgrr.h"
#include "WpBaseDLC.h"

// 00A90160  WpBaseDLC::vf94  size=37  [class]
undefined4 WpBaseDLC::vf94(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00d46780();
  iVar1 = FUN_00d467a0();
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}

// 00AA74A0  WpBaseDLC::WpBaseDLC  size=38  [class]
undefined4 * __fastcall WpBaseDLC::WpBaseDLC(undefined4 *param_1)

{
  Behavior::Behavior_95();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00AA74D0  WpBaseDLC::vf04  size=6  [class]
undefined * WpBaseDLC::vf04(void)

{
  return &DAT_01be9c44;
}

// 00AA8CE0  WpBaseDLC::vf00  size=105  [class]
undefined4 * __thiscall WpBaseDLC::vf00(undefined4 *param_1,byte param_2)

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

