// src/player/pl1500/state/ZangekiMoveStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A48A0..008CC140, 10 functions

#include "mgrr.h"
#include "ZangekiMoveStatePl1500.h"

// 008A48A0  ZangekiMoveStatePl1500::vf0C  size=5  [class]
void __thiscall ZangekiMoveStatePl1500::vf0C(int param_1,undefined4 param_2)

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

// 008A48B0  ZangekiMoveStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiMoveStatePl1500::vf14(int param_1,undefined4 param_2)

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

// 008A48C0  ZangekiMoveStatePl1500::thunk_vf18  size=5  [class]
undefined4 __thiscall ZangekiMoveStatePl1500::thunk_vf18(int param_1,undefined4 param_2)

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

// 008A48D0  ZangekiMoveStatePl1500::vf24  size=19  [class]
bool ZangekiMoveStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A48F0  ZangekiMoveStatePl1500::ZangekiMoveStatePl1500  size=33  [class]
undefined4 * __thiscall
ZangekiMoveStatePl1500::ZangekiMoveStatePl1500(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode_8(param_2);
  *param_1 = vftable;
  FUN_00a826e0();
  return param_1;
}

// 008A4920  ZangekiMoveStatePl1500::vf00  size=6  [class]
undefined * ZangekiMoveStatePl1500::vf00(void)

{
  return &DAT_01b35bc8;
}

// 008AA240  ZangekiMoveStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiMoveStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B4280  ZangekiMoveStatePl1500::vf08  size=643  [class]
undefined4 __thiscall ZangekiMoveStatePl1500::vf08(int param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x13e;
  *(undefined4 *)(param_1 + 0x38) = 0x150;
  *(undefined4 *)(param_1 + 0x3c) = 0x151;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 3;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  FUN_00a9f560("ZangekiMove",0x3daaaaab,0,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0,0,0x148,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x2d,0,0x14d,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x5a,0,0x14b,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0x87,0,0x14f,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xb4,0,0x149,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffff79,0,0x14e,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffa6,0,0x14a,0x3daaaaab,0);
  FUN_00a9f600(0xffffffff,*(undefined4 *)(param_1 + 0x40),0,0xffffffd3,0,0x14c,0x3daaaaab,0);
  FUN_00a947e0(*(undefined4 *)(param_1 + 0x40),0x3f800000,0,0);
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

// 008B4510  ZangekiMoveStatePl1500::vf20  size=174  [class]
undefined4 __thiscall ZangekiMoveStatePl1500::vf20(int param_1,undefined4 *param_2)

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
      puVar4 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b90;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b90);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0);
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    }
    return 1;
  }
  return 0;
}

// 008CC140  ZangekiMoveStatePl1500::vf10  size=2050  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiMoveStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float *pfVar10;
  undefined *puVar11;
  float fStack_14c;
  float fStack_148;
  undefined4 *local_144;
  float fStack_140;
  float fStack_13c;
  undefined4 uStack_138;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [29];
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [88];
  undefined1 auStack_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    local_144 = param_2;
  }
  else {
    puVar11 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar11);
    local_144 = (undefined4 *)(-(uint)(iVar3 != 0) & (uint)param_2);
  }
  piVar1 = (int *)local_144[0x178];
  fVar4 = 0.0;
  if (piVar1 != (int *)0x0) {
    puVar11 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar11);
    fVar4 = (float)(-(uint)(iVar3 != 0) & (uint)piVar1);
    fStack_14c = fVar4;
  }
  FUN_008c2e50(param_2);
  FUN_008c3b70(param_2,param_1,0x32,0);
  FUN_008b8f00(&fStack_130,param_2);
  FUN_008b8d50(&fStack_140,param_2);
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    uVar2 = *(uint *)((int)fVar4 + 0xcf8) & 0x8000;
  }
  else {
    uVar2 = *(uint *)((int)fVar4 + 0xcf8) & 0x1000;
  }
  if (uVar2 == 0) {
    FUN_00d82510(9 - (uint)(200.0 < ABS(fStack_13c) + ABS(fStack_140)),0x19);
  }
  if (ABS(fStack_12c + fStack_130) < 100.0) {
    FUN_00d82510(9,0x19);
  }
  fVar5 = (float10)fStack_130 * (float10)0.001;
  fStack_148 = (float)fVar5;
  fVar6 = (float10)fStack_12c * (float10)-0.001;
  fStack_130 = (float)fVar6;
  fVar9 = (float10)1;
  fVar8 = fVar9 - (SQRT(fVar6 * fVar6 + fVar5 * fVar5) - (float10)0.2) * (float10)1.25;
  fStack_14c = (float)fVar8;
  fVar7 = (float10)0;
  if (fVar8 < fVar9) {
    if (fVar8 <= fVar7) {
      fStack_14c = (float)fVar7;
      fVar8 = fVar7;
    }
  }
  else {
    fStack_14c = (float)fVar9;
    fVar8 = fVar9;
  }
  fVar9 = (float10)fStack_140 * (float10)0.001;
  fStack_120 = (float)fVar9;
  fStack_11c = (float)fVar7;
  fStack_118 = (float)((float10)fStack_13c * (float10)-0.001);
  if ((fVar7 != fVar9) || (fVar7 != (float10)fStack_118)) {
    fVar9 = (float10)fStack_118 * (float10)fStack_118 + fVar9 * fVar9;
    if (fVar9 < fVar7 == (fVar9 == fVar7)) {
      FUN_00ddf460(&fStack_120,&fStack_120);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_120 = 0.0;
      fStack_11c = 1.0;
      fStack_118 = 0.0;
    }
    fStack_140 = fStack_11c * 0.0;
    fVar9 = (float10)FUN_00fdc4e0();
    fVar4 = fStack_140 + fStack_120 + fStack_118 * 0.0;
    if (fVar4 < 0.0 != (fVar4 == 0.0)) {
      fVar9 = fVar9 * (float10)-1.0;
    }
    local_144[0xfe] = (float)(fVar9 * (float10)57.29578);
    fVar8 = (float10)fStack_14c;
    fVar5 = (float10)fStack_148;
    fVar6 = (float10)fStack_130;
  }
  fVar9 = (float10)0;
  fStack_110 = (float)fVar5;
  fStack_10c = (float)fVar9;
  afStack_108[0] = (float)fVar6;
  if ((fVar9 != fVar5) || (fVar9 != fVar6)) {
    fVar7 = fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar7 < fVar9 == (fVar7 == fVar9)) {
      FUN_00ddf460(&fStack_110,&fStack_110);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_110 = 0.0;
      fStack_10c = 1.0;
      afStack_108[0] = 0.0;
    }
    fStack_130 = fStack_10c * 0.0;
    fVar9 = (float10)FUN_00fdc4e0();
    fVar4 = fStack_130 + fStack_110 + afStack_108[0] * 0.0;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      fVar8 = (float10)fStack_14c;
    }
    else {
      fVar9 = fVar9 * (float10)-1.0;
      fVar8 = (float10)fStack_14c;
    }
  }
  fVar7 = (float10)1;
  if (fVar7 < fVar8) {
    fStack_14c = (float)fVar7;
    fVar8 = fVar7;
  }
  FUN_00a947e0(*(undefined4 *)(param_1 + 0x40),(float)fVar8,(float)(fVar9 * (float10)57.29578),0);
  fVar9 = (float10)FUN_00e049b0();
  fVar9 = ((float10)1.3 - (float10)fStack_14c * (float10)0.5) * fVar9 +
          (float10)*(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x54) = (float)fVar9;
  if ((float10)*(float *)(param_1 + 0x58) < fVar9) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  FUN_008c2e50(param_2);
  FUN_008c3b70(param_2,param_1,0x32,0);
  FUN_008b6fb0(param_2,param_1,0x32);
  iVar3 = FUN_00a12210(0xffffffff);
  fStack_140 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                    *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                    *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
  fStack_13c = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                    *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                    *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
  fVar4 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
               *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
               *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
  fStack_130 = *(float *)(iVar3 + 0x28) / fVar4;
  fStack_148 = *(float *)(iVar3 + 0x38) / fVar4;
  fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar4));
  fVar7 = (float10)fpatan((float10)fStack_130,(float10)fStack_148);
  afStack_108[2] = (float)fVar7;
  afStack_108[3] = (float)fVar9;
  fVar9 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)fStack_13c,
                          (float10)*(float *)(iVar3 + 0x10) / (float10)fStack_140);
  afStack_108[4] = (float)fVar9;
  fStack_130 = *(float *)(iVar3 + 0x40);
  fStack_12c = *(float *)(iVar3 + 0x44);
  uStack_128 = *(undefined4 *)(iVar3 + 0x48);
  fStack_140 = 0.0;
  fStack_13c = 0.0;
  uStack_138 = 0x3f800000;
  FUN_00ddc1d0(afStack_108 + 6,afStack_108 + 2,5);
  pfVar10 = &fStack_140;
  D3DXVec3TransformNormal(auStack_20,pfVar10,afStack_108 + 6);
  fStack_14c = 0.0;
  fStack_148 = 1.0;
  local_144 = (undefined4 *)0x0;
  FUN_00ddc1d0(afStack_108 + 3,&fStack_10c,5);
  D3DXVec3TransformNormal(auStack_7c,&fStack_14c,afStack_108 + 3);
  afStack_108[0x1c] = fStack_88 * 1.35 + fStack_148;
  fStack_94 = fStack_84 * 1.35 + (float)local_144;
  fStack_90 = fStack_80 * 1.35 + fStack_140;
  afStack_108[0x1b] = 0.0;
  afStack_108[0x19] = 0.0;
  afStack_108[0x18] = 0.0;
  afStack_108[0x17] = 0.0;
  afStack_108[0x16] = 0.0;
  afStack_108[0x14] = 0.0;
  afStack_108[0x13] = 0.0;
  afStack_108[0x12] = 0.0;
  afStack_108[0x11] = 0.0;
  uStack_8c = 0x3f800000;
  afStack_108[0x1a] = 1.0;
  afStack_108[0x15] = 1.0;
  afStack_108[0x10] = 1.0;
  afStack_108[0xf] = 1.0;
  afStack_108[10] = 1.0;
  afStack_108[5] = 1.0;
  afStack_108[0] = 1.0;
  afStack_108[0xe] = 0.0;
  afStack_108[0xd] = 0.0;
  afStack_108[0xc] = 0.0;
  afStack_108[0xb] = 0.0;
  afStack_108[9] = 0.0;
  afStack_108[8] = 0.0;
  afStack_108[7] = 0.0;
  afStack_108[6] = 0.0;
  afStack_108[4] = 0.0;
  afStack_108[3] = 0.0;
  afStack_108[2] = 0.0;
  afStack_108[1] = 0.0;
  if (fStack_110 != 0.0) {
    D3DXMatrixRotationZ(auStack_78,fStack_110);
    D3DXMatrixMultiply(&fStack_110,&fStack_80,&fStack_110);
  }
  if (fStack_114 != 0.0) {
    D3DXMatrixRotationY(auStack_78,fStack_114);
    D3DXMatrixMultiply(&fStack_110,&fStack_80,&fStack_110);
  }
  if (fStack_118 != 0.0) {
    D3DXMatrixRotationX(auStack_78,fStack_118);
    D3DXMatrixMultiply(&fStack_110,&fStack_80,&fStack_110);
  }
  D3DXMatrixMultiply(afStack_108 + 0x10,afStack_108,afStack_108 + 0x10);
  D3DXMatrixRotationX(&fStack_84,pfVar10[0xdd]);
  D3DXMatrixMultiply(afStack_108 + 0xb,&uStack_8c,afStack_108 + 0xb);
  fVar9 = (float10)FUN_00ddba30((pfVar10[0xfe] + 90.0) * 0.017453292);
  D3DXMatrixRotationZ(afStack_108 + 0x1c,(float)fVar9);
  D3DXMatrixMultiply(afStack_108 + 6,afStack_108 + 0x1a,afStack_108 + 6);
  FID_conflict__memcpy(&DAT_01d618e0,afStack_108 + 3,0x40);
  _DAT_01d61920 = 0x41200000;
  StateMachineNode::vf10(param_2);
  return;
}

