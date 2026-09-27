// src/effect/cEspDrawWork13.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8170..00F3F910, 3 functions

#include "mgrr.h"
#include "cEspDrawWork13.h"

// 00ED8170  cEspDrawWork13::vf04  size=314  [class]
void __fastcall cEspDrawWork13::vf04(int param_1)

{
  FUN_00f45d30(0);
  FUN_00f458a0();
  FUN_009ce3a0(param_1);
  if (*(int *)(param_1 + 0x13c) == 0) {
    if (*(int *)(param_1 + 0x164) == 0) {
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00f99010(0,param_1 + 0xd0);
      FUN_00f99010(1,param_1 + 0xf8);
    }
    else {
      FUN_00f98f80(&DAT_01eddf8c);
      FUN_00f99010(0,param_1 + 0xd0);
      FUN_00f99010(1,param_1 + 0xf8);
      FUN_00f99010(2,param_1 + 0x148);
    }
  }
  else if (*(int *)(param_1 + 0x164) == 0) {
    FUN_00f98f80(&DAT_01eddf80);
    FUN_00f99010(0,param_1 + 0xd0);
    FUN_00f99010(1,param_1 + 0xf8);
    FUN_00f99010(2,param_1 + 0x120);
  }
  else {
    FUN_00f98f80(&DAT_01eddfa4);
    FUN_00f99010(0,param_1 + 0xd0);
    FUN_00f99010(1,param_1 + 0xf8);
    FUN_00f99010(2,param_1 + 0x120);
    FUN_00f99010(3,param_1 + 0x148);
  }
  FUN_00f9dfb0(5);
  FUN_00f45940();
  FUN_009ce3e0(param_1);
  return;
}

// 00F3B490  cEspDrawWork13::cEspDrawWork13  size=64  [class]
undefined4 * __fastcall cEspDrawWork13::cEspDrawWork13(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  return param_1;
}

// 00F3F910  cEspDrawWork13::vf00  size=75  [class]
undefined4 * __thiscall cEspDrawWork13::vf00(undefined4 *param_1,byte param_2)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

