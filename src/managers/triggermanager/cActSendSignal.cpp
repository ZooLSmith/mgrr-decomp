// src/managers/triggermanager/cActSendSignal.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C800D0..00C93580, 6 functions

#include "mgrr.h"

// 00C800D0  Trigger::cActSendSignal::vf08  size=54  [class]
void __fastcall Trigger::cActSendSignal::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_ON_SHOW_RADARMAP_018abcd0)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (4 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C8C7D0  Trigger::cActSendSignal::vf00  size=6  [class]
undefined * Trigger::cActSendSignal::vf00(void)

{
  return &DAT_01dbe478;
}

// 00C8C7F0  Trigger::cActSendSignal::vf0C  size=1  [class]
void Trigger::cActSendSignal::vf0C(void)

{
  return;
}

// 00C8C800  Trigger::cActSendSignal::vf10  size=1  [class]
void Trigger::cActSendSignal::vf10(void)

{
  return;
}

// 00C8C810  Trigger::cActSendSignal::vf14  size=1  [class]
void Trigger::cActSendSignal::vf14(void)

{
  return;
}

// 00C93580  Trigger::cActSendSignal::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSendSignal::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

