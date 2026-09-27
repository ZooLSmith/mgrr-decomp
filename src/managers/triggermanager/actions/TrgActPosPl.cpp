// src/managers/triggermanager/actions/TrgActPosPl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E920..00C7E990, 2 functions

#include "mgrr.h"

// 00C7E920  Trigger::Act::POS_PL  size=103  [class]
undefined4 __fastcall Trigger::Act::POS_PL(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa628);
    return 0;
  }
  local_20 = *(undefined4 *)(iVar1 + 8);
  local_1c = *(undefined4 *)(iVar1 + 0xc);
  local_18 = *(undefined4 *)(iVar1 + 0x10);
  local_14 = 0x3f800000;
  FUN_00a4ae90(&local_20,*(float *)(iVar1 + 0x14) * 0.017453292);
  return 1;
}

// 00C7E990  Trigger::Act::POS_PL_2  size=146  [class]
undefined4 __fastcall Trigger::Act::POS_PL_2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [12];
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa628);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),local_20);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016aa654,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  local_30 = 0;
  local_2c = local_14;
  local_28 = 0;
  local_14 = 0x3f800000;
  FUN_00a4d790(local_20,&local_30,0);
  return 1;
}

