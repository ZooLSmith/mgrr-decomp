// src/managers/triggermanager/cActPlKgkStop.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C88950..00C94B50, 7 functions

#include "mgrr.h"

// 00C88950  Trigger::cActPlKgkStop::vf18  size=102  [class]
undefined4 Trigger::cActPlKgkStop::vf18(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_01bea094 & 0x20000) != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(1);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
      if (piVar1 != (int *)0x0) {
        puVar3 = &DAT_01b35420;
        (**(code **)(*piVar1 + 4))(&DAT_01b35420);
        iVar2 = FUN_00dd6d80(puVar3);
        if (iVar2 != 0) {
          FUN_005f5060();
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

// 00C8F930  Trigger::cActPlKgkStop::vf08  size=1  [class]
void Trigger::cActPlKgkStop::vf08(void)

{
  return;
}

// 00C8F940  Trigger::cActPlKgkStop::vf0C  size=1  [class]
void Trigger::cActPlKgkStop::vf0C(void)

{
  return;
}

// 00C8F950  Trigger::cActPlKgkStop::vf10  size=1  [class]
void Trigger::cActPlKgkStop::vf10(void)

{
  return;
}

// 00C8F960  Trigger::cActPlKgkStop::vf14  size=1  [class]
void Trigger::cActPlKgkStop::vf14(void)

{
  return;
}

// 00C94B40  Trigger::cActPlKgkStop::vf00  size=6  [class]
undefined * Trigger::cActPlKgkStop::vf00(void)

{
  return &DAT_01dbe2c8;
}

// 00C94B50  Trigger::cActPlKgkStop::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlKgkStop::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

