// src/misc/cRoomAbstract.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6D630..00A75FE0, 3 functions

#include "mgrr.h"
#include "cRoomAbstract.h"

// 00A6D630  cRoomAbstract::vf1C  size=1  [class]
void cRoomAbstract::vf1C(void)

{
  return;
}

// 00A71750  cRoomAbstract::vf18  size=19  [class]
void __fastcall cRoomAbstract::vf18(int param_1)

{
  (**(code **)(*DAT_01be9a30 + 0x5c))(*(undefined4 *)(param_1 + 8));
  return;
}

// 00A75FE0  cRoomAbstract::vf14  size=62  [class]
undefined4 * __thiscall cRoomAbstract::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00dd7270();
  param_1[4] = lib::Array<cRoomAbstract::stRoomEspUnit*>::vftable;
  if (param_1[5] != 0) {
    param_1[6] = 0;
  }
  param_1[5] = 0;
  param_1[7] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

