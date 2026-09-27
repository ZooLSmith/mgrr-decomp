// src/unsorted/unit_00EE0AC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EE0AC0..00EE0BD0, 3 functions

#include "types.h"

// 00EE0AC0  FUN_00ee0ac0  size=45  [run]
void __fastcall FUN_00ee0ac0(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00EE0AF0  FUN_00ee0af0  size=214  [run]
undefined4 __thiscall FUN_00ee0af0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = FUN_00f51070(param_2 + 0xf8,8,(param_1[0x114] + -4) * param_1[0x115] * 2 + 4);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = param_1[0x122];
  iVar1 = param_1[0x11d];
  iVar2 = param_1[0x11e];
  if (param_1[0x11c] == 2) {
    param_1[0x11d] = 0x3f800000;
    param_1[0x11e] = 0x3f800000;
  }
  if (param_1[0x124] == 2) {
    param_1[0x122] = 0;
    param_1[0x123] = 0;
  }
  (**(code **)(*param_1 + 0x1c))(param_2 + 0xf8);
  param_1[0x11d] = unaff_ESI;
  param_1[0x11e] = iVar1;
  param_1[0x122] = iVar2;
  param_1[0x123] = iVar3;
  return 1;
}

// 00EE0BD0  FUN_00ee0bd0  size=308  [run]
undefined4 __thiscall FUN_00ee0bd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  if ((param_1[0x11c] == 0) && (param_1[0x124] == 0)) {
    *(undefined4 *)(param_2 + 0x170) = 0;
    return 1;
  }
  iVar4 = (param_1[0x114] + -4) * param_1[0x115] * 2 + 4;
  iVar3 = FUN_00f51070(param_2 + 0x120,8,iVar4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_2 + 0x170) = 1;
    iVar3 = param_1[0x122];
    iVar1 = param_1[0x11d];
    iVar2 = param_1[0x11e];
    if (param_1[0x11c] == 1) {
      param_1[0x11d] = 0x3f800000;
      param_1[0x11e] = 0x3f800000;
    }
    if (param_1[0x124] == 1) {
      param_1[0x122] = 0;
      param_1[0x123] = 0;
    }
    (**(code **)(*param_1 + 0x1c))(param_2 + 0x120);
    param_1[0x11d] = unaff_ESI;
    param_1[0x11e] = iVar1;
    param_1[0x122] = iVar2;
    param_1[0x123] = iVar3;
    iVar4 = FUN_00f51070(param_2 + 0x148,0x10,iVar4);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x24))(param_2 + 0x148);
      return 1;
    }
  }
  return 0;
}

