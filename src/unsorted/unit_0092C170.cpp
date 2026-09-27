// src/unsorted/unit_0092C170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092C170..0092C2A0, 8 functions

#include "mgrr.h"

// 0092C170  FUN_0092c170  size=6  [run]
undefined4 FUN_0092c170(void)

{
  return DAT_01b35fa4;
}

// 0092C180  FUN_0092c180  size=29  [run]
void FUN_0092c180(void)

{
  if (DAT_01b35fa4 != (undefined4 *)0x0) {
    (**(code **)*DAT_01b35fa4)(1);
    DAT_01b35fa4 = (undefined4 *)0x0;
  }
  return;
}

// 0092C1E0  FUN_0092c1e0  size=27  [run]
void FUN_0092c1e0(void)

{
  if (DAT_01b35fb8 != (int *)0x0) {
    (**(code **)(*DAT_01b35fb8 + 0xc))(DAT_01b35fb4,0x15);
  }
  return;
}

// 0092C200  FUN_0092c200  size=18  [run]
void FUN_0092c200(void)

{
  if (DAT_01b35fb8 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0092c20f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01b35fb8 + 0x10))();
    return;
  }
  return;
}

// 0092C270  FUN_0092c270  size=14  [run]
void __fastcall FUN_0092c270(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_0100efa0(param_1);
  }
  return;
}

// 0092C280  FUN_0092c280  size=12  [run]
void __fastcall FUN_0092c280(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_0100f090();
    return;
  }
  return;
}

// 0092C290  FUN_0092c290  size=10  [run]
void FUN_0092c290(void)

{
  FUN_00dd7240();
  return;
}

// 0092C2A0  FUN_0092c2a0  size=10  [run]
void FUN_0092c2a0(void)

{
  FUN_00dd7270();
  return;
}

