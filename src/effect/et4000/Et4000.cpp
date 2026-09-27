// src/effect/et4000/Et4000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D7630..00AB8220, 5 functions

#include "types.h"

// 005D7630  Et4000::vf40  size=91  [class]
undefined4 __fastcall Et4000::vf40(int *param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    local_8 = 0;
    local_4 = 0;
    local_c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x20))();
      param_1[0x21c] = 0;
      return 1;
    }
  }
  return 0;
}

// 005D7690  Et4000::vf44  size=127  [class]
void Et4000::vf44(void)

{
  int iVar1;
  
  FUN_00a8c9b0(0,0x10d,0,0);
  FUN_00a8c9b0(0,0x10c,0,0);
  FUN_00a8c9b0(0,0x107,0,0);
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,0x2b2,0,0);
  }
  Behavior::vf44();
  return;
}

// 00AA6A50  Et4000::Et4000  size=18  [class]
undefined4 * __fastcall Et4000::Et4000(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6A70  Et4000::vf04  size=6  [class]
undefined * Et4000::vf04(void)

{
  return &DAT_01b352c0;
}

// 00AB8220  Et4000::vf00  size=105  [class]
undefined4 * __thiscall Et4000::vf00(undefined4 *param_1,byte param_2)

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

