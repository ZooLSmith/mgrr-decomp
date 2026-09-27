// src/managers/triggermanager/cActPlayerEffectOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80350..00C936A0, 7 functions

#include "mgrr.h"

// 00C80350  Trigger::cActPlayerEffectOff::vf08  size=1  [class]
void Trigger::cActPlayerEffectOff::vf08(void)

{
  return;
}

// 00C87FD0  Trigger::cActPlayerEffectOff::vf18  size=157  [class]
undefined4 __fastcall Trigger::cActPlayerEffectOff::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
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
      case 1:
        DAT_01dc08d4 = 0;
        return 1;
      case 2:
      case 3:
        DAT_01dc08bc = 0;
        return 1;
      case 4:
      case 5:
        DAT_01dc08c8 = 0;
        return 1;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        return 1;
      case 0xc:
        DAT_01dc08bc = 0;
        DAT_01dc08c8 = 0;
        DAT_01dc08d4 = 0;
        return 1;
      default:
        FUN_00dd5650(&DAT_016ab358);
        return 0;
      }
    }
  }
  return 0;
}

// 00C8CAF0  Trigger::cActPlayerEffectOff::vf00  size=6  [class]
undefined * Trigger::cActPlayerEffectOff::vf00(void)

{
  return &DAT_01dbe464;
}

// 00C8CB10  Trigger::cActPlayerEffectOff::vf0C  size=1  [class]
void Trigger::cActPlayerEffectOff::vf0C(void)

{
  return;
}

// 00C8CB20  Trigger::cActPlayerEffectOff::vf10  size=1  [class]
void Trigger::cActPlayerEffectOff::vf10(void)

{
  return;
}

// 00C8CB30  Trigger::cActPlayerEffectOff::vf14  size=1  [class]
void Trigger::cActPlayerEffectOff::vf14(void)

{
  return;
}

// 00C936A0  Trigger::cActPlayerEffectOff::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActPlayerEffectOff::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

