// src/misc/cMsgPrimWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCD350..00CCD390, 3 functions

#include "types.h"

// 00CCD350  cMsgPrimWork::vf08  size=6  [class]
undefined4 cMsgPrimWork::vf08(void)

{
  return 4;
}

// 00CCD360  cMsgPrimWork::vf0C  size=9  [class]
int __fastcall cMsgPrimWork::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x130) * 2;
}

// 00CCD390  cMsgPrimWork::vf00  size=47  [class]
undefined4 * __thiscall cMsgPrimWork::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

