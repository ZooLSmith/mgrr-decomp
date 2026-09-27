// src/event/cEventPauseMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009944A0..009A5930, 11 functions

#include "types.h"

// 009944A0  cEventPauseMenu::cEventPauseMenu  size=64  [class]
undefined4 * __fastcall cEventPauseMenu::cEventPauseMenu(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 1;
  FUN_00e5e1b0("bgm_Paused_Movie_Enter");
  FUN_00e5e050("core_se_sys_pause_movie_in",0);
  return param_1;
}

// 009944E0  cEventPauseMenu::cEventPauseMenu_2  size=59  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEventPauseMenu::cEventPauseMenu_2(undefined4 *param_1)

{
  *param_1 = vftable;
  _DAT_01dc2d78 = 0;
  FUN_00e5e1b0("bgm_Paused_Movie_Exit");
  FUN_00e5e050("core_se_sys_pause_movie_out",0);
  FUN_00cfe0f0(9);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 00994520  cEventPauseMenu::cEventPauseMenu_3  size=114  [class]
undefined4 * cEventPauseMenu::cEventPauseMenu_3(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x44,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar1 = vftable;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0xffffffff;
    puVar1[0x10] = 1;
    FUN_00e5e1b0("bgm_Paused_Movie_Enter");
    FUN_00e5e050("core_se_sys_pause_movie_in",0);
    puVar1[3] = "cEventPauseMenu";
    FUN_00d29ca0(0x6e,10);
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 009945A0  cEventPauseMenu::vf04  size=110  [class]
void __fastcall cEventPauseMenu::vf04(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = FUN_00cac360(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ccdda0(param_1[2]);
      if (iVar1 == 0) {
        param_1[1] = -1;
        return;
      }
      (**(code **)(*param_1 + 8))();
      (**(code **)(*param_1 + 0x14))();
      param_1[1] = 1;
    }
    return;
  }
  if (iVar1 == 1) {
    (**(code **)(*param_1 + 0xc))();
    param_1[1] = 2;
  }
  else if (iVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009945c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

// 00994610  cEventPauseMenu::vf0C  size=129  [class]
void __fastcall cEventPauseMenu::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d389f0(9,0,0,0,*(int *)(param_1 + 0x18),0xd,1);
    FUN_00d389f0(9,1,0,0,*(undefined4 *)(param_1 + 0x18),0x17,1);
    FUN_00d389f0(9,2,0,0,*(undefined4 *)(param_1 + 0x18),0x34,1);
  }
  return;
}

// 009946A0  FUN_009946a0  size=78  [callgraph]
void __thiscall FUN_009946a0(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),param_3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),param_3);
  }
  else if (param_2 == 1) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),param_3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),param_3);
    return;
  }
  return;
}

// 009946F0  FUN_009946f0  size=63  [callgraph]
void __fastcall FUN_009946f0(int param_1)

{
  if (DAT_01b77e48 == 0) {
    DAT_01b77e48 = 0;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CORE_MANUAL_11",0,0xffffffff);
    return;
  }
  DAT_01b77e48 = 1;
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CORE_MANUAL_12",0,0xffffffff);
  return;
}

// 00994730  FUN_00994730  size=110  [callgraph]
void __fastcall FUN_00994730(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_01dc1418 != '\0') {
    uVar1 = FUN_00cc7280(0x45);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x34),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x34),uVar1);
    FUN_00ce4d70(7);
    return;
  }
  uVar1 = FUN_00ca9ea0();
  FUN_00d12030(*(undefined4 *)(param_1 + 0x34),uVar1);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x34),0x752ce757);
  FUN_00ce4d70(6);
  return;
}

// 009A57D0  cEventPauseMenu::vf00  size=80  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall cEventPauseMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  _DAT_01dc2d78 = 0;
  FUN_00e5e1b0("bgm_Paused_Movie_Exit");
  FUN_00e5e050("core_se_sys_pause_movie_out",0);
  FUN_00cfe0f0(9);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A5820  cEventPauseMenu::vf08  size=258  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEventPauseMenu::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),1);
  FUN_00cb2600(1);
  _DAT_01dc2d78 = 1;
  FUN_00ce4d70(3);
  FUN_00ce4d70(4);
  FUN_00994730();
  *(uint *)(param_1 + 0x40) = (uint)DAT_01dc1418;
  if (DAT_01b77e48 == 0) {
    DAT_01b77e48 = 0;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CORE_MANUAL_11",0,0xffffffff);
    return;
  }
  DAT_01b77e48 = 1;
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x30),"CORE_MANUAL_12",0,0xffffffff);
  return;
}

// 009A5930  cEventPauseMenu::vf14  size=757  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEventPauseMenu::vf14(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00cb2660();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00ce4dd0(3);
  if (iVar3 == 0) {
    return;
  }
  if (DAT_01b5d1dc != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 4) = 0xfffffffe;
    goto LAB_009a5c05;
  }
  cVar2 = FUN_00d0d3e0(9,0);
  if (cVar2 != '\0') {
    if (0 < *(int *)(param_1 + 0x38)) {
      FUN_00e5e050("core_se_sys_cursor",0);
      FUN_009946a0(*(undefined4 *)(param_1 + 0x38),1);
      piVar1 = (int *)(param_1 + 0x38);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      FUN_009946a0(*(undefined4 *)(param_1 + 0x38),0);
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 4) = 0xfffffffe;
    FUN_00e5e050("core_se_sys_decide_s",0);
    _DAT_01dc2d78 = 0;
    goto LAB_009a5c05;
  }
  cVar2 = FUN_00d0d3e0(9,1);
  if (cVar2 == '\0') {
    cVar2 = FUN_00cac640(0x40008,0);
    if ((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(0), cVar2 == '\0')) {
      cVar2 = FUN_00cac640(0x80004,0);
      if ((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(1), cVar2 == '\0')) {
        cVar2 = FUN_00ce12f0(0);
        if (cVar2 == '\0') {
          cVar2 = FUN_00ce1360(0);
          if (cVar2 == '\0') {
            cVar2 = FUN_00cac640(0x100,0);
            if ((cVar2 == '\0') && (cVar2 = FUN_00cac960(), cVar2 == '\0')) {
              cVar2 = FUN_00cac640(0x2000,0);
              if ((cVar2 != '\0') ||
                 ((iVar3 = FUN_00dd9400(0x45), iVar3 != 0 ||
                  (cVar2 = FUN_00d0d3e0(9,2), cVar2 != '\0')))) {
                DAT_01b77e48 = DAT_01b77e48 + 1;
                if (1 < DAT_01b77e48) {
                  DAT_01b77e48 = 0;
                }
                FUN_009946f0();
              }
              goto LAB_009a5c05;
            }
          }
          else {
            FUN_00e5e050("core_se_sys_cancel");
            if (*(int *)(param_1 + 0x38) != 0) {
              FUN_009946a0(*(int *)(param_1 + 0x38),1);
              *(undefined4 *)(param_1 + 0x38) = 0;
              uVar4 = 0;
              goto LAB_009a5bfd;
            }
          }
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 4) = 0xfffffffe;
          _DAT_01dc2d78 = 0;
          goto LAB_009a5c05;
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 4) = 0xfffffffe;
        if (*(int *)(param_1 + 0x38) == 0) {
          FUN_00e5e050("core_se_sys_decide_s");
          _DAT_01dc2d78 = 0;
          goto LAB_009a5c05;
        }
        goto LAB_009a5a35;
      }
      if (0 < *(int *)(param_1 + 0x38)) goto LAB_009a5c05;
      FUN_00e5e050("core_se_sys_cursor",0);
      FUN_009946a0(*(undefined4 *)(param_1 + 0x38),1);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      if (0 < *(int *)(param_1 + 0x38)) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      if (*(int *)(param_1 + 0x38) < 1) goto LAB_009a5c05;
      FUN_00e5e050("core_se_sys_cursor",0);
      FUN_009946a0(*(undefined4 *)(param_1 + 0x38),1);
      piVar1 = (int *)(param_1 + 0x38);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x38);
    }
LAB_009a5bfd:
    FUN_009946a0(uVar4,0);
  }
  else {
    if (*(int *)(param_1 + 0x38) < 1) {
      FUN_00e5e050("core_se_sys_cursor",0);
      FUN_009946a0(*(undefined4 *)(param_1 + 0x38),1);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      if (0 < *(int *)(param_1 + 0x38)) {
        *(undefined4 *)(param_1 + 0x38) = 1;
      }
      FUN_009946a0(*(undefined4 *)(param_1 + 0x38),0);
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 4) = 0xfffffffe;
LAB_009a5a35:
    FUN_00e5e050("core_se_sys_decide_l",0);
  }
LAB_009a5c05:
  if (*(uint *)(param_1 + 0x40) != (uint)DAT_01dc1418) {
    FUN_00994730();
    *(uint *)(param_1 + 0x40) = (uint)DAT_01dc1418;
  }
  return;
}

