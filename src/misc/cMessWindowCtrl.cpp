// src/misc/cMessWindowCtrl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00999F40..009B9A40, 43 functions

#include "mgrr.h"
#include "cMessWindowCtrl.h"

// 00999F40  cMessWindowCtrl::cMessWindowCtrl_5  size=21  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_5(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  return;
}

// 00999F60  cMessWindowCtrl::cMessWindowCtrl_6  size=33  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_6(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  return;
}

// 0099AE10  cMessWindowCtrl::cMessWindowCtrl_3  size=282  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_3(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 uVar8;
  
  *param_1 = cChapterSelectMenu::vftable;
  param_1[1] = 0;
  param_1[3] = vftable;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = DAT_01b391c8;
  *(undefined1 *)((int)param_1 + 0x5d) = DAT_0188dfe0;
  *(undefined2 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar3 = FUN_009891c0();
  cVar1 = *(char *)(param_1 + 0x17);
  param_1[2] = uVar3;
  if (cVar1 < '\n') {
    uVar8 = *(undefined1 *)((int)param_1 + (int)*(char *)((int)param_1 + 0x5d) + cVar1 * 5 + 0x24);
  }
  else {
    uVar8 = 1;
  }
  FUN_00989270(cVar1,uVar8);
  uVar8 = *(undefined1 *)((int)param_1 + 0x5d);
  uVar2 = *(undefined1 *)(param_1 + 0x17);
  iVar4 = FUN_00dd3500(0x52c,&DAT_01b7be50);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = cChapterSelectMenuParts::cChapterSelectMenuParts(uVar2,uVar8);
    if (iVar4 != 0) {
      *(char **)(iVar4 + 0xc) = "cChapterSelectMenuParts";
      FUN_00d29ca0(0x59,10);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
  }
  param_1[1] = iVar4;
  DAT_01b391c8 = 0;
  DAT_0188dfe0 = 1;
  if (DAT_01b76234 != 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  piVar5 = &DAT_01b762c0;
  puVar6 = param_1 + 9;
  iVar4 = 10;
  do {
    iVar7 = 5;
    do {
      *(bool *)puVar6 = *piVar5 != 0;
      piVar5 = piVar5 + 1;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

// 0099AF30  cMessWindowCtrl::cMessWindowCtrl_4  size=112  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_4(undefined4 *param_1)

{
  *param_1 = cChapterSelectMenu::vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
    param_1[7] = 0;
  }
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  param_1[3] = vftable;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  return;
}

// 0099AFA0  FUN_0099afa0  size=29  [callgraph]
undefined4 FUN_0099afa0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x6c,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cMessWindowCtrl::cMessWindowCtrl_3();
    return uVar2;
  }
  return 0;
}

// 0099B020  cMessWindowCtrl::cMessWindowCtrl  size=238  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cCodecMenuParts::vftable;
  iVar1 = 7;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8c] = 0xffffffff;
  param_1[0x8e] = vftable;
  param_1[0x8f] = 0;
  *(undefined2 *)((int)param_1 + 0x242) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0xffffffff;
  param_1[0x94] = 1;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  _memset(&DAT_01b389c8,0,0x800);
  return param_1;
}

// 0099B110  cMessWindowCtrl::cMessWindowCtrl_2  size=93  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cCodecMenuParts::vftable;
  FUN_00cfe0f0(3);
  param_1[0x8e] = vftable;
  if ((undefined4 *)param_1[0x8f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x8f])(1);
    param_1[0x8f] = 0;
  }
  iVar1 = 7;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 0099B170  FUN_0099b170  size=68  [callgraph]
int FUN_0099b170(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x260,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCodecMenuParts";
      FUN_00d29ca0(0x5b,9);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 0099C790  cMessWindowCtrl::cMessWindowCtrl_9  size=401  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_9(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cCodecViewer::vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  iVar1 = 5;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0x75] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 6;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x93] = 0xffffffff;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x9c] = vftable;
  param_1[0x9d] = 0;
  *(undefined2 *)((int)param_1 + 0x27a) = 0;
  param_1[0x9f] = 0;
  Hw::cTexture::cTexture_6();
  param_1[0xad] = 1;
  param_1[0x81] = 0;
  param_1[0x7b] = 7;
  param_1[0x87] = 1;
  param_1[0x82] = 0;
  param_1[0x7c] = 7;
  param_1[0x88] = 1;
  param_1[0x83] = 0;
  param_1[0x7d] = 7;
  param_1[0x89] = 1;
  param_1[0x84] = 0;
  param_1[0x7e] = 7;
  param_1[0x8a] = 1;
  param_1[0x85] = 0;
  param_1[0x7f] = 7;
  param_1[0x86] = 0;
  param_1[0x80] = 7;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  FUN_00f972f0();
  DAT_01bea060 = DAT_01bea060 | 0x84;
  return param_1;
}

// 0099C930  cMessWindowCtrl::cMessWindowCtrl_8  size=239  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cCodecViewer::vftable;
  if ((undefined4 *)param_1[0xa0] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa0])(1);
    param_1[0xa0] = 0;
  }
  FUN_00936540();
  FUN_00ce1e40();
  DAT_01bea060 = DAT_01bea060 & 0xffffff7b;
  iVar1 = 0;
  do {
    if (*(int *)((int)&DAT_01b389a8 + iVar1) != 0) {
      FUN_00e9d6a0(*(int *)((int)&DAT_01b389a8 + iVar1));
      *(undefined4 *)((int)&DAT_01b389a8 + iVar1) = 0;
    }
    if (*(int *)((int)&DAT_01b3898c + iVar1) != 0) {
      FUN_00e9d6a0(*(int *)((int)&DAT_01b3898c + iVar1));
      *(undefined4 *)((int)&DAT_01b3898c + iVar1) = 0;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x1c);
  FUN_00cfe0f0(0x17);
  Hw::cTexture::cTexture_5();
  param_1[0x9c] = vftable;
  if ((undefined4 *)param_1[0x9d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x9d])(1);
    param_1[0x9d] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  iVar1 = 5;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 0099CA20  FUN_0099ca20  size=68  [callgraph]
int FUN_0099ca20(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x2b8,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl_9();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCodecViewer";
      FUN_00d29ca0(0x7b,5);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 0099D6D0  cMessWindowCtrl::cMessWindowCtrl_7  size=654  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_7(undefined4 *param_1)

{
  int local_24;
  undefined4 local_14;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0x41] = 0;
  *param_1 = cCollectionSelectParts::vftable;
  param_1[0x6b] = 0x3f800000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0xffffffff;
  param_1[0x6f] = 0;
  local_24 = 0x13;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  FUN_00a7c930();
  param_1[0x135] = 0xffffffff;
  param_1[0x136] = 0xffffffff;
  param_1[0x138] = 0;
  *(undefined2 *)((int)param_1 + 0x4e6) = 0;
  param_1[0x13a] = 0;
  param_1[0x137] = vftable;
  param_1[0x13b] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = local_14;
  param_1[0x74] = 0;
  param_1[0x75] = 0xbf000000;
  param_1[0x76] = 0;
  param_1[0x77] = local_14;
  param_1[0x78] = param_1[0x70];
  param_1[0x79] = param_1[0x71];
  param_1[0x7a] = param_1[0x72];
  param_1[0x7b] = param_1[0x73];
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = local_14;
  param_1[0x80] = 0x3f800000;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = local_14;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  return param_1;
}

// 0099D9A0  FUN_0099d9a0  size=1174  [callgraph]
void __fastcall FUN_0099d9a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_24;
  char local_20 [32];
  
  iVar1 = *(int *)(param_1 + 0xf8) / 5 - *(int *)(param_1 + 0xf0);
  piVar5 = &DAT_01b393b0 + iVar1 * 5;
  iVar1 = iVar1 * 5;
  local_24 = 0x14;
  do {
    if (iVar1 < *(int *)(param_1 + 0x4ec)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x458),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x45c),1);
      if ((iVar1 < 0) || (0x5f < iVar1)) {
LAB_0099dcaa:
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),0);
        local_20[1] = '\0';
        local_20[2] = '\0';
        local_20[3] = '\0';
        local_20[4] = '\0';
        local_20[5] = '\0';
        local_20[6] = '\0';
        local_20[7] = '\0';
        local_20[8] = '\0';
        local_20[9] = '\0';
        local_20[10] = '\0';
        local_20[0xb] = '\0';
        local_20[0xc] = '\0';
        local_20[0xd] = '\0';
        local_20[0xe] = '\0';
        local_20[0xf] = '\0';
        local_20[0x10] = '\0';
        local_20[0x11] = '\0';
        local_20[0x12] = '\0';
        local_20[0x13] = '\0';
        local_20[0x14] = '\0';
        local_20[0x15] = '\0';
        local_20[0x16] = '\0';
        local_20[0x17] = '\0';
        local_20[0x18] = '\0';
        local_20[0x19] = '\0';
        local_20[0x1a] = '\0';
        local_20[0x1b] = '\0';
        local_20[0x1c] = '\0';
        local_20[0x1d] = '\0';
        local_20[0x1e] = '\0';
        local_20[0x1f] = 0;
        local_20[0] = '\0';
        _sprintf_s(local_20,0x20,"%03d",iVar1 + 1);
        FUN_00cce090(*(undefined4 *)(param_1 + 0x468),local_20);
        if (iVar1 == *(int *)(param_1 + 0x1b8)) {
          FUN_00cce0e0(*(undefined4 *)(param_1 + 0x468),1,3);
        }
        uVar3 = FUN_00e03ea0("collect_item_01");
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
        uVar3 = FUN_00ca9da0(iVar1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),1);
        uVar4 = FUN_00e03ea0(uVar3);
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x450),uVar4);
        uVar4 = FUN_00e03ea0(uVar3);
        uVar3 = *(undefined4 *)(param_1 + 0x454);
LAB_0099ddcb:
        FUN_00cb2ce0(uVar3,uVar4);
        if (iVar1 != *(int *)(param_1 + 0xf8)) {
          uVar3 = 1;
LAB_0099dddc:
          FUN_00ce4d70(uVar3);
        }
      }
      else {
        if (piVar5[-0x60] == 0) {
          if ((0x5f < iVar1) || (*piVar5 == 0)) goto LAB_0099dcaa;
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),0);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),0);
          uVar3 = FUN_00e03ea0("collect_item_01");
          FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
          uVar3 = FUN_00ca9da0(iVar1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),1);
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),1);
          uVar4 = FUN_00e03ea0(uVar3);
          FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x450),uVar4);
          uVar4 = FUN_00e03ea0(uVar3);
          uVar3 = *(undefined4 *)(param_1 + 0x454);
          goto LAB_0099ddcb;
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),1);
        uVar3 = FUN_00e03ea0("collect_item_06");
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),0);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),0);
        if (iVar1 != *(int *)(param_1 + 0xf8)) {
          uVar3 = 2;
          goto LAB_0099dddc;
        }
      }
      uVar3 = FUN_00ca9d10(iVar1);
      uVar3 = FUN_00ca9cf0(uVar3);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x470),uVar3,0,0xffffffff);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x470),1);
    }
    else {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x458),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x45c),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x464),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x468),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x46c),0);
      local_20[0] = '\0';
      local_20[1] = '\0';
      local_20[2] = '\0';
      local_20[3] = '\0';
      local_20[4] = '\0';
      local_20[5] = '\0';
      local_20[6] = '\0';
      local_20[7] = '\0';
      local_20[8] = '\0';
      local_20[9] = '\0';
      local_20[10] = '\0';
      local_20[0xb] = '\0';
      local_20[0xc] = '\0';
      local_20[0xd] = '\0';
      local_20[0xe] = '\0';
      local_20[0xf] = '\0';
      local_20[0x10] = '\0';
      local_20[0x11] = '\0';
      local_20[0x12] = '\0';
      local_20[0x13] = '\0';
      local_20[0x14] = '\0';
      local_20[0x15] = '\0';
      local_20[0x16] = '\0';
      local_20[0x17] = '\0';
      local_20[0x18] = '\0';
      local_20[0x19] = '\0';
      local_20[0x1a] = '\0';
      local_20[0x1b] = '\0';
      local_20[0x1c] = '\0';
      local_20[0x1d] = '\0';
      local_20[0x1e] = '\0';
      local_20[0x1f] = 0;
      _sprintf_s(local_20,0x20,"-");
      FUN_00cce090(*(undefined4 *)(param_1 + 0x468),local_20);
      iVar2 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x468));
      if (iVar2 != 0) {
        FUN_00cce0e0(*(undefined4 *)(param_1 + 0x468),1,3);
      }
      uVar3 = FUN_00e03ea0("collect_item_06");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x458),uVar3);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x470),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x450),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x454),0);
    }
    piVar5 = piVar5 + 1;
    iVar1 = iVar1 + 1;
    local_24 = local_24 + -1;
    if (local_24 == 0) {
      return;
    }
  } while( true );
}

// 0099DE40  FUN_0099de40  size=174  [callgraph]
void __fastcall FUN_0099de40(int param_1)

{
  int iVar1;
  undefined1 local_18 [24];
  
  iVar1 = FUN_00ca9e50(*(undefined4 *)(param_1 + 0xf8));
  iVar1 = iVar1 + 1;
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x50),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x50),0);
  FUN_0099a350(local_18,"COLLECT_ID_A_%02d",iVar1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x60),local_18,0,0xffffffff);
  FUN_0099a350(local_18,"COLLECT_ID_B_%02d",iVar1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 100),local_18,0,0xffffffff);
  FUN_0099a350(local_18,"COLLECT_ID_C_%02d",iVar1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x68),local_18,0,0xffffffff);
  return;
}

// 0099DEF0  FUN_0099def0  size=124  [callgraph]
undefined4 FUN_0099def0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 != 0x20140) && (iVar1 != 0x20144)) && (iVar1 != 0x20160)) {
      FUN_00a805f0();
      FUN_00a7c950();
      return 1;
    }
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9c78;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
      FUN_00dd6d80(puVar3);
      FUN_00b2f3a0();
    }
    FUN_00a7c950();
  }
  return 1;
}

// 009A0370  cMessWindowCtrl::cMessWindowCtrl_20  size=124  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_20(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cCustomizeMenu::vftable;
  if (param_1[0x11a] != 0) {
    FUN_00a805f0();
    param_1[0x11a] = 0;
  }
  FUN_00cfe0f0(0xc);
  iVar1 = 6;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x19] = vftable;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1a])(1);
    param_1[0x1a] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A0AD0  cMessWindowCtrl::cMessWindowCtrl_19  size=190  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_19(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cCustomizeSelMenu::vftable;
  if (param_1[0xd9] != 0) {
    FUN_00a805f0();
    param_1[0xd9] = 0;
  }
  if (param_1[0xda] != -1) {
    FUN_00a00bd0(param_1[0xda],0);
    param_1[0xda] = 0xffffffff;
  }
  if ((undefined4 *)param_1[0x86] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x86])(1);
    param_1[0x86] = 0;
  }
  FUN_00cfe0f0(0xd);
  Hw::cTexture::cTexture_5();
  iVar1 = 0xe;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  param_1[7] = vftable;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A20D0  cMessWindowCtrl::cMessWindowCtrl_13  size=65  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_13(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  *param_1 = cGameOverHackingMenu::vftable;
  param_1[0x11] = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  param_1[0x19] = 0;
  param_1[0x16] = vftable;
  DAT_01bea060 = DAT_01bea060 & 0xdfffffff;
  return param_1;
}

// 009A2120  cMessWindowCtrl::cMessWindowCtrl_14  size=56  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_14(undefined4 *param_1)

{
  *param_1 = cGameOverHackingMenu::vftable;
  FUN_00cfe0f0(0x11);
  param_1[0x16] = vftable;
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
    param_1[0x17] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A2160  cMessWindowCtrl::cMessWindowCtrl_15  size=114  [class]
undefined4 * cMessWindowCtrl::cMessWindowCtrl_15(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x68,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    puVar1[0x13] = 0;
    *puVar1 = cGameOverHackingMenu::vftable;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x12] = 0;
    puVar1[0x16] = vftable;
    puVar1[0x17] = 0;
    *(undefined2 *)((int)puVar1 + 0x62) = 0;
    puVar1[0x19] = 0;
    DAT_01bea060 = DAT_01bea060 & 0xdfffffff;
    puVar1[3] = "cGameOverHackingMenu";
    FUN_00d29ca0(0x69,10);
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 009A24F0  cMessWindowCtrl::cMessWindowCtrl_16  size=65  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_16(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  *param_1 = cGameOverNormalMenu::vftable;
  param_1[0xe] = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x14] = 0;
  param_1[0x11] = vftable;
  DAT_01bea060 = DAT_01bea060 & 0xdfffffff;
  return param_1;
}

// 009A2540  cMessWindowCtrl::cMessWindowCtrl_18  size=56  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_18(undefined4 *param_1)

{
  *param_1 = cGameOverNormalMenu::vftable;
  FUN_00cfe0f0(0x10);
  param_1[0x11] = vftable;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
    param_1[0x12] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A2580  cMessWindowCtrl::cMessWindowCtrl_17  size=114  [class]
undefined4 * cMessWindowCtrl::cMessWindowCtrl_17(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x54,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    puVar1[0x10] = 0;
    *puVar1 = cGameOverNormalMenu::vftable;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0xffffffff;
    puVar1[0xf] = 0;
    puVar1[0x11] = vftable;
    puVar1[0x12] = 0;
    *(undefined2 *)((int)puVar1 + 0x4e) = 0;
    puVar1[0x14] = 0;
    DAT_01bea060 = DAT_01bea060 & 0xdfffffff;
    puVar1[3] = "cGameOverNormalMenu";
    FUN_00d29ca0(0x6a,10);
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 009A2E80  cMessWindowCtrl::cMessWindowCtrl_11  size=222  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_11(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cMovieViewer::vftable;
  param_1[7] = 0;
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0;
  param_1[0x48] = vftable;
  param_1[0x49] = 0;
  *(undefined2 *)((int)param_1 + 0x12a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 1;
  iVar1 = 0x32;
  do {
    Hw::cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x2b6] = 0;
  param_1[0x2b4] = 0xb;
  param_1[0x2b5] = 0xffffffff;
  param_1[0x36] = 0x27;
  param_1[0x37] = 0xc;
  param_1[0x38] = 10;
  DAT_01b391f4 = 0;
  DAT_01b391f8 = 0;
  DAT_01b391fc = 0;
  return param_1;
}

// 009A2F60  cMessWindowCtrl::cMessWindowCtrl_12  size=177  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_12(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = cMovieViewer::vftable;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x4c])(1);
    param_1[0x4c] = 0;
  }
  piVar2 = &DAT_01b388c0;
  do {
    if (*piVar2 != 0) {
      FUN_00e9d6a0(*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x1b3898c);
  FUN_00cfe0f0(0x16);
  iVar1 = 0x32;
  do {
    Hw::cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x48] = vftable;
  if ((undefined4 *)param_1[0x49] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x49])(1);
    param_1[0x49] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A3020  FUN_009a3020  size=68  [callgraph]
int FUN_009a3020(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xadc,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl_11();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cMovieViewer";
      FUN_00d29ca0(0x79,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 009A4F20  cMessWindowCtrl::cMessWindowCtrl_28  size=148  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_28(undefined4 *param_1)

{
  undefined4 uVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0x2c] = 0;
  *param_1 = cPauseMenu::vftable;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  *(undefined2 *)((int)param_1 + 0xc2) = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = vftable;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  uVar1 = FUN_00d467c0();
  param_1[0x32] = uVar1;
  return param_1;
}

// 009A4FC0  cMessWindowCtrl::cMessWindowCtrl_27  size=65  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_27(undefined4 *param_1)

{
  *param_1 = cPauseMenu::vftable;
  FUN_00cfe0f0(2);
  param_1[0x2e] = vftable;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
    param_1[0x2f] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A5010  FUN_009a5010  size=68  [callgraph]
int FUN_009a5010(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xcc,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl_28();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cPauseMenu";
      FUN_00d29ca0(0x6f,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 009A5C70  cMessWindowCtrl::cMessWindowCtrl_25  size=262  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_25(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cSaveDataLoadMenu::vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 0xe;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0xe6] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xed] = 0xffffffff;
  param_1[0xee] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = vftable;
  param_1[0xf2] = 0;
  *(undefined2 *)((int)param_1 + 0x3ce) = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  _memset(param_1 + 0x90,0,0x114);
  _memset(param_1 + 0xd5,0,0x3c);
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  return param_1;
}

// 009A5D80  cMessWindowCtrl::cMessWindowCtrl_26  size=140  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_26(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cSaveDataLoadMenu::vftable;
  if ((undefined4 *)param_1[0xf5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf5])(1);
    param_1[0xf5] = 0;
  }
  FUN_00cfe0f0(10);
  param_1[0xf1] = vftable;
  if ((undefined4 *)param_1[0xf2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf2])(1);
    param_1[0xf2] = 0;
  }
  iVar1 = 0xe;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A5E10  FUN_009a5e10  size=68  [callgraph]
int FUN_009a5e10(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x3f0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl_25();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cSaveDataLoadMenu";
      FUN_00d29ca0(0x71,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 009A6460  cMessWindowCtrl::cMessWindowCtrl_24  size=125  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_24(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cTitleMenu::vftable;
  param_1[8] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  param_1[7] = vftable;
  param_1[0x31] = 0;
  *(undefined1 *)((int)param_1 + 0x106) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)((int)param_1 + 0xf9) = 0xff;
  param_1[0x34] = 0xffffffff;
  param_1[0x39] = 0xffffffff;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3b] = 0xffffffff;
  return param_1;
}

// 009A64E0  cMessWindowCtrl::cMessWindowCtrl_23  size=84  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_23(undefined4 *param_1)

{
  *param_1 = cTitleMenu::vftable;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
    param_1[0x36] = 0;
  }
  FUN_00cfe0f0(1);
  param_1[7] = vftable;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A6540  FUN_009a6540  size=68  [callgraph]
int FUN_009a6540(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x10c,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl_24();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cTitleMenu";
      FUN_00d29ca0(0x72,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 009A74F0  cMessWindowCtrl::cMessWindowCtrl_21  size=247  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl_21(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cVRMissionMenuParts::vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  iVar2 = 0x22;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x104] = vftable;
  param_1[0x105] = 0;
  *(undefined2 *)((int)param_1 + 0x41a) = 0;
  param_1[0x107] = 0;
  Hw::cTexture::cTexture_6();
  *(undefined2 *)(param_1 + 0x168) = 0;
  *(undefined2 *)((int)param_1 + 0x5a6) = 0;
  *(undefined2 *)((int)param_1 + 0x5aa) = 0;
  *(undefined2 *)(param_1 + 0x171) = 0;
  *(undefined2 *)((int)param_1 + 0x5a3) = 0;
  iVar2 = FUN_00a4a350(DAT_018b9148);
  if (iVar2 == 0) {
    DAT_01b39210 = 0;
    DAT_01b39214 = 0;
  }
  param_1[0x103] = 0;
  iVar2 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar2 != 0) {
    iVar2 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar2 != 0) {
      uVar1 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar2 + 4) = uVar1;
    }
    param_1[0x108] = iVar2;
    return param_1;
  }
  param_1[0x108] = 0;
  return param_1;
}

// 009A75F0  cMessWindowCtrl::cMessWindowCtrl_22  size=143  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_22(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cVRMissionMenuParts::vftable;
  if ((undefined4 *)param_1[0x108] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x108])(1);
    param_1[0x108] = 0;
  }
  FUN_009967e0();
  FUN_00cfdc10();
  Hw::cTexture::cTexture_5();
  param_1[0x104] = vftable;
  if ((undefined4 *)param_1[0x105] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x105])(1);
    param_1[0x105] = 0;
  }
  iVar1 = 0x22;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009AABD0  cMessWindowCtrl::vf00  size=53  [class]
undefined4 * __thiscall cMessWindowCtrl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009AAC10  FUN_009aac10  size=257  [callgraph]
undefined4 __thiscall FUN_009aac10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd5650(&DAT_016579ec);
    return 0;
  }
  iVar1 = FUN_00dd3500(0xbc,&DAT_01b7be50);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = cMessWindow::cMessWindow_2();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cMessWindow";
      FUN_00d29ca0(0x78,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
  }
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016579c8);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xb8);
  *(int *)(iVar1 + 0xa8) = param_2;
  *(int *)(iVar1 + 0xa4) = param_3;
  *(undefined4 *)(iVar1 + 0xac) = param_4;
  *(undefined2 *)(iVar1 + 0xa1) = 0;
  if ((param_3 != 0) && (param_3 != 2)) {
    *(undefined2 *)(param_1 + 8) = 0xff01;
    *(undefined2 *)(param_1 + 10) = 1;
    return 1;
  }
  *(undefined2 *)(param_1 + 8) = 0x100;
  if ((param_2 == 8) || (param_2 == 10)) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  FUN_00999da0(*(undefined1 *)(param_1 + 9));
  *(undefined2 *)(param_1 + 10) = 1;
  return 1;
}

// 009B01B0  cMessWindowCtrl::cMessWindowCtrl_10  size=199  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl_10(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cCollectionSelectParts::vftable;
  FUN_0099def0();
  FUN_0098ca10();
  if ((undefined4 *)param_1[0x133] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x133])(1);
    param_1[0x133] = 0;
  }
  if ((undefined4 *)param_1[0x132] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x132])(1);
    param_1[0x132] = 0;
  }
  if ((undefined4 *)param_1[0x131] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x131])(1);
    param_1[0x131] = 0;
  }
  if ((undefined4 *)param_1[0x130] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x130])(1);
    param_1[0x130] = 0;
  }
  FUN_00cfe0f0(0xf);
  param_1[0x137] = vftable;
  if ((undefined4 *)param_1[0x138] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x138])(1);
    param_1[0x138] = 0;
  }
  iVar1 = 0x13;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009B0280  FUN_009b0280  size=2368  [callgraph]
void __fastcall FUN_009b0280(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *local_44;
  int local_40;
  undefined1 local_38 [24];
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_44 = (int *)(param_1 + 0x15c);
  iVar8 = *(int *)(param_1 + 0xf8) % 5 + *(int *)(param_1 + 0xf0) * 5;
  local_40 = 0;
  do {
    if (*local_44 != 0) {
      iVar9 = local_40;
      if (local_40 == iVar8) {
        iVar9 = ((-(uint)(*(int *)(param_1 + 0x100) != 0) & 10) - 5) + local_40;
      }
      iVar5 = *(int *)(param_1 + 0xfc);
      if (*(int *)(param_1 + 0x1bc) == 0) {
        if (((iVar5 < 0) || (0x5f < iVar5)) || ((&DAT_01b39230)[iVar5] == 0)) {
          FUN_00ce4d70(1);
        }
        else {
          FUN_00ce4d70(2);
        }
      }
      else {
        if (((iVar5 < 0) || (0x5f < iVar5)) || ((&DAT_01b39230)[iVar5] == 0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
        }
        FUN_00ce4dc0(uVar4,1);
      }
      uVar4 = FUN_00e03ea0("collect_item_04");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x45c),uVar4);
      *(undefined4 *)(param_1 + 0x15c + iVar9 * 4) = 0;
    }
    local_44 = local_44 + 1;
    local_40 = local_40 + 1;
  } while (local_40 < 0x14);
  iVar9 = *(int *)(param_1 + 0xf8);
  if (*(int *)(param_1 + 0x1bc) == 0) {
    if (((iVar9 < 0) || (0x5f < iVar9)) || ((&DAT_01b39230)[iVar9] == 0)) {
      uVar4 = 3;
    }
    else {
      uVar4 = 4;
    }
    FUN_00ce4d70(uVar4);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x74 + iVar8 * 4),9);
  }
  else {
    if (((iVar9 < 0) || (0x5f < iVar9)) || ((&DAT_01b39230)[iVar9] == 0)) {
      uVar4 = 3;
    }
    else {
      uVar4 = 4;
    }
    FUN_00ce4dc0(uVar4,1);
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x74 + iVar8 * 4),9,1);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  uVar4 = FUN_00e03ea0("collect_item_05");
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x45c),uVar4);
  bVar3 = true;
  *(undefined4 *)(param_1 + 0x15c + iVar8 * 4) = 1;
  iVar8 = *(int *)(param_1 + 0xf8) / 5;
  if (*(int *)(param_1 + 0x100) == 0) {
LAB_009b053c:
    if (iVar8 - *(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xec) + -4) {
LAB_009b05e6:
      iVar8 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x44));
      if ((iVar8 == 0) || (iVar8 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x4c)), iVar8 == 0)) {
        bVar3 = false;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),1);
      if (*(int *)(param_1 + 0xdc) < 2) goto LAB_009b06df;
      if (*(int *)(param_1 + 0x10c) == 0) {
        if (*(int *)(param_1 + 0x108) == 0) goto LAB_009b06df;
        if (!bVar3) {
          FUN_00ce4d40(*(undefined4 *)(param_1 + 0x40),10,1);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xcc),10);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd0),10);
        }
        goto LAB_009b06b2;
      }
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x40),10);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xcc),10);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd0),10);
      if (bVar3) goto LAB_009b06df;
      FUN_00ce4d40(*(undefined4 *)(param_1 + 0x48),10,1);
      goto LAB_009b06bf;
    }
    iVar8 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x44));
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),0);
    if (*(int *)(param_1 + 0xdc) < 2) goto LAB_009b06df;
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x48),1,1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd4),0);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd8),0);
    if (iVar8 != 0) goto LAB_009b06df;
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x40),10);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xcc),10);
    uVar4 = *(undefined4 *)(param_1 + 0xd0);
  }
  else {
    if (iVar8 != *(int *)(param_1 + 0xf0)) {
      if (*(int *)(param_1 + 0x100) == 0) goto LAB_009b053c;
      goto LAB_009b05e6;
    }
    iVar8 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x4c));
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x44),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),1);
    if (*(int *)(param_1 + 0xdc) < 2) goto LAB_009b06df;
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x40),1,1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xcc),0);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd0),0);
    if (iVar8 != 0) goto LAB_009b06df;
LAB_009b06b2:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x48),10);
LAB_009b06bf:
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd4),10);
    uVar4 = *(undefined4 *)(param_1 + 0xd8);
  }
  FUN_00ce4ce0(uVar4,10);
LAB_009b06df:
  if (*(int *)(param_1 + 0x4c0) != 0) {
    FUN_00cb2600(0);
  }
  if (*(int *)(param_1 + 0x4c4) != 0) {
    FUN_00cb2600(0);
  }
  if (*(int *)(param_1 + 0x4c8) != 0) {
    FUN_00cb2600(0);
  }
  if (*(int *)(param_1 + 0x4cc) != 0) {
    FUN_00cb2600(0);
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),0);
  if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0x4ec)) {
    iVar5 = FUN_00ca9d10(*(int *)(param_1 + 0xf8));
    iVar6 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xfc));
    uVar4 = FUN_00ca9cf0(iVar5);
    local_20 = 0;
    local_1f = 0;
    local_1b = 0;
    local_17 = 0;
    local_13 = 0;
    local_f = 0;
    local_b = 0;
    local_7 = 0;
    local_3 = 0;
    local_1 = 0;
    iVar7 = FUN_00ca9e50(*(undefined4 *)(param_1 + 0xf8));
    iVar8 = iVar7 + 1;
    iVar9 = *(int *)(param_1 + 0xf8);
    if (iVar9 < 0) {
      local_44 = (int *)0x0;
    }
    else if (iVar9 < 0x60) {
      local_44 = (int *)(&DAT_01b39230)[iVar9];
    }
    else {
      local_44 = (int *)0x0;
    }
    if (iVar5 == 4) {
      iVar9 = iVar7 + 0x17;
    }
    else if (iVar5 == 5) {
      iVar9 = iVar7 + 0x18;
    }
    else if (iVar5 == 6) {
      iVar9 = iVar7 + 0x1a;
    }
    else {
      iVar9 = iVar8;
      if (iVar5 == 7) {
        iVar9 = iVar7 + 0x1d;
      }
    }
    if (iVar9 - 1U < 0x32) {
      FUN_0099a390(&local_20,"COLLECT_NUMB_%02d",iVar9);
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),local_44 != (int *)0x1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),uVar4,1,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x2c),uVar4,1,0xffffffff);
    switch(iVar5) {
    case 0:
    case 4:
    case 6:
      FUN_0099a350(local_38,"HONOR_TITLE_%02d",iVar9);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),local_38,0,7);
      FUN_0099a350(local_38,"HONOR_MES_%02d",iVar9);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),local_38,0,0xffffffff);
      if (*(int *)(param_1 + 0x4cc) != 0) {
        *(int *)(*(int *)(param_1 + 0x4cc) + 0x20) = iVar9;
        FUN_00cb2600(local_44 == (int *)0x0);
        FUN_00ce4d70(1);
      }
      break;
    case 1:
      FUN_0099a350(local_38,"COLLECT_ID_A_%02d",iVar8);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),local_38,0,0x11);
      FUN_0099a350(local_38,"COLLECT_ID_B_%02d",iVar8);
      FUN_00cf9770(*(undefined4 *)(param_1 + 100),local_38,0,0xffffffff);
      FUN_0099a350(local_38,"COLLECT_ID_C_%02d",iVar8);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x68),local_38,0,0xffffffff);
      if (*(int *)(param_1 + 0x4c4) != 0) {
        *(int *)(*(int *)(param_1 + 0x4c4) + 0x28) = iVar8;
        FUN_00cb2600(local_44 == (int *)0x0);
        FUN_00ce4d70(1);
      }
      break;
    case 2:
      uVar4 = FUN_00ca9d00(2);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),uVar4,0,0x11);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x28),&local_20,0,0xffffffff);
      break;
    case 3:
    case 5:
    case 7:
      uVar4 = FUN_00ca9d00(iVar5);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),uVar4,0,0x11);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x28),&local_20,0,0xffffffff);
      *(undefined4 *)(param_1 + 0x204) = 0;
    }
    if ((local_44 == (int *)0x1) ||
       (((iVar5 != 2 && (iVar5 != 3)) && ((iVar5 != 5 && (iVar5 != 7)))))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0x110) = uVar4;
    if ((local_44 == (int *)0x1) || (FUN_00ce4d70(6), iVar5 != 1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x50),uVar4);
    if ((local_44 == (int *)0x1) || (((iVar5 != 0 && (iVar5 != 4)) && (iVar5 != 6)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),uVar4);
    if (*(int *)(param_1 + 0x4c8) != 0) {
      FUN_00cb2600(local_44);
      FUN_00ce4d70(1);
    }
    if (iVar5 != iVar6) {
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x2c),1,3);
    }
    uVar1 = *(uint *)(param_1 + 0xf8);
    uVar2 = *(uint *)(param_1 + 0xfc);
    if (uVar1 == uVar2) {
      if (*(int *)(param_1 + 0x114) == 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x110));
      }
    }
    else if ((((int)uVar1 < 0) || (0x5f < (int)uVar1)) || ((&DAT_01b39230)[uVar1] == 0)) {
      if (((-1 < (int)uVar2) && ((int)uVar2 < 0x60)) &&
         (((&DAT_01b393b0)[uVar2] != 0 &&
          ((((int)uVar2 < 0 || (0x5f < (int)uVar2)) || ((&DAT_01b39230)[uVar2] == 0)))))) {
        *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 1;
        *(uint *)(param_1 + 0x1b8) = uVar2;
        if (uVar2 < 0x60) {
          (&DAT_01b393b0)[uVar2] = 0;
        }
      }
      uVar1 = *(uint *)(param_1 + 0xf8);
      if (((-1 < (int)uVar1) && ((int)uVar1 < 0x60)) &&
         (((&DAT_01b393b0)[uVar1] != 0 &&
          (((((int)uVar1 < 0 || (0x5f < (int)uVar1)) || ((&DAT_01b39230)[uVar1] == 0)) &&
           (*(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 1, uVar1 < 0x60)))))) {
        (&DAT_01b393b0)[uVar1] = 0;
      }
      FUN_0099d9a0();
      *(undefined4 *)(param_1 + 0x114) = 1;
    }
  }
  else {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xf8);
  FUN_0098cc00();
  return;
}

// 009B0BF0  FUN_009b0bf0  size=409  [callgraph]
undefined4 __thiscall FUN_009b0bf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_90;
  undefined4 local_8c;
  
  if (((param_2 < *(int *)(param_1 + 0x4ec)) &&
      (((param_2 < 0 || (0x5f < param_2)) || ((&DAT_01b39230)[param_2] == 0)))) &&
     (iVar1 = FUN_00ca9da0(param_2), *(int *)(iVar1 + 0x20) != 0xaffff)) {
    iVar3 = -1;
    iVar2 = FUN_00ca9d10(param_2);
    if (iVar2 == 2) {
      iVar3 = FUN_00ca9e50(param_2);
    }
    if ((*(int *)(param_1 + 0x4d4) != *(int *)(iVar1 + 0x20)) ||
       (*(int *)(param_1 + 0x4d8) != iVar3)) {
      uVar4 = 0;
      if (iVar3 != -1) {
        uVar4 = 0x14;
      }
      iVar2 = FUN_00a00ca0(*(int *)(iVar1 + 0x20),uVar4);
      if (iVar2 != 0) {
        FUN_0040b190();
        FUN_0099def0();
        if (iVar3 != -1) {
          switch(iVar3) {
          default:
            local_8c = 4;
            break;
          case 1:
            local_8c = 5;
            break;
          case 2:
            local_8c = 6;
            break;
          case 3:
            local_8c = 7;
            break;
          case 4:
            local_8c = 8;
          }
        }
        local_90 = uVar4;
        uVar4 = FUN_00a82090("Model",*(undefined4 *)(iVar1 + 0x20),&local_90);
        FUN_00a7c970(uVar4);
        FUN_00a81330();
        iVar2 = FUN_00a7c800();
        *(undefined4 *)(iVar2 + 0x338) = 0xe;
        if (iVar3 == -1) {
          FUN_00a81330();
          iVar2 = FUN_00a7c8a0();
          if (iVar2 != 0) {
            FUN_0094c820(iVar2);
            FUN_005e86c0(1);
            FUN_005e8720(1);
          }
        }
        *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(iVar1 + 0x20);
        *(int *)(param_1 + 0x4d8) = iVar3;
      }
    }
    return 1;
  }
  return 0;
}

// 009B9A40  cMessWindowCtrl::cMessWindowCtrl_29  size=90  [class]
undefined4 * cMessWindowCtrl::cMessWindowCtrl_29(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x14,&DAT_01b7bd48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    *(undefined2 *)((int)puVar1 + 10) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0xfffffffe;
    FUN_009aac10(0x3e,0,1);
    DAT_01bea060 = DAT_01bea060 | 0x1000;
    DAT_01bea084 = DAT_01bea084 | 0x4000;
    puVar2 = puVar1;
    DAT_01b3922c = puVar1;
  }
  return puVar2;
}

