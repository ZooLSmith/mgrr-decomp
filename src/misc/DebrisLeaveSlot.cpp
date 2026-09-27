// src/misc/DebrisLeaveSlot.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D89B0..005DA8D0, 4 functions

#include "mgrr.h"
#include "DebrisLeaveSlot.h"

// 005D89B0  DebrisLeaveSlot::vf10  size=1  [class]
void DebrisLeaveSlot::vf10(void)

{
  return;
}

// 005D89C0  DebrisLeaveSlot::vf14  size=1  [class]
void DebrisLeaveSlot::vf14(void)

{
  return;
}

// 005DA870  DebrisLeaveSlot::vf18  size=82  [class]
void __thiscall DebrisLeaveSlot::vf18(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_3 != (undefined4 *)0x0) {
    puVar4 = &DAT_01b35310;
    (**(code **)*param_3)(&DAT_01b35310);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      piVar1 = *(int **)(param_1 + 4);
      iVar2 = piVar1[0x162];
      if (iVar2 != 0) {
        iVar3 = FUN_00a7c800();
        if (*(int *)(iVar2 + 0xb4) == iVar3) {
          (**(code **)(*piVar1 + 0x300))();
        }
      }
    }
  }
  return;
}

// 005DA8D0  DebrisLeaveSlot::vf00  size=31  [class]
undefined4 * __thiscall DebrisLeaveSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

