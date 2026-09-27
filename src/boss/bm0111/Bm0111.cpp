// src/boss/bm0111/Bm0111.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00410D20..00AB8ED0, 8 functions

#include "mgrr.h"
#include "Bm0111.h"

// 00410D20  Bm0111::startup  size=12  [class]
bool Bm0111::startup(void)

{
  int iVar1;
  
  iVar1 = BehaviorBm::startup();
  return iVar1 != 0;
}

// 00410D30  Bm0111::vf4C  size=5  [class]
void __fastcall Bm0111::vf4C(int *param_1)

{
  float fVar1;
  
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  if (param_1[0x22c] != 0) {
    fVar1 = (float)param_1[0x22d] - 1.0;
    param_1[0x22d] = (int)fVar1;
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (param_1[0x27d] != 0)) {
    param_1[0x206] = 1;
  }
  return;
}

// 00410D40  Bm0111::vf50  size=1  [class]
void Bm0111::vf50(void)

{
  return;
}

// 00410D50  Bm0111::thunk_vf44  size=5  [class]
void __fastcall Bm0111::thunk_vf44(int param_1)

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

// 00410D60  Bm0111::vf30  size=118  [class]
void __fastcall Bm0111::vf30(int param_1)

{
  int iVar1;
  
  Bh0056::vf30();
  if (*(int *)(param_1 + 0x4ec) == DAT_01b34b84) {
    iVar1 = FUN_00c1a340(DAT_01b34b88,DAT_01b34b8c,DAT_01b34b90);
    if (iVar1 == 0) {
      iVar1 = FUN_00c19c00(DAT_01b34b88,DAT_01b34b8c,DAT_01b34b90);
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c8a0();
        if (iVar1 != 0) {
          FUN_00a8caf0(5,0,0,0);
        }
      }
    }
  }
  return;
}

// 00AB01B0  Bm0111::Bm0111  size=18  [class]
undefined4 * __fastcall Bm0111::Bm0111(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB01D0  Bm0111::vf04  size=6  [class]
undefined * Bm0111::vf04(void)

{
  return &DAT_01b34b80;
}

// 00AB8ED0  Bm0111::destruct  size=43  [class]
undefined4 __thiscall Bm0111::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

