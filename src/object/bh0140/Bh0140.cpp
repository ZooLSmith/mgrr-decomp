// src/object/bh0140/Bh0140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B0B70..00AC7940, 5 functions

#include "mgrr.h"
#include "Bh0140.h"

// 005B0B70  Bh0140::vf2EC  size=1  [class]
void Bh0140::vf2EC(void)

{
  return;
}

// 00AAE9D0  Bh0140::Bh0140  size=18  [class]
undefined4 * __fastcall Bh0140::Bh0140(undefined4 *param_1)

{
  BehaviorBh::BehaviorBh();
  *param_1 = vftable;
  return param_1;
}

// 00AAE9F0  Bh0140::vf04  size=6  [class]
undefined * Bh0140::vf04(void)

{
  return &DAT_01b351d8;
}

// 00AB7680  Bh0140::destruct  size=54  [class]
undefined4 __thiscall Bh0140::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC7940  Bh0140::vf54  size=107  [class]
void __fastcall Bh0140::vf54(int param_1)

{
  undefined4 uVar1;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  Em0010DebrisTest::vf54();
  if (*(int *)(param_1 + 0xa88) != 0) {
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(local_24,0);
      FUN_00910ab0(uVar1);
    }
    FUN_00911e50(local_20);
    FUN_00912220(param_1 + 0x40,local_20);
  }
  return;
}

