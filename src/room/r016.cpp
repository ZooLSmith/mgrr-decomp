// src/room/r016.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A710F0..00A7B4F0, 4 functions

#include "types.h"

// 00A710F0  cR016::vf04  size=65  [class]
void __fastcall cR016::vf04(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    iVar1 = FUN_00c185c0(0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 1;
    }
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A72A70  cR016::vf08  size=66  [class]
void __fastcall cR016::vf08(int *param_1)

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

// 00A77C50  cR016::vf00  size=43  [class]
void __fastcall cR016::vf00(int param_1)

{
  FUN_00dd7240();
  FUN_00a73d00(0x20);
  FUN_00a71970();
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return;
}

// 00A7B4F0  cR016::vf14  size=62  [class]
undefined4 * __thiscall cR016::vf14(undefined4 *param_1,byte param_2)

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

