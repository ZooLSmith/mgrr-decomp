// src/misc/GetMoneySlotPlBaseDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8FC70..00A9A140, 4 functions

#include "types.h"

// 00A8FC70  GetMoneySlotPlBaseDLC::vf10  size=1  [class]
void GetMoneySlotPlBaseDLC::vf10(void)

{
  return;
}

// 00A8FC80  GetMoneySlotPlBaseDLC::vf14  size=1  [class]
void GetMoneySlotPlBaseDLC::vf14(void)

{
  return;
}

// 00A8FC90  GetMoneySlotPlBaseDLC::vf00  size=45  [class]
undefined4 * __fastcall GetMoneySlotPlBaseDLC::vf00(undefined4 *param_1)

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

// 00A9A140  GetMoneySlotPlBaseDLC::vf18  size=113  [class]
void __thiscall GetMoneySlotPlBaseDLC::vf18(int param_1,int param_2,undefined4 *param_3)

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

