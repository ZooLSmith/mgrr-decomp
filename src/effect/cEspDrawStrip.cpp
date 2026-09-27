// src/effect/cEspDrawStrip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CD790..00ED6050, 3 functions

#include "mgrr.h"
#include "cEspDrawStrip.h"

// 009CD790  cEspDrawStrip::cEspDrawStrip  size=74  [class]
undefined4 * __fastcall cEspDrawStrip::cEspDrawStrip(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  param_1[0x5c] = 0;
  return param_1;
}

// 009D5530  cEspDrawStrip::vf00  size=75  [class]
undefined4 * __thiscall cEspDrawStrip::vf00(undefined4 *param_1,byte param_2)

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

// 00ED6050  cEspDrawStrip::draw  size=191  [class]
void __fastcall cEspDrawStrip::draw(int param_1)

{
  FUN_00f45d30(0);
  FUN_00f458a0();
  if (*(int *)(param_1 + 0x170) == 0) {
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,param_1 + 0xd0);
    FUN_00f99010(1,param_1 + 0xf8);
    FUN_00f9dfb0(5);
  }
  else {
    FUN_00f98f80(&DAT_01eddfa4);
    FUN_00f99010(0,param_1 + 0xd0);
    FUN_00f99010(1,param_1 + 0xf8);
    FUN_00f99010(2,param_1 + 0x120);
    FUN_00f99010(3,param_1 + 0x148);
    FUN_00f9dfb0(5);
  }
  FUN_00f45940();
  if (DAT_01be8608 != 0) {
    FUN_00fa45a0();
    FUN_00fa45a0();
    return;
  }
  return;
}

