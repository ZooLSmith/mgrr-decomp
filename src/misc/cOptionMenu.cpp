// src/misc/cOptionMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A8B90..009B8E20, 16 functions

#include "mgrr.h"
#include "cOptionMenu.h"

// 009A8B90  cOptionMenu::~cOptionMenu  size=141  [class]
void __fastcall cOptionMenu::~cOptionMenu(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  FUN_00cfe0f0(0x14);
  param_1[0xcc] = cOptionMenuGraphicParts::vftable;
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  param_1[0xd] = cOptionMenuSystemParts::vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::~cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  param_1[7] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  return;
}

// 009A8C20  FUN_009a8c20  size=68  [between]
int FUN_009a8c20(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x58c,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cOptionMenuGraphicParts::cOptionMenuGraphicParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cOptionMenu";
      FUN_00d29ca0(0x76,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 009A8C70  cOptionMenu::vf0C  size=36  [class]
void __fastcall cOptionMenu::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d131b0(*(int *)(param_1 + 0x18),&DAT_0188eaf0,0xe,0x14);
  }
  FUN_00996d90();
  return;
}

// 009A8CA0  FUN_009a8ca0  size=812  [callgraph]
void __fastcall FUN_009a8ca0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4d0));
  iVar5 = 0;
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 0xfc) - 0.1;
    *(float *)(iVar2 + 0xfc) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(iVar2 + 0xfc) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x4d0),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x518),0);
      *(undefined4 *)(param_1 + 0x568) = 0;
      do {
        uVar3 = (uint)(*(int *)(param_1 + 0x568) == iVar5);
        bVar6 = uVar3 == 0;
        switch(iVar5) {
        case 0:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x354),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x358),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x35c),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x3f4);
          break;
        case 1:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x368),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x36c),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x370);
          break;
        case 2:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x378),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x37c),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x380);
          break;
        case 3:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x388),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38c),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x390);
          break;
        case 4:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x398),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x39c),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x3a0);
          break;
        case 5:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3a8),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3ac),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x3b0);
          break;
        case 6:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3b8),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3bc),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x3c0);
          break;
        case 7:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c8),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3cc),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x3d0);
          break;
        case 8:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3d8),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3dc),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x3e0);
          break;
        case 9:
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 1000),bVar6);
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3ec),bVar6);
          uVar4 = *(undefined4 *)(param_1 + 0x3f0);
          break;
        default:
          goto switchD_009a8d33_default;
        }
        FUN_00ce4ce0(uVar4,bVar6);
switchD_009a8d33_default:
        *(uint *)(param_1 + 0x470 + iVar5 * 4) = uVar3;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      *(undefined4 *)(param_1 + 0x570) = 0;
      *(undefined4 *)(param_1 + 0x544) = 1;
    }
    uVar4 = *(undefined4 *)(iVar2 + 0xfc);
    iVar2 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x510));
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0xfc) = uVar4;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar2 + 0x74) = uVar4;
    *(undefined4 *)(iVar2 + 0x78) = 1;
    if ((*(char *)(param_1 + 0x53d) != '\0') &&
       (iVar2 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x518)), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xfc) = uVar4;
    }
  }
  return;
}

// 009A9000  FUN_009a9000  size=1169  [callgraph]
void __thiscall FUN_009a9000(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char local_60 [32];
  undefined4 local_40;
  char local_3c [60];
  
  builtin_strncpy(local_60,"CORE_MANUAL_01",0xf);
  local_60[0xf] = '\0';
  local_60[0x10] = '\0';
  local_60[0x11] = '\0';
  local_60[0x12] = '\0';
  local_60[0x13] = '\0';
  local_60[0x14] = '\0';
  local_60[0x15] = '\0';
  local_60[0x16] = '\0';
  local_60[0x17] = '\0';
  local_60[0x18] = '\0';
  local_60[0x19] = '\0';
  local_60[0x1a] = '\0';
  local_60[0x1b] = '\0';
  local_60[0x1c] = '\0';
  local_60[0x1d] = '\0';
  local_60[0x1e] = '\0';
  local_60[0x1f] = 0;
  builtin_strncpy(local_3c,"_MANUAL_06",0xb);
  local_40._0_1_ = 'C';
  local_40._1_1_ = 'O';
  local_40._2_1_ = 'R';
  local_40._3_1_ = 'E';
  local_3c[0xb] = '\0';
  local_3c[0xc] = '\0';
  local_3c[0xd] = '\0';
  local_3c[0xe] = '\0';
  local_3c[0xf] = '\0';
  local_3c[0x10] = '\0';
  local_3c[0x11] = '\0';
  local_3c[0x12] = '\0';
  local_3c[0x13] = '\0';
  local_3c[0x14] = '\0';
  local_3c[0x15] = '\0';
  local_3c[0x16] = '\0';
  local_3c[0x17] = '\0';
  local_3c[0x18] = '\0';
  local_3c[0x19] = '\0';
  local_3c[0x1a] = '\0';
  local_3c[0x1b] = 0;
  iVar1 = FUN_009c45f0();
  if ((iVar1 == 8) || (iVar1 = FUN_00d46780(), iVar1 != 0)) {
    pcVar3 = "CORE_CONTROL_29";
LAB_009a9121:
    _strcpy_s(local_3c + 0x1c,0x20,pcVar3);
  }
  else {
    iVar1 = FUN_009c45f0();
    if ((iVar1 != 9) && (iVar1 = FUN_00d467a0(), iVar1 == 0)) {
      pcVar3 = "CORE_MANUAL_02";
      goto LAB_009a9121;
    }
    _strcpy_s(local_3c + 0x1c,0x20,"CORE_CONTROL_32");
    _strcpy_s(local_60,0x20,"CORE_CONTROL_31");
    _strcpy_s((char *)&local_40,0x20,"CORE_CONTROL_33");
  }
  switch(param_2) {
  case 0:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e4),"CORE_MANUAL_03",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e0),local_60,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4ec),"CORE_MANUAL_04",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e8),local_3c + 0x1c,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f0),"CORE_MANUAL_05",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f4),&local_40,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f8),"OPTION_SEL_00",1,0xffffffff);
    pcVar3 = "OPTION_SEL_00";
    goto LAB_009a9402;
  case 1:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e4),"CORE_MANUAL_03",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e0),local_60,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4ec),"CORE_MANUAL_04",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e8),local_3c + 0x1c,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f0),&local_40,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f4),"CORE_MANUAL_05",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f8),"OPTION_SEL_01",1,0xffffffff);
    uVar2 = *(undefined4 *)(param_1 + 0x4fc);
    pcVar3 = "OPTION_SEL_01";
    break;
  case 2:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e4),local_60,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e0),"CORE_MANUAL_03",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4ec),local_3c + 0x1c,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e8),"CORE_MANUAL_04",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f0),"CORE_MANUAL_05",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f4),&local_40,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f8),"OPTION_SEL_02",1,0xffffffff);
    uVar2 = *(undefined4 *)(param_1 + 0x4fc);
    pcVar3 = "OPTION_SEL_02";
    break;
  case 3:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e4),local_60,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e0),"CORE_MANUAL_03",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4ec),local_3c + 0x1c,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4e8),"CORE_MANUAL_04",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f0),&local_40,0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f4),"CORE_MANUAL_05",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x4f8),"OPTION_SEL_03",1,0xffffffff);
    pcVar3 = "OPTION_SEL_03";
LAB_009a9402:
    uVar2 = *(undefined4 *)(param_1 + 0x4fc);
    break;
  default:
    goto switchD_009a9136_default;
  }
  FUN_00cf9770(uVar2,pcVar3,1,0xffffffff);
switchD_009a9136_default:
  iVar1 = FUN_00cacfb0();
  if (((iVar1 == 3) || (iVar1 = FUN_00cacfb0(), iVar1 == 4)) || (iVar1 = FUN_00cacfb0(), iVar1 == 6)
     ) {
    uVar2 = *(undefined4 *)(param_1 + 0x4f4);
    FUN_00cb38e0(uVar2);
    iVar1 = FUN_00cab6b0(uVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x18) = 0xc0400000;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x4f4);
    FUN_00cb38e0(uVar2);
    iVar1 = FUN_00cab6b0(uVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x18) = 0xc0000000;
      return;
    }
  }
  return;
}

// 009A94B0  FUN_009a94b0  size=408  [callgraph]
void __fastcall FUN_009a94b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x544) == 2) {
    if (*(int *)(param_1 + 0x548) == 2) {
      if (*(int *)(param_1 + 0x584) == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4dc),1);
        *(undefined4 *)(param_1 + 0x584) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x584) != 0) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4dc),0);
      *(undefined4 *)(param_1 + 0x584) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x57c);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x580) == *(int *)(param_1 + 0x548)) {
        return;
      }
      FUN_00ce4d40(*(undefined4 *)(param_1 + 0x4d8),0,1);
      *(undefined4 *)(param_1 + 0x57c) = 1;
      *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_1 + 0x548);
      return;
    }
    if (iVar1 == 1) {
      FUN_00996bf0(2,*(undefined4 *)(param_1 + 0x580));
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4d8),1);
      *(undefined4 *)(param_1 + 0x57c) = 2;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x4d8);
  }
  else {
    if (*(int *)(param_1 + 0x544) != 5) {
      return;
    }
    if (*(int *)(param_1 + 0x584) != 0) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x4dc),0);
      *(undefined4 *)(param_1 + 0x584) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x57c);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x580) == *(int *)(param_1 + 0x568)) {
        return;
      }
      FUN_00ce4d40(*(undefined4 *)(param_1 + 0x4d8),0,1);
      *(undefined4 *)(param_1 + 0x57c) = 1;
      *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_1 + 0x568);
      return;
    }
    if (iVar1 == 1) {
      FUN_00997c50(*(undefined4 *)(param_1 + 0x580));
      *(undefined4 *)(param_1 + 0x57c) = 2;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x4d8);
  }
  iVar1 = FUN_00cb24b0(uVar2);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x57c) = 0;
  return;
}

// 009A9650  FUN_009a9650  size=72  [callgraph]
undefined4 __fastcall FUN_009a9650(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x250);
  do {
    if (*piVar2 != piVar2[0xe]) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0xe);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x420);
  while ((iVar1 == 3 || (*piVar2 == piVar2[10]))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    if (9 < iVar1) {
      return 0;
    }
  }
  return 1;
}

// 009A96A0  FUN_009a96a0  size=68  [callgraph]
void FUN_009a96a0(undefined4 param_1)

{
  int iVar1;
  
  FUN_00998010(param_1);
  FUN_00996fd0(param_1);
  FUN_009c6770();
  iVar1 = FUN_00df7fd0();
  FUN_00dda2f0(-(uint)(iVar1 != 0) & DAT_01b77e3c);
  return;
}

// 009A96F0  FUN_009a96f0  size=1068  [callgraph]
void __fastcall FUN_009a96f0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_68 [12];
  int local_38;
  int local_34;
  
  FUN_00996e70();
  uVar2 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00cb25d0(0x29);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00cb25d0(0x2a);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_00cb25d0(0x2b);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_00cb25d0(0x3d);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = FUN_00cb25d0(0x3f);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = FUN_00cb25d0(0x49);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = FUN_00cb25d0(0x50);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  uVar2 = FUN_00cb25d0(0x53);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  uVar2 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  uVar2 = FUN_00cb25d0(0x5d);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  uVar2 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  uVar2 = FUN_00cb25d0(0x1b);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  uVar2 = FUN_00cb25d0(0x1c);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = FUN_00cb25d0(0x1d);
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_00cb25d0(0x24);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  uVar2 = FUN_00cb25d0(0x25);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_00cb25d0(0x26);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = FUN_00cb25d0(0x27);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  uVar2 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  uVar2 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  uVar2 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  uVar2 = FUN_00cb25d0(0x22);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  uVar2 = FUN_00cb25d0(0x23);
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  uVar2 = FUN_00cb25d0(0x2e);
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  uVar2 = FUN_00cb25d0(0x2f);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  uVar2 = FUN_00cb25d0(0x30);
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  uVar2 = FUN_00cb25d0(0x31);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  FUN_00ce4d70(5);
  puVar6 = &DAT_01f20668;
  puVar7 = local_68;
  for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (7 < local_34) {
    uVar3 = FUN_00f99170();
    if ((0xf < uVar3) && (local_38 == 1)) {
      *(undefined4 *)(param_1 + 0x198) = 2;
      goto LAB_009a9a4c;
    }
  }
  if (1 < local_34) {
    uVar3 = FUN_00f99170();
    if ((3 < uVar3) && (local_38 == 1)) {
      *(undefined4 *)(param_1 + 0x198) = 1;
      goto LAB_009a9a4c;
    }
  }
  uVar3 = FUN_00f99170();
  *(uint *)(param_1 + 0x198) = -(uint)(uVar3 < 2) & 3;
LAB_009a9a4c:
  iVar4 = 0;
  do {
    *(uint *)(param_1 + 0x140 + iVar4 * 4) = (uint)(iVar4 == 0);
    FUN_00997290(iVar4,(uint)(iVar4 == 0),1);
    if ((iVar4 == 3) && (*(int *)(param_1 + 0xfc) == 3)) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x5c),PTR_s_OPTION_SEL_53_0188eb8c,0,0xffffffff);
      *(undefined4 *)(param_1 + 0xfc) = 3;
    }
    else {
      FUN_009975b0(iVar4,*(undefined4 *)(param_1 + 0xf0 + iVar4 * 4));
    }
    *(undefined4 *)(param_1 + 0x168 + iVar4 * 4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  fVar1 = (float)*(int *)(param_1 + 0xf0) * 0.1;
  *(float *)(param_1 + 400) = fVar1;
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x30),fVar1);
  *(undefined4 *)(param_1 + 0x194) = 0x3f800000;
  iVar4 = 0;
  cVar5 = '\0';
  do {
    FUN_00ce4d40(*(undefined4 *)(param_1 + 200 + iVar4 * 4),
                 (iVar4 < *(int *)(param_1 + 0xf0)) + '\r',1);
    cVar5 = cVar5 + '\x01';
    iVar4 = (int)cVar5;
  } while (iVar4 < 10);
  DAT_01bea084 = DAT_01bea084 & 0xbfffffff;
  return;
}

// 009A9B20  FUN_009a9b20  size=2358  [callgraph]
void __fastcall FUN_009a9b20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_5;
  undefined4 *local_4;
  
  FUN_00997e70();
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x1c));
  FUN_00cb2240(uVar1);
  uVar1 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x20));
  FUN_00cb2240(uVar1);
  uVar1 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x24));
  FUN_00cb2240(uVar1);
  uVar1 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = FUN_00cb25d0(0x29);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = FUN_00cb25d0(0x2a);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = FUN_00cb25d0(0x2b);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = FUN_00cb25d0(0x49);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar1 = FUN_00cb25d0(0x4a);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = FUN_00cb25d0(0x4b);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  uVar1 = FUN_00cb25d0(0x4c);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = FUN_00cb25d0(0x4d);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = FUN_00cb25d0(0x4e);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar1 = FUN_00cb25d0(0x4f);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  uVar1 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  uVar1 = FUN_00cb25d0(0x3d);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  uVar1 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  uVar1 = FUN_00cb25d0(0x3f);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = FUN_00cb25d0(0x50);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  uVar1 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  uVar1 = FUN_00cb25d0(0x53);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  uVar1 = FUN_00cb25d0(0x54);
  *(undefined4 *)(param_1 + 200) = uVar1;
  uVar1 = FUN_00cb25d0(0x55);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  uVar1 = FUN_00cb25d0(0x56);
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  uVar1 = FUN_00cb25d0(0x57);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = FUN_00cb25d0(0x58);
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  uVar1 = FUN_00cb25d0(0x59);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  uVar1 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  uVar1 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  uVar1 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  uVar1 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  uVar1 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  uVar1 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x114) = uVar1;
  uVar1 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  uVar1 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  uVar1 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 300) = uVar1;
  uVar1 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  uVar1 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  uVar1 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  uVar1 = FUN_00cb25d0(0x49);
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  uVar1 = FUN_00cb25d0(0x4a);
  *(undefined4 *)(param_1 + 0x140) = uVar1;
  uVar1 = FUN_00cb25d0(0x4b);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  uVar1 = FUN_00cb25d0(0x4c);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  uVar1 = FUN_00cb25d0(0x4d);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  uVar1 = FUN_00cb25d0(0x4e);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar1 = FUN_00cb25d0(0x4f);
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  uVar1 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  uVar1 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x164) = uVar1;
  uVar1 = FUN_00cb25d0(0x50);
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  uVar1 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  uVar1 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  uVar1 = FUN_00cb25d0(0x53);
  *(undefined4 *)(param_1 + 0x174) = uVar1;
  uVar1 = FUN_00cb25d0(0x54);
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  uVar1 = FUN_00cb25d0(0x55);
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  uVar1 = FUN_00cb25d0(0x56);
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  uVar1 = FUN_00cb25d0(0x57);
  *(undefined4 *)(param_1 + 0x184) = uVar1;
  uVar1 = FUN_00cb25d0(0x58);
  *(undefined4 *)(param_1 + 0x188) = uVar1;
  uVar1 = FUN_00cb25d0(0x59);
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  uVar1 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 400) = uVar1;
  uVar1 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  uVar1 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  uVar1 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  uVar1 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  uVar1 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  uVar1 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  uVar1 = FUN_00cb25d0(0x5d);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  uVar1 = FUN_00cb25d0(0x5e);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  uVar1 = FUN_00cb25d0(0x5f);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  uVar1 = FUN_00cb25d0(0x60);
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  uVar1 = FUN_00cb25d0(0x61);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  uVar1 = FUN_00cb25d0(0x62);
  *(undefined4 *)(param_1 + 0x1c0) = uVar1;
  uVar1 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x1c4) = uVar1;
  FUN_00ce4d70(5);
  FUN_00ce4d70(5);
  FUN_00ce4d70(5);
  local_4 = (undefined4 *)(param_1 + 0x21c);
  iVar2 = 0;
  do {
    local_4[0x1c] = (uint)(iVar2 == 0);
    FUN_009981b0(iVar2,(uint)(iVar2 == 0),1);
    FUN_009986b0(iVar2,*local_4);
    local_4[0x2a] = 0;
    iVar2 = iVar2 + 1;
    local_4 = local_4 + 1;
  } while (iVar2 < 0xe);
  local_5 = '\0';
  iVar2 = 0;
  do {
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x80 + iVar2 * 4),
                 (iVar2 < *(int *)(param_1 + 0x234)) + '\x03',1);
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0xb8 + iVar2 * 4),
                 (iVar2 < *(int *)(param_1 + 0x238)) + '\x03',1);
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x130 + iVar2 * 4),
                 (iVar2 < *(int *)(param_1 + 0x248)) + '\x03',1);
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x168 + iVar2 * 4),
                 (iVar2 < *(int *)(param_1 + 0x24c)) + '\x03',1);
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x1a0 + iVar2 * 4),
                 (iVar2 < *(int *)(param_1 + 0x250)) + '\x03',1);
    local_5 = local_5 + '\x01';
    iVar2 = (int)local_5;
  } while (iVar2 < 10);
  return;
}

// 009B7440  cOptionMenu::vf00  size=30  [class]
undefined4 __thiscall cOptionMenu::vf00(undefined4 param_1,byte param_2)

{
  ~cOptionMenu();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B7460  cOptionMenu::vf08  size=1019  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cOptionMenu::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x4cc) = uVar2;
  uVar2 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x4d0) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x4d4) = uVar2;
  uVar2 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x4d8) = uVar2;
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x4dc) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x4e0) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x4e4) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x4e8) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x4ec) = uVar2;
  uVar2 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x4f0) = uVar2;
  uVar2 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x4f4) = uVar2;
  uVar2 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x4f8) = uVar2;
  uVar2 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x4fc) = uVar2;
  uVar2 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x500) = uVar2;
  uVar2 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x504) = uVar2;
  uVar2 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x508) = uVar2;
  uVar2 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x50c) = uVar2;
  uVar2 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x510) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x514) = uVar2;
  uVar2 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x518) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x51c) = uVar2;
  uVar2 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x520) = uVar2;
  uVar2 = FUN_00cb25d0(0x5d);
  *(undefined4 *)(param_1 + 0x524) = uVar2;
  uVar2 = FUN_00cb25d0(0x5e);
  *(undefined4 *)(param_1 + 0x528) = uVar2;
  uVar2 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x52c) = uVar2;
  uVar2 = FUN_00cb25d0(0x50);
  *(undefined4 *)(param_1 + 0x530) = uVar2;
  uVar2 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 0x534) = uVar2;
  uVar2 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0x538) = uVar2;
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x4cc));
  FUN_00cb2240(uVar2);
  FUN_009a9b20();
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x4d0));
  FUN_00cb2240(uVar2);
  FUN_009a96f0();
  iVar3 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar3 != 0) {
      uVar2 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar3 + 4) = uVar2;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x52c));
    uVar2 = *puVar4;
    iVar3 = *(int *)(param_1 + 0x2c);
    uVar1 = puVar4[1];
    FUN_0099a440(iVar3 + 0x8c,&DAT_016575ac,"option");
    *(undefined4 *)(iVar3 + 0x10c) = uVar2;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x110) = uVar1;
    *(undefined4 *)(iVar3 + 0x5c) = 1;
    *(undefined4 *)(iVar3 + 0x114) = 0x41700000;
    iVar3 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar3 + 0x78) = 1;
    *(undefined4 *)(iVar3 + 0x74) = 0;
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4d0),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x518),0);
  iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4d0));
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xfc) = 0;
  }
  iVar3 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x518));
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xfc) = 0;
  }
  FUN_00cb2740(*(undefined4 *)(param_1 + 0x574));
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x4d8),"OPTION_MSG_17",0,0xffffffff);
  *(uint *)(param_1 + 0x588) = (uint)DAT_01dc1418;
  FUN_009a9000(*(undefined4 *)(param_1 + 600));
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x4dc),0,1);
  FUN_00cb2600(1);
  FUN_00cb2630(1);
  if (*(char *)(param_1 + 0x53d) != '\0') {
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x124),6,1);
    *(undefined4 *)(param_1 + 0x318) = 1;
  }
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x50c),3,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x524),3,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x528),3,1);
  _DAT_01b39218 = 1;
  *(uint *)(param_1 + 0x588) = (uint)DAT_01dc1418;
  DAT_01b77e3c = 1;
  iVar3 = FUN_00df7fd0();
  FUN_00dda2f0(-(uint)(iVar3 != 0) & DAT_01b77e3c);
  return;
}

// 009B7860  FUN_009b7860  size=478  [callgraph]
void __fastcall FUN_009b7860(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4cc),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x514),1);
  FUN_00cb2900(*(undefined4 *)(param_1 + 0x510),*(undefined4 *)(param_1 + 0x558));
  FUN_00996bf0(2,*(undefined4 *)(param_1 + 0x548));
  puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x52c));
  uVar1 = *puVar4;
  iVar5 = *(int *)(param_1 + 0x2c);
  uVar2 = puVar4[1];
  FUN_0099a440(iVar5 + 0x8c,&DAT_016575ac,"option");
  *(undefined4 *)(iVar5 + 0x10c) = uVar1;
  *(undefined4 *)(iVar5 + 0x118) = 0;
  *(undefined4 *)(iVar5 + 0x5c) = 1;
  *(undefined4 *)(iVar5 + 0x110) = uVar2;
  *(undefined4 *)(iVar5 + 0x114) = 0x41700000;
  iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4cc));
  if (iVar5 != 0) {
    fVar3 = *(float *)(iVar5 + 0xfc) + 0.1;
    *(float *)(iVar5 + 0xfc) = fVar3;
    if (1.0 < fVar3) {
      *(undefined4 *)(iVar5 + 0xfc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x544) = 2;
    }
    uVar1 = *(undefined4 *)(iVar5 + 0xfc);
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4d4));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xfc) = uVar1;
    }
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4d8));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xfc) = uVar1;
    }
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x500));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xfc) = uVar1;
    }
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x508));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xfc) = uVar1;
    }
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x510));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xfc) = uVar1;
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar5 + 0x74) = uVar1;
    *(undefined4 *)(iVar5 + 0x78) = 1;
    if ((*(char *)(param_1 + 0x53d) != '\0') && (*(int *)(param_1 + 0x30) != 0)) {
      FUN_00cb2740(uVar1);
      FUN_00996d90();
      return;
    }
    FUN_00996d90();
  }
  return;
}

// 009B7A40  FUN_009b7a40  size=4530  [callgraph]
void __fastcall FUN_009b7a40(int param_1)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  char *pcVar11;
  undefined4 uVar12;
  int local_c;
  
  iVar4 = FUN_00dda340(0);
  if (iVar4 == 0) {
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x74),6,1);
    *(undefined4 *)(param_1 + 0x304) = 1;
  }
  else {
    FUN_00ce4d40(*(undefined4 *)(param_1 + 0x74),5,1);
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x554);
  if (iVar4 <= iVar4 + 10) {
    do {
      iVar1 = *(int *)(param_1 + 0x550);
      if ((((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 1)) || (iVar1 == 2)) break;
      cVar3 = FUN_00d0d3e0(0x14,iVar4);
      if (cVar3 != '\0') {
        iVar1 = *(int *)(param_1 + 0x548);
        iVar9 = (iVar4 - iVar1) + iVar1;
        if (iVar9 == 0) {
          *(undefined4 *)(param_1 + 0x544) = 3;
        }
        else if (iVar9 == 1) {
          *(undefined4 *)(param_1 + 0x544) = 0xb;
        }
        else if (((iVar1 == iVar9) && (*(int *)(param_1 + 0x2f8 + iVar1 * 4) == 0)) &&
                (FUN_009986b0(iVar1,*(int *)(param_1 + 0x250 + iVar1 * 4) + 1),
                *(int *)(param_1 + 0x548) == 2)) {
          FUN_009a9000(*(undefined4 *)(param_1 + 600));
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4f8),0,3);
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4fc),0,3);
        }
        if (*(int *)(param_1 + 0x548) == iVar9) goto LAB_009b8013;
        iVar5 = *(int *)(param_1 + 0x548);
        iVar6 = 2;
        goto LAB_009b7ba8;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)(param_1 + 0x554) + 10);
  }
  goto LAB_009b802c;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
LAB_009b7ba8:
    if (iVar9 < iVar5) {
      iVar5 = iVar5 + -1;
      if ((iVar5 == 7) || (iVar5 == 10)) {
        fVar2 = *(float *)(param_1 + 0x558) - 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) - 44.0;
      }
LAB_009b7bde:
      *(float *)(param_1 + 0x558) = fVar2;
    }
    else if (iVar5 < iVar9) {
      iVar5 = iVar5 + 1;
      if ((iVar5 == 8) || (iVar5 == 0xb)) {
        fVar2 = *(float *)(param_1 + 0x558) + 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) + 44.0;
      }
      goto LAB_009b7bde;
    }
    if (iVar9 < iVar5) {
      iVar5 = iVar5 + -1;
      if ((iVar5 == 7) || (iVar5 == 10)) {
        fVar2 = *(float *)(param_1 + 0x558) - 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) - 44.0;
      }
LAB_009b7c1a:
      *(float *)(param_1 + 0x558) = fVar2;
    }
    else if (iVar5 < iVar9) {
      iVar5 = iVar5 + 1;
      if ((iVar5 == 8) || (iVar5 == 0xb)) {
        fVar2 = *(float *)(param_1 + 0x558) + 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) + 44.0;
      }
      goto LAB_009b7c1a;
    }
    if (iVar9 < iVar5) {
      iVar5 = iVar5 + -1;
      if ((iVar5 == 7) || (iVar5 == 10)) {
        fVar2 = *(float *)(param_1 + 0x558) - 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) - 44.0;
      }
LAB_009b7c56:
      *(float *)(param_1 + 0x558) = fVar2;
    }
    else if (iVar5 < iVar9) {
      iVar5 = iVar5 + 1;
      if ((iVar5 == 8) || (iVar5 == 0xb)) {
        fVar2 = *(float *)(param_1 + 0x558) + 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) + 44.0;
      }
      goto LAB_009b7c56;
    }
    if (iVar9 < iVar5) {
      iVar5 = iVar5 + -1;
      if ((iVar5 == 7) || (iVar5 == 10)) {
        fVar2 = *(float *)(param_1 + 0x558) - 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) - 44.0;
      }
LAB_009b7c92:
      *(float *)(param_1 + 0x558) = fVar2;
    }
    else if (iVar5 < iVar9) {
      iVar5 = iVar5 + 1;
      if ((iVar5 == 8) || (iVar5 == 0xb)) {
        fVar2 = *(float *)(param_1 + 0x558) + 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) + 44.0;
      }
      goto LAB_009b7c92;
    }
    if (iVar9 < iVar5) {
      iVar5 = iVar5 + -1;
      if ((iVar5 == 7) || (iVar5 == 10)) {
        fVar2 = *(float *)(param_1 + 0x558) - 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) - 44.0;
      }
LAB_009b7cce:
      *(float *)(param_1 + 0x558) = fVar2;
    }
    else if (iVar5 < iVar9) {
      iVar5 = iVar5 + 1;
      if ((iVar5 == 8) || (iVar5 == 0xb)) {
        fVar2 = *(float *)(param_1 + 0x558) + 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) + 44.0;
      }
      goto LAB_009b7cce;
    }
    if (iVar9 < iVar5) {
      iVar5 = iVar5 + -1;
      if ((iVar5 == 7) || (iVar5 == 10)) {
        fVar2 = *(float *)(param_1 + 0x558) - 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) - 44.0;
      }
LAB_009b7d0a:
      *(float *)(param_1 + 0x558) = fVar2;
    }
    else if (iVar5 < iVar9) {
      iVar5 = iVar5 + 1;
      if ((iVar5 == 8) || (iVar5 == 0xb)) {
        fVar2 = *(float *)(param_1 + 0x558) + 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) + 44.0;
      }
      goto LAB_009b7d0a;
    }
    if (iVar9 < iVar5) {
      iVar5 = iVar5 + -1;
      if ((iVar5 == 7) || (iVar5 == 10)) {
        fVar2 = *(float *)(param_1 + 0x558) - 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) - 44.0;
      }
LAB_009b7d46:
      *(float *)(param_1 + 0x558) = fVar2;
    }
    else if (iVar5 < iVar9) {
      iVar5 = iVar5 + 1;
      if ((iVar5 == 8) || (iVar5 == 0xb)) {
        fVar2 = *(float *)(param_1 + 0x558) + 50.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0x558) + 44.0;
      }
      goto LAB_009b7d46;
    }
  }
  *(int *)(param_1 + 0x548) = iVar5;
  FUN_00cb2900(*(undefined4 *)(param_1 + 0x510),*(undefined4 *)(param_1 + 0x558));
  local_c = 0;
  do {
    uVar7 = (uint)(*(int *)(param_1 + 0x548) == local_c);
    if (*(uint *)(param_1 + 0x2c0 + local_c * 4) != uVar7) {
      bVar10 = uVar7 == 0;
      switch(local_c) {
      case 0:
        uVar8 = *(undefined4 *)(param_1 + 0x118);
        break;
      case 1:
        uVar8 = *(undefined4 *)(param_1 + 0x120);
        break;
      case 2:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x68),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x6c),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x70);
        break;
      case 3:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x78),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x7c),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x80);
        break;
      case 4:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x88),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x8c),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x90);
        break;
      case 5:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x98),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x9c),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0xa0);
        break;
      case 6:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xa8),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xac),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0xb0);
        break;
      case 7:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xe0),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xe4),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0xe8);
        break;
      case 8:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x128),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 300),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x130);
        break;
      case 9:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x138),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x13c),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x140);
        break;
      case 10:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x148),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x14c),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x150);
        break;
      case 0xb:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x158),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x15c),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x160);
        break;
      case 0xc:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 400),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x194),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x198);
        break;
      case 0xd:
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c8),bVar10);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1cc),bVar10);
        uVar8 = *(undefined4 *)(param_1 + 0x1d0);
        break;
      default:
        goto switchD_009b7db0_default;
      }
      FUN_00ce4ce0(uVar8,bVar10);
switchD_009b7db0_default:
      *(uint *)(param_1 + 0x2c0 + local_c * 4) = uVar7;
    }
    local_c = local_c + 1;
  } while (local_c < 0xe);
LAB_009b8013:
  *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + (iVar4 - iVar1);
  FUN_00e5e050("core_se_sys_decide_s",0);
LAB_009b802c:
  iVar4 = *(int *)(param_1 + 0x550);
  if (iVar4 == 3) {
    iVar4 = FUN_00ce4dd0(0xd);
    if (iVar4 == 0) goto LAB_009b8bc2;
    FUN_00ce4d70(0xb);
    if ((*(int *)(param_1 + 0x548) == 7) || (*(int *)(param_1 + 0x548) == 10)) {
      fVar2 = 50.0;
    }
    else {
      fVar2 = 44.0;
    }
    uVar12 = *(undefined4 *)(param_1 + 0x510);
    *(float *)(param_1 + 0x558) = *(float *)(param_1 + 0x558) - fVar2;
    uVar8 = *(undefined4 *)(param_1 + 0x558);
  }
  else {
    if (iVar4 != 4) {
      if (iVar4 == 1) {
        iVar4 = FUN_00ce4dd0(5);
        if (iVar4 != 0) {
          FUN_00ce4d70(0xe);
          iVar4 = FUN_00fdbc60();
          if (iVar4 % 0x2c == 0) {
            *(float *)(param_1 + 0x55c) = *(float *)(param_1 + 0x55c) + 44.0;
          }
          else {
            *(float *)(param_1 + 0x55c) = *(float *)(param_1 + 0x55c) + 50.0;
            fVar2 = *(float *)(param_1 + 0x558) + 6.0;
            *(float *)(param_1 + 0x558) = fVar2;
            FUN_00cb2900(*(undefined4 *)(param_1 + 0x510),fVar2);
          }
          FUN_00cb2900(*(undefined4 *)(param_1 + 0x4cc),*(undefined4 *)(param_1 + 0x55c));
          FUN_00996d90();
          if (*(int *)(param_1 + 0x548) == 0) {
            *(undefined4 *)(param_1 + 0x560) = 0;
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x504),0xf);
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x51c),0xf);
            FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x520),0xf);
            *(undefined4 *)(param_1 + 0x550) = 0;
          }
          else {
            if (*(int *)(param_1 + 0x564) == 0) {
              *(undefined4 *)(param_1 + 0x564) = 1;
              FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x50c),3);
              FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x524),3);
              FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x528),3);
            }
            *(undefined4 *)(param_1 + 0x550) = 0;
          }
        }
        goto LAB_009b8bc2;
      }
      if (iVar4 != 2) {
        cVar3 = FUN_00ce12f0(0);
        if (cVar3 == '\0') {
          cVar3 = FUN_00ce1360(0);
          if ((cVar3 == '\0') && (cVar3 = FUN_00cac960(), cVar3 == '\0')) {
            cVar3 = FUN_00cac7e0(8,0);
            if ((cVar3 == '\0') &&
               ((cVar3 = FUN_00cac7e0(0x40000,0), cVar3 == '\0' &&
                (cVar3 = FUN_00cac9c0(0), cVar3 == '\0')))) {
              cVar3 = FUN_00cac7e0(4,0);
              if ((cVar3 == '\0') &&
                 ((cVar3 = FUN_00cac7e0(0x80000,0), cVar3 == '\0' &&
                  (cVar3 = FUN_00cac9c0(1), cVar3 == '\0')))) {
                cVar3 = FUN_00cac7e0(1,0);
                if (cVar3 == '\0') {
                  cVar3 = FUN_00cac7e0(2,0);
                  if ((((cVar3 != '\0') && (iVar4 = *(int *)(param_1 + 0x548), iVar4 != 0)) &&
                      (iVar4 != 1)) &&
                     ((*(int *)(param_1 + 0x2f8 + iVar4 * 4) == 0 &&
                      (FUN_009986b0(iVar4,*(int *)(param_1 + 0x250 + iVar4 * 4) + 1),
                      *(int *)(param_1 + 0x548) == 2)))) {
                    FUN_009a9000(*(undefined4 *)(param_1 + 600));
                    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4f8),0,3);
                    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4fc),0,3);
                  }
                }
                else {
                  iVar4 = *(int *)(param_1 + 0x548);
                  if (((iVar4 != 0) && (iVar4 != 1)) &&
                     ((*(int *)(param_1 + 0x2f8 + iVar4 * 4) == 0 &&
                      (FUN_009986b0(iVar4,*(int *)(param_1 + 0x250 + iVar4 * 4) + -1),
                      *(int *)(param_1 + 0x548) == 2)))) {
                    FUN_009a9000(*(undefined4 *)(param_1 + 600));
                    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4f8),0,3);
                    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x4fc),0,3);
                  }
                }
                goto LAB_009b8bc2;
              }
              if (0xc < *(int *)(param_1 + 0x548)) goto LAB_009b8bc2;
              iVar4 = *(int *)(param_1 + 0x548) + 1;
              *(int *)(param_1 + 0x548) = iVar4;
              if (*(int *)(param_1 + 0x54c) < 10) {
                if (0xd < iVar4) {
                  *(undefined4 *)(param_1 + 0x548) = 0xd;
                }
                *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + 1;
                FUN_00ce4d70(0xc);
                *(undefined4 *)(param_1 + 0x550) = 4;
              }
              else {
                if (0xd < iVar4) {
                  *(undefined4 *)(param_1 + 0x548) = 0xd;
                }
                *(undefined4 *)(param_1 + 0x550) = 2;
                FUN_00ce4d70(4);
                FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x508),2);
                *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x554) + 1;
              }
              local_c = 0;
              do {
                uVar7 = (uint)(*(int *)(param_1 + 0x548) == local_c);
                if (*(uint *)(param_1 + 0x2c0 + local_c * 4) != uVar7) {
                  bVar10 = uVar7 == 0;
                  switch(local_c) {
                  case 0:
                    uVar8 = *(undefined4 *)(param_1 + 0x118);
                    break;
                  case 1:
                    uVar8 = *(undefined4 *)(param_1 + 0x120);
                    break;
                  case 2:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x68),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x6c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x70);
                    break;
                  case 3:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x78),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x7c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x80);
                    break;
                  case 4:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x88),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x8c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x90);
                    break;
                  case 5:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x98),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x9c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0xa0);
                    break;
                  case 6:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xa8),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xac),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0xb0);
                    break;
                  case 7:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xe0),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xe4),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0xe8);
                    break;
                  case 8:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x128),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 300),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x130);
                    break;
                  case 9:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x138),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x13c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x140);
                    break;
                  case 10:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x148),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x14c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x150);
                    break;
                  case 0xb:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x158),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x15c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x160);
                    break;
                  case 0xc:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 400),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x194),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x198);
                    break;
                  case 0xd:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c8),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1cc),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x1d0);
                    break;
                  default:
                    goto switchD_009b85f0_default;
                  }
                  FUN_00ce4ce0(uVar8,bVar10);
switchD_009b85f0_default:
                  *(uint *)(param_1 + 0x2c0 + local_c * 4) = uVar7;
                }
                local_c = local_c + 1;
              } while (local_c < 0xe);
              pcVar11 = "core_se_sys_cursor";
            }
            else {
              if (*(int *)(param_1 + 0x548) < 1) goto LAB_009b8bc2;
              iVar4 = *(int *)(param_1 + 0x548) + -1;
              *(int *)(param_1 + 0x548) = iVar4;
              if (*(int *)(param_1 + 0x54c) < 1) {
                if (iVar4 < 0) {
                  *(undefined4 *)(param_1 + 0x548) = 0;
                }
                *(undefined4 *)(param_1 + 0x550) = 1;
                FUN_00ce4d70(5);
                FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x500),2);
                *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x554) + -1;
              }
              else {
                if (iVar4 < 0) {
                  *(undefined4 *)(param_1 + 0x548) = 0;
                }
                *(int *)(param_1 + 0x54c) = *(int *)(param_1 + 0x54c) + -1;
                FUN_00ce4d70(0xd);
                *(undefined4 *)(param_1 + 0x550) = 3;
              }
              local_c = 0;
              do {
                uVar7 = (uint)(*(int *)(param_1 + 0x548) == local_c);
                if (*(uint *)(param_1 + 0x2c0 + local_c * 4) != uVar7) {
                  bVar10 = uVar7 == 0;
                  switch(local_c) {
                  case 0:
                    uVar8 = *(undefined4 *)(param_1 + 0x118);
                    break;
                  case 1:
                    uVar8 = *(undefined4 *)(param_1 + 0x120);
                    break;
                  case 2:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x68),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x6c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x70);
                    break;
                  case 3:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x78),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x7c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x80);
                    break;
                  case 4:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x88),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x8c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x90);
                    break;
                  case 5:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x98),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x9c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0xa0);
                    break;
                  case 6:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xa8),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xac),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0xb0);
                    break;
                  case 7:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xe0),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xe4),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0xe8);
                    break;
                  case 8:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x128),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 300),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x130);
                    break;
                  case 9:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x138),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x13c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x140);
                    break;
                  case 10:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x148),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x14c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x150);
                    break;
                  case 0xb:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x158),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x15c),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x160);
                    break;
                  case 0xc:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 400),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x194),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x198);
                    break;
                  case 0xd:
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c8),bVar10);
                    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1cc),bVar10);
                    uVar8 = *(undefined4 *)(param_1 + 0x1d0);
                    break;
                  default:
                    goto switchD_009b8910_default;
                  }
                  FUN_00ce4ce0(uVar8,bVar10);
switchD_009b8910_default:
                  *(uint *)(param_1 + 0x2c0 + local_c * 4) = uVar7;
                }
                local_c = local_c + 1;
              } while (local_c < 0xe);
              pcVar11 = "core_se_sys_cursor";
            }
          }
          else {
            iVar4 = FUN_009a9650();
            if (iVar4 == 0) {
              FUN_009a96a0(0);
              *(undefined4 *)(param_1 + 0x544) = 0xe;
            }
            else {
              (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0,0,1);
              *(undefined4 *)(param_1 + 0x544) = 0xc;
            }
            pcVar11 = "core_se_sys_cancel";
          }
        }
        else if (*(int *)(param_1 + 0x548) == 0) {
          *(undefined4 *)(param_1 + 0x540) = 1;
          *(undefined4 *)(param_1 + 0x544) = 3;
          pcVar11 = "core_se_sys_decide_s";
        }
        else {
          if (*(int *)(param_1 + 0x548) == 1) {
            *(undefined4 *)(param_1 + 0x544) = 0xb;
          }
          pcVar11 = "core_se_sys_decide_s";
        }
        FUN_00e5e050(pcVar11,0);
        goto LAB_009b8bc2;
      }
      iVar4 = FUN_00ce4dd0(4);
      if (iVar4 == 0) goto LAB_009b8bc2;
      FUN_00ce4d70(0xe);
      if (*(int *)(param_1 + 0x548) == 0xb) {
        fVar2 = 50.0;
      }
      else {
        fVar2 = 44.0;
      }
      *(float *)(param_1 + 0x55c) = *(float *)(param_1 + 0x55c) - fVar2;
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x4cc),*(undefined4 *)(param_1 + 0x55c));
      FUN_00996d90();
      if (*(int *)(param_1 + 0x548) == 0xd) {
        *(undefined4 *)(param_1 + 0x564) = 0;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x50c),0xf);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x524),0xf);
        uVar8 = *(undefined4 *)(param_1 + 0x528);
        uVar12 = 0xf;
LAB_009b8310:
        FUN_00ce4ce0(uVar8,uVar12);
      }
      else if (*(int *)(param_1 + 0x560) == 0) {
        *(undefined4 *)(param_1 + 0x560) = 1;
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x504),3);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x51c),3);
        uVar8 = *(undefined4 *)(param_1 + 0x520);
        uVar12 = 3;
        goto LAB_009b8310;
      }
      *(undefined4 *)(param_1 + 0x550) = 0;
      goto LAB_009b8bc2;
    }
    iVar4 = FUN_00ce4dd0(0xc);
    if (iVar4 == 0) goto LAB_009b8bc2;
    FUN_00ce4d70(0xb);
    if ((*(int *)(param_1 + 0x548) == 8) || (*(int *)(param_1 + 0x548) == 0xb)) {
      fVar2 = 50.0;
    }
    else {
      fVar2 = 44.0;
    }
    uVar12 = *(undefined4 *)(param_1 + 0x510);
    *(float *)(param_1 + 0x558) = *(float *)(param_1 + 0x558) + fVar2;
    uVar8 = *(undefined4 *)(param_1 + 0x558);
  }
  FUN_00cb2900(uVar12,uVar8);
  *(undefined4 *)(param_1 + 0x550) = 0;
LAB_009b8bc2:
  FUN_009a94b0();
  if ((*(uint *)(param_1 + 0x588) != (uint)DAT_01dc1418) &&
     ((*(int *)(param_1 + 0x580) == 4 || (*(int *)(param_1 + 0x580) == 5)))) {
    FUN_00996bf0(2,*(undefined4 *)(param_1 + 0x548));
  }
  return;
}

// 009B8CB0  FUN_009b8cb0  size=367  [callgraph]
void __fastcall FUN_009b8cb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x4d0),1);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x518),1);
  FUN_00cb2900(*(undefined4 *)(param_1 + 0x510),*(undefined4 *)(param_1 + 0x570));
  FUN_00997c50(*(undefined4 *)(param_1 + 0x568));
  puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x52c));
  uVar1 = *puVar4;
  iVar5 = *(int *)(param_1 + 0x2c);
  uVar2 = puVar4[1];
  FUN_0099a440(iVar5 + 0x8c,&DAT_016575ac,"option_graphic");
  *(undefined4 *)(iVar5 + 0x10c) = uVar1;
  *(undefined4 *)(iVar5 + 0x118) = 0;
  *(undefined4 *)(iVar5 + 0x5c) = 1;
  *(undefined4 *)(iVar5 + 0x110) = uVar2;
  *(undefined4 *)(iVar5 + 0x114) = 0x41700000;
  iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x4d0));
  if (iVar5 != 0) {
    fVar3 = *(float *)(iVar5 + 0xfc) + 0.1;
    *(float *)(iVar5 + 0xfc) = fVar3;
    if (1.0 < fVar3) {
      *(undefined4 *)(iVar5 + 0xfc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x544) = 5;
    }
    uVar1 = *(undefined4 *)(iVar5 + 0xfc);
    iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x510));
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xfc) = uVar1;
    }
    iVar5 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar5 + 0x74) = uVar1;
    *(undefined4 *)(iVar5 + 0x78) = 1;
    if ((*(char *)(param_1 + 0x53d) != '\0') &&
       (iVar5 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x518)), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xfc) = 0x3f800000;
    }
    FUN_00996e00();
  }
  return;
}

// 009B8E20  FUN_009b8e20  size=2969  [callgraph]
/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_009b8e20(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  float local_78;
  float local_74;
  undefined4 local_70 [13];
  float local_3c;
  
  cVar5 = '\0';
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x56c);
    if ((((iVar3 == 3) || (iVar3 == 4)) || (iVar3 == 1)) || (iVar3 == 2)) goto LAB_009b9511;
    cVar2 = FUN_00d0d3e0(0x14,(int)cVar5);
    if (cVar2 != '\0') break;
    cVar5 = cVar5 + '\x01';
    if ('\t' < cVar5) goto LAB_009b9511;
  }
  iVar3 = *(int *)(param_1 + 0x568);
  iVar4 = (int)cVar5;
  if (iVar3 == iVar4) {
    if (*(int *)(param_1 + 0x498 + iVar3 * 4) != 0) goto LAB_009b9500;
    FUN_009975b0(iVar3,*(int *)(param_1 + 0x420 + iVar3 * 4) + 1);
    if (*(int *)(param_1 + 0x568) != 3) {
      if (*(int *)(param_1 + 0x568) - 4U < 6) {
        FUN_00997bd0();
      }
      goto LAB_009b92a5;
    }
    iVar3 = *(int *)(param_1 + 0x42c);
    if (iVar3 == 0) {
      puVar6 = &DAT_01f20668;
      puVar7 = local_70;
      for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x39c),PTR_s_OPTION_SEL_21_0188eb90,0,0xffffffff);
      if ((*(int *)(param_1 + 0x430) != 0) &&
         (DAT_01bea084 = DAT_01bea084 | 0x20, *(int *)(param_1 + 0x430) != 0)) {
        FUN_00e5e050("core_se_sys_cursor",0);
      }
      *(undefined4 *)(param_1 + 0x430) = 0;
      iVar3 = 1;
      uVar9 = FUN_00f99170();
      switch(uVar9) {
      case 1:
        iVar3 = 0;
      }
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x3ac),(&PTR_s_OPTION_SEL_21_0188eba0)[iVar3],0,
                   0xffffffff);
      if (*(int *)(param_1 + 0x434) != iVar3) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(iVar3) {
        case 0:
          uVar9 = 1;
          break;
        case 1:
          uVar9 = 2;
          break;
        case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
          uVar9 = 4;
          break;
        case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
          uVar9 = 8;
          break;
        case 4:
                    /* WARNING: This code block may not be properly labeled as switch case */
          uVar9 = 0x10;
          break;
        default:
          goto switchD_009b8fa6_default;
        }
        FUN_00a28a50(uVar9);
switchD_009b8fa6_default:
        if (*(int *)(param_1 + 0x434) != iVar3) {
          FUN_00e5e050("core_se_sys_cursor",0);
        }
      }
      *(int *)(param_1 + 0x434) = iVar3;
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x3bc),PTR_s_OPTION_SEL_21_0188ebb8,0,0xffffffff);
      if (*(int *)(param_1 + 0x438) != 1) {
        FUN_00e5e050("core_se_sys_cursor",0);
      }
      *(undefined4 *)(param_1 + 0x438) = 1;
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x3cc),PTR_s_OPTION_SEL_44_0188ebc0,0,0xffffffff);
      if (*(int *)(param_1 + 0x43c) != 1) {
        DAT_01bea084 = DAT_01bea084 | 0x80;
        FUN_0098b0d0(0x39);
        if (*(int *)(param_1 + 0x43c) != 1) {
          FUN_00e5e050("core_se_sys_cursor",0);
        }
      }
      *(undefined4 *)(param_1 + 0x43c) = 1;
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x3dc),PTR_s_OPTION_SEL_44_0188ebcc,0,0xffffffff);
      if (*(int *)(param_1 + 0x440) != 1) {
        FUN_00e5e050("core_se_sys_cursor",0);
      }
      *(undefined4 *)(param_1 + 0x440) = 1;
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x3ec),PTR_s_OPTION_SEL_43_0188ebd4,0,0xffffffff);
      if (*(int *)(param_1 + 0x444) != 0) {
        FUN_00e5e050("core_se_sys_cursor",0);
      }
      *(undefined4 *)(param_1 + 0x444) = 0;
    }
    else {
      if (iVar3 == 1) {
        puVar6 = &DAT_01f20668;
        puVar7 = local_70;
        for (iVar3 = 0x1a; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        local_78 = 1.4013e-45;
        if (local_3c == 0.0) {
          local_78 = local_3c;
        }
        fVar1 = local_78;
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x39c),(&PTR_s_OPTION_SEL_21_0188eb90)[(int)local_78]
                     ,0,0xffffffff);
        if (*(float *)(param_1 + 0x430) != fVar1) {
          switch(fVar1) {
          case 0.0:
            DAT_01bea084 = DAT_01bea084 | 0x20;
            break;
          case 1.4013e-45:
            DAT_01bea084 = DAT_01bea084 | 0x10;
            break;
          case 2.8026e-45:
            DAT_01bea084 = DAT_01bea084 | 8;
            break;
          case 4.2039e-45:
            DAT_01bea084 = DAT_01bea084 | 4;
          }
          if (*(float *)(param_1 + 0x430) != fVar1) {
            FUN_00e5e050("core_se_sys_cursor",0);
          }
        }
        *(float *)(param_1 + 0x430) = fVar1;
        iVar3 = 2;
        uVar9 = FUN_00f99170();
        switch(uVar9) {
        case 1:
        case 2:
          iVar3 = 0;
        }
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x3ac),(&PTR_s_OPTION_SEL_21_0188eba0)[iVar3],0,
                     0xffffffff);
        if (*(int *)(param_1 + 0x434) != iVar3) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(iVar3) {
          case 0:
            uVar9 = 1;
            break;
          case 2:
            uVar9 = 4;
            break;
          case 4:
                    /* WARNING: This code block may not be properly labeled as switch case */
            uVar9 = 0x10;
            break;
          default:
            goto switchD_009b91d5_default;
          }
          FUN_00a28a50(uVar9);
switchD_009b91d5_default:
          if (*(int *)(param_1 + 0x434) != iVar3) {
            FUN_00e5e050("core_se_sys_cursor",0);
          }
        }
        *(int *)(param_1 + 0x434) = iVar3;
        FUN_009975b0(6,0);
        FUN_009975b0(7,1);
        FUN_009975b0(8,1);
        uVar9 = 1;
      }
      else {
        if (iVar3 != 2) goto LAB_009b92a5;
        FUN_009975b0(4,3);
        FUN_009975b0(5,4);
        FUN_009975b0(6,0);
        FUN_009975b0(7,2);
        FUN_009975b0(8,2);
        uVar9 = 2;
      }
      FUN_009975b0(9,uVar9);
    }
LAB_009b92a5:
    if (((*(char *)(param_1 + 0x53d) != '\0') && (iVar3 = *(int *)(param_1 + 0x568), -1 < iVar3)) &&
       ((iVar3 < 6 || (iVar3 == 7)))) {
      *(undefined4 *)(param_1 + 0x540) = 1;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      *(int *)(param_1 + 0x568) = iVar3 + -1;
      *(float *)(param_1 + 0x570) = *(float *)(param_1 + 0x570) - 44.0;
    }
    else if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x568) = iVar3 + 1;
      *(float *)(param_1 + 0x570) = *(float *)(param_1 + 0x570) + 44.0;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b934d:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b934d;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b9379:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b9379;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b93a5:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b93a5;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b93d1:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b93d1;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b93fd:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b93fd;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b9429:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b9429;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b9455:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b9455;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      iVar3 = iVar3 + -1;
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
LAB_009b9481:
      *(float *)(param_1 + 0x570) = fVar1;
      *(int *)(param_1 + 0x568) = iVar3;
    }
    else if (iVar3 < iVar4) {
      iVar3 = iVar3 + 1;
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      goto LAB_009b9481;
    }
    iVar3 = *(int *)(param_1 + 0x568);
    if (iVar4 < iVar3) {
      *(int *)(param_1 + 0x568) = iVar3 + -1;
      *(float *)(param_1 + 0x570) = *(float *)(param_1 + 0x570) - 44.0;
    }
    else if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x568) = iVar3 + 1;
      *(float *)(param_1 + 0x570) = *(float *)(param_1 + 0x570) + 44.0;
    }
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x510),*(undefined4 *)(param_1 + 0x570));
    iVar3 = 0;
    do {
      FUN_00997290(iVar3,*(int *)(param_1 + 0x568) == iVar3,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
  }
LAB_009b9500:
  FUN_00e5e050("core_se_sys_decide_s",0);
LAB_009b9511:
  if (*(int *)(param_1 + 0x56c) == 3) {
    iVar3 = FUN_00ce4dd0(0xd);
    if (iVar3 != 0) {
      FUN_00ce4d70(0xb);
      fVar1 = *(float *)(param_1 + 0x570) - 44.0;
      *(float *)(param_1 + 0x570) = fVar1;
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x510),fVar1);
      *(undefined4 *)(param_1 + 0x56c) = 0;
    }
    goto LAB_009b9911;
  }
  if (*(int *)(param_1 + 0x56c) == 4) {
    iVar3 = FUN_00ce4dd0(0xc);
    if (iVar3 != 0) {
      FUN_00ce4d70(0xb);
      fVar1 = *(float *)(param_1 + 0x570) + 44.0;
      *(float *)(param_1 + 0x570) = fVar1;
      FUN_00cb2900(*(undefined4 *)(param_1 + 0x510),fVar1);
      *(undefined4 *)(param_1 + 0x56c) = 0;
    }
    goto LAB_009b9911;
  }
  cVar5 = FUN_00ce1360(0);
  if ((cVar5 == '\0') && (cVar5 = FUN_00cac960(), cVar5 == '\0')) {
    cVar5 = FUN_00cac7e0(8,0);
    if (((cVar5 == '\0') && (cVar5 = FUN_00cac7e0(0x40000,0), cVar5 == '\0')) &&
       (cVar5 = FUN_00cac9c0(0), cVar5 == '\0')) {
      cVar5 = FUN_00cac7e0(4,0);
      if (((cVar5 == '\0') && (cVar5 = FUN_00cac7e0(0x80000,0), cVar5 == '\0')) &&
         (cVar5 = FUN_00cac9c0(1), cVar5 == '\0')) {
        cVar5 = FUN_00cac7e0(1,0);
        if (cVar5 == '\0') {
          cVar5 = FUN_00cac7e0(2,0);
          if ((cVar5 == '\0') ||
             (iVar3 = *(int *)(param_1 + 0x568), *(int *)(param_1 + 0x498 + iVar3 * 4) != 0))
          goto LAB_009b9911;
          iVar4 = *(int *)(param_1 + 0x420 + iVar3 * 4) + 1;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x568);
          if (*(int *)(param_1 + 0x498 + iVar3 * 4) != 0) goto LAB_009b9911;
          iVar4 = *(int *)(param_1 + 0x420 + iVar3 * 4) + -1;
        }
        FUN_009975b0(iVar3,iVar4);
        if (*(int *)(param_1 + 0x568) == 3) {
          iVar3 = *(int *)(param_1 + 0x42c);
          if (iVar3 == 0) {
            FUN_009975b0(4,0);
            FUN_009975b0(5,1);
            FUN_009975b0(6,1);
            FUN_009975b0(7,1);
            FUN_009975b0(8,1);
            uVar9 = 0;
          }
          else if (iVar3 == 1) {
            FUN_009975b0(4,1);
            FUN_009975b0(5,2);
            FUN_009975b0(6,0);
            FUN_009975b0(7,1);
            FUN_009975b0(8,1);
            uVar9 = 1;
          }
          else {
            if (iVar3 != 2) goto LAB_009b97f7;
            FUN_009975b0(4,3);
            FUN_009975b0(5,4);
            FUN_009975b0(6,0);
            FUN_009975b0(7,2);
            FUN_009975b0(8,2);
            uVar9 = 2;
          }
          FUN_009975b0(9,uVar9);
        }
        else if (*(int *)(param_1 + 0x568) - 4U < 6) {
          FUN_00997bd0();
        }
LAB_009b97f7:
        if (((*(char *)(param_1 + 0x53d) != '\0') && (iVar3 = *(int *)(param_1 + 0x568), -1 < iVar3)
            ) && ((iVar3 < 6 || (iVar3 == 7)))) {
          *(undefined4 *)(param_1 + 0x540) = 1;
        }
        goto LAB_009b9911;
      }
      if (8 < *(int *)(param_1 + 0x568)) goto LAB_009b9911;
      iVar3 = *(int *)(param_1 + 0x568) + 1;
      *(int *)(param_1 + 0x568) = iVar3;
      if (9 < iVar3) {
        *(undefined4 *)(param_1 + 0x568) = 9;
      }
      FUN_00ce4d70(0xc);
      *(undefined4 *)(param_1 + 0x56c) = 4;
      iVar3 = 0;
      do {
        FUN_00997290(iVar3,*(int *)(param_1 + 0x568) == iVar3,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
      pcVar8 = "core_se_sys_cursor";
    }
    else {
      if (*(int *)(param_1 + 0x568) < 1) goto LAB_009b9911;
      iVar3 = *(int *)(param_1 + 0x568) + -1;
      *(int *)(param_1 + 0x568) = iVar3;
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x568) = 0;
      }
      FUN_00ce4d70(0xd);
      *(undefined4 *)(param_1 + 0x56c) = 3;
      iVar3 = 0;
      do {
        FUN_00997290(iVar3,*(int *)(param_1 + 0x568) == iVar3,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
      pcVar8 = "core_se_sys_cursor";
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x544) = 6;
    pcVar8 = "core_se_sys_cancel";
  }
  FUN_00e5e050(pcVar8,0);
LAB_009b9911:
  FUN_00997da0(&local_78);
  local_78 = local_78 + 13.0;
  local_74 = local_74 - 3.0;
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x530),local_78);
  FUN_00cb2c20(*(undefined4 *)(param_1 + 0x530),local_74);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x534),local_78);
  FUN_00cb2c20(*(undefined4 *)(param_1 + 0x534),local_74);
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x538),local_78);
  FUN_00cb2c20(*(undefined4 *)(param_1 + 0x538),local_74);
  FUN_009a94b0();
  return;
}

