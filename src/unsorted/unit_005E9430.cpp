// src/unsorted/unit_005E9430.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E9430..005E94D0, 4 functions

#include "mgrr.h"

// 005E9430  FUN_005e9430  size=41  [run]
void __fastcall FUN_005e9430(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d467a0();
  *(undefined4 *)(param_1 + 0x938) = 1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x940) = 0x42700000;
  }
  return;
}

// 005E9460  FUN_005e9460  size=7  [run]
undefined4 __fastcall FUN_005e9460(int param_1)

{
  return *(undefined4 *)(param_1 + 0x938);
}

// 005E94A0  FUN_005e94a0  size=42  [run]
uint FUN_005e94a0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b353b4;
  (**(code **)(*param_1 + 4))(&DAT_01b353b4);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 005E94D0  FUN_005e94d0  size=42  [run]
uint FUN_005e94d0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b353bc;
  (**(code **)(*param_1 + 4))(&DAT_01b353bc);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

