// src/managers/triggermanager/cActGameFlagOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80090..00C93540, 6 functions

#include "mgrr.h"

// 00C80090  Trigger::cActGameFlagOff::vf08  size=54  [class]
void __fastcall Trigger::cActGameFlagOff::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_GAME_RECVCOMMU_018ab9a8)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x35 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C8C730  Trigger::cActGameFlagOff::vf00  size=6  [class]
undefined * Trigger::cActGameFlagOff::vf00(void)

{
  return &DAT_01dbe47c;
}

// 00C8C750  Trigger::cActGameFlagOff::vf0C  size=1  [class]
void Trigger::cActGameFlagOff::vf0C(void)

{
  return;
}

// 00C8C760  Trigger::cActGameFlagOff::vf10  size=1  [class]
void Trigger::cActGameFlagOff::vf10(void)

{
  return;
}

// 00C8C770  Trigger::cActGameFlagOff::vf14  size=1  [class]
void Trigger::cActGameFlagOff::vf14(void)

{
  return;
}

// 00C93540  Trigger::cActGameFlagOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActGameFlagOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

