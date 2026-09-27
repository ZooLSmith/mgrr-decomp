// src/misc/cWeaponSelectMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00992390..009BC940, 29 functions

#include "types.h"

// 00992390  FUN_00992390  size=26  [callgraph]
undefined4 __thiscall FUN_00992390(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x4a0)) {
    return *(undefined4 *)(param_1 + 0x4a4);
  }
  return 0;
}

// 009923F0  cWeaponSelectMenu::cWeaponSelectMenu  size=405  [class]
undefined4 * __fastcall cWeaponSelectMenu::cWeaponSelectMenu(undefined4 *param_1)

{
  int local_4;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 3;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  param_1[0xd4] = 0xffffffff;
  param_1[0x132] = 0;
  param_1[0xd5] = 0xffffffff;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 1;
  param_1[299] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 1;
  local_4 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  param_1[0x159] = 0;
  param_1[0x151] = 0;
  param_1[0x158] = 0;
  param_1[0x15a] = 1;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  _memset(param_1 + 0x10e,0,0x2c);
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[300] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x12d] = 0;
  param_1[0x13b] = 0x3f800000;
  param_1[0x12e] = 0;
  param_1[0x157] = 0x3f800000;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  FUN_00cca0a0();
  DAT_01b39200 = param_1[0xe3];
  return param_1;
}

// 00992590  cWeaponSelectMenu::~cWeaponSelectMenu  size=225  [class]
void __fastcall cWeaponSelectMenu::~cWeaponSelectMenu(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  DAT_01b39200 = param_1[0xe3];
  *param_1 = vftable;
  FUN_00ce1ba0();
  if ((undefined4 *)param_1[0x151] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x151])(1);
    param_1[0x151] = 0;
  }
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x127])(1);
    param_1[0x127] = 0;
  }
  if (param_1[300] != 0) {
    FUN_00cae160();
    param_1[300] = 0;
  }
  piVar2 = param_1 + 0x12d;
  iVar1 = 2;
  do {
    if (*piVar2 != 0) {
      FUN_00cae160();
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00cfe0f0(0x12);
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 3;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009926A0  FUN_009926a0  size=68  [between]
int FUN_009926a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x570,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cWeaponSelectMenu::cWeaponSelectMenu();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cWeaponSelectMenu";
      FUN_00d29ca0(0x6c,9);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 009926F0  cWeaponSelectMenu::vf0C  size=333  [class]
void __fastcall cWeaponSelectMenu::vf0C(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    local_20 = 0x42c40000;
    local_1c = 0x43f28000;
    local_18 = 0x439b8000;
    local_14 = 0x440ec000;
    FUN_00cfdc80(0x12,0,0,0,&local_20,1);
    local_20 = 0x43c30000;
    local_1c = 0x43f28000;
    local_18 = 0x4416c000;
    local_14 = 0x440ec000;
    FUN_00cfdc80(0x12,1,0,0,&local_20,1);
    local_20 = 0x4429c000;
    local_1c = 0x43f28000;
    local_18 = 0x445f0000;
    local_14 = 0x440ec000;
    FUN_00cfdc80(0x12,2,0,0,&local_20,1);
    local_20 = 0x44728000;
    local_1c = 0x43f28000;
    local_18 = 0x4493e000;
    local_14 = 0x440ec000;
    FUN_00cfdc80(0x12,3,0,0,&local_20,1);
  }
  return;
}

// 009928A0  FUN_009928a0  size=432  [callgraph]
void __fastcall FUN_009928a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x78))();
  if (iVar2 == 1) {
    iVar2 = 1;
  }
  else if (iVar2 == 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3a8)) {
    piVar1 = (int *)(param_1 + 0x3b8);
    do {
      if (iVar2 == *piVar1) {
        *(int *)(param_1 + 0x368) = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3a8));
  }
  uVar4 = FUN_00b7f610();
  switch(uVar4) {
  case 1:
    iVar2 = 2;
    break;
  case 2:
    iVar2 = 3;
    break;
  case 3:
    iVar2 = 4;
    break;
  case 4:
    iVar2 = 5;
    break;
  case 5:
    iVar2 = 0;
    break;
  case 6:
    iVar2 = 1;
    break;
  case 7:
    iVar2 = 6;
    break;
  case 8:
    iVar2 = 7;
    break;
  case 9:
    iVar2 = 8;
    break;
  case 10:
    iVar2 = 9;
    break;
  default:
    iVar2 = -1;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3ac)) {
    piVar1 = (int *)(param_1 + 0x3c4);
    do {
      if (iVar2 == *piVar1) {
        *(int *)(param_1 + 0x36c) = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3ac));
  }
  uVar4 = FUN_00b7f5d0();
  switch(uVar4) {
  default:
    iVar2 = 0;
    break;
  case 1:
    iVar2 = 2;
    break;
  case 2:
    iVar2 = 3;
    break;
  case 3:
    iVar2 = 1;
    break;
  case 4:
    iVar2 = 4;
    break;
  case 5:
    iVar2 = 5;
    break;
  case 6:
    iVar2 = 6;
    break;
  case 7:
    iVar2 = 7;
    break;
  case 8:
    iVar2 = 8;
    break;
  case 10:
    iVar2 = 9;
    break;
  case 0xb:
    iVar2 = 10;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3b0)) {
    piVar1 = (int *)(param_1 + 0x400);
    do {
      if (iVar2 == *piVar1) {
        *(int *)(param_1 + 0x370) = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3b0));
  }
  iVar2 = FUN_00b7f5f0();
  if (iVar2 == 2) {
    iVar2 = 0;
  }
  else if (iVar2 == 3) {
    iVar2 = 1;
  }
  else if (iVar2 == 4) {
    iVar2 = 2;
  }
  else {
    iVar2 = -1;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3b4)) {
    piVar1 = (int *)(param_1 + 0x3f0);
    while (iVar2 != *piVar1) {
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
      if (*(int *)(param_1 + 0x3b4) <= iVar3) {
        return;
      }
    }
    *(int *)(param_1 + 0x374) = iVar3;
  }
  return;
}

// 00992AB0  FUN_00992ab0  size=566  [callgraph]
void __fastcall FUN_00992ab0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x3b8 + *(int *)(param_1 + 0x368) * 4);
  if (iVar3 == 0) {
    iVar3 = 2;
  }
  else if (iVar3 == 1) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x78))();
  if (iVar3 != iVar2) {
    piVar1 = (int *)FUN_00c13920();
    (**(code **)(*piVar1 + 0x74))(iVar3);
  }
  switch(*(undefined4 *)(param_1 + 0x3c4 + *(int *)(param_1 + 0x36c) * 4)) {
  case 0:
    uVar4 = 5;
    break;
  case 1:
    uVar4 = 6;
    break;
  case 2:
    uVar4 = 1;
    break;
  case 3:
    uVar4 = 2;
    break;
  case 4:
    uVar4 = 3;
    break;
  case 5:
    uVar4 = 4;
    break;
  case 6:
    uVar4 = 7;
    break;
  case 7:
    uVar4 = 8;
    break;
  case 8:
    uVar4 = 9;
    break;
  case 9:
    uVar4 = 10;
    break;
  default:
    uVar4 = 0;
  }
  if ((((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) && (DAT_01bea030 != 7)) &&
     (uVar4 != DAT_01be9fe8)) {
    FUN_00b7d130();
    DAT_01be9fec = uVar4;
    if (DAT_01bea030 - 8U < 2) {
      DAT_01be9fec = uVar4 | 0x80000000;
    }
    FUN_00b7f600(uVar4);
    DAT_01dc134c = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x400 + *(int *)(param_1 + 0x370) * 4)) {
  default:
    iVar3 = 0;
    break;
  case 1:
    iVar3 = 3;
    break;
  case 2:
    iVar3 = 1;
    break;
  case 3:
    iVar3 = 2;
    break;
  case 4:
    iVar3 = 4;
    break;
  case 5:
    iVar3 = 5;
    break;
  case 6:
    iVar3 = 6;
    break;
  case 7:
    iVar3 = 7;
    break;
  case 8:
    iVar3 = 8;
    break;
  case 9:
    iVar3 = 10;
    break;
  case 10:
    iVar3 = 0xb;
  }
  if (((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) &&
     ((DAT_01bea030 != 7 && (iVar3 != DAT_01be9ffc)))) {
    FUN_00b7d060();
    DAT_01bea000 = FUN_009c7430(iVar3);
    FUN_00b7f5c0(iVar3);
    FUN_009c52d0(1);
    DAT_01dc13f0 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x3f0 + *(int *)(param_1 + 0x374) * 4);
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  else if (iVar3 == 1) {
    uVar4 = 3;
  }
  else if (iVar3 == 2) {
    uVar4 = 4;
  }
  else {
    uVar4 = 0;
  }
  if (((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) &&
     ((DAT_01bea030 != 7 && (uVar4 != DAT_01be9fd4)))) {
    FUN_00b7d0e0();
    DAT_01be9fd8 = uVar4;
    if (DAT_01bea030 - 8U < 2) {
      DAT_01be9fd8 = uVar4 | 0x80000000;
    }
    FUN_00b7f5e0(uVar4);
    DAT_01dc074c = 1;
  }
  return;
}

// 00992D40  FUN_00992d40  size=562  [callgraph]
undefined4 FUN_00992d40(void)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar3 = DAT_01dc14c8;
  bVar1 = true;
  if ((DAT_01be9ff0 == 0) && (iVar4 = FUN_00b7d110(), iVar4 == 0)) {
    FUN_00b949b0();
  }
  if ((DAT_01be9fdc == 0) && (iVar4 = FUN_00b7d0c0(), iVar4 == 0)) {
    (**(code **)(*piVar3 + 0x3d8))();
  }
  iVar4 = FUN_00d46780();
  if (((((iVar4 == 0) && (iVar4 = FUN_00d467a0(), iVar4 == 0)) && (DAT_01bea004 == 0)) &&
      ((DAT_01bea000 == DAT_01be9ffc && (DAT_01be9fc8 == 0)))) &&
     ((DAT_01be9fc4 == DAT_01be9fc0 && (iVar4 = FUN_00b7d050(), iVar4 == 0)))) {
    FUN_00b88590();
  }
  if ((DAT_01bea058 == 0) && (DAT_01bea054 == DAT_01bea050)) {
    if (DAT_01bea05c < 2) {
      bVar2 = false;
    }
    else if ((DAT_01bea044 == 0) && (DAT_01bea040 == DAT_01bea03c)) {
      if (DAT_01bea030 != 2) {
        if ((DAT_01bea02c != 0) || (DAT_01bea028 != DAT_01bea024)) {
          bVar2 = false;
          goto LAB_00992f31;
        }
        if ((DAT_01bea018 != 0) || (DAT_01bea014 != DAT_01bea010)) {
          bVar2 = false;
          goto LAB_00992f31;
        }
        if ((DAT_01bea004 != 0) || (DAT_01bea000 != DAT_01be9ffc)) {
          bVar2 = false;
          goto LAB_00992f31;
        }
        if ((DAT_01be9fdc != 0) || (DAT_01be9fd8 != DAT_01be9fd4)) {
          bVar2 = false;
          goto LAB_00992f31;
        }
        if ((DAT_01be9ff0 != 0) || (DAT_01be9fec != DAT_01be9fe8)) {
          bVar2 = false;
          goto LAB_00992f31;
        }
        if ((DAT_01be9fc8 != 0) || (DAT_01be9fc4 != DAT_01be9fc0)) {
          bVar2 = false;
          goto LAB_00992f31;
        }
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    bVar2 = false;
  }
LAB_00992f31:
  uVar5 = 0;
  do {
    iVar4 = FUN_00ce4dd0(0x11);
    if (iVar4 == 0) {
      bVar1 = false;
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  if ((bVar2) && (bVar1)) {
    return 1;
  }
  return 0;
}

// 00992F80  FUN_00992f80  size=278  [callgraph]
void __thiscall FUN_00992f80(int param_1,int param_2,int param_3)

{
  FUN_00ce4d70(3);
  if (*(int *)(param_1 + 0x38c) == 0) {
    FUN_00ce4d70(4);
  }
  FUN_00ce4d70(0x12);
  FUN_00ce4d70(0x13);
  param_2 = param_2 - param_3;
  *(undefined4 *)(param_1 + 0x4cc) = 1;
  *(undefined4 *)(param_1 + 0x394) = 1;
  if (param_2 == -3) {
    *(undefined4 *)(param_1 + 0x350) = 6;
  }
  else if (param_2 == -2) {
    *(undefined4 *)(param_1 + 0x350) = 4;
  }
  else if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x350) = 2;
  }
  else if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x350) = 1;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x350) = 3;
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x350) = 5;
  }
  FUN_00ce4d70(*(undefined4 *)(param_1 + 0x350));
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x4a8) != 0) {
      FUN_00ce4d70(9);
      *(undefined4 *)(param_1 + 0x560) = 0;
    }
    FUN_00ce4d70(3);
  }
  return;
}

// 009930A0  FUN_009930a0  size=924  [callgraph]
void __fastcall FUN_009930a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  puVar4 = &DAT_01656768;
  do {
    iVar1 = FUN_00951740(*puVar4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x3b8 + *(int *)(param_1 + 0x3a8) * 4) = puVar4[1];
      uVar2 = FUN_009516c0(*puVar4);
      *(undefined4 *)(param_1 + 0x42c + *(int *)(param_1 + 0x3a8) * 4) = uVar2;
      uVar2 = FUN_00951700(*puVar4);
      *(undefined4 *)(param_1 + 0x464 + *(int *)(param_1 + 0x3a8) * 4) = uVar2;
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
    }
    puVar4 = puVar4 + 2;
  } while ((int)puVar4 < 0x1656778);
  *(undefined4 *)(param_1 + 0x3b8 + *(int *)(param_1 + 0x3a8) * 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42c + *(int *)(param_1 + 0x3a8) * 4) = 0;
  *(undefined4 *)(param_1 + 0x464 + *(int *)(param_1 + 0x3a8) * 4) = 0;
  *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
  if (((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) && (DAT_01bea030 != 7)) {
    piVar5 = &DAT_01656718;
    do {
      iVar1 = FUN_00951740(*piVar5);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x3c4 + *(int *)(param_1 + 0x3ac) * 4) = piVar5[1];
        iVar1 = *piVar5;
        if ((iVar1 == 0x3800cb76) || (iVar1 == 0x7089ed6c)) {
          *(undefined4 *)(param_1 + 0x438 + *(int *)(param_1 + 0x3ac) * 4) = 0;
          *(undefined4 *)(param_1 + 0x470 + *(int *)(param_1 + 0x3ac) * 4) = 0;
          piVar3 = (int *)FUN_0094e5e0(*piVar5);
          if (piVar3 != (int *)0x0) {
            uVar2 = (**(code **)(*piVar3 + 0x4c))();
            *(undefined4 *)(param_1 + 0x438 + *(int *)(param_1 + 0x3ac) * 4) = uVar2;
            uVar2 = (**(code **)(*piVar3 + 0x50))();
            *(undefined4 *)(param_1 + 0x470 + *(int *)(param_1 + 0x3ac) * 4) = uVar2;
          }
        }
        else {
          uVar2 = FUN_009516c0(iVar1);
          *(undefined4 *)(param_1 + 0x438 + *(int *)(param_1 + 0x3ac) * 4) = uVar2;
          uVar2 = FUN_00951700(*piVar5);
          *(undefined4 *)(param_1 + 0x470 + *(int *)(param_1 + 0x3ac) * 4) = uVar2;
        }
        *(int *)(param_1 + 0x3ac) = *(int *)(param_1 + 0x3ac) + 1;
      }
      piVar5 = piVar5 + 2;
    } while ((int)piVar5 < 0x1656768);
  }
  *(undefined4 *)(param_1 + 0x3c4 + *(int *)(param_1 + 0x3ac) * 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x438 + *(int *)(param_1 + 0x3ac) * 4) = 0;
  *(undefined4 *)(param_1 + 0x470 + *(int *)(param_1 + 0x3ac) * 4) = 0;
  *(int *)(param_1 + 0x3ac) = *(int *)(param_1 + 0x3ac) + 1;
  if (((DAT_01bea030 == 4) || (DAT_01bea030 == 5)) || (DAT_01bea030 == 7)) {
    if (((DAT_01bea030 == 5) && (DAT_01dc14c8 != 0)) && (iVar1 = FUN_00b80980(), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0x400) = 5;
    }
    else {
      *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
    }
    *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + 1;
  }
  else {
    iVar1 = FUN_00d46780();
    if ((iVar1 == 0) && (iVar1 = FUN_00d467a0(), iVar1 == 0)) {
      piVar5 = &DAT_016566c4;
      do {
        if (*piVar5 == 6) {
          iVar1 = FUN_009c73f0(3);
LAB_009932fd:
          if (iVar1 != 0) goto LAB_00993301;
        }
        else {
          if (*piVar5 == 8) {
            iVar1 = FUN_009c7400();
            goto LAB_009932fd;
          }
LAB_00993301:
          if (((*piVar5 != 10) && (*piVar5 != 9)) && (iVar1 = FUN_009c4900(piVar5[-1]), iVar1 != 0))
          {
            *(int *)(param_1 + 0x400 + *(int *)(param_1 + 0x3b0) * 4) = *piVar5;
            *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + 1;
          }
        }
        piVar5 = piVar5 + 2;
      } while ((int)piVar5 < 0x165671c);
    }
    if (*(int *)(param_1 + 0x3b0) == 0) {
      *(undefined4 *)(param_1 + 0x400) = 0;
      if (DAT_01bea030 == 8) {
        *(undefined4 *)(param_1 + 0x400) = 9;
      }
      if (DAT_01bea030 == 9) {
        *(undefined4 *)(param_1 + 0x400) = 10;
      }
      *(undefined4 *)(param_1 + 0x3b0) = 1;
    }
  }
  if (((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) &&
     ((DAT_01bea030 != 7 &&
      ((iVar1 = FUN_00d46780(), iVar1 == 0 && (iVar1 = FUN_00d467a0(), iVar1 == 0)))))) {
    puVar4 = &DAT_016566a8;
    do {
      iVar1 = FUN_009c4900(puVar4[-1]);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x3f0 + *(int *)(param_1 + 0x3b4) * 4) = *puVar4;
        *(int *)(param_1 + 0x3b4) = *(int *)(param_1 + 0x3b4) + 1;
      }
      puVar4 = puVar4 + 2;
    } while ((int)puVar4 < 0x16566c0);
  }
  *(uint *)(param_1 + 0x3a4) = (uint)(*(int *)(param_1 + 0x3b4) == 0);
  *(undefined4 *)(param_1 + 0x3f0 + *(int *)(param_1 + 0x3b4) * 4) = 0xffffffff;
  *(int *)(param_1 + 0x3b4) = *(int *)(param_1 + 0x3b4) + 1;
  return;
}

// 00993440  FUN_00993440  size=882  [callgraph]
void __fastcall FUN_00993440(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x4c0)) {
  case 0:
    iVar4 = FUN_00cb2760(*(undefined4 *)(DAT_01b39204 * 0x94 + 0x120 + param_1));
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(iVar4 + 0x90);
    *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(iVar4 + 0x94);
    iVar4 = DAT_01b39204;
    *(int *)(param_1 + 0x4c0) = *(int *)(param_1 + 0x4c0) + 1;
    *(int *)(param_1 + 0x4bc) = iVar4;
  case 1:
    uVar5 = *(uint *)(param_1 + 0x4c4) & 0x80000003;
    puVar1 = (uint *)(param_1 + 0x4c4);
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (((int)uVar5 < 2) || (*(int *)(param_1 + 0x4d0) != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    FUN_00cb5830(uVar2);
    uVar5 = *puVar1 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb57c0((int)uVar5 < 2);
    uVar5 = *puVar1 & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x4bc) * 0x94 + 0x11c + param_1),(int)uVar5 < 2)
    ;
    iVar4 = FUN_00ca8620(puVar1,0xc);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x4d0) = 0;
      FUN_00cb5830(1);
      FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x4bc) * 0x94 + 0x120 + param_1),0);
      *(int *)(param_1 + 0x4c0) = *(int *)(param_1 + 0x4c0) + 1;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x4cc) != 0 || *(int *)(param_1 + 0x4ac) != 0) {
      *(undefined4 *)(param_1 + 0x4c4) = 0xc;
      *(undefined4 *)(param_1 + 0x4c0) = 3;
    }
    break;
  case 3:
    uVar5 = *(uint *)(param_1 + 0x4c4) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb57c0(1 < (int)uVar5);
    uVar5 = *(uint *)(param_1 + 0x4c4) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    if (((int)uVar5 < 2) && (*(int *)(param_1 + 0x4d0) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_00cb5830(uVar2);
    iVar4 = FUN_00ca8620((uint *)(param_1 + 0x4c4),0xc);
    if (iVar4 == 0) break;
    if ((*(int *)(param_1 + 0x4d0) != 0) && (*(int *)(param_1 + 0x4ac) != 0)) {
      FUN_00cb5830(0);
      *(undefined4 *)(param_1 + 0x4d0) = 0;
    }
    FUN_00cb5830(0);
    FUN_00cb2310(*(undefined4 *)(*(int *)(param_1 + 0x4bc) * 0x94 + 0x120 + param_1),1);
    *(int *)(param_1 + 0x4c0) = *(int *)(param_1 + 0x4c0) + 1;
    goto LAB_009936e9;
  case 4:
    if ((*(int *)(param_1 + 0x4ac) != 0) || (*(int *)(param_1 + 0x4cc) == 0)) break;
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
LAB_009936e9:
    FUN_00993440();
    break;
  default:
    break;
  }
  if (*(int *)(param_1 + 0x4c0) < 2) {
    puVar3 = (undefined4 *)FUN_00caac30(0);
    local_30 = *puVar3;
    local_2c = puVar3[1];
    local_28 = puVar3[2];
    local_24 = puVar3[3];
    FUN_00d9fa80(&local_20,&local_30);
    FUN_00cb5810(local_20,local_1c);
    FUN_00cb5540(&local_20,param_1 + 0x4e0,0x3f800000);
    puVar3 = (undefined4 *)FUN_00cb57f0(local_40);
    iVar4 = FUN_00cb57f0(local_38);
    FUN_00cb5810(*puVar3,*(undefined4 *)(iVar4 + 4));
  }
  return;
}

// 009937D0  FUN_009937d0  size=90  [callgraph]
void __fastcall FUN_009937d0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x4c0)) {
  case 1:
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4c0) = 4;
    *(undefined4 *)(param_1 + 0x4d0) = 1;
    *(undefined4 *)(param_1 + 0x4cc) = 1;
    return;
  case 2:
    *(undefined4 *)(param_1 + 0x4c4) = 0xc;
    *(undefined4 *)(param_1 + 0x4c0) = 3;
  case 3:
    *(undefined4 *)(param_1 + 0x4d0) = 1;
  case 4:
    *(undefined4 *)(param_1 + 0x4cc) = 1;
  default:
    return;
  }
}

// 00993840  FUN_00993840  size=214  [callgraph]
void __fastcall FUN_00993840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *local_10;
  int local_c [3];
  
  local_c[1] = *(int *)(param_1 + 0x368);
  local_c[0] = local_c[1] + -1;
  if (local_c[1] + -1 < 0) {
    local_c[0] = *(int *)(param_1 + 0x3a8) + -1;
  }
  local_10 = (undefined4 *)(param_1 + 0x44);
  local_c[2] = (*(int *)(param_1 + 0x3a8) <= (int)(local_c[1] + 1U)) - 1 & local_c[1] + 1U;
  iVar4 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x3b8 + local_c[iVar4] * 4);
    FUN_00cb2310(*local_10,iVar1 != -1);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        FUN_00ce4d70(0);
        pcVar5 = "sign_21";
      }
      else {
        if (iVar1 != 1) goto LAB_009938f7;
        FUN_00ce4d70(1);
        pcVar5 = "sign_20";
      }
      uVar2 = FUN_00e03ea0(pcVar5);
      uVar3 = FUN_00cb25d0(3);
      FUN_00cb2ce0(uVar3,uVar2);
    }
LAB_009938f7:
    local_10 = local_10 + 1;
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      FUN_00ce4d70(0x12);
      return;
    }
  } while( true );
}

// 00993920  FUN_00993920  size=125  [callgraph]
undefined4 __thiscall FUN_00993920(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (DAT_01b39204 != 0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x42c + param_2 * 4)) {
    iVar4 = 0;
    iVar2 = 0;
    if (DAT_01dc14c8 != 0) {
      iVar4 = FUN_00b7cb20(0);
      iVar2 = FUN_00bc3230(0);
    }
    iVar1 = *(int *)(param_1 + 0x3b8 + param_2 * 4);
    if ((iVar1 == 1) && (iVar4 == 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if ((iVar1 == 0) && (iVar2 == 0)) {
      return 1;
    }
  }
  return uVar3;
}

// 009939A0  FUN_009939a0  size=168  [callgraph]
float10 FUN_009939a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float local_58;
  float local_54 [21];
  
  local_54[0] = 0.0;
  local_58 = 0.0;
  local_54[1] = 0.0;
  local_54[0x11] = 0.0;
  local_54[2] = 0.0;
  local_54[0x12] = 0.0;
  local_54[3] = 0.0;
  local_54[4] = 0.0;
  local_54[5] = 0.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 0.0;
  local_54[0xb] = 0.0;
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 0.0;
  local_54[0x10] = 0.0;
  local_54[0x13] = -NAN;
  iVar1 = FUN_00cf9960(param_2,local_54);
  if (iVar1 != 0) {
    local_58 = local_54[0];
  }
  iVar1 = FUN_00cb2790(param_2);
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 00993A50  FUN_00993a50  size=45  [callgraph]
void __fastcall FUN_00993a50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3b8 + *(int *)(param_1 + 0x368) * 4);
  iVar2 = 0;
  if (iVar1 != -1) {
    iVar2 = *(int *)(&DAT_016567a4 + iVar1 * 4);
  }
  if (iVar2 == 1) {
    FUN_00e5e050("core_se_sys_repair_attach",0);
  }
  return;
}

// 00993A80  FUN_00993a80  size=64  [callgraph]
void __fastcall FUN_00993a80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c4 + *(int *)(param_1 + 0x36c) * 4);
  iVar2 = 0;
  if (iVar1 != -1) {
    iVar2 = *(int *)(&DAT_016567e4 + iVar1 * 4);
  }
  if (iVar2 == 1) {
    FUN_00e5e050("core_se_sys_weapon_decide_s",0);
  }
  else if (iVar2 == 2) {
    FUN_00e5e050("core_se_sys_weapon_decide_l",0);
    return;
  }
  return;
}

// 00993AC0  FUN_00993ac0  size=83  [callgraph]
void __fastcall FUN_00993ac0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3f0 + *(int *)(param_1 + 0x374) * 4);
  iVar2 = 0;
  if (iVar1 != -1) {
    iVar2 = *(int *)(&DAT_01656878 + iVar1 * 4);
  }
  if (iVar2 == 1) {
    FUN_00e5e050("core_se_sys_weapon_boss_decide_mis",0);
  }
  else {
    if (iVar2 == 2) {
      FUN_00e5e050("core_se_sys_weapon_boss_decide_mon",0);
      return;
    }
    if (iVar2 == 3) {
      FUN_00e5e050("core_se_sys_weapon_boss_decide_sun",0);
      return;
    }
  }
  return;
}

// 00993B20  FUN_00993b20  size=119  [callgraph]
void __fastcall FUN_00993b20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x400 + *(int *)(param_1 + 0x370) * 4);
  uVar2 = 0;
  if ((iVar1 == -1) || (uVar2 = *(uint *)(&DAT_01656940 + iVar1 * 4), uVar2 < 6)) {
    switch(uVar2) {
    default:
      FUN_00e5e050("core_se_sys_weapon_main_decide_m",0);
      return;
    case 1:
      FUN_00e5e050("core_se_sys_weapon_main_decide_l",0);
      return;
    case 3:
      FUN_00e5e050("core_se_sys_weapon_main_decide_bokutou",0);
      return;
    case 4:
      FUN_00e5e050("core_se_sys_wp_main_decide_foxblade",0);
      return;
    case 5:
      FUN_00e5e050("core_se_sys_wp_main_decide_snakesword",0);
    }
  }
  return;
}

// 00993BB0  FUN_00993bb0  size=676  [callgraph]
void __thiscall FUN_00993bb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [3];
  
  uVar5 = 0;
  local_18 = 1;
  local_14 = 1;
  local_10[0] = 0;
  if (DAT_01b39204 == 2) {
    switch(*(undefined4 *)(param_1 + 0x400 + param_2 * 4)) {
    default:
      uVar2 = 0;
      break;
    case 1:
      uVar2 = 3;
      break;
    case 2:
      uVar2 = 1;
      uVar5 = 1;
      break;
    case 3:
      uVar2 = 2;
      uVar5 = 1;
      break;
    case 4:
      uVar2 = 4;
      local_10[0] = 1;
      uVar5 = 1;
      break;
    case 5:
      uVar2 = 5;
      break;
    case 6:
      uVar2 = 6;
      uVar5 = 1;
      break;
    case 7:
      uVar2 = 7;
      break;
    case 8:
      uVar2 = 8;
      break;
    case 9:
      uVar2 = 10;
      break;
    case 10:
      uVar2 = 0xb;
    }
    pbVar3 = (byte *)FUN_009c47f0(uVar2);
  }
  else {
    if (DAT_01b39204 != 3) goto LAB_00993e3e;
    iVar1 = *(int *)(param_1 + 0x3f0 + param_2 * 4);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else if (iVar1 == 1) {
      uVar2 = 3;
    }
    else if (iVar1 == 2) {
      uVar2 = 4;
    }
    else {
      uVar2 = 0;
    }
    pbVar3 = (byte *)FUN_009c48b0(uVar2);
    local_18 = 0;
    local_14 = 0;
  }
  if (pbVar3 != (byte *)0x0) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x58),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x84),local_18);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x88),local_14);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x7c),uVar5);
    uVar4 = (uint)*pbVar3;
    if (local_10[0] != 0) {
      uVar4 = 5 - uVar4;
    }
    if (uVar4 == 0) {
      pcVar6 = "-";
    }
    else {
      pcVar6 = "%d";
    }
    _sprintf_s((char *)local_10,8,pcVar6,uVar4);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x5c),local_10);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x60),local_10);
    if (pbVar3[1] == 0) {
      uVar4 = 0;
      pcVar6 = "-";
    }
    else {
      uVar4 = (uint)pbVar3[1];
      pcVar6 = "%d";
    }
    _sprintf_s((char *)local_10,8,pcVar6,uVar4);
    FUN_00cce090(*(undefined4 *)(param_1 + 100),local_10);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x68),local_10);
    if (pbVar3[2] == 0) {
      uVar4 = 0;
      pcVar6 = "-";
    }
    else {
      uVar4 = (uint)pbVar3[2];
      pcVar6 = "%d";
    }
    _sprintf_s((char *)local_10,8,pcVar6,uVar4);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x6c),local_10);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x70),local_10);
    if (pbVar3[3] == 0) {
      uVar4 = 0;
      pcVar6 = "-";
    }
    else {
      uVar4 = (uint)pbVar3[3];
      pcVar6 = "%d";
    }
    _sprintf_s((char *)local_10,8,pcVar6,uVar4);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x74),local_10);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x78),local_10);
    FUN_00ce4d70(0x17);
    return;
  }
LAB_00993e3e:
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x58),0);
  return;
}

// 00993E80  FUN_00993e80  size=211  [callgraph]
void __fastcall FUN_00993e80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_01dc1418 == '\0') {
    uVar1 = FUN_00ca9ea0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x50),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x50),0x30d2b373);
    uVar1 = FUN_00ca9ea0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x54),uVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x54),0x30d2b373);
  }
  else {
    uVar1 = FUN_00cc7240(0x58);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x50),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x50),uVar1);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x54),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x54),uVar1);
    iVar3 = FUN_00caa310(0x58);
    if (iVar3 != 1) {
      iVar3 = FUN_00caa310(0x58);
      if (iVar3 == 2) {
        FUN_00ce4d70(0x1b);
        return;
      }
      FUN_00ce4d70(0x1c);
      return;
    }
  }
  FUN_00ce4d70(0x1a);
  return;
}

// 009A4720  cWeaponSelectMenu::vf00  size=30  [class]
undefined4 __thiscall cWeaponSelectMenu::vf00(undefined4 param_1,byte param_2)

{
  ~cWeaponSelectMenu();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A4740  FUN_009a4740  size=407  [callgraph]
void __thiscall FUN_009a4740(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  
  ppuVar3 = (undefined **)0x0;
  switch(DAT_01b39204) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x3b8 + param_2 * 4);
    if (iVar2 != -1) {
      ppuVar3 = &PTR_s_HUD_ITEM_NAME_0116_016b5434 + iVar2 * 3;
    }
    break;
  case 1:
    iVar2 = *(int *)(param_1 + 0x3c4 + param_2 * 4);
    if (iVar2 != -1) {
      ppuVar3 = &PTR_s_HUD_ITEM_NAME_0106_016b5470 + iVar2 * 3;
    }
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x400 + param_2 * 4);
    if (iVar2 != -1) {
      ppuVar3 = &PTR_s_HUD_ITEM_NAME_0021_016b54e8 + iVar2 * 3;
    }
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x3f0 + param_2 * 4);
    if (iVar2 != -1) {
      ppuVar3 = &PTR_s_HUD_ITEM_NAME_0028_016b544c + iVar2 * 3;
    }
  }
  *(uint *)(*(int *)(param_1 + 0x49c) + 0x28) = (uint)(ppuVar3 != (undefined **)0x0);
  if ((ppuVar3 != (undefined **)0x0) != 0) {
    pcVar4 = ppuVar3[1];
    pcVar5 = ppuVar3[2];
    if (DAT_01b39204 == 0) {
      iVar2 = *(int *)(param_1 + 0x3b8 + param_2 * 4);
      if (iVar2 == 1) {
        iVar2 = FUN_00d46780();
        if (iVar2 == 0) {
          iVar2 = FUN_00d467a0();
          if (iVar2 != 0) {
            pcVar4 = "it_s_3003";
            pcVar5 = "it_s_3003b";
          }
        }
        else {
          pcVar4 = "it_s_2001";
          pcVar5 = "it_s_2001b";
        }
      }
      else if (iVar2 == 0) {
        iVar2 = FUN_00d46780();
        if (iVar2 == 0) {
          iVar2 = FUN_00d467a0();
          if (iVar2 != 0) {
            pcVar4 = "it_s_3004";
            pcVar5 = "it_s_3004b";
          }
        }
        else {
          pcVar4 = "it_s_2003";
          pcVar5 = "it_s_2003b";
        }
      }
    }
    else if (((DAT_01b39204 == 1) && (*(int *)(param_1 + 0x3c4 + param_2 * 4) == 2)) &&
            (iVar2 = FUN_00d46780(), iVar2 != 0)) {
      pcVar4 = "it_s_2002";
      pcVar5 = "it_s_2002b";
    }
    iVar2 = FUN_00cacfb0();
    if (iVar2 == 0) {
      pcVar5 = (char *)0x0;
    }
    iVar2 = *(int *)(param_1 + 0x49c);
    puVar1 = *ppuVar3;
    *(char **)(iVar2 + 0x3c) = pcVar5;
    *(char **)(iVar2 + 0x38) = pcVar4;
    *(undefined4 *)(iVar2 + 0x2c) = 1;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined **)(iVar2 + 0x34) = puVar1;
  }
  FUN_00993bb0(param_2);
  return;
}

// 009A48F0  FUN_009a48f0  size=1140  [callgraph]
void __thiscall FUN_009a48f0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined **ppuVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float local_d0;
  uint local_c8;
  int local_bc;
  undefined1 local_b4;
  undefined4 local_b3;
  undefined4 local_af;
  undefined4 local_ab;
  undefined2 local_a7;
  undefined1 local_a5;
  undefined **local_a4 [4];
  char local_94 [16];
  int local_84 [4];
  int local_74 [5];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54 [21];
  
  local_84[2] = param_1 + 0x400;
  local_74[1] = param_1 + 0x438;
  local_84[1] = param_1 + 0x3c4;
  local_60 = param_1 + 0x470;
  local_74[0] = param_1 + 0x42c;
  local_74[4] = param_1 + 0x464;
  local_84[0] = param_1 + 0x3b8;
  iVar2 = *(int *)(param_1 + 0x3a8 + param_2 * 4);
  iVar6 = param_2 * 0x94 + 0x90 + param_1;
  local_84[3] = param_1 + 0x3f0;
  iVar9 = *(int *)(local_84[param_2] + *(int *)(param_1 + 0x368 + param_2 * 4) * 4);
  local_a4[0] = &PTR_s_HUD_ITEM_NAME_S_0116_016b53f8;
  local_a4[1] = &PTR_s_HUD_ITEM_NAME_S_0106_018b5778;
  local_a4[2] = &PTR_s_HUD_ITEM_NAME_S_0021_018b57f0;
  local_a4[3] = &PTR_s_HUD_ITEM_NAME_S_0028_016b5410;
  local_74[2] = 0;
  local_74[3] = 0;
  uVar7 = (param_2 < 2) - 1 & 2;
  local_5c = 0;
  local_58 = 0;
  local_b4 = 0;
  local_b3 = 0;
  local_af = 0;
  local_ab = 0;
  local_a7 = 0;
  local_a5 = 0;
  local_94[0] = '\0';
  local_94[1] = '\0';
  local_94[2] = '\0';
  local_94[3] = '\0';
  local_94[4] = '\0';
  local_94[5] = '\0';
  local_94[6] = '\0';
  local_94[7] = '\0';
  local_94[8] = '\0';
  local_94[9] = '\0';
  local_94[10] = '\0';
  local_94[0xb] = '\0';
  local_94[0xc] = '\0';
  local_94[0xd] = '\0';
  local_94[0xe] = '\0';
  local_94[0xf] = 0;
  bVar11 = false;
  if (param_2 == 1) {
    uVar8 = DAT_01bea010 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    bVar11 = uVar8 == 1;
  }
  if (iVar9 == -1) {
    FUN_00cb2310(*(undefined4 *)(iVar6 + uVar7 * 4),0);
  }
  else {
    FUN_00cf9770(*(undefined4 *)(iVar6 + uVar7 * 4),local_a4[param_2][iVar9 * 3],0,0xffffffff);
  }
  if (1 < param_2) {
    pfVar4 = (float *)FUN_00ccde20(*(undefined4 *)(iVar6 + 0x90));
    FUN_00cb28a0(*(undefined4 *)(iVar6 + 0x90),*pfVar4 * -2.0);
  }
  for (iVar9 = iVar2 + -5; iVar9 < 0; iVar9 = iVar9 + iVar2) {
  }
  local_c8 = (*(int *)(param_1 + 0x368 + param_2 * 4) + iVar9) % iVar2;
  local_bc = 0;
  puVar10 = (undefined4 *)(iVar6 + 0xc);
  do {
    iVar6 = *(int *)(local_84[param_2] + local_c8 * 4);
    bVar13 = iVar6 == -1;
    bVar12 = local_bc - 4U < 3;
    FUN_00cb2310(puVar10[0x18],bVar13);
    FUN_00cb2310(puVar10[8],!bVar13);
    if (bVar12) {
      if (((bVar13) || (bVar11)) || (local_a4[param_2][iVar6 * 3 + 2] == (undefined *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_00cb2310(puVar10[0x10],uVar5);
      if (((bVar13) || (bVar11)) || (local_a4[param_2][iVar6 * 3 + 2] == (undefined *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_00cb2310(*puVar10,uVar5);
    }
    if (((!bVar13) &&
        (ppuVar3 = local_a4[param_2], FUN_00cb2ce0(puVar10[8],ppuVar3[iVar6 * 3 + 1]),
        ppuVar3[iVar6 * 3 + 2] != (undefined *)0x0)) && ((local_74[param_2] != 0 && (bVar12)))) {
      FUN_00ca84a0(*(undefined4 *)(local_74[param_2 + 4] + local_c8 * 4),&local_b4,0x10);
      _sprintf_s(local_94,0x10,"/%s",&local_b4);
      FUN_00cce090(*puVar10,local_94);
      uVar5 = *puVar10;
      local_d0 = 0.0;
      local_54[0x11] = 0.0;
      local_54[0x12] = 0.0;
      local_54[0] = 0.0;
      local_54[1] = 0.0;
      local_54[2] = 0.0;
      local_54[3] = 0.0;
      local_54[4] = 0.0;
      local_54[5] = 0.0;
      local_54[6] = 0.0;
      local_54[7] = 0.0;
      local_54[8] = 0.0;
      local_54[9] = 0.0;
      local_54[10] = 0.0;
      local_54[0xb] = 0.0;
      local_54[0xc] = 0.0;
      local_54[0xd] = 0.0;
      local_54[0xe] = 0.0;
      local_54[0xf] = 0.0;
      local_54[0x10] = 0.0;
      local_54[0x13] = -NAN;
      iVar6 = FUN_00cf9960(uVar5,local_54);
      if (iVar6 != 0) {
        local_d0 = local_54[0];
      }
      iVar6 = FUN_00cb2790(uVar5);
      fVar1 = *(float *)(iVar6 + 0x10);
      FUN_00ca84a0(*(undefined4 *)(local_74[param_2] + local_c8 * 4),&local_b4,0x10);
      FUN_00cce090(puVar10[0x10],&local_b4);
      FUN_00cb28a0(puVar10[0x10],-(fVar1 * local_d0));
    }
    puVar10 = puVar10 + 1;
    local_c8 = (iVar2 <= (int)(local_c8 + 1)) - 1 & local_c8 + 1;
    local_bc = local_bc + 1;
  } while (local_bc < 8);
  if (param_2 == 0) {
    FUN_00993840();
  }
  return;
}

// 009A4D70  FUN_009a4d70  size=236  [callgraph]
void __fastcall FUN_009a4d70(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (((DAT_01b39204 == 0) && (iVar1 = FUN_00ce4dd0(5), iVar1 != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x368 + DAT_01b39204 * 4),
     0 < *(int *)(param_1 + 0x42c + iVar1 * 4))) {
    iVar1 = *(int *)(param_1 + 0x3b8 + iVar1 * 4);
    if (iVar1 == 0) {
      uVar3 = 0xd92bb0f;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      uVar3 = 0x23a6f56d;
    }
    piVar2 = (int *)FUN_0094e5e0(uVar3);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x30))();
      piVar2 = (int *)FUN_00c209f0();
      (**(code **)(*piVar2 + 0x14))(0xf);
      FUN_00ce4d70(5);
      FUN_00ce4d70(2);
      piVar2 = (int *)(param_1 + 0x42c + *(int *)(param_1 + 0x368 + DAT_01b39204 * 4) * 4);
      *piVar2 = *piVar2 + -1;
      FUN_009a48f0(0);
      iVar1 = FUN_00993920(*(undefined4 *)(param_1 + 0x368));
      if (iVar1 == 0) {
        FUN_00ce4d70(9);
        *(undefined4 *)(param_1 + 0x4a8) = 0;
      }
    }
  }
  return;
}

// 009A4E60  FUN_009a4e60  size=48  [callgraph]
void FUN_009a4e60(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    FUN_00993a50();
    return;
  case 1:
    FUN_00993a80();
    return;
  case 2:
    FUN_00993b20();
    return;
  case 3:
    FUN_00993ac0();
  }
  return;
}

// 009B3AD0  cWeaponSelectMenu::vf08  size=2253  [class]
void __fastcall cWeaponSelectMenu::vf08(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int local_4;
  
  uVar4 = FUN_00cb25d0(1);
  param_1[10] = uVar4;
  uVar4 = FUN_00cb25d0(2);
  param_1[0xb] = uVar4;
  uVar4 = FUN_00cb25d0(3);
  param_1[0xc] = uVar4;
  uVar4 = FUN_00cb25d0(4);
  param_1[0xd] = uVar4;
  uVar4 = FUN_00cb25d0(5);
  param_1[0xe] = uVar4;
  uVar4 = FUN_00cb25d0(6);
  param_1[0xf] = uVar4;
  uVar4 = FUN_00cb25d0(0x14);
  param_1[0x10] = uVar4;
  puVar7 = param_1 + 0x11;
  uVar4 = FUN_00cb25d0(0x15);
  *puVar7 = uVar4;
  uVar4 = FUN_00cb25d0(0x16);
  param_1[0x12] = uVar4;
  uVar4 = FUN_00cb25d0(0x17);
  param_1[0x13] = uVar4;
  uVar4 = FUN_00cb25d0(0x1e);
  param_1[0x14] = uVar4;
  uVar4 = FUN_00cb25d0(0x1f);
  param_1[0x15] = uVar4;
  uVar4 = FUN_00cb25d0(0x46);
  param_1[0x16] = uVar4;
  uVar4 = FUN_00cb25d0(0x47);
  param_1[0x17] = uVar4;
  uVar4 = FUN_00cb25d0(0x48);
  param_1[0x18] = uVar4;
  uVar4 = FUN_00cb25d0(0x49);
  param_1[0x19] = uVar4;
  uVar4 = FUN_00cb25d0(0x4a);
  param_1[0x1a] = uVar4;
  uVar4 = FUN_00cb25d0(0x4b);
  param_1[0x1b] = uVar4;
  uVar4 = FUN_00cb25d0(0x4c);
  param_1[0x1c] = uVar4;
  uVar4 = FUN_00cb25d0(0x4d);
  param_1[0x1d] = uVar4;
  uVar4 = FUN_00cb25d0(0x4e);
  param_1[0x1e] = uVar4;
  uVar4 = FUN_00cb25d0(0x4f);
  param_1[0x1f] = uVar4;
  uVar4 = FUN_00cb25d0(0x50);
  param_1[0x20] = uVar4;
  uVar4 = FUN_00cb25d0(0x51);
  param_1[0x21] = uVar4;
  uVar4 = FUN_00cb25d0(0x52);
  param_1[0x22] = uVar4;
  uVar4 = FUN_00cb25d0(0x5a);
  param_1[0x23] = uVar4;
  iVar9 = 3;
  do {
    uVar4 = FUN_00cb3300(*puVar7);
    FUN_00cb2240(uVar4);
    puVar7 = puVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_00ce4d70(0);
  puVar7 = param_1 + 10;
  local_4 = 4;
  puVar1 = param_1;
  do {
    uVar4 = FUN_00cb3300(*puVar7);
    FUN_00cb2240(uVar4);
    uVar4 = FUN_00cb25d0(1);
    puVar1[0x24] = uVar4;
    uVar4 = FUN_00cb25d0(3);
    puVar1[0x25] = uVar4;
    uVar4 = FUN_00cb25d0(0xb);
    puVar1[0x26] = uVar4;
    uVar4 = FUN_00cb25d0(0x23);
    puVar1[0x27] = uVar4;
    uVar4 = FUN_00cb25d0(0x23);
    puVar1[0x28] = uVar4;
    uVar4 = FUN_00cb25d0(0x23);
    puVar1[0x29] = uVar4;
    uVar4 = FUN_00cb25d0(0x23);
    puVar1[0x2a] = uVar4;
    uVar4 = FUN_00cb25d0(0x23);
    puVar1[0x2b] = uVar4;
    uVar4 = FUN_00cb25d0(0x1e);
    puVar1[0x2c] = uVar4;
    uVar4 = FUN_00cb25d0(0x24);
    puVar1[0x2d] = uVar4;
    uVar4 = FUN_00cb25d0(0x24);
    puVar1[0x2e] = uVar4;
    uVar4 = FUN_00cb25d0(0x3d);
    puVar1[0x2f] = uVar4;
    uVar4 = FUN_00cb25d0(0x3e);
    puVar1[0x30] = uVar4;
    uVar4 = FUN_00cb25d0(0x3f);
    puVar1[0x31] = uVar4;
    uVar4 = FUN_00cb25d0(0x40);
    puVar1[0x32] = uVar4;
    uVar4 = FUN_00cb25d0(0x41);
    puVar1[0x33] = uVar4;
    uVar4 = FUN_00cb25d0(0x3c);
    puVar1[0x34] = uVar4;
    uVar4 = FUN_00cb25d0(0x42);
    puVar1[0x35] = uVar4;
    uVar4 = FUN_00cb25d0(0x43);
    puVar1[0x36] = uVar4;
    uVar4 = FUN_00cb25d0(0x4b);
    puVar1[0x37] = uVar4;
    uVar4 = FUN_00cb25d0(0x4b);
    puVar1[0x38] = uVar4;
    uVar4 = FUN_00cb25d0(0x4b);
    puVar1[0x39] = uVar4;
    uVar4 = FUN_00cb25d0(0x4b);
    puVar1[0x3a] = uVar4;
    uVar4 = FUN_00cb25d0(0x4b);
    puVar1[0x3b] = uVar4;
    uVar4 = FUN_00cb25d0(0x46);
    puVar1[0x3c] = uVar4;
    uVar4 = FUN_00cb25d0(0x4c);
    puVar1[0x3d] = uVar4;
    uVar4 = FUN_00cb25d0(0x4c);
    puVar1[0x3e] = uVar4;
    uVar4 = FUN_00cb25d0(0x51);
    puVar1[0x3f] = uVar4;
    uVar4 = FUN_00cb25d0(0x52);
    puVar1[0x40] = uVar4;
    uVar4 = FUN_00cb25d0(0x53);
    puVar1[0x41] = uVar4;
    uVar4 = FUN_00cb25d0(0x54);
    puVar1[0x42] = uVar4;
    uVar4 = FUN_00cb25d0(0x55);
    puVar1[0x43] = uVar4;
    uVar4 = FUN_00cb25d0(0x50);
    puVar1[0x44] = uVar4;
    uVar4 = FUN_00cb25d0(0x56);
    puVar1[0x45] = uVar4;
    uVar4 = FUN_00cb25d0(0x57);
    puVar1[0x46] = uVar4;
    uVar4 = FUN_00cb25d0(0x62);
    puVar1[0x48] = uVar4;
    puVar7 = puVar7 + 1;
    local_4 = local_4 + -1;
    puVar1 = puVar1 + 0x25;
  } while (local_4 != 0);
  FUN_00cb2310(param_1[0x26],0);
  FUN_00cb2310(param_1[0x4b],0);
  FUN_00cb2310(param_1[0x6e],0);
  FUN_00cb2310(param_1[0x93],0);
  FUN_00cf9770(param_1[0x25],"HUD_WEP_MENU_02",0,0xffffffff);
  FUN_00cf9770(param_1[0x4a],"HUD_WEP_MENU_01",0,0xffffffff);
  FUN_00cf9770(param_1[0x6f],"HUD_WEP_MENU_04",0,0xffffffff);
  FUN_00cf9770(param_1[0x94],"HUD_WEP_MENU_03",0,0xffffffff);
  FUN_009930a0();
  puVar7 = param_1 + 10;
  iVar9 = 4;
  do {
    FUN_00cb2310(*puVar7,puVar7[0xdc] == 0);
    puVar7 = puVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  iVar9 = DAT_01b39204;
  if (param_1[DAT_01b39204 + 0xe6] != 0) {
    iVar6 = DAT_01b39204;
    if (DAT_01b39204 < 4) {
      piVar8 = param_1 + DAT_01b39204 + 0xe6;
      do {
        if (*piVar8 == 0) {
          iVar6 = iVar9;
          if (iVar9 != DAT_01b39204) goto LAB_009b3f89;
          break;
        }
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar9 < 4);
    }
    iVar5 = 0;
    iVar9 = iVar6;
    if (0 < DAT_01b39204) {
      piVar8 = param_1 + 0xe6;
      do {
        iVar9 = iVar5;
        if (*piVar8 == 0) break;
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 1;
        iVar9 = iVar6;
      } while (iVar5 < DAT_01b39204);
    }
  }
LAB_009b3f89:
  DAT_01b39204 = iVar9;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  piVar8 = param_1 + 0xd6;
  *piVar8 = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  FUN_009928a0();
  param_1[0xde] = param_1[0xda];
  param_1[0xdf] = param_1[0xdb];
  param_1[0xe0] = param_1[0xdc];
  param_1[0xe1] = param_1[0xdd];
  uVar10 = 0;
  do {
    FUN_009a48f0(uVar10);
    if (uVar10 < 4) {
      iVar9 = piVar8[0x14];
      if (iVar9 < 5) {
        if (iVar9 == 4) {
          *piVar8 = 6;
        }
        else if (iVar9 == 3) {
          *piVar8 = 9;
        }
        else {
          *piVar8 = (-(uint)(iVar9 != 2) & 3) + 0xc;
        }
      }
      else {
        *piVar8 = 0;
      }
    }
    FUN_00ce4d70(*piVar8);
    uVar10 = uVar10 + 1;
    piVar8 = piVar8 + 1;
  } while ((int)uVar10 < 4);
  FUN_00ccdf90(param_1[0x24],0,3);
  FUN_00ccdf90(param_1[0x49],0,3);
  FUN_00ccdf90(param_1[0x70],0,3);
  FUN_00ccdf90(param_1[0x95],0,3);
  FUN_00ce4d70(3);
  FUN_00ce4d70(0x12);
  FUN_00ce4d70(DAT_01b39204 + 0xc);
  param_1[0x158] = 1;
  if (DAT_01b39204 == 0) {
    iVar9 = param_1[0xda];
    if (0 < (int)param_1[iVar9 + 0x10b]) {
      iVar6 = 0;
      iVar5 = 0;
      if (DAT_01dc14c8 != 0) {
        iVar6 = FUN_00b7cb20(0);
        iVar5 = FUN_00bc3230(0);
      }
      if ((param_1[iVar9 + 0xee] == 1) && (iVar6 == 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((param_1[iVar9 + 0xee] == 0) && (iVar5 == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar3 || bVar2) goto LAB_009b4184;
    }
  }
  else {
    FUN_00ce4d70(5);
  }
  FUN_00ce4dc0(9,1);
  param_1[0x12a] = 0;
  param_1[0x158] = 0;
LAB_009b4184:
  FUN_00ce4d70(0x12);
  iVar9 = FUN_00d29960(4);
  param_1[300] = iVar9;
  *(undefined4 *)(iVar9 + 0x210) = 0x16;
  *(undefined4 *)(param_1[300] + 0x214) = 9;
  *(uint *)(param_1[300] + 0x28) = *(uint *)(param_1[300] + 0x28) | 0x40000000;
  *(uint *)(param_1[300] + 0x28) = *(uint *)(param_1[300] + 0x28) | 0x8000000;
  *(uint *)(param_1[300] + 0x28) = *(uint *)(param_1[300] + 0x28) | 0x4000000;
  *(uint *)(param_1[300] + 0x28) = *(uint *)(param_1[300] + 0x28) | 0x10000;
  FUN_00cb57c0(0);
  piVar8 = param_1 + 0x12d;
  iVar9 = 2;
  do {
    iVar6 = FUN_00d29960(5);
    *piVar8 = iVar6;
    *(undefined4 *)(iVar6 + 0x1e4) = 0x16;
    *(undefined4 *)(*piVar8 + 0x1e8) = 9;
    *(uint *)(*piVar8 + 0x28) = *(uint *)(*piVar8 + 0x28) | 0x40000000;
    *(uint *)(*piVar8 + 0x28) = *(uint *)(*piVar8 + 0x28) | 0x8000000;
    *(uint *)(*piVar8 + 0x28) = *(uint *)(*piVar8 + 0x28) | 0x4000000;
    *(uint *)(*piVar8 + 0x28) = *(uint *)(*piVar8 + 0x28) | 0x10000;
    FUN_00cb5830(0);
    piVar8 = piVar8 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_00993bb0(param_1[DAT_01b39204 + 0xda]);
  FUN_00e5e050("core_se_sys_menu_in",0);
  FUN_00e5e1b0("bgm_WeaponSelect_enter");
  puVar7 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7be50);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar7 = cWeaponSelectItemMessageParts::vftable;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[3] = "cWeaponSelectItemMessageParts";
    FUN_00d29ca0(0x6b,10);
    puVar7[4] = 0;
  }
  param_1[0x127] = puVar7;
  puVar7 = (undefined4 *)FUN_00dd3500(0x120,&DAT_01b7be50);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    puVar7[0x1a] = 0;
    *puVar7 = cMenuKeyInfo::vftable;
    puVar7[0x1d] = 0x3f800000;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[0x17] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x20] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x43] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x44] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x45] = 0;
    puVar7[0x21] = 0;
    puVar7[0x22] = 1;
    puVar7[0x46] = 0;
    puVar7[0x47] = 0;
    _memset(puVar7 + 3,0,0x50);
    uVar4 = FUN_00de4500("ui_menu_keyinfo.mkd");
    puVar7[1] = uVar4;
  }
  param_1[0x151] = puVar7;
  FUN_00993e80();
  param_1[0x15a] = (uint)DAT_01dc1418;
  FUN_00cb2630(1);
  return;
}

// 009B43A0  FUN_009b43a0  size=690  [callgraph]
uint __fastcall FUN_009b43a0(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x3b8 + *(int *)(param_1 + 0x368) * 4);
  uVar1 = 1;
  if (iVar6 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = uVar1;
    if (iVar6 != 1) {
      uVar5 = 0;
    }
  }
  piVar2 = (int *)FUN_00c13920();
  uVar3 = (**(code **)(*piVar2 + 0x78))();
  uVar5 = (uint)(uVar5 != uVar3);
  switch(*(undefined4 *)(param_1 + 0x3c4 + *(int *)(param_1 + 0x36c) * 4)) {
  case 0:
    uVar3 = 5;
    break;
  case 1:
    uVar3 = 6;
    break;
  case 2:
    uVar3 = uVar1;
    break;
  case 3:
    uVar3 = 2;
    break;
  case 4:
    uVar3 = 3;
    break;
  case 5:
    uVar3 = 4;
    break;
  case 6:
    uVar3 = 7;
    break;
  case 7:
    uVar3 = 8;
    break;
  case 8:
    uVar3 = 9;
    break;
  case 9:
    uVar3 = 10;
    break;
  default:
    uVar3 = 0;
  }
  if ((((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) && (DAT_01bea030 != 7)) &&
     (uVar3 != (DAT_01be9fe8 & 0x7fffffff))) {
    uVar5 = uVar1;
  }
  switch(*(undefined4 *)(param_1 + 0x400 + *(int *)(param_1 + 0x370) * 4)) {
  default:
    uVar3 = 0;
    break;
  case 1:
    uVar3 = 3;
    break;
  case 2:
    uVar3 = uVar1;
    break;
  case 3:
    uVar3 = 2;
    break;
  case 4:
    uVar3 = 4;
    break;
  case 5:
    uVar3 = 5;
    break;
  case 6:
    uVar3 = 6;
    break;
  case 7:
    uVar3 = 7;
    break;
  case 8:
    uVar3 = 8;
    break;
  case 9:
    uVar3 = 10;
    break;
  case 10:
    uVar3 = 0xb;
  }
  if (((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) &&
     ((DAT_01bea030 != 7 && (uVar3 != DAT_01be9ffc)))) {
    uVar5 = uVar1;
  }
  iVar6 = *(int *)(param_1 + 0x3f0 + *(int *)(param_1 + 0x374) * 4);
  if (iVar6 == 0) {
    iVar6 = 2;
  }
  else if (iVar6 == 1) {
    iVar6 = 3;
  }
  else if (iVar6 == 2) {
    iVar6 = 4;
  }
  else {
    iVar6 = 0;
  }
  if (((DAT_01bea030 != 4) && (DAT_01bea030 != 5)) &&
     ((DAT_01bea030 != 7 &&
      (((iVar4 = FUN_00d46780(), iVar4 == 0 && (iVar4 = FUN_00d467a0(), iVar4 == 0)) &&
       (iVar6 != DAT_01be9fd4)))))) {
    uVar5 = uVar1;
  }
  if (*(int *)(param_1 + 0x38c) == 0) goto LAB_009b461c;
  FUN_00ce4d70(0x11);
  if ((DAT_01b39204 < 0) || (3 < DAT_01b39204)) goto LAB_009b45b1;
  switch(DAT_01b39204) {
  case 0:
    FUN_00993a50();
    break;
  case 1:
    FUN_00993a80();
    break;
  case 2:
    FUN_00993b20();
    break;
  case 3:
    FUN_00993ac0();
    break;
  default:
    goto switchD_009b4583_default;
  }
LAB_009b45b1:
  switch(DAT_01b39204) {
  case 0:
    DAT_01dc08b4 = 1;
    break;
  case 1:
    DAT_01dc134c = 1;
    break;
  case 2:
    iVar6 = FUN_00d46780();
    if ((iVar6 == 0) && (iVar6 = FUN_00d467a0(), iVar6 == 0)) {
      DAT_01dc13f0 = 1;
    }
    break;
  case 3:
    iVar6 = FUN_00d46780();
    if ((iVar6 == 0) && (iVar6 = FUN_00d467a0(), iVar6 == 0)) {
      DAT_01dc074c = 1;
    }
  }
switchD_009b4583_default:
  FUN_00ce4d70(0x16);
LAB_009b461c:
  if (*(int *)(param_1 + 0x390) != 0) {
    *(undefined4 *)(param_1 + 0x390) = 0;
    FUN_00ce4d70(0x15);
  }
  return uVar5;
}

// 009BC940  cWeaponSelectMenu::vf14  size=3563  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cWeaponSelectMenu::vf14(int param_1)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  int local_20 [7];
  
  iVar1 = *(int *)(param_1 + 0x560);
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    if ((*(int *)(param_1 + 0x49c) != 0) && (iVar8 = FUN_00cb2660(), iVar8 == 0)) break;
    if (*(int *)(param_1 + 0x544) != 0) {
      puVar5 = (undefined4 *)FUN_00ccde20(*(undefined4 *)(param_1 + 0x8c));
      uVar11 = puVar5[1];
      *(undefined4 *)(param_1 + 0x550) = *puVar5;
      *(undefined4 *)(param_1 + 0x554) = uVar11;
      *(undefined4 *)(param_1 + 0x558) = 0;
      *(int *)(param_1 + 0x55c) = local_20[3];
      if (*(int *)(param_1 + 0x560) == 0) {
        pcVar10 = "sub_weapon";
      }
      else {
        pcVar10 = "sub_weapon_use";
      }
      FUN_009ab030(pcVar10,(undefined4 *)(param_1 + 0x550),0x41700000,0);
    }
    FUN_00cb2630(0);
    FUN_009a4740(*(undefined4 *)(param_1 + 0x368 + DAT_01b39204 * 4));
    FUN_00cb2600(1);
    *(undefined4 *)(param_1 + 0x20) = 1;
  case 1:
    iVar8 = FUN_00ca8620(param_1 + 0x24,0x14);
    if (iVar8 != 0) {
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    break;
  case 2:
    bVar2 = false;
    iVar8 = 0;
    cVar4 = FUN_00cac570(0x40008,0);
    if (cVar4 == '\0') {
      cVar4 = FUN_00cac570(0x80004,0);
      if (cVar4 != '\0') {
        iVar8 = 2;
        goto LAB_009bcaa4;
      }
      cVar4 = FUN_00cac570(0x10001,0);
      if (cVar4 != '\0') {
        iVar8 = 3;
        goto LAB_009bcaa4;
      }
      cVar4 = FUN_00cac570(0x20002,0);
      if (cVar4 != '\0') {
        iVar8 = 4;
        goto LAB_009bcaa4;
      }
LAB_009bcaca:
      *(int *)(param_1 + 0x4a0) = iVar8;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x4a4) = 0;
    }
    else {
      iVar8 = 1;
LAB_009bcaa4:
      if (*(int *)(param_1 + 0x4a0) != iVar8) goto LAB_009bcaca;
      iVar8 = FUN_00ca8620(param_1 + 0x24,0x14);
      if (iVar8 != 0) {
        *(undefined4 *)(param_1 + 0x4a4) = 1;
      }
    }
    iVar8 = 0;
    do {
      cVar4 = FUN_00d0d3e0(0x12,iVar8);
      iVar7 = iVar8;
      if (cVar4 != '\0') break;
      iVar8 = iVar8 + 1;
      iVar7 = -1;
    } while (iVar8 < 4);
    if (*(int *)(param_1 + 0x354) != -1) {
      iVar8 = FUN_00ce4dd0(*(int *)(param_1 + 0x354));
      if (iVar8 != 0) {
        local_20[1] = param_1 + 0x3c4;
        local_20[2] = param_1 + 0x400;
        *(undefined4 *)(param_1 + 0x368 + DAT_01b39204 * 4) = *(undefined4 *)(param_1 + 0x388);
        local_20[0] = param_1 + 0x3b8;
        local_20[3] = param_1 + 0x3f0;
        *(uint *)(param_1 + 0x38c) =
             (uint)(*(int *)(param_1 + 0x368 + DAT_01b39204 * 4) !=
                   *(int *)(param_1 + 0x378 + DAT_01b39204 * 4));
        FUN_009a48f0(DAT_01b39204);
        if (*(int *)(local_20[DAT_01b39204] + *(int *)(param_1 + 0x368 + DAT_01b39204 * 4) * 4) !=
            -1) {
          if (DAT_01b39204 < 2) {
            uVar11 = *(undefined4 *)(DAT_01b39204 * 0x94 + 0x90 + param_1);
          }
          else {
            uVar11 = *(undefined4 *)(DAT_01b39204 * 0x94 + 0x98 + param_1);
          }
          FUN_00cb2310(uVar11,1);
          FUN_00ccdf90(uVar11,0,3);
        }
        FUN_00ce4d70(*(undefined4 *)(param_1 + 0x358 + DAT_01b39204 * 4));
        *(undefined4 *)(param_1 + 0x354) = 0xffffffff;
      }
      bVar2 = true;
    }
    if (*(int *)(param_1 + 0x354) == -1) {
      if ((*(int *)(param_1 + 0x394) == 0) && (iVar8 = FUN_00ce4dd0(0x12), iVar8 != 0)) {
        cVar4 = FUN_00cac640(0x80004,0);
        if ((cVar4 == '\0') &&
           (((*(int *)(param_1 + 0x4a0) != 2 || (*(int *)(param_1 + 0x4a4) == 0)) &&
            (cVar4 = FUN_00cac9c0(1), cVar4 == '\0')))) {
          cVar4 = FUN_00cac640(0x40008,0);
          if (((cVar4 == '\0') &&
              ((*(int *)(param_1 + 0x4a0) != 1 || (*(int *)(param_1 + 0x4a4) == 0)))) &&
             (cVar4 = FUN_00cac9c0(0), cVar4 == '\0')) goto LAB_009bd0d5;
          if (*(int *)(param_1 + 0x3a8 + DAT_01b39204 * 4) < 2) {
            cVar4 = FUN_00cac640(0x40008,0);
            if (cVar4 == '\0') goto LAB_009bd0c8;
          }
          else {
            bVar2 = false;
            FUN_00ce4d70(*(int *)(param_1 + 0x358 + DAT_01b39204 * 4) + 2);
            *(int *)(param_1 + 0x354) = *(int *)(param_1 + 0x358 + DAT_01b39204 * 4) + 2;
            FUN_00cb2310(*(undefined4 *)
                          (param_1 + 0x90 + (((DAT_01b39204 < 2) - 1 & 2) + DAT_01b39204 * 0x25) * 4
                          ),0);
            iVar8 = *(int *)(param_1 + 0x368 + DAT_01b39204 * 4) + -1;
            *(int *)(param_1 + 0x388) = iVar8;
            if (iVar8 < 0) {
              *(int *)(param_1 + 0x388) = *(int *)(param_1 + 0x3a8 + DAT_01b39204 * 4) + -1;
            }
            if (*(int *)(param_1 + 0x390) == 0) {
              *(undefined4 *)(param_1 + 0x390) = 1;
              FUN_00ce4d70(0x14);
              uVar11 = 0x15;
LAB_009bcff7:
              FUN_00ce4d70(uVar11);
              bVar2 = true;
            }
            else if (*(int *)(param_1 + 0x388) == *(int *)(param_1 + 0x378 + DAT_01b39204 * 4)) {
              *(undefined4 *)(param_1 + 0x390) = 0;
              FUN_00ce4d70(0x15);
              uVar11 = 0x16;
              goto LAB_009bcff7;
            }
            if (DAT_01b39204 == 0) {
              iVar8 = FUN_00993920(*(undefined4 *)(param_1 + 0x388));
              if (*(int *)(param_1 + 0x4a8) == 0) {
                if (iVar8 == 0) goto LAB_009bd06c;
                *(undefined4 *)(param_1 + 0x4a8) = 1;
                *(undefined4 *)(param_1 + 0x560) = 1;
LAB_009bd075:
                if (*(int *)(param_1 + 0x390) == 0) {
                  uVar11 = 10;
                }
                else {
                  uVar11 = 0x14;
                }
                FUN_00ce4d70(uVar11);
              }
              else {
                if (iVar8 == 0) {
                  *(undefined4 *)(param_1 + 0x4a8) = 0;
                  *(undefined4 *)(param_1 + 0x560) = 0;
                  if (bVar2) {
                    if (*(int *)(param_1 + 0x390) == 0) {
                      uVar11 = 0x13;
                    }
                    else {
LAB_009bd065:
                      uVar11 = 9;
                    }
                  }
                  else {
                    if (*(int *)(param_1 + 0x390) == 0) goto LAB_009bd065;
                    uVar11 = 0x13;
                  }
                  FUN_00ce4d70(uVar11);
                }
LAB_009bd06c:
                if (*(int *)(param_1 + 0x4a8) != 0) goto LAB_009bd075;
              }
              FUN_00ce4d70(0x10);
            }
            FUN_009a4740(*(undefined4 *)(param_1 + 0x388));
          }
          FUN_00e5e050("core_se_sys_weapon_cursor_updown",0);
LAB_009bd0c8:
          bVar2 = true;
        }
        else {
          if (*(int *)(param_1 + 0x3a8 + DAT_01b39204 * 4) < 2) {
            cVar4 = FUN_00cac640(0x80004,0);
            if (cVar4 == '\0') goto LAB_009bd0c8;
          }
          else {
            bVar2 = false;
            FUN_00ce4d70(*(int *)(param_1 + 0x358 + DAT_01b39204 * 4) + 1);
            *(int *)(param_1 + 0x354) = *(int *)(param_1 + 0x358 + DAT_01b39204 * 4) + 1;
            FUN_00cb2310(*(undefined4 *)
                          (param_1 + 0x90 + (((DAT_01b39204 < 2) - 1 & 2) + DAT_01b39204 * 0x25) * 4
                          ),0);
            iVar8 = *(int *)(param_1 + 0x368 + DAT_01b39204 * 4) + 1;
            *(int *)(param_1 + 0x388) = iVar8;
            if (*(int *)(param_1 + 0x3a8 + DAT_01b39204 * 4) <= iVar8) {
              *(undefined4 *)(param_1 + 0x388) = 0;
            }
            if (*(int *)(param_1 + 0x390) == 0) {
              *(undefined4 *)(param_1 + 0x390) = 1;
              FUN_00ce4d70(0x14);
              uVar11 = 0x15;
LAB_009bcdc6:
              FUN_00ce4d70(uVar11);
              bVar2 = true;
            }
            else if (*(int *)(param_1 + 0x388) == *(int *)(param_1 + 0x378 + DAT_01b39204 * 4)) {
              *(undefined4 *)(param_1 + 0x390) = 0;
              FUN_00ce4d70(0x15);
              uVar11 = 0x16;
              goto LAB_009bcdc6;
            }
            if (DAT_01b39204 == 0) {
              iVar8 = FUN_00993920(*(undefined4 *)(param_1 + 0x388));
              if (*(int *)(param_1 + 0x4a8) == 0) {
                if (iVar8 == 0) goto LAB_009bce3b;
                *(undefined4 *)(param_1 + 0x4a8) = 1;
                *(undefined4 *)(param_1 + 0x560) = 1;
LAB_009bce44:
                if (*(int *)(param_1 + 0x390) == 0) {
                  uVar11 = 10;
                }
                else {
                  uVar11 = 0x14;
                }
                FUN_00ce4d70(uVar11);
              }
              else {
                if (iVar8 == 0) {
                  *(undefined4 *)(param_1 + 0x4a8) = 0;
                  *(undefined4 *)(param_1 + 0x560) = 0;
                  if (bVar2) {
                    if (*(int *)(param_1 + 0x390) == 0) {
                      uVar11 = 0x13;
                    }
                    else {
LAB_009bce34:
                      uVar11 = 9;
                    }
                  }
                  else {
                    if (*(int *)(param_1 + 0x390) == 0) goto LAB_009bce34;
                    uVar11 = 0x13;
                  }
                  FUN_00ce4d70(uVar11);
                }
LAB_009bce3b:
                if (*(int *)(param_1 + 0x4a8) != 0) goto LAB_009bce44;
              }
              FUN_00ce4d70(0x11);
            }
            FUN_009a4740(*(undefined4 *)(param_1 + 0x388));
          }
          FUN_00e5e050("core_se_sys_weapon_cursor_updown",0);
          bVar2 = true;
        }
      }
      else {
LAB_009bd0d5:
        iVar6 = FUN_00ce4dd0(*(undefined4 *)(param_1 + 0x350));
        iVar8 = DAT_01b39204;
        if (iVar6 != 0) {
          if (*(int *)(param_1 + 0x394) != 0) {
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),0);
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c),DAT_01b39204 + 0xc);
            *(undefined4 *)(param_1 + 0x394) = 0;
            if (*(int *)(param_1 + 0x4ac) == 0) {
              if (DAT_01b39204 != 0) goto LAB_009bd18f;
              iVar6 = FUN_00993920(*(undefined4 *)(param_1 + 0x368));
              if (iVar6 != 0) {
                FUN_00ce4d70(10);
              }
              *(int *)(param_1 + 0x4a8) = iVar6;
            }
            if ((DAT_01b39204 == 0) && (FUN_00ce4d70(4), *(int *)(param_1 + 0x4a8) != 0)) {
              *(undefined4 *)(param_1 + 0x560) = 1;
            }
          }
LAB_009bd18f:
          if (iVar7 == -1) {
            cVar4 = FUN_00cac640(0x10001,0);
            if ((cVar4 == '\0') && (iVar7 = FUN_00992390(3), iVar7 == 0)) {
              cVar4 = FUN_00cac640(0x20002,0);
              if ((cVar4 != '\0') || (iVar7 = FUN_00992390(4), iVar7 != 0)) {
                iVar7 = DAT_01b39204 + 1;
                if (3 < iVar7) {
                  iVar7 = 0;
                }
                piVar9 = (int *)(param_1 + 0x398 + iVar7 * 4);
                DAT_01b39204 = iVar7;
                if (*(int *)(param_1 + 0x398 + iVar7 * 4) != 0) {
                  for (; DAT_01b39204 < 4; DAT_01b39204 = DAT_01b39204 + 1) {
                    if (*piVar9 == 0) goto LAB_009bd370;
                    piVar9 = piVar9 + 1;
                  }
                  iVar6 = 0;
                  DAT_01b39204 = iVar7;
                  if (0 < iVar7) {
                    piVar9 = (int *)(param_1 + 0x398);
                    do {
                      DAT_01b39204 = iVar6;
                      if (*piVar9 == 0) break;
                      iVar6 = iVar6 + 1;
                      piVar9 = piVar9 + 1;
                      DAT_01b39204 = iVar7;
                    } while (iVar6 < iVar7);
                  }
                }
LAB_009bd370:
                if (iVar8 == DAT_01b39204) {
                  uVar11 = 0x20002;
                  goto LAB_009bd531;
                }
                FUN_009a4740(*(undefined4 *)(param_1 + 0x368 + DAT_01b39204 * 4));
                if (*(int *)(param_1 + 0x38c) != 0) {
                  FUN_00ce4d70(0x11);
                  FUN_009a4e60(iVar8);
                  FUN_00ce4d70(0x16);
                  *(undefined4 *)(param_1 + 0x378 + iVar8 * 4) =
                       *(undefined4 *)(param_1 + 0x368 + iVar8 * 4);
                }
                if (*(int *)(param_1 + 0x390) != 0) {
                  *(undefined4 *)(param_1 + 0x390) = 0;
                  FUN_00ce4d70(0x15);
                }
                FUN_009937d0();
                FUN_00e5e050("core_se_sys_weapon_cursor_rightleft",0);
                FUN_00992f80(DAT_01b39204,iVar8);
                *(undefined4 *)(param_1 + 0x38c) = 0;
              }
            }
            else {
              iVar7 = DAT_01b39204 + -1;
              if (iVar7 < 0) {
                iVar7 = 3;
              }
              piVar9 = (int *)(param_1 + 0x398 + iVar7 * 4);
              DAT_01b39204 = iVar7;
              if (*(int *)(param_1 + 0x398 + iVar7 * 4) != 0) {
                for (; -1 < DAT_01b39204; DAT_01b39204 = DAT_01b39204 + -1) {
                  if (*piVar9 == 0) goto LAB_009bd480;
                  piVar9 = piVar9 + -1;
                }
                iVar6 = 3;
                DAT_01b39204 = iVar7;
                if (iVar7 < 3) {
                  piVar9 = (int *)(param_1 + 0x3a4);
                  do {
                    DAT_01b39204 = iVar6;
                    if (*piVar9 == 0) break;
                    iVar6 = iVar6 + -1;
                    piVar9 = piVar9 + -1;
                    DAT_01b39204 = iVar7;
                  } while (iVar7 < iVar6);
                }
              }
LAB_009bd480:
              if (iVar8 == DAT_01b39204) {
                uVar11 = 0x10001;
LAB_009bd531:
                cVar4 = FUN_00cac640(uVar11,0);
                if (cVar4 != '\0') {
                  FUN_009937d0();
                  FUN_00e5e050("core_se_sys_weapon_cursor_rightleft",0);
                }
                *(undefined4 *)(param_1 + 0x4a4) = 0;
              }
              else {
                FUN_009a4740(*(undefined4 *)(param_1 + 0x368 + DAT_01b39204 * 4));
                if (*(int *)(param_1 + 0x38c) != 0) {
                  FUN_00ce4d70(0x11);
                  FUN_009a4e60(iVar8);
                  FUN_00ce4d70(0x16);
                  *(undefined4 *)(param_1 + 0x378 + iVar8 * 4) =
                       *(undefined4 *)(param_1 + 0x368 + iVar8 * 4);
                }
                if (*(int *)(param_1 + 0x390) != 0) {
                  *(undefined4 *)(param_1 + 0x390) = 0;
                  FUN_00ce4d70(0x15);
                }
                FUN_009937d0();
                FUN_00e5e050("core_se_sys_weapon_cursor_rightleft",0);
                FUN_00992f80(DAT_01b39204,iVar8);
                *(undefined4 *)(param_1 + 0x38c) = 0;
              }
            }
          }
          else {
            piVar9 = (int *)(param_1 + 0x398 + iVar7 * 4);
            DAT_01b39204 = iVar7;
            if (*(int *)(param_1 + 0x398 + iVar7 * 4) != 0) {
              for (; -1 < DAT_01b39204; DAT_01b39204 = DAT_01b39204 + -1) {
                if (*piVar9 == 0) goto LAB_009bd1e1;
                piVar9 = piVar9 + -1;
              }
              iVar6 = 3;
              DAT_01b39204 = iVar7;
              if (iVar7 < 3) {
                piVar9 = (int *)(param_1 + 0x3a4);
                do {
                  DAT_01b39204 = iVar6;
                  if (*piVar9 == 0) break;
                  iVar6 = iVar6 + -1;
                  piVar9 = piVar9 + -1;
                  DAT_01b39204 = iVar7;
                } while (iVar7 < iVar6);
              }
            }
LAB_009bd1e1:
            if (iVar8 == DAT_01b39204) {
              cVar4 = FUN_00cac640(0x10001,0);
              if (cVar4 != '\0') {
                FUN_009937d0();
                FUN_00e5e050("core_se_sys_weapon_cursor_rightleft",0);
              }
              *(undefined4 *)(param_1 + 0x4a4) = 0;
            }
            else {
              FUN_009a4740(*(undefined4 *)(param_1 + 0x368 + DAT_01b39204 * 4));
              if (*(int *)(param_1 + 0x38c) != 0) {
                FUN_00ce4d70(0x11);
                FUN_009a4e60(iVar8);
                FUN_00ce4d70(0x16);
                *(undefined4 *)(param_1 + 0x378 + iVar8 * 4) =
                     *(undefined4 *)(param_1 + 0x368 + iVar8 * 4);
              }
              if (*(int *)(param_1 + 0x390) != 0) {
                *(undefined4 *)(param_1 + 0x390) = 0;
                FUN_00ce4d70(0x15);
              }
              FUN_009937d0();
              FUN_00e5e050("core_se_sys_weapon_cursor_rightleft",0);
              FUN_00992f80(DAT_01b39204,iVar8);
              *(undefined4 *)(param_1 + 0x38c) = 0;
            }
          }
        }
      }
    }
    FUN_00993440();
    if ((*(int *)(param_1 + 0x4a8) != 0) &&
       ((cVar4 = FUN_00cac640(0x40,0), cVar4 != '\0' || (iVar8 = FUN_00dd9400(0x58), iVar8 != 0))))
    {
      FUN_009a4d70();
    }
    *(int *)(param_1 + 0x4ac) = *(int *)(param_1 + 0x4a4);
    if ((*(int *)(param_1 + 0x4a4) == 1) &&
       ((*(int *)(param_1 + 0x4a0) == 1 || (*(int *)(param_1 + 0x4a0) == 2)))) {
      *(undefined4 *)(param_1 + 0x4ac) = 0;
    }
    if ((!bVar2) &&
       (((cVar4 = FUN_00ce12f0(0), cVar4 != '\0' || (cVar4 = FUN_00ce1360(0), cVar4 != '\0')) ||
        (cVar4 = FUN_00cac960(), cVar4 != '\0')))) {
      cVar4 = FUN_00ce12f0(0);
      if ((cVar4 == '\0') || (iVar8 = FUN_009b43a0(), iVar8 == 0)) {
        *(undefined4 *)(param_1 + 0x1c) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      *(undefined4 *)(param_1 + 0x20) = 3;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      *(undefined4 *)(param_1 + 0x4ac) = 1;
      FUN_00e5e050("core_se_sys_menu_out",0);
      FUN_00e5e1b0("bgm_WeaponSelect_exit");
    }
    break;
  case 3:
    FUN_00993440();
  }
  if (*(uint *)(param_1 + 0x568) != (uint)DAT_01dc1418) {
    FUN_00993e80();
    *(uint *)(param_1 + 0x568) = (uint)DAT_01dc1418;
  }
  if ((*(int *)(param_1 + 0x4d4) != 0) && (iVar8 = FUN_00cad770(), iVar8 != 0)) {
    FUN_00ce1c20();
    *(undefined4 *)(param_1 + 0x4d4) = 0;
  }
  if (*(int **)(param_1 + 0x49c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x49c) + 4))();
  }
  fVar3 = _DAT_01dc203c;
  iVar8 = *(int *)(param_1 + 0x544);
  if (iVar8 != 0) {
    if (*(float *)(param_1 + 0x564) != _DAT_01dc203c) {
      *(float *)(param_1 + 0x564) = _DAT_01dc203c;
      *(undefined4 *)(iVar8 + 0x78) = 1;
      *(float *)(iVar8 + 0x74) = fVar3;
    }
    if ((0 < *(int *)(param_1 + 0x20)) && (iVar1 != *(int *)(param_1 + 0x560))) {
      if (*(int *)(param_1 + 0x560) == 0) {
        pcVar10 = "sub_weapon";
      }
      else {
        pcVar10 = "sub_weapon_use";
      }
      FUN_009ab030(pcVar10,param_1 + 0x550,0x41700000,0);
    }
    FUN_009a2a10();
  }
  return;
}

