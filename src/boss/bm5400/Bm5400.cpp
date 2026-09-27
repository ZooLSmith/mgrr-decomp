// src/boss/bm5400/Bm5400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00414930..00AC1170, 8 functions

#include "mgrr.h"
#include "Bm5400.h"

// 00414930  Bm5400::startup  size=41  [class]
undefined4 __fastcall Bm5400::startup(int param_1)

{
  int iVar1;
  
  iVar1 = P458AtqScr::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(undefined4 *)(param_1 + 0xb64) = 0;
  return 1;
}

// 00414960  Bm5400::vf4C  size=5  [class]
void __fastcall Bm5400::vf4C(int *param_1)

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

// 00414970  Bm5400::thunk_vf44  size=5  [class]
void __fastcall Bm5400::thunk_vf44(int param_1)

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

// 00414980  Bm5400::vf48  size=326  [class]
void __fastcall Bm5400::vf48(int param_1)

{
  byte bVar1;
  int iVar2;
  float10 fVar3;
  
  P458AtqScr::vf48();
  if ((*(byte *)(param_1 + 0x4c0) & 1) == 0) {
    FUN_00415c10();
    if ((*(byte *)(param_1 + 0xb64) & 1) != 0) {
      FUN_00a8ca50(3,0,0);
      *(uint *)(param_1 + 0xb64) = *(uint *)(param_1 + 0xb64) ^ 1;
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0xb60) & 1) == 0) {
      FUN_00aa92c0(3);
      *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) | 1;
      *(uint *)(param_1 + 0xb64) = *(uint *)(param_1 + 0xb64) | 1;
    }
    iVar2 = *(int *)(param_1 + 0x618);
    if (iVar2 == 1) {
      bVar1 = *(byte *)(param_1 + 0xb44);
      fVar3 = (float10)FUN_00415c40();
      if ((float10)0 < fVar3 == ((float10)0 == fVar3)) {
        if (fVar3 < (float10)-150.0 != (fVar3 == (float10)-150.0)) {
          FUN_00415c10();
        }
      }
      else if (fVar3 < (float10)50.0) {
        FUN_00415bf0();
      }
      if ((((bVar1 & 1) != 0) && ((*(byte *)(param_1 + 0xb44) & 1) == 0)) &&
         ((*(byte *)(param_1 + 0xb64) & 1) != 0)) {
        FUN_00a8ca50(3,0,0);
        *(uint *)(param_1 + 0xb64) = *(uint *)(param_1 + 0xb64) ^ 1;
      }
      *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) | 2;
    }
    else if (iVar2 == 2) {
      if ((*(byte *)(param_1 + 0xb60) & 4) == 0) {
        FUN_00a8ca50(1,0,0);
        *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) | 4;
        *(undefined4 *)(param_1 + 0x618) = 0;
        return;
      }
    }
    else if (iVar2 == 3) {
      FUN_00415bf0();
      *(undefined4 *)(param_1 + 0x618) = 0;
      return;
    }
  }
  return;
}

// 00AC1120  Bm5400::Bm5400  size=18  [class]
undefined4 * __fastcall Bm5400::Bm5400(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AC1140  Bm5400::vf04  size=6  [class]
undefined * Bm5400::vf04(void)

{
  return &DAT_01b34bf0;
}

// 00AC1150  FUN_00ac1150  size=22  [between]
void FUN_00ac1150(void)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  return;
}

// 00AC1170  Bm5400::destruct  size=43  [class]
undefined4 __thiscall Bm5400::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

