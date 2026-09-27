// src/managers/triggermanager/actions/TrgActPlayerDie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C876C0..00C876C0, 1 functions

#include "mgrr.h"

// 00C876C0  Trigger::Act::PLAYER_DIE  size=114  [class]
undefined4 __fastcall Trigger::Act::PLAYER_DIE(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac720);
    return 0;
  }
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    FUN_00a8ee20(0);
    return 1;
  }
  puVar2 = &DAT_01be9c24;
  (**(code **)(*piVar1 + 4))(&DAT_01be9c24);
  FUN_00dd6d80(puVar2);
  FUN_00a8ee20(0);
  return 1;
}

