// src/effect/et0200/Et0200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D71B0..00AB8120, 9 functions

#include "types.h"

// 005D71B0  Et0200::vf44  size=16  [class]
void Et0200::vf44(void)

{
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 005D71C0  Et0200::vf48  size=1  [class]
void Et0200::vf48(void)

{
  return;
}

// 005D71D0  Et0200::vf4C  size=18  [class]
void __fastcall Et0200::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x005d71e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 005D71F0  Et0200::vf50  size=33  [class]
void __fastcall Et0200::vf50(int param_1)

{
  FUN_00a93170();
  Behavior::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 005D7220  Et0200::vf54  size=26  [class]
void __fastcall Et0200::vf54(int param_1)

{
  Behavior::vf54();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f7700(param_1);
  }
  return;
}

// 005D7260  Et0200::vf40  size=152  [class]
undefined4 __fastcall Et0200::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00de4550("_col.hkx",0);
  if (iVar2 != 0) {
    iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(int *)(param_1 + 0x7b0) = iVar3;
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4f0);
      uVar4 = FUN_00de46d0("_col.hkx",0);
      FUN_008f6410(uVar1,iVar2,uVar4);
      if ((*(uint *)(param_1 + 0x364) & 0x2000000) == 0) {
        FUN_008f2ea0();
      }
    }
  }
  return 1;
}

// 00AA69F0  Et0200::Et0200  size=18  [class]
undefined4 * __fastcall Et0200::Et0200(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6A10  Et0200::vf04  size=6  [class]
undefined * Et0200::vf04(void)

{
  return &DAT_01b352b4;
}

// 00AB8120  Et0200::vf00  size=105  [class]
undefined4 * __thiscall Et0200::vf00(undefined4 *param_1,byte param_2)

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
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

