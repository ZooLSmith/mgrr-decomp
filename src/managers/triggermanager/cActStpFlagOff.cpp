// src/managers/triggermanager/cActStpFlagOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80640..00C93960, 6 functions

#include "mgrr.h"

// 00C80640  Trigger::cActStpFlagOff::vf08  size=54  [class]
void __fastcall Trigger::cActStpFlagOff::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_STP_OBJ_018abc20)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x15 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C8D090  Trigger::cActStpFlagOff::vf00  size=6  [class]
undefined * Trigger::cActStpFlagOff::vf00(void)

{
  return &DAT_01dbe440;
}

// 00C8D0B0  Trigger::cActStpFlagOff::vf0C  size=1  [class]
void Trigger::cActStpFlagOff::vf0C(void)

{
  return;
}

// 00C8D0C0  Trigger::cActStpFlagOff::vf10  size=1  [class]
void Trigger::cActStpFlagOff::vf10(void)

{
  return;
}

// 00C8D0D0  Trigger::cActStpFlagOff::vf14  size=1  [class]
void Trigger::cActStpFlagOff::vf14(void)

{
  return;
}

// 00C93960  Trigger::cActStpFlagOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStpFlagOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

