// src/misc/cCollectionMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098C6D0..009AFF70, 6 functions

#include "mgrr.h"
#include "cCollectionMenu.h"

// 0098C6D0  cCollectionMenu::cCollectionMenu  size=38  [class]
undefined4 * __fastcall cCollectionMenu::cCollectionMenu(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = vftable;
  return param_1;
}

// 0098C700  cCollectionMenu::~cCollectionMenu  size=103  [class]
void __fastcall cCollectionMenu::~cCollectionMenu(undefined4 *param_1)

{
  *param_1 = vftable;
  DAT_01bea084 = DAT_01bea084 & 0xfffdffff;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
    param_1[0xc] = 0;
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
    param_1[9] = 0;
  }
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  return;
}

// 0098C770  cCollectionMenu::cCollectionMenu_2  size=84  [class]
undefined4 * cCollectionMenu::cCollectionMenu_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    *puVar1 = vftable;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[3] = "cCollectionMenu";
    FUN_00d29ca0(0x61,6);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0099D670  cCollectionMenu::vf00  size=30  [class]
undefined4 __thiscall cCollectionMenu::vf00(undefined4 param_1,byte param_2)

{
  ~cCollectionMenu();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009AFE50  cCollectionMenu::vf08  size=277  [class]
void __fastcall cCollectionMenu::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(100,&DAT_01b7be50);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = cCollectionBackPanel::cCollectionBackPanel();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCollectionBackPanel";
      FUN_00d29ca0(0x5c,0);
    }
  }
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = FUN_00dd3500(0x4f0,&DAT_01b7be50);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCollectionSelectParts";
      FUN_00d29ca0(0x62,5);
    }
  }
  *(int *)(param_1 + 0x24) = iVar1;
  iVar1 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar1 != 0) {
      uVar2 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar1 + 4) = uVar2;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  iVar1 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar1 != 0) {
      uVar2 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar1 + 4) = uVar2;
    }
  }
  *(int *)(param_1 + 0x30) = iVar1;
  DAT_01bea084 = DAT_01bea084 | 0x20000;
  FUN_00cb2600(0);
  return;
}

// 009AFF70  cCollectionMenu::create  size=554  [class]
void __fastcall cCollectionMenu::create(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = FUN_00c20a50();
  if (iVar2 != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0x20) == 1)) {
      FUN_00e5e050("core_se_sys_collection",0);
      FUN_00ce4d70(1);
      FUN_00cb2600(1);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    break;
  case 1:
    iVar2 = FUN_00ce4dd0(1);
    if (iVar2 != 0) {
      uVar3 = FUN_00cb25d0(99);
      puVar4 = (undefined4 *)FUN_00cb2790(uVar3);
      *(undefined4 *)(param_1 + 0x40) = *puVar4;
      *(undefined4 *)(param_1 + 0x44) = puVar4[1];
      *(undefined4 *)(param_1 + 0x48) = puVar4[2];
      *(undefined4 *)(param_1 + 0x4c) = puVar4[3];
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_009ab030("collection",param_1 + 0x40,0x41700000,0);
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_009ab030("collection_art",param_1 + 0x40,0,0);
        iVar2 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar2 + 0x74) = 0;
        *(undefined4 *)(iVar2 + 0x78) = 1;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x24) == 0) break;
    fVar1 = *(float *)(*(int *)(param_1 + 0x24) + 0x1ac);
    iVar5 = FUN_0098cbb0();
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      *(float *)(iVar2 + 0x74) = fVar1;
      *(undefined4 *)(iVar2 + 0x78) = 1;
      iVar2 = *(int *)(param_1 + 0x30);
      *(undefined4 *)(iVar2 + 0x78) = 1;
      *(float *)(iVar2 + 0x74) = 1.0 - fVar1;
      iVar5 = FUN_0098b6c0();
      iVar2 = 1;
      if (iVar5 != 0) {
        iVar2 = 2;
      }
    }
    if (iVar2 != *(int *)(param_1 + 0x28)) {
      if (iVar2 == 0) {
        pcVar6 = "collection";
LAB_009b00f3:
        FUN_009ab030(pcVar6,param_1 + 0x40,0x41700000,0);
      }
      else if (iVar2 == 1) {
        pcVar6 = "collection_datadisk";
        goto LAB_009b00f3;
      }
      *(int *)(param_1 + 0x28) = iVar2;
    }
    if (*(int *)(*(int *)(param_1 + 0x24) + 0xe0) != 0) {
      if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      FUN_00ce4d70(2);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    break;
  case 3:
    iVar2 = FUN_00ce4dd0(2);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x20) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20) = 2;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_009a2a10();
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}

