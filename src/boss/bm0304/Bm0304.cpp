// src/boss/bm0304/Bm0304.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00412490..00AB9080, 7 functions

#include "types.h"

// 00412490  Bm0304::vf40  size=114  [class]
undefined4 __fastcall Bm0304::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb78) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xb74) = 0xc1a40000;
  *(undefined4 *)(param_1 + 0xcb0) = 0x41a00000;
  *(undefined4 *)(param_1 + 0xcc0) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xcbc) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0xcb4) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0xcb8) = 0x40a00000;
  FUN_00d9c2d0(param_1 + 0x10);
  return 1;
}

// 00412510  Bm0304::vf50  size=25  [class]
void __fastcall Bm0304::vf50(int param_1)

{
  Bm0201::vf50();
  FUN_00d9c2d0(param_1 + 0x10);
  return;
}

// 00412530  Bm0304::thunk_vf44  size=5  [class]
void __fastcall Bm0304::thunk_vf44(int param_1)

{
  int iVar1;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
    FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int **)(param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x888) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    if (*(undefined4 **)(param_1 + 0x888) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x888))(1);
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
  }
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x884);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  if (*(int *)(param_1 + 0x9f4) != 0) {
    FUN_00983fd0(param_1);
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    if (*(int *)(param_1 + 0xa58) != -1) {
      FUN_00c5ad80(*(int *)(param_1 + 0xa58));
    }
    if (*(int *)(param_1 + 0xa5c) != -1) {
      FUN_00c4d100(*(int *)(param_1 + 0xa5c));
    }
  }
  FUN_009841c0(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  Behavior::vf44();
  return;
}

// 00412540  Bm0304::vf1D0  size=62  [class]
void Bm0304::vf1D0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8b0();
    iVar2 = FUN_00d95c60(uVar3);
    if (iVar2 != 0) {
      Bm0201::vf1D0(unaff_retaddr);
    }
  }
  return;
}

// 00AB03C0  Bm0304::Bm0304  size=18  [class]
undefined4 * __fastcall Bm0304::Bm0304(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB03E0  Bm0304::vf04  size=6  [class]
undefined * Bm0304::vf04(void)

{
  return &DAT_01b34bd4;
}

// 00AB9080  Bm0304::vf00  size=43  [class]
undefined4 __thiscall Bm0304::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

