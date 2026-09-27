// src/unsorted/unit_00843A20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00843A20..00843A80, 3 functions

#include "mgrr.h"

// 00843A20  FUN_00843a20  size=30  [run]
void FUN_00843a20(void)

{
  FUN_00a9d8a0();
  FUN_00a8c820();
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 00843A40  FUN_00843a40  size=29  [run]
void __fastcall FUN_00843a40(int param_1)

{
  float10 fVar1;
  
  FUN_00a92fb0();
  fVar1 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar1;
  BehaviorAppBase::vf48();
  return;
}

// 00843A80  FUN_00843a80  size=83  [run]
void __fastcall FUN_00843a80(int *param_1)

{
  float fVar1;
  
  if (param_1[0x2ad] == 0) {
    Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x00843acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  fVar1 = (float)param_1[0x2ae];
  param_1[0x2ae] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x2ad] = 0;
    FUN_009fdde0();
    return;
  }
  return;
}

