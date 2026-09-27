// src/misc/SubPhaseSlot.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00405670..00405800, 4 functions

#include "types.h"

// 00405670  SubPhaseSlot::vf10  size=1  [class]
void SubPhaseSlot::vf10(void)

{
  return;
}

// 00405680  SubPhaseSlot::vf14  size=1  [class]
void SubPhaseSlot::vf14(void)

{
  return;
}

// 00405690  SubPhaseSlot::vf00  size=31  [class]
undefined4 * __thiscall SubPhaseSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00405800  SubPhaseSlot::vf18  size=100  [class]
void __thiscall SubPhaseSlot::vf18(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = &DAT_01dc51cc;
    (**(code **)*param_3)(&DAT_01dc51cc);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      if (param_2 == 0x3b) {
        (**(code **)(**(int **)(param_1 + 4) + 0x2d8))(param_3[2],param_3[3]);
      }
      else if (param_2 == 0x3c) {
        (**(code **)(**(int **)(param_1 + 4) + 0x2dc))(param_3[2],param_3[3]);
        return;
      }
    }
  }
  return;
}

