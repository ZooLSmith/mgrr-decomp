// src/misc/cConfigMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098E7E0..009BF9E0, 14 functions

#include "mgrr.h"
#include "cConfigMenu.h"

// 0098E7E0  FUN_0098e7e0  size=503  [callgraph]
void __thiscall FUN_0098e7e0(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_39",0,0xc);
    return;
  case 1:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_40",0,0xc);
    return;
  case 2:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_41",0,0xc);
    return;
  case 3:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_42",0,0xc);
    return;
  case 4:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_43",0,0xc);
    return;
  case 5:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_09",0,0xc);
    return;
  case 6:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_44",0,0xc);
    return;
  case 7:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_06",0,0xc);
    return;
  case 8:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_49",0,0xc);
    return;
  case 9:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_50",0,0xc);
    return;
  case 10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_45",0,0xc);
    return;
  case 0xb:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_51",0,0xc);
    return;
  case 0xc:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_04",0,0xc);
    return;
  case 0xd:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_17",0,0xc);
    return;
  case 0xe:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_23",0,0xc);
    return;
  case 0xf:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_22",0,0xc);
    return;
  case 0x10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_46",0,0xc);
    return;
  case 0x11:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_47",0,0xc);
    return;
  case 0x12:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_48",0,0xc);
    return;
  case 0x13:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_13",0,0xc);
    return;
  case 0x14:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_26",0,0xc);
    return;
  case 0x15:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_COMBO_56",0,0xc);
    return;
  case 0x16:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x24),"MANUAL_CONTROL_52",0,0xc);
  }
  return;
}

// 0098EC00  cConfigMenu::vf0C  size=83  [class]
void __fastcall cConfigMenu::vf0C(int param_1)

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
      FUN_00d389f0(0x15,iVar2,0,0,uVar1,uVar4,uVar5);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 0x11);
  }
  return;
}

// 0098EC60  FUN_0098ec60  size=127  [callgraph]
void __fastcall FUN_0098ec60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x470);
  do {
    *puVar3 = 0;
    if (puVar3[-0x17] != *(int *)((int)puVar3 + ((int)&DAT_01b779f0 - param_1))) {
      *puVar3 = 1;
    }
    if (iVar4 != 0x16) {
      iVar1 = 0;
      piVar2 = (int *)(param_1 + 0x414);
      do {
        if (((iVar1 != 0x16) && (iVar4 != iVar1)) && (puVar3[-0x17] == *piVar2)) {
          *puVar3 = 2;
          break;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < 0x17);
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
    if (0x16 < iVar4) {
      if (*(int *)(param_1 + 0x46c) == *(int *)(param_1 + 0x448)) {
        *(undefined4 *)(param_1 + 0x4a4) = 2;
        *(undefined4 *)(param_1 + 0x4c8) = 2;
      }
      return;
    }
  } while( true );
}

// 0098ECE0  FUN_0098ece0  size=387  [callgraph]
void __thiscall FUN_0098ece0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_8;
  int local_4;
  
  local_4 = 0;
  param_2 = (*(int *)(param_1 + 0x4d4) - *(int *)(param_1 + 0x4d8)) - param_2;
  if ((int)param_2 < 0) {
    local_4 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
    param_2 = 0;
  }
  if (local_4 < 0x11) {
    local_8 = &DAT_0188ea60 + param_2;
    piVar3 = (int *)((local_4 + 4) * 0x34 + param_1);
    local_4 = 0x11 - local_4;
    do {
      if ((int)param_2 < 0x17) {
        iVar1 = *local_8;
        uVar2 = FUN_00cc7280(*(undefined4 *)(param_1 + 0x414 + iVar1 * 4));
        FUN_00cb2ce0(piVar3[-2],uVar2);
        FUN_0098e7e0(iVar1);
        iVar1 = *(int *)(param_1 + 0x470 + iVar1 * 4);
        if (iVar1 == 2) {
          FUN_00cb2310(piVar3[-4],1);
          FUN_00cb2310(piVar3[-5],0);
          if (*piVar3 != 2) {
            FUN_00ce4d70(10);
          }
          *piVar3 = 2;
        }
        else if (iVar1 == 1) {
          FUN_00cb2310(piVar3[-5],param_2 == *(uint *)(param_1 + 0x4d4));
          FUN_00cb2310(piVar3[-4],0);
          if (*piVar3 != 1) {
            FUN_00ce4d70(9);
          }
          *piVar3 = 1;
        }
        else {
          FUN_00cb2310(piVar3[-5],0);
          if (*piVar3 != 2) {
            if (*piVar3 != 0) {
              FUN_00ce4d70(8);
            }
            *piVar3 = 0;
          }
          FUN_00cb2310(piVar3[-4],0);
          if (*piVar3 != 1) {
            if (*piVar3 != 0) {
              FUN_00ce4d70(8);
            }
            *piVar3 = 0;
          }
        }
        param_2 = param_2 + 1;
        local_8 = local_8 + 1;
      }
      piVar3 = piVar3 + 0xd;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

// 0098EE70  FUN_0098ee70  size=1124  [callgraph]
void __thiscall FUN_0098ee70(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float local_54 [21];
  
  iVar1 = (&DAT_0188ea60)[param_2];
  uVar5 = *(undefined4 *)(param_1 + 0x414 + iVar1 * 4);
  uVar4 = FUN_00cc7280(uVar5);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x6c),uVar4);
  iVar6 = *(int *)(param_1 + 0x470 + iVar1 * 4);
  if (iVar6 == 1) {
    uVar4 = 9;
  }
  else if (iVar6 == 2) {
    uVar4 = 10;
  }
  else {
    uVar4 = 8;
  }
  FUN_00ce4d70(uVar4);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x4cc) == 2) {
    FUN_00cb2310(uVar4,0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x70),1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x70),"OPTION_MSG_32",0,8);
  }
  else if (*(int *)(param_1 + 0x470 + iVar1 * 4) == 2) {
    FUN_00cb2310(uVar4,0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x70),1);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x70),"OPTION_MSG_31",0,8);
  }
  else {
    FUN_00cb2310(uVar4,1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x70),0);
    uVar5 = FUN_00caa3d0(uVar5);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x7c),uVar5,0,0xffffffff);
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
    FUN_00d29cc0(*(undefined4 *)(param_1 + 0x7c),local_54);
    iVar6 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x7c));
    fVar2 = *(float *)(iVar6 + 0x10) * local_54[0];
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x80),0);
    fVar3 = fVar2 * 0.5;
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x7c),-fVar3);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x80),fVar2 - fVar3);
  }
  switch(iVar1) {
  case 0:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_39",0,0xc);
    return;
  case 1:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_40",0,0xc);
    return;
  case 2:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_41",0,0xc);
    return;
  case 3:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_42",0,0xc);
    return;
  case 4:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_43",0,0xc);
    return;
  case 5:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_09",0,0xc);
    return;
  case 6:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_44",0,0xc);
    return;
  case 7:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_06",0,0xc);
    return;
  case 8:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_49",0,0xc);
    return;
  case 9:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_50",0,0xc);
    return;
  case 10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_45",0,0xc);
    return;
  case 0xb:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_51",0,0xc);
    return;
  case 0xc:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_04",0,0xc);
    return;
  case 0xd:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_17",0,0xc);
    return;
  case 0xe:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_23",0,0xc);
    return;
  case 0xf:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_53",0,0xc);
    return;
  case 0x10:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_46",0,0xc);
    return;
  case 0x11:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_47",0,0xc);
    return;
  case 0x12:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_48",0,0xc);
    return;
  case 0x13:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_13",0,0xc);
    return;
  case 0x14:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_26",0,0xc);
    return;
  case 0x15:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_COMBO_56",0,0xc);
    return;
  case 0x16:
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x74),"MANUAL_CONTROL_52",0,0xc);
  }
  return;
}

// 0099E970  cConfigMenu::~cConfigMenu  size=117  [class]
void __fastcall cConfigMenu::~cConfigMenu(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
    param_1[7] = 0;
  }
  FUN_00cfe0f0(0x15);
  param_1[0x13c] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[0x13d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13d])(1);
    param_1[0x13d] = 0;
  }
  param_1 = param_1 + 0x105;
  iVar1 = 0x10;
  do {
    param_1 = param_1 + -0xd;
    *param_1 = cConfigMenuParts::vftable;
    cCustomObjCtrlManager::~cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  return;
}

// 0099E9F0  FUN_0099e9f0  size=68  [callgraph]
int FUN_0099e9f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x500,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMessWindowCtrl::cMessWindowCtrl();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cConfigMenu";
      FUN_00d29ca0(99,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 0099EA40  FUN_0099ea40  size=2796  [callgraph]
void __fastcall FUN_0099ea40(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  
  cVar6 = '\0';
  do {
    if ((*(int *)(param_1 + 0x4e0) == 1) || (*(int *)(param_1 + 0x4e0) == 2)) break;
    cVar1 = FUN_00d0d3e0(0x15,(int)cVar6);
    if (cVar1 != '\0') {
      iVar7 = (int)cVar6;
      iVar2 = *(int *)(param_1 + 0x4d8) * 0x34;
      iVar4 = (*(int *)(param_1 + 0x4d4) - *(int *)(param_1 + 0x4d8)) + iVar7;
      if (*(int *)(param_1 + 0x4d4) == iVar4) {
        iVar2 = *(int *)(iVar2 + param_1 + 0xd0);
        if (iVar2 == 1) {
          uVar8 = 0xc;
        }
        else if (iVar2 == 2) {
          uVar8 = 0xd;
        }
        else {
          uVar8 = 6;
        }
        FUN_00ce4d70(uVar8);
        *(undefined4 *)(param_1 + 0x4cc) = 2;
        FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
      }
      else {
        iVar2 = iVar2 + 0xa0 + param_1;
        *(int *)(param_1 + 0x4d4) = iVar4;
        if (*(int *)(iVar2 + 0x2c) != 0) {
          FUN_00ce4d70(0);
          if (*(int *)(iVar2 + 0x30) == 1) {
            FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
          }
          if (*(int *)(iVar2 + 0x30) == 1) {
            FUN_00ce4d70(9);
          }
          else if (*(int *)(iVar2 + 0x30) == 2) {
            FUN_00ce4d70(10);
          }
          else {
            FUN_00ce4d70(8);
          }
        }
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(int *)(param_1 + 0x4d8) = iVar7;
        iVar2 = param_1 + 0xa0 + iVar7 * 0x34;
        if (*(int *)(param_1 + 0xcc + iVar7 * 0x34) != 1) {
          FUN_00ce4d70(1);
          if (*(int *)(iVar2 + 0x30) == 1) {
            FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
          }
          if (*(int *)(iVar2 + 0x30) == 1) {
            uVar8 = 9;
          }
          else if (*(int *)(iVar2 + 0x30) == 2) {
            uVar8 = 10;
          }
          else {
            uVar8 = 8;
          }
          FUN_00ce4d70(uVar8);
        }
        *(undefined4 *)(iVar2 + 0x2c) = 1;
        FUN_0098ece0(0);
      }
      FUN_00e5e050("core_se_sys_decide_s",0);
      break;
    }
    cVar6 = cVar6 + '\x01';
  } while (cVar6 < '\x0f');
  if (*(int *)(param_1 + 0x4e0) == 1) {
    iVar2 = FUN_00ce4dd0(1);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x4d8) * 0x34 + 0xa0 + param_1;
    if (*(int *)(iVar2 + 0x2c) != 1) {
      FUN_00ce4dc0(1,1);
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
      }
      if (*(int *)(iVar2 + 0x30) == 1) {
        uVar8 = 9;
      }
      else if (*(int *)(iVar2 + 0x30) == 2) {
        uVar8 = 10;
      }
      else {
        uVar8 = 8;
      }
      FUN_00ce4d70(uVar8);
    }
    *(undefined4 *)(iVar2 + 0x2c) = 1;
    iVar2 = *(int *)(param_1 + 0x4d8) * 0x34 + 0xd4 + param_1;
    if (*(int *)(iVar2 + 0x2c) != 0) {
      FUN_00ce4dc0(0,1);
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
      }
      if (*(int *)(iVar2 + 0x30) == 1) {
        uVar8 = 9;
      }
      else if (*(int *)(iVar2 + 0x30) == 2) {
        uVar8 = 10;
      }
      else {
        uVar8 = 8;
      }
      FUN_00ce4d70(uVar8);
    }
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    FUN_0098ece0(0);
    if (*(int *)(param_1 + 0x4d4) == 0) {
      *(undefined4 *)(param_1 + 0x4e8) = 0;
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x84),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x88),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x8c),0);
      *(undefined4 *)(param_1 + 0x4e0) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x4ec) == 0) {
      *(undefined4 *)(param_1 + 0x4ec) = 1;
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x90),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x94),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x98),6);
    }
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x4e0) == 2) {
    iVar2 = FUN_00ce4dd0(2);
    if (iVar2 == 0) {
      return;
    }
    FUN_00ce4dc0(1,1);
    iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
    iVar2 = iVar4 + 0xa0 + param_1;
    if (*(int *)(iVar4 + 0xcc + param_1) != 1) {
      FUN_00ce4dc0(1,1);
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
      }
      if (*(int *)(iVar2 + 0x30) == 1) {
        uVar8 = 9;
      }
      else if (*(int *)(iVar2 + 0x30) == 2) {
        uVar8 = 10;
      }
      else {
        uVar8 = 8;
      }
      FUN_00ce4d70(uVar8);
    }
    *(undefined4 *)(iVar2 + 0x2c) = 1;
    iVar2 = *(int *)(param_1 + 0x4d8) * 0x34 + 0xd4 + param_1;
    if (*(int *)(iVar2 + 0x2c) != 0) {
      FUN_00ce4dc0(0,1);
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
      }
      if (*(int *)(iVar2 + 0x30) == 1) {
        uVar8 = 9;
      }
      else if (*(int *)(iVar2 + 0x30) == 2) {
        uVar8 = 10;
      }
      else {
        uVar8 = 8;
      }
      FUN_00ce4d70(uVar8);
    }
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    FUN_0098ece0(0);
    if (*(int *)(param_1 + 0x4d4) == 0x16) {
      *(undefined4 *)(param_1 + 0x4ec) = 0;
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x90),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x94),0);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x98),0);
      *(undefined4 *)(param_1 + 0x4e0) = 0;
      return;
    }
    if (*(int *)(param_1 + 0x4e8) == 0) {
      *(undefined4 *)(param_1 + 0x4e8) = 1;
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x84),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x88),6);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x8c),6);
    }
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    return;
  }
  cVar6 = FUN_00ce12f0(0);
  if (cVar6 != '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x4d8) * 0x34 + param_1 + 0xd0);
    if (iVar2 == 1) {
      uVar8 = 0xc;
    }
    else if (iVar2 == 2) {
      uVar8 = 0xd;
    }
    else {
      uVar8 = 6;
    }
    FUN_00ce4d70(uVar8);
    *(undefined4 *)(param_1 + 0x4cc) = 2;
    FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
    FUN_00e5e050("core_se_sys_decide_s",0);
    return;
  }
  cVar6 = FUN_00ce1360(0);
  if ((cVar6 != '\0') || (cVar6 = FUN_00cac960(), cVar6 != '\0')) {
    iVar2 = 0;
    piVar3 = (int *)(param_1 + 0x470);
    piVar5 = piVar3;
    do {
      if (*piVar5 == 2) {
        *(undefined4 *)(param_1 + 0x4d0) = 0;
        *(undefined4 *)(param_1 + 0x4cc) = 3;
        FUN_00e5e050("core_se_sys_cancel",0);
        return;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar2 < 0x17);
    iVar2 = 0;
    do {
      if (*piVar3 == 1) {
        *(undefined4 *)(param_1 + 0x4d0) = 4;
        *(undefined4 *)(param_1 + 0x4cc) = 3;
        FUN_00e5e050("core_se_sys_cancel",0);
        return;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < 0x17);
    *(undefined4 *)(param_1 + 0x4cc) = 4;
    FUN_00e5e050("core_se_sys_cancel",0);
    return;
  }
  cVar6 = FUN_00cac7e0(8,0);
  if (((cVar6 == '\0') && (cVar6 = FUN_00cac7e0(0x40000,0), cVar6 == '\0')) &&
     (cVar6 = FUN_00cac9c0(0), cVar6 == '\0')) {
    cVar6 = FUN_00cac7e0(4,0);
    if (((cVar6 == '\0') && (cVar6 = FUN_00cac7e0(0x80000,0), cVar6 == '\0')) &&
       (cVar6 = FUN_00cac9c0(1), cVar6 == '\0')) {
      cVar6 = FUN_00cac640(0x40,0);
      if ((cVar6 == '\0') && (iVar2 = FUN_00dd9400(0x58), iVar2 == 0)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x4d0) = 2;
      *(undefined4 *)(param_1 + 0x4cc) = 3;
      FUN_00e5e050("core_se_sys_decide_s",0);
      return;
    }
    if (0x15 < *(int *)(param_1 + 0x4d4)) {
      return;
    }
    if (0xd < *(int *)(param_1 + 0x4d8)) {
      FUN_0098ece0(1);
      *(int *)(param_1 + 0x4d4) = *(int *)(param_1 + 0x4d4) + 1;
      if (0x16 < *(int *)(param_1 + 0x4d4)) {
        *(undefined4 *)(param_1 + 0x4d4) = 0x16;
      }
      iVar2 = *(int *)(param_1 + 0x4d8) * 0x34 + 0xa0 + param_1;
      if (*(int *)(iVar2 + 0x2c) != 0) {
        FUN_00ce4dc0(0,1);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
      iVar2 = iVar4 + 0xd4 + param_1;
      if (*(int *)(iVar4 + 0x100 + param_1) != 1) {
        FUN_00ce4dc0(1,1);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 1;
      iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
      iVar2 = iVar4 + 0xd4 + param_1;
      if (*(int *)(iVar4 + 0x100 + param_1) != 0) {
        FUN_00ce4d70(0);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
      iVar2 = iVar4 + 0x108 + param_1;
      if (*(int *)(iVar4 + 0x134 + param_1) != 1) {
        FUN_00ce4d70(1);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 1;
      *(undefined4 *)(param_1 + 0x4e0) = 2;
      FUN_00ce4d70(2);
      uVar8 = *(undefined4 *)(param_1 + 0x24);
LAB_0099f227:
      FUN_00ce4ce0(uVar8,3);
      goto LAB_0099f231;
    }
    iVar2 = *(int *)(param_1 + 0x4d4) + 1;
    *(int *)(param_1 + 0x4d4) = iVar2;
    if (0x16 < iVar2) {
      *(undefined4 *)(param_1 + 0x4d4) = 0x16;
    }
    iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
    iVar2 = iVar4 + 0xa0 + param_1;
    if (*(int *)(iVar4 + 0xcc + param_1) != 0) {
      FUN_00ce4d70(0);
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
      }
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00ce4d70(9);
      }
      else if (*(int *)(iVar2 + 0x30) == 2) {
        FUN_00ce4d70(10);
      }
      else {
        FUN_00ce4d70(8);
      }
    }
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x4d4) < 1) {
      return;
    }
    if (*(int *)(param_1 + 0x4d8) < 1) {
      FUN_0098ece0(1);
      piVar3 = (int *)(param_1 + 0x4d4);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 < 0) {
        *(undefined4 *)(param_1 + 0x4d4) = 0;
      }
      FUN_00ce4dc0(2,1);
      iVar2 = *(int *)(param_1 + 0x4d8) * 0x34 + 0xa0 + param_1;
      if (*(int *)(iVar2 + 0x2c) != 0) {
        FUN_00ce4dc0(0,1);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
      iVar2 = iVar4 + 0xa0 + param_1;
      if (*(int *)(iVar4 + 0xcc + param_1) != 1) {
        FUN_00ce4d70(1);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 1;
      iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
      iVar2 = iVar4 + 0xd4 + param_1;
      if (*(int *)(iVar4 + 0x100 + param_1) != 1) {
        FUN_00ce4dc0(1,1);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 1;
      iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
      iVar2 = iVar4 + 0xd4 + param_1;
      if (*(int *)(iVar4 + 0x100 + param_1) != 0) {
        FUN_00ce4d70(0);
        if (*(int *)(iVar2 + 0x30) == 1) {
          FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
        }
        if (*(int *)(iVar2 + 0x30) == 1) {
          uVar8 = 9;
        }
        else if (*(int *)(iVar2 + 0x30) == 2) {
          uVar8 = 10;
        }
        else {
          uVar8 = 8;
        }
        FUN_00ce4d70(uVar8);
      }
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x4e0) = 1;
      FUN_00ce4d70(1);
      uVar8 = *(undefined4 *)(param_1 + 0x20);
      goto LAB_0099f227;
    }
    iVar2 = *(int *)(param_1 + 0x4d4) + -1;
    *(int *)(param_1 + 0x4d4) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x4d4) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
    iVar2 = iVar4 + 0xa0 + param_1;
    if (*(int *)(iVar4 + 0xcc + param_1) == 0) {
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + -1;
    }
    else {
      FUN_00ce4d70(0);
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),1);
      }
      if (*(int *)(iVar2 + 0x30) == 1) {
        FUN_00ce4d70(9);
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + -1;
      }
      else if (*(int *)(iVar2 + 0x30) == 2) {
        FUN_00ce4d70(10);
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + -1;
      }
      else {
        FUN_00ce4d70(8);
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + -1;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x4d8) * 0x34;
  iVar2 = iVar4 + 0xa0 + param_1;
  if (*(int *)(iVar4 + 0xcc + param_1) != 1) {
    FUN_00ce4d70(1);
    if (*(int *)(iVar2 + 0x30) == 1) {
      FUN_00cb2310(*(undefined4 *)(iVar2 + 0x1c),0);
    }
    if (*(int *)(iVar2 + 0x30) == 1) {
      uVar8 = 9;
    }
    else if (*(int *)(iVar2 + 0x30) == 2) {
      uVar8 = 10;
    }
    else {
      uVar8 = 8;
    }
    FUN_00ce4d70(uVar8);
  }
  *(undefined4 *)(iVar2 + 0x2c) = 1;
  FUN_0098ece0(0);
LAB_0099f231:
  FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
  FUN_00e5e050("core_se_sys_cursor",0);
  return;
}

// 0099F530  FUN_0099f530  size=429  [callgraph]
void __fastcall FUN_0099f530(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_00caa010(1);
  uVar4 = FUN_00caa2a0(1);
  iVar1 = (&DAT_0188ea60)[*(int *)(param_1 + 0x4d4)];
  if ((iVar1 != 0x12) && (iVar3 == 0x91)) {
    iVar3 = 0xb7;
  }
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
    uVar4 = 0;
  }
  if (iVar3 != 0xb7) {
    *(int *)(param_1 + 0x414 + iVar1 * 4) = iVar3;
    iVar1 = *(int *)(param_1 + 0x4d8);
    FUN_00ce4d70(1);
    iVar1 = *(int *)(iVar1 * 0x34 + param_1 + 0xd0);
    if (iVar1 == 1) {
      uVar5 = 9;
    }
    else if (iVar1 == 2) {
      uVar5 = 10;
    }
    else {
      uVar5 = 8;
    }
    FUN_00ce4d70(uVar5);
    *(undefined4 *)(param_1 + 0x4cc) = 1;
    FUN_0098ec60();
    FUN_0098ece0(0);
    FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
    FUN_00e5e050("core_se_sys_decide_s",0);
    return;
  }
  if (uVar4 != 0) {
    *(uint *)(param_1 + 0x414 + iVar1 * 4) = uVar4 | 0x80000000;
    iVar1 = *(int *)(param_1 + 0x4d8);
    FUN_00ce4d70(1);
    iVar1 = *(int *)(iVar1 * 0x34 + param_1 + 0xd0);
    if (iVar1 == 1) {
      uVar5 = 9;
    }
    else if (iVar1 == 2) {
      uVar5 = 10;
    }
    else {
      uVar5 = 8;
    }
    FUN_00ce4d70(uVar5);
    *(undefined4 *)(param_1 + 0x4cc) = 1;
    FUN_0098ec60();
    FUN_0098ece0(0);
    FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
    FUN_00e5e050("core_se_sys_decide_s",0);
    return;
  }
  cVar2 = FUN_00ce1360(0);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x4d8);
    FUN_00ce4d70(1);
    iVar1 = *(int *)(iVar1 * 0x34 + param_1 + 0xd0);
    if (iVar1 == 1) {
      uVar5 = 9;
    }
    else if (iVar1 == 2) {
      uVar5 = 10;
    }
    else {
      uVar5 = 8;
    }
    FUN_00ce4d70(uVar5);
    *(undefined4 *)(param_1 + 0x4cc) = 1;
    FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
    FUN_00e5e050("core_se_sys_cancel",0);
  }
  return;
}

// 0099F6E0  FUN_0099f6e0  size=427  [callgraph]
void __fastcall FUN_0099f6e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 local_a0 [48];
  undefined4 auStack_70 [27];
  
  switch(*(undefined4 *)(param_1 + 0x4d0)) {
  case 0:
    (**(code **)(*(int *)(param_1 + 0x4f0) + 4))(0x4e,1,1);
    *(undefined4 *)(param_1 + 0x4d0) = 1;
    return;
  case 1:
    iVar2 = FUN_00999fa0();
    bVar4 = iVar2 == -1;
    break;
  case 2:
    (**(code **)(*(int *)(param_1 + 0x4f0) + 4))(0x51,0,1);
    *(undefined4 *)(param_1 + 0x4d0) = 3;
    return;
  case 3:
    iVar2 = FUN_00999fa0();
    if (iVar2 == 2) {
      FUN_009c42f0(local_a0);
      iVar2 = 0;
      puVar3 = (undefined4 *)(param_1 + 0x470);
      do {
        puVar3[-0x17] = auStack_70[iVar2];
        *puVar3 = 0;
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < 0x17);
      *(undefined4 *)(param_1 + 0x4cc) = 1;
      FUN_0098ec60();
      FUN_0098ece0(0);
      FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
      return;
    }
    bVar4 = iVar2 == 1;
    break;
  case 4:
    (**(code **)(*(int *)(param_1 + 0x4f0) + 4))(0x4f,0,1);
    *(undefined4 *)(param_1 + 0x4d0) = 5;
    return;
  case 5:
    iVar2 = FUN_00999fa0();
    if (iVar2 == 2) {
      puVar1 = &DAT_01b77e60;
      puVar3 = (undefined4 *)(param_1 + 0x414);
      do {
        *puVar1 = *puVar3;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      } while ((int)puVar1 < 0x1b77ebc);
      FUN_009c8cc0();
      *(undefined4 *)(param_1 + 0x4d0) = 6;
      DAT_01dc2d8c = 1;
      return;
    }
    bVar4 = iVar2 == 1;
    goto LAB_0099f87d;
  case 6:
    iVar2 = FUN_009c5690();
    if (iVar2 != 0) {
      return;
    }
    bVar4 = DAT_018b5758 == 0;
LAB_0099f87d:
    if (bVar4) {
      *(undefined4 *)(param_1 + 0x4cc) = 4;
    }
  default:
    goto switchD_0099f6fe_default;
  }
  if (bVar4) {
    *(undefined4 *)(param_1 + 0x4cc) = 1;
    return;
  }
switchD_0099f6fe_default:
  return;
}

// 009B18D0  cConfigMenu::vf00  size=30  [class]
undefined4 __thiscall cConfigMenu::vf00(undefined4 param_1,byte param_2)

{
  ~cConfigMenu();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B18F0  cConfigMenu::vf08  size=1082  [class]
void __fastcall cConfigMenu::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_28;
  
  uVar3 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar3 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar3 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar3 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar3 = FUN_00cb25d0(0xf);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar3 = FUN_00cb25d0(0x10);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar3 = FUN_00cb25d0(0x11);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar3 = FUN_00cb25d0(0x12);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  uVar3 = FUN_00cb25d0(0x13);
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar3 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar3 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar3 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar3 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar3 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar3 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = FUN_00cb25d0(0x1b);
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  uVar3 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  uVar3 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar3 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  uVar3 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  uVar3 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  uVar3 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar3 = FUN_00cb25d0(0x5d);
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  uVar3 = FUN_00cb25d0(0x5e);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  uVar3 = FUN_00cb25d0(0x5f);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  uVar3 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  local_28 = (undefined4 *)(param_1 + 0x28);
  iVar6 = 0;
  iVar7 = param_1 + 0xa0;
  do {
    uVar3 = FUN_00cb3300(*local_28);
    FUN_00cb2240(uVar3);
    uVar3 = FUN_00cb25d0(0x5a);
    *(undefined4 *)(iVar7 + 0x1c) = uVar3;
    uVar3 = FUN_00cb25d0(0x5b);
    *(undefined4 *)(iVar7 + 0x20) = uVar3;
    uVar3 = FUN_00cb25d0(0x5c);
    *(undefined4 *)(iVar7 + 0x24) = uVar3;
    uVar3 = FUN_00cb25d0(99);
    *(undefined4 *)(iVar7 + 0x28) = uVar3;
    FUN_00ce4dc0(0,1);
    FUN_00ce4dc0(8,1);
    FUN_00cb2310(*(undefined4 *)(iVar7 + 0x1c),0);
    FUN_00cb2310(*(undefined4 *)(iVar7 + 0x20),0);
    uVar5 = (uint)(iVar6 == 0);
    *(undefined4 *)(iVar7 + 0x2c) = 0;
    *(undefined4 *)(iVar7 + 0x30) = 0;
    if (uVar5 != 0) {
      FUN_00ce4d70(uVar5 != 0);
      if (*(int *)(iVar7 + 0x30) == 1) {
        FUN_00cb2310(*(undefined4 *)(iVar7 + 0x1c),uVar5 == 0);
      }
      if (*(int *)(iVar7 + 0x30) == 1) {
        uVar3 = 9;
      }
      else if (*(int *)(iVar7 + 0x30) == 2) {
        uVar3 = 10;
      }
      else {
        uVar3 = 8;
      }
      FUN_00ce4d70(uVar3);
    }
    *(uint *)(iVar7 + 0x2c) = uVar5;
    iVar2 = (&DAT_0188ea60)[iVar6];
    uVar3 = FUN_00cc7280(*(undefined4 *)(param_1 + 0x414 + iVar2 * 4));
    FUN_00cb2ce0(*(undefined4 *)(iVar7 + 0x28),uVar3);
    FUN_0098e7e0(iVar2);
    local_28 = local_28 + 1;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 0x34;
  } while (iVar6 < 0x11);
  FUN_0098ee70(*(undefined4 *)(param_1 + 0x4d4));
  iVar7 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar7 != 0) {
      uVar3 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar7 + 4) = uVar3;
    }
  }
  *(int *)(param_1 + 0x1c) = iVar7;
  if (iVar7 != 0) {
    puVar4 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x9c));
    uVar3 = *puVar4;
    iVar7 = *(int *)(param_1 + 0x1c);
    uVar1 = puVar4[1];
    FUN_0099a440(iVar7 + 0x8c,&DAT_016575ac,"key_config");
    *(undefined4 *)(iVar7 + 0x10c) = uVar3;
    *(undefined4 *)(iVar7 + 0x118) = 0;
    *(undefined4 *)(iVar7 + 0x110) = uVar1;
    *(undefined4 *)(iVar7 + 0x5c) = 1;
    *(undefined4 *)(iVar7 + 0x114) = 0x41700000;
    iVar7 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar7 + 0x78) = 1;
    *(undefined4 *)(iVar7 + 0x74) = 0;
  }
  FUN_00cb2740(*(undefined4 *)(param_1 + 0x4e4));
  FUN_00ce4dc0(1,1);
  FUN_00cb2600(1);
  FUN_00cb2630(1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x84),0,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x88),0,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x8c),0,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x90),6,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x94),6,1);
  FUN_00ce4d40(*(undefined4 *)(param_1 + 0x98),6,1);
  return;
}

// 009B1D30  cConfigMenu::create  size=201  [class]
void __fastcall cConfigMenu::create(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  switch(*(undefined4 *)(param_1 + 0x4cc)) {
  case 0:
    fVar3 = *(float *)(param_1 + 0x4e4) + 0.1;
    *(float *)(param_1 + 0x4e4) = fVar3;
    if (!NAN(fVar3) && 1.0 < fVar3 != (fVar3 == 1.0)) {
      *(undefined4 *)(param_1 + 0x4e4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x4cc) = 1;
    }
    goto LAB_009b1dc9;
  case 1:
    FUN_0099ea40();
    break;
  case 2:
    FUN_0099f530();
    break;
  case 3:
    FUN_0099f6e0();
    break;
  case 4:
    fVar3 = *(float *)(param_1 + 0x4e4) - 0.1;
    *(float *)(param_1 + 0x4e4) = fVar3;
    if (fVar3 <= 0.0) {
      *(undefined4 *)(param_1 + 0x4e4) = 0;
      *(undefined1 *)(param_1 + 0x4dc) = 1;
      *(undefined4 *)(param_1 + 0x4cc) = 5;
    }
LAB_009b1dc9:
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x4e4));
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar1 = *(undefined4 *)(param_1 + 0x4e4);
    *(undefined4 *)(iVar2 + 0x78) = 1;
    *(undefined4 *)(iVar2 + 0x74) = uVar1;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}

// 009BF9E0  cConfigMenu::create  size=897  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cConfigMenu::create(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00c20a50();
  if (iVar2 != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x544)) {
  case 0:
    fVar1 = *(float *)(param_1 + 0x574) + 0.1;
    *(float *)(param_1 + 0x574) = fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      *(undefined4 *)(param_1 + 0x574) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x544) = 2;
    }
    goto LAB_009bfa39;
  case 1:
    FUN_009b7860();
    break;
  case 2:
    FUN_009b7a40();
    break;
  case 3:
    FUN_00996ab0();
    break;
  case 4:
    FUN_009b8cb0();
    break;
  case 5:
    FUN_009b8e20();
    break;
  case 6:
    FUN_009a8ca0();
    break;
  case 7:
    fVar1 = *(float *)(param_1 + 0x574) + 0.1;
    *(float *)(param_1 + 0x574) = fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      *(undefined4 *)(param_1 + 0x574) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x544) = 2;
    }
    goto LAB_009bfb04;
  case 8:
    iVar2 = FUN_0099e9f0();
    *(int *)(param_1 + 0x578) = iVar2;
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01658320);
      *(undefined4 *)(param_1 + 0x544) = 7;
    }
    else {
      *(undefined4 *)(param_1 + 0x544) = 9;
    }
    break;
  case 9:
    (**(code **)(**(int **)(param_1 + 0x578) + 4))();
    if (*(char *)(*(int *)(param_1 + 0x578) + 0x4dc) != '\0') {
      *(undefined4 *)(param_1 + 0x544) = 10;
    }
    break;
  case 10:
    if (*(undefined4 **)(param_1 + 0x578) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x578))(1);
      *(undefined4 *)(param_1 + 0x578) = 0;
    }
    *(undefined4 *)(param_1 + 0x578) = 0;
    *(undefined4 *)(param_1 + 0x544) = 7;
    break;
  case 0xb:
    fVar1 = *(float *)(param_1 + 0x574) - 0.1;
    *(float *)(param_1 + 0x574) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x574) = 0;
      *(undefined4 *)(param_1 + 0x544) = 8;
    }
LAB_009bfb04:
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x574));
    iVar2 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x574);
    *(undefined4 *)(iVar2 + 0x78) = 1;
    break;
  case 0xc:
    iVar2 = FUN_00999fa0();
    if (iVar2 == 2) {
      FUN_009a96a0(1);
      FUN_009c8cc0();
      thunk_FUN_009c7930();
      *(undefined4 *)(param_1 + 0x544) = 0xd;
    }
    else if (iVar2 == 1) {
      FUN_009a96a0(0);
      *(undefined4 *)(param_1 + 0x544) = 0xe;
    }
    break;
  case 0xd:
    iVar2 = FUN_009c5690();
    if (((iVar2 == 0) && (DAT_018b5758 == 0)) &&
       (*(undefined4 *)(param_1 + 0x544) = 0xe,
       *(int *)(param_1 + 0x270) != *(int *)(param_1 + 0x2a8))) {
      *(undefined4 *)(param_1 + 0x544) = 0xf;
    }
    break;
  case 0xe:
    fVar1 = *(float *)(param_1 + 0x574) - 0.1;
    *(float *)(param_1 + 0x574) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x574) = 0;
      *(undefined4 *)(param_1 + 0x544) = 0x11;
      *(undefined1 *)(param_1 + 0x53c) = 1;
      _DAT_01b39218 = 0;
    }
LAB_009bfa39:
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x574));
    iVar2 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x574);
    *(undefined4 *)(iVar2 + 0x78) = 1;
    if ((*(char *)(param_1 + 0x53d) == '\0') && (*(int *)(param_1 + 0x30) != 0)) {
      FUN_00cb2740(*(undefined4 *)(param_1 + 0x574));
    }
    break;
  case 0xf:
    uVar3 = FUN_00cacfc0(DAT_01b77e40);
    FUN_00cacfa0(uVar3);
    DAT_01b391c9 = 1;
    FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
    FUN_00e5e1b0("bgm_pef1_exit");
    goto LAB_009bfd3e;
  case 0x10:
    DAT_01be8e3d = 1;
LAB_009bfd3e:
    _DAT_01b39218 = 0;
    *(undefined4 *)(param_1 + 0x544) = 0x11;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}

