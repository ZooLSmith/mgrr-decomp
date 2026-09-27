// src/player/pl0010/state/ZangekiMoveStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83630..00BE4030, 10 functions

#include "types.h"

// 00B83630  ZangekiMoveStatePl0010::vf0C  size=5  [class]
void __thiscall ZangekiMoveStatePl0010::vf0C(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(param_2);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}

// 00B83640  ZangekiMoveStatePl0010::thunk_vf14  size=5  [class]
undefined4 __thiscall ZangekiMoveStatePl0010::thunk_vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 00B83650  ZangekiMoveStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiMoveStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B83660  ZangekiMoveStatePl0010::vf24  size=19  [class]
bool ZangekiMoveStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83680  ZangekiMoveStatePl0010::ZangekiMoveStatePl0010  size=33  [class]
undefined4 * __thiscall
ZangekiMoveStatePl0010::ZangekiMoveStatePl0010(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a826e0();
  return param_1;
}

// 00B836B0  ZangekiMoveStatePl0010::vf00  size=6  [class]
undefined * ZangekiMoveStatePl0010::vf00(void)

{
  return &DAT_01be9ed8;
}

// 00B91870  ZangekiMoveStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiMoveStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB6E70  ZangekiMoveStatePl0010::vf08  size=1534  [class]
undefined4 __thiscall ZangekiMoveStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf08(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x143;
  *(undefined4 *)(param_1 + 0x38) = 0xef;
  *(undefined4 *)(param_1 + 0x3c) = 0x109;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 3;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  FUN_00a9f560("ZangekiMove",0x3daaaaab,0xc0200,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0,0,0x51a,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x5a,0,0x51c,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x87,0,0x51f,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xb4,0,0x51b,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffd3,0,0x51e,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffa6,0,0x51d,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0,1,0x50c,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x5a,1,0x50e,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x87,1,0x511,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xb4,1,0x50d,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffd3,1,0x510,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffa6,1,0x50f,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0,0xffffffff,0x513,0x3daaaaab,0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x5a,0xffffffff,0x515,0x3daaaaab,0xc0200
              );
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x87,0xffffffff,0x518,0x3daaaaab,0xc0200
              );
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xb4,0xffffffff,0x514,0x3daaaaab,0xc0200
              );
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffd3,0xffffffff,0x517,0x3daaaaab,
               0xc0200);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffa6,0xffffffff,0x516,0x3daaaaab,
               0xc0200);
  FUN_00a947e0(*(undefined4 *)(param_1 + 0x40),0x3f800000,0,0);
  FUN_00a9f560("ZangekiMoveCircle",0x3daaaaab,0,*(undefined4 *)(param_1 + 0x48));
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),1,0,0,0x109,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0,0,0x10a,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0x2d,0,0x10b,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0x5a,0,0x10c,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0x87,0,0x10d,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0xa0,0,0x10e,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0xaa,0,0x10f,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0xffffff60,0,0x110,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0xffffff79,0,0x111,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0xffffffa6,0,0x112,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x48),0,0xffffffd3,0,0x113,0x3daaaaab,0);
  FUN_00a947e0(*(undefined4 *)(param_1 + 0x48),0x3f800000,0,0);
  FUN_00a82790(*(undefined4 *)(uVar4 + 0x4f0),3,0);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
  FUN_00a82870(0x3eb2b8c2,0xbeb2b8c2,0x3dcccccd,0x3ae4c388,0x3c8efa35);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x427c0000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(uVar3 + 0x564) = 0;
  FUN_00e25450(0);
  return 1;
}

// 00BB7470  ZangekiMoveStatePl0010::vf20  size=223  [class]
undefined4 __thiscall ZangekiMoveStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0xc) != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(**(int **)(uVar3 + 0xc) + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0);
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x41200000);
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    }
    return 1;
  }
  return 0;
}

// 00BE4030  ZangekiMoveStatePl0010::vf10  size=3035  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiMoveStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined *puVar14;
  float fStack_180;
  float fStack_17c;
  float fStack_174;
  float fStack_170;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_14c;
  float fStack_148;
  float local_144;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float afStack_10c [17];
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float afStack_84 [2];
  undefined1 auStack_7c [88];
  undefined1 auStack_24 [32];
  
  piVar9 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    local_144 = 0.0;
  }
  else {
    puVar14 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar7 = FUN_00dd6d80(puVar14);
    local_144 = (float)(-(uint)(iVar7 != 0) & (uint)param_2);
  }
  piVar3 = *(int **)((int)local_144 + 0xc);
  if (piVar3 != (int *)0x0) {
    puVar14 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar7 = FUN_00dd6d80(puVar14);
    piVar9 = (int *)(-(uint)(iVar7 != 0) & (uint)piVar3);
  }
  FUN_00bd61b0(param_2);
  FUN_00bd6eb0(param_2,param_1,0x32,0);
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    uVar4 = piVar9[0x33e] & 0x8000;
  }
  else {
    uVar4 = piVar9[0x33e] & 0x1000;
  }
  if (uVar4 == 0) {
    FUN_00d82510(0x3d,0x19);
  }
  FUN_00bbcb90(&fStack_130,param_2);
  FUN_00bbc9f0(&fStack_140,param_2);
  if (ABS(fStack_12c + fStack_130) < 100.0) {
    FUN_00d82510(0x3d,0x19);
  }
  fStack_174 = fStack_130 * 0.001;
  fStack_170 = 1.0 - (SQRT(fStack_12c * -0.001 * fStack_12c * -0.001 + fStack_174 * fStack_174) -
                     0.2) * 1.25;
  if (fStack_170 < 1.0) {
    if (fStack_170 <= 0.0) {
      fStack_170 = 0.0;
    }
  }
  else {
    fStack_170 = 1.0;
  }
  fVar5 = fStack_140 * 0.001;
  pfVar8 = (float *)(**(code **)(*piVar9 + 0x68))();
  fStack_160 = *pfVar8;
  fStack_15c = pfVar8[1];
  fStack_158 = pfVar8[2];
  fStack_154 = pfVar8[3];
  fVar1 = -fStack_12c;
  pfVar8 = (float *)FUN_00a925a0(&uStack_b0);
  fVar2 = fStack_170 + 1.0;
  fStack_160 = *pfVar8 * fVar1 * 6e-05 * fVar2 + fStack_160;
  fStack_15c = pfVar8[1] * fVar1 * 6e-05 * fVar2 + fStack_15c;
  fStack_158 = pfVar8[2] * fVar1 * 6e-05 * fVar2 + fStack_158;
  fStack_154 = fVar2 * pfVar8[3] * fVar1 * 6e-05 + fStack_154;
  fVar1 = -fStack_130;
  pfVar8 = (float *)FUN_00a92640(&uStack_b0);
  fStack_160 = *pfVar8 * fVar1 * 6e-05 * fVar2 + fStack_160;
  fStack_15c = pfVar8[1] * fVar1 * 6e-05 * fVar2 + fStack_15c;
  fStack_158 = pfVar8[2] * fVar1 * 6e-05 * fVar2 + fStack_158;
  fStack_154 = fVar2 * pfVar8[3] * fVar1 * 6e-05 + fStack_154;
  (**(code **)(*piVar9 + 0x6c))(&fStack_160);
  fStack_114 = fStack_170;
  fStack_110 = 0.0;
  afStack_10c[0] = fStack_140 * -0.001;
  if ((fStack_170 != 0.0) || (afStack_10c[0] != 0.0)) {
    fVar2 = afStack_10c[0] * afStack_10c[0] + fStack_170 * fStack_170;
    if ((fVar2 < 0.0 != (fVar2 == 0.0)) || (NAN(fStack_170))) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_114 = 0.0;
      fStack_110 = 1.0;
      afStack_10c[0] = 0.0;
    }
    else {
      FUN_00ddf460(&fStack_114,&fStack_114);
    }
    fVar2 = fStack_110 * 0.0;
    fVar10 = (float10)FUN_00fdc4e0();
    fVar2 = fVar2 + fStack_114 + afStack_10c[0] * 0.0;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      fVar10 = fVar10 * (float10)-1.0;
    }
    *(float *)((int)fStack_148 + 0x3f8) = (float)(fVar10 * (float10)57.29578);
  }
  fVar12 = (float10)0;
  fVar10 = (float10)fVar1;
  fStack_120 = (float)fVar12;
  fVar11 = (float10)fStack_180;
  fStack_11c = fStack_180;
  fStack_17c = (float)fVar12;
  fStack_124 = fVar1;
  if ((fVar12 != fVar10) || (fVar12 != fVar11)) {
    fVar10 = fVar11 * fVar11 + fVar10 * fVar10;
    if (fVar10 < fVar12 == (fVar10 == fVar12)) {
      FUN_00ddf460(&fStack_124,&fStack_124);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_124 = 0.0;
      fStack_120 = 1.0;
      fStack_11c = 0.0;
    }
    fVar1 = fStack_120 * 0.0;
    fVar12 = (float10)FUN_00fdc4e0();
    fStack_17c = (float)fVar12;
    fVar1 = fVar1 + fStack_124 + fStack_11c * 0.0;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      fVar12 = fVar12 * (float10)-1.0;
      fStack_17c = (float)fVar12;
    }
  }
  fVar12 = fVar12 * (float10)57.29578;
  if ((fVar12 <= (float10)-81.0) || ((float10)-54.0 <= fVar12)) {
    if (((float10)126.0 <= fVar12) || (fVar12 <= (float10)99.0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      goto LAB_00be4580;
    }
    if ((float10)90.0 - fVar12 <= (float10)135.0 - fVar12) {
      fStack_17c = 1.727876;
    }
    else {
      fStack_17c = 2.1991148;
    }
    uVar13 = *(undefined4 *)(param_1 + 0x40);
  }
  else {
    if ((float10)-45.0 - fVar12 <= (float10)-90.0 - fVar12) {
      fStack_17c = -0.94247776;
    }
    else {
      fStack_17c = -1.4137167;
    }
    uVar13 = *(undefined4 *)(param_1 + 0x40);
  }
  iVar7 = FUN_00a94e10(uVar13,0x40000000,0x41f80000);
  if (iVar7 != 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 1;
      *(float *)(param_1 + 0x60) = fStack_17c;
    }
    else {
      fStack_17c = *(float *)(param_1 + 0x60);
    }
  }
LAB_00be4580:
  fVar10 = (float10)1;
  fVar12 = (float10)fpatan((float10)local_144,(float10)fStack_140 - fVar10);
  fVar11 = (float10)fStack_140 * (float10)0.001;
  fVar11 = SQRT(fVar11 * fVar11 + (float10)fStack_170 * (float10)fStack_170);
  fStack_170 = (float)fVar11;
  if (fVar11 <= fVar10) {
    if (fVar11 < (float10)0.1) {
      fStack_170 = 0.0;
    }
  }
  else {
    fStack_170 = (float)fVar10;
  }
  if (fVar10 < (float10)fStack_174) {
    fStack_174 = (float)fVar10;
  }
  FUN_00a95fb0(0);
  FUN_00a947e0(*(undefined4 *)(param_1 + 0x48),1.0 - fStack_170,
               (float)ABS((float10)180.0 - fVar12 * (float10)57.29578),0);
  uVar13 = *(undefined4 *)(param_1 + 0x48);
  FUN_00a92f90();
  iVar7 = FUN_00e26e90();
  if (iVar7 != 0) {
    FUN_00e36ac0(uVar13,0x3f800000);
  }
  fVar1 = 1.2 - fStack_174 * 0.5;
  FUN_00a96030(*(undefined4 *)(param_1 + 0x48),fVar1);
  FUN_00a947e0(*(undefined4 *)(param_1 + 0x40),fStack_174,fStack_17c * 57.29578,fVar5);
  fVar10 = (float10)FUN_00a958c0(*(undefined4 *)(param_1 + 0x48));
  FUN_00a95e60(*(undefined4 *)(param_1 + 0x40),(float)fVar10);
  FUN_00a95fb0(0);
  FUN_00a96030(*(undefined4 *)(param_1 + 0x40),fVar1);
  uVar13 = *(undefined4 *)(param_1 + 0x40);
  FUN_00a92f90();
  iVar7 = FUN_00e26e90();
  if (iVar7 != 0) {
    FUN_00e36ac0(uVar13,0x3f800000);
  }
  fVar10 = (float10)FUN_00e049b0();
  fVar10 = ((float10)1.3 - (float10)(fStack_174 * 0.5)) * fVar10 +
           (float10)*(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x54) = (float)fVar10;
  if ((float10)*(float *)(param_1 + 0x58) < fVar10) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  FUN_00bd61b0(param_2);
  FUN_00bd6eb0(param_2,param_1,0x32,0);
  FUN_00bbad20(param_2,param_1,0x32);
  iVar7 = FUN_00a12210(0xffffffff);
  local_144 = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                   *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                   *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
  fStack_140 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                    *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                    *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
  fVar6 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
               *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
               *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
  fVar1 = *(float *)(iVar7 + 0x28);
  fVar2 = *(float *)(iVar7 + 0x38);
  fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar7 + 0x18) / fVar6));
  fVar11 = (float10)fpatan((float10)(fVar1 / fVar6),(float10)(fVar2 / fVar6));
  fStack_134 = (float)fVar11;
  fStack_130 = (float)fVar10;
  fVar10 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)fStack_140,
                           (float10)*(float *)(iVar7 + 0x10) / (float10)local_144);
  fStack_12c = (float)fVar10;
  local_144 = *(float *)(iVar7 + 0x40);
  fStack_140 = *(float *)(iVar7 + 0x44);
  uStack_13c = *(undefined4 *)(iVar7 + 0x48);
  afStack_10c[2] = 0.0;
  afStack_10c[3] = 0.0;
  afStack_10c[4] = 1.0;
  FUN_00ddc1d0(afStack_10c + 6,&fStack_134,5);
  D3DXVec3TransformNormal(auStack_24,afStack_10c + 2,afStack_10c + 6);
  fStack_110 = 0.0;
  afStack_10c[0] = 1.0;
  afStack_10c[1] = 0.0;
  FUN_00ddc1d0(afStack_10c + 3,&fStack_140,5);
  D3DXVec3TransformNormal(auStack_c0,&fStack_110,afStack_10c + 3);
  fStack_8c = afStack_10c[0x10] * 1.35 + fStack_15c;
  fStack_88 = fStack_c8 * 1.35 + fStack_158;
  afStack_84[0] = fStack_c4 * 1.35 + fStack_154;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  afStack_84[1] = 1.0;
  uStack_94 = 0x3f800000;
  uStack_a8 = 0x3f800000;
  uStack_bc = 0x3f800000;
  afStack_10c[0xf] = 1.0;
  afStack_10c[10] = 1.0;
  afStack_10c[5] = 1.0;
  afStack_10c[0] = 1.0;
  afStack_10c[0xe] = 0.0;
  afStack_10c[0xd] = 0.0;
  afStack_10c[0xc] = 0.0;
  afStack_10c[0xb] = 0.0;
  afStack_10c[9] = 0.0;
  afStack_10c[8] = 0.0;
  afStack_10c[7] = 0.0;
  afStack_10c[6] = 0.0;
  afStack_10c[4] = 0.0;
  afStack_10c[3] = 0.0;
  afStack_10c[2] = 0.0;
  afStack_10c[1] = 0.0;
  if (local_144 != 0.0) {
    D3DXMatrixRotationZ(auStack_7c,local_144);
    D3DXMatrixMultiply(&fStack_114,afStack_84,&fStack_114);
  }
  if (fStack_148 != 0.0) {
    D3DXMatrixRotationY(auStack_7c,fStack_148);
    D3DXMatrixMultiply(&fStack_114,afStack_84,&fStack_114);
  }
  if (fStack_14c != 0.0) {
    D3DXMatrixRotationX(auStack_7c,fStack_14c);
    D3DXMatrixMultiply(&fStack_114,afStack_84,&fStack_114);
  }
  D3DXMatrixMultiply(&uStack_bc,afStack_10c,&uStack_bc);
  D3DXMatrixRotationX(&fStack_88,*(undefined4 *)((int)fVar5 + 0x374));
  D3DXMatrixMultiply(afStack_10c + 0xf,&uStack_90,afStack_10c + 0xf);
  fVar10 = (float10)FUN_00ddba30((*(float *)((int)fVar5 + 0x3f8) + 90.0) * 0.017453292);
  D3DXMatrixRotationZ(&uStack_9c,(float)fVar10);
  D3DXMatrixMultiply(afStack_10c + 10,&uStack_a4,afStack_10c + 10);
  FID_conflict__memcpy(&DAT_01d618e0,afStack_10c + 7,0x40);
  _DAT_01d61920 = 0x41200000;
  StateMachineNode::vf10(param_2);
  return;
}

