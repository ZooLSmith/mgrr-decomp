// src/room/r017.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71140..00A7B530, 4 functions

#include "types.h"

// 00A71140  cR017::vf04  size=26  [class]
void __fastcall cR017::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A72AC0  cR017::vf08  size=66  [class]
void __fastcall cR017::vf08(int *param_1)

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

// 00A77C80  cR017::vf00  size=39  [class]
void __fastcall cR017::vf00(int param_1)

{
  FUN_00dd7240();
  FUN_00a73e80(0x20);
  FUN_00a71970();
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

// 00A7B530  cR017::vf14  size=62  [class]
undefined4 * __thiscall cR017::vf14(undefined4 *param_1,byte param_2)

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

