// src/misc/EmBaseDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8FF30..00AA8C50, 18 functions

#include "mgrr.h"
#include "EmBaseDLC.h"

// 00A8FF30  EmBaseDLC::startup  size=49  [class]
undefined4 __fastcall EmBaseDLC::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorEmBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xe80) = 0;
  *(undefined4 *)(param_1 + 0xe84) = 0;
  *(undefined4 *)(param_1 + 0xe88) = 0;
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  return 1;
}

// 00A8FF70  EmBaseDLC::vf334  size=66  [class]
void __thiscall EmBaseDLC::vf334(int *param_1,undefined4 param_2,undefined4 param_3)

{
  BehaviorEmBase::vf334(param_2,param_3);
  if ((param_1[0x294] != 0) && (param_1[0x3a0] != 0)) {
    (**(code **)(*param_1 + 0x358))(700,param_1 + 0x374);
  }
  return;
}

// 00A90010  EmBaseDLC::vf36C  size=84  [class]
void __thiscall EmBaseDLC::vf36C(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e4320(local_20);
    uVar1 = FUN_009f8b40(0);
    FUN_009577e0(param_2,local_20,uVar1);
    return;
  }
  BehaviorEmBase::vf36C(param_2);
  return;
}

// 00A90070  FUN_00a90070  size=51  [between]
undefined4 __thiscall FUN_00a90070(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xe80) == 0) &&
     (((int)(uint)*(byte *)(param_1 + 0xdae) < param_2 ||
      ((*(int *)(param_1 + 0xdb0) != 2 && (*(int *)(param_1 + 0xdb0) != -1)))))) {
    return 0;
  }
  return 1;
}

// 00A900B0  FUN_00a900b0  size=37  [between]
void __thiscall FUN_00a900b0(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc04) = param_2;
  if (param_2 != 0) {
    FUN_0093dc70();
    return;
  }
  return;
}

// 00A900E0  EmBaseDLC::vf344  size=32  [class]
void EmBaseDLC::vf344(void)

{
  BehaviorEmBase::vf344();
  return;
}

// 00A90100  FUN_00a90100  size=93  [callgraph]
void __thiscall FUN_00a90100(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_20 [28];
  
  if (param_1[0x1d9] != 0) {
    FUN_008e4320(local_20);
    FUN_00955790(0x7f9878c5,local_20,1,param_2);
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))(1,param_2);
  FUN_00955790(0x7f9878c5,uVar1);
  return;
}

// 00A9AE90  EmBaseDLC::vf48  size=97  [class]
void __fastcall EmBaseDLC::vf48(int param_1)

{
  float fVar1;
  
  BehaviorEmBase::vf48();
  if ((*(int *)(param_1 + 0xe80) != 0) &&
     (fVar1 = *(float *)(param_1 + 0xe84) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0xe84) = fVar1, fVar1 <= 0.0)) {
    *(undefined4 *)(param_1 + 0xe84) = 0;
    *(undefined4 *)(param_1 + 0xe80) = 0;
    FUN_00eaa6e0(0x40a00000,0);
    return;
  }
  return;
}

// 00A9AF00  EmBaseDLC::vf1C0  size=1068  [class]
void __thiscall EmBaseDLC::vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 00A9B610  EmBaseDLC::vf94  size=57  [class]
undefined4 __fastcall EmBaseDLC::vf94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4b0) == 0x20130) {
    return 3;
  }
  uVar2 = 2;
  FUN_00d46780();
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    uVar2 = 3;
  }
  return uVar2;
}

// 00A9B650  EmBaseDLC::vf98  size=344  [class]
int __fastcall EmBaseDLC::vf98(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x4b0);
  iVar2 = 0;
  if (uVar1 < 0x2c031) {
    if (uVar1 == 0x2c030) {
      return 0x20030;
    }
    if (uVar1 < 0x28141) {
      if (uVar1 == 0x28140) {
switchD_00a9b6d8_caseD_28142:
        return 0x20010;
      }
      if (uVar1 < 0x28034) {
        if (uVar1 == 0x28033) {
switchD_00a9b6bb_caseD_28035:
          return 0x20030;
        }
        if (uVar1 == 0x20130) {
          return 0x20130;
        }
        if (uVar1 == 0x20131) {
          return 0x20131;
        }
        if (uVar1 == 0x28030) {
          return 0x20030;
        }
      }
      else {
        switch(uVar1) {
        case 0x28035:
          goto switchD_00a9b6bb_caseD_28035;
        case 0x28070:
        case 0x28071:
switchD_00a9b6bb_caseD_28070:
          return 0x20070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9b6bb_caseD_28080;
        }
      }
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28150:
      case 0x28152:
      case 0x28160:
      case 0x28170:
        goto switchD_00a9b6d8_caseD_28142;
      }
    }
  }
  else if (uVar1 < 0x2c151) {
    if (uVar1 == 0x2c150) {
      return 0x20010;
    }
    if (uVar1 < 0x2c082) {
      if (0x2c07f < uVar1) {
switchD_00a9b6bb_caseD_28080:
        return 0x20080;
      }
      switch(uVar1) {
      case 0x2c033:
      case 0x2c035:
        goto switchD_00a9b6bb_caseD_28035;
      case 0x2c070:
      case 0x2c071:
        goto switchD_00a9b6bb_caseD_28070;
      }
    }
    else {
      if (uVar1 == 0x2c140) {
        return 0x20010;
      }
      if (uVar1 == 0x2c142) {
        return 0x20010;
      }
      if (uVar1 == 0x2c144) {
        return 0x20010;
      }
    }
  }
  else if (uVar1 < 0x2c201) {
    if (uVar1 == 0x2c200) {
      return 0x20200;
    }
    if (uVar1 == 0x2c152) {
      return 0x20010;
    }
    if (uVar1 == 0x2c160) {
      return 0x20010;
    }
    if (uVar1 == 0x2c170) {
      return 0x20010;
    }
  }
  else if ((uVar1 == 0x2c700) || (uVar1 == 0x2c70a)) {
    return 0x20700;
  }
  uVar3 = uVar1 & 0xf000;
  if ((uVar3 == 0xc000) || (uVar3 == 0xd000)) {
    iVar2 = uVar1 - 0xc000;
  }
  if ((uVar3 != 0x8000) && (uVar3 != 0x9000)) {
    return iVar2;
  }
  return uVar1 - 0x8000;
}

// 00A9B890  EmBaseDLC::vf9C  size=145  [class]
void __thiscall EmBaseDLC::vf9C(int *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_50 [16];
  char local_40 [64];
  
  _strcpy_s(local_40,0x40,param_2);
  uVar1 = (**(code **)(*param_1 + 0x94))();
  FUN_0099a460(acStack_50,"_%d_seq.bxm",uVar1);
  _strcat_s(local_40,0x40,acStack_50);
  iVar2 = FUN_00de4500(local_40);
  if ((iVar2 == 0) && (param_1[0x29f] != 0)) {
    iVar2 = FUN_00de4500(local_40);
    if (iVar2 == 0) {
      FUN_00de4500(local_40);
    }
  }
  return;
}

// 00A9B930  FUN_00a9b930  size=57  [between]
uint FUN_00a9b930(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00ac45b0();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01be9c38;
  (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00A9B970  EmBaseDLC::vf364  size=279  [class]
void __thiscall EmBaseDLC::vf364(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1[0x3a2] == 0) && (param_1[0x3a2] = 1, param_1[0x294] != 0)) &&
     (iVar1 = FUN_00c2a5b0(param_1 + 0x2ac), iVar1 != 0)) {
    if ((param_1[0x12a] & 0x10000000U) != 0) {
      iVar1 = param_1[0x2ea];
      uVar2 = FUN_00ac4700();
      uVar2 = (**(code **)(*param_1 + 0x68))(uVar2,(char)iVar1);
      lib::StaticArray<Hw::cVec3,32>::StaticArray<Hw::cVec3,32>(uVar2);
      return;
    }
    if ((param_1[0x12a] & 0x8000000U) != 0) {
      iVar1 = *param_1;
      uVar2 = FUN_00ac4700();
      (**(code **)(iVar1 + 0x36c))(uVar2);
      return;
    }
    if (param_1[0x2ff] == 0) {
      iVar1 = FUN_00ac4700();
      if (iVar1 != 0) {
        iVar1 = *param_1;
        uVar2 = FUN_00ac4700();
        (**(code **)(iVar1 + 0x36c))(uVar2);
        return;
      }
      iVar1 = FUN_00ac46d0();
      if (iVar1 == 0) {
        iVar1 = FUN_00d467a0();
        if ((iVar1 != 0) && (param_1[0x362] != 0)) {
          FUN_00a90100(300);
          return;
        }
        uVar2 = (**(code **)(*param_1 + 0x368))();
        FUN_00ac96c0(uVar2,param_2);
      }
    }
  }
  return;
}

// 00AA2780  EmBaseDLC::vf370  size=350  [class]
void __thiscall EmBaseDLC::vf370(int *param_1,float param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined *puVar5;
  
  if (param_1[0x139] != 0) {
    return;
  }
  if (param_1[0x21c] < 1) {
    return;
  }
  if (param_1[0x3a0] == 0) {
    param_1[0x3a0] = 1;
    *(undefined2 *)(param_1 + 0x209) = 5;
    param_1[0x20a] = 0x78;
    piVar1 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar1 + 0x54))();
    FUN_00e5e080("pl1400_se_btl_rage",param_1 + 0x10,0,0xffffffff,0);
    (**(code **)(*param_1 + 0x358))(700,param_1 + 0x374);
    (**(code **)(*param_1 + 0x358))(0x2bd,param_1 + 0x374);
  }
  if ((param_1[0x351] & 0x80000000U) != 0) {
    iVar3 = (int)param_2 + 0x100;
    uVar2 = FUN_00a81330(iVar3);
    FUN_00a88250(uVar2,iVar3);
  }
  param_2 = 15.0;
  iVar3 = FUN_00ac45b0();
  if ((iVar3 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar5 = &DAT_01be9c38;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c38);
    iVar3 = FUN_00dd6d80(puVar5);
    if (iVar3 != 0) {
      if (piVar1[0x1d5] == 0) {
        param_1[0x3a1] = 0;
        return;
      }
      fVar4 = (float10)(**(code **)(*(int *)piVar1[0x1d5] + 0x34))(0x98);
      param_2 = (float)fVar4;
      fVar4 = (float10)FUN_00a8fe70(0x98);
      if ((float10)0 != fVar4) goto LAB_00aa28cd;
    }
  }
  fVar4 = (float10)param_2;
LAB_00aa28cd:
  param_1[0x3a1] = (int)(float)(fVar4 * (float10)60.0);
  return;
}

// 00AA73F0  EmBaseDLC::EmBaseDLC  size=29  [class]
undefined4 * __fastcall EmBaseDLC::EmBaseDLC(undefined4 *param_1)

{
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AA7410  EmBaseDLC::vf04  size=6  [class]
undefined * EmBaseDLC::vf04(void)

{
  return &DAT_01be9c3c;
}

// 00AA8C50  EmBaseDLC::destruct  size=43  [class]
undefined4 __thiscall EmBaseDLC::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

