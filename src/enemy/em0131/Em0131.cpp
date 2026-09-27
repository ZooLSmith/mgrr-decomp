// src/enemy/em0131/Em0131.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00606970..00ABA510, 32 functions

#include "mgrr.h"
#include "Em0131.h"

// 00606970  Em0131::vf48  size=18  [class]
void Em0131::vf48(void)

{
  if ((DAT_01bea070 & 0x20000000) == 0) {
    EmBaseDLC::vf48();
    return;
  }
  return;
}

// 00606990  Em0131::vf50  size=32  [class]
void __fastcall Em0131::vf50(int param_1)

{
  FUN_00a93170();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  return;
}

// 006069C0  FUN_006069c0  size=53  [between]
void __fastcall FUN_006069c0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00ac8d40(1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00606A10  Em0131::vf1A4  size=3  [class]
void Em0131::vf1A4(void)

{
  return;
}

// 00606A20  Em0131::vf1A0  size=5  [class]
undefined4 Em0131::vf1A0(void)

{
  return 0;
}

// 00606A30  FUN_00606a30  size=77  [between]
void FUN_00606a30(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        FUN_00a81330();
        piVar2 = (int *)FUN_00a7c8a0();
      }
                    /* WARNING: Could not recover jumptable at 0x00606a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x20))();
      return;
    }
  }
  return;
}

// 00606AB0  Em0131::vf34C  size=57  [class]
void __fastcall Em0131::vf34C(int *param_1)

{
  (**(code **)(*param_1 + 0x1f8))(0);
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x22a] = 0;
  FUN_00a8caf0(0x10000,0,0,0);
  return;
}

// 00606AF0  FUN_00606af0  size=28  [between]
void FUN_00606af0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 00606B10  Em0131::vf33C  size=14  [class]
void Em0131::vf33C(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x18) = 0x42131;
  return;
}

// 00606B20  Em0131::vf260  size=3  [class]
void Em0131::vf260(void)

{
  return;
}

// 00606B30  Em0131::vf338  size=3  [class]
void Em0131::vf338(void)

{
  return;
}

// 00606B40  Em0131::thunk_vf1BC  size=5  [class]
void __thiscall Em0131::thunk_vf1BC(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  piVar1 = param_2;
  param_1[0x20f] = param_2[0x147];
  puVar4 = &DAT_01be9ca0;
  (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
  iVar2 = FUN_00dd6d80(puVar4);
  if (iVar2 == 0) {
    if (piVar1[0x20f] == 0) goto LAB_00a96635;
    uVar5 = 0;
LAB_00a96621:
    param_2 = (int *)param_1[0x13c];
  }
  else {
    iVar2 = FUN_00acdea0();
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x83c) == 0) goto LAB_00a96635;
      puVar4 = &DAT_01be9ca0;
      (**(code **)(*param_1 + 4))(&DAT_01be9ca0);
      iVar3 = FUN_00dd6d80(puVar4);
      if (iVar3 != 0) goto LAB_00a96635;
      uVar5 = *(undefined4 *)(iVar2 + 0xa50);
      goto LAB_00a96621;
    }
    iVar2 = FUN_00d46780();
    if ((iVar2 != 0) && ((piVar1[300] == 0x2c08e || (piVar1[300] == 0x2c08f)))) {
      param_2 = (int *)param_1[0x13c];
      DebrisExplodeManager::addHandle(&param_2,0);
    }
    iVar2 = FUN_00d467a0();
    if ((iVar2 != 0) && ((piVar1[300] == 0x2808e || (piVar1[300] == 0x2808f)))) {
      param_2 = (int *)param_1[0x13c];
      DebrisExplodeManager::addHandle(&param_2,0);
    }
    iVar2 = FUN_00d467a0();
    if ((iVar2 == 0) || (piVar1[300] != 0x20133)) goto LAB_00a96635;
    param_2 = (int *)param_1[0x13c];
    uVar5 = 0;
  }
  DebrisExplodeManager::addHandle(&param_2,uVar5);
LAB_00a96635:
  param_1[0x210] = piVar1[0x210];
  param_1[0x211] = piVar1[0x211];
  return;
}

// 00606B50  Em0131::vf1C0  size=5  [class]
void __thiscall Em0131::vf1C0(int param_1,int *param_2,undefined4 param_3)

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

// 00608FC0  FUN_00608fc0  size=198  [callgraph]
void __fastcall FUN_00608fc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00ac8d40(1);
    (**(code **)(*param_1 + 0x318))();
    if (param_1[0x1d9] != 0) {
      FUN_008e0af0(0);
      FUN_008e3c10();
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      uVar2 = FUN_009f8b40();
      FUN_00ac8a80(uVar2);
      iVar1 = *(int *)(iVar1 + 0x83c);
      param_1[0x147] = iVar1;
      param_1[0x20f] = iVar1;
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        *(int *)(iVar3 + 0x51c) = iVar1;
        *(int *)(iVar3 + 0x83c) = iVar1;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00609090  FUN_00609090  size=325  [callgraph]
undefined4 __thiscall FUN_00609090(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_110 [140];
  uint local_84;
  uint local_80;
  int local_7c;
  
  uVar5 = 0;
  FUN_004105d0();
  FUN_0043e160(param_2);
  iVar3 = FUN_00ac8cd0(local_110);
  if (iVar3 != 0) {
    iVar3 = FUN_00ac8350();
    uVar1 = local_80 & 0x40000;
    uVar2 = local_80 & 0x20000;
    iVar4 = FUN_00a8cbe0(0x40000);
    if ((iVar4 != 0) ||
       ((local_84 & 0x400) != 0 ||
        (uVar2 != 0 || (uVar1 != 0 || ((local_84 & 0x200) != 0 || iVar3 != 0))))) {
      if (local_7c != 0) {
        FUN_00ac8d00(param_1,local_110,0);
        uVar5 = 1;
        uVar6 = 0;
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          uVar6 = FUN_00a7c8a0();
        }
        if ((local_80 & 0x10000) != 0) {
          (**(code **)(*param_1 + 0x198))(uVar6,param_2,1);
          return 1;
        }
        (**(code **)(*param_1 + 0x198))(uVar6,param_2,0x100);
      }
      return uVar5;
    }
  }
  return 0;
}

// 006091E0  FUN_006091e0  size=239  [callgraph]
undefined4 __thiscall FUN_006091e0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar3 = 0;
  if (((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && ((iVar1 != 0x1b0 && (iVar1 != 0x147))))
     && ((*(byte *)(param_2 + 0x23) & 0x10) == 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar3 = FUN_00a7c8a0();
      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x4c0) & 0x10) != 0)) {
        (**(code **)(*param_1 + 0x21c))(iVar3,(char)param_2[4],0x3c23d70a,0);
        (**(code **)(*param_1 + 0x220))(0x40000000);
      }
    }
    uVar2 = 1;
    if ((DAT_01bea060 & 0x2000000) != 0) {
      (**(code **)(*param_1 + 0x198))(iVar3,param_2,1);
      return 1;
    }
    if (*param_2 == 0x4f) {
      uVar2 = 0x201;
    }
    (**(code **)(*param_1 + 0x198))(iVar3,param_2,uVar2);
  }
  return 0;
}

// 006092D0  FUN_006092d0  size=138  [callgraph]
void __fastcall FUN_006092d0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  uVar1 = FUN_00a8d2a0();
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar2,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),2);
    *(undefined4 *)(iVar3 + 0x594) = 0x3f333333;
    *(undefined4 *)(iVar3 + 0x590) = 0x3e99999a;
    FUN_00d771d0(0xb);
    FUN_00a93a00(iVar3,uVar1);
    FUN_00d7b0f0();
    FUN_00d7b890();
    return;
  }
  return;
}

// 00609360  Em0131::vf360  size=71  [class]
void __fastcall Em0131::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  iVar1 = FUN_00ac89d0();
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00a81330();
    FUN_00e03080(uVar2,uVar3);
    return;
  }
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 006093B0  FUN_006093b0  size=116  [between]
void FUN_006093b0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b3551c;
      (**(code **)(*piVar2 + 4))(&DAT_01b3551c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a9e290(param_1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 00609430  Em0131::vf334  size=301  [class]
void __thiscall Em0131::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  
  EmBaseDLC::vf334(param_2,param_3);
  FUN_009fd240();
  FUN_00ac8d40(0);
  if (param_3 != (int *)0x0) {
    puVar11 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar11);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00acdea0();
      if (piVar2 != (int *)0x0) {
        puVar11 = &DAT_01b35520;
        (**(code **)(*piVar2 + 4))(&DAT_01b35520);
        iVar1 = FUN_00dd6d80(puVar11);
        if ((iVar1 != 0) && (piVar2 != param_1)) {
          uVar3 = FUN_00a8cae0();
          uVar4 = FUN_00a8cad0();
          uVar5 = FUN_00a8cac0();
          uVar6 = FUN_00a8cab0();
          FUN_00a8caf0(uVar6,uVar5,uVar4,uVar3);
          uVar10 = 0x3f800000;
          uVar9 = 0xbf800000;
          uVar3 = FUN_00a95d20(0);
          uVar8 = 0x3f800000;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = FUN_00a95df0(0);
          FUN_00a9e290(uVar4,uVar5,uVar6,uVar8,uVar3,uVar9,uVar10);
          fVar7 = (float10)FUN_00a958c0(0);
          FUN_00a92f90();
          iVar1 = FUN_00e26e90();
          if (iVar1 != 0) {
            Animation::Motion::Unit::setCurrentTime(0,(float)fVar7);
          }
        }
      }
    }
  }
  return;
}

// 0060CDA0  Em0131::vf40  size=599  [class]
undefined4 __fastcall Em0131::vf40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [124];
  
  iVar1 = EmBaseDLC::vf40();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      param_1[0x3a4] = 0;
      FUN_00acf600(0x20133,"Em0131Body");
      FUN_00ac8e10(0);
      FUN_00ac8eb0(1,1);
      FUN_00ac8d40(0);
      iVar1 = FUN_00c5def0(param_1[0x13c]);
      param_1[0x25c] = iVar1;
      FUN_00405230();
      local_90 = 0;
      local_8c = 0x3e99999a;
      local_88 = 0;
      FUN_00c151f0(1,param_1[0x13c],0,&local_90,0,0x41700000,0x3f000000,2,0);
      FUN_00c57830(local_80);
      param_1[0x1bb] = 1;
      FUN_00a929d0();
      FUN_006092d0();
      iVar1 = FUN_00a82090("Em0130_FACE",0x20134,0);
      if (iVar1 != 0) {
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
        FUN_00a8c5f0(0,param_1[0x13c],iVar1,0xffffffff,0xffffffff);
        FUN_00a8c5f0(1,param_1[0x13c],iVar1,0,0);
        FUN_00a8c5f0(2,param_1[0x13c],iVar1,1,1);
        FUN_00a8c5f0(3,param_1[0x13c],iVar1,2,2);
        FUN_00a8c5f0(4,param_1[0x13c],iVar1,3,3);
        FUN_00a8c5f0(5,param_1[0x13c],iVar1,0x704,0x704);
        FUN_00a8c5f0(6,param_1[0x13c],iVar1,0x705,0x705);
        iVar1 = FUN_00a7c8a0();
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) & 0xfffffffd;
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x1c))();
          uVar2 = 3;
          FUN_00a7c8a0(3);
          cModelBase::setRootPartsNo(uVar2);
          uVar2 = FUN_00ac89d0();
          iVar1 = FUN_00a7c8a0();
          *(undefined4 *)(iVar1 + 0x518) = uVar2;
        }
      }
      if ((undefined4 *)param_1[0x1db] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x1db] = 0;
      }
      FUN_00ac9420("_dam1");
      FUN_00ac94e0("_dam2");
      (**(code **)(*param_1 + 0x34c))();
      return 1;
    }
  }
  return 0;
}

// 0060D000  Em0131::vf44  size=169  [class]
void __fastcall Em0131::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorEmBase::vf44();
  return;
}

// 0060D0B0  Em0131::vf54  size=289  [class]
void __fastcall Em0131::vf54(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar10 = FUN_00a81330();
  if (iVar10 != 0) {
    iVar10 = FUN_00a7c8a0();
    if (iVar10 != 0) {
      local_30 = *(undefined4 *)(iVar10 + 0x40);
      local_2c = *(undefined4 *)(iVar10 + 0x44);
      local_28 = *(undefined4 *)(iVar10 + 0x48);
      local_24 = *(undefined4 *)(iVar10 + 0x4c);
      fVar1 = *(float *)(iVar10 + 0x10);
      fVar2 = *(float *)(iVar10 + 0x14);
      fVar3 = *(float *)(iVar10 + 0x18);
      fVar4 = *(float *)(iVar10 + 0x20);
      fVar5 = *(float *)(iVar10 + 0x24);
      fVar6 = *(float *)(iVar10 + 0x28);
      fVar9 = SQRT(*(float *)(iVar10 + 0x38) * *(float *)(iVar10 + 0x38) +
                   *(float *)(iVar10 + 0x34) * *(float *)(iVar10 + 0x34) +
                   *(float *)(iVar10 + 0x30) * *(float *)(iVar10 + 0x30));
      fVar7 = *(float *)(iVar10 + 0x28);
      fVar8 = *(float *)(iVar10 + 0x38);
      fVar11 = (float10)FUN_00ddbaa0(-(*(float *)(iVar10 + 0x18) / fVar9));
      fVar12 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
      local_20 = (float)fVar12;
      local_1c = (float)fVar11;
      fVar11 = (float10)fpatan((float10)*(float *)(iVar10 + 0x14) /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)*(float *)(iVar10 + 0x10) /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      local_18 = (float)fVar11;
      (**(code **)(*param_1 + 0x7c))(&local_30,&local_20);
    }
  }
  BehaviorEmBase::vf54();
  return;
}

// 0060D1E0  FUN_0060d1e0  size=79  [between]
void __fastcall FUN_0060d1e0(int param_1)

{
  if (*(int *)(param_1 + 0x618) == 0x10000) {
    if (*(int *)(param_1 + 0x61c) == 0) {
      FUN_00ac8d40(1);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    else if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x618) == 0x40000) {
    FUN_00608fc0();
    return;
  }
  return;
}

// 0060D230  Em0131::vf19C  size=179  [class]
void __thiscall Em0131::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 0060D2F0  FUN_0060d2f0  size=57  [callgraph]
void FUN_0060d2f0(void)

{
  int iVar1;
  char *_Src;
  char local_8 [8];
  
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    _Src = (char *)FUN_00a95df0(0);
    _strcpy_s(local_8,8,_Src);
    FUN_006093b0(local_8);
  }
  return;
}

// 00611950  FUN_00611950  size=100  [callgraph]
void __thiscall FUN_00611950(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    FUN_00aa4520(param_2,*(undefined4 *)(param_1 + 0x4f0),0,0,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    FUN_0060d2f0();
  }
  return;
}

// 006119C0  FUN_006119c0  size=5983  [callgraph]
void __fastcall FUN_006119c0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack_1b0;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int iStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [348];
  
  piVar9 = (int *)0x0;
  iVar3 = FUN_00a7f600(0x20130);
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar12 = &DAT_01b35510;
    (**(code **)(*piVar4 + 4))(&DAT_01b35510);
    iVar3 = FUN_00dd6d80(puVar12);
    piVar9 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 2:
    FUN_00608dd0();
    param_1[0x252] = 0;
    param_1[0x253] = 0;
    iVar3 = FUN_00606de0(param_1[500]);
    if ((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
      uVar14 = FUN_00a7c7f0();
      FUN_00a7c960(uVar14);
    }
    if (piVar9 != (int *)0x0) {
      FUN_00aa4520(0xbb,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    goto LAB_00611ada;
  case 3:
LAB_00611ada:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
switchD_00611a24_caseD_4:
      if (piVar9 == (int *)0x0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        FUN_00aa4520(0xbc,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
LAB_00611b64:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      FUN_00b94790(0x3f800000,0x3f800000);
      if (((byte)DAT_01b7b914 & 0x40) != 0) {
        param_1[0x252] = param_1[0x252] + 0x14;
      }
      param_1[0x253] = param_1[0x253] + 1;
      FUN_00b7d640(0x1000);
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        if (100 < param_1[0x252] - param_1[0x253]) {
          FUN_00a8cb60(9);
          if (piVar9 != (int *)0x0) {
            FUN_00a8cb60(9);
          }
          FUN_00e5e1b0("bgm_Khamsin_Finish");
          return;
        }
        if (piVar9 != (int *)0x0) {
          FUN_00a8cb60(param_1[0x187] + 1);
          uVar14 = FUN_00ac8660(0,0x55);
          uVar11 = 0x30003;
          (**(code **)(*param_1 + 0x30c))(uVar14,0);
          iVar3 = FUN_00a8eea0();
          if (iVar3 < 1) {
            uVar11 = 0x50003;
          }
          FUN_008abc80(uVar11);
          iVar3 = FUN_00a12210(0xf00);
          fVar10 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)piVar9[0x10],
                                   (float10)*(float *)(iVar3 + 0x48) - (float10)(float)piVar9[0x12])
          ;
          param_1[0x9fb] = (int)(float)fVar10;
          return;
        }
      }
    }
    break;
  case 4:
    goto switchD_00611a24_caseD_4;
  case 5:
    goto LAB_00611b64;
  case 6:
  case 7:
  case 8:
  case 0x11:
  case 0x1c:
    break;
  case 9:
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    if (piVar9 != (int *)0x0) {
      FUN_00aa4520(0xbd,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[600] = 0;
    param_1[0x259] = 0;
    param_1[0x25a] = 0;
    param_1[0x25b] = 0x3f800000;
    if (piVar9 != (int *)0x0) {
      pfVar5 = (float *)FUN_00a8b8a0(auStack_170,0x40400000);
      fStack_180 = *pfVar5 + (float)piVar9[0x10];
      fStack_17c = pfVar5[1] + (float)piVar9[0x11];
      fStack_178 = pfVar5[2] + (float)piVar9[0x12];
      fStack_174 = pfVar5[3] + (float)piVar9[0x13];
      puVar6 = (undefined4 *)(**(code **)(*piVar9 + 0x84))();
      uStack_1a0 = *puVar6;
      uStack_198 = puVar6[2];
      uStack_194 = puVar6[3];
      fVar10 = (float10)fpatan((float10)(float)piVar9[0x10] - (float10)fStack_180,
                               (float10)(float)piVar9[0x12] - (float10)fStack_178);
      fStack_19c = (float)fVar10;
      (**(code **)(*param_1 + 0x7c))(&fStack_180,&uStack_1a0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00611d7c;
  case 10:
  case 0x13:
  case 0x15:
  case 0x22:
    goto LAB_00611d7c;
  case 0xb:
    param_1[0x251] = 0;
    if (piVar9 != (int *)0x0) {
      FUN_00aa4520(0xbf,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_008e3c10();
    FUN_008e5c50(0x1f);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00611e2b;
  case 0xc:
LAB_00611e2b:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    if (piVar9 != (int *)0x0) {
      if ((param_1[0x251] == 0) && (iVar3 = FUN_00a8c760(0x20), iVar3 != 0)) {
        param_1[0x251] = 1;
        param_1[0x1029] = param_1[0x102a];
        FUN_00b89db0(1,0x3dcccccd);
      }
      if (param_1[0x251] == 1) {
        uVar14 = 0;
        if ((float)param_1[0x1029] <= 0.0) {
          param_1[0x251] = 2;
          param_1[0x1029] = -0x40800000;
        }
        else {
          uVar14 = 0x40a00000;
        }
        FUN_00b7ab30(uVar14);
      }
      if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
        fVar1 = (float)param_1[0x1029] - 1.0;
        param_1[0x1029] = (int)fVar1;
        if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
            ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
           ((param_1[0x33e] & param_1[0x394]) != 0)) {
          FUN_00608eb0(1);
          FUN_0060cce0();
          FUN_008a8ed0(0x200000,0xd,1);
        }
      }
    }
    if (param_1[0x251] != 2) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
LAB_00611f70:
    FUN_008e3c10();
    FUN_008e5c50(0x1f);
    FUN_00a8d280();
    FUN_00608f30();
    if (piVar9 != (int *)0x0) {
      FUN_00aa4520(0xc0,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a8cb60(param_1[0x187]);
      FUN_00608dd0();
    }
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x187] = param_1[0x187] + 1;
LAB_00612018:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    goto LAB_00611d8c;
  case 0xd:
    goto LAB_00611f70;
  case 0xe:
  case 0x26:
    goto LAB_00612018;
  case 0xf:
    if (piVar9 != (int *)0x0) {
      FUN_00aa4520(0xc1,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_008e6d00();
    FUN_008e5c50(6);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0061209e;
  case 0x10:
LAB_0061209e:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0x12;
      return;
    }
    break;
  case 0x12:
    if (piVar9 == (int *)0x0) {
LAB_0061212c:
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      FUN_00aa4520(0xc2,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_00611d7c;
  case 0x14:
    FUN_00a8d280();
    if (piVar9 == (int *)0x0) goto LAB_0061212c;
    FUN_00aa4520(0xc3,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00611d7c;
  case 0x16:
    param_1[0x251] = 0;
    if (piVar9 != (int *)0x0) {
      FUN_00aa4520(0xc4,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_008e3c10();
    FUN_008e5c50(0x1f);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00612201;
  case 0x17:
LAB_00612201:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    if (piVar9 != (int *)0x0) {
      if ((param_1[0x251] == 0) && (iVar3 = FUN_00a8c760(0x20), iVar3 != 0)) {
        param_1[0x251] = 1;
        param_1[0x1029] = param_1[0x102a];
        FUN_00b89db0(1,0x3dcccccd);
      }
      if (param_1[0x251] == 1) {
        uVar14 = 0;
        if ((float)param_1[0x1029] <= 0.0) {
          param_1[0x251] = 2;
          param_1[0x1029] = -0x40800000;
        }
        else {
          uVar14 = 0x40a00000;
        }
        FUN_00b7ab30(uVar14);
      }
      if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
        fVar1 = (float)param_1[0x1029] - 1.0;
        param_1[0x1029] = (int)fVar1;
        if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
            ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
           ((param_1[0x33e] & param_1[0x394]) != 0)) {
          FUN_00608eb0(2);
          FUN_0060cce0();
          FUN_008a8ed0(0x200000,0x18,1);
        }
      }
    }
    if (param_1[0x251] == 2) {
      param_1[0x187] = param_1[0x187] + 1;
LAB_00612344:
      FUN_008e3c10();
      FUN_008e5c50(0x1f);
      FUN_00a8d280();
      FUN_00608f30();
      if (piVar9 != (int *)0x0) {
        FUN_00aa4520(0xc5,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00a8cb60(param_1[0x187]);
        FUN_00608dd0();
      }
      FUN_00da8810(0);
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      param_1[0x187] = param_1[0x187] + 1;
LAB_006123f1:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      FUN_00b94790(0x3f800000,0x3f800000);
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 0x18:
    goto LAB_00612344;
  case 0x19:
    goto LAB_006123f1;
  case 0x1a:
    if (piVar9 != (int *)0x0) {
      FUN_00aa4520(0xc6,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_008e6d00();
    FUN_008e5c50(6);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_006124a3;
  case 0x1b:
LAB_006124a3:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0x1d;
      return;
    }
    break;
  case 0x1d:
    FUN_008e3c10();
    FUN_008e5c50(0x1f);
    if (piVar9 == (int *)0x0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      FUN_00aa4520(199,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a8cb60(param_1[0x187]);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_00612560;
  case 0x1e:
LAB_00612560:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    if (piVar9 != (int *)0x0) {
      FUN_00a8cb60(param_1[0x187]);
    }
LAB_006125b0:
    param_1[0x252] = 0;
    param_1[0x253] = 0;
    if (piVar9 != (int *)0x0) {
      FUN_00a9f4c0("EM0130_FINISHQTE_RENDA_PL",0,0x2000,0);
      FUN_00a9f650(piVar9[0x13c],0xffffffff,0,0,0,0,200,0,0x2000);
      FUN_00a9f650(piVar9[0x13c],0xffffffff,0,0,1,0,0xc9,0,0x2000);
      FUN_00a947e0(0,0,0,0);
      FUN_00a9f4c0("EM0130_FINISHQTE_RENDA",0,0x2000,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0xb3,0,0x2000);
      FUN_00a9f600(0xffffffff,0,0,1,0,0xb4,0,0x2000);
      FUN_00a947e0(0,0,0,0);
      iVar3 = FUN_00604620();
      if (iVar3 != 0) {
        FUN_00a9f4c0("EM0131_FINISHQTE_RENDA",0,0x2000,0);
        FUN_00a94640(0xffffffff,0,0,0,0,&DAT_01645fd8,0,0x2000);
        FUN_00a94640(0xffffffff,0,0,1,0,&DAT_01645fd0,0,0x2000);
        FUN_00a947e0(0,0,0,0);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
LAB_00612746:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00b7d640(0x1000);
    param_1[0x253] = param_1[0x253] + 1;
    if (((byte)DAT_01b7b914 & 0x40) == 0) {
      param_1[0x252] = param_1[0x252] + -1;
    }
    else {
      iVar3 = param_1[0x252];
      iVar7 = FUN_00fdbc60();
      param_1[0x252] = (iVar3 + 0xf) - iVar7;
    }
    if (param_1[0x252] < 0) {
      param_1[0x252] = 0;
    }
    fStack_1b0 = (float)param_1[0x252] * 0.01;
    if (fStack_1b0 <= 1.0) {
      if (0.0 <= fStack_1b0) {
        if (0.98 < fStack_1b0) goto LAB_0061282b;
      }
      else {
        fStack_1b0 = 0.0;
      }
      if (300 < param_1[0x253]) goto LAB_0061282b;
    }
    else {
      fStack_1b0 = 1.0;
LAB_0061282b:
      param_1[0x187] = param_1[0x187] + 1;
      if (piVar9 != (int *)0x0) {
        FUN_00a8cb60(param_1[0x187]);
      }
    }
    FUN_00a947e0(0,0,fStack_1b0,0);
    if (piVar9 != (int *)0x0) {
      FUN_00a947e0(0,0,fStack_1b0,0);
      iVar3 = FUN_00604620();
      if (iVar3 != 0) {
        uVar13 = 0;
        uVar11 = 0;
        uVar14 = 0;
        FUN_00604620(0,0,fStack_1b0,0);
        FUN_00a947e0(uVar14,uVar11,fStack_1b0,uVar13);
        return;
      }
    }
    break;
  case 0x1f:
    goto LAB_006125b0;
  case 0x20:
    goto LAB_00612746;
  case 0x21:
    if (piVar9 == (int *)0x0) goto LAB_0061212c;
    FUN_00aa4520(0xca,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
LAB_00611d7c:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
LAB_00611d8c:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 0x23:
    param_1[0x251] = 0;
    FUN_008e3c10();
    FUN_008e5c50(0x1f);
    if (piVar9 == (int *)0x0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      FUN_00aa4520(0xcb,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a8cb60(param_1[0x187]);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_00612996;
  case 0x24:
LAB_00612996:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    if (piVar9 != (int *)0x0) {
      if ((param_1[0x251] == 0) && (iVar3 = FUN_00a8c760(0x20), iVar3 != 0)) {
        param_1[0x251] = 1;
        param_1[0x1029] = param_1[0x102a];
        FUN_00b89db0(1,0x3dcccccd);
      }
      if (param_1[0x251] == 1) {
        uVar14 = 0;
        if ((float)param_1[0x1029] <= 0.0) {
          param_1[0x251] = 2;
          param_1[0x1029] = -0x40800000;
        }
        else {
          uVar14 = 0x40a00000;
        }
        FUN_00b7ab30(uVar14);
      }
      if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
        fVar1 = (float)param_1[0x1029] - 1.0;
        param_1[0x1029] = (int)fVar1;
        if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
            ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
           ((param_1[0x33e] & param_1[0x394]) != 0)) {
          FUN_00608eb0(3);
          FUN_0060cce0();
          FUN_008a8ed0(0x200000,0x25,1);
        }
      }
    }
    if (param_1[0x251] != 2) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
LAB_00612adb:
    FUN_008e3c10();
    FUN_008e5c50(0x1f);
    FUN_00a8d280();
    FUN_00aa4520(0xcc,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608f30();
    FUN_00a8cb60(param_1[0x187]);
    FUN_00608dd0();
    FUN_00da8810(0);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    iVar3 = FUN_00606de0(param_1[500]);
    if (iVar3 != 0) {
      FUN_00a7c950();
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00612018;
  case 0x25:
    goto LAB_00612adb;
  case 0x27:
    FUN_00aa4520(0xcd,piVar9[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_008e6d00();
    FUN_008e5c50(6);
    param_1[0x187] = param_1[0x187] + 1;
    DAT_01bea070 = DAT_01bea070 | 0x220000;
    goto LAB_00612c04;
  case 0x28:
LAB_00612c04:
    uVar14 = 0;
    FUN_00a92f90(0);
    FUN_00404b90(uVar14);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00d5ea40("PD60_RESULT",1,0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 0x29:
    param_1[0x254] = 0;
    DAT_01dc08d4 = 0;
    DAT_01dc08bc = 0;
    DAT_01dc08c8 = 0;
    FUN_00b7aa80();
    FUN_00aa4520(0xce,piVar9[0x13c],0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(param_1[0x187] + 1);
    goto LAB_00612ce5;
  case 0x2a:
LAB_00612ce5:
    FUN_00b94790(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    (**(code **)(*param_1 + 0x220))(0x41200000);
    iVar3 = FUN_00416d50(0x24);
    if (iVar3 == 0) {
      if (param_1[0x254] == 0) goto LAB_00612ddf;
    }
    else {
      param_1[0x254] = 1;
    }
    iVar3 = FUN_00416d50(0x24);
    if (iVar3 != 0) {
LAB_00612ddf:
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      uVar14 = 0;
      FUN_00a92f90(0);
      FUN_00404b90(uVar14);
      return;
    }
    FUN_00d5ea40("PD60_KHAM_DEAD",1,0);
    FUN_00da0d70();
    FUN_00da8ea0();
    FUN_00db3e80(0,1,&DAT_01bea1d0);
    FUN_00da8810(0);
    FUN_00dc1270(0,0);
    FUN_00aa4080(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
LAB_00612e12:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00416910(0xd);
    if (iVar3 != 0) {
      FUN_0049cd00(10);
      FUN_0049cd00(0xe);
      param_1[0x187] = param_1[0x187] + 1;
LAB_00612e4c:
      DAT_01bea090 = DAT_01bea090 | 0x4080c400;
      DAT_01bea094 = DAT_01bea094 | 0x40100000;
      return;
    }
    break;
  case 0x2b:
    goto LAB_00612e12;
  case 0x2c:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00416910(0xd);
    if ((iVar3 == 0) && (piVar9 != (int *)0x0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x255] = 0x50;
      return;
    }
    goto LAB_00612e4c;
  case 0x2d:
    FUN_00b94790(0x3f800000,0x3f800000);
    DAT_01bea090 = DAT_01bea090 | 0x4080c400;
    DAT_01bea094 = DAT_01bea094 | 0x40100000;
    if (-1 < param_1[0x255]) {
      if (param_1[0x255] < 0x3c) {
        iStack_1a8 = 0;
        do {
          iVar3 = FUN_0093e4a0(iStack_1a8);
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x14) == piVar9[0x20f])) {
            iVar3 = *(int *)(iVar3 + 0x10);
            iVar7 = *(int *)(iVar3 + 4);
            iStack_184 = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 8) * 0x28;
            if (iVar7 != iStack_184) {
              do {
                iStack_1a4 = FUN_00a81330();
                if ((((iStack_1a4 != 0) && (iVar3 = FUN_0093dcd0(&iStack_1a4), iVar3 != 0)) &&
                    (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
                   ((iVar3 = FUN_00606e40(iVar3), iVar3 != 0 &&
                    (fVar10 = (float10)FUN_005d85a0(), (float10)0.5 <= fVar10)))) {
                  sVar2 = FUN_00dde2d0(5,0x14);
                  param_1[0x255] = param_1[0x255] + (int)sVar2;
                  FUN_005d9b40(&uStack_1a0);
                  thunk_FUN_009fdde0();
                  uVar8 = param_1[300];
                  fStack_19c = (float)param_1[0x11];
                  if (uVar8 == 0x7c0000) {
                    uVar8 = 0;
                  }
                  else if ((uVar8 < 0x10000) || (uVar8 + 0xe0000000 < 0x100000)) {
                    FUN_00dd5650(&DAT_0163e20c,uVar8);
                  }
                  FUN_004039a0(0x352,param_1,0);
                  FUN_0041cdb0(&uStack_1a0);
                  FUN_00a8c930(uVar8,auStack_160);
                  FUN_00e5e080("em0130_se_dmg_explosion2",&uStack_1a0,0,0xffffffff,0);
                  break;
                }
                iVar7 = iVar7 + 0x28;
              } while (iVar7 != iStack_184);
            }
          }
          iStack_1a8 = iStack_1a8 + 1;
        } while (iStack_1a8 < 0xc);
      }
      param_1[0x255] = param_1[0x255] + -1;
      if (param_1[0x255] < 0x37) {
        iVar3 = 0;
        do {
          iVar7 = FUN_0093e4a0(iVar3);
          if ((iVar7 != 0) && (*(int *)(iVar7 + 0x14) == piVar9[0x20f])) {
            FUN_0093f0c0();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0xc);
        FUN_0093db80();
        FUN_00d5ea40("PD60_END",1,0);
        DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
        DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
        DAT_01bea090 = DAT_01bea090 & 0xbf7f3bff;
        return;
      }
    }
  }
  return;
}

// 006131D0  Em0131::vf4C  size=57  [class]
void __fastcall Em0131::vf4C(int param_1)

{
  float10 fVar1;
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    FUN_00a92fb0();
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x910) = (float)fVar1;
    BehaviorEmBase::vf4C();
    FUN_00ac4770();
    FUN_0060d1e0();
    return;
  }
  return;
}

// 00613210  Em0131::vf32C  size=349  [class]
undefined4 __fastcall Em0131::vf32C(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_160 [348];
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(3);
  FUN_00ac2080(4);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  iVar2 = FUN_00a8c240();
  if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x4c0) & 1) != 0)) {
    iVar2 = FUN_00a8ef10();
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(9);
      if (iVar2 == 0) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa00);
        if (*(int *)(param_1 + 0xa18) != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        piVar5 = *(int **)(param_1 + 0x67c);
        piVar4 = piVar5 + *(int *)(param_1 + 0x684) * 0x54;
        FUN_00445db0();
        iVar2 = -1;
        bVar1 = false;
        if (piVar5 != piVar4) {
          do {
            if ((*piVar5 != 0x147) && (iVar2 < piVar5[1])) {
              bVar1 = true;
              FUN_00448f50(piVar5);
              iVar2 = piVar5[1];
            }
            piVar5 = piVar5 + 0x54;
          } while (piVar5 != piVar4);
          if (bVar1) {
            iVar2 = FUN_00609090(local_160);
            if (iVar2 == 0) {
              iVar2 = FUN_00a8f040(local_160);
              if (iVar2 == 0) {
                uVar3 = FUN_006091e0(local_160);
                if (*(int *)(param_1 + 0xa18) != 0) {
                  LeaveCriticalSection(lpCriticalSection);
                }
                return uVar3;
              }
            }
          }
        }
        if (*(int *)(param_1 + 0xa18) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return 0;
}

// 00AB5990  Em0131::vf04  size=6  [class]
undefined * Em0131::vf04(void)

{
  return &DAT_01b35520;
}

// 00ABA510  Em0131::vf00  size=43  [class]
undefined4 __thiscall Em0131::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

