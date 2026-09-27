// src/boss/bm6041/Bm6041.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00604370..00AB9A60, 4 functions

#include "mgrr.h"
#include "Bm6041.h"

// 00604370  Bm6041::vf30  size=66  [class]
void __fastcall Bm6041::vf30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x4ec);
  iVar2 = FUN_00e03ea0("block");
  if ((iVar1 == iVar2) && (DAT_018b9174 == 0xc30)) {
    piVar3 = (int *)FUN_00a6e640();
    (**(code **)(*piVar3 + 0x48))(10,2);
  }
  Bh0056::vf30();
  return;
}

// 00AB1740  Bm6041::Bm6041  size=18  [class]
undefined4 * __fastcall Bm6041::Bm6041(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB1760  Bm6041::vf04  size=6  [class]
undefined * Bm6041::vf04(void)

{
  return &DAT_01b354f4;
}

// 00AB9A60  Bm6041::destruct  size=43  [class]
undefined4 __thiscall Bm6041::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

