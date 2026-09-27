// src/unsorted/unit_009F0AB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F0AB0..009F0B50, 2 functions

#include "mgrr.h"

// 009F0AB0  FUN_009f0ab0  size=160  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f0ab0(void)

{
  int iVar1;
  
  FUN_009ec920();
  if (DAT_01b7a888 != 0) {
    DAT_01b7a890 = 0;
    if (DAT_01b7a894 != 0) {
      FUN_00dd48d0(DAT_01b7a888,0);
      DAT_01b7a894 = 0;
    }
    DAT_01b7a888 = 0;
    DAT_01b7a88c = 0;
  }
  iVar1 = 3;
  do {
    FUN_009d1ce0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_01b7a97c = 0;
  if (DAT_01b7a974 != 0) {
    DAT_01b7a97c = 0;
    if (DAT_01b7a980 != 0) {
      FUN_00dd48d0(DAT_01b7a974,0);
      DAT_01b7a980 = 0;
    }
    DAT_01b7a974 = 0;
    _DAT_01b7a978 = 0;
  }
  DAT_01b7885c = 0;
  FUN_00dd7270();
  return;
}

// 009F0B50  FUN_009f0b50  size=54  [run]
void FUN_009f0b50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 1) {
    FUN_009ec750();
    return;
  }
  if (iVar1 != 3) {
    if (iVar1 != 4) {
      FUN_009ec6e0();
      return;
    }
    FUN_009ec8c0();
    return;
  }
  EffectAttrSystem::CallPLParentForce();
  return;
}

