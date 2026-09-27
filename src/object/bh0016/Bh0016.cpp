// src/object/bh0016/Bh0016.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040D280..00AB8D50, 4 functions

#include "types.h"

// 0040D280  Bh0016::vf2EC  size=32  [class]
void __fastcall Bh0016::vf2EC(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xe0))(0,"_hvk_1",0,0);
  }
  return;
}

// 00AAFED0  Bh0016::Bh0016  size=18  [class]
undefined4 * __fastcall Bh0016::Bh0016(undefined4 *param_1)

{
  BehaviorBh::BehaviorBh();
  *param_1 = vftable;
  return param_1;
}

// 00AAFEF0  Bh0016::vf04  size=6  [class]
undefined * Bh0016::vf04(void)

{
  return &DAT_01b34b64;
}

// 00AB8D50  Bh0016::vf00  size=54  [class]
undefined4 __thiscall Bh0016::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

