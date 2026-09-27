// src/misc/esp120.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D06D0..009DF610, 4 functions

#include "mgrr.h"
#include "esp120.h"

// 009D06D0  esp120::vf04  size=25  [class]
undefined4 esp120::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  cEspModel::vf04(param_1,param_2,param_3);
  return 0;
}

// 009D06F0  esp120::vf08  size=5  [class]
void __fastcall esp120::vf08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
    FUN_00efb130(piVar1);
    FUN_00efbd40(piVar1);
    return;
  }
  *piVar1 = 0;
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

// 009D43F0  esp120::esp120  size=18  [class]
undefined4 * __fastcall esp120::esp120(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DF610  esp120::vf00  size=30  [class]
undefined4 __thiscall esp120::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

