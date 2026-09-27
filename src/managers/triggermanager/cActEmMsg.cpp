// src/managers/triggermanager/cActEmMsg.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F230..00C92410, 6 functions

#include "mgrr.h"

// 00C7F230  Trigger::cActEmMsg::vf10  size=29  [class]
void __fastcall Trigger::cActEmMsg::vf10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00c15c50(*(int *)(param_1 + 4) + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}

// 00C8AC30  Trigger::cActEmMsg::vf08  size=1  [class]
void Trigger::cActEmMsg::vf08(void)

{
  return;
}

// 00C8AC40  Trigger::cActEmMsg::vf0C  size=1  [class]
void Trigger::cActEmMsg::vf0C(void)

{
  return;
}

// 00C8AC60  Trigger::cActEmMsg::vf14  size=1  [class]
void Trigger::cActEmMsg::vf14(void)

{
  return;
}

// 00C92400  Trigger::cActEmMsg::vf00  size=6  [class]
undefined * Trigger::cActEmMsg::vf00(void)

{
  return &DAT_01dbe0e8;
}

// 00C92410  Trigger::cActEmMsg::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEmMsg::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

