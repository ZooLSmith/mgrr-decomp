// src/unsorted/unit_0099EA40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099EA40..0099F6E0, 3 functions

#include "types.h"

// 0099EA40  FUN_0099ea40  size=2796  [run]
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

// 0099F530  FUN_0099f530  size=429  [run]
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

// 0099F6E0  FUN_0099f6e0  size=427  [run]
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

