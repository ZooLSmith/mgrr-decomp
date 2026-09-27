// src/player/pl0010/state/LandingStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B817C0..00BDF1A0, 9 functions

#include "types.h"

// 00B817C0  LandingStatePl0010::vf08  size=44  [class]
undefined4 __thiscall LandingStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return 1;
}

// 00B817F0  LandingStatePl0010::vf24  size=19  [class]
bool LandingStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81830  LandingStatePl0010::vf00  size=6  [class]
undefined * LandingStatePl0010::vf00(void)

{
  return &DAT_01be9e24;
}

// 00B91000  LandingStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall LandingStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BABD30  LandingStatePl0010::vf0C  size=1204  [class]
void __thiscall LandingStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar9 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar4 = FUN_00dd6d80(puVar9);
      uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar6 = *(int **)(uVar3 + 0xc);
    if (piVar6 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar9 = &DAT_01be9db8;
      (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar9);
      uVar7 = -(uint)(iVar4 != 0) & (uint)piVar6;
    }
    *(undefined4 *)(uVar7 + 0x507c) = 0;
    *(undefined4 *)(uVar7 + 0x418c) = *(undefined4 *)(uVar7 + 0x4180);
    *(undefined4 *)(uVar7 + 0x4188) = *(undefined4 *)(uVar7 + 0x417c);
    *(undefined4 *)(uVar7 + 0x4190) = *(undefined4 *)(uVar7 + 0x4184);
    *(undefined4 *)(uVar7 + 0x894) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x67;
    fVar2 = *(float *)(*(int *)(uVar7 + 0x40d4) + 0x14c);
    if (fVar2 * fVar2 < *(float *)(uVar7 + 0xd28)) {
      bVar8 = (*(uint *)(uVar7 + 0xe48) & *(uint *)(uVar7 + 0xcf8)) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    else {
      iVar4 = FUN_00a95ce0(0x73);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x30) = 0x65;
      }
      iVar4 = FUN_00a95ce0(0x5e);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x30) = 0x65;
      }
    }
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 == 0x14) {
      *(undefined4 *)(param_1 + 0x30) = 0x69;
    }
    if (iVar4 == 0x2f) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    if (iVar4 == 0x10) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    if (*(float *)(uVar7 + 0x41e8) < -1.5) {
      *(undefined4 *)(param_1 + 0x30) = 0x6e;
    }
    if (iVar4 == 0xd) {
      *(undefined4 *)(param_1 + 0x30) = 0x6e;
    }
    iVar4 = FUN_00a95ce0(0xa6);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    iVar4 = FUN_00a95ce0(0x33);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    iVar4 = FUN_00a95ce0(0x34);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    iVar4 = FUN_00a95ce0(199);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x70;
    }
    iVar4 = FUN_00a95ce0(0x74);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x70;
    }
    iVar4 = FUN_00a95ce0(0xb0);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x6a;
    }
    iVar4 = FUN_00a95ce0(0xa2);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x6c;
    }
    iVar4 = FUN_00a95ce0(0xa0);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    iVar4 = FUN_00a95ce0(0xa1);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    iVar4 = FUN_00a95ce0(0xab);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    iVar4 = FUN_00a95ce0(0xac);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 100;
    }
    if (*(int *)(uVar3 + 0x30) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x6b;
    }
    if (*(int *)(param_1 + 0x30) == 0x6e) {
      if ((*(int *)(*(int *)(uVar7 + 17000) + 0x544) != 0) &&
         (*(float *)(*(int *)(uVar7 + 17000) + 0x548) <= 3.5)) {
        *(undefined4 *)(param_1 + 0x30) = 0x6f;
      }
      if ((*(int *)(uVar7 + 0x4254) != 0) && (*(float *)(uVar7 + 0x4250) <= 3.5)) {
        *(undefined4 *)(param_1 + 0x30) = 0x6f;
      }
      fVar2 = *(float *)(*(int *)(uVar7 + 0x40d4) + 0x14c);
      if (*(float *)(uVar7 + 0xd28) <= fVar2 * fVar2) {
        *(undefined4 *)(param_1 + 0x30) = 0x65;
      }
    }
    if (*(int *)(uVar7 + 0x75c) != 0) {
      iVar5 = FUN_00a95ca0(0);
      iVar4 = *(int *)(**(int **)(uVar7 + 0x75c) + 8);
      piVar6 = *(int **)(**(int **)(uVar7 + 0x75c) + 4);
      if (piVar6 != piVar6 + iVar4 * 0xf) {
        piVar1 = piVar6 + iVar4 * 0xf;
        do {
          if (*piVar6 == iVar5) {
            iVar4 = FUN_008d7f90(iVar5);
            if (iVar4 == 0) {
              *(int *)(param_1 + 0x30) = iVar5;
            }
            else {
              if (*(int *)(param_1 + 0x30) == 100) {
                iVar4 = FUN_00b8b5d0();
                if (iVar4 != 1) {
                  *(undefined4 *)(param_1 + 0x30) = 0x6d;
                }
                if ((*(int *)(uVar7 + 0x4254) != 0) &&
                   (*(float *)(uVar7 + 0x4250) <= *(float *)(*(int *)(uVar7 + 0x764) + 0xfc))) {
                  *(undefined4 *)(param_1 + 0x30) = 0x6d;
                }
              }
              FUN_00aa9280(*(undefined4 *)(param_1 + 0x30));
            }
            goto LAB_00bac01c;
          }
          piVar6 = piVar6 + 0xf;
        } while (piVar6 != piVar1);
      }
      *(undefined4 *)(param_1 + 0x30) = 0x6d;
LAB_00bac01c:
      if (*(int *)(param_1 + 0x30) == 0x6a) {
        FUN_00aa92c0(7);
      }
      if (*(int *)(param_1 + 0x30) == 0x6c) {
        FUN_00aa92c0(7);
      }
      if (*(int *)(param_1 + 0x30) == 0x6f) {
        FUN_00aa92c0(5);
      }
      if (*(int *)(param_1 + 0x30) == 0x66) {
        FUN_00aa92c0(7);
      }
      if (*(int *)(param_1 + 0x30) == 0x70) {
        FUN_00aa92c0(7);
      }
      if (*(int *)(param_1 + 0x30) == 0x67) {
        FUN_00aa92c0(0xf);
      }
      if (*(int *)(param_1 + 0x30) == 0x6d) {
        FUN_00aa92c0(6);
      }
      if (*(int *)(param_1 + 0x30) == 0x6b) {
        FUN_00aa92c0(6);
      }
      if (*(int *)(param_1 + 0x30) == 100) {
        FUN_00aa92c0(7);
      }
      if (*(int *)(param_1 + 0x30) == 0x65) {
        FUN_00aa92c0(7);
      }
      if (*(int *)(param_1 + 0x30) == 0x6e) {
        if (((*(uint *)(uVar7 + 0xcf8) & *(uint *)(uVar7 + 0xe48)) == 0) ||
           (iVar4 = FUN_00b95e30(), iVar4 == 0)) {
          uVar10 = 8;
        }
        else {
          uVar10 = 9;
        }
        FUN_00aa92c0(uVar10);
      }
    }
    if (*(int *)(*(int *)(uVar7 + 0x764) + 0x104) != 0) {
      *(undefined4 *)(*(int *)(uVar7 + 0x764) + 0x104) = 0;
    }
    if ((*(int *)(uVar7 + 0x4254) != 0) &&
       (*(float *)(uVar7 + 0x4250) <= *(float *)(*(int *)(uVar7 + 0x764) + 0xfc))) {
      uVar10 = FUN_00a95ca0(0);
      iVar4 = FUN_008d7d10(uVar10);
      if ((iVar4 != 0) && (iVar4 = FUN_008d7f90(uVar10), iVar4 != 0)) {
        FUN_00a96070(0,0x80,1);
      }
    }
    *(undefined4 *)(uVar3 + 0x10) = 0;
    *(undefined4 *)(uVar3 + 0x30) = 0;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAC1F0  LandingStatePl0010::vf18  size=158  [class]
void LandingStatePl0010::vf18(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  iVar3 = FUN_008e2740();
  if ((iVar3 == 0) &&
     ((*(int *)(uVar2 + 0x41e0) == 0 ||
      (*(float *)(*(int *)(uVar2 + 0x40d4) + 0x160) <= *(float *)(uVar2 + 0x41e4))))) {
    FUN_00d82510(0xe,0x4b);
  }
  StateMachineNode::vf18(param_1);
  return;
}

// 00BAC290  LandingStatePl0010::vf20  size=136  [class]
undefined4 LandingStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BCAA10  LandingStatePl0010::vf14  size=595  [class]
void __thiscall LandingStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  bVar8 = false;
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar7 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar7 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar6 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar7 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar7 != 0) & (uint)piVar2;
  }
  if ((*(int *)(uVar6 + 0x4254) == 0) ||
     (bVar4 = true, *(float *)(*(int *)(uVar6 + 0x764) + 0xfc) < *(float *)(uVar6 + 0x4250))) {
    bVar4 = false;
  }
  bVar3 = false;
  bVar5 = false;
  iVar7 = FUN_00a94db0(*(undefined4 *)(param_1 + 0x30));
  if ((iVar7 != 0) || (*(int *)(param_1 + 0x30) == -1)) {
    bVar3 = true;
    bVar8 = true;
    bVar5 = true;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if ((iVar7 == 0x66) || (iVar7 == 100)) {
    if (bVar4) {
      bVar8 = true;
      bVar3 = true;
    }
    if (iVar7 != 100) goto LAB_00bcaadc;
  }
  else {
LAB_00bcaadc:
    if ((((iVar7 != 0x66) && (iVar7 != 0x68)) && (iVar7 != 0x69)) && (iVar7 != 0x6e)) {
      bVar8 = true;
      bVar3 = true;
    }
  }
  iVar7 = FUN_00a9f7d0(100);
  if (iVar7 == 0) {
    iVar7 = FUN_00a9f7d0(0x6b);
    if (iVar7 != 0) goto LAB_00bcab5f;
    iVar7 = FUN_00a9f7d0(0x6a);
    if (iVar7 != 0) goto LAB_00bcab5f;
    iVar7 = FUN_00a9f7d0(0x6c);
    if (iVar7 != 0) goto LAB_00bcab5f;
    iVar7 = FUN_00a9f7d0(0x6f);
    if (iVar7 != 0) goto LAB_00bcab5f;
    iVar7 = FUN_00a9f7d0(0x68);
    if (iVar7 != 0) goto LAB_00bcab5f;
    iVar7 = FUN_00a9f7d0(0x69);
    if (iVar7 != 0) goto LAB_00bcab5f;
    iVar7 = FUN_00a9f7d0(0x6e);
    if (iVar7 != 0) goto LAB_00bcab5f;
  }
  else {
LAB_00bcab5f:
    bVar3 = true;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (((iVar7 == 0x6f) || (iVar7 == 0x6b)) ||
     ((iVar7 == 0x6a || ((iVar7 == 0x6c || (iVar7 == 0x70)))))) {
    iVar7 = FUN_00a9f7d0(iVar7);
    if (iVar7 != 0) {
      bVar8 = true;
      bVar3 = true;
    }
  }
  iVar7 = FUN_00a9f710(&DAT_016a27b0);
  if (iVar7 != 0) {
    if ((*(int *)(uVar6 + 0x41e0) == 0) || (0.36 < *(float *)(uVar6 + 0x41e4))) {
      iVar7 = FUN_008e2740();
      if (iVar7 == 0) goto LAB_00bcabdd;
    }
    FUN_00aa9280(*(undefined4 *)(param_1 + 0x30));
  }
LAB_00bcabdd:
  if (bVar3) {
    FUN_00bb8ae0(param_2,param_1,100);
  }
  if (bVar8) {
    fVar1 = *(float *)(*(int *)(uVar6 + 0x40d4) + 0x14c);
    if (fVar1 * fVar1 < *(float *)(uVar6 + 0xd28)) {
      bVar8 = (*(uint *)(uVar6 + 0xe48) & *(uint *)(uVar6 + 0xcf8)) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (!bVar8) goto LAB_00bcac4e;
      uVar10 = 10;
    }
    else {
      if ((!bVar5) && (!bVar4)) goto LAB_00bcac4e;
      uVar10 = 0x11;
    }
    FUN_00d82510(uVar10,0x32);
  }
LAB_00bcac4e:
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDF1A0  LandingStatePl0010::vf10  size=491  [class]
void __thiscall LandingStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar5 != 0) & (uint)param_2;
  }
  piVar6 = *(int **)(uVar3 + 0xc);
  if (piVar6 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar3 = -(uint)(iVar5 != 0) & (uint)piVar6;
  }
  FUN_00b8af00();
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  if ((*(int *)(param_1 + 0x30) == 100) &&
     ((fVar2 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c),
      *(float *)(uVar3 + 0xd28) <= fVar2 * fVar2 ||
      ((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe48)) == 0)))) {
    FUN_00d82510(0x11,0x32);
  }
  if (*(int *)(param_1 + 0x30) == 0x66) {
    fVar2 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
    if ((*(float *)(uVar3 + 0xd28) <= fVar2 * fVar2) ||
       ((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe48)) == 0)) {
      FUN_00d82510(0x11,0x32);
    }
    fVar2 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x14c);
    if ((fVar2 * fVar2 < *(float *)(uVar3 + 0xd28)) &&
       ((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe48)) != 0)) {
      FUN_00d82510(10,0x32);
    }
  }
  if ((*(int *)(uVar3 + 0x4254) != 0) &&
     (*(float *)(uVar3 + 0x4250) <= *(float *)(*(int *)(uVar3 + 0x764) + 0xfc))) {
    iVar4 = FUN_00a95ca0(0);
    iVar5 = *(int *)(**(int **)(uVar3 + 0x75c) + 8);
    piVar6 = *(int **)(**(int **)(uVar3 + 0x75c) + 4);
    if (piVar6 != piVar6 + iVar5 * 0xf) {
      piVar1 = piVar6 + iVar5 * 0xf;
      do {
        if (*piVar6 == iVar4) {
          iVar5 = FUN_008d7f90(iVar4);
          if (iVar5 != 0) {
            FUN_00a96070(0,0x80,1);
          }
          break;
        }
        piVar6 = piVar6 + 0xf;
      } while (piVar6 != piVar1);
    }
  }
  if ((*(uint *)(uVar3 + 0xcf8) & *(uint *)(uVar3 + 0xe48)) != 0) {
    FUN_00bd3730(param_2,param_1,0xd,0xc);
    FUN_00bd37f0(param_2,param_1,0xd);
    FUN_00bd3910(param_2,param_1,0xb,10);
    FUN_00bd39d0(param_2,param_1,10);
  }
  StateMachineNode::vf10(param_2);
  return;
}

