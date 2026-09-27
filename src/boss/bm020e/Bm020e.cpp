// src/boss/bm020e/Bm020e.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00411680..00AB93B0, 6 functions

#include "mgrr.h"
#include "Bm020e.h"

// 00411680  Bm020e::vf40  size=105  [class]
undefined4 __fastcall Bm020e::vf40(int *param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_009fd240();
  if (DAT_018b9174 == 0xef1) {
    iVar1 = FUN_00e03ea0("PEF1_GAME2");
    param_1[0x2d0] = iVar1;
    (**(code **)(*param_1 + 0x20))();
    param_1[0x187] = 0;
    return 1;
  }
  param_1[0x2d0] = 0;
  param_1[0x187] = 2;
  return 1;
}

// 004116F0  Bm020e::vf44  size=5  [class]
void __fastcall Bm020e::vf44(int param_1)

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

// 00411700  Bm020e::vf48  size=79  [class]
void __fastcall Bm020e::vf48(int *param_1)

{
  int iVar1;
  
  Bm0201::thunk_vf48();
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00d4f040(param_1[0x2d0],1);
    if (iVar1 != 0) {
      FUN_00aa92c0(1);
      param_1[0x187] = param_1[0x187] + 1;
    }
  }
  else if (param_1[0x187] == 1) {
    (**(code **)(*param_1 + 0x1c))();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  return;
}

// 00AB0A20  Bm020e::Bm020e  size=18  [class]
undefined4 * __fastcall Bm020e::Bm020e(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0A40  Bm020e::vf04  size=6  [class]
undefined * Bm020e::vf04(void)

{
  return &DAT_01b34b9c;
}

// 00AB93B0  Bm020e::vf00  size=43  [class]
undefined4 __thiscall Bm020e::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

