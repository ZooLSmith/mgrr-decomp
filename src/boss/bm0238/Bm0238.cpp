// src/boss/bm0238/Bm0238.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004119E0..00AB8FC0, 6 functions

#include "types.h"

// 004119E0  Bm0238::vf40  size=36  [class]
undefined4 __fastcall Bm0238::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0xc00) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return 1;
}

// 00411A10  Bm0238::vf44  size=5  [class]
void __fastcall Bm0238::vf44(int param_1)

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

// 00411A30  Bm0238::vf4C  size=174  [class]
void __fastcall Bm0238::vf4C(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  BehaviorBgBase::vf4C();
  if (*(char *)((int)param_1 + 0xc01) != '\0') goto LAB_00411ab0;
  iVar2 = param_1[0x13b];
  iVar1 = FUN_00e03ea0(&DAT_0163cc0c);
  if (iVar2 == iVar1) {
    uVar3 = 0x43;
LAB_00411a94:
    iVar2 = FUN_00c81c60(uVar3);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x300) = 1;
    }
  }
  else {
    iVar2 = param_1[0x13b];
    iVar1 = FUN_00e03ea0(&DAT_0163cc04);
    if (iVar2 == iVar1) {
      uVar3 = 0x44;
      goto LAB_00411a94;
    }
    iVar2 = param_1[0x13b];
    iVar1 = FUN_00e03ea0(&DAT_0163cbfc);
    if (iVar2 == iVar1) {
      uVar3 = 0x45;
      goto LAB_00411a94;
    }
  }
  *(undefined1 *)((int)param_1 + 0xc01) = 1;
LAB_00411ab0:
  if ((char)param_1[0x300] != '\0') {
    (**(code **)(*param_1 + 0x20))();
  }
  if ((param_1[0x2d0] != 0) && (param_1[0x2fa] == 0)) {
    FUN_009fdde0();
    return;
  }
  return;
}

// 00AB02C0  Bm0238::Bm0238  size=29  [class]
undefined4 * __fastcall Bm0238::Bm0238(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AB02E0  Bm0238::vf04  size=6  [class]
undefined * Bm0238::vf04(void)

{
  return &DAT_01b34ba8;
}

// 00AB8FC0  Bm0238::vf00  size=54  [class]
undefined4 __thiscall Bm0238::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

