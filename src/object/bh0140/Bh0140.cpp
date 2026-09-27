// src/object/bh0140/Bh0140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B0B70..00AC79B0, 6 functions

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

// 00AB7680  Bh0140::vf00  size=54  [class]
undefined4 __thiscall Bh0140::vf00(undefined4 param_1,byte param_2)

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

// 00AC79B0  Bh0140::vf40  size=247  [class]
undefined4 __fastcall Bh0140::vf40(int *param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x29e] = param_1[0x29e] | 0x80000000;
  param_1[0x29c] = 0;
  if (param_1[300] == 0xe009c) {
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0x10c))(0x1f,"hvk_smoke",0);
    }
    param_1[0x29e] = param_1[0x29e] | 0x4000000;
    param_1[0x29c] = 0x41200000;
    (**(code **)(*param_1 + 0x20))();
  }
  if (((param_1[300] == 0xe009b) || (param_1[300] == 0xe009d)) && (param_1[0x1ec] != 0)) {
    FUN_008f18c0(0x80000);
  }
  iVar1 = param_1[300];
  if ((((iVar1 == 0xe0040) || (iVar1 == 0xe00d4)) || (iVar1 == 0xe0121)) && (param_1[0x1ec] != 0)) {
    FUN_008f18c0(0x80000);
  }
  iVar1 = param_1[300];
  if ((((iVar1 == 0xe51d0) || (iVar1 == 0xe00a9)) || (iVar1 == 0xe00aa)) &&
     ((int *)param_1[0x1ec] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x1ec] + 0x108))(1);
  }
  return 1;
}

