// src/managers/triggermanager/cActStpFlagOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80680..00C939A0, 6 functions

#include "mgrr.h"

// 00C80680  Trigger::cActStpFlagOn::vf08  size=54  [class]
void __fastcall Trigger::cActStpFlagOn::vf08(int param_1)

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

// 00C8D130  Trigger::cActStpFlagOn::vf00  size=6  [class]
undefined * Trigger::cActStpFlagOn::vf00(void)

{
  return &DAT_01dbe43c;
}

// 00C8D150  Trigger::cActStpFlagOn::vf0C  size=1  [class]
void Trigger::cActStpFlagOn::vf0C(void)

{
  return;
}

// 00C8D160  Trigger::cActStpFlagOn::vf10  size=1  [class]
void Trigger::cActStpFlagOn::vf10(void)

{
  return;
}

// 00C8D170  Trigger::cActStpFlagOn::vf14  size=1  [class]
void Trigger::cActStpFlagOn::vf14(void)

{
  return;
}

// 00C939A0  Trigger::cActStpFlagOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActStpFlagOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

