// src/misc/cComboListMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098CFF0..009BA4A0, 13 functions

#include "types.h"

// 0098CFF0  cComboListMenu::cComboListMenu  size=270  [class]
undefined4 * __fastcall cComboListMenu::cComboListMenu(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint *puVar4;
  int iVar5;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  iVar5 = 8;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  param_1[0x93] = 0;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0xffffffff;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0x35;
  param_1[0x9a] = 1;
  param_1[0x9b] = 0;
  param_1[0x9c] = 1;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0xffffffff;
  param_1[0xe2] = 0;
  Hw::cTexture::cTexture_6();
  puVar2 = param_1 + 0x103;
  iVar5 = 0x37;
  do {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0;
    puVar2[3] = 0xffffffff;
    puVar2 = puVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  pcVar3 = &DAT_01b73d00;
  puVar4 = param_1 + 0xef;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 0x20;
    *puVar4 = (uint)(cVar1 == '\x03');
    puVar4 = puVar4 + 1;
  } while ((int)pcVar3 < 0x1b73ee0);
  return param_1;
}

// 0098D100  cComboListMenu::~cComboListMenu  size=157  [class]
void __fastcall cComboListMenu::~cComboListMenu(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xa5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa5])(1);
    param_1[0xa5] = 0;
  }
  if ((undefined4 *)param_1[0xa6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa6])(1);
    param_1[0xa6] = 0;
  }
  if ((undefined4 *)param_1[0xa4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa4])(1);
    param_1[0xa4] = 0;
  }
  FUN_00e9d6a0(param_1[0xe2]);
  FUN_00cfe0f0(8);
  Hw::cTexture::cTexture_5();
  iVar1 = 8;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 0098D1A0  FUN_0098d1a0  size=68  [between]
int FUN_0098d1a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x790,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cComboListMenu::cComboListMenu();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cComboListMenu";
      FUN_00d29ca0(100,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 0098D1F0  cComboListMenu::vf0C  size=83  [class]
void __fastcall cComboListMenu::vf0C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar2 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x28);
    do {
      uVar5 = 1;
      uVar4 = 0x60;
      uVar1 = FUN_00cb3300(*puVar3);
      FUN_00d389f0(8,iVar2,0,0,uVar1,uVar4,uVar5);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 9);
  }
  return;
}

// 0098D250  FUN_0098d250  size=90  [callgraph]
void __fastcall FUN_0098d250(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x264) < 8) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),0);
  }
  else {
    bVar1 = *(int *)(param_1 + 0x270) == 0;
    if (bVar1) {
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
    }
    FUN_00cb2310(uVar2,bVar1);
    if (*(int *)(param_1 + 0x274) == 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
      return;
    }
  }
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),0);
  return;
}

// 0098D2B0  FUN_0098d2b0  size=471  [callgraph]
void __thiscall FUN_0098d2b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *_Format;
  char local_20 [32];
  
  uVar2 = param_3 - param_2;
  param_3 = 0;
  if ((int)uVar2 < 0) {
    param_3 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    uVar2 = 0;
  }
  if (param_3 < 9) {
    iVar3 = uVar2 - param_3;
    do {
      puVar6 = (undefined4 *)(param_1 + 0x14c);
      iVar4 = 0x38;
      do {
        FUN_00cb2310(*puVar6,0);
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      param_2 = 0;
      piVar5 = (int *)(param_1 + 0x410);
      do {
        if (param_2 == iVar3 + param_3) {
          iVar4 = *piVar5 + -1;
          if ((*(int *)(param_1 + 0x3f8) != 0) || (*(int *)(param_1 + 0x3fc) != 0)) {
            iVar4 = iVar4 - *(int *)(param_1 + 0x404);
          }
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x14c + iVar4 * 4),1);
          iVar1 = *piVar5;
          if (iVar1 != -1) {
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
            if (*(int *)(param_1 + 0x3f8) == 0) {
              if (*(int *)(param_1 + 0x3fc) == 0) {
                _Format = "MANUAL_COMBO_%02d";
              }
              else {
                iVar1 = iVar1 - *(int *)(param_1 + 0x404);
                _Format = "MANUAL_COMBO_LQ_%02d";
              }
            }
            else {
              iVar1 = iVar1 - *(int *)(param_1 + 0x404);
              _Format = "MANUAL_COMBO_SAM_%02d";
            }
            _sprintf_s(local_20,0x20,_Format,iVar1);
            FUN_00cf9770(*(undefined4 *)(param_1 + 0x22c),local_20,0,0xffffffff);
          }
          if ((piVar5[-1] != -1) &&
             ((FUN_00cf9770(*(undefined4 *)(param_1 + 0x230),
                            (&PTR_s_MANUAL_TITLE_02_0188ea50)[piVar5[-1]],0,0xffffffff),
              *(int *)(param_1 + 0x3f8) != 0 || (*(int *)(param_1 + 0x3fc) != 0)))) {
            FUN_00cb2310(*(undefined4 *)(param_1 + 0x230),0);
          }
          FUN_00cb2310(*(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x2a0 + iVar4 * 4)
                      );
        }
        param_2 = param_2 + 1;
        piVar5 = piVar5 + 4;
      } while (param_2 < 0x38);
      param_3 = param_3 + 1;
    } while (param_3 < 9);
  }
  return;
}

// 0099DFB0  cComboListMenu::vf00  size=30  [class]
undefined4 __thiscall cComboListMenu::vf00(undefined4 param_1,byte param_2)

{
  ~cComboListMenu();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0099DFD0  FUN_0099dfd0  size=970  [callgraph]
void __fastcall FUN_0099dfd0(int param_1)

{
  if ((*(int *)(param_1 + 0x260) < 3) && (*(int *)(param_1 + 0x26c) != 0)) {
    FUN_00ce4d70(1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c),3);
    FUN_00ce4dc0(0,1);
    FUN_00ce4dc0(3,1);
    FUN_00ce4dc0(4,1);
    FUN_00ce4dc0(7,1);
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + -1;
    FUN_00ce4d70(0);
    FUN_00ce4d70(3);
    FUN_00ce4d70(4);
    FUN_00ce4d70(7);
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + -1;
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
    FUN_00ce4d70(1);
    FUN_00ce4d70(5);
    FUN_00ce4d70(6);
    FUN_00ce4d70(8);
    *(undefined4 *)(param_1 + 0x268) = 1;
    *(undefined4 *)(param_1 + 0x26c) = 0;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x274) = 0;
    if (*(int *)(param_1 + 0x25c) < 1) {
      *(undefined4 *)(param_1 + 0x270) = 1;
      FUN_0098d250();
      return;
    }
  }
  else if (*(int *)(param_1 + 0x260) < 1) {
    FUN_00ce4d70(1);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c),3);
    FUN_00ce4d70(0);
    FUN_00ce4d70(3);
    FUN_00ce4d70(4);
    FUN_00ce4d70(7);
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
    FUN_00ce4d70(1);
    FUN_00ce4d70(5);
    FUN_00ce4d70(6);
    FUN_00ce4d70(8);
    *(undefined4 *)(param_1 + 0x268) = 1;
    *(undefined4 *)(param_1 + 0x26c) = 0;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x274) = 0;
    if (*(int *)(param_1 + 0x25c) < 1) {
      *(undefined4 *)(param_1 + 0x270) = 1;
      FUN_0098d250();
      return;
    }
  }
  else {
    FUN_00ce4d70(0);
    FUN_00ce4d70(3);
    FUN_00ce4d70(4);
    FUN_00ce4d70(7);
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + -1;
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
    FUN_00ce4d70(1);
    FUN_00ce4d70(5);
    FUN_00ce4d70(6);
    FUN_00ce4d70(8);
  }
  FUN_0098d250();
  return;
}

// 0099E3A0  FUN_0099e3a0  size=983  [callgraph]
void __fastcall FUN_0099e3a0(int param_1)

{
  if ((*(int *)(param_1 + 0x260) == 6) && (*(int *)(param_1 + 0x268) != 0)) {
    FUN_00ce4d70(2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),3);
    FUN_00ce4dc0(0,1);
    FUN_00ce4dc0(3,1);
    FUN_00ce4dc0(4,1);
    FUN_00ce4dc0(7,1);
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
    FUN_00ce4d70(0);
    FUN_00ce4d70(3);
    FUN_00ce4d70(4);
    FUN_00ce4d70(7);
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
    FUN_00ce4d70(1);
    FUN_00ce4d70(5);
    FUN_00ce4d70(6);
    FUN_00ce4d70(8);
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x26c) = 1;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x270) = 0;
    if (*(int *)(param_1 + 0x264) + -1 <= *(int *)(param_1 + 0x25c)) {
      *(undefined4 *)(param_1 + 0x274) = 1;
      FUN_0098d250();
      return;
    }
  }
  else if (*(int *)(param_1 + 0x260) < 8) {
    FUN_00ce4d70(0);
    FUN_00ce4d70(3);
    FUN_00ce4d70(4);
    FUN_00ce4d70(7);
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
    FUN_00ce4d70(1);
    FUN_00ce4d70(5);
    FUN_00ce4d70(6);
    FUN_00ce4d70(8);
  }
  else {
    FUN_00ce4d70(2);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),3);
    FUN_00ce4d70(0);
    FUN_00ce4d70(3);
    FUN_00ce4d70(4);
    FUN_00ce4d70(7);
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
    FUN_00ce4d70(1);
    FUN_00ce4d70(5);
    FUN_00ce4d70(6);
    FUN_00ce4d70(8);
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x26c) = 1;
    *(undefined4 *)(param_1 + 0x278) = 1;
    *(undefined4 *)(param_1 + 0x270) = 0;
    if (*(int *)(param_1 + 0x264) + -1 <= *(int *)(param_1 + 0x25c)) {
      *(undefined4 *)(param_1 + 0x274) = 1;
      FUN_0098d250();
      return;
    }
  }
  FUN_0098d250();
  return;
}

// 009B0DA0  cComboListMenu::vf08  size=1506  [class]
void __fastcall cComboListMenu::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  int local_8;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  if ((DAT_018b9174 & 0xf00) == 0xc00) {
    *(undefined4 *)(param_1 + 0x3f8) = 1;
    *(undefined4 *)(param_1 + 0x404) = 0x38;
  }
  else if ((DAT_018b9174 & 0xf00) == 0xd00) {
    *(undefined4 *)(param_1 + 0x3fc) = 1;
    *(undefined4 *)(param_1 + 0x404) = 0x4d;
  }
  FUN_0098d7f0();
  FUN_0098d780();
  cXmlBinary::cXmlBinary_79();
  uVar2 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  puVar4 = (undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_00cb25d0(0xb);
  *puVar4 = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00cb25d0(0x13);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  local_8 = 9;
  do {
    uVar2 = FUN_00cb3300(*puVar4);
    FUN_00cb2240(uVar2);
    puVar4 = puVar4 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar6 = 0;
  do {
    if ((*(int *)(param_1 + 0x3f8) != 0) || (*(int *)(param_1 + 0x3fc) != 0)) goto LAB_009b0f77;
    if (iVar6 == 0x1d) {
      uVar2 = FUN_00cb25d0(0x1f);
      *(undefined4 *)(param_1 + 0x1c0) = uVar2;
    }
    else if (iVar6 == 0x1e) {
      uVar2 = FUN_00cb25d0(0x1e);
      *(undefined4 *)(param_1 + 0x1c4) = uVar2;
    }
    else if (iVar6 == 0xb) {
      iVar3 = FUN_00cacfb0();
      if (iVar3 == 0) {
LAB_009b0f77:
        uVar2 = FUN_00cb25d0(iVar6 + 1);
        *(undefined4 *)(param_1 + 0x14c + iVar6 * 4) = uVar2;
      }
      else {
        uVar2 = FUN_00cb25d0(0xe);
        *(undefined4 *)(param_1 + 0x178) = uVar2;
      }
    }
    else {
      if ((iVar6 != 0xd) || (iVar3 = FUN_00cacfb0(), iVar3 == 0)) goto LAB_009b0f77;
      uVar2 = FUN_00cb25d0(0xc);
      *(undefined4 *)(param_1 + 0x180) = uVar2;
    }
    iVar6 = iVar6 + 1;
    if (0x37 < iVar6) {
      uVar2 = FUN_00cb25d0(0x5c);
      *(undefined4 *)(param_1 + 0x22c) = uVar2;
      uVar2 = FUN_00cb25d0(0x5d);
      *(undefined4 *)(param_1 + 0x230) = uVar2;
      uVar2 = FUN_00cb25d0(0x5e);
      *(undefined4 *)(param_1 + 0x234) = uVar2;
      uVar2 = FUN_00cb25d0(0x5f);
      *(undefined4 *)(param_1 + 0x238) = uVar2;
      uVar2 = FUN_00cb25d0(0x60);
      *(undefined4 *)(param_1 + 0x23c) = uVar2;
      local_4 = 9;
      do {
        puVar4 = (undefined4 *)(param_1 + 0x14c);
        local_8 = 0x38;
        do {
          FUN_00cb2d20(*puVar4,1);
          puVar4 = puVar4 + 1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      FUN_00ce4dc0(1,1);
      FUN_00cb2600(1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
      iVar6 = *(int *)(param_1 + 0x264);
      if (iVar6 < 7) {
        puVar4 = (undefined4 *)(param_1 + 0x28 + iVar6 * 4);
        iVar6 = 7 - iVar6;
        do {
          FUN_00cb2310(*puVar4,0);
          puVar4 = puVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar2 = 0;
      puVar4 = (undefined4 *)FUN_00dd3500(0x120,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[0x18] = 0;
        puVar4[0x19] = 0;
        puVar4[0x1a] = 0;
        puVar4[0x1d] = 0x3f800000;
        *puVar4 = cMenuKeyInfo::vftable;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[0x20] = 0;
        puVar4[0x17] = 0;
        puVar4[0x43] = 0;
        puVar4[0x1b] = 0;
        puVar4[0x44] = 0;
        puVar4[0x1c] = 0;
        puVar4[0x45] = 0;
        puVar4[0x1e] = 0;
        puVar4[0x1f] = 0;
        puVar4[0x21] = 0;
        puVar4[0x22] = 1;
        puVar4[0x46] = 0;
        puVar4[0x47] = 0;
        _memset(puVar4 + 3,0,0x50);
        uVar5 = FUN_00de4500("ui_menu_keyinfo.mkd");
        puVar4[1] = uVar5;
      }
      *(undefined4 **)(param_1 + 0x290) = puVar4;
      puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x4c));
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x280) = 0;
        *(undefined4 *)(param_1 + 0x284) = 0;
        *(undefined4 *)(param_1 + 0x288) = 0;
        uVar5 = 0x3f800000;
      }
      else {
        *(undefined4 *)(param_1 + 0x280) = *puVar4;
        *(undefined4 *)(param_1 + 0x284) = puVar4[1];
        *(undefined4 *)(param_1 + 0x288) = puVar4[2];
        uVar5 = puVar4[3];
      }
      *(undefined4 *)(param_1 + 0x28c) = uVar5;
      iVar6 = *(int *)(param_1 + 0x290);
      uVar5 = *(undefined4 *)(param_1 + 0x280);
      uVar1 = *(undefined4 *)(param_1 + 0x284);
      FUN_0099a440(iVar6 + 0x8c,&DAT_016575ac,"combo_list_R");
      *(undefined4 *)(iVar6 + 0x10c) = uVar5;
      *(undefined4 *)(iVar6 + 0x110) = uVar1;
      *(undefined4 *)(iVar6 + 0x118) = 0;
      *(undefined4 *)(iVar6 + 0x5c) = 1;
      *(undefined4 *)(iVar6 + 0x114) = 0x41700000;
      puVar4 = (undefined4 *)FUN_00dd3500(0x28,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cCustomObjCtrlManager::cCustomObjCtrlManager_17();
        puVar4[9] = 0;
        *puVar4 = cControllerHelpMenu::vftable;
        puVar4[8] = 0;
        FUN_00cb2630(1);
        puVar4[3] = "cControllerHelpMenu";
        FUN_00d29ca0(0x65,10);
        puVar4[4] = 0;
      }
      *(undefined4 **)(param_1 + 0x294) = puVar4;
      FUN_00cb2600(0);
      puVar4 = (undefined4 *)FUN_00dd3500(0x84,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cCustomObjCtrlManager::cCustomObjCtrlManager_17();
        puVar4[0x20] = 0;
        *puVar4 = cKeyConfigHelpMenu::vftable;
        puVar4[0x1f] = 0;
        FUN_00cb2630(1);
        puVar4[3] = "cKeyConfigHelpMenu";
        FUN_00d29ca0(0x66,10);
        puVar4[4] = 0;
      }
      *(undefined4 **)(param_1 + 0x298) = puVar4;
      FUN_00cb2600(0);
      if (*(int *)(param_1 + 0x264) < 8) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),0);
        uVar5 = *(undefined4 *)(param_1 + 0x20);
      }
      else {
        bVar7 = *(int *)(param_1 + 0x270) == 0;
        if (bVar7) {
          uVar5 = *(undefined4 *)(param_1 + 0x1c);
        }
        else {
          uVar5 = *(undefined4 *)(param_1 + 0x1c);
        }
        FUN_00cb2310(uVar5,bVar7);
        if (*(int *)(param_1 + 0x274) == 0) {
          uVar5 = *(undefined4 *)(param_1 + 0x20);
          uVar2 = 1;
        }
        else {
          uVar5 = *(undefined4 *)(param_1 + 0x20);
        }
      }
      FUN_00cb2310(uVar5,uVar2);
      FUN_0098d2b0(0,0);
      FUN_0098dc90();
      *(uint *)(param_1 + 0x408) = (uint)DAT_01dc1418;
      local_4 = 8;
      do {
        FUN_00ce4dc0(0,1);
        FUN_00ce4dc0(4,1);
        FUN_00ce4dc0(7,1);
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      FUN_00ce4dc0(1,1);
      FUN_00ce4dc0(5,1);
      FUN_00ce4d70(6);
      FUN_00ce4dc0(8,1);
      iVar6 = *(int *)(param_1 + 0x290);
      *(undefined4 *)(iVar6 + 0x74) = *(undefined4 *)(param_1 + 0x24c);
      *(undefined4 *)(iVar6 + 0x78) = 1;
      FUN_00cb2740(*(undefined4 *)(param_1 + 0x24c));
      return;
    }
  } while( true );
}

// 009B1390  FUN_009b1390  size=1034  [callgraph]
void __fastcall FUN_009b1390(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    if (*(int *)(param_1 + 0x278) != 0) break;
    if ((((*(int *)(param_1 + 0x268) == 0) || (iVar6 < 7)) &&
        ((*(int *)(param_1 + 0x26c) == 0 || (1 < iVar6)))) &&
       (cVar3 = FUN_00d0d3e0(8,iVar6), cVar3 != '\0')) {
      FUN_00ce4d70(0);
      FUN_00ce4d70(3);
      FUN_00ce4d70(4);
      FUN_00ce4d70(7);
      iVar2 = *(int *)(param_1 + 0x260);
      *(int *)(param_1 + 0x260) = iVar6;
      *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + (iVar6 - iVar2);
      iVar6 = *(int *)(param_1 + (*(int *)(param_1 + 0x25c) + 0x41) * 0x10) + -1;
      if ((*(int *)(param_1 + 0x3f8) != 0) || (*(int *)(param_1 + 0x3fc) != 0)) {
        iVar6 = iVar6 - *(int *)(param_1 + 0x404);
      }
      if (*(int *)(param_1 + 0x2a0 + iVar6 * 4) != 0) {
        *(undefined4 *)(param_1 + 0x29c) = 1;
      }
      *(undefined4 *)(param_1 + 0x2a0 + iVar6 * 4) = 0;
      FUN_00ce4d70(1);
      FUN_00ce4d70(5);
      FUN_00ce4d70(6);
      FUN_00ce4d70(8);
      FUN_0098d2b0(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x25c));
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 9);
  if (*(int *)(param_1 + 0x278) == 0) {
    cVar3 = FUN_00cac640(0x2000,0);
    if (((cVar3 != '\0') || (iVar6 = FUN_00dd9400(0x45), iVar6 != 0)) &&
       (*(int *)(param_1 + 0x250) == 0)) {
      FUN_00e5e050("core_se_sys_cursor",0);
      FUN_00ce4d70(4);
      FUN_00ce4d70(5);
      FUN_00ce4d70(1);
      iVar6 = *(int *)(param_1 + 0x290);
      *(undefined4 *)(param_1 + 0x250) = 1;
      *(undefined4 *)(param_1 + 0x254) = 1;
      uVar4 = *(undefined4 *)(param_1 + 0x280);
      uVar1 = *(undefined4 *)(param_1 + 0x284);
      FUN_0099a440(iVar6 + 0x8c,&DAT_016575ac,"combo_list_L");
      *(undefined4 *)(iVar6 + 0x10c) = uVar4;
      *(undefined4 *)(iVar6 + 0x118) = 0;
      *(undefined4 *)(iVar6 + 0x110) = uVar1;
      *(undefined4 *)(iVar6 + 0x5c) = 1;
      *(undefined4 *)(iVar6 + 0x114) = 0x41700000;
      return;
    }
    cVar3 = FUN_00cac7e0(0x40008,0);
    if ((cVar3 == '\0') && (cVar3 = FUN_00cac9c0(0), cVar3 == '\0')) {
      cVar3 = FUN_00cac7e0(0x80004,0);
      if ((cVar3 == '\0') && (cVar3 = FUN_00cac9c0(1), cVar3 == '\0')) {
        cVar3 = FUN_00ce1360(0);
        if ((cVar3 == '\0') && (cVar3 = FUN_00cac960(), cVar3 == '\0')) {
          return;
        }
        FUN_00e5e050("core_se_sys_cancel",0);
        FUN_0098dab0();
        *(undefined4 *)(param_1 + 0x248) = 3;
        return;
      }
      if (*(int *)(param_1 + 0x264) + -1 <= *(int *)(param_1 + 0x25c)) {
        return;
      }
      FUN_00e5e050("core_se_sys_cursor",0);
      FUN_0098dab0();
      FUN_0099e3a0();
    }
    else {
      if (*(int *)(param_1 + 0x25c) < 1) {
        return;
      }
      FUN_00e5e050("core_se_sys_cursor",0);
      iVar6 = *(int *)(param_1 + (*(int *)(param_1 + 0x25c) + 0x41) * 0x10) + -1;
      if ((*(int *)(param_1 + 0x3f8) != 0) || (*(int *)(param_1 + 0x3fc) != 0)) {
        iVar6 = iVar6 - *(int *)(param_1 + 0x404);
      }
      if (*(int *)(param_1 + 0x2a0 + iVar6 * 4) != 0) {
        *(undefined4 *)(param_1 + 0x29c) = 1;
      }
      *(undefined4 *)(param_1 + 0x2a0 + iVar6 * 4) = 0;
      FUN_0099dfd0();
    }
    FUN_0098d2b0(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x25c));
    return;
  }
  if ((*(int *)(param_1 + 0x268) == 0) || (iVar6 = FUN_00ce4dd0(1), iVar6 == 0)) {
    if (*(int *)(param_1 + 0x26c) == 0) {
      return;
    }
    iVar6 = FUN_00ce4dd0(2);
    if (iVar6 == 0) {
      return;
    }
  }
  iVar6 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x28);
  do {
    uVar4 = FUN_00cb3300(*puVar5);
    FUN_00d38a30(8,iVar6,uVar4);
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar6 < 9);
  *(undefined4 *)(param_1 + 0x278) = 0;
  return;
}

// 009B17A0  FUN_009b17a0  size=297  [callgraph]
void __fastcall FUN_009b17a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_00cac640(0x400,0);
  if (((cVar3 != '\0') || (iVar4 = FUN_00dd9400(0x43), iVar4 != 0)) &&
     (*(int *)(param_1 + 0x250) == 1)) {
    FUN_00e5e050("core_se_sys_cursor",0);
    FUN_00ce4d70(5);
    FUN_00ce4d70(4);
    FUN_00ce4d70(0);
    iVar4 = *(int *)(param_1 + 0x290);
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x254) = 1;
    uVar1 = *(undefined4 *)(param_1 + 0x280);
    uVar2 = *(undefined4 *)(param_1 + 0x284);
    FUN_0099a440(iVar4 + 0x8c,&DAT_016575ac,"combo_list_R");
    *(undefined4 *)(iVar4 + 0x10c) = uVar1;
    *(undefined4 *)(iVar4 + 0x118) = 0;
    *(undefined4 *)(iVar4 + 0x110) = uVar2;
    *(undefined4 *)(iVar4 + 0x5c) = 1;
    *(undefined4 *)(iVar4 + 0x114) = 0x41700000;
    return;
  }
  cVar3 = FUN_00ce1360(0);
  if ((cVar3 == '\0') && (cVar3 = FUN_00cac960(), cVar3 == '\0')) {
    return;
  }
  FUN_00e5e050("core_se_sys_cancel",0);
  *(undefined4 *)(param_1 + 0x248) = 3;
  return;
}

// 009BA4A0  cComboListMenu::vf14  size=671  [class]
void __fastcall cComboListMenu::vf14(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x248)) {
  case 0:
    *(undefined4 *)(*(int *)(param_1 + 0x294) + 0x20) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x298) + 0x7c) = 1;
    *(undefined4 *)(param_1 + 0x248) = 1;
  case 1:
    fVar2 = (float10)FUN_00cacf20();
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x24c);
    *(float *)(param_1 + 0x24c) = (float)fVar2;
    fVar3 = (float10)1;
    if (fVar3 < fVar2 != (fVar3 == fVar2)) {
      *(float *)(param_1 + 0x24c) = (float)fVar3;
      *(undefined4 *)(param_1 + 0x248) = 2;
    }
    iVar1 = *(int *)(param_1 + 0x290);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(iVar1 + 0x78) = 1;
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x24c));
    break;
  case 2:
    if (*(int *)(param_1 + 0x254) == 0) {
      if (*(int *)(param_1 + 0x250) == 0) {
        FUN_009b1390();
      }
      else {
        FUN_009b17a0();
      }
    }
    else {
      iVar1 = FUN_00ce4dd0(5);
      if (((iVar1 != 0) && (iVar1 = FUN_00ce4dd0(5), iVar1 != 0)) ||
         ((iVar1 = FUN_00ce4dd0(4), iVar1 != 0 && (iVar1 = FUN_00ce4dd0(4), iVar1 != 0)))) {
        *(undefined4 *)(param_1 + 0x254) = 0;
      }
    }
    FUN_0098db00();
    if ((*(int *)(param_1 + 0x250) == 0) && (iVar1 = FUN_00ce4dd0(5), iVar1 != 0)) {
      FUN_00cb2600(0);
      uVar4 = 0;
    }
    else {
      FUN_00cb2600(1);
      uVar4 = 1;
    }
    FUN_00cb2600(uVar4);
    if ((*(int *)(param_1 + 0x250) == 1) && (iVar1 = FUN_00ce4dd0(4), iVar1 != 0)) {
      FUN_00cb2600(0);
    }
    else {
      FUN_00cb2600(1);
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x388) != 0) &&
       (iVar1 = FUN_00e9cf60(*(int *)(param_1 + 0x388)), iVar1 == 0)) break;
    if (*(int *)(param_1 + 0x29c) != 0) {
      FUN_0098d8a0();
      *(undefined4 *)(param_1 + 0x248) = 4;
      break;
    }
  case 4:
    *(undefined4 *)(*(int *)(param_1 + 0x294) + 0x20) = 3;
    *(undefined4 *)(*(int *)(param_1 + 0x298) + 0x7c) = 3;
    *(undefined4 *)(param_1 + 0x248) = 5;
    break;
  case 5:
    fVar3 = (float10)FUN_00cacf20();
    fVar3 = (float10)*(float *)(param_1 + 0x24c) - fVar3;
    *(float *)(param_1 + 0x24c) = (float)fVar3;
    if (fVar3 <= (float10)0) {
      *(float *)(param_1 + 0x24c) = (float)(float10)0;
      *(undefined4 *)(param_1 + 0x248) = 6;
    }
    iVar1 = *(int *)(param_1 + 0x290);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(iVar1 + 0x78) = 1;
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x24c));
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x244) = 2;
  }
  if (*(uint *)(param_1 + 0x408) != (uint)DAT_01dc1418) {
    FUN_0098dc90();
    *(uint *)(param_1 + 0x408) = (uint)DAT_01dc1418;
  }
  if (*(int *)(param_1 + 0x290) != 0) {
    FUN_009a2a10();
  }
  if (*(int **)(param_1 + 0x294) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x294) + 4))();
  }
  if (*(int **)(param_1 + 0x298) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009ba73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x298) + 4))();
  return;
}

