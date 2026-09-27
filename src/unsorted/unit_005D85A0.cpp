// src/unsorted/unit_005D85A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D85A0..005D8680, 5 functions

#include "mgrr.h"

// 005D85A0  FUN_005d85a0  size=20  [run]
float10 __fastcall FUN_005d85a0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x7b4) != 0) {
    fVar1 = (float10)FUN_00916de0();
    return fVar1;
  }
  return (float10)0;
}

// 005D85C0  FUN_005d85c0  size=35  [run]
void __thiscall FUN_005d85c0(int param_1,undefined4 param_2)

{
  FUN_009f8ae0(param_2);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091c760(param_2);
  }
  return;
}

// 005D85F0  FUN_005d85f0  size=67  [run]
void __fastcall FUN_005d85f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x588) + 0x3c) != 0) {
    FUN_009f8ae0(*(undefined4 *)(*(int *)(param_1 + 0x588) + 0x40));
    if (*(int *)(param_1 + 0x7b4) != 0) {
      iVar1 = FUN_009f8d30();
      if (iVar1 != 0) {
        FUN_0091c760(*(undefined4 *)(*(int *)(param_1 + 0x588) + 0x40));
      }
    }
  }
  return;
}

// 005D8650  FUN_005d8650  size=31  [run]
float10 FUN_005d8650(void)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00a13390();
  fVar1 = (float10)1;
  fVar3 = fVar2 * (float10)0.2;
  if (fVar1 < fVar2 * (float10)0.2) {
    fVar3 = fVar1;
  }
  return fVar1 - fVar3;
}

// 005D8680  FUN_005d8680  size=27  [run]
float10 __fastcall FUN_005d8680(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0093dbd0(*(undefined4 *)(param_1 + 0x83c));
  if (iVar1 != 0) {
    return (float10)0;
  }
  return (float10)1;
}

