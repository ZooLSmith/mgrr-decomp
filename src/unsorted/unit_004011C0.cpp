// src/unsorted/unit_004011C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004011C0..00401350, 4 functions

#include "types.h"

// 004011C0  FUN_004011c0  size=26  [run]
void FUN_004011c0(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,10,param_2,&stack0x0000000c);
  return;
}

// 00401260  FUN_00401260  size=24  [run]
void __fastcall FUN_00401260(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  return;
}

// 00401290  FUN_00401290  size=26  [run]
LPCRITICAL_SECTION __fastcall FUN_00401290(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  return param_1;
}

// 00401350  FUN_00401350  size=29  [run]
void __fastcall FUN_00401350(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (LVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00401369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}

