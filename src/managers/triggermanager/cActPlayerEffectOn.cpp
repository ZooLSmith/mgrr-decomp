// src/managers/triggermanager/cActPlayerEffectOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80250..00C93670, 7 functions

#include "mgrr.h"

// 00C80250  Trigger::cActPlayerEffectOn::vf08  size=1  [class]
void Trigger::cActPlayerEffectOn::vf08(void)

{
  return;
}

// 00C80260  Trigger::cActPlayerEffectOn::vf18  size=185  [class]
undefined4 __fastcall Trigger::cActPlayerEffectOn::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 1;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab388);
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
    if (iVar3 != 0) {
      FUN_00a7c8a0();
      switch(*(undefined4 *)(iVar1 + 8)) {
      case 0:
        FUN_00b797d0();
        return 1;
      case 1:
        DAT_01dc08d8 = 1;
        return 1;
      case 2:
        FUN_0085c270();
        return 1;
      case 3:
        FUN_0085c2a0();
        return 1;
      case 4:
        DAT_01dc08c8 = 1;
        DAT_01dc08cc = 0;
        return 1;
      case 5:
        DAT_01dc08cc = 1;
        return 1;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        break;
      default:
        FUN_00dd5650(&DAT_016ab358);
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  return 0;
}

// 00C8CA50  Trigger::cActPlayerEffectOn::vf00  size=6  [class]
undefined * Trigger::cActPlayerEffectOn::vf00(void)

{
  return &DAT_01dbe468;
}

// 00C8CA70  Trigger::cActPlayerEffectOn::vf0C  size=1  [class]
void Trigger::cActPlayerEffectOn::vf0C(void)

{
  return;
}

// 00C8CA80  Trigger::cActPlayerEffectOn::vf10  size=1  [class]
void Trigger::cActPlayerEffectOn::vf10(void)

{
  return;
}

// 00C8CA90  Trigger::cActPlayerEffectOn::vf14  size=1  [class]
void Trigger::cActPlayerEffectOn::vf14(void)

{
  return;
}

// 00C93670  Trigger::cActPlayerEffectOn::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerEffectOn::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

