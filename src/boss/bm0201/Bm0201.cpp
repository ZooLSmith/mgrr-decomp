// src/boss/bm0201/Bm0201.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00411650..00AE25F0, 7 functions

#include "types.h"

// 00411650  Bm0201::vf40  size=38  [class]
undefined4 __fastcall Bm0201::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x884) != 0) {
    FUN_00928d50(3);
  }
  return 1;
}

// 00AB0160  Bm0201::Bm0201  size=18  [class]
undefined4 * __fastcall Bm0201::Bm0201(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0180  Bm0201::vf04  size=6  [class]
undefined * Bm0201::vf04(void)

{
  return &DAT_01b34b98;
}

// 00AB8EA0  Bm0201::vf00  size=43  [class]
undefined4 __thiscall Bm0201::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC3E50  Bm0201::thunk_vf48  size=5  [class]
void __fastcall Bm0201::thunk_vf48(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  BehaviorDebrisActor::vf48();
  if ((((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x884) != 0)) &&
     ((*(char *)(param_1 + 0x470) == '\0' ||
      (((*(byte *)(param_1 + 0x472) & 0x80) == 0 || (*(char *)(param_1 + 0x471) == '\0')))))) {
    FUN_0092bcd0();
    if (*(char *)(*(int *)(param_1 + 0x884) + 0x20) != '\0') {
      iVar1 = FUN_0092b680();
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_00928de0();
        if ((fVar2 < (float10)(float)(undefined *)0x0 != (fVar2 == (float10)(float)(undefined *)0x0)
            ) && (*(int *)(param_1 + 0x898) != 0)) {
          if (*(int *)(param_1 + 0x89c) != 0) {
            FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
            *(undefined4 *)(param_1 + 0x89c) = 0;
          }
          FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
          FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
          FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
          *(undefined4 *)(param_1 + 0x898) = 0;
        }
      }
    }
  }
  return;
}

// 00AC73B0  Bm0201::vf50  size=226  [class]
void __fastcall Bm0201::vf50(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  if ((*(int *)(param_1 + 0xa70) != 0) && (*(int *)(param_1 + 0xb18) == 0)) {
    *(undefined4 *)(param_1 + 0xa70) = 0;
    if (*(int *)(param_1 + 0xb30) != 0) {
      piVar2 = (int *)FUN_00d773c0();
      (**(code **)(*piVar2 + 0x10))(*(undefined4 *)(param_1 + 0xb30));
    }
    *(undefined4 *)(param_1 + 0xb30) = 0;
    if (((*(int *)(param_1 + 0xb18) == 0) && (iVar3 = FUN_009fd880(), iVar3 == 0)) &&
       (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
    }
  }
  if (*(int *)(param_1 + 0xb34) != 0) {
    fVar5 = (float10)FUN_00a93060();
    fVar5 = (float10)*(float *)(param_1 + 0xb38) - fVar5;
    *(float *)(param_1 + 0xb38) = (float)fVar5;
    if (fVar5 <= (float10)0) {
      *(float *)(param_1 + 0xb38) = (float)(float10)0;
      FUN_00a805f0();
    }
    uVar1 = *(undefined4 *)(param_1 + 0xb38);
    iVar4 = 0;
    iVar3 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        *(undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 800)) = uVar1;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
  }
  BehaviorBgBase::vf50();
  return;
}

// 00AE25F0  Bm0201::vf1D0  size=497  [class]
void __thiscall Bm0201::vf1D0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 local_160 [348];
  
  iVar1 = param_1[300];
  if (((iVar1 != 0xd0301) && (iVar1 != 0xd030e)) && (iVar1 != 0xd030f)) {
    if ((iVar1 == 0xd0291) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
      FUN_004117d0(10,param_1,param_1 + 0x2a0);
      FUN_00a963e0(local_160);
      iVar1 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
      if (iVar1 != 0) {
        piVar2 = (int *)CollisionAttackData::CollisionAttackData_3();
        if (piVar2 != (int *)0x0) {
          *(undefined4 *)(piVar2[2] + 4) = 100;
          *(undefined4 *)(piVar2[2] + 0xc) = 1;
          *(undefined4 *)(piVar2[2] + 8) = 500;
          *(undefined4 *)piVar2[2] = 4;
          *(undefined4 *)(piVar2[2] + 0x30) = 0;
          iVar1 = piVar2[2];
          *(undefined4 *)(iVar1 + 0x8c) = 0;
          *(undefined4 *)(iVar1 + 0x90) = 0;
          puVar3 = (undefined4 *)piVar2[2];
          *(undefined1 *)(puVar3 + 4) = 0;
          *puVar3 = 0x18a;
          puVar3[1] = 0x32;
          puVar3[3] = 0;
          puVar3[2] = 0;
          *(undefined1 *)(piVar2[2] + 0x11) = 7;
          piVar2[1] = 1;
          puVar3 = (undefined4 *)FUN_009f8b60();
          piVar4 = (int *)CollisionImpactWave::CollisionImpactWave(0,*puVar3,piVar2);
          if (piVar4 == (int *)0x0) {
            (**(code **)(*piVar2 + 4))(1);
          }
          else {
            puVar3 = (undefined4 *)FUN_009f8b60();
            (**(code **)(*piVar4 + 0x20))(0xb,*puVar3,0);
            piVar2 = (int *)FUN_00d773c0();
            (**(code **)(*piVar2 + 8))(piVar4);
            FUN_00d7b0f0();
            FUN_00d77c50(param_1[0x13c],0xffffffff);
            piVar4[0x144] = 0x3dcccccd;
            FUN_00d77580(0x3dcccccd,0x40800000,0x3e800000);
            piVar4[0xe0] = 0x18a;
            FUN_00d7b890();
          }
          param_1[0x2cc] = (int)piVar4;
        }
      }
      piVar2 = (int *)FUN_00c206d0();
      (**(code **)(*piVar2 + 4))(2,param_1[0x13c],param_1 + 0x10);
      (**(code **)(*param_1 + 0x20))();
      param_1[0x29c] = 1;
      return;
    }
    Bh0056::vf1D0(param_2);
  }
  return;
}

