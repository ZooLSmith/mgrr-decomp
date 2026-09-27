// src/effect/cEspDrawWork_Emt10_Impl_Mask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDAEB0..00F3FB10, 2 functions

#include "mgrr.h"
#include "cEspDrawWork_Emt10_Impl_Mask.h"

// 00EDAEB0  cEspDrawWork_Emt10_Impl_Mask::vf04  size=126  [class]
void __fastcall cEspDrawWork_Emt10_Impl_Mask::vf04(int param_1)

{
  FUN_00f45d30(1);
  FUN_00f458a0();
  FUN_009ce3a0(param_1);
  FUN_00f98f80(&DAT_01eddfb0);
  FUN_00f99010(0,param_1 + 0xe0);
  FUN_00f99010(1,param_1 + 0x108);
  FUN_00f99010(2,param_1 + 0x130);
  FUN_00f99010(3,param_1 + 0x158);
  FUN_00f99090(param_1 + 0x180);
  FUN_00f9f6d0(4,*(undefined4 *)(param_1 + 0xd0));
  FUN_009ce3e0(param_1);
  return;
}

// 00F3FB10  cEspDrawWork_Emt10_Impl_Mask::vf00  size=86  [class]
undefined4 * __thiscall cEspDrawWork_Emt10_Impl_Mask::vf00(undefined4 *param_1,byte param_2)

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

