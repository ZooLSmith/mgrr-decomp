// src/effect/cEspDrawWork44_PT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDA140..00F3FA70, 3 functions

#include "types.h"

// 00EDA140  cEspDrawWork44_PT::vf04  size=73  [class]
void __fastcall cEspDrawWork44_PT::vf04(int param_1)

{
  FUN_00f45d30(0);
  FUN_00f458a0();
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f99010(0,param_1 + 0xd0);
  FUN_00f99010(1,param_1 + 0xf8);
  FUN_00f9dfb0(5);
  FUN_00f45940();
  return;
}

// 00F3B570  cEspDrawWork44_PT::cEspDrawWork44_PT  size=42  [class]
undefined4 * __fastcall cEspDrawWork44_PT::cEspDrawWork44_PT(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  return param_1;
}

// 00F3FA70  cEspDrawWork44_PT::vf00  size=53  [class]
undefined4 * __thiscall cEspDrawWork44_PT::vf00(undefined4 *param_1,byte param_2)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

