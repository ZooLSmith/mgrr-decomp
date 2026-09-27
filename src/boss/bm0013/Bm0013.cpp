// src/boss/bm0013/Bm0013.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004104F0..00AB91D0, 16 functions

#include "types.h"

// 004104F0  Bm0013::vf4C  size=5  [class]
void __fastcall Bm0013::vf4C(int *param_1)

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
      FUN_009fdde0();
    }
  }
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (param_1[0x27d] != 0)) {
    param_1[0x206] = 1;
  }
  return;
}

// 00410500  Bm0013::thunk_vf50  size=5  [class]
void __fastcall Bm0013::thunk_vf50(int param_1)

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

// 00410510  FUN_00410510  size=7  [between]
undefined4 __fastcall FUN_00410510(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb44);
}

// 00410520  FUN_00410520  size=7  [between]
undefined4 __fastcall FUN_00410520(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb48);
}

// 00410530  FUN_00410530  size=13  [between]
void __thiscall FUN_00410530(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb48) = param_2;
  return;
}

// 00410540  FUN_00410540  size=121  [between]
undefined4 __thiscall FUN_00410540(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x150,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 0x150,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 004105D0  FUN_004105d0  size=320  [between]
undefined4 * __fastcall FUN_004105d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  FUN_00a7c930();
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 4) = 0x500;
  param_1[2] = 1;
  param_1[3] = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0xffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x10] = 0x3f800000;
  FUN_00a7c950();
  param_1[0x38] = 0;
  param_1[0x25] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x37] = 0x3f800000;
  param_1[0x32] = 0x3f800000;
  param_1[0x2d] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  uVar1 = FUN_00a4aed0(5);
  param_1[0x22] = uVar1;
  return param_1;
}

// 00410710  FUN_00410710  size=142  [between]
undefined4 * __fastcall FUN_00410710(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_004105d0();
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x4b] = 1;
  param_1[0x48] = 0x3f800000;
  param_1[0x4f] = 1;
  param_1[0x4d] = 5;
  param_1[0x49] = 0x3dcccccd;
  param_1[0x4e] = 0;
  param_1[0x4a] = 0x3e800000;
  param_1[0x4c] = 0x3f800000;
  param_1[5] = 10;
  param_1[7] = 10;
  *(undefined1 *)(param_1 + 8) = 10;
  param_1[6] = 10;
  param_1[4] = 0x187;
  return param_1;
}

// 004107A0  Bm0013::vf40  size=137  [class]
undefined4 __fastcall Bm0013::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  FUN_00a929d0();
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
    if (iVar1 < 8) {
      FUN_00410540(0x10,&DAT_01b7bd48);
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
    }
  }
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb48) = 0xffffffff;
  return 1;
}

// 00410830  FUN_00410830  size=437  [between]
void __fastcall FUN_00410830(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_150 [4];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined4 local_12c;
  uint local_b4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00410710();
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_34 = *(undefined4 *)(param_1 + 0x4c);
  local_30 = 0x40a00000;
  local_2c = 0x40a00000;
  local_28 = 0;
  puVar1 = (undefined4 *)FUN_009f8b60();
  local_18 = *puVar1;
  local_20 = 0x40400000;
  local_b4 = local_b4 | 0x100000;
  local_24 = 1;
  local_14 = 1;
  local_1c = 1;
  local_140 = 0x18e;
  local_13c = 10000;
  local_134 = 1;
  local_138 = 100;
  local_130 = 0x500;
  Behavior::createAttackImpactWave(local_150);
  if (-1 < *(int *)(param_1 + 0xb48)) {
    local_40 = *(undefined4 *)(param_1 + 0x40);
    local_150[0] = 1;
    local_3c = *(undefined4 *)(param_1 + 0x44);
    local_38 = *(undefined4 *)(param_1 + 0x48);
    local_34 = *(undefined4 *)(param_1 + 0x4c);
    local_30 = 0x40400000;
    local_2c = 0x40400000;
    local_28 = 0;
    puVar1 = (undefined4 *)FUN_009f8b60();
    local_18 = *puVar1;
    local_20 = 0x40400000;
    local_12c = *(undefined4 *)(param_1 + 0x4f0);
    local_24 = 1;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    local_13c = *(undefined4 *)(param_1 + 0xb48);
    local_b4 = local_b4 | 0x100000;
    local_14 = 1;
    local_1c = 5;
    local_140 = 0x187;
    local_134 = 0;
    local_138 = 0;
    local_130 = 0xa00;
    Behavior::createAttackImpactWave(local_150);
  }
  return;
}

// 004109F0  Bm0013::vf44  size=79  [class]
void __fastcall Bm0013::vf44(int param_1)

{
  FUN_00a92ef0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  BehaviorBgBase::vf44();
  return;
}

// 00410A40  FUN_00410a40  size=109  [between]
undefined1 __fastcall FUN_00410a40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  piVar4 = *(int **)(param_1 + 0x67c);
  piVar5 = piVar4 + *(int *)(param_1 + 0x684) * 0x54;
  for (; piVar4 != piVar5; piVar4 = piVar4 + 0x54) {
    iVar1 = piVar4[1];
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (*piVar4 == 0x56)) {
      uVar3 = 1;
      *(float *)(param_1 + 0xb40) = *(float *)(param_1 + 0xb40) - (float)iVar1;
    }
  }
  return uVar3;
}

// 00410AB0  Bm0013::vf48  size=117  [class]
void __fastcall Bm0013::vf48(int *param_1)

{
  code *pcVar1;
  
  if (param_1[0x186] == 1) {
    param_1[0x2d0] = 0;
  }
  param_1[0x186] = 0;
  if (0.0 < (float)param_1[0x2d0]) {
    FUN_00410a40();
  }
  if (((float)param_1[0x2d0] <= 0.0) && (param_1[0x2d1] == 0)) {
    FUN_00410830();
    FUN_00aa92c0(1);
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x2d1] = 1;
    (*pcVar1)();
  }
  Bm0201::thunk_vf48();
  return;
}

// 00AB05F0  Bm0013::Bm0013  size=18  [class]
undefined4 * __fastcall Bm0013::Bm0013(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0610  Bm0013::vf04  size=6  [class]
undefined * Bm0013::vf04(void)

{
  return &DAT_01b34b78;
}

// 00AB91D0  Bm0013::vf00  size=43  [class]
undefined4 __thiscall Bm0013::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

