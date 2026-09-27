// src/effect/cEspDrawChain.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED6220..00F3F7B0, 3 functions

#include "mgrr.h"
#include "cEspDrawChain.h"

// 00ED6220  cEspDrawChain::vf04  size=105  [class]
void __fastcall cEspDrawChain::vf04(int param_1)

{
  FUN_00f45d30(1);
  FUN_00f458a0();
  FUN_009ce3a0(param_1);
  FUN_00f98f80(&DAT_01eddf8c);
  FUN_00f99010(0,param_1 + 0xd0);
  FUN_00f99010(1,param_1 + 0xf8);
  FUN_00f99010(2,param_1 + 0x148);
  FUN_00f99090(param_1 + 0x170);
  FUN_00f9f750(4);
  FUN_009ce3e0(param_1);
  return;
}

// 00F3B370  cEspDrawChain::cEspDrawChain  size=75  [class]
undefined4 * __fastcall cEspDrawChain::cEspDrawChain(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c880();
  FUN_00f9c7b0();
  return param_1;
}

// 00F3F7B0  cEspDrawChain::vf00  size=86  [class]
undefined4 * __thiscall cEspDrawChain::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
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

