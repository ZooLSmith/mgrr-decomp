// src/boss/bm0270/Bm0270.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00411E80..00AB9360, 6 functions

#include "mgrr.h"
#include "Bm0270.h"

// 00411E80  Bm0270::vf44  size=5  [class]
void __fastcall Bm0270::vf44(int param_1)

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

// 00411E90  Bm0270::startup  size=136  [class]
undefined4 __fastcall Bm0270::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorBm::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_009fd240();
  uVar2 = FUN_00e03ea0("P710_BASE");
  *(undefined4 *)(param_1 + 0xb40) = uVar2;
  if (DAT_018b9174 == 0x710) {
    *(undefined4 *)(param_1 + 0xb44) = 1;
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      **(undefined4 **)(param_1 + 0x370) = 1;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
      return 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb44) = 0;
  }
  return 1;
}

// 00411F20  Bm0270::vf4C  size=120  [class]
void __fastcall Bm0270::vf4C(int param_1)

{
  int iVar1;
  
  BehaviorBgBase::vf4C();
  if ((*(int *)(param_1 + 0xb44) != 0) && (DAT_018b9174 == 0x710)) {
    iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0xb40),1);
    if (iVar1 != 0) {
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
      }
      *(undefined4 *)(param_1 + 0xb44) = 0;
    }
  }
  return;
}

// 00AB0990  Bm0270::Bm0270  size=18  [class]
undefined4 * __fastcall Bm0270::Bm0270(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB09B0  Bm0270::vf04  size=6  [class]
undefined * Bm0270::vf04(void)

{
  return &DAT_01b34bb0;
}

// 00AB9360  Bm0270::destruct  size=43  [class]
undefined4 __thiscall Bm0270::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

