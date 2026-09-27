// src/misc/esp51DrawWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDAC40..00F3FAD0, 2 functions

#include "types.h"

// 00EDAC40  esp51DrawWork::vf04  size=144  [class]
void __fastcall esp51DrawWork::vf04(int param_1)

{
  undefined4 uVar1;
  
  FUN_00f458a0();
  FUN_00ec7ef0();
  FUN_00ec6930();
  FUN_00ec6940();
  uVar1 = FUN_00fa0740(0);
  FUN_00f5d370(uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00f5d390(uVar1);
  FUN_00f5d3b0(param_1 + 0x90);
  FUN_00f990e0(&DAT_01eecbf8);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f9dfb0(5);
  return;
}

// 00F3FAD0  esp51DrawWork::vf00  size=31  [class]
undefined4 * __thiscall esp51DrawWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

