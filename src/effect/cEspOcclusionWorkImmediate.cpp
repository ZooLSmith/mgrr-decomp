// src/effect/cEspOcclusionWorkImmediate.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED84B0..00F3F9A0, 2 functions

#include "mgrr.h"
#include "cEspOcclusionWorkImmediate.h"

// 00ED84B0  cEspOcclusionWorkImmediate::draw  size=76  [class]
void __fastcall cEspOcclusionWorkImmediate::draw(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0xd0);
  if (iVar1 == -1) {
    FUN_00ed4580(param_1,&DAT_016db9a8,0xffffffff);
    return;
  }
  FUN_00eca020(iVar1);
  cEspDrawWork::draw();
  FUN_00ec6ac0(iVar1);
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4) = 1;
  return;
}

// 00F3F9A0  cEspOcclusionWorkImmediate::vf00  size=31  [class]
undefined4 * __thiscall cEspOcclusionWorkImmediate::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

