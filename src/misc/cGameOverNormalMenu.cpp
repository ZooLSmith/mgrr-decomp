// src/misc/cGameOverNormalMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00990D40..009B3340, 6 functions

#include "mgrr.h"
#include "cGameOverNormalMenu.h"

// 00990D40  cGameOverNormalMenu::vf08  size=184  [class]
void __fastcall cGameOverNormalMenu::vf08(int param_1)

{
  undefined4 uVar1;
  
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
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x24),2);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),1);
  FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),1);
  FUN_00e5e1b0("bgm_Mission_Failed_Enter2");
  FUN_00ce4d70(4);
  FUN_00cb2600(0);
  return;
}

// 00990E00  cGameOverNormalMenu::vf0C  size=178  [class]
void __fastcall cGameOverNormalMenu::vf0C(int param_1)

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
    FUN_00cfdc80(0x10,0,0,0,&local_20,1);
    local_20 = 0x439c8000;
    local_1c = 0x43ad0000;
    local_18 = 0x44728000;
    local_14 = 0x43ba8000;
    FUN_00cfdc80(0x10,1,0,0,&local_20,1);
  }
  return;
}

// 00990EC0  FUN_00990ec0  size=99  [callgraph]
void __thiscall FUN_00990ec0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x1c),param_3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x20),param_3);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    if (param_2 != 1) goto LAB_00990f15;
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x28),param_3);
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c),param_3);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
  }
  FUN_00ce4ce0(uVar1,param_3);
LAB_00990f15:
  FUN_00ce4d70(4);
  return;
}

// 009A2540  cGameOverNormalMenu::~cGameOverNormalMenu  size=56  [class]
void __fastcall cGameOverNormalMenu::~cGameOverNormalMenu(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00cfe0f0(0x10);
  param_1[0x11] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
    param_1[0x12] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  return;
}

// 009A2600  cGameOverNormalMenu::create  size=576  [class]
void __fastcall cGameOverNormalMenu::create(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 0:
    FUN_00cb2600(1);
    fVar4 = (float10)FUN_00cacf20();
    fVar4 = fVar4 + (float10)*(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = (float)fVar4;
    if ((float10)1 < fVar4) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(float *)(param_1 + 0x40) = (float)(float10)1;
      FUN_00cb2740(*(undefined4 *)(param_1 + 0x40));
      return;
    }
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x40));
    return;
  case 1:
    iVar3 = FUN_009c56a0();
    if (iVar3 == 0) {
      iVar3 = 0;
      do {
        cVar2 = FUN_00d0d3e0(0x10,iVar3);
        if (cVar2 != '\0') {
          if (*(int *)(param_1 + 0x34) != iVar3) {
            FUN_00e5e050("core_se_sys_cursor",0);
            FUN_00990ec0(*(undefined4 *)(param_1 + 0x34),1);
            *(int *)(param_1 + 0x34) = iVar3;
            FUN_00990ec0(iVar3,0);
          }
          FUN_00e5e050("core_se_sys_decide_s",0);
          if (*(int *)(param_1 + 0x34) == 1) {
            (**(code **)(*(int *)(param_1 + 0x44) + 4))(0x35,0,1);
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x3c) = 3;
          }
          if (iVar3 != -1) {
            return;
          }
          break;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      cVar2 = FUN_00cac640(0x40008,0);
      if ((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(0), cVar2 == '\0')) {
        cVar2 = FUN_00cac640(0x80004,0);
        if ((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(1), cVar2 == '\0')) {
          cVar2 = FUN_00ce12f0(0);
          if (cVar2 != '\0') {
            FUN_00e5e050("core_se_sys_decide_s",0);
            if (*(int *)(param_1 + 0x34) == 1) {
              (**(code **)(*(int *)(param_1 + 0x44) + 4))(0x35,0,1);
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
              return;
            }
            *(undefined4 *)(param_1 + 0x3c) = 3;
            return;
          }
        }
        else if (*(int *)(param_1 + 0x34) < 1) {
          FUN_00e5e050("core_se_sys_cursor",0);
          FUN_00990ec0(*(undefined4 *)(param_1 + 0x34),1);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          if (1 < *(int *)(param_1 + 0x34)) {
            *(undefined4 *)(param_1 + 0x34) = 1;
          }
          FUN_00990ec0(*(undefined4 *)(param_1 + 0x34),0);
        }
      }
      else if (0 < *(int *)(param_1 + 0x34)) {
        FUN_00e5e050("core_se_sys_cursor",0);
        FUN_00990ec0(*(undefined4 *)(param_1 + 0x34),1);
        piVar1 = (int *)(param_1 + 0x34);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
        FUN_00990ec0(*(undefined4 *)(param_1 + 0x34),0);
        return;
      }
    }
    break;
  case 2:
    iVar3 = FUN_00999fa0();
    if (iVar3 == 2) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      return;
    }
    if (iVar3 == 1) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      return;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 4) = 0xfffffffe;
    return;
  }
  return;
}

// 009B3340  cGameOverNormalMenu::vf00  size=77  [class]
undefined4 * __thiscall cGameOverNormalMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cfe0f0(0x10);
  param_1[0x11] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
    param_1[0x12] = 0;
  }
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

