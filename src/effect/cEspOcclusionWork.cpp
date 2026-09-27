// src/effect/cEspOcclusionWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DE8C0..00ED8470, 2 functions

#include "mgrr.h"
#include "cEspOcclusionWork.h"

// 009DE8C0  cEspOcclusionWork::vf00  size=31  [class]
undefined4 * __thiscall cEspOcclusionWork::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED8470  cEspOcclusionWork::draw  size=61  [class]
void __fastcall cEspOcclusionWork::draw(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 == -1) {
    FUN_00ed4580(param_1,&DAT_016db968,0xffffffff);
    return;
  }
  FUN_00eca020(iVar1);
  cEspDrawWork::vf04();
  FUN_00ec6ac0(iVar1);
  return;
}

