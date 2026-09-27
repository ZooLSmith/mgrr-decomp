// src/player/pl0013/Pl0013.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAB550..00B78E70, 6 functions

#include "types.h"

// 00AAB550  Pl0013::vf04  size=6  [class]
undefined * Pl0013::vf04(void)

{
  return &DAT_01be9d80;
}

// 00AB6450  Pl0013::vf00  size=30  [class]
undefined4 __thiscall Pl0013::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_31();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B78E20  Pl0013::vf44  size=23  [class]
void Pl0013::vf44(void)

{
  FUN_00a944d0();
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 00B78E40  Pl0013::vf4C  size=18  [class]
void __fastcall Pl0013::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x00b78e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 00B78E60  Pl0013::vf50  size=16  [class]
void Pl0013::vf50(void)

{
  FUN_00a93170();
  BehaviorAppBase::vf50();
  return;
}

// 00B78E70  Pl0013::vf40  size=159  [class]
undefined4 __fastcall Pl0013::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 != 0) {
    uVar2 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar2);
    FUN_00a9f3c0(param_1 + 0x494,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      local_8 = 0;
      local_4 = 0;
      local_c = 1;
      iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
              StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0xa00) = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}

