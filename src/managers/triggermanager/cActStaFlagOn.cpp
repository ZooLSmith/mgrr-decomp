// src/managers/triggermanager/cActStaFlagOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EA70..00C91780, 6 functions

#include "mgrr.h"

// 00C7EA70  Trigger::cActStaFlagOn::vf08  size=54  [class]
void __fastcall Trigger::cActStaFlagOn::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = FUN_00e03ea0((&PTR_s_STA_SCENARIO_018abb58)[uVar3 * 2]);
      if (*(int *)(iVar1 + 8) == iVar2) break;
      uVar3 = uVar3 + 1;
      if (0x18 < uVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = uVar3;
  }
  return;
}

// 00C89320  Trigger::cActStaFlagOn::vf00  size=6  [class]
undefined * Trigger::cActStaFlagOn::vf00(void)

{
  return &DAT_01dbe5bc;
}

// 00C89340  Trigger::cActStaFlagOn::vf0C  size=1  [class]
void Trigger::cActStaFlagOn::vf0C(void)

{
  return;
}

// 00C89350  Trigger::cActStaFlagOn::vf10  size=1  [class]
void Trigger::cActStaFlagOn::vf10(void)

{
  return;
}

// 00C89360  Trigger::cActStaFlagOn::vf14  size=1  [class]
void Trigger::cActStaFlagOn::vf14(void)

{
  return;
}

// 00C91780  Trigger::cActStaFlagOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStaFlagOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

