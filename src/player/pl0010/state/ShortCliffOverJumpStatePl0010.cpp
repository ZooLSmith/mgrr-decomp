// src/player/pl0010/state/ShortCliffOverJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B824B0..00BE0C60, 13 functions

#include "mgrr.h"
#include "ShortCliffOverJumpStatePl0010.h"

// 00B824B0  FUN_00b824b0  size=127  [callgraph]
undefined4 FUN_00b824b0(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 != param_2) {
    switch(param_1) {
    case 0x87:
      if (param_2 == 0x88) {
        return 1;
      }
      if (param_2 == 0x83) {
        return 1;
      }
      bVar1 = param_2 == 0x82;
      break;
    case 0x88:
      if (param_2 == 0x87) {
        return 1;
      }
      if (param_2 == 0x82) {
        return 1;
      }
      bVar1 = param_2 == 0x83;
      break;
    case 0x89:
      if (param_2 == 0x8a) {
        return 1;
      }
      if (param_2 == 0x85) {
        return 1;
      }
      bVar1 = param_2 == 0x84;
      break;
    case 0x8a:
      if (param_2 == 0x89) {
        return 1;
      }
      if (param_2 == 0x84) {
        return 1;
      }
      bVar1 = param_2 == 0x85;
      break;
    default:
      goto switchD_00b824cf_default;
    }
    if (!bVar1) {
switchD_00b824cf_default:
      return 0;
    }
  }
  return 1;
}

// 00B82540  ShortCliffOverJumpStatePl0010::vf08  size=37  [class]
undefined4 __thiscall ShortCliffOverJumpStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return 1;
}

// 00B82570  ShortCliffOverJumpStatePl0010::vf18  size=5  [class]
undefined4 __thiscall ShortCliffOverJumpStatePl0010::vf18(int param_1,undefined4 param_2)

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

// 00B82580  ShortCliffOverJumpStatePl0010::vf24  size=19  [class]
bool ShortCliffOverJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B825C0  ShortCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined * ShortCliffOverJumpStatePl0010::vf00(void)

{
  return &DAT_01be9e6c;
}

// 00B91250  ShortCliffOverJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall ShortCliffOverJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BB1050  FUN_00bb1050  size=155  [callgraph]
float10 FUN_00bb1050(undefined4 *param_1,undefined4 param_2,float param_3)

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
  switch(param_2) {
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
    return (float10)param_3 / (float10)*(float *)(*(int *)(uVar2 + 0x40d4) + 0x48);
  default:
    return (float10)param_3 / (float10)*(float *)(*(int *)(uVar2 + 0x40d4) + 0x50);
  case 0x8c:
  case 0x8d:
    return (float10)param_3 / (float10)*(float *)(*(int *)(uVar2 + 0x40d4) + 0x44);
  }
}

// 00BB1110  FUN_00bb1110  size=330  [callgraph]
int FUN_00bb1110(undefined4 *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined1 local_20 [28];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar7 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar8);
    uVar5 = -(uint)(iVar6 != 0) & (uint)piVar2;
  }
  if (param_2 == 0) {
    iVar6 = *(int *)(*(int *)(uVar7 + 0xc0) + 4) + 0xe0;
  }
  else {
    iVar6 = *(int *)(*(int *)(uVar7 + 0xc0) + 4) + 0x70;
  }
  fVar1 = *(float *)(*(int *)(uVar5 + 0x40d4) + 0x84);
  bVar3 = fVar1 < *(float *)(iVar6 + 0xc) != (fVar1 == *(float *)(iVar6 + 0xc));
  bVar4 = *(float *)(iVar6 + 0x10) <= -0.3;
  iVar6 = FUN_00b8afd0(local_20);
  if (iVar6 != 3) {
    if (bVar4) {
      return (-(uint)(param_2 != 0) & 0xfffffffb) + 0x89;
    }
    if (bVar3) {
      return (-(uint)(param_2 != 0) & 0xfffffffb) + 0x87;
    }
    return 0x8c;
  }
  if (bVar4) {
    return (-(uint)(param_2 != 0) & 0xfffffffb) + 0x8a;
  }
  if (bVar3) {
    return (-(uint)(param_2 != 0) & 0xfffffffb) + 0x88;
  }
  return 0x8d;
}

// 00BB1260  FUN_00bb1260  size=616  [callgraph]
void __thiscall
FUN_00bb1260(int param_1,undefined4 *param_2,int param_3,float param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
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
  uVar3 = FUN_00a9f4c0("CliffOverShort",param_5,0x8030000,0);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  if (param_3 == 0x8c) {
    FUN_00a9f600(0xffffffff,0,0,0,1,0x8c,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,2,0x8e,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,3,0x90,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,4,0x92,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,5,0x94,param_5,0x8030000);
    uVar3 = 0x96;
  }
  else {
    if (param_3 != 0x8d) goto LAB_00bb147c;
    FUN_00a9f600(0xffffffff,0,0,0,1,0x8d,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,2,0x8f,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,3,0x91,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,4,0x93,param_5,0x8030000);
    FUN_00a9f600(0xffffffff,0,0,0,5,0x95,param_5,0x8030000);
    uVar3 = 0x97;
  }
  FUN_00a9f600(0xffffffff,0,0,0,6,uVar3,param_5,0x8030000);
LAB_00bb147c:
  FUN_00a947e0(*(undefined4 *)(param_1 + 0x34),0,0,param_4 * 6.0);
  FUN_00a95e60(*(undefined4 *)(param_1 + 0x34),0x3c888889);
  FUN_00a95fb0(0x3f800000);
  return;
}

// 00BB14D0  ShortCliffOverJumpStatePl0010::vf0C  size=540  [class]
void __thiscall ShortCliffOverJumpStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined *puVar12;
  float local_30;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar12 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar5 = FUN_00dd6d80(puVar12);
      uVar8 = -(uint)(iVar5 != 0) & (uint)param_2;
    }
    piVar4 = *(int **)(uVar8 + 0xc);
    if (piVar4 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar12 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar5 = FUN_00dd6d80(puVar12);
      uVar7 = -(uint)(iVar5 != 0) & (uint)piVar4;
    }
    *(undefined4 *)(uVar7 + 0x418c) = *(undefined4 *)(uVar7 + 0x4180);
    *(undefined4 *)(uVar7 + 0x4188) = *(undefined4 *)(uVar7 + 0x417c);
    *(undefined4 *)(uVar7 + 0x4190) = *(undefined4 *)(uVar7 + 0x4184);
    iVar5 = *(int *)(*(int *)(uVar8 + 0xc0) + 4);
    fVar1 = *(float *)(*(int *)(uVar7 + 0x40d4) + 0x84);
    fVar2 = *(float *)(iVar5 + 0x7c);
    fVar3 = *(float *)(iVar5 + 0x80);
    uVar6 = FUN_00bb1110(param_2,1);
    *(undefined4 *)(param_1 + 0x30) = uVar6;
    fVar9 = (float10)FUN_00bb1050(param_2,uVar6,*(undefined4 *)(iVar5 + 0x78));
    local_28 = *(float *)(iVar5 + 0x7c) / *(float *)(*(int *)(uVar7 + 0x40d4) + 100);
    if ((fVar1 < fVar2 == (fVar1 == fVar2)) && (-0.3 < fVar3)) {
      local_28 = (float)(float10)1;
    }
    fVar10 = (float10)1 / fVar9;
    local_30 = (float)fVar10;
    fVar11 = (float10)1.15;
    if (fVar11 < fVar10 == (fVar11 == fVar10)) {
      if (fVar10 <= (float10)0.85) {
        local_30 = (float)(float10)0.85;
      }
    }
    else {
      local_30 = (float)fVar11;
    }
    iVar5 = *(int *)(param_1 + 0x30);
    if ((iVar5 == 0x8c) || (iVar5 == 0x8d)) {
      FUN_00bb1260(param_2,iVar5,(float)fVar9,0x3d4ccccd);
    }
    else {
      uVar6 = FUN_00aa3f60(iVar5);
      FUN_00a96030(uVar6,local_30);
      local_1c = local_28;
      local_20 = (float)fVar9;
      local_18 = (float)fVar9;
      FUN_00a95ff0(&local_20);
      FUN_00a95f70(0x3d088889);
    }
    iVar5 = *(int *)(uVar7 + 0x764);
    if (*(int *)(iVar5 + 0x104) != 1) {
      *(undefined4 *)(iVar5 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
    }
    *(undefined4 *)(uVar7 + 0x4170) = 1;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BB16F0  ShortCliffOverJumpStatePl0010::vf20  size=198  [class]
undefined4 __thiscall ShortCliffOverJumpStatePl0010::vf20(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
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
  if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
    *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
  }
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  if (*(int *)(param_1 + 0x34) != -1) {
    FUN_00a94bc0(*(int *)(param_1 + 0x34),0);
  }
  return 1;
}

// 00BCC5F0  ShortCliffOverJumpStatePl0010::vf14  size=773  [class]
void __thiscall ShortCliffOverJumpStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined8 uVar14;
  undefined *puVar15;
  float local_38;
  float local_30;
  undefined4 local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar15 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar6 = FUN_00dd6d80(puVar15);
    uVar9 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar4 = *(int **)(uVar9 + 0xc);
  if (piVar4 == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar15 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar15);
    uVar10 = -(uint)(iVar6 != 0) & (uint)piVar4;
  }
  iVar6 = FUN_00a8c760(0x1c);
  if (iVar6 != 0) {
    *(undefined4 *)(uVar10 + 0x4170) = 0;
  }
  uVar7 = FUN_00a8c6b0(*(undefined4 *)(param_1 + 0x30));
  iVar6 = FUN_00a94d60(uVar7);
  if (iVar6 != 0) {
    iVar6 = *(int *)(*(int *)(uVar9 + 0xc0) + 4);
    if ((*(int *)(iVar6 + 0xe4) == 0) || (*(int *)(uVar9 + 0x7c) != 0)) {
      if (*(int *)(*(int *)(uVar10 + 0x764) + 0x104) != 0) {
        *(undefined4 *)(*(int *)(uVar10 + 0x764) + 0x104) = 0;
      }
      iVar6 = FUN_008e2740();
      if ((iVar6 == 0) &&
         ((*(int *)(uVar10 + 0x41e0) == 0 ||
          (*(float *)(*(int *)(uVar10 + 0x40d4) + 0x160) <= *(float *)(uVar10 + 0x41e4))))) {
        FUN_00d82510(0xe,100);
      }
      FUN_00bb8d00(param_2,param_1,0x32,0,1);
      FUN_00bb8ae0(param_2,param_1,100);
    }
    else {
      uVar7 = *(undefined4 *)(iVar6 + 0xe8);
      fVar1 = *(float *)(iVar6 + 0xec);
      fVar2 = *(float *)(iVar6 + 0xf0);
      fVar3 = *(float *)(*(int *)(uVar10 + 0x40d4) + 0x84);
      uVar5 = *(undefined4 *)(param_1 + 0x30);
      uVar8 = FUN_00bb1110(param_2,0);
      local_2c = 0;
      *(undefined4 *)(param_1 + 0x30) = uVar8;
      uVar14 = FUN_00b824b0(uVar8,uVar5);
      if ((int)uVar14 == 0) {
        local_2c = 0x3d088889;
      }
      fVar11 = (float10)FUN_00bb1050(param_2,(int)((ulonglong)uVar14 >> 0x20),uVar7);
      local_30 = fVar1 / *(float *)(*(int *)(uVar10 + 0x40d4) + 100);
      if ((fVar3 < fVar1 == (fVar3 == fVar1)) && (fVar2 < -0.3 == (fVar2 == -0.3))) {
        local_30 = (float)(float10)1;
      }
      fVar12 = (float10)1 / fVar11;
      local_38 = (float)fVar12;
      fVar13 = (float10)1.15;
      if (fVar13 < fVar12 == (fVar13 == fVar12)) {
        if (fVar12 <= (float10)0.85) {
          local_38 = (float)(float10)0.85;
        }
      }
      else {
        local_38 = (float)fVar13;
      }
      iVar6 = *(int *)(param_1 + 0x30);
      if ((iVar6 == 0x8c) || (iVar6 == 0x8d)) {
        FUN_00bb1260(param_2,iVar6,(float)fVar11,0);
      }
      else {
        if (*(int *)(param_1 + 0x34) != -1) {
          FUN_00a94bc0(*(int *)(param_1 + 0x34),0);
        }
        uVar7 = FUN_00aa3f60(*(undefined4 *)(param_1 + 0x30));
        FUN_00a96030(uVar7,local_38);
        FUN_00a96070(uVar7,0x4000,1);
        local_1c = local_30;
        local_20 = (float)fVar11;
        local_18 = (float)fVar11;
        FUN_00a95ff0(&local_20);
        FUN_00a95f70(local_2c);
      }
      iVar6 = *(int *)(uVar10 + 0x764);
      if (*(int *)(iVar6 + 0x104) != 1) {
        *(undefined4 *)(iVar6 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
        StateMachineNode::vf14(param_2);
        return;
      }
    }
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 00BE0C60  ShortCliffOverJumpStatePl0010::vf10  size=227  [class]
void __thiscall ShortCliffOverJumpStatePl0010::vf10(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
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
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x174);
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x170);
  *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
  *(undefined4 *)(uVar3 + 0x4184) = 0;
  FUN_00b8af00();
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  FUN_00bb9020(param_2,param_1);
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

