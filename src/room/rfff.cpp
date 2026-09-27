// src/room/rfff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71730..00A7BA70, 4 functions

#include "types.h"

// 00A71730  cRfff::vf04  size=26  [class]
void __fastcall cRfff::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A73230  cRfff::vf08  size=66  [class]
void __fastcall cRfff::vf08(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    FUN_00a54c70();
    FUN_00dd4920(iVar1);
    param_1[0x20] = 0;
  }
  FUN_00a71970();
  (**(code **)(*param_1 + 0x18))();
  FUN_00dd7270();
  return;
}

// 00A7A5D0  cRfff::vf00  size=28  [class]
void cRfff::vf00(void)

{
  FUN_00dd7240();
  FUN_00a75e00(0x20);
  FUN_00a71970();
  return;
}

// 00A7BA70  cRfff::vf14  size=62  [class]
undefined4 * __thiscall cRfff::vf14(undefined4 *param_1,byte param_2)

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

