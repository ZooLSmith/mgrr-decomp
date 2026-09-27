// src/phase/app/pf07.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D508C0..00D6FDC0, 4 functions

#include "mgrr.h"
#include "cPf07.h"

// 00D508C0  cPf07::vf08  size=329  [class]
void __fastcall cPf07::vf08(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
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
  if (DAT_018b9148 != 0xf09) {
    if (((DAT_018b9148 & 0xf00) == 0x700) || ((DAT_018b9148 & 0xf00) == 0x600)) {
      iVar2 = cBattleResultEx::~cBattleResultEx();
      *(int *)(param_1 + 0x11c) = iVar2;
      if (iVar2 != 0) goto LAB_00d5097d;
      puVar4 = &DAT_016bcd64;
    }
    else {
      iVar2 = FUN_00d36980();
      *(int *)(param_1 + 0x120) = iVar2;
      if (iVar2 != 0) goto LAB_00d5097d;
      puVar4 = &DAT_016bc95c;
    }
    FUN_00dd5650(puVar4);
  }
LAB_00d5097d:
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x144) = 3;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  if (DAT_018b9148 == 0xf09) {
    *(undefined4 *)(param_1 + 0x144) = 5;
  }
  else {
    uVar3 = DAT_018b9148 & 0xf00;
    if ((((uVar3 == 0x700) || (uVar3 == 0x600)) || (uVar3 == 0xc00)) || (uVar3 == 0xd00)) {
      *(undefined4 *)(param_1 + 0x144) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  FUN_00a28980(3,0x3f800000);
  *(undefined4 *)(param_1 + 0x150) = 3;
  return;
}

// 00D50A10  cPf07::vf10  size=161  [class]
void __fastcall cPf07::vf10(int param_1)

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

// 00D5EE50  cPf07::vf0C  size=2073  [class]
void __fastcall cPf07::vf0C(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = FUN_00fdbbd0(DAT_018b925c,"EV6030");
  if (iVar3 != 0) {
    FUN_00d47550();
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x144)) {
  case 0:
    if ((*(char *)(*(int *)(param_1 + 0x11c) + 0x436) != '\0') &&
       ((cVar2 = FUN_00ce12f0(0), cVar2 != '\0' || (cVar2 = FUN_00cac950(), cVar2 != '\0')))) {
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x144) = 1;
      *(undefined4 *)(param_1 + 0x148) = 2;
    }
    break;
  case 1:
    iVar3 = FUN_00cb25b0();
    if (iVar3 == 0) break;
    if (*(undefined4 **)(param_1 + 0x11c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x11c))(1);
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x148);
    goto LAB_00d5ef15;
  case 2:
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    if (0xc < *(int *)(param_1 + 0x14c)) {
      iVar3 = FUN_00d36980();
      *(int *)(param_1 + 0x120) = iVar3;
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016bc95c);
      }
      *(undefined4 *)(param_1 + 0x144) = 3;
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    break;
  case 3:
    if (*(char *)(*(int *)(param_1 + 0x120) + 0x6d2) != '\0') {
      if (*(char *)(param_1 + 0x13e) == '\0') {
        cVar2 = FUN_00ce12f0(0);
        if ((cVar2 == '\0') && (cVar2 = FUN_00cac950(), cVar2 == '\0')) break;
        if (DAT_018b9148 == 0xf09) {
          FUN_00ce4d70(1);
          *(undefined4 *)(param_1 + 0x144) = 4;
          *(undefined4 *)(param_1 + 0x148) = 5;
          break;
        }
        uVar4 = DAT_018b9148 & 0xf00;
        if ((((uVar4 != 0xa00) && (uVar4 != 0x700)) && (uVar4 != 0xc00)) && (uVar4 != 0xd00)) {
          (**(code **)(*(int *)(param_1 + 0x134) + 4))(5,0,1);
          break;
        }
      }
      else {
        iVar3 = FUN_00999fa0();
        if (iVar3 == 2) {
          FUN_00ce4d70(1);
          *(undefined4 *)(param_1 + 0x144) = 4;
          *(undefined4 *)(param_1 + 0x148) = 0xb;
          break;
        }
        if (iVar3 != 1) break;
      }
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x144) = 4;
      *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
    }
    break;
  case 4:
    iVar3 = FUN_00cb25b0();
    if (iVar3 == 0) break;
    if (*(undefined4 **)(param_1 + 0x120) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x120))(1);
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x148);
    if (iVar3 < 0) {
      uVar4 = DAT_018b9148 & 0xf00;
      if (uVar4 < 0x501) {
        if (uVar4 == 0x500) {
          FUN_00a4ac40(0x610,"P610_MOVIE",0x6020);
          *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
          break;
        }
        if (uVar4 < 0x301) {
          if (uVar4 == 0x300) {
            FUN_00a4ac40(0x410,"P410_START",0xffffffff);
            *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
            break;
          }
          if (uVar4 == 0x100) {
            FUN_00a4ac40(0x210,"P210_SEWER_MOVIE",0x3000);
            *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
            break;
          }
          if (uVar4 == 0x200) {
            FUN_00a4ac40(0x310,"P310_BTL1",0x4000);
            *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
            break;
          }
        }
        else if (uVar4 == 0x400) {
          FUN_00a4ac40(0x510,"P510_IN",0x6000);
          *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
          break;
        }
      }
      else {
        if (uVar4 == 0x600) {
          FUN_00d5ea40("EV6030",1,0);
          *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
          break;
        }
        if (uVar4 == 0x700) {
          FUN_00a4ac40(0xf09,"START",0x8000);
          *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
          break;
        }
        if (uVar4 == 0xa00) {
          FUN_00a4ac40(0x118,"P118_BEACH",0x1000);
          *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
          break;
        }
      }
      FUN_00cad0c0();
      FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
      *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
      break;
    }
LAB_00d5ef15:
    *(int *)(param_1 + 0x144) = iVar3;
    break;
  case 5:
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
    if (0xc < *(int *)(param_1 + 0x14c)) {
      iVar3 = FUN_00d37c10();
      *(int *)(param_1 + 0x124) = iVar3;
      if (iVar3 != 0) {
        FUN_00989540(0,0xffffffff);
      }
      if (*(int *)(param_1 + 0x124) == 0) {
        FUN_00dd5650(&DAT_016bc944);
      }
      *(undefined4 *)(param_1 + 0x144) = 6;
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    break;
  case 6:
    cVar2 = FUN_00ce12f0(0);
    if (((cVar2 != '\0') || (cVar2 = FUN_00cac950(), cVar2 != '\0')) &&
       (*(char *)(*(int *)(param_1 + 0x124) + 0x631) != '\0')) {
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x144) = 7;
    }
    break;
  case 7:
    iVar3 = FUN_00cb25b0();
    if (iVar3 != 0) {
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
      iVar3 = FUN_00d37f40();
      *(int *)(param_1 + 0x128) = iVar3;
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016bc928);
      }
      *(undefined4 *)(param_1 + 0x144) = 9;
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    break;
  case 9:
    cVar2 = FUN_00ce12f0(0);
    if (((cVar2 != '\0') || (cVar2 = FUN_00cac950(), cVar2 != '\0')) &&
       (puVar1 = *(undefined4 **)(param_1 + 0x128), *(char *)((int)puVar1 + 0xa31) != '\0')) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
      FUN_00cad0c0();
      FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
      *(undefined4 *)(param_1 + 0x144) = 10;
    }
    break;
  case 0xb:
    iVar3 = FUN_009b20f0();
    *(int *)(param_1 + 0x130) = iVar3;
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016bc4e0);
      *(undefined4 *)(param_1 + 0x144) = 0xc;
    }
    else {
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 300);
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
    }
    break;
  case 0xc:
    iVar3 = *(int *)(param_1 + 0x130);
    if (*(char *)(iVar3 + 0x44) == '\n') {
      if (iVar3 != 0) {
        FUN_0098f460();
        FUN_00dd4920(iVar3);
        *(undefined4 *)(param_1 + 0x130) = 0;
      }
      uVar4 = DAT_018b9148 & 0xf00;
      if (uVar4 < 0x501) {
        if (uVar4 == 0x500) {
          FUN_00a4ac40(0x610,"P610_MOVIE",0x6020);
        }
        else if (uVar4 < 0x301) {
          if (uVar4 == 0x300) {
            FUN_00a4ac40(0x410,"P410_START",0xffffffff);
          }
          else if (uVar4 == 0x100) {
            FUN_00a4ac40(0x210,"P210_SEWER_MOVIE",0x3000);
          }
          else {
            if (uVar4 != 0x200) goto LAB_00d5f54b;
            FUN_00a4ac40(0x310,"P310_BTL1",0x4000);
          }
        }
        else if (uVar4 == 0x400) {
          FUN_00a4ac40(0x510,"P510_IN",0x6000);
        }
        else {
LAB_00d5f54b:
          FUN_00cad0c0();
          FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
        }
      }
      else if (uVar4 == 0x600) {
        FUN_00d5ea40("EV6030",1,0);
      }
      else if (uVar4 == 0x700) {
        FUN_00a4ac40(0xf09,"START",0x8000);
      }
      else {
        if (uVar4 != 0xa00) goto LAB_00d5f54b;
        FUN_00a4ac40(0x118,"P118_BEACH",0x1000);
      }
      *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
    }
    iVar3 = *(int *)(param_1 + 0x130);
    if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0x44))) {
      iVar5 = 4;
      if (1 < *(int *)(iVar3 + 0x48) - 1U) {
        iVar5 = 3;
      }
      if (*(int *)(param_1 + 0x150) != iVar5) {
        FUN_00a28980(iVar5,0x3f800000);
        *(int *)(param_1 + 0x150) = iVar5;
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

// 00D6FDC0  cPf07::vf00  size=65  [class]
undefined4 * __thiscall cPf07::vf00(undefined4 *param_1,byte param_2)

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

