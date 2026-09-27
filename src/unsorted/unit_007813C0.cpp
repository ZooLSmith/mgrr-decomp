// src/unsorted/unit_007813C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 007813C0..007813C0, 1 functions

#include "types.h"

// 007813C0  FUN_007813c0  size=567  [run]
void __fastcall FUN_007813c0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00757a80();
    FUN_00aa9280(0x2d);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x489] = 0x3f19999a;
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar2 = (float10)-1.0;
    }
    else {
      fVar2 = (float10)FUN_00e36a50(0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1f8);
    param_1[0x485] =
         (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar2 * (float10)60.0 *
                     (float10)0.9);
    (*UNRECOVERED_JUMPTABLE)(1);
    FUN_00751fb0(0);
    FUN_00aa92c0(0x22);
    param_1[0x5de] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x489] = 0x3f99999a;
      param_1[0x47d] = param_1[0x47d] & 0xffffffdf;
      uVar3 = 0x2e;
LAB_007814d7:
      FUN_00aa4120(uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
LAB_007814e4:
    FUN_00751d80();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x485];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 == 0) goto LAB_007814e4;
    FUN_00751fb0(1);
    uVar3 = 0x2f;
    goto LAB_007814d7;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4120(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8c9b0(0,0x22,0x3f800000,0);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x5de] = 0;
                    /* WARNING: Could not recover jumptable at 0x007815f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

