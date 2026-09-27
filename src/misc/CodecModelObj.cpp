// src/misc/CodecModelObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005FF2F0..00AB8CE0, 7 functions

#include "mgrr.h"
#include "CodecModelObj.h"

// 005FF2F0  CodecModelObj::vf44  size=39  [class]
void __fastcall CodecModelObj::vf44(int param_1)

{
  Behavior::vf44();
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}

// 005FF320  CodecModelObj::vf4C  size=18  [class]
void __fastcall CodecModelObj::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x005ff330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 005FF340  CodecModelObj::vf50  size=16  [class]
void CodecModelObj::vf50(void)

{
  Behavior::vf50();
  FUN_00a93170();
  return;
}

// 005FF4D0  CodecModelObj::vf40  size=134  [class]
undefined4 __fastcall CodecModelObj::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    lib::AllocatedArray<Behavior::InstructionContainer>::
    AllocatedArray<Behavior::InstructionContainer>();
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x338) = 0xe;
      FUN_00a13340(0);
      if (*(int *)(param_1 + 0x4b0) == 0xf0700) {
        iVar2 = 0;
        iVar1 = 0;
        if (0 < *(short *)(param_1 + 0x32c)) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x518 + iVar2) = 2;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x560;
          } while (iVar1 < *(short *)(param_1 + 0x32c));
        }
      }
      *(undefined4 *)(param_1 + 0x54) = 0xc61c4000;
      return 1;
    }
  }
  return 0;
}

// 00AA6D90  CodecModelObj::CodecModelObj  size=18  [class]
undefined4 * __fastcall CodecModelObj::CodecModelObj(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6DB0  CodecModelObj::vf04  size=6  [class]
undefined * CodecModelObj::vf04(void)

{
  return &DAT_01b35430;
}

// 00AB8CE0  CodecModelObj::vf00  size=105  [class]
undefined4 * __thiscall CodecModelObj::vf00(undefined4 *param_1,byte param_2)

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

