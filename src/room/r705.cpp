// src/room/r705.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71680..00A7B930, 3 functions

#include "mgrr.h"
#include "R705.h"

// 00A71680  R705::vf04  size=33  [class]
void __fastcall R705::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  DAT_01bea060 = DAT_01bea060 | 0x10;
  return;
}

// 00A79D50  R705::vf00  size=28  [class]
void R705::vf00(void)

{
  FUN_00dd7240();
  FUN_00a75680(0x20);
  FUN_00a71970();
  return;
}

// 00A7B930  R705::vf14  size=62  [class]
undefined4 * __thiscall R705::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = cRoomAbstract::vftable;
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

