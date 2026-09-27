// src/misc/cGameOverHackingMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00990A20..009B32F0, 5 functions

#include "types.h"

// 00990A20  cGameOverHackingMenu::vf08  size=363  [class]
void __fastcall cGameOverHackingMenu::vf08(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_018b9174 < 0xd76) && ((0xd70 < DAT_018b9174 || (DAT_018b9174 - 0xc71U < 5)))) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 2;
  }
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x34),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x3c),1);
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),0);
  }
  FUN_00e5e1b0("bgm_Mission_Failed_Enter2");
  FUN_00ce4d70(4);
  FUN_00cb2600(0);
  return;
}

// 00990B90  cGameOverHackingMenu::vf0C  size=254  [class]
void __fastcall cGameOverHackingMenu::vf0C(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    local_20 = 0x439c8000;
    local_1c = 0x439d0000;
    local_18 = 0x44728000;
    local_14 = 0x43aa8000;
    FUN_00cfdc80(0x11,0,0,0,&local_20,1);
    local_20 = 0x439c8000;
    local_1c = 0x43ad0000;
    local_18 = 0x44728000;
    local_14 = 0x43ba8000;
    FUN_00cfdc80(0x11,1,0,0,&local_20,1);
    local_20 = 0x439c8000;
    local_1c = 0x43bd8000;
    local_18 = 0x44728000;
    local_14 = 0x43cb0000;
    FUN_00cfdc80(0x11,2,0,0,&local_20,1);
  }
  return;
}

// 00990C90  FUN_00990c90  size=133  [callgraph]
void __thiscall FUN_00990c90(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c),param_3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),param_3);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  else if (param_2 == 1) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),param_3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),param_3);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    if (param_2 != 2) goto LAB_00990d07;
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x34),param_3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x38),param_3);
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
  }
  FUN_00ce4ce0(uVar1,param_3);
LAB_00990d07:
  FUN_00ce4d70(4);
  return;
}

// 009A21E0  cGameOverHackingMenu::vf14  size=664  [class]
void __fastcall cGameOverHackingMenu::vf14(int param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 0:
    FUN_00cb2600(1);
    fVar5 = (float10)FUN_00cacf20();
    fVar5 = fVar5 + (float10)*(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x4c) = (float)fVar5;
    if ((float10)1 < fVar5) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      *(float *)(param_1 + 0x4c) = (float)(float10)1;
      FUN_00cb2740(*(undefined4 *)(param_1 + 0x4c));
      return;
    }
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x4c));
    return;
  case 1:
    iVar4 = 0;
    do {
      cVar3 = FUN_00d0d3e0(0x11,iVar4);
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x40) != iVar4) {
          FUN_00e5e050("core_se_sys_cursor",0);
          FUN_00990c90(*(undefined4 *)(param_1 + 0x40),1);
          *(int *)(param_1 + 0x40) = iVar4;
          FUN_00990c90(iVar4,0);
        }
        FUN_00e5e050("core_se_sys_decide_s",0);
        if (*(int *)(param_1 + 0x40) == 2) {
          (**(code **)(*(int *)(param_1 + 0x58) + 4))(0x25,0,1);
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        }
        else if (*(int *)(param_1 + 0x40) == 1) {
          pcVar2 = *(code **)(*(int *)(param_1 + 0x58) + 4);
          if (*(int *)(param_1 + 0x54) == 1) {
            (*pcVar2)(0x3f,0,1);
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          }
          else {
            (*pcVar2)(0x3a,0,1);
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x48) = 3;
        }
        if (iVar4 != -1) {
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    cVar3 = FUN_00cac640(0x40008,0);
    if ((cVar3 == '\0') && (cVar3 = FUN_00cac9c0(0), cVar3 == '\0')) {
      cVar3 = FUN_00cac640(0x80004,0);
      if ((cVar3 == '\0') && (cVar3 = FUN_00cac9c0(1), cVar3 == '\0')) {
        cVar3 = FUN_00ce12f0(0);
        if (cVar3 != '\0') {
          FUN_00e5e050("core_se_sys_decide_s",0);
          if (*(int *)(param_1 + 0x40) == 2) {
            (**(code **)(*(int *)(param_1 + 0x58) + 4))(0x25,0,1);
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
            return;
          }
          if (*(int *)(param_1 + 0x40) == 1) {
            pcVar2 = *(code **)(*(int *)(param_1 + 0x58) + 4);
            if (*(int *)(param_1 + 0x54) == 1) {
              (*pcVar2)(0x3f,0,1);
              *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
              return;
            }
            (*pcVar2)(0x3a,0,1);
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
            return;
          }
          *(undefined4 *)(param_1 + 0x48) = 3;
          return;
        }
      }
      else if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x54)) {
        FUN_00e5e050("core_se_sys_cursor",0);
        FUN_00990c90(*(undefined4 *)(param_1 + 0x40),1);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x40)) {
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x54);
        }
        FUN_00990c90(*(undefined4 *)(param_1 + 0x40),0);
      }
    }
    else if (0 < *(int *)(param_1 + 0x40)) {
      FUN_00e5e050("core_se_sys_cursor",0);
      FUN_00990c90(*(undefined4 *)(param_1 + 0x40),1);
      piVar1 = (int *)(param_1 + 0x40);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      FUN_00990c90(*(undefined4 *)(param_1 + 0x40),0);
      return;
    }
    break;
  case 2:
    iVar4 = FUN_00999fa0();
    if (iVar4 == 2) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      return;
    }
    if (iVar4 == 1) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      return;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 4) = 0xfffffffe;
    return;
  }
  return;
}

// 009B32F0  cGameOverHackingMenu::vf00  size=77  [class]
undefined4 * __thiscall cGameOverHackingMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cfe0f0(0x11);
  param_1[0x16] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17])(1);
    param_1[0x17] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

