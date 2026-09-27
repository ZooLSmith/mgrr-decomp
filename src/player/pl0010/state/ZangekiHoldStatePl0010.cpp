// src/player/pl0010/state/ZangekiHoldStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B83090..00BE2560, 10 functions

#include "mgrr.h"
#include "ZangekiHoldStatePl0010.h"

// 00B83090  ZangekiHoldStatePl0010::thunk_vf0C  size=5  [class]
void __thiscall ZangekiHoldStatePl0010::thunk_vf0C(int param_1,undefined4 param_2)

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

// 00B830A0  ZangekiHoldStatePl0010::vf14  size=5  [class]
undefined4 __thiscall ZangekiHoldStatePl0010::vf14(int param_1,undefined4 param_2)

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

// 00B830B0  ZangekiHoldStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ZangekiHoldStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B830C0  ZangekiHoldStatePl0010::vf24  size=19  [class]
bool ZangekiHoldStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B83100  ZangekiHoldStatePl0010::vf00  size=6  [class]
undefined * ZangekiHoldStatePl0010::vf00(void)

{
  return &DAT_01be9eb0;
}

// 00B916A0  ZangekiHoldStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ZangekiHoldStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB5E40  ZangekiHoldStatePl0010::vf20  size=329  [class]
undefined4 __thiscall ZangekiHoldStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    if (*(int *)(uVar3 + 0x40c8) == 8) {
      if (*(int *)(uVar4 + 0x330) == 0xc) {
        uVar5 = *(undefined4 *)(param_1 + 0x3c);
        uVar7 = 0x41200000;
        FUN_00a92f90(uVar5,0x41200000);
        FUN_00808650(uVar5,uVar7);
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x3c);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar5,0x41200000);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e35de0(iVar2 + 0x98,uVar5,0);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e35de0(iVar2 + 0x98,uVar5,0x41200000);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return 1;
}

// 00BB5FA0  FUN_00bb5fa0  size=264  [callgraph]
void __thiscall FUN_00bb5fa0(int param_1,undefined4 *param_2,float param_3,float param_4)

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
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
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

// 00BE2410  ZangekiHoldStatePl0010::vf08  size=326  [class]
undefined4 __thiscall ZangekiHoldStatePl0010::vf08(int param_1,undefined4 param_2)

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
  *(undefined4 *)(param_1 + 0x30) = 0xeb;
  *(undefined4 *)(param_1 + 0x34) = 0x143;
  *(undefined4 *)(param_1 + 0x38) = 0xef;
  uVar2 = FUN_00bbc680(param_2);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = 3;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_00bbc9f0(&local_20,param_2);
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
  FUN_00bd6680(param_2,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x70) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x90) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (((iVar1 != 0x31) && (iVar1 != 0x45)) && (iVar1 != 0x46)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x84) = 0x40a00000;
  return 1;
}

// 00BE2560  ZangekiHoldStatePl0010::vf10  size=3378  [class]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiHoldStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float unaff_EDI;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float *pfVar17;
  float *pfVar18;
  undefined *puVar19;
  undefined4 *puVar20;
  float local_140;
  undefined1 auStack_130 [8];
  undefined4 uStack_128;
  float local_124;
  float local_120;
  int *local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 auStack_dc [12];
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0 [15];
  float fStack_84;
  float afStack_80 [2];
  undefined1 auStack_78 [88];
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar19 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar11 = FUN_00dd6d80(puVar19);
    uVar12 = -(uint)(iVar11 != 0) & (uint)param_2;
  }
  local_11c = *(int **)(uVar12 + 0xc);
  if (local_11c == (int *)0x0) {
    local_11c = (int *)0x0;
  }
  else {
    puVar19 = &DAT_01be9db8;
    (**(code **)(*local_11c + 4))(&DAT_01be9db8);
    iVar11 = FUN_00dd6d80(puVar19);
    local_11c = (int *)(-(uint)(iVar11 != 0) & (uint)local_11c);
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar19 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar11 = FUN_00dd6d80(puVar19);
    uVar10 = -(uint)(iVar11 != 0) & (uint)param_2;
  }
  if (*(int *)(uVar10 + 0x56c) != 0) {
    FUN_00d82510(0x35,100);
  }
  local_118 = (float)FUN_00a92f90();
  iVar11 = FUN_00e26e90();
  if (iVar11 == 0) {
    fVar13 = (float10)1;
  }
  else {
    fVar13 = (float10)FUN_00e36840(3);
  }
  fVar13 = (float10)*(float *)(param_1 + 0x84) - fVar13;
  *(float *)(param_1 + 0x84) = (float)fVar13;
  if (((float10)0 == (float10)*(float *)(param_1 + 0x88)) && (fVar13 < (float10)0)) {
    FUN_00e25450(*(float *)(param_1 + 0x8c) * 0.016666668);
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  FUN_00bbc9f0(&local_118,param_2);
  local_120 = local_118;
  local_124 = local_114;
  if (*(int *)(uVar12 + 0x330) == 0xf) {
    local_120 = local_118 * -1.0;
    local_124 = local_114 * -1.0;
  }
  FUN_00bd61b0(param_2);
  FUN_00bd6ca0(param_2,param_1,0x32);
  FUN_00bd6eb0(param_2,param_1,0x32,0);
  FUN_00bbad20(param_2,param_1,0x32);
  if (*(int *)(uVar12 + 0xf0) == 0) {
    FUN_00bb5fa0(param_2,local_120,local_124);
    if ((*(float *)(param_1 + 0x7c) != 0.0) || (0.01 <= *(float *)(param_1 + 0x78))) {
      fVar13 = (float10)fpatan((float10)*(float *)(param_1 + 0x60),
                               (float10)*(float *)(param_1 + 0x68) - (float10)1.0);
      fVar13 = ABS((float10)180.0 - fVar13 * (float10)57.29578);
      local_118 = (float)fVar13;
      if (*(float *)(param_1 + 0x7c) == 0.0) {
        local_118 = *(float *)(uVar12 + 0x3f8);
        fVar13 = (float10)local_118;
      }
      FUN_00bd6860(param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x78),(float)fVar13);
      *(float *)(param_1 + 0x60) = local_120;
      *(undefined4 *)(param_1 + 100) = 0;
      *(float *)(param_1 + 0x68) = local_124;
      *(float *)(param_1 + 0x6c) = local_c0[7];
      if (*(int *)(uVar12 + 0x3f4) != 0) {
        iVar11 = FUN_00a81330();
        if (((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) &&
           (iVar11 = FUN_00860b50(iVar11), iVar11 != 0)) {
          FUN_005ca1a0(*(int *)(uVar12 + 0x528) == 0);
        }
        fVar1 = local_118 - *(float *)(uVar12 + 0x3f8);
        if (180.0 < fVar1) {
          fVar1 = local_118 - (*(float *)(uVar12 + 0x3f8) + 360.0);
        }
        if (fVar1 < -180.0) {
          fVar1 = local_118 - (*(float *)(uVar12 + 0x3f8) - 360.0);
        }
        if ((float)local_11c[0x102d] < ABS(fVar1)) {
          fVar1 = fVar1 + *(float *)(uVar12 + 0x3f8);
          *(float *)(uVar12 + 0x3f8) = fVar1;
          if (360.0 < fVar1) {
            do {
              fVar1 = fVar1 - 360.0;
            } while (360.0 < fVar1);
            *(float *)(uVar12 + 0x3f8) = fVar1;
          }
          fVar1 = *(float *)(uVar12 + 0x3f8);
          if (fVar1 < 0.0) {
            do {
              fVar1 = fVar1 + 360.0;
            } while (fVar1 < 0.0);
            *(float *)(uVar12 + 0x3f8) = fVar1;
          }
        }
      }
    }
    else {
      FUN_00d82510(0x3d,0x19);
    }
    goto LAB_00be2dc1;
  }
  bVar9 = false;
  local_140 = local_120;
  if (SQRT(local_124 * 0.001 * local_124 * 0.001 + local_120 * 0.001 * local_120 * 0.001) < 0.1) {
    if (local_11c[0x1032] == 0xf) {
      local_140 = 1000.0;
      local_120 = 1000.0;
    }
    else {
      if (local_11c[0x1032] == 0xc) {
        if (0.0 < _DAT_01d61ab0) {
          fVar1 = ((float)local_11c[0xd07] / _DAT_01d61ab0) * 145.0 * 0.017453292;
          goto LAB_00be2acf;
        }
      }
      else {
        iVar11 = *(int *)(uVar12 + 0x330);
        if (iVar11 == 3) {
LAB_00be2878:
          D3DXMatrixRotationZ(&local_110,0x3fc90fdb);
        }
        else if (iVar11 == 4) {
          if (*(float *)(uVar12 + 0x328) <= 0.0) goto LAB_00be2aef;
          fVar1 = *(float *)(uVar12 + 0x324) * 0.006666667;
          D3DXMatrixRotationZ(&local_110,((1.0 - fVar1) * 45.0 - fVar1 * 45.0) * 0.017453292);
        }
        else {
          if (iVar11 == 0xb) {
LAB_00be2909:
            fVar1 = -1.5707964;
            goto LAB_00be2acf;
          }
          if (iVar11 == 0xd) {
            D3DXMatrixRotationZ(&local_110,0xbfc90fdb);
          }
          else if (iVar11 == 0xe) {
            D3DXMatrixRotationZ(&local_110,0x3f490fdb);
          }
          else {
            if (iVar11 == 0x10) goto LAB_00be2909;
            if (iVar11 == 0x11) {
              D3DXMatrixRotationZ(&local_110,0x3f490fdb);
            }
            else if (iVar11 == 10) {
              D3DXMatrixRotationZ(&local_110,0xbf490fdb);
            }
            else if (iVar11 == 0x14) {
              fVar1 = 0.7853982;
LAB_00be2acf:
              D3DXMatrixRotationZ(&local_110,fVar1);
            }
            else if (iVar11 == 0x15) {
              D3DXMatrixRotationZ(&local_110,0xbf490fdb);
            }
            else {
              if (iVar11 != 0x16) {
                if (iVar11 == 0x12) {
                  fVar1 = 0.0;
                }
                else {
                  if (iVar11 == 0x1c) goto LAB_00be2878;
                  if (iVar11 == 0x1b) {
                    D3DXMatrixRotationZ(&local_110,0xbfc90fdb);
                    goto LAB_00be2aea;
                  }
                  local_118 = (float)FUN_00a959f0(0);
                  fVar1 = (float)(int)local_118 * 0.017453292;
                }
                goto LAB_00be2acf;
              }
              D3DXMatrixRotationZ(&local_110,0xbf060a92);
            }
          }
        }
LAB_00be2aea:
        D3DXVec3TransformNormal(&stack0xfffffeb8,&stack0xfffffeb8,&local_118);
      }
LAB_00be2aef:
      local_140 = 0.0;
      bVar9 = true;
      local_120 = 0.0;
    }
    local_124 = -1000.0;
  }
  FUN_00bb5fa0(param_2,local_140,local_124);
  fVar2 = local_124;
  fVar1 = local_120;
  if (!bVar9) {
    fVar1 = *(float *)(param_1 + 0x60);
    fVar2 = *(float *)(param_1 + 0x68);
  }
  fVar13 = (float10)fpatan((float10)fVar1,(float10)fVar2 - (float10)1.0);
  fVar14 = ABS((float10)180.0 - fVar13 * (float10)57.29578);
  fVar13 = (float10)0;
  if (fVar13 == (float10)*(float *)(param_1 + 0x7c)) {
    fVar14 = (float10)*(float *)(uVar12 + 0x3f8);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x78);
  if ((fVar13 != (float10)*(float *)(param_1 + 0x7c)) || (0.01 <= *(float *)(param_1 + 0x78))) {
    fVar15 = fVar14 - (float10)*(float *)(uVar12 + 0x3f8);
    fVar16 = (float10)360.0;
    if ((float10)180.0 < fVar15) {
      fVar15 = fVar14 - ((float10)*(float *)(uVar12 + 0x3f8) + fVar16);
    }
    if (fVar15 < (float10)-180.0) {
      fVar15 = fVar14 - ((float10)*(float *)(uVar12 + 0x3f8) - fVar16);
    }
    fVar15 = (float10)*(float *)(param_1 + 0x80) * fVar15 * (float10)*(float *)(param_1 + 0x80) +
             (float10)*(float *)(uVar12 + 0x3f8);
    *(float *)(uVar12 + 0x3f8) = (float)fVar15;
    if (fVar16 < fVar15) {
      do {
        fVar15 = fVar15 - fVar16;
      } while (fVar16 < fVar15);
      *(float *)(uVar12 + 0x3f8) = (float)fVar15;
    }
    fVar15 = (float10)*(float *)(uVar12 + 0x3f8);
    if (fVar15 < fVar13) {
      do {
        fVar15 = fVar15 + fVar16;
      } while (fVar15 < fVar13);
      *(float *)(uVar12 + 0x3f8) = (float)fVar15;
    }
  }
  else {
    fVar14 = (float10)*(float *)(uVar12 + 0x3f8);
  }
  FUN_00bd6860(param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),uVar3,(float)fVar14);
  *(float *)(param_1 + 0x60) = local_120;
  *(undefined4 *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x68) = local_124;
  *(float *)(param_1 + 0x6c) = local_c0[7];
LAB_00be2dc1:
  FUN_00bbb430(param_2,param_1,100);
  fVar13 = (float10)fpatan((float10)local_120,(float10)local_124 - (float10)1.0);
  local_118 = (float)ABS((float10)180.0 - fVar13 * (float10)57.29578);
  if (*(float *)(param_1 + 0x7c) == 0.0) {
    local_118 = *(float *)(uVar12 + 0x3f8);
  }
  iVar11 = FUN_00a12210(0xffffffff);
  fVar1 = *(float *)(iVar11 + 0x10);
  fVar2 = *(float *)(iVar11 + 0x14);
  fVar4 = *(float *)(iVar11 + 0x18);
  fVar5 = *(float *)(iVar11 + 0x20);
  fVar6 = *(float *)(iVar11 + 0x24);
  fVar7 = *(float *)(iVar11 + 0x28);
  fVar8 = SQRT(*(float *)(iVar11 + 0x38) * *(float *)(iVar11 + 0x38) +
               *(float *)(iVar11 + 0x34) * *(float *)(iVar11 + 0x34) +
               *(float *)(iVar11 + 0x30) * *(float *)(iVar11 + 0x30));
  local_124 = *(float *)(iVar11 + 0x28) / fVar8;
  local_120 = *(float *)(iVar11 + 0x38) / fVar8;
  fVar13 = (float10)FUN_00ddbaa0(-(*(float *)(iVar11 + 0x18) / fVar8));
  fVar14 = (float10)fpatan((float10)local_124,(float10)local_120);
  local_d0 = (float)fVar14;
  local_cc = (float)fVar13;
  fVar13 = (float10)fpatan((float10)*(float *)(iVar11 + 0x14) /
                           (float10)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7),
                           (float10)*(float *)(iVar11 + 0x10) /
                           (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4));
  local_c8 = (float)fVar13;
  local_c0[0] = 0.0;
  local_c0[1] = 0.0;
  local_c0[2] = 1.0;
  FUN_00ddc1d0(&local_110,&local_d0,5);
  puVar20 = &local_110;
  pfVar18 = local_c0;
  D3DXVec3TransformNormal(local_20,pfVar18,puVar20);
  local_cc = 0.0;
  local_c8 = 1.0;
  fStack_c4 = 0.0;
  FUN_00ddc1d0(&local_11c,auStack_dc,5);
  pfVar17 = &local_cc;
  D3DXVec3TransformNormal(local_c0 + 1,pfVar17,&local_11c);
  local_c0[0xe] = local_c8 * 1.35 + (float)pfVar18;
  fStack_84 = fStack_c4 * 1.35 + (float)puVar20;
  afStack_80[0] = local_c0[0] * 1.35 + unaff_EDI;
  local_c0[0xd] = 0.0;
  local_c0[0xb] = 0.0;
  local_c0[10] = 0.0;
  local_c0[9] = 0.0;
  local_c0[8] = 0.0;
  local_c0[6] = 0.0;
  local_c0[5] = 0.0;
  local_c0[4] = 0.0;
  local_c0[3] = 0.0;
  afStack_80[1] = 1.0;
  local_c0[0xc] = 1.0;
  local_c0[7] = 1.0;
  local_c0[2] = 1.0;
  uStack_ec = 0x3f800000;
  uStack_100 = 0x3f800000;
  local_114 = 1.0;
  uStack_128 = 0x3f800000;
  uStack_f0 = 0;
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_104 = 0;
  uStack_108 = 0;
  uStack_10c = 0;
  local_110 = 0;
  local_118 = 0.0;
  local_11c = (int *)0x0;
  local_120 = 0.0;
  local_124 = 0.0;
  if (fStack_e0 != 0.0) {
    D3DXMatrixRotationZ(auStack_78,fStack_e0);
    D3DXMatrixMultiply(auStack_130,afStack_80,auStack_130);
  }
  if (fStack_e4 != 0.0) {
    D3DXMatrixRotationY(auStack_78,fStack_e4);
    D3DXMatrixMultiply(auStack_130,afStack_80,auStack_130);
  }
  if (fStack_e8 != 0.0) {
    D3DXMatrixRotationX(auStack_78,fStack_e8);
    D3DXMatrixMultiply(auStack_130,afStack_80,auStack_130);
  }
  D3DXMatrixMultiply(local_c0 + 2,&uStack_128,local_c0 + 2);
  D3DXMatrixRotationX(&fStack_84,*(undefined4 *)(uVar12 + 0x374));
  D3DXMatrixMultiply(&local_cc,local_c0 + 0xd,&local_cc);
  fVar13 = (float10)FUN_00ddba30((*(float *)(uVar12 + 0x3f8) + 90.0) * 0.017453292);
  D3DXMatrixRotationZ(local_c0 + 10,(float)fVar13);
  D3DXMatrixMultiply(&fStack_e0,local_c0 + 8,&fStack_e0);
  FID_conflict__memcpy(&DAT_01d618e0,&uStack_ec,0x40);
  _DAT_01d61920 = 0x41200000;
  if (0.1 < *(float *)(param_1 + 0x78)) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    if (*(uint *)(param_1 + 0x50) < *(uint *)(param_1 + 0x4c)) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x50);
      *(undefined4 *)(uVar12 + 0x3f4) = 1;
      *(undefined4 *)(uVar12 + 0x564) = 0;
      *(undefined4 *)(uVar12 + 0x570) = 0;
    }
  }
  *(float **)(param_1 + 0x48) = pfVar17;
  *(undefined4 *)(uVar12 + 0x400) = *(undefined4 *)(uVar12 + 0x3f8);
  iVar11 = *(int *)(param_1 + 0x24);
  if (((iVar11 == 0x31) || (iVar11 == 0x45)) || (iVar11 == 0x46)) {
    FUN_00b8c400();
  }
  StateMachineNode::vf10(param_2);
  return;
}

