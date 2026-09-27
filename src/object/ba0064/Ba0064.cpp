// src/object/ba0064/Ba0064.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00404E10..00AB8F30, 9 functions

#include "mgrr.h"
#include "Ba0064.h"

// 00404E10  Ba0064::vf44  size=5  [class]
void __fastcall Ba0064::vf44(int param_1)

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

// 00404E20  Ba0064::vf50  size=25  [class]
void __fastcall Ba0064::vf50(int param_1)

{
  if (*(int *)(param_1 + 0xa74) != 0) {
    FUN_00a93170();
  }
  BehaviorBgBase::vf50();
  return;
}

// 00404E40  FUN_00404e40  size=12  [between]
void __fastcall FUN_00404e40(int param_1)

{
  *(int *)(param_1 + 0xa70) = *(int *)(param_1 + 0xa70) + 1;
  return;
}

// 00404E70  Ba0064::vf40  size=266  [class]
undefined4 __fastcall Ba0064::vf40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorBgBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"broken",0,0);
    FUN_008f1040(4);
    FUN_008f10e0(0x10000);
  }
  iVar1 = FUN_00a92f90();
  *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) | 2;
  iVar1 = FUN_00a92f90();
  *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) | 4;
  uVar2 = 1;
  FUN_00a92f90(1);
  FUN_00e26e50(uVar2);
  iVar1 = FUN_00a92f90();
  *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
  (**(code **)(*param_1 + 100))();
  switchD_0080dbae::default();
  FUN_00a8f640();
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  param_1[0x2a0] = param_1[0x14];
  param_1[0x2a1] = param_1[0x15];
  param_1[0x2a2] = param_1[0x16];
  param_1[0x2a3] = param_1[0x17];
  param_1[0x2a4] = param_1[0x24];
  param_1[0x2a5] = param_1[0x25];
  param_1[0x2a6] = param_1[0x26];
  param_1[0x2a7] = param_1[0x27];
  return 1;
}

// 00404F80  FUN_00404f80  size=185  [between]
void __fastcall FUN_00404f80(int *param_1)

{
  code *pcVar1;
  
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(1,"broken",0,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xe0))(0,"usually",0,0);
  }
  param_1[0x29c] = param_1[0x29c] + 2;
  pcVar1 = *(code **)(*param_1 + 0x1c);
  param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
  (*pcVar1)();
  param_1[0x25] = (int)((float)param_1[0x2a5] + 1.5707964);
  param_1[0x15] = (int)((float)param_1[0x2a1] + 2.0);
  FUN_00a9e290(&DAT_0163b734,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
  param_1[0x29d] = 1;
  return;
}

// 00405050  Ba0064::vf4C  size=39  [class]
void __fastcall Ba0064::vf4C(int *param_1)

{
  param_1[0xd9] = param_1[0xd9] | 0x10000;
  BehaviorBgBase::vf4C();
  if (param_1[0x29d] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00405073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  return;
}

// 00AA6DC0  Ba0064::Ba0064  size=18  [class]
undefined4 * __fastcall Ba0064::Ba0064(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  return param_1;
}

// 00AA6DE0  Ba0064::vf04  size=6  [class]
undefined * Ba0064::vf04(void)

{
  return &DAT_01b34b18;
}

// 00AB8F30  Ba0064::vf00  size=30  [class]
undefined4 __thiscall Ba0064::vf00(undefined4 param_1,byte param_2)

{
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

