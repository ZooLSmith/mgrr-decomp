// src/effect/cEspDrawWork09_PTT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED7ED0..00F3F8D0, 3 functions

#include "types.h"

// 00ED7ED0  cEspDrawWork09_PTT::vf04  size=87  [class]
void __fastcall cEspDrawWork09_PTT::vf04(int param_1)

{
  FUN_00f45d30(0);
  FUN_00f458a0();
  FUN_00f98f80(&DAT_01eddf80);
  FUN_00f99010(0,param_1 + 0xd0);
  FUN_00f99010(1,param_1 + 0xf8);
  FUN_00f99010(2,param_1 + 0x120);
  FUN_00f9dfb0(5);
  FUN_00f45940();
  return;
}

// 00F3B450  cEspDrawWork09_PTT::cEspDrawWork09_PTT  size=53  [class]
undefined4 * __fastcall cEspDrawWork09_PTT::cEspDrawWork09_PTT(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  return param_1;
}

// 00F3F8D0  cEspDrawWork09_PTT::vf00  size=64  [class]
undefined4 * __thiscall cEspDrawWork09_PTT::vf00(undefined4 *param_1,byte param_2)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

