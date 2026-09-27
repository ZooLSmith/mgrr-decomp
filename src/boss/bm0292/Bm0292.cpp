// src/boss/bm0292/Bm0292.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00411FA0..00AB94D0, 7 functions

#include "types.h"

// 00411FA0  Bm0292::vf44  size=5  [class]
void __fastcall Bm0292::vf44(int param_1)

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

// 00411FB0  Bm0292::vf4C  size=73  [class]
void __fastcall Bm0292::vf4C(int param_1)

{
  float10 fVar1;
  
  BehaviorBgBase::vf4C();
  if (0.0 < *(float *)(param_1 + 0xb48)) {
    fVar1 = (float10)FUN_00a92ff0();
    fVar1 = (float10)*(float *)(param_1 + 0xb48) - fVar1 * (float10)0.016666668;
    *(float *)(param_1 + 0xb48) = (float)fVar1;
    if (fVar1 <= (float10)0) {
      *(float *)(param_1 + 0xb48) = (float)(float10)0;
      return;
    }
  }
  return;
}

// 00412060  Bm0292::vf40  size=88  [class]
undefined4 __fastcall Bm0292::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = Bm6041::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  if (0 < *(short *)(param_1 + 0x324)) {
    puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38);
    *puVar1 = *puVar1 | 1;
  }
  if (1 < *(short *)(param_1 + 0x324)) {
    puVar1 = (uint *)(*(int *)(param_1 + 800) + 0xa8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return 1;
}

// 004120C0  Bm0292::vf1D0  size=275  [class]
void __thiscall Bm0292::vf1D0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0xec) != 0) {
    if (*(int *)(param_1 + 0xb40) == 0) {
      if (0 < *(short *)(param_1 + 0x324)) {
        puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      if (1 < *(short *)(param_1 + 0x324)) {
        puVar1 = (uint *)(*(int *)(param_1 + 800) + 0xa8);
        *puVar1 = *puVar1 | 1;
      }
      FUN_00aa92c0(1);
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      *(undefined4 *)(param_1 + 0xb40) = 1;
      iVar2 = FUN_0093b4a0("GRAVURE",0,0);
      if (iVar2 == 0) {
        FUN_00dd5650(&DAT_0163cc70,"GRAVURE");
        return;
      }
    }
    else if (*(float *)(param_1 + 0xb48) <= 10.0) {
      iVar2 = FUN_00936700("GRAVURE");
      if ((iVar2 == 0) && (*(float *)(param_1 + 0xb48) <= 0.0)) {
        *(int *)(param_1 + 0xb44) = *(int *)(param_1 + 0xb44) + 1;
        if (*(int *)(param_1 + 0xb44) == 10) {
          iVar2 = FUN_0093b4a0("GRAVURE_10",0,0);
          if (iVar2 == 0) {
            FUN_00dd5650(&DAT_0163cc70,"GRAVURE_10");
          }
        }
        *(undefined4 *)(param_1 + 0xb48) = 0x3f800000;
      }
    }
  }
  return;
}

// 00AB0C00  Bm0292::Bm0292  size=18  [class]
undefined4 * __fastcall Bm0292::Bm0292(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0C20  Bm0292::vf04  size=6  [class]
undefined * Bm0292::vf04(void)

{
  return &DAT_01b34bb4;
}

// 00AB94D0  Bm0292::vf00  size=43  [class]
undefined4 __thiscall Bm0292::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

