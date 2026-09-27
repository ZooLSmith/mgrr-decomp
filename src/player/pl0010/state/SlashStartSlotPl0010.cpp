// src/player/pl0010/state/SlashStartSlotPl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B79DF0..00B84B70, 4 functions

#include "types.h"

// 00B79DF0  SlashStartSlotPl0010::vf10  size=1  [class]
void SlashStartSlotPl0010::vf10(void)

{
  return;
}

// 00B79E00  SlashStartSlotPl0010::vf14  size=1  [class]
void SlashStartSlotPl0010::vf14(void)

{
  return;
}

// 00B84AC0  SlashStartSlotPl0010::vf18  size=99  [class]
void __thiscall SlashStartSlotPl0010::vf18(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    puVar2 = &DAT_01dc53d8;
    (**(code **)*param_3)(&DAT_01dc53d8);
    iVar1 = FUN_00dd6d80(puVar2);
    if ((iVar1 != 0) && (param_2 == 0x11)) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x41a8) = param_3[1];
      return;
    }
  }
  if (param_2 == 0xe) {
    FUN_00dda360(0,0x3f800000,0x3f800000,2);
  }
  return;
}

// 00B84B70  SlashStartSlotPl0010::vf00  size=31  [class]
undefined4 * __thiscall SlashStartSlotPl0010::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

