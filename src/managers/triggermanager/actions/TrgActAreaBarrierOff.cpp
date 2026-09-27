// src/managers/triggermanager/actions/TrgActAreaBarrierOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F730..00C7F730, 1 functions

#include "mgrr.h"

// 00C7F730  Trigger::Act::AREA_BARRIER_OFF  size=101  [class]
bool __fastcall Trigger::Act::AREA_BARRIER_OFF(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aae8c);
    return false;
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    iVar1 = FUN_00a7f600(*(undefined4 *)(iVar1 + 8));
  }
  else {
    iVar1 = FUN_00a18d70(*(int *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8));
  }
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x328))();
  }
  return iVar1 != 0;
}

