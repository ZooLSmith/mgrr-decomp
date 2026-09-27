// src/behavior/BehaviorTest.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAB8D0..00AC5480, 5 functions

#include "mgrr.h"
#include "BehaviorTest.h"

// 00AAB8D0  BehaviorTest::vf04  size=6  [class]
undefined * BehaviorTest::vf04(void)

{
  return &DAT_01be9c88;
}

// 00AB67B0  BehaviorTest::destruct  size=105  [class]
undefined4 * __thiscall BehaviorTest::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC53F0  BehaviorTest::startup  size=105  [class]
undefined4 __fastcall BehaviorTest::startup(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = BehaviorAppBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_009fd240();
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    uVar8 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0;
    uVar5 = 0x3f800000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 0;
    puVar2 = &DAT_0169f63c;
    FUN_00a92f90(&DAT_0169f63c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
    (**(code **)(*param_1 + 100))();
  }
  return 1;
}

// 00AC5460  BehaviorTest::vf4C  size=18  [class]
void __fastcall BehaviorTest::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x00ac5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 00AC5480  BehaviorTest::vf50  size=16  [class]
void BehaviorTest::vf50(void)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
  return;
}

