// src/misc/Slot.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004055E0..00D89890, 6 functions

#include "mgrr.h"
#include "Slot.h"

// 004055E0  Slot::vf00  size=31  [class]
undefined4 * __thiscall Slot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A8FC50  Slot::Slot_2  size=25  [class]
void __fastcall Slot::Slot_2(undefined4 *param_1)

{
  *param_1 = GetMoneySlotPlBaseDLC::vftable;
  (**(code **)*param_1)(1);
  *param_1 = vftable;
  return;
}

// 00B79D60  Slot::Slot  size=25  [class]
void __fastcall Slot::Slot(undefined4 *param_1)

{
  *param_1 = GetMoneySlotPl0010::vftable;
  (**(code **)*param_1)(1);
  *param_1 = vftable;
  return;
}

// 00D89870  Slot::vf04  size=7  [class]
void __fastcall Slot::vf04(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d89875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

// 00D89880  Slot::vf08  size=7  [class]
void __fastcall Slot::vf08(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d89885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

// 00D89890  Slot::vf0C  size=7  [class]
void __fastcall Slot::vf0C(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d89895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}

