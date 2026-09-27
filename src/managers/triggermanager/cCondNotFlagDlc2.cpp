// src/managers/triggermanager/cCondNotFlagDlc2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E810..00C86F10, 3 functions

#include "mgrr.h"

// 00C7E810  Trigger::cCondNotFlagDlc2::vf1C  size=16  [class]
void __thiscall Trigger::cCondNotFlagDlc2::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C86EF0  Trigger::cCondNotFlagDlc2::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotFlagDlc2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86F10  Trigger::cCondNotFlagDlc2::vf14  size=33  [class]
bool __fastcall Trigger::cCondNotFlagDlc2::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf68 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) == 0;
}

