// src/unsorted/unit_005D7560.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D7560..005D75A0, 2 functions

#include "types.h"

// 005D7560  FUN_005d7560  size=51  [run]
undefined4 __fastcall FUN_005d7560(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x874) = 0x41200000;
  *(undefined4 *)(param_1 + 0x878) = 0;
  return 1;
}

// 005D75A0  FUN_005d75a0  size=131  [run]
void __fastcall FUN_005d75a0(int param_1)

{
  int iVar1;
  
  FUN_00a8c9b0(0,0x10d,0,0);
  FUN_00a8c9b0(0,0x10c,0,0);
  FUN_00a8c9b0(0,0x107,0,0);
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,0x2b2,0,0);
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  return;
}

