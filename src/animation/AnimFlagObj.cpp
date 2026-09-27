// src/animation/AnimFlagObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00408FD0..00AB91A0, 6 functions

#include "mgrr.h"
#include "AnimFlagObj.h"

// 00408FD0  AnimFlagObj::vf40  size=98  [class]
undefined4 AnimFlagObj::vf40(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = MonThrowMoto::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  sVar1 = FUN_00dde2d0(0,600);
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,(float)(int)sVar1 * 0.016666668,0x3f800000);
  return 1;
}

// 00409040  AnimFlagObj::thunk_vf44  size=5  [class]
void __fastcall AnimFlagObj::thunk_vf44(int param_1)

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

// 00409050  AnimFlagObj::thunk_vf4C  size=5  [class]
void __fastcall AnimFlagObj::thunk_vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if ((((*(char *)(param_1 + 0x470) != '\0') && ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) &&
      (*(char *)(param_1 + 0x471) != '\0')) && (*(int *)(param_1 + 0xb28) != 0)) {
    return;
  }
  Bh0064::vf64();
  return;
}

// 00AB05A0  AnimFlagObj::AnimFlagObj  size=18  [class]
undefined4 * __fastcall AnimFlagObj::AnimFlagObj(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB05C0  AnimFlagObj::vf04  size=6  [class]
undefined * AnimFlagObj::vf04(void)

{
  return &DAT_01b34b44;
}

// 00AB91A0  AnimFlagObj::vf00  size=43  [class]
undefined4 __thiscall AnimFlagObj::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

