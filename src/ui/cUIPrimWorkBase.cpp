// src/ui/cUIPrimWorkBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCAA70..00CCAB70, 3 functions

#include "types.h"

// 00CCAA70  cUIPrimWorkBase::cUIPrimWorkBase  size=235  [class]
undefined4 * __fastcall cUIPrimWorkBase::cUIPrimWorkBase(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 1;
  param_1[0x1e] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x35] = 0;
  param_1[0x39] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  iVar1 = FUN_00f98a90();
  param_1[0x36] = -0.5 / (float)iVar1;
  iVar1 = FUN_00f98aa0();
  param_1[0x3a] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0xffffffff;
  param_1[0x37] = -0.5 / (float)iVar1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  return param_1;
}

// 00CCAB60  cUIPrimWorkBase::vf10  size=3  [class]
undefined4 cUIPrimWorkBase::vf10(void)

{
  return 0;
}

// 00CCAB70  cUIPrimWorkBase::vf00  size=53  [class]
undefined4 * __thiscall cUIPrimWorkBase::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

