// src/ui/cUIPrimWorkFan.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCC0B0..00CCC120, 4 functions

#include "mgrr.h"
#include "cUIPrimWorkFan.h"

// 00CCC0B0  cUIPrimWorkFan::cUIPrimWorkFan  size=32  [class]
undefined4 * __fastcall cUIPrimWorkFan::cUIPrimWorkFan(undefined4 *param_1)

{
  cUIPrimWorkBase::cUIPrimWorkBase();
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00CCC0D0  cUIPrimWorkFan::vf08  size=6  [class]
undefined4 cUIPrimWorkFan::vf08(void)

{
  return 6;
}

// 00CCC0E0  cUIPrimWorkFan::vf0C  size=10  [class]
int __fastcall cUIPrimWorkFan::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x130) + -2;
}

// 00CCC120  cUIPrimWorkFan::vf00  size=53  [class]
undefined4 * __thiscall cUIPrimWorkFan::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

