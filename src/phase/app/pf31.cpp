// src/phase/app/pf31.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4BDF0..00D70AF0, 4 functions

#include "mgrr.h"
#include "Pf31.h"

// 00D4BDF0  Pf31::vf0C  size=1471  [class]
void __fastcall Pf31::vf0C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  switch(*(undefined4 *)(param_1 + 0x144)) {
  case 0:
    if ((*(char *)(*(int *)(param_1 + 0x11c) + 0x436) != '\0') &&
       ((cVar1 = FUN_00ce12f0(0), cVar1 != '\0' || (cVar1 = FUN_00cac950(), cVar1 != '\0')))) {
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x144) = 1;
      *(undefined4 *)(param_1 + 0x148) = 2;
    }
    break;
  case 1:
    iVar2 = FUN_00cb25b0();
    if (iVar2 == 0) break;
    if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x148);
    goto LAB_00d4be96;
  case 2:
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    if (0xc < *(int *)(param_1 + 0x14c)) {
      iVar2 = FUN_00d36980();
      *(int *)(param_1 + 0x120) = iVar2;
      if (iVar2 == 0) {
        FUN_00dd5650(&DAT_016bc95c);
      }
      *(undefined4 *)(param_1 + 0x144) = 3;
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    break;
  case 3:
    if (*(char *)(*(int *)(param_1 + 0x120) + 0x6d2) != '\0') {
      if (*(char *)(param_1 + 0x13e) == '\0') {
        cVar1 = FUN_00ce12f0(0);
        if ((cVar1 == '\0') && (cVar1 = FUN_00cac950(), cVar1 == '\0')) break;
        if ((DAT_018b9148 == 0xf32) || (DAT_018b9148 == 0xf34)) {
          FUN_00ce4d70(1);
          *(undefined4 *)(param_1 + 0x144) = 4;
          *(undefined4 *)(param_1 + 0x148) = 5;
          break;
        }
        if (((DAT_018b9148 & 0xf00) != 0xc00) && ((DAT_018b9148 & 0xf00) != 0xd00)) {
          (**(code **)(*(int *)(param_1 + 0x134) + 4))(5,0,1);
          break;
        }
      }
      else {
        iVar2 = FUN_00999fa0();
        if (iVar2 == 2) {
          FUN_00ce4d70(1);
          *(undefined4 *)(param_1 + 0x144) = 4;
          *(undefined4 *)(param_1 + 0x148) = 0xb;
          break;
        }
        if (iVar2 != 1) break;
      }
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x144) = 4;
      *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
    }
    break;
  case 4:
    iVar2 = FUN_00cb25b0();
    if (iVar2 == 0) break;
    if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x148);
    if (iVar2 < 0) {
      if ((DAT_018b9148 & 0xf00) == 0xc00) {
        pcVar5 = "START";
        uVar4 = 0xf32;
      }
      else if ((DAT_018b9148 & 0xf00) == 0xd00) {
        pcVar5 = "START";
        uVar4 = 0xf34;
      }
      else {
        FUN_00cad0c0();
        pcVar5 = "PF01_START";
        uVar4 = 0xf01;
      }
      FUN_00a4ac40(uVar4,pcVar5,0xffffffff);
      *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
      break;
    }
LAB_00d4be96:
    *(int *)(param_1 + 0x144) = iVar2;
    break;
  case 5:
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    if (*(int *)(param_1 + 0x14c) < 0xd) break;
    iVar2 = FUN_00d37c10();
    *(int *)(param_1 + 0x124) = iVar2;
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x158) == 0) {
        uVar4 = 1;
      }
      else {
        if (*(int *)(param_1 + 0x158) != 1) goto LAB_00d4c0d6;
        uVar4 = 2;
      }
      FUN_00989540(uVar4,0xffffffff);
    }
LAB_00d4c0d6:
    if (*(int *)(param_1 + 0x124) == 0) {
      FUN_00dd5650(&DAT_016bc944);
    }
    *(undefined4 *)(param_1 + 0x144) = 6;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    break;
  case 6:
    cVar1 = FUN_00ce12f0(0);
    if (((cVar1 != '\0') || (cVar1 = FUN_00cac950(), cVar1 != '\0')) &&
       (*(char *)(*(int *)(param_1 + 0x124) + 0x631) != '\0')) {
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x144) = 7;
    }
    break;
  case 7:
    iVar2 = FUN_00cb25b0();
    if (iVar2 != 0) {
      if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x124))(1);
        *(undefined4 *)(param_1 + 0x124) = 0;
      }
      *(undefined4 *)(param_1 + 0x144) = 8;
    }
    break;
  case 8:
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    if (0xc < *(int *)(param_1 + 0x14c)) {
      iVar2 = FUN_00d37f40();
      *(int *)(param_1 + 0x128) = iVar2;
      if (iVar2 == 0) {
        FUN_00dd5650(&DAT_016bc928);
      }
      *(undefined4 *)(param_1 + 0x144) = 9;
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    break;
  case 9:
    cVar1 = FUN_00ce12f0(0);
    if (((cVar1 != '\0') || (cVar1 = FUN_00cac950(), cVar1 != '\0')) &&
       (*(char *)(*(int *)(param_1 + 0x128) + 0xa31) != '\0')) {
      FUN_00cad0c0();
      if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
      *(undefined4 *)(param_1 + 0x144) = 10;
    }
    break;
  case 0xb:
    iVar2 = FUN_009b20f0();
    *(int *)(param_1 + 0x130) = iVar2;
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016bc4e0);
      *(undefined4 *)(param_1 + 0x144) = 0xc;
    }
    else {
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 300);
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
    }
    break;
  case 0xc:
    iVar2 = *(int *)(param_1 + 0x130);
    if (*(char *)(iVar2 + 0x44) == '\n') {
      if (iVar2 != 0) {
        FUN_0098f460();
        FUN_00dd4920(iVar2);
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      if ((DAT_018b9148 & 0xf00) == 0xc00) {
        pcVar5 = "START";
        uVar4 = 0xf32;
      }
      else if ((DAT_018b9148 & 0xf00) == 0xd00) {
        pcVar5 = "START";
        uVar4 = 0xf34;
      }
      else {
        FUN_00cad0c0();
        pcVar5 = "PF01_START";
        uVar4 = 0xf01;
      }
      FUN_00a4ac40(uVar4,pcVar5,0xffffffff);
      *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
    }
    iVar2 = *(int *)(param_1 + 0x130);
    if ((iVar2 != 0) && (1 < *(byte *)(iVar2 + 0x44))) {
      iVar3 = 4;
      if (1 < *(int *)(iVar2 + 0x48) - 1U) {
        iVar3 = 3;
      }
      if (*(int *)(param_1 + 0x150) != iVar3) {
        FUN_00a28980(iVar3,0x3f800000);
        *(int *)(param_1 + 0x150) = iVar3;
      }
    }
  }
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
  }
  if (*(int **)(param_1 + 0x120) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x120) + 4))();
  }
  if (*(int **)(param_1 + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x124) + 4))();
  }
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 4))();
  }
  if (*(int **)(param_1 + 300) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 300) + 4))();
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_009b2110();
    return;
  }
  return;
}

// 00D56DE0  Pf31::vf08  size=397  [class]
void __fastcall Pf31::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  DAT_01bea070 = DAT_01bea070 | 0x200000;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00c13920();
    (**(code **)(*piVar1 + 0xc))();
  }
  DAT_01bea088 = DAT_01bea088 | 0x200000;
  FUN_00c16770(0);
  iVar2 = cResultBg::cResultBg();
  *(int *)(param_1 + 300) = iVar2;
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016bcd80);
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if ((DAT_018b9148 != 0xf32) && (DAT_018b9148 != 0xf34)) {
    if (((DAT_018b9148 & 0xf00) == 0xc00) || ((DAT_018b9148 & 0xf00) == 0xd00)) {
      iVar2 = FUN_00d36980();
      *(int *)(param_1 + 0x120) = iVar2;
      if (iVar2 == 0) {
        puVar3 = &DAT_016bc95c;
        goto LAB_00d56e9a;
      }
    }
    else {
      iVar2 = cBattleResultEx::~cBattleResultEx();
      *(int *)(param_1 + 0x11c) = iVar2;
      if (iVar2 == 0) {
        puVar3 = &DAT_016bcd64;
LAB_00d56e9a:
        FUN_00dd5650(puVar3);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x158) = 2;
  if ((DAT_018b9148 & 0xf00) == 0xc00) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    goto LAB_00d56ef1;
  }
  if ((DAT_018b9148 & 0xf00) != 0xd00) {
    if (DAT_018b9148 == 0xf32) {
      *(undefined4 *)(param_1 + 0x158) = 0;
      goto LAB_00d56ef1;
    }
    if (DAT_018b9148 != 0xf34) goto LAB_00d56ef1;
  }
  *(undefined4 *)(param_1 + 0x158) = 1;
LAB_00d56ef1:
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x144) = 3;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  if ((DAT_018b9148 == 0xf32) || (DAT_018b9148 == 0xf34)) {
    *(undefined4 *)(param_1 + 0x144) = 5;
  }
  else if (((DAT_018b9148 & 0xf00) == 0xc00) || ((DAT_018b9148 & 0xf00) == 0xd00)) {
    *(undefined4 *)(param_1 + 0x144) = 3;
  }
  *(undefined4 *)(param_1 + 0x154) = 0;
  FUN_00a28980(3,0x3f800000);
  *(undefined4 *)(param_1 + 0x150) = 3;
  return;
}

// 00D56F80  Pf31::vf10  size=161  [class]
void __fastcall Pf31::vf10(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x124) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x124))(1);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 300))(1);
    *(undefined4 *)(param_1 + 300) = 0;
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0x154));
  }
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  DAT_01bea088 = DAT_01bea088 & 0xffdfffff;
  FUN_00a28980(0xffffffff,0x3f800000);
  return;
}

// 00D70AF0  Pf31::vf00  size=65  [class]
undefined4 * __thiscall Pf31::vf00(undefined4 *param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_6();
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

