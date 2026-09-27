// src/misc/P458AtqScr.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00415A90..00AB07F0, 11 functions

#include "mgrr.h"
#include "P458AtqScr.h"

// 00415A90  P458AtqScr::startup  size=65  [class]
undefined4 __fastcall P458AtqScr::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorBm::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 1;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  return 1;
}

// 00415AE0  P458AtqScr::vf4C  size=5  [class]
void __fastcall P458AtqScr::vf4C(int *param_1)

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

// 00415AF0  P458AtqScr::thunk_vf44  size=5  [class]
void __fastcall P458AtqScr::thunk_vf44(int param_1)

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

// 00415B00  FUN_00415b00  size=233  [between]
void __fastcall FUN_00415b00(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x68))();
  fVar1 = *(float *)(iVar2 + 4) - (float)param_1[0x2d5];
  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
    if (-50.0 < fVar1) {
      if ((*(byte *)(param_1 + 0x2d1) & 1) == 0) {
        FUN_00aa92c0(1);
        param_1[0x2d1] = param_1[0x2d1] | 1;
      }
      if ((*(byte *)(param_1 + 0x2d1) & 2) != 0) {
        return;
      }
      FUN_00aa92c0(2);
      param_1[0x2d1] = param_1[0x2d1] | 2;
      return;
    }
    if (fVar1 <= -100.0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
    if (fVar1 < 50.0) {
      if ((*(byte *)(param_1 + 0x2d1) & 1) != 0) {
        return;
      }
      FUN_00aa92c0(1);
      param_1[0x2d1] = param_1[0x2d1] | 1;
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x2d1) & (byte)uVar3) == 0) {
    return;
  }
  FUN_00a8ca50(uVar3,0,0);
  param_1[0x2d1] = param_1[0x2d1] ^ uVar3;
  return;
}

// 00415BF0  FUN_00415bf0  size=28  [between]
void __fastcall FUN_00415bf0(int param_1)

{
  if ((*(byte *)(param_1 + 0xb44) & 1) == 0) {
    FUN_00aa92c0(1);
    *(uint *)(param_1 + 0xb44) = *(uint *)(param_1 + 0xb44) | 1;
  }
  return;
}

// 00415C10  FUN_00415c10  size=40  [between]
void __fastcall FUN_00415c10(int param_1)

{
  if ((*(byte *)(param_1 + 0xb44) & 1) != 0) {
    FUN_00a8ca50(1,0,0);
    *(uint *)(param_1 + 0xb44) = *(uint *)(param_1 + 0xb44) ^ 1;
  }
  return;
}

// 00415C40  FUN_00415c40  size=21  [between]
float10 __fastcall FUN_00415c40(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x68))();
  return (float10)*(float *)(iVar1 + 4) - (float10)(float)param_1[0x2d5];
}

// 00415CA0  P458AtqScr::vf48  size=68  [class]
void __fastcall P458AtqScr::vf48(int param_1)

{
  uint uVar1;
  
  Bm0201::thunk_vf48();
  if (*(int *)(param_1 + 0xb48) == 0) {
    uVar1 = FUN_00a55880(0,param_1 + 0xb50);
    *(uint *)(param_1 + 0xb48) = uVar1 & 0xff;
    if ((uVar1 & 0xff) == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0xb40) != 1) {
    return;
  }
  FUN_00415b00();
  return;
}

// 00AB07C0  P458AtqScr::P458AtqScr  size=18  [class]
undefined4 * __fastcall P458AtqScr::P458AtqScr(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB07E0  P458AtqScr::vf04  size=6  [class]
undefined * P458AtqScr::vf04(void)

{
  return &DAT_01b34c18;
}

// 00AB07F0  P458AtqScr::destruct  size=43  [class]
undefined4 __thiscall P458AtqScr::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

