// src/misc/cSampleCustomObjDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC5520..00CE4250, 3 functions

#include "types.h"

// 00CC5520  cSampleCustomObjDispParts::vf08  size=15  [class]
void __fastcall cSampleCustomObjDispParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CC5530  cSampleCustomObjDispParts::vf14  size=1  [class]
void cSampleCustomObjDispParts::vf14(void)

{
  return;
}

// 00CE4250  cSampleCustomObjDispParts::vf00  size=63  [class]
undefined4 * __thiscall cSampleCustomObjDispParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

