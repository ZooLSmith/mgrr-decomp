// src/misc/cMessWindowCtrl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00999DA0..009B9A40, 25 functions

#include "mgrr.h"
#include "cMessWindowCtrl.h"

// 00999DA0  FUN_00999da0  size=81  [callgraph]
void __thiscall FUN_00999da0(int param_1,char param_2)

{
  FUN_00ce4d70(5);
  if (param_2 != '\0') {
    if (*(int *)(param_1 + 0xa4) == 0) {
      FUN_00ce4d70(1);
      return;
    }
    FUN_00ce4d70(7);
    return;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    FUN_00ce4d70(0);
    return;
  }
  FUN_00ce4d70(6);
  return;
}

// 00999E10  FUN_00999e10  size=263  [callgraph]
void __fastcall FUN_00999e10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 0x18), iVar2 != 0)) {
    iVar3 = *(int *)(param_1 + 0xa4);
    if (iVar3 == 0) {
      FUN_00d389f0(iVar1,0,0,0,iVar2,0x15,1);
      FUN_00d389f0(*(undefined4 *)(param_1 + 0xb8),1,0,0,*(undefined4 *)(param_1 + 0x18),0x17,1);
    }
    else {
      if (iVar3 == 1) {
        FUN_00d389f0(iVar1,2,0,0,iVar2,0x19,1);
        return;
      }
      if (iVar3 == 2) {
        FUN_00d389f0(iVar1,0,0,0,iVar2,0x1a,1);
        FUN_00d389f0(*(undefined4 *)(param_1 + 0xb8),1,0,0,*(undefined4 *)(param_1 + 0x18),0x1c,1);
        return;
      }
    }
  }
  return;
}

// 00999F40  cMessWindowCtrl::cMessWindowCtrl  size=21  [class]
void __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

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

// 00999FA0  FUN_00999fa0  size=715  [callgraph]
int __fastcall FUN_00999fa0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    if (*(char *)((int)puVar1 + 0xa1) == '\0') break;
    cVar2 = FUN_00d0d3e0(*(undefined4 *)(param_1 + 0xc),0);
    if (cVar2 == '\0') {
      cVar2 = FUN_00d0d3e0(*(undefined4 *)(param_1 + 0xc),1);
      if (cVar2 == '\0') {
        cVar2 = FUN_00cac640(1,0);
        if ((((cVar2 == '\0') && (cVar2 = FUN_00cac640(0x10000,0), cVar2 == '\0')) &&
            (cVar2 = FUN_00cac640(2,0), cVar2 == '\0')) &&
           (cVar2 = FUN_00cac640(0x20000,0), cVar2 == '\0')) {
          cVar2 = FUN_00ce12f0(0);
          if (cVar2 == '\0') {
            cVar2 = FUN_00ce1360(0);
            if ((cVar2 == '\0') && (cVar2 = FUN_00cac960(), cVar2 == '\0')) break;
            bVar3 = false;
            if (*(char *)(param_1 + 0xb) == '\0') {
              if (*(char *)(param_1 + 9) != '\0') {
                *(undefined1 *)(param_1 + 9) = 0;
                goto LAB_0099a168;
              }
              pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
              *pcVar4 = *pcVar4 + '\x01';
              *(undefined1 *)(param_1 + 8) = 10;
              pcVar4 = "core_se_sys_cancel";
            }
            else {
              *(undefined1 *)(param_1 + 9) = 0xff;
              pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
              *pcVar4 = *pcVar4 + '\x01';
              *(undefined1 *)(param_1 + 8) = 0xb;
              pcVar4 = "core_se_sys_cancel";
            }
          }
          else {
            pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
            *pcVar4 = *pcVar4 + '\x01';
            *(undefined1 *)(param_1 + 8) = 10;
            if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(param_1 + 0xb) != '\0'))
            goto LAB_0099a203;
            pcVar4 = "core_se_sys_decide_s";
          }
        }
        else {
          bVar3 = *(char *)(param_1 + 9) == '\0';
          *(bool *)(param_1 + 9) = bVar3;
LAB_0099a168:
          FUN_00999da0(bVar3);
          pcVar4 = "core_se_sys_cursor";
        }
      }
      else {
        if (*(char *)(param_1 + 9) != '\0') {
          *(undefined1 *)(param_1 + 9) = 0;
          FUN_00999da0(0);
          FUN_00e5e050("core_se_sys_cursor",0);
        }
        pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
        *pcVar4 = *pcVar4 + '\x01';
        *(undefined1 *)(param_1 + 8) = 10;
        if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(param_1 + 0xb) != '\0'))
        goto LAB_0099a203;
        pcVar4 = "core_se_sys_decide_s";
      }
    }
    else {
      if (*(char *)(param_1 + 9) != '\x01') {
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_00999da0(1);
        FUN_00e5e050("core_se_sys_cursor",0);
      }
      pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
      *pcVar4 = *pcVar4 + '\x01';
      *(undefined1 *)(param_1 + 8) = 10;
      if ((*(char *)(param_1 + 9) != '\0') || (*(char *)(param_1 + 0xb) != '\0')) goto LAB_0099a203;
      pcVar4 = "core_se_sys_decide_s";
    }
    goto LAB_0099a174;
  case 1:
    if ((*(char *)((int)puVar1 + 0xa1) == '\0') ||
       ((cVar2 = FUN_00ce12f0(0), cVar2 == '\0' &&
        (cVar2 = FUN_00d0d3e0(*(undefined4 *)(param_1 + 0xc),2), cVar2 == '\0')))) break;
    pcVar4 = (char *)(*(int *)(param_1 + 4) + 0xa0);
    *pcVar4 = *pcVar4 + '\x01';
    *(undefined1 *)(param_1 + 8) = 0xb;
LAB_0099a203:
    pcVar4 = "core_se_sys_decide_l";
LAB_0099a174:
    FUN_00e5e050(pcVar4,0);
    break;
  case 10:
    if (*(char *)((int)puVar1 + 0xa2) != '\0') {
      (**(code **)*puVar1)(1);
      *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      return *(char *)(param_1 + 9) + 1;
    }
    break;
  case 0xb:
    if (*(char *)((int)puVar1 + 0xa2) != '\0') {
      (**(code **)*puVar1)(1);
      *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + '\x01';
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 10) = 0;
      return (int)*(char *)(param_1 + 9);
    }
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  return 0;
}

// 0099AE10  cMessWindowCtrl::cMessWindowCtrl  size=282  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

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
    uVar2 = cMessWindowCtrl::cMessWindowCtrl();
    return uVar2;
  }
  return 0;
}

// 0099B020  cMessWindowCtrl::cMessWindowCtrl  size=238  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cCodecMenuParts::vftable;
  iVar1 = 7;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 0099C790  cMessWindowCtrl::cMessWindowCtrl  size=401  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cCodecViewer::vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  iVar1 = 5;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager();
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
  Hw::cTexture::cTexture();
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

// 0099D6D0  cMessWindowCtrl::cMessWindowCtrl  size=654  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  int local_24;
  undefined4 local_14;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
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
    cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 0099E8B0  cMessWindowCtrl::cMessWindowCtrl  size=181  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cConfigMenu::vftable;
  param_1[7] = 0;
  puVar1 = param_1 + 0x28;
  iVar2 = 0x10;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    *puVar1 = cConfigMenuParts::vftable;
    puVar1 = puVar1 + 0xd;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x133] = 0;
  param_1[0x139] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  param_1[0x138] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 1;
  param_1[0x13c] = vftable;
  param_1[0x13d] = 0;
  *(undefined2 *)((int)param_1 + 0x4fa) = 0;
  param_1[0x13f] = 0;
  puVar1 = param_1 + 0x11c;
  iVar2 = 0x17;
  do {
    puVar1[-0x17] = *(undefined4 *)(((int)&DAT_01b779f0 - (int)param_1) + (int)puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}

// 009A20D0  cMessWindowCtrl::cMessWindowCtrl  size=65  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 009A2160  cMessWindowCtrl::cMessWindowCtrl_15  size=114  [class]
undefined4 * cMessWindowCtrl::cMessWindowCtrl_15(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x68,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 009A24F0  cMessWindowCtrl::cMessWindowCtrl  size=65  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 009A2580  cMessWindowCtrl::cMessWindowCtrl_17  size=114  [class]
undefined4 * cMessWindowCtrl::cMessWindowCtrl_17(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x54,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 009A2E80  cMessWindowCtrl::cMessWindowCtrl  size=222  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cMovieViewer::vftable;
  param_1[7] = 0;
  cCustomObjCtrlManager::cCustomObjCtrlManager();
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
    Hw::cTexture::cTexture();
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

// 009A4F20  cMessWindowCtrl::cMessWindowCtrl  size=148  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  undefined4 uVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 009A5C70  cMessWindowCtrl::cMessWindowCtrl  size=262  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cSaveDataLoadMenu::vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 0xe;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 009A6460  cMessWindowCtrl::cMessWindowCtrl  size=125  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager();
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

// 009A74F0  cMessWindowCtrl::cMessWindowCtrl  size=247  [class]
undefined4 * __fastcall cMessWindowCtrl::cMessWindowCtrl(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  *param_1 = cVRMissionMenuParts::vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager();
  iVar2 = 0x22;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x104] = vftable;
  param_1[0x105] = 0;
  *(undefined2 *)((int)param_1 + 0x41a) = 0;
  param_1[0x107] = 0;
  Hw::cTexture::cTexture();
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

// 009AAC10  cMessWindowCtrl::vf04  size=257  [class]
undefined4 __thiscall cMessWindowCtrl::vf04(int param_1,int param_2,int param_3,undefined4 param_4)

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
    iVar1 = cMessWindow::cMessWindow();
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

// 009AAD70  FUN_009aad70  size=91  [callgraph]
void FUN_009aad70(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_01b3922c;
  if (DAT_01b3922c != 0) {
    iVar2 = FUN_00999fa0();
    if (iVar2 == 2) {
      *(undefined4 *)(iVar1 + 0x10) = 2;
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
    if ((*(int *)(iVar1 + 0x10) == 2) || (*(int *)(iVar1 + 0x10) == 1)) {
      DAT_01bea060 = DAT_01bea060 & 0xffffefff;
      DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
      DAT_01bea084 = DAT_01bea084 & 0xffff8fff;
      DAT_01b3922c = 0;
    }
  }
  return;
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
    vf04(0x3e,0,1);
    DAT_01bea060 = DAT_01bea060 | 0x1000;
    DAT_01bea084 = DAT_01bea084 | 0x4000;
    puVar2 = puVar1;
    DAT_01b3922c = puVar1;
  }
  return puVar2;
}

