// src/player/pl0010/state/IdleStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B816D0..00BCA750, 10 functions

#include "types.h"

// 00B816D0  IdleStatePl0010::vf08  size=37  [class]
undefined4 __thiscall IdleStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return 1;
}

// 00B81700  IdleStatePl0010::vf24  size=19  [class]
bool IdleStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81740  IdleStatePl0010::vf00  size=6  [class]
undefined * IdleStatePl0010::vf00(void)

{
  return &DAT_01be9e1c;
}

// 00B90FC0  IdleStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall IdleStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAB310  FUN_00bab310  size=296  [callgraph]
int __thiscall FUN_00bab310(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar4 + 0xc) != (int *)0x0) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar4 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar5);
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(uVar4 + 0x40);
  if (((((iVar3 == 10) || (iVar3 == 0x23)) || (iVar2 = FUN_00a95ce0(0x68), iVar2 != 0)) ||
      ((iVar2 = FUN_00a95ce0(0x69), iVar2 != 0 || (iVar2 = FUN_00a95ce0(100), iVar2 != 0)))) &&
     (2 < iVar1 || iVar3 != 10)) {
    iVar3 = FUN_00b8afd0(local_20);
    if (iVar3 == 3) {
      FUN_00aa92c0(0x20);
      return 8;
    }
    FUN_00aa92c0(0x21);
    return 9;
  }
  if ((*(int *)(param_1 + 0x2c) != 0x25) && (*(int *)(param_1 + 0x2c) != 10)) {
    return -1;
  }
  iVar3 = FUN_00b8afd0(local_20);
  return (iVar3 != 3) + 10;
}

// 00BAB440  IdleStatePl0010::vf0C  size=303  [class]
void __thiscall IdleStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar6 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar5 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar6 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    iVar2 = FUN_00bab310(param_2);
    *(undefined4 *)(uVar5 + 0x38) = 0;
    *(undefined4 *)(uVar5 + 0x3c) = 0;
    *(undefined4 *)(uVar5 + 0x40) = 2;
    *(undefined4 *)(uVar5 + 0x70) = 0;
    FUN_00a8c9b0(0,8,0x3e4ccccd,0);
    *(undefined4 *)(uVar4 + 0x894) = 0;
    *(undefined4 *)(uVar4 + 0x5074) = 0;
    if (*(int *)(param_1 + 0x2c) == 0x44) {
      FUN_00aa3f60(6);
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    else {
      if (iVar2 < 0) {
        *(undefined4 *)(uVar4 + 0x5080) = 1;
        if (*(int *)(uVar4 + 0xb74) == 0) {
          uVar3 = 5;
        }
        else {
          uVar3 = 4;
        }
        FUN_00aa3f60(uVar3);
      }
      else {
        uVar3 = FUN_00aa3f60(iVar2);
        *(undefined4 *)(param_1 + 0x34) = uVar3;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if ((DAT_01bea090 & 0x80000000) != 0) {
      FUN_00a94bc0(5,0);
      FUN_00a94bc0(4,0);
    }
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAB570  IdleStatePl0010::vf14  size=418  [class]
void __thiscall IdleStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00a94db0(0x482);
  if ((iVar2 != 0) || (iVar2 = FUN_00a94db0(0x483), iVar2 != 0)) {
    *(undefined4 *)(uVar5 + 0x78) = 0;
    *(undefined4 *)(uVar4 + 0xb74) = 1;
    FUN_00a94bc0(5,0);
    FUN_00a94bc0(4,0);
    FUN_00a94bc0(3,0);
    FUN_00a94bc0(2,0);
    if ((DAT_01bea090 & 0x80000000) != 0) {
      FUN_00a9e120(3,0x711,0);
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar2 = *(int *)(uVar4 + 0xb74);
    iVar3 = FUN_00a94db0(8);
    if (((((iVar3 != 0) || (iVar3 = FUN_00a94db0(9), iVar3 != 0)) ||
         (iVar3 = FUN_00a94db0(10), iVar3 != 0)) || (iVar3 = FUN_00a94db0(0xb), iVar3 != 0)) &&
       ((((DAT_01bea090 & 0x80000000) == 0 || (iVar2 != 0)) || (iVar2 = FUN_00a94ce0(3), iVar2 != 0)
        ))) {
      *(undefined4 *)(uVar4 + 0x5080) = 1;
      FUN_00aa9280(5);
    }
  }
  else {
    iVar2 = FUN_00a94db0(7);
    if (iVar2 != 0) {
      *(undefined4 *)(uVar4 + 0x5080) = 1;
      FUN_00aa9280(5);
      *(undefined4 *)(param_1 + 0x30) = 0;
      StateMachineNode::vf14();
      return;
    }
  }
  StateMachineNode::vf14();
  return;
}

// 00BAB720  IdleStatePl0010::vf18  size=158  [class]
void IdleStatePl0010::vf18(undefined4 *param_1)

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
    FUN_00d82510(0xe,100);
  }
  StateMachineNode::vf18(param_1);
  return;
}

// 00BAB7C0  IdleStatePl0010::vf20  size=234  [class]
undefined4 IdleStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  FUN_00d835f0(0x1c,0);
  if (*(int *)(uVar4 + 0x78) != 0) {
    *(undefined4 *)(uVar4 + 0x78) = 0;
    *(undefined4 *)(uVar3 + 0xb74) = 1;
    FUN_00a94bc0(5,0);
    FUN_00a94bc0(4,0);
    FUN_00a94bc0(3,0);
    FUN_00a94bc0(2,0);
    if ((DAT_01bea090 & 0x80000000) != 0) {
      FUN_00a9e120(3,0x711,0);
    }
  }
  return 1;
}

// 00BCA750  IdleStatePl0010::vf10  size=693  [class]
void __thiscall IdleStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  undefined *puVar9;
  
  puVar4 = param_2;
  uVar7 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar9 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar5 = FUN_00dd6d80(puVar9);
    param_2 = (undefined4 *)(-(uint)(iVar5 != 0) & (uint)param_2);
  }
  piVar2 = *(int **)((int)param_2 + 0xc);
  if (piVar2 != (int *)0x0) {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar9);
    uVar7 = -(uint)(iVar5 != 0) & (uint)piVar2;
  }
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  bVar3 = false;
  iVar5 = FUN_00a9f760(8);
  if ((((iVar5 == 0) && (iVar5 = FUN_00a9f760(9), iVar5 == 0)) &&
      (iVar5 = FUN_00a9f760(10), iVar5 == 0)) &&
     ((iVar5 = FUN_00a9f760(0xb), iVar5 == 0 && (*(int *)(uVar7 + 0xb74) != 0)))) {
    bVar3 = true;
  }
  iVar5 = FUN_00a9f7d0(8);
  if (((iVar5 == 0) && (iVar5 = FUN_00a9f7d0(9), iVar5 == 0)) &&
     ((iVar5 = FUN_00a9f7d0(10), iVar5 == 0 && (iVar5 = FUN_00a9f7d0(0xb), iVar5 == 0)))) {
    if (!bVar3) goto LAB_00bca894;
  }
  else if ((!bVar3) &&
          (fVar1 = *(float *)(*(int *)(uVar7 + 0x40d4) + 0x14c),
          *(float *)(uVar7 + 0xd28) <= fVar1 * fVar1)) goto LAB_00bca894;
  if (*(int *)(param_1 + 0x24) != 5) {
    FUN_00bb8ae0(puVar4,param_1,0x32);
    FUN_00bb8d00(puVar4,param_1,0x19,1,1);
    FUN_00bb8dd0(puVar4,param_1,0x4b);
    *(undefined4 *)(uVar7 + 0x5080) = 1;
  }
LAB_00bca894:
  if ((((*(int *)(uVar7 + 0x4254) != 0) &&
       (*(float *)(uVar7 + 0x4250) <= *(float *)(*(int *)(uVar7 + 0x764) + 0xfc))) &&
      ((iVar5 = FUN_00a9f760(8), iVar5 != 0 ||
       (((iVar5 = FUN_00a9f760(9), iVar5 != 0 || (iVar5 = FUN_00a9f760(10), iVar5 != 0)) ||
        (iVar5 = FUN_00a9f760(0xb), iVar5 != 0)))))) && (*(int *)(param_1 + 0x34) != -1)) {
    iVar5 = FUN_00a95270(8,0x1e);
    if ((iVar5 != 0) || (iVar5 = FUN_00a95270(9,0x1e), iVar5 != 0)) {
      uVar6 = FUN_00aa9280(0xd);
      *(undefined4 *)(param_1 + 0x34) = uVar6;
    }
    FUN_00a96070(*(undefined4 *)(param_1 + 0x34),0x80,1);
  }
  if (((*(uint *)(uVar7 + 0xcf8) & *(uint *)(uVar7 + 0xe48)) == 0) &&
     (160000.0 < *(float *)(uVar7 + 0xd28))) {
    fVar1 = *(float *)(*(int *)(uVar7 + 0x764) + 0xfc);
    fVar8 = (float10)hkBaseObject::hkBaseObject_209();
    iVar5 = *(int *)(*(int *)((int)param_2 + 0xc0) + 4);
    fVar8 = fVar8 + fVar8 + (float10)fVar1;
    if ((*(int *)(iVar5 + 900) != 0) && ((float10)*(float *)(iVar5 + 0x388) <= fVar8)) {
      FUN_00d82510(0x16,100);
      fVar8 = (float10)(float)fVar8;
    }
    iVar5 = *(int *)(*(int *)((int)param_2 + 0xc0) + 4);
    if ((*(int *)(iVar5 + 0x234) != 0) && ((float10)*(float *)(iVar5 + 0x238) <= fVar8)) {
      FUN_00d82510(0x15,100);
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (fVar1 = *(float *)(param_1 + 8), !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) {
    FUN_00aa9280(7);
  }
  StateMachineNode::vf10(puVar4);
  return;
}

