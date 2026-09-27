// src/misc/esp118.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0660..009EA550, 4 functions

#include "types.h"

// 009D0660  esp118::vf04  size=29  [class]
bool esp118::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_1,param_2,param_3);
  return iVar1 != 0;
}

// 009D43D0  esp118::esp118  size=18  [class]
undefined4 * __fastcall esp118::esp118(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DF5F0  esp118::vf00  size=30  [class]
undefined4 __thiscall esp118::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009EA550  esp118::vf10  size=16  [class]
void esp118::vf10(void)

{
  esp108::vf10();
  cEspDrawWork::cEspDrawWork_5();
  return;
}

