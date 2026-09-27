// src/effect/cEspDrawWork14.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED82B0..00F3F960, 3 functions

#include "mgrr.h"
#include "cEspDrawWork14.h"

// 00ED82B0  cEspDrawWork14::draw  size=192  [class]
void __fastcall cEspDrawWork14::draw(int param_1)

{
  undefined1 auStack_64 [4];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_64;
  FUN_00f9d720(0);
  FUN_009e0150(local_60,param_1);
  FUN_00f5c450(local_60);
  FUN_00f990e0(&DAT_01ee7eb0);
  FUN_00f458a0();
  FUN_00f98df0(*(undefined4 *)(param_1 + 0xb0));
  FUN_00f98f80(&DAT_01eddf74);
  FUN_00f99010(0,param_1 + 0xd0);
  FUN_00f99010(1,param_1 + 0xf8);
  FUN_00f9dfb0(3);
  FUN_00f45940();
  if (DAT_01be8608 != 0) {
    FUN_00fa45a0();
    FUN_00fa45a0();
  }
  __security_check_cookie(local_14 ^ (uint)auStack_64);
  return;
}

// 00F3B4D0  cEspDrawWork14::cEspDrawWork14  size=42  [class]
undefined4 * __fastcall cEspDrawWork14::cEspDrawWork14(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  return param_1;
}

// 00F3F960  cEspDrawWork14::vf00  size=53  [class]
undefined4 * __thiscall cEspDrawWork14::vf00(undefined4 *param_1,byte param_2)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

