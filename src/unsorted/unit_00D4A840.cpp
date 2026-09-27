// src/unsorted/unit_00D4A840.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4A840..00D4A900, 3 functions

#include "types.h"

// 00D4A840  FUN_00d4a840  size=141  [run]
void FUN_00d4a840(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar2 + 0x58))(0x40f,0);
  piVar2 = (int *)FUN_00c18350();
  (**(code **)(*piVar2 + 0x5c))(0x40f);
  piVar2 = (int *)FUN_00c14bb0();
  iVar1 = *piVar2;
  uVar3 = FUN_00e03ea0("r40f_sky_sky_1",1);
  (**(code **)(iVar1 + 0x5c))(uVar3);
  piVar2 = (int *)FUN_00c14bb0();
  iVar1 = *piVar2;
  uVar3 = FUN_00e03ea0("r40f_sky_sky_3",1);
  (**(code **)(iVar1 + 0x5c))(uVar3);
  piVar2 = (int *)FUN_00c14bb0();
  iVar1 = *piVar2;
  uVar3 = FUN_00e03ea0("r40f_landscapes_black_ms",1);
  (**(code **)(iVar1 + 0x5c))(uVar3);
  return;
}

// 00D4A8D0  FUN_00d4a8d0  size=36  [run]
void __fastcall FUN_00d4a8d0(int param_1)

{
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_00a5be70(1);
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}

// 00D4A900  FUN_00d4a900  size=36  [run]
void __fastcall FUN_00d4a900(int param_1)

{
  if (*(int *)(param_1 + 0x14c) == 0) {
    FUN_00a5be70(0);
    *(undefined4 *)(param_1 + 0x14c) = 1;
  }
  return;
}

