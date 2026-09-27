// src/managers/triggermanager/cCondCodecSeqEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B410..00C85D10, 3 functions

#include "mgrr.h"

// 00C7B410  Trigger::cCondCodecSeqEnd::vf14  size=35  [class]
undefined4 __fastcall Trigger::cCondCodecSeqEnd::vf14(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00937e00(param_1 + 0x10);
  }
  return uVar1;
}

// 00C7B440  Trigger::cCondCodecSeqEnd::vf1C  size=34  [class]
void __thiscall Trigger::cCondCodecSeqEnd::vf1C(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 00C85D10  Trigger::cCondCodecSeqEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondCodecSeqEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

