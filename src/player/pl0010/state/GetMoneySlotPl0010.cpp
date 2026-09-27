// src/player/pl0010/state/GetMoneySlotPl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B79D80..00B84A40, 4 functions

#include "mgrr.h"
#include "GetMoneySlotPl0010.h"

// 00B79D80  GetMoneySlotPl0010::vf10  size=1  [class]
void GetMoneySlotPl0010::vf10(void)

{
  return;
}

// 00B79D90  GetMoneySlotPl0010::vf14  size=1  [class]
void GetMoneySlotPl0010::vf14(void)

{
  return;
}

// 00B79DA0  GetMoneySlotPl0010::vf00  size=45  [class]
undefined4 * __fastcall GetMoneySlotPl0010::vf00(undefined4 *param_1)

{
  byte unaff_retaddr;
  
  *param_1 = vftable;
  (**(code **)*param_1)(1);
  *param_1 = Slot::vftable;
  if ((unaff_retaddr & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B84A40  GetMoneySlotPl0010::vf18  size=113  [class]
void __thiscall GetMoneySlotPl0010::vf18(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 == 0xe) {
    if (param_3 != (undefined4 *)0x0) {
      puVar3 = &DAT_01dc53d8;
      (**(code **)*param_3)(&DAT_01dc53d8);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && (param_3[2] != 0)) {
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x238))();
        }
      }
    }
    if (*(int *)(param_1 + 4) != 0) {
      piVar2 = (int *)(*(int *)(param_1 + 4) + 0x3bd0);
      *piVar2 = *piVar2 + 1;
      FUN_00dda360(0,0x3f800000,0x3f800000,10);
    }
  }
  return;
}

