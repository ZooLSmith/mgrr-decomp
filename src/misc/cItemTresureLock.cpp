// src/misc/cItemTresureLock.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E8D90..00AB9840, 6 functions

#include "types.h"

// 005E8D90  cItemTresureLock::vf40  size=92  [class]
void __fastcall cItemTresureLock::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::vf40();
  if (iVar1 == 0) {
    return;
  }
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(undefined4 *)(param_1 + 0x9f8) = 1;
  return;
}

// 005E8DF0  cItemTresureLock::vf44  size=15  [class]
void __fastcall cItemTresureLock::vf44(int param_1)

{
  *(undefined4 *)(param_1 + 0xa70) = 0;
  BehaviorBgBase::vf44();
  return;
}

// 005EAFB0  cItemTresureLock::vf2C  size=174  [class]
void __fastcall cItemTresureLock::vf2C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  if (((*(int *)(param_1 + 0xa70) != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 != 0)) &&
     (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar4 = &DAT_01b353b4;
    (**(code **)(*piVar3 + 4))(&DAT_01b353b4);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      *(undefined1 *)((int)piVar3 + 0xa73) = 1;
      FUN_00a8c9b0(0,2,0,0);
      piVar3[0x29e] = 0;
    }
  }
  Bh0056::vf2C();
  if (*(int *)(param_1 + 0x588) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7bc);
    iVar2 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar2 + 0x2c) = 1;
    *(undefined4 *)(iVar2 + 0x30) = uVar1;
    iVar2 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x7c0);
    *(undefined4 *)(iVar2 + 0x98) = 1;
  }
  return;
}

// 00AA6EA0  cItemTresureLock::cItemTresureLock  size=18  [class]
undefined4 * __fastcall cItemTresureLock::cItemTresureLock(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  return param_1;
}

// 00AA6EC0  cItemTresureLock::vf04  size=6  [class]
undefined * cItemTresureLock::vf04(void)

{
  return &DAT_01b353b8;
}

// 00AB9840  cItemTresureLock::vf00  size=30  [class]
undefined4 __thiscall cItemTresureLock::vf00(undefined4 param_1,byte param_2)

{
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

