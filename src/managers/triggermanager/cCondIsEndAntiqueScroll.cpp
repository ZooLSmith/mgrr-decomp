// src/managers/triggermanager/cCondIsEndAntiqueScroll.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D710..00C86A10, 4 functions

#include "mgrr.h"

// 00C7D710  Trigger::cCondIsEndAntiqueScroll::vf10  size=1  [class]
void Trigger::cCondIsEndAntiqueScroll::vf10(void)

{
  return;
}

// 00C7D720  Trigger::cCondIsEndAntiqueScroll::vf14  size=20  [class]
bool Trigger::cCondIsEndAntiqueScroll::vf14(void)

{
  char cVar1;
  
  cVar1 = FUN_00a55810();
  return cVar1 != '\0';
}

// 00C7D740  Trigger::cCondIsEndAntiqueScroll::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsEndAntiqueScroll::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86A10  Trigger::cCondIsEndAntiqueScroll::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsEndAntiqueScroll::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

