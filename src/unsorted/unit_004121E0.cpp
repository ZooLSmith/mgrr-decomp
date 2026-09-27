// src/unsorted/unit_004121E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004121E0..00412240, 2 functions

#include "mgrr.h"

// 004121E0  FUN_004121e0  size=50  [run]
void __thiscall FUN_004121e0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x884) != 0) {
    fVar1 = (float10)FUN_00928de0();
    if (fVar1 < (float10)(float)(undefined *)0x0 != (fVar1 == (float10)(float)(undefined *)0x0)) {
      FUN_00a8e5d0(param_1,param_2,0);
    }
  }
  return;
}

// 00412240  FUN_00412240  size=41  [run]
undefined4 __fastcall FUN_00412240(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBm::startup();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f1600(0x800000);
  }
  return 1;
}

