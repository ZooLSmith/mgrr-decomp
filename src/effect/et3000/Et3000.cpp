// src/effect/et3000/Et3000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E3B50..00AB8300, 13 functions

#include "mgrr.h"
#include "Et3000.h"

// 005E3B50  Et3000::FreeObjectiveSlot::vf10  size=1  [class]
void Et3000::FreeObjectiveSlot::vf10(void)

{
  return;
}

// 005E3B60  Et3000::FreeObjectiveSlot::vf14  size=1  [class]
void Et3000::FreeObjectiveSlot::vf14(void)

{
  return;
}

// 005E3B80  FUN_005e3b80  size=55  [between]
void FUN_005e3b80(void)

{
  FUN_00a8c9b0(0,0xbb,0,0);
  FUN_00a8c9b0(0,0xbc,0,0);
  return;
}

// 005E3BC0  FUN_005e3bc0  size=55  [between]
void FUN_005e3bc0(void)

{
  FUN_00a8c9b0(0,0xbb,0,0);
  FUN_00a8c9b0(0,0xbc,0,0);
  return;
}

// 005E3C00  Et3000::vf44  size=137  [class]
void __fastcall Et3000::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00d8a1d0(0x32,*(int *)(param_1 + 0x870));
    FUN_00d8a1d0(0x35,*(undefined4 *)(param_1 + 0x870));
    FUN_00d8a1d0(0x36,*(undefined4 *)(param_1 + 0x870));
    FUN_00d8a1d0(0x37,*(undefined4 *)(param_1 + 0x870));
    if (*(undefined4 **)(param_1 + 0x870) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x870))(1);
      *(undefined4 *)(param_1 + 0x870) = 0;
    }
  }
  if (*(int *)(param_1 + 0x874) == 1) {
    FUN_00a8c9b0(0,0xba,0,0);
  }
  Behavior::vf44();
  return;
}

// 005E3C90  Et3000::FreeObjectiveSlot::vf00  size=31  [class]
undefined4 * __thiscall Et3000::FreeObjectiveSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005E3CB0  FUN_005e3cb0  size=71  [between]
void __fastcall FUN_005e3cb0(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00a8c9b0(0,0xbc,0,0);
  uVar1 = FUN_004039a0(0xbb,param_1,0);
  FUN_00a8c930(0,uVar1);
  return;
}

// 005E3D00  Et3000::vf40  size=269  [class]
undefined4 __fastcall Et3000::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    local_168 = 0;
    local_164 = 0;
    local_16c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_16c);
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x4f0) + 0x58);
      *(int *)(param_1 + 0x874) = iVar1;
      if (iVar1 == 0) {
        uVar2 = FUN_004039a0(0xbb,param_1,0);
        FUN_00a8c930(0,uVar2);
        puVar3 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = FreeObjectiveSlot::vftable;
          puVar3[1] = param_1;
        }
        *(undefined4 **)(param_1 + 0x870) = puVar3;
        FUN_00d89ec0(0x32,puVar3);
        FUN_00d89ec0(0x35,*(undefined4 *)(param_1 + 0x870));
        FUN_00d89ec0(0x36,*(undefined4 *)(param_1 + 0x870));
        FUN_00d89ec0(0x37,*(undefined4 *)(param_1 + 0x870));
        return 1;
      }
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x870) = 0;
        uVar2 = FUN_004039a0(0xba,param_1,0);
        FUN_00a8c930(0,uVar2);
      }
      return 1;
    }
  }
  return 0;
}

// 005E3E10  FUN_005e3e10  size=71  [between]
void __fastcall FUN_005e3e10(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_00a8c9b0(0,0xbb,0,0);
  uVar1 = FUN_004039a0(0xbc,param_1,0);
  FUN_00a8c930(0,uVar1);
  return;
}

// 005E3E60  Et3000::FreeObjectiveSlot::vf18  size=109  [class]
void __thiscall Et3000::FreeObjectiveSlot::vf18(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01dc53d8;
    (**(code **)*param_3)(&DAT_01dc53d8);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_3;
  }
  if (*(int *)(uVar1 + 8) == *(int *)(*(int *)(param_1 + 4) + 0x4f0)) {
    switch(param_2) {
    case 0x32:
      FUN_005e3b80();
      return;
    case 0x35:
      FUN_005e3bc0();
      return;
    case 0x36:
      FUN_005e3e10();
      return;
    case 0x37:
      FUN_005e3cb0();
    }
  }
  return;
}

// 00AA6AB0  Et3000::Et3000  size=18  [class]
undefined4 * __fastcall Et3000::Et3000(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6AD0  Et3000::vf04  size=6  [class]
undefined * Et3000::vf04(void)

{
  return &DAT_01b35348;
}

// 00AB8300  Et3000::vf00  size=105  [class]
undefined4 * __thiscall Et3000::vf00(undefined4 *param_1,byte param_2)

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

