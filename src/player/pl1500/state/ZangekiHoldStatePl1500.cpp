// src/player/pl1500/state/ZangekiHoldStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4680..008CAFE0, 10 functions

#include "mgrr.h"
#include "ZangekiHoldStatePl1500.h"

// 008A4680  ZangekiHoldStatePl1500::thunk_vf0C  size=5  [class]
void __thiscall ZangekiHoldStatePl1500::thunk_vf0C(int param_1,undefined4 param_2)

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

// 008A4690  ZangekiHoldStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiHoldStatePl1500::vf14(int param_1,undefined4 param_2)

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

// 008A46A0  ZangekiHoldStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiHoldStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A46B0  ZangekiHoldStatePl1500::vf24  size=19  [class]
bool ZangekiHoldStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A46F0  ZangekiHoldStatePl1500::vf00  size=6  [class]
undefined * ZangekiHoldStatePl1500::vf00(void)

{
  return &DAT_01b35bb8;
}

// 008AA130  ZangekiHoldStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiHoldStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B3C20  ZangekiHoldStatePl1500::vf20  size=290  [class]
undefined4 __thiscall ZangekiHoldStatePl1500::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar3 = StateMachineNode::vf20(param_2);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  iVar3 = FUN_00a92f90();
  if (iVar3 != 0) {
    if (*(int *)(uVar4 + 0x40c8) != 8) {
      uVar2 = *(undefined4 *)(param_1 + 0x3c);
      iVar3 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar3 + 0x98,uVar2,0x41200000);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    iVar3 = FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e35de0(iVar3 + 0x98,uVar2,0);
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    iVar3 = FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e35de0(iVar3 + 0x98,uVar2,0x41200000);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return 1;
}

// 008B3D50  FUN_008b3d50  size=267  [callgraph]
void __thiscall FUN_008b3d50(int param_1,undefined4 *param_2,float param_3,float param_4)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  fVar2 = SQRT(param_4 * 0.001 * param_4 * 0.001 + param_3 * 0.001 * param_3 * 0.001);
  if (0.1 <= fVar2) {
    fVar2 = (fVar2 + 1.0) * 0.5;
    *(float *)(param_1 + 0x7c) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x7c) < 0.5) {
      *(undefined4 *)(param_1 + 0x7c) = 0x3f000000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 0x80) = fVar2;
  if (fVar2 == 0.0) {
    *(undefined4 *)(param_1 + 0x80) = 0x3ecccccd;
  }
  if (*(int *)(uVar3 + 0x40c8) == 0x13) {
    *(undefined4 *)(param_1 + 0x80) = 0x3e4ccccd;
  }
  *(float *)(param_1 + 0x78) =
       (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x78)) *
       *(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x78);
  return;
}

// 008CAE90  ZangekiHoldStatePl1500::vf08  size=321  [class]
undefined4 __thiscall ZangekiHoldStatePl1500::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_20;
  float local_1c;
  undefined4 local_14;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0x134;
  *(undefined4 *)(param_1 + 0x34) = 0x13e;
  *(undefined4 *)(param_1 + 0x38) = 0x13c;
  uVar2 = FUN_008b89f0(param_2);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = 6;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_008b8d50(&local_20,param_2);
  fVar3 = (float10)fpatan(-(float10)local_20,(float10)1 - (float10)local_1c);
  *(float *)(param_1 + 0x48) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(float *)(param_1 + 0x6c) = (float)(float10)1;
  *(float *)(param_1 + 0x60) = local_20;
  *(undefined4 *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x68) = local_1c;
  *(undefined4 *)(param_1 + 0x6c) = local_14;
  FUN_008c3320(param_2,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x90) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  if ((*(int *)(param_1 + 0x2c) != 4) && (*(int *)(param_1 + 0x2c) != 2)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x40a00000;
  return 1;
}

// 008CAFE0  ZangekiHoldStatePl1500::vf10  size=2665  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiHoldStatePl1500::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float unaff_EBX;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float *pfVar13;
  undefined *puVar14;
  float local_134;
  uint local_130;
  int *local_12c;
  float local_128;
  int *local_124;
  int *local_120;
  float local_11c;
  int *local_118;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [17];
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_bc [4];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [2];
  undefined1 auStack_78 [88];
  undefined1 auStack_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar14 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar7 = FUN_00dd6d80(puVar14);
    uVar8 = -(uint)(iVar7 != 0) & (uint)param_2;
  }
  local_12c = *(int **)(uVar8 + 0x5e0);
  if (local_12c == (int *)0x0) {
    local_130 = 0;
  }
  else {
    puVar14 = &DAT_01b35b90;
    (**(code **)(*local_12c + 4))(&DAT_01b35b90);
    iVar7 = FUN_00dd6d80(puVar14);
    local_130 = -(uint)(iVar7 != 0) & (uint)local_12c;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar14 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar7 = FUN_00dd6d80(puVar14);
    uVar6 = -(uint)(iVar7 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar6 + 0x56c) != 0) {
    FUN_00d82510(7,100);
  }
  local_12c = (int *)FUN_00a92f90();
  iVar7 = FUN_00e26e90();
  if (iVar7 == 0) {
    fVar9 = (float10)1;
  }
  else {
    fVar9 = (float10)FUN_00e36840(3);
  }
  fVar9 = (float10)*(float *)(param_1 + 0x84) - fVar9;
  *(float *)(param_1 + 0x84) = (float)fVar9;
  if (((float10)0 == (float10)*(float *)(param_1 + 0x88)) && (fVar9 < (float10)0)) {
    FUN_00e25450(*(float *)(param_1 + 0x8c) * 0.016666668);
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  FUN_008b8d50(&local_12c,param_2);
  local_124 = local_12c;
  local_134 = local_128;
  if (*(int *)(uVar8 + 0x330) == 0xf) {
    local_124 = (int *)((float)local_12c * -1.0);
    local_134 = local_128 * -1.0;
  }
  FUN_008c2e50(param_2);
  FUN_008c3990(param_2,param_1,0x32);
  FUN_008c3b70(param_2,param_1,0x32,0);
  FUN_008b6fb0(param_2,param_1,0x32);
  if (*(int *)(uVar8 + 0xf0) == 0) {
    FUN_008b3d50(param_2,local_124,local_134);
    if ((*(float *)(param_1 + 0x7c) != 0.0) || (0.01 <= *(float *)(param_1 + 0x78))) {
      fVar9 = (float10)fpatan((float10)*(float *)(param_1 + 0x60),
                              (float10)*(float *)(param_1 + 0x68) - (float10)1.0);
      fVar9 = ABS((float10)180.0 - fVar9 * (float10)57.29578);
      local_12c = (int *)(float)fVar9;
      if (*(float *)(param_1 + 0x7c) == 0.0) {
        local_12c = *(int **)(uVar8 + 0x3f8);
        fVar9 = (float10)(float)local_12c;
      }
      FUN_008c3480(param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x78),(float)fVar9);
      *(int **)(param_1 + 0x60) = local_124;
      *(undefined4 *)(param_1 + 100) = 0;
      *(float *)(param_1 + 0x68) = local_134;
      *(undefined4 *)(param_1 + 0x6c) = local_a4;
      if (*(int *)(uVar8 + 0x3f4) != 0) {
        iVar7 = FUN_00a81330();
        if (((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) &&
           (iVar7 = FUN_00860b50(iVar7), iVar7 != 0)) {
          FUN_005ca1a0(*(int *)(uVar8 + 0x528) == 0);
        }
        fVar2 = (float)local_12c - *(float *)(uVar8 + 0x3f8);
        if (180.0 < fVar2) {
          fVar2 = (float)local_12c - (*(float *)(uVar8 + 0x3f8) + 360.0);
        }
        if (fVar2 < -180.0) {
          fVar2 = (float)local_12c - (*(float *)(uVar8 + 0x3f8) - 360.0);
        }
        if (*(float *)(local_130 + 0x40b4) < ABS(fVar2)) {
          fVar2 = fVar2 + *(float *)(uVar8 + 0x3f8);
          *(float *)(uVar8 + 0x3f8) = fVar2;
          if (360.0 < fVar2) {
            do {
              fVar2 = fVar2 - 360.0;
            } while (360.0 < fVar2);
            *(float *)(uVar8 + 0x3f8) = fVar2;
          }
          fVar2 = *(float *)(uVar8 + 0x3f8);
          if (fVar2 < 0.0) {
            do {
              fVar2 = fVar2 + 360.0;
            } while (fVar2 < 0.0);
            *(float *)(uVar8 + 0x3f8) = fVar2;
          }
        }
      }
    }
    else {
      FUN_00d82510(9,0x19);
    }
    goto LAB_008cb5b7;
  }
  local_12c = (int *)0x0;
  if (SQRT(local_134 * 0.001 * local_134 * 0.001 +
           (float)local_124 * 0.001 * (float)local_124 * 0.001) < 0.1) {
    local_120 = (int *)0x0;
    local_11c = -1000.0;
    local_118 = local_120;
    if (*(int *)(local_130 + 0x40c8) == 0xc) {
      if (0.0 < _DAT_01d61ab0) {
        D3DXMatrixRotationZ(afStack_108 + 6,
                            (*(float *)(local_130 + 0x341c) / _DAT_01d61ab0) * 145.0 * 0.017453292);
        goto LAB_008cb25d;
      }
    }
    else {
      local_12c = (int *)FUN_00a959f0(0);
      D3DXMatrixRotationZ(afStack_108 + 6,(float)(int)local_12c * 0.017453292);
LAB_008cb25d:
      D3DXVec3TransformNormal(&local_128,&local_128,afStack_108 + 4);
    }
    local_12c = (int *)0x1;
    local_134 = local_11c;
    local_124 = local_120;
  }
  FUN_008b3d50(param_2,local_124,local_134);
  fVar2 = local_134;
  piVar1 = local_124;
  if (local_12c == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x60);
    fVar2 = *(float *)(param_1 + 0x68);
  }
  fVar9 = (float10)fpatan((float10)(float)piVar1,(float10)fVar2 - (float10)1.0);
  fVar10 = ABS((float10)180.0 - fVar9 * (float10)57.29578);
  fVar9 = (float10)0;
  if (fVar9 == (float10)*(float *)(param_1 + 0x7c)) {
    fVar10 = (float10)*(float *)(uVar8 + 0x3f8);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  if ((fVar9 != (float10)*(float *)(param_1 + 0x7c)) || (0.01 <= *(float *)(param_1 + 0x78))) {
    fVar11 = fVar10 - (float10)*(float *)(uVar8 + 0x3f8);
    fVar12 = (float10)360.0;
    if ((float10)180.0 < fVar11) {
      fVar11 = fVar10 - ((float10)*(float *)(uVar8 + 0x3f8) + fVar12);
    }
    if (fVar11 < (float10)-180.0) {
      fVar11 = fVar10 - ((float10)*(float *)(uVar8 + 0x3f8) - fVar12);
    }
    fVar11 = (float10)*(float *)(param_1 + 0x80) * fVar11 * (float10)*(float *)(param_1 + 0x80) +
             (float10)*(float *)(uVar8 + 0x3f8);
    *(float *)(uVar8 + 0x3f8) = (float)fVar11;
    if (fVar12 < fVar11) {
      do {
        fVar11 = fVar11 - fVar12;
      } while (fVar12 < fVar11);
      *(float *)(uVar8 + 0x3f8) = (float)fVar11;
    }
    fVar11 = (float10)*(float *)(uVar8 + 0x3f8);
    if (fVar11 < fVar9) {
      do {
        fVar11 = fVar11 + fVar12;
      } while (fVar11 < fVar9);
      *(float *)(uVar8 + 0x3f8) = (float)fVar11;
    }
  }
  else {
    fVar10 = (float10)*(float *)(uVar8 + 0x3f8);
  }
  FUN_008c3480(param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),uVar3,(float)fVar10);
  *(int **)(param_1 + 0x60) = local_124;
  *(undefined4 *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x68) = local_134;
  *(undefined4 *)(param_1 + 0x6c) = local_a4;
LAB_008cb5b7:
  FUN_008b7700(param_2,param_1,100);
  fVar9 = (float10)fpatan((float10)(float)local_124,(float10)local_134 - (float10)1.0);
  local_12c = (int *)(float)ABS((float10)180.0 - fVar9 * (float10)57.29578);
  if (*(float *)(param_1 + 0x7c) == 0.0) {
    local_12c = *(int **)(uVar8 + 0x3f8);
  }
  iVar7 = FUN_00a12210(0xffffffff);
  local_120 = (int *)SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                          *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                          *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
  local_11c = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                   *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                   *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
  fVar2 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
               *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
               *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
  fVar4 = *(float *)(iVar7 + 0x28) / fVar2;
  fVar5 = *(float *)(iVar7 + 0x38) / fVar2;
  fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar7 + 0x18) / fVar2));
  fVar10 = (float10)fpatan((float10)fVar4,(float10)fVar5);
  fStack_110 = (float)fVar10;
  fStack_10c = (float)fVar9;
  fVar9 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)local_11c,
                          (float10)*(float *)(iVar7 + 0x10) / (float10)(float)local_120);
  afStack_108[0] = (float)fVar9;
  local_120 = *(int **)(iVar7 + 0x40);
  local_11c = *(float *)(iVar7 + 0x44);
  local_118 = *(int **)(iVar7 + 0x48);
  afStack_108[2] = 0.0;
  afStack_108[3] = 0.0;
  afStack_108[4] = 1.0;
  FUN_00ddc1d0(afStack_108 + 6,&fStack_110,5);
  D3DXVec3TransformNormal(auStack_20,afStack_108 + 2,afStack_108 + 6);
  fStack_10c = 0.0;
  afStack_108[0] = 1.0;
  afStack_108[1] = 0.0;
  FUN_00ddc1d0(afStack_108 + 3,&local_11c,5);
  D3DXVec3TransformNormal(auStack_bc,&fStack_10c,afStack_108 + 3);
  fStack_88 = afStack_108[0x10] * 1.35 + unaff_EBX;
  fStack_84 = fStack_c4 * 1.35 + fVar5;
  afStack_80[0] = fStack_c0 * 1.35 + fVar4;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  afStack_80[1] = 1.0;
  uStack_90 = 0x3f800000;
  local_a4 = 0x3f800000;
  uStack_b8 = 0x3f800000;
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
  if ((float)local_120 != 0.0) {
    D3DXMatrixRotationZ(auStack_78,local_120);
    D3DXMatrixMultiply(&fStack_110,afStack_80,&fStack_110);
  }
  if ((float)local_124 != 0.0) {
    D3DXMatrixRotationY(auStack_78,local_124);
    D3DXMatrixMultiply(&fStack_110,afStack_80,&fStack_110);
  }
  if (local_128 != 0.0) {
    D3DXMatrixRotationX(auStack_78,local_128);
    D3DXMatrixMultiply(&fStack_110,afStack_80,&fStack_110);
  }
  D3DXMatrixMultiply(&uStack_b8,afStack_108,&uStack_b8);
  D3DXMatrixRotationX(&fStack_84,*(undefined4 *)(uVar8 + 0x374));
  pfVar13 = afStack_108 + 0xf;
  D3DXMatrixMultiply(pfVar13,&uStack_8c,pfVar13);
  fVar9 = (float10)FUN_00ddba30((*(float *)(uVar8 + 0x3f8) + 90.0) * 0.017453292);
  D3DXMatrixRotationZ(&uStack_98,(float)fVar9);
  D3DXMatrixMultiply(afStack_108 + 10,&uStack_a0,afStack_108 + 10);
  FID_conflict__memcpy(&DAT_01d618e0,afStack_108 + 7,0x40);
  _DAT_01d61920 = 0x41200000;
  if (0.1 < *(float *)(param_1 + 0x78)) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    if (*(uint *)(param_1 + 0x50) < *(uint *)(param_1 + 0x4c)) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x50);
      *(undefined4 *)(uVar8 + 0x3f4) = 1;
      *(undefined4 *)(uVar8 + 0x564) = 0;
      *(undefined4 *)(uVar8 + 0x570) = 0;
    }
  }
  *(float **)(param_1 + 0x48) = pfVar13;
  *(undefined4 *)(uVar8 + 0x400) = *(undefined4 *)(uVar8 + 0x3f8);
  StateMachineNode::vf10(param_2);
  return;
}

