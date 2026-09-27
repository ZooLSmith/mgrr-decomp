// src/player/pl0010/state/DashStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81210..00BDD4E0, 14 functions

#include "mgrr.h"
#include "DashStatePl0010.h"

// 00B81210  DashStatePl0010::vf18  size=5  [class]
undefined4 __thiscall DashStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B81220  DashStatePl0010::vf24  size=19  [class]
bool DashStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81260  DashStatePl0010::vf00  size=6  [class]
undefined * DashStatePl0010::vf00(void)

{
  return &DAT_01be9e00;
}

// 00B90D00  DashStatePl0010::vf08  size=236  [class]
undefined4 __thiscall DashStatePl0010::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(uVar2 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(uVar2 + 0x3c);
  iVar1 = *(int *)(uVar2 + 0x40);
  *(int *)(param_1 + 0x4c) = iVar1;
  *(undefined4 *)(param_1 + 0x54) = 0x42700000;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(uint *)(param_1 + 0x50) = (uint)(iVar1 != 2);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return 1;
}

// 00B90DF0  DashStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall DashStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BA9990  FUN_00ba9990  size=176  [callgraph]
undefined4 FUN_00ba9990(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar1 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  if (DAT_018b9174 == 0x740) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x68))();
    if ((iVar3 == 5) && (*(int *)(uVar1 + 0x1400) != 0)) {
      return 1;
    }
  }
  if (DAT_018b9174 == 0x750) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x68))();
    if ((iVar3 == 5) && (*(int *)(uVar1 + 0x1400) != 0)) {
      return 1;
    }
  }
  return 0;
}

// 00BA9A40  FUN_00ba9a40  size=423  [callgraph]
void __thiscall FUN_00ba9a40(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined *puVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  iVar3 = FUN_00a9f760(0x3d);
  if (iVar3 == 0) {
    iVar3 = FUN_00a9f760(0x3e);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x4c) < 3) {
        FUN_00a92f90();
        iVar3 = FUN_00e26e90();
        if (iVar3 == 0) {
          fVar4 = (float10)-1.0;
        }
        else {
          fVar4 = (float10)FUN_00e36970(0);
        }
        fVar6 = (float)(fVar4 + (float10)0.016666668);
        uVar5 = 0x4d;
      }
      else {
        FUN_00a92f90();
        iVar3 = FUN_00e26e90();
        if (iVar3 == 0) {
          fVar4 = (float10)-1.0;
        }
        else {
          fVar4 = (float10)FUN_00e36970(0);
        }
        fVar6 = (float)(fVar4 + (float10)0.016666668);
        uVar5 = 0x4e;
      }
      goto LAB_00ba9bb6;
    }
  }
  FUN_00a92f90();
  iVar3 = FUN_00e26e90();
  if (iVar3 == 0) {
    fVar4 = (float10)-1.0;
  }
  else {
    fVar4 = (float10)FUN_00e36970(0);
  }
  fVar6 = (float)(fVar4 + (float10)0.016666668);
  uVar5 = 0x4f;
LAB_00ba9bb6:
  FUN_00aa4080(uVar5,5,0,0x3f800000,0x40200,fVar6,0x3f800000);
  FUN_00a96030(5,*(undefined4 *)(uVar2 + 0x53e0));
  FUN_00a95fb0(*(undefined4 *)(uVar2 + 0x53e0));
  return;
}

// 00BA9BF0  FUN_00ba9bf0  size=535  [callgraph]
void __thiscall FUN_00ba9bf0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar5 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (*(int *)(uVar5 + 0x78) == 0) {
    fVar6 = (float10)0;
    *(undefined4 *)(uVar5 + 0x78) = 1;
    *(int *)(param_1 + 0x94) = param_3;
    if (param_3 == 0) {
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 == 0) {
        fVar6 = (float10)-1.0;
      }
      else {
        fVar6 = (float10)FUN_00e36970(0);
      }
    }
    if ((DAT_01bea090 & 0x80000000) == 0) {
      FUN_00aa4080(0x487,4,0,0x3f800000,0x8040200,0,0x3f800000);
      FUN_00aa4080(0x482,3,0,0x3f800000,0x8000010,0,0x3f800000);
    }
    else {
      FUN_00aa4080(0x483,3,0x3daaaaab,0x3f800000,0x8040200,0,0x3f800000);
      if (param_3 == 0) {
        fVar2 = 0.016666668;
      }
      else {
        fVar2 = 0.0;
      }
      FUN_00aa4080(0x4d,5,0,0x3f800000,0x40200,fVar2 + (float)fVar6,0x3f800000);
      FUN_00a9e120(3,0x701,0);
    }
    FUN_00aa4080(0x146,2,0,0x3f800000,0x8040200,0,0x3f800000);
    FUN_00a95fb0(*(undefined4 *)(uVar4 + 0x53e0));
    FUN_00a96030(2,*(undefined4 *)(uVar4 + 0x53e0));
    FUN_00a96030(3,*(undefined4 *)(uVar4 + 0x53e0));
    FUN_00a96030(4,*(undefined4 *)(uVar4 + 0x53e0));
    FUN_00a96030(5,*(undefined4 *)(uVar4 + 0x53e0));
  }
  return;
}

// 00BA9E10  FUN_00ba9e10  size=186  [callgraph]
undefined4 __thiscall FUN_00ba9e10(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0xc) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(uVar1 + 0xc) + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  iVar3 = FUN_00b8afd0(local_20);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar3 == 3) {
    if (iVar2 == 2) {
      return 0x3b;
    }
    if (iVar2 == 3) {
      return 0x40;
    }
  }
  else {
    if (iVar2 == 2) {
      return 0x3c;
    }
    if (iVar2 == 3) {
      return 0x41;
    }
  }
  return 0;
}

// 00BA9ED0  FUN_00ba9ed0  size=544  [callgraph]
undefined4 __thiscall FUN_00ba9ed0(int param_1,undefined4 *param_2,int param_3,float param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar4 != 0) & (uint)piVar1;
  }
  if ((param_3 == 0x40) || (param_3 == 0x41)) {
    uVar3 = FUN_00a9f560("GearMax",param_4 * 0.016666668,0,0);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    iVar4 = FUN_00fdbc60();
    FUN_00a9f600(0xffffffff,0,0,0,0,param_3,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,-iVar4,0,0x45,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,iVar4,0,0x46,0x3daaaaab,0);
    uVar3 = *(undefined4 *)(uVar2 + 0x53e0);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
  }
  else {
    uVar3 = FUN_00a9f560("GearMin",param_4 * 0.016666668,0,0);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    iVar4 = FUN_00fdbc60();
    FUN_00a9f600(0xffffffff,0,0,0,0,param_3,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,-iVar4,0,0x43,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,iVar4,0,0x44,0x3daaaaab,0);
    FUN_00a96030(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(uVar2 + 0x53e0));
    FUN_00a95fb0(*(undefined4 *)(uVar2 + 0x53e0));
    if (*(int *)(param_1 + 0x94) == 0) goto LAB_00baa0e6;
    FUN_00aa4080(0x4d,5,param_4 * 0.016666668,0x3f800000,0x40200,0,0x3f800000);
    uVar3 = *(undefined4 *)(uVar2 + 0x53e0);
    uVar5 = 5;
  }
  FUN_00a96030(uVar5,uVar3);
  FUN_00a95fb0(*(undefined4 *)(uVar2 + 0x53e0));
LAB_00baa0e6:
  return *(undefined4 *)(param_1 + 0x3c);
}

// 00BAA0F0  DashStatePl0010::vf14  size=352  [class]
void __thiscall DashStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar5 = *(int **)(uVar2 + 0xc);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar5);
  }
  iVar3 = FUN_00a94db0(0x36);
  if (iVar3 != 0) {
    uVar7 = 0x40a00000;
    uVar4 = FUN_00ba9e10(param_2,*(undefined4 *)(param_1 + 0x4c));
    FUN_00ba9ed0(param_2,uVar4,uVar7);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  iVar3 = FUN_00a94db0(0x3d);
  if ((iVar3 != 0) || (iVar3 = FUN_00a94db0(0x3e), iVar3 != 0)) {
    uVar7 = 0x40a00000;
    uVar4 = FUN_00ba9e10(param_2,*(undefined4 *)(param_1 + 0x4c));
    FUN_00ba9ed0(param_2,uVar4,uVar7);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if ((DAT_01bea090 & 0x400000) != 0) {
    fVar1 = *(float *)(piVar5[0x109a] + 0x550);
    if (((fVar1 != 0.0) && (fVar1 <= 1.0)) && (*(float *)(piVar5[0x109a] + 0x548) <= 1.0)) {
      local_20 = 0;
      local_18 = 0;
      local_1c = fVar1;
      (**(code **)(*piVar5 + 0x70))(&local_20);
      switchD_0080dbae::default();
    }
    if (*(int *)(param_1 + 0x24) == 0x25) {
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BAA250  DashStatePl0010::vf20  size=404  [class]
undefined4 __thiscall DashStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  
  iVar4 = StateMachineNode::vf20(param_2);
  if (iVar4 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar6 + 0xc);
  if (piVar3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar4 != 0) & (uint)piVar3;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(uVar6 + 0x40) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(uVar6 + 0x38) = uVar2;
  *(undefined4 *)(uVar6 + 0x34) = 1;
  *(undefined4 *)(uVar6 + 0x3c) = uVar1;
  *(undefined4 *)(uVar5 + 0x4180) = *(undefined4 *)(uVar5 + 0x418c);
  *(undefined4 *)(uVar5 + 0x417c) = *(undefined4 *)(uVar5 + 0x4188);
  *(undefined4 *)(uVar5 + 0x4184) = *(undefined4 *)(uVar5 + 0x4190);
  FUN_00a94bc0(5,0);
  FUN_00d835f0(0x1c,0);
  *(undefined4 *)(*(int *)(uVar5 + 0x764) + 0x118) = 0;
  if ((DAT_01bea090 & 0x80000000) != 0) {
    FUN_00a9e120(3,0x711,0);
  }
  FUN_00a94bc0(4,0);
  FUN_00a94bc0(3,0);
  FUN_00a94bc0(2,0);
  if (*(int *)(param_1 + 0x24) == 0x11) {
    if (*(int *)(uVar5 + 0xb74) == 0) {
      iVar4 = FUN_00ba9990(param_2);
      if (iVar4 == 0) {
        FUN_00ba9bf0(param_2,0);
      }
    }
  }
  else if (*(int *)(uVar6 + 0x78) != 0) {
    *(undefined4 *)(uVar6 + 0x78) = 0;
    *(undefined4 *)(uVar5 + 0xb74) = 1;
    FUN_00a94bc0(4,0);
    FUN_00a94bc0(3,0);
    FUN_00a94bc0(2,0);
    return 1;
  }
  return 1;
}

// 00BC9C70  DashStatePl0010::vf0C  size=1306  [class]
void __thiscall DashStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 *local_164;
  
  if (*(int *)(param_1 + 0x20) != 0) goto LAB_00bca176;
  if (param_2 == (undefined4 *)0x0) {
    local_164 = param_2;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    local_164 = (undefined4 *)(-(uint)(iVar2 != 0) & (uint)param_2);
  }
  piVar1 = (int *)local_164[3];
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if (*(int *)(*(int *)(uVar4 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(*(int *)(uVar4 + 0x764) + 0x118) = 1;
  local_164[0x1c] = 0;
  *(undefined4 *)(uVar4 + 0x418c) = *(undefined4 *)(uVar4 + 0x4180);
  *(undefined4 *)(uVar4 + 0x4188) = *(undefined4 *)(uVar4 + 0x417c);
  *(undefined4 *)(uVar4 + 0x4190) = *(undefined4 *)(uVar4 + 0x4184);
  if ((DAT_01bea090 & 0x80000000) != 0) {
    FUN_00a9e120(3,0x711,0);
  }
  *(undefined4 *)(uVar4 + 0x5074) = 0;
  iVar2 = FUN_00a95ce0(0x68);
  if (iVar2 == 0) {
    iVar2 = FUN_00a95ce0(0x69);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(100);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x65);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x66);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x67);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x6b);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x6a);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x6c);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x6f);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x48);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x49);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0xa5);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0xa4);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0xa6);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x32);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x2e);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0xaf);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x9a);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x84);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x85);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x82);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x83);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x89);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x8a);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x87);
    if (iVar2 != 0) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0x88);
    if ((iVar2 != 0) || (*(int *)(param_1 + 0x2c) == 0x25)) goto LAB_00bca11b;
    iVar2 = FUN_00a95ce0(0xa4);
    if (iVar2 == 0) {
      iVar2 = FUN_00a95ce0(0xa5);
      if (iVar2 == 0) {
        if (local_164[0xd] == 0) {
          uVar3 = FUN_00aa9280(0x36);
          *(undefined4 *)(param_1 + 0x3c) = uVar3;
          FUN_00a95f70(0);
          uVar3 = FUN_004039a0(9,uVar4,0);
          FUN_00a8c930(0,uVar3);
          FUN_00a96030(0,*(undefined4 *)(uVar4 + 0x53e0));
          FUN_00a95fb0(*(undefined4 *)(uVar4 + 0x53e0));
        }
        else {
          uVar6 = 0;
          uVar3 = FUN_00ba9e10(param_2,*(undefined4 *)(param_1 + 0x4c));
          FUN_00ba9ed0(param_2,uVar3,uVar6);
        }
      }
      else if (local_164[0xd] == 0) {
        uVar3 = FUN_00aa9280(0x36);
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
        FUN_00a95f70(0);
        uVar3 = FUN_004039a0(9,uVar4,0);
        FUN_00a8c930(0,uVar3);
        FUN_00a96030(0,*(undefined4 *)(uVar4 + 0x53e0));
        FUN_00a95fb0(*(undefined4 *)(uVar4 + 0x53e0));
      }
      else {
        uVar3 = 0;
        if (*(int *)(param_1 + 0x4c) == 2) {
          uVar3 = 0x3c;
        }
        else if (*(int *)(param_1 + 0x4c) == 3) {
          uVar3 = 0x41;
        }
        FUN_00ba9ed0(param_2,uVar3,0x40a00000);
      }
    }
    else if (local_164[0xd] == 0) {
      uVar3 = FUN_00aa9280(0x36);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      FUN_00a95f70(0);
      uVar3 = FUN_004039a0(9,uVar4,0);
      FUN_00a8c930(0,uVar3);
      FUN_00a96030(0,*(undefined4 *)(uVar4 + 0x53e0));
      FUN_00a95fb0(*(undefined4 *)(uVar4 + 0x53e0));
    }
    else {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x4c) == 2) {
        uVar3 = 0x3b;
      }
      else if (*(int *)(param_1 + 0x4c) == 3) {
        uVar3 = 0x40;
      }
      FUN_00ba9ed0(param_2,uVar3,0x40a00000);
    }
  }
  else {
LAB_00bca11b:
    uVar6 = 0x40a00000;
    uVar3 = FUN_00ba9e10(param_2,*(undefined4 *)(param_1 + 0x4c));
    FUN_00ba9ed0(param_2,uVar3,uVar6);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  FUN_00a96070(0xffffffff,0x4000,1);
  if (*(int *)(uVar4 + 0xb74) == 0) {
    iVar2 = FUN_00ba9990(param_2);
    if (iVar2 == 0) {
      FUN_00ba9bf0(param_2,1);
    }
  }
LAB_00bca176:
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BDD4E0  DashStatePl0010::vf10  size=4115  [class]
void __thiscall DashStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  int iStack_b24;
  float local_b14;
  float local_b10;
  float local_b0c;
  float local_b08;
  undefined4 local_b04;
  float local_b00;
  float local_afc;
  float local_af8;
  float local_af0;
  float local_aec;
  float local_ae8;
  int iStack_ae0;
  int iStack_ad8;
  undefined1 auStack_acc [12];
  undefined1 local_ac0 [16];
  undefined1 local_ab0 [16];
  undefined1 local_aa0 [16];
  undefined1 auStack_a90 [288];
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined1 auStack_940 [288];
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar16 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar8 = FUN_00dd6d80(puVar16);
    uVar6 = -(uint)(iVar8 != 0) & (uint)param_2;
  }
  piVar10 = *(int **)(uVar6 + 0xc);
  if (piVar10 == (int *)0x0) {
    uVar13 = 0;
  }
  else {
    puVar16 = &DAT_01be9db8;
    (**(code **)(*piVar10 + 4))(&DAT_01be9db8);
    iVar8 = FUN_00dd6d80(puVar16);
    uVar13 = -(uint)(iVar8 != 0) & (uint)piVar10;
  }
  *(undefined4 *)(uVar13 + 0xbf0) = 1;
  puVar7 = (undefined4 *)FUN_00a925a0(local_aa0);
  *(undefined4 *)(uVar13 + 0x4210) = *puVar7;
  *(undefined4 *)(uVar13 + 0x4214) = puVar7[1];
  *(undefined4 *)(uVar13 + 0x4218) = puVar7[2];
  *(undefined4 *)(uVar13 + 0x421c) = puVar7[3];
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  FUN_00a95fb0(*(undefined4 *)(uVar13 + 0x53e0));
  if ((((**(int **)(uVar13 + 0x5070) == 0) && (*(int *)(param_1 + 0x50) != 0)) &&
      ((*(uint *)(uVar13 + 0xcf8) & *(uint *)(uVar13 + 0xe48)) != 0)) &&
     (fVar1 = *(float *)(*(int *)(uVar13 + 0x40d4) + 0x14c),
     fVar1 * fVar1 < *(float *)(uVar13 + 0xd28))) {
    if (*(float *)(param_1 + 0x48) <= 0.0) {
      if ((*(int *)(param_1 + 0x4c) < 3) &&
         (fVar1 = *(float *)(uVar6 + 8) + *(float *)(param_1 + 0x44),
         *(float *)(param_1 + 0x44) = fVar1, 1.6666666 <= fVar1)) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        uVar11 = FUN_004039a0(9,uVar13,0);
        FUN_00a8c930(0,uVar11);
        uVar11 = FUN_004039a0(8,uVar13,0);
        FUN_00a8c930(0,uVar11);
        iVar8 = FUN_00b8afd0(local_ac0);
        if (iVar8 == 3) {
          uVar11 = 0x3d;
        }
        else {
          uVar11 = 0x3e;
        }
        FUN_00aa3f60(uVar11);
        *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        FUN_00a96030(0,*(undefined4 *)(uVar13 + 0x53e0));
        FUN_00a95fb0(*(undefined4 *)(uVar13 + 0x53e0));
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x48) - *(float *)(uVar6 + 8);
      *(float *)(param_1 + 0x48) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
    }
  }
  local_b08 = *(float *)(uVar13 + 0xd0c) * -0.001;
  local_b10 = *(float *)(uVar13 + 0xd08) * 0.001;
  local_b0c = 0.0;
  iVar8 = FUN_00a9f760(0x36);
  if ((iVar8 == 0) &&
     ((((local_b10 != 0.0 || (local_b0c != 0.0)) || (local_b08 != 0.0)) &&
      (((*(float *)(param_1 + 0x70) != 0.0 || (*(float *)(param_1 + 0x74) != 0.0)) ||
       (*(float *)(param_1 + 0x78) != 0.0)))))) {
    if ((*(int *)(param_1 + 0x5c) == 0) &&
       (0.15 <= SQRT(*(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) +
                     *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) +
                     *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78)) -
                SQRT(local_b08 * local_b08 + local_b0c * local_b0c + local_b10 * local_b10))) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x74);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x5c) = 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      fVar1 = *(float *)(uVar6 + 8) + *(float *)(param_1 + 0x60);
      *(float *)(param_1 + 0x60) = fVar1;
      if (fVar1 < 0.083333336) {
        fVar1 = local_b08 * local_b08 + local_b0c * local_b0c + local_b10 * local_b10;
        if (0.7 <= SQRT(fVar1)) {
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&local_b00,&local_b10);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_b00 = 0.0;
            local_afc = 1.0;
            local_af8 = 0.0;
          }
          fVar1 = *(float *)(param_1 + 0x80);
          fVar1 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88) +
                  fVar1 * fVar1 + *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x84);
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&local_af0,(float *)(param_1 + 0x80));
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_af0 = 0.0;
            local_aec = 1.0;
            local_ae8 = 0.0;
          }
          fVar1 = local_ae8 * local_af8 + local_aec * local_afc + local_af0 * local_b00;
          if (fVar1 < -0.5 != (fVar1 == -0.5)) {
            FUN_00d82510(0x23,100);
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
  }
  *(float *)(param_1 + 0x70) = local_b10;
  *(float *)(param_1 + 0x74) = local_b0c;
  *(float *)(param_1 + 0x78) = local_b08;
  *(undefined4 *)(param_1 + 0x7c) = local_b04;
  if (*(int *)(param_1 + 0x24) != 0x23) {
    iVar8 = FUN_00a9f760(0x36);
    if ((iVar8 == 0) && (iVar8 = FUN_00a9f760(0x37), iVar8 == 0)) {
      iVar8 = *(int *)(uVar13 + 0x40d4);
      fVar1 = *(float *)(iVar8 + 0x154);
      fVar2 = *(float *)(iVar8 + 0x16c);
      *(undefined4 *)(uVar13 + 0x4180) = *(undefined4 *)(iVar8 + 0x168);
      *(float *)(uVar13 + 0x417c) = fVar2 * 0.017453292;
      *(float *)(uVar13 + 0x4184) = fVar1 * 0.017453292;
    }
    else {
      uVar11 = *(undefined4 *)(uVar13 + 0x4f0);
      *(undefined4 *)(uVar13 + 0x4180) = 0x3e99999a;
      *(undefined4 *)(uVar13 + 0x417c) = 0x40490fdb;
      *(undefined4 *)(uVar13 + 0x4184) = 0;
      uVar17 = 0x3f860a92;
      uVar15 = 0x40400000;
      uVar14 = 0x3e4ccccd;
      uVar9 = FUN_00a925a0(local_ab0);
      iVar8 = FUN_00c272e0(uVar11,uVar9,uVar14,uVar15,uVar17);
      if (iVar8 != 0) {
        piVar10 = (int *)FUN_00a7c8a0();
        iVar8 = (**(code **)(*piVar10 + 0x14c))(0x24,*(undefined4 *)(uVar13 + 0x4f0));
        if (iVar8 != 0) {
          uVar11 = FUN_00a7c7f0();
          FUN_00a7c940(uVar11);
          FUN_00a7c960(&local_b14);
          iVar8 = FUN_00a7c8a0();
          iVar8 = *(int *)(iVar8 + 0x4b4);
          if (((((((iVar8 == 0x20010) || (iVar8 == 0x20140)) || (iVar8 == 0x20141)) ||
                ((iVar8 == 0x20142 || (iVar8 == 0x20143)))) || (iVar8 == 0x20144)) ||
              (((iVar8 == 0x20145 || (iVar8 == 0x20150)) ||
               ((iVar8 == 0x20151 ||
                (((iVar8 == 0x20152 || (iVar8 == 0x20153)) || (iVar8 == 0x20160)))))))) ||
             (((iVar8 == 0x20161 || (iVar8 == 0x20170)) || (iVar8 == 0x20171)))) {
            FUN_00d82510(6,100);
          }
        }
      }
    }
    FUN_00b8af00();
  }
  bVar5 = false;
  if (((*(uint *)(uVar13 + 0xcf8) & *(uint *)(uVar13 + 0xe48)) == 0) ||
     (fVar1 = *(float *)(*(int *)(uVar13 + 0x40d4) + 0x14c),
     *(float *)(uVar13 + 0xd28) <= fVar1 * fVar1)) {
    if (*(float *)(param_1 + 0x38) <= 0.0) {
      *(undefined4 *)(param_1 + 0x38) = 0x3e2aaaab;
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) + 0.016666668;
  }
  fVar1 = *(float *)(param_1 + 0xb4);
  if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (((0.0 < *(float *)(param_1 + 0x38)) || (*(int *)(param_1 + 0x98) != 0)) ||
     (*(int *)(param_1 + 0xb0) != 0)) {
    bVar4 = true;
    *(undefined4 *)(param_1 + 0xb0) = 1;
    fVar1 = *(float *)(param_1 + 0x38) - *(float *)(uVar6 + 8);
    *(float *)(param_1 + 0x38) = fVar1;
    if ((*(int *)(uVar13 + 0x4254) == 0) ||
       (*(float *)(*(int *)(uVar13 + 0x764) + 0xfc) < *(float *)(uVar13 + 0x4250))) {
      bVar4 = false;
    }
    if ((fVar1 < 0.0 != (fVar1 == 0.0)) || (bVar4)) {
      FUN_00bb8d00(param_2,param_1,0x19,0,1);
    }
  }
  iVar8 = FUN_008e2740();
  if ((iVar8 == 0) &&
     ((*(int *)(uVar13 + 0x41e0) == 0 ||
      (*(float *)(*(int *)(uVar13 + 0x40d4) + 0x160) <= *(float *)(uVar13 + 0x41e4))))) {
    FUN_00d82510(0xe,0x50);
  }
  iVar8 = *(int *)(uVar13 + 0x40d4);
  fVar1 = *(float *)(uVar13 + 0x9f0) * 57.29578;
  if (fVar1 < *(float *)(iVar8 + 0x154)) {
    if (fVar1 <= -*(float *)(iVar8 + 0x154)) {
      fVar1 = fVar1 + *(float *)(iVar8 + 0x154);
    }
  }
  else {
    fVar1 = fVar1 - *(float *)(iVar8 + 0x154);
  }
  if (fVar1 <= -*(float *)(param_1 + 0x54)) {
    fVar1 = -*(float *)(param_1 + 0x54);
  }
  if (*(float *)(param_1 + 0x54) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x54);
  }
  local_b14 = (fVar1 - *(float *)(param_1 + 0x58)) * 0.2 * *(float *)(uVar13 + 0x910) +
              *(float *)(param_1 + 0x58);
  FUN_00a947e0(0,0,local_b14,0);
  *(float *)(param_1 + 0x58) = local_b14;
  if ((*(char *)(uVar13 + 0x1078) != '\x05') && (0.0 < *(float *)(param_1 + 0x90))) {
    fVar1 = *(float *)(param_1 + 0x90) - *(float *)(uVar6 + 8);
    *(float *)(param_1 + 0x90) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
      bVar5 = true;
    }
  }
  if (*(int *)(uVar13 + 0x2c00) != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
    bVar5 = true;
  }
  uVar12 = *(uint *)(uVar13 + 0xcfc) >> 6 & 1;
  iVar8 = FUN_00a9f760(0x36);
  if ((iVar8 != 0) || (iVar8 = FUN_00a9f760(0x37), iVar8 != 0)) {
    uVar12 = 0;
  }
  piVar10 = (int *)FUN_00c13920();
  iVar8 = (**(code **)(*piVar10 + 0x68))();
  if (((iVar8 == 5) && (*(int *)(uVar13 + 0x1400) != 0)) || (((byte)DAT_01bea094 & 0x80) != 0)) {
    uVar12 = 0;
  }
  uVar11 = FUN_00e678d0(2,0x444,0xffffffff);
  iVar8 = FUN_00e7a6e0(uVar11);
  if (iVar8 != 0) {
    uVar12 = 0;
  }
  if (bVar5) {
    iVar8 = FUN_00ba9990(param_2);
    if (iVar8 == 0) {
      FUN_00ba9bf0(param_2,0);
    }
    goto LAB_00bde2c5;
  }
  iVar8 = FUN_00a94db0(0x29a);
  if (iVar8 == 0) {
    iVar8 = FUN_00a94db0(0x29b);
    if (iVar8 != 0) {
      if (uVar12 == 0) {
        *(undefined4 *)(uVar13 + 0xb74) = 0;
        *(undefined4 *)(uVar6 + 0x78) = 0;
        goto LAB_00bddfb1;
      }
      FUN_00aa4080(0x29a,4,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
      FUN_00aa4080(0x4d,5,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
      FUN_00ba9a40(param_2);
      *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
      *(undefined4 *)(uVar13 + 0xb74) = 0;
      *(undefined4 *)(uVar6 + 0x78) = 0;
      goto LAB_00bddea6;
    }
    if (uVar12 == 0) {
LAB_00bde212:
      iVar8 = FUN_00a94db0(0x482);
      if ((iVar8 != 0) || (iVar8 = FUN_00a94db0(0x483), iVar8 != 0)) {
        *(undefined4 *)(uVar6 + 0x78) = 0;
        *(undefined4 *)(uVar13 + 0xb74) = 1;
        FUN_00a94bc0(2,0);
        FUN_00a94bc0(3,0x3dcccccd);
        FUN_00a94bc0(4,0);
        FUN_00a94bc0(5,0x3dcccccd);
        if ((DAT_01bea090 & 0x80000000) != 0) {
          FUN_00a9e120(3,0x711,0);
        }
      }
    }
    else {
      iVar8 = FUN_00a9f760(0x29a);
      if (iVar8 == 0) {
        iVar8 = FUN_00a8c760(1);
        if ((iVar8 != 0) || (iVar8 = FUN_00a9f760(0x29b), iVar8 == 0)) {
          FUN_00aa4080(0x29a,4,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
          FUN_00aa4080(0x146,3,0,0x3f800000,0x8040200,0,0x3f800000);
          FUN_00aa4080(0x4d,5,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
LAB_00bde199:
          FUN_00ba9a40(param_2);
          *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
          *(undefined4 *)(uVar13 + 0xb74) = 0;
          *(undefined4 *)(uVar6 + 0x78) = 0;
          if ((DAT_01bea090 & 0x80000000) != 0) {
            FUN_00a9e120(3,0x711,0);
          }
          FUN_00a95fb0(*(undefined4 *)(uVar13 + 0x53e0));
          FUN_00a96030(3,*(undefined4 *)(uVar13 + 0x53e0));
          FUN_00a96030(4,*(undefined4 *)(uVar13 + 0x53e0));
        }
      }
      else {
        iVar8 = FUN_00a9f760(0x29b);
        if (iVar8 != 0) goto LAB_00bde212;
        iVar8 = FUN_00a8c760(1);
        if ((iVar8 != 0) || (iVar8 = FUN_00a9f760(0x29a), iVar8 == 0)) {
          FUN_00aa4080(0x29b,4,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
          FUN_00aa4080(0x146,3,0,0x3f800000,0x8040200,0,0x3f800000);
          FUN_00aa4080(0x4d,5,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
          goto LAB_00bde199;
        }
      }
    }
  }
  else {
    if (uVar12 == 0) {
      *(undefined4 *)(uVar13 + 0xb74) = 0;
      *(undefined4 *)(uVar6 + 0x78) = 0;
LAB_00bddfb1:
      if ((DAT_01bea090 & 0x80000000) != 0) {
        FUN_00a9e120(3,0x711,0);
      }
      *(undefined4 *)(param_1 + 0x90) = 0x40000000;
      FUN_00a94bc0(4,0x3daaaaab);
      FUN_00a94bc0(5,0x3daaaaab);
      goto LAB_00bde2c5;
    }
    FUN_00aa4080(0x29b,4,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
    FUN_00aa4080(0x4d,5,0x3d888889,0x3f800000,0x8040200,0,0x3f800000);
    FUN_00ba9a40(param_2);
    *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
    *(undefined4 *)(uVar13 + 0xb74) = 0;
    *(undefined4 *)(uVar6 + 0x78) = 0;
LAB_00bddea6:
    if ((DAT_01bea090 & 0x80000000) != 0) {
      FUN_00a9e120(3,0x711,0);
    }
    FUN_00a96030(4,*(undefined4 *)(uVar13 + 0x53e0));
    FUN_00a95fb0(*(undefined4 *)(uVar13 + 0x53e0));
  }
LAB_00bde2c5:
  iVar8 = FUN_00a955e0(0x36,0x41800000);
  if (iVar8 == 0) {
    iVar8 = FUN_00a955e0(0x37,0x41800000);
    if (iVar8 == 0) goto LAB_00bde431;
    if (*(int *)(uVar13 + 0x594) == 2) {
      uVar11 = FUN_004039a0(0xb,uVar13,0);
      FUN_00a963e0(uVar11);
    }
    if (*(int *)(uVar13 + 0x598) == 2) {
      uVar11 = FUN_004039a0(10,uVar13,0);
      FUN_00a963e0(uVar11);
    }
    FUN_004039a0(10,uVar13,0);
    uStack_820 = *(undefined4 *)(uVar13 + 0x5c0);
    puVar18 = auStack_940;
    uStack_81c = *(undefined4 *)(uVar13 + 0x5c4);
    uStack_818 = *(undefined4 *)(uVar13 + 0x5c8);
    uStack_814 = *(undefined4 *)(uVar13 + 0x5cc);
  }
  else {
    if (*(int *)(uVar13 + 0x594) == 2) {
      uVar11 = FUN_004039a0(0xb,uVar13,0);
      FUN_00a963e0(uVar11);
    }
    if (*(int *)(uVar13 + 0x598) == 2) {
      uVar11 = FUN_004039a0(10,uVar13,0);
      FUN_00a963e0(uVar11);
    }
    FUN_004039a0(10,uVar13,0);
    uStack_970 = *(undefined4 *)(uVar13 + 0x5b0);
    puVar18 = auStack_a90;
    uStack_96c = *(undefined4 *)(uVar13 + 0x5b4);
    uStack_968 = *(undefined4 *)(uVar13 + 0x5b8);
    uStack_964 = *(undefined4 *)(uVar13 + 0x5bc);
  }
  FUN_00a8c930(0,puVar18);
LAB_00bde431:
  iVar8 = FUN_00a9f760(0x29a);
  if ((iVar8 == 0) && (iVar8 = FUN_00a9f760(0x29b), iVar8 == 0)) {
    FUN_00bb8ae0(param_2,param_1,100);
  }
  piVar10 = (int *)FUN_00c1bd10();
  piVar10 = (int *)(**(code **)(*piVar10 + 8))(auStack_acc,uVar13 + 0x40);
  *(int *)(iStack_b24 + 0xc4) = *piVar10;
  *(int *)(iStack_b24 + 200) = piVar10[1];
  *(int *)(iStack_b24 + 0xcc) = piVar10[2];
  iVar8 = *piVar10;
  iVar3 = piVar10[2];
  if ((piVar10[1] != 0) &&
     (((iVar8 != 0 || (iVar3 != 0)) && (iStack_ae0 = iVar8, iStack_ad8 = iVar3, piVar10[1] == 1))))
  {
    FUN_00d82510(0x1d,100);
  }
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

