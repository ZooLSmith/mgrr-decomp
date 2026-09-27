// src/unsorted/unit_00D77BC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77BC0..00D77CC0, 5 functions

#include "mgrr.h"

// 00D77BC0  FUN_00d77bc0  size=41  [run]
void __fastcall FUN_00d77bc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x35c) = 1;
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_00900a90(*(undefined4 *)(*(int *)(param_1 + 0x37c) + 0x44));
  }
  return;
}

// 00D77BF0  FUN_00d77bf0  size=91  [run]
undefined4 __thiscall FUN_00d77bf0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x438);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8) * 2) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8) * 2;
    do {
      if ((((piVar3[1] != 0) && (param_3 != 0)) && (piVar3[1] == param_3)) || (*piVar3 == param_2))
      {
        return 1;
      }
      piVar3 = piVar3 + 2;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00D77C50  FUN_00d77c50  size=50  [run]
void __thiscall FUN_00d77c50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3f4) = param_2;
  *(undefined4 *)(param_1 + 0x3f8) = param_3;
  *(undefined4 *)(param_1 + 0x3f0) = param_2;
  iVar1 = FUN_00a7c8a0();
  *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(iVar1 + 0x4b4);
  return;
}

// 00D77C90  FUN_00d77c90  size=42  [run]
void __thiscall FUN_00d77c90(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x400) = *param_2;
  *(undefined4 *)(param_1 + 0x404) = param_2[1];
  *(undefined4 *)(param_1 + 0x408) = param_2[2];
  *(undefined4 *)(param_1 + 0x40c) = param_2[3];
  return;
}

// 00D77CC0  FUN_00d77cc0  size=36  [run]
void __thiscall FUN_00d77cc0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x368);
  *(undefined4 *)(iVar1 + 0x30) = *param_2;
  *(undefined4 *)(iVar1 + 0x34) = param_2[1];
  *(undefined4 *)(iVar1 + 0x38) = param_2[2];
  *(undefined4 *)(iVar1 + 0x3c) = param_2[3];
  return;
}

