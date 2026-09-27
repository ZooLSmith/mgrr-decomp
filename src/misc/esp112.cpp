// src/misc/esp112.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0050..009DF530, 6 functions

#include "mgrr.h"
#include "esp112.h"

// 009D0050  esp112::vf04  size=29  [class]
bool esp112::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_1,param_2,param_3);
  return iVar1 != 0;
}

// 009D0070  esp112::thunk_vf08  size=5  [class]
void __fastcall esp112::thunk_vf08(int param_1)

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

// 009D0080  esp112::vf10  size=1  [class]
void esp112::vf10(void)

{
  return;
}

// 009D0090  esp112::vf14  size=1  [class]
void esp112::vf14(void)

{
  return;
}

// 009D4310  esp112::esp112  size=18  [class]
undefined4 * __fastcall esp112::esp112(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DF530  esp112::vf00  size=30  [class]
undefined4 __thiscall esp112::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

