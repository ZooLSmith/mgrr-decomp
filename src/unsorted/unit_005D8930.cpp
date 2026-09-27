// src/unsorted/unit_005D8930.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D8930..005D8970, 2 functions

#include "mgrr.h"

// 005D8930  FUN_005d8930  size=22  [run]
void FUN_005d8930(void)

{
  FUN_00905ce0();
  Behavior::Behavior_96();
  return;
}

// 005D8970  FUN_005d8970  size=48  [run]
void __fastcall FUN_005d8970(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x162];
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c800();
    if (*(int *)(iVar1 + 0xb4) == iVar2) {
      (**(code **)(*param_1 + 0x300))();
    }
  }
  return;
}

