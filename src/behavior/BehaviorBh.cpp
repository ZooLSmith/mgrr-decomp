// src/behavior/BehaviorBh.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC79B0..00AC7B20, 4 functions

#include "mgrr.h"
#include "BehaviorBh.h"

// 00AC79B0  BehaviorBh::startup  size=247  [class]
undefined4 __fastcall BehaviorBh::startup(int *param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::startup();
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

// 00AC7AB0  BehaviorBh::BehaviorBh  size=96  [class]
undefined4 * __fastcall BehaviorBh::BehaviorBh(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  FUN_00a7c930();
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c950();
  return param_1;
}

// 00AC7B10  BehaviorBh::vf04  size=6  [class]
undefined * BehaviorBh::vf04(void)

{
  return &DAT_01be9c5c;
}

// 00AC7B20  BehaviorBh::destruct  size=76  [class]
undefined4 __thiscall BehaviorBh::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

