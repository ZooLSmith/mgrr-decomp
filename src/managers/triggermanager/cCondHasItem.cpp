// src/managers/triggermanager/cCondHasItem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CCE0..00C865C0, 4 functions

#include "mgrr.h"

// 00C7CCE0  Trigger::cCondHasItem::vf10  size=1  [class]
void Trigger::cCondHasItem::vf10(void)

{
  return;
}

// 00C7CCF0  Trigger::cCondHasItem::vf14  size=13  [class]
void __fastcall Trigger::cCondHasItem::vf14(int param_1)

{
  FUN_00951bf0(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7CD00  Trigger::cCondHasItem::vf1C  size=16  [class]
void __thiscall Trigger::cCondHasItem::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C865C0  Trigger::cCondHasItem::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondHasItem::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

