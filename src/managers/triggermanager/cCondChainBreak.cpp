// src/managers/triggermanager/cCondChainBreak.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AB40..00C85990, 3 functions

#include "mgrr.h"

// 00C7AB40  Trigger::cCondChainBreak::vf14  size=24  [class]
bool __fastcall Trigger::cCondChainBreak::vf14(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_00c1ace0(*(undefined4 *)(param_1 + 0x10));
  return cVar1 != '\0';
}

// 00C7AB60  Trigger::cCondChainBreak::vf1C  size=16  [class]
void __thiscall Trigger::cCondChainBreak::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85990  Trigger::cCondChainBreak::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondChainBreak::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

