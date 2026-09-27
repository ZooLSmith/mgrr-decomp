// src/misc/cPauseMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00993F60..009B4730, 7 functions

#include "mgrr.h"
#include "cPauseMenu.h"

// 00993F60  cPauseMenu::vf0C  size=348  [class]
void __fastcall cPauseMenu::vf0C(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d389f0(2,0,0,0,*(int *)(param_1 + 0x18),0xd,1);
    FUN_00d389f0(2,1,0,0,*(undefined4 *)(param_1 + 0x18),0x17,1);
    FUN_00d389f0(2,2,0,0,*(undefined4 *)(param_1 + 0x18),0x21,1);
    FUN_00d389f0(2,3,0,0,*(undefined4 *)(param_1 + 0x18),0x2b,1);
    iVar2 = 4;
    iVar1 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x30));
    if (iVar1 != 0) {
      FUN_00d389f0(2,4,0,0,*(undefined4 *)(param_1 + 0x18),0x35,1);
      iVar2 = 5;
    }
    iVar1 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x34));
    if (iVar1 != 0) {
      FUN_00d389f0(2,iVar2,0,0,*(undefined4 *)(param_1 + 0x18),0x3f,1);
      iVar2 = iVar2 + 1;
    }
    iVar1 = FUN_00cb2480(*(undefined4 *)(param_1 + 0x2c));
    if (iVar1 != 0) {
      FUN_00d389f0(2,iVar2,0,0,*(undefined4 *)(param_1 + 0x18),0x49,1);
    }
  }
  return;
}

// 009940C0  FUN_009940c0  size=134  [callgraph]
void __thiscall FUN_009940c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *local_4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    local_4 = (int *)(param_1 + 0x8c);
    do {
      iVar1 = *local_4;
      bVar3 = *(int *)(param_1 + 0x84) != iVar2;
      if (param_2 == 0) {
        FUN_00ce4d10(*(undefined4 *)(param_1 + 0x38 + iVar1 * 4),bVar3,1);
        FUN_00ce4d10(*(undefined4 *)(param_1 + 0x54 + iVar1 * 4),bVar3,1);
      }
      else {
        FUN_00ce4d40(*(undefined4 *)(param_1 + 0x38 + iVar1 * 4),bVar3,1);
        FUN_00ce4d40(*(undefined4 *)(param_1 + 0x54 + iVar1 * 4),bVar3,1);
      }
      local_4 = local_4 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

// 00994150  FUN_00994150  size=257  [callgraph]
void __thiscall FUN_00994150(int param_1,int param_2)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x8c + param_2 * 4)) {
  case 0:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),"PAUSE_MSG_01",0,0xffffffff);
    FUN_00ce4d70(5);
    return;
  case 1:
    pcVar1 = "PAUSE_MSG_04";
    break;
  case 2:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),"PAUSE_MSG_05",0,0xffffffff);
    FUN_00ce4d70(5);
    return;
  case 3:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),"PAUSE_MSG_07",0,0xffffffff);
    FUN_00ce4d70(5);
    return;
  case 4:
    if (((byte)DAT_01bea060 & 0x40) == 0) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),"PAUSE_MSG_02",0,0xffffffff);
      FUN_00ce4d70(5);
      return;
    }
    pcVar1 = "PAUSE_MSG_09";
    break;
  default:
    goto switchD_00994167_caseD_5;
  case 6:
    if (*(int *)(param_1 + 200) != 0) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),"PAUSE_MSG_13",0,0xffffffff);
      FUN_00ce4d70(5);
      return;
    }
    pcVar1 = "PAUSE_MSG_12";
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),pcVar1,0,0xffffffff);
switchD_00994167_caseD_5:
  FUN_00ce4d70(5);
  return;
}

// 009A5060  cPauseMenu::vf08  size=916  [class]
void __fastcall cPauseMenu::vf08(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_4;
  
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_00cb25d0(0x29);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_00cb25d0(0x3d);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = FUN_00cb25d0(0x2a);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  piVar3 = (int *)FUN_00c1b9a0();
  iVar4 = (**(code **)(*piVar3 + 0xa0))();
  if (iVar4 == 0) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x70),0);
  }
  else {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x70),1);
    FUN_00ce4ff0(*(undefined4 *)(param_1 + 0x74),iVar4,0);
    FUN_00cb2380(*(undefined4 *)(param_1 + 0x70),0x40000000,0x41200000,0);
  }
  *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x88) * 4) = 0;
  uStack_4 = 0.0;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x88) * 4) = 1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x88) * 4) = 2;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  iVar4 = FUN_00d467c0();
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x88) * 4) = 3;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
  else {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),0);
    uStack_4 = -33.0;
  }
  bVar1 = true;
  if ((((DAT_018b9174 == 0xc08) || (DAT_018b9174 == 0xc09)) || (DAT_018b9174 == 0xd20)) ||
     (DAT_018b9174 == 0xd21)) {
    bVar1 = false;
  }
  if (((((byte)DAT_01bea060 & 0x40) == 0) || (((byte)DAT_01bea094 & 4) != 0)) || (!bVar1)) {
    *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x88) * 4) = 4;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x2c),0x42040000);
    uStack_4 = 0.0;
  }
  else {
    *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x88) * 4) = 6;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    *(undefined4 *)(param_1 + 0x8c + *(int *)(param_1 + 0x88) * 4) = 4;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x34),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x34),uStack_4 + 33.0);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x2c),uStack_4 + 66.0);
    uStack_4 = uStack_4 - 17.0;
  }
  FUN_00cb2900(*(undefined4 *)(param_1 + 0x78),uStack_4);
  if (DAT_0188eabc == 1) {
    *(undefined4 *)(param_1 + 0x84) = 1;
  }
  else if (DAT_0188eabc == 2) {
    *(undefined4 *)(param_1 + 0x84) = 2;
  }
  FUN_009940c0(1);
  FUN_00994150(*(undefined4 *)(param_1 + 0x84));
  FUN_00ce4d70(4);
  return;
}

// 009A5400  FUN_009a5400  size=778  [callgraph]
void __fastcall FUN_009a5400(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = -1;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      cVar2 = FUN_00d0d3e0(2,iVar4);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0x84) = iVar4;
        FUN_009940c0(0);
        FUN_00994150(*(undefined4 *)(param_1 + 0x84));
        FUN_00e5e050("core_se_sys_cursor",0);
        iVar3 = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x88));
  }
  cVar2 = FUN_00cac7e0(0x40008,0);
  if (((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(0), cVar2 == '\0')) || (iVar3 != -1)) {
    cVar2 = FUN_00cac7e0(0x80004,0);
    if (((cVar2 == '\0') && (cVar2 = FUN_00cac9c0(1), cVar2 == '\0')) || (iVar3 != -1)) {
      cVar2 = FUN_00ce12f0(0);
      if ((cVar2 == '\0') && (iVar3 == -1)) {
        cVar2 = FUN_00ce1360(0);
        if (cVar2 == '\0') {
          cVar2 = FUN_00cac640(0x100,0);
          if ((cVar2 == '\0') && (cVar2 = FUN_00cac960(), cVar2 == '\0')) {
            return;
          }
          DAT_0188eabc = 0;
          iVar4 = DAT_0188eabc;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x84);
          if (*(int *)(param_1 + 0x8c + *(int *)(param_1 + 0x84) * 4) != 0) {
            *(undefined4 *)(param_1 + 0x84) = 0;
            FUN_009940c0(0);
            FUN_00994150(*(undefined4 *)(param_1 + 0x84));
            FUN_00e5e050("core_se_sys_cancel",0);
            return;
          }
        }
      }
      else {
        DAT_0188eabc = *(int *)(param_1 + 0x84);
        iVar3 = *(int *)(param_1 + 0x8c + DAT_0188eabc * 4);
        iVar4 = DAT_0188eabc;
        if (iVar3 != 0) {
          if (iVar3 == 1) {
            *(undefined4 *)(param_1 + 0xb4) = 6;
            FUN_00e5e050("core_se_sys_decide_l",0);
            return;
          }
          if (iVar3 == 2) {
            *(undefined4 *)(param_1 + 0xb4) = 5;
            FUN_00e5e050("core_se_sys_decide_l",0);
            return;
          }
          if (iVar3 == 3) {
            FUN_00ce4d80(4);
            (**(code **)(*(int *)(param_1 + 0xb8) + 4))(0x25,0,1);
            *(undefined4 *)(param_1 + 0x80) = 2;
            FUN_00e5e050("core_se_sys_decide_s",0);
            return;
          }
          if (iVar3 != 6) {
            if (iVar3 == 4) {
              FUN_00ce4d80(4);
              uVar5 = 0x26;
              iVar3 = FUN_00416910(0x19);
              if (iVar3 != 0) {
                uVar5 = 0x27;
              }
              (**(code **)(*(int *)(param_1 + 0xb8) + 4))(uVar5,0,1);
              *(undefined4 *)(param_1 + 0x80) = 6;
              FUN_00e5e050("core_se_sys_decide_s",0);
            }
            return;
          }
          FUN_00ce4d80(4);
          if (*(int *)(param_1 + 200) == 0) {
            uVar5 = 0x2c;
          }
          else {
            uVar5 = 0x3f;
          }
          (**(code **)(*(int *)(param_1 + 0xb8) + 4))(uVar5,0,1);
          *(undefined4 *)(param_1 + 0x80) = 4;
          FUN_00e5e050("core_se_sys_decide_l",0);
          return;
        }
      }
      DAT_0188eabc = iVar4;
      *(undefined4 *)(param_1 + 0xb4) = 2;
      FUN_00e5e1b0("bgm_Paused_Exit");
      FUN_00e5e050("core_se_sys_pause_out",0);
      return;
    }
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    if (*(int *)(param_1 + 0x88) + -1 < *(int *)(param_1 + 0x84)) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0x84);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x88) + -1;
    }
  }
  FUN_009940c0(0);
  FUN_00994150(*(undefined4 *)(param_1 + 0x84));
  FUN_00e5e050("core_se_sys_cursor",0);
  return;
}

// 009B46D0  cPauseMenu::vf00  size=86  [class]
undefined4 * __thiscall cPauseMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cfe0f0(2);
  param_1[0x2e] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[0x2f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2f])(1);
    param_1[0x2f] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B4730  cPauseMenu::vf14  size=472  [class]
void __fastcall cPauseMenu::vf14(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    if (*(int *)(param_1 + 0xac) != 0) {
      fVar3 = (float10)FUN_00cacf20();
      fVar3 = (float10)*(float *)(param_1 + 0xb0) - fVar3;
      *(float *)(param_1 + 0xb0) = (float)fVar3;
      if (fVar3 <= (float10)0) {
        *(float *)(param_1 + 0xb0) = (float)(float10)0;
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
      goto LAB_009b47b1;
    }
  }
  else {
    fVar2 = (float10)FUN_00cacf20();
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0xb0);
    *(float *)(param_1 + 0xb0) = (float)fVar2;
    fVar3 = (float10)1;
    if (fVar3 < fVar2 != (fVar3 == fVar2)) {
      *(float *)(param_1 + 0xb0) = (float)fVar3;
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
LAB_009b47b1:
    FUN_00cb2740(*(undefined4 *)(param_1 + 0xb0));
  }
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    if (*(int *)(param_1 + 0xb4) != 1) {
      return;
    }
    FUN_00cb2600(1);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  case 1:
    FUN_009a5400();
    if (*(int *)(param_1 + 0xb4) - 2U < 6) {
      *(undefined4 *)(param_1 + 0x80) = 8;
    }
    FUN_00cb2600(1);
    return;
  case 2:
    iVar1 = FUN_00999fa0();
    if (iVar1 == 2) {
      FUN_009398e0();
      *(undefined4 *)(param_1 + 0x80) = 3;
      return;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0xb4) = 3;
    *(undefined4 *)(param_1 + 0x80) = 8;
    return;
  case 4:
    iVar1 = FUN_00999fa0();
    if (iVar1 == 2) {
      FUN_009398e0();
      *(undefined4 *)(param_1 + 0x80) = 5;
      return;
    }
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x80) = 8;
    *(uint *)(param_1 + 0xb4) = (*(int *)(param_1 + 200) != 0) + 7;
    return;
  case 6:
    iVar1 = FUN_00999fa0();
    if (iVar1 == 2) {
      FUN_009398e0();
      FUN_00ca5770();
      *(undefined4 *)(param_1 + 0x80) = 7;
      return;
    }
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xb4) = 4;
    *(undefined4 *)(param_1 + 0x80) = 8;
  default:
    goto switchD_009b47d1_default;
  }
  if (iVar1 == 1) {
    FUN_00ce4d70(4);
    *(undefined4 *)(param_1 + 0x80) = 1;
    return;
  }
switchD_009b47d1_default:
  return;
}

