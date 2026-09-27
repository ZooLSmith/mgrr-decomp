// src/misc/cTitleMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00994A00..009B50A0, 11 functions

#include "mgrr.h"
#include "cTitleMenu.h"

// 00994A00  cTitleMenu::vf0C  size=361  [class]
void __fastcall cTitleMenu::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d389f0(1,0,0,0,*(int *)(param_1 + 0x18),0xb,1);
    FUN_00d389f0(1,1,0,0,*(undefined4 *)(param_1 + 0x18),0x15,1);
    FUN_00d389f0(1,2,0,0,*(undefined4 *)(param_1 + 0x18),0x1f,1);
    FUN_00d389f0(1,3,0,0,*(undefined4 *)(param_1 + 0x18),0x29,1);
    FUN_00d389f0(1,4,0,0,*(undefined4 *)(param_1 + 0x18),0x33,1);
    FUN_00d389f0(1,5,0,0,*(undefined4 *)(param_1 + 0x18),0x3d,1);
    FUN_00d389f0(1,6,0,0,*(undefined4 *)(param_1 + 0x18),0x47,1);
    FUN_00d389f0(1,7,0,0,*(undefined4 *)(param_1 + 0x18),0x51,1);
    FUN_00d389f0(1,8,0,0,*(undefined4 *)(param_1 + 0x18),0x5b,1);
  }
  return;
}

// 00994B70  FUN_00994b70  size=38  [callgraph]
void __fastcall FUN_00994b70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdc) != 0) {
    iVar1 = FUN_00df7c00(4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xe0) = 1;
    }
  }
  return;
}

// 00994BA0  FUN_00994ba0  size=39  [callgraph]
bool FUN_00994ba0(void)

{
  int iVar1;
  
  iVar1 = FUN_009c5270();
  if (iVar1 != 0) {
    FUN_00dd5650(&DAT_01656af4);
  }
  return iVar1 == 0;
}

// 00994C00  FUN_00994c00  size=47  [callgraph]
undefined4 FUN_00994c00(void)

{
  int iVar1;
  
  iVar1 = FUN_009c51b0(8,0xffffffff);
  if (iVar1 == 0) {
    iVar1 = FUN_009c5530(&DAT_01b6efe0);
    if (iVar1 != 8) {
      return 1;
    }
  }
  return 0;
}

// 00994C30  FUN_00994c30  size=47  [callgraph]
undefined4 FUN_00994c30(void)

{
  int iVar1;
  
  iVar1 = FUN_009c51b0(9,0xffffffff);
  if (iVar1 == 0) {
    iVar1 = FUN_009c5530(&DAT_01b6efe0);
    if (iVar1 != 9) {
      return 1;
    }
  }
  return 0;
}

// 00994EF0  FUN_00994ef0  size=38  [callgraph]
byte __thiscall FUN_00994ef0(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == param_2) {
      return bVar1;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 9);
  return 0xff;
}

// 00994F20  FUN_00994f20  size=13  [callgraph]
void __thiscall FUN_00994f20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  return;
}

// 00994F30  FUN_00994f30  size=790  [callgraph]
undefined4 FUN_00994f30(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_124 [73];
  
  local_124[0] = 0x2e130;
  local_124[1] = 0x2e012;
  local_124[2] = 0x2e702;
  local_124[3] = 0x2c010;
  local_124[4] = 0x2c012;
  local_124[5] = 0x2c030;
  local_124[6] = 0x2c033;
  local_124[7] = 0x2c035;
  local_124[8] = 0x2c03f;
  local_124[9] = 0x2c040;
  local_124[10] = 0x2c060;
  local_124[0xb] = 0x2c070;
  local_124[0xc] = 0x2c071;
  local_124[0xd] = 0x2c080;
  local_124[0xe] = 0x2c081;
  local_124[0xf] = 0x2c100;
  local_124[0x10] = 0x2c120;
  local_124[0x11] = 0x2c122;
  local_124[0x12] = 0x2c110;
  local_124[0x13] = 0x2c140;
  local_124[0x14] = 0x2c142;
  local_124[0x15] = 0x2c144;
  local_124[0x16] = 0x2c14f;
  local_124[0x17] = 0x2c150;
  local_124[0x18] = 0x2c152;
  local_124[0x19] = 0x2c15f;
  local_124[0x1a] = 0x2c160;
  local_124[0x1b] = 0x2c170;
  local_124[0x1c] = 0x2c190;
  local_124[0x1d] = 0x2c19a;
  local_124[0x1e] = 0x2c200;
  local_124[0x1f] = 0x2c202;
  local_124[0x20] = 0x2c206;
  local_124[0x21] = 0x2c207;
  local_124[0x22] = 0x2c209;
  local_124[0x23] = 0x2c20c;
  local_124[0x24] = 0x2c220;
  local_124[0x25] = 0x2c330;
  local_124[0x26] = 0x2c700;
  local_124[0x27] = 0x2c701;
  local_124[0x28] = 0x2c70a;
  local_124[0x29] = 0x2c70b;
  local_124[0x2a] = 0x2c70c;
  local_124[0x2b] = 0x2c70e;
  local_124[0x2c] = 0x20800;
  local_124[0x2d] = 0x20801;
  local_124[0x2e] = 0x28010;
  local_124[0x2f] = 0x28012;
  local_124[0x30] = 0x28030;
  local_124[0x31] = 0x28033;
  local_124[0x32] = 0x28035;
  local_124[0x33] = 0x2803f;
  local_124[0x34] = 0x28040;
  local_124[0x35] = 0x28060;
  local_124[0x36] = 0x28070;
  local_124[0x37] = 0x28071;
  local_124[0x38] = 0x28080;
  local_124[0x39] = 0x28081;
  local_124[0x3a] = 0x28120;
  local_124[0x3b] = 0x28122;
  local_124[0x3c] = 0x28140;
  local_124[0x3d] = 0x28142;
  local_124[0x3e] = 0x28144;
  local_124[0x3f] = 0x2814f;
  local_124[0x40] = 0x28150;
  local_124[0x41] = 0x28152;
  local_124[0x42] = 0x2815f;
  local_124[0x43] = 0x28160;
  local_124[0x44] = 0x28170;
  local_124[0x45] = 0x28190;
  local_124[0x46] = 0x28220;
  local_124[0x47] = 0x28230;
  local_124[0x48] = 0x28800;
  uVar3 = 0;
  do {
    iVar2 = FUN_00e9e860(local_124[uVar3]);
    if (iVar2 == 0) {
      uVar1 = local_124[uVar3];
      FUN_00e9e780(uVar1);
      FUN_00dd5650(&DAT_01656c60,uVar1);
      return 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x49);
  return 1;
}

// 009B4AC0  cTitleMenu::vf00  size=105  [class]
undefined4 * __thiscall cTitleMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
    param_1[0x36] = 0;
  }
  FUN_00cfe0f0(1);
  param_1[7] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B4B30  cTitleMenu::vf08  size=1266  [class]
void __fastcall cTitleMenu::vf08(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined2 local_4;
  
  uVar2 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_00cb25d0(0x50);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_00cb25d0(0x1e);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = FUN_00cb25d0(0x1f);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_00cb25d0(0x29);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = FUN_00cb25d0(0x2a);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = FUN_00cb25d0(0x3d);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = FUN_00cb25d0(0x51);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_00cb25d0(0x52);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar2 = FUN_00cb25d0(0x61);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  uVar2 = FUN_00cb25d0(0x62);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x50),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x54),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x58),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x5c),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x60),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 100),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x68),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x6c),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x70),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x74),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x78),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x7c),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x80),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x84),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x88),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x8c),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
  FUN_00ccdf90(*(undefined4 *)(param_1 + 0x94),1,3);
  local_8 = 0x2e524556;
  local_4 = 0x31;
  FUN_00cce090(*(undefined4 *)(param_1 + 0x98),&local_8);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x9c),&local_8);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),0);
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x9c),0);
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 10;
  switch(*(undefined4 *)(param_1 + 0xc4)) {
  case 1:
switchD_009b4e41_caseD_1:
    *(undefined1 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    break;
  case 2:
    FUN_009a6590();
    *(char *)(param_1 + 0xf8) = '\t' - *(char *)(param_1 + 0xfb);
    break;
  case 3:
    FUN_009a6ba0();
    bVar1 = 9 - *(char *)(param_1 + 0xfb);
    *(undefined1 *)(param_1 + 0xc9) = 1;
LAB_009b4e78:
    *(byte *)(param_1 + 0xf8) = bVar1;
    break;
  case 4:
    FUN_009a6590();
    bVar1 = 0;
    do {
      if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == 4) goto LAB_009b4e78;
      bVar1 = bVar1 + 1;
    } while (bVar1 < 9);
    break;
  default:
    switch(DAT_018b9148) {
    case 0xf05:
      FUN_009a6ba0();
      *(undefined1 *)(param_1 + 0xc9) = 1;
      bVar1 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == 7) goto LAB_009b4e78;
        bVar1 = bVar1 + 1;
      } while (bVar1 < 9);
      break;
    case 0xf06:
    case 0xf30:
      FUN_009a6590();
      bVar1 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == 2) goto LAB_009b4e78;
        bVar1 = bVar1 + 1;
      } while (bVar1 < 9);
      break;
    default:
      goto switchD_009b4e41_caseD_1;
    case 0xf08:
      FUN_009a6590();
      bVar1 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == 3) goto LAB_009b4e78;
        bVar1 = bVar1 + 1;
      } while (bVar1 < 9);
      break;
    case 0xf09:
      FUN_009a6590();
      bVar1 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == 0x11) goto LAB_009b4e78;
        bVar1 = bVar1 + 1;
      } while (bVar1 < 9);
      break;
    case 0xf0a:
      FUN_009a6590();
      bVar1 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == 0xf) goto LAB_009b4e78;
        bVar1 = bVar1 + 1;
      } while (bVar1 < 9);
      break;
    case 0xf0b:
      FUN_009a6590();
      bVar1 = 0;
      do {
        if (*(int *)(param_1 + 0xa0 + (char)bVar1 * 4) == 0x10) goto LAB_009b4e78;
        bVar1 = bVar1 + 1;
      } while (bVar1 < 9);
    }
  }
  *(undefined1 *)(param_1 + 0xf9) = 0xff;
  *(undefined1 *)(param_1 + 0xfa) = 0xff;
  FUN_00ce4ce0(*(undefined4 *)
                (param_1 + 0x2c + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),1);
  FUN_00ce4ce0(*(undefined4 *)
                (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),1);
  FUN_00cb2600(1);
  return;
}

// 009B50A0  cTitleMenu::vf14  size=5191  [class]
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cTitleMenu::vf14(int param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 local_dc;
  int local_d4;
  undefined4 local_d0 [51];
  
  iVar8 = 0;
  do {
    FUN_00d38a30(1,iVar8,*(undefined4 *)(param_1 + 0x18));
    iVar8 = iVar8 + 1;
  } while (iVar8 < 9);
  iVar8 = FUN_00c20a50();
  if (iVar8 != 0) {
    return;
  }
  switch(*(int *)(param_1 + 0xcc)) {
  case 0:
    iVar8 = FUN_00994f30();
    if (iVar8 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 2;
    FUN_009a6590();
    cVar2 = '\t' - *(char *)(param_1 + 0xfb);
    *(char *)(param_1 + 0xf8) = cVar2;
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + cVar2 * 4) * 4),1);
    FUN_00ce4ce0(*(undefined4 *)
                  (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),1);
    *(undefined4 *)(param_1 + 0xcc) = 10;
    return;
  case 1:
    if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xd8))(1);
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    iVar8 = FUN_009c73f0(5);
    if (iVar8 != 0) {
      *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 1;
    }
    if ((*(int *)(param_1 + 0xdc) != 0) && (iVar8 = FUN_00df7c00(4), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xe0) = 1;
    }
    iVar8 = FUN_009c73f0(5);
    if ((iVar8 != 0) && (iVar8 = FUN_00994ba0(), iVar8 != 0)) {
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0x3c,1,1);
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
      return;
    }
    goto LAB_009b51f2;
  case 2:
  case 4:
  case 6:
  case 8:
    if ((*(int *)(param_1 + 0xdc) != 0) && (iVar8 = FUN_00df7c00(4), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xe0) = 1;
    }
    iVar8 = FUN_00999fa0();
    if (iVar8 != -1) {
      return;
    }
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    return;
  case 3:
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 2;
    return;
  case 5:
    iVar8 = FUN_009c73f0(6);
    if (iVar8 != 0) {
      *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 1;
    }
    if ((*(int *)(param_1 + 0xdc) != 0) && (iVar8 = FUN_00df7c00(4), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xe0) = 1;
    }
    iVar8 = FUN_009c73f0(6);
    if ((iVar8 != 0) && (iVar8 = FUN_00994c00(), iVar8 != 0)) {
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0x3d,1,1);
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
      return;
    }
    goto LAB_009b51f2;
  case 7:
    iVar8 = FUN_009c73f0(7);
    if (iVar8 != 0) {
      *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 1;
    }
    if ((*(int *)(param_1 + 0xdc) != 0) && (iVar8 = FUN_00df7c00(4), iVar8 != 0)) {
      *(undefined4 *)(param_1 + 0xe0) = 1;
    }
    iVar8 = FUN_009c73f0(7);
    if ((iVar8 != 0) && (iVar8 = FUN_00994c30(), iVar8 != 0)) {
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0x40,1,1);
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
      return;
    }
LAB_009b51f2:
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 2;
    return;
  case 9:
    if (*(undefined4 **)(param_1 + 0xd8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xd8))(1);
      *(undefined4 *)(param_1 + 0xd8) = 0;
    }
    if (*(int *)(param_1 + 0xdc) == 0) {
      FUN_009c5830(0);
    }
    else {
      FUN_009c7450();
      _DAT_0188eac0 = FUN_009c73f0(5);
    }
    FUN_009c7470(0);
    if (*(int *)(param_1 + 0xe0) == 0) {
      puVar9 = (undefined4 *)(param_1 + 0x2c);
      iVar8 = 0x1d;
      do {
        FUN_00cb2310(*puVar9,1);
        FUN_00cb23d0(*puVar9,0);
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xc4) = 2;
      FUN_009a6590();
      cVar2 = '\t' - *(char *)(param_1 + 0xfb);
      *(char *)(param_1 + 0xf8) = cVar2;
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + cVar2 * 4) * 4),1);
      uVar6 = *(undefined4 *)
               (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
      goto LAB_009b54c5;
    }
    (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0x47,1,1);
    *(undefined4 *)(param_1 + 0xcc) = 0xb;
    break;
  case 0xb:
    iVar8 = FUN_00999fa0();
    if (iVar8 == -1) {
      FUN_00a4ad80();
      FUN_009c5840();
    }
    break;
  case -1:
    puVar9 = (undefined4 *)(param_1 + 0x2c);
    iVar8 = 0x1d;
    do {
      FUN_00cb2310(*puVar9,1);
      FUN_00cb23d0(*puVar9,0);
      puVar9 = puVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 2;
    FUN_009c5840();
    FUN_009a6590();
    cVar2 = '\t' - *(char *)(param_1 + 0xfb);
    *(char *)(param_1 + 0xf8) = cVar2;
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c + *(int *)(&DAT_016555f4 + cVar2 * 4) * 4),1);
    uVar6 = *(undefined4 *)
             (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
LAB_009b54c5:
    FUN_00ce4ce0(uVar6,1);
    *(undefined4 *)(param_1 + 0xcc) = 10;
  }
  switch(*(char *)(param_1 + 200)) {
  case '\0':
    *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
    return;
  case '\x01':
    cVar2 = FUN_00ce12f0(0);
    if ((cVar2 == '\0') && (*(char *)(param_1 + 0xfa) == -1)) {
      if ((*(char *)(param_1 + 0xc9) != '\0') &&
         ((cVar2 = FUN_00ce1360(0), cVar2 != '\0' || (cVar2 = FUN_00cac960(), cVar2 != '\0')))) {
        bVar7 = 0;
        do {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4),4);
          bVar7 = bVar7 + 1;
        } while (bVar7 < 9);
        FUN_00e5e050("core_se_sys_cancel",0);
        *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
        *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + -1;
        *(undefined1 *)(param_1 + 0xfc) = 1;
        *(undefined1 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0xf0) = 0;
        return;
      }
      if ((*(char *)(param_1 + 0xc9) == '\0') &&
         ((cVar2 = FUN_00ce1360(0), cVar2 != '\0' || (cVar2 = FUN_00cac960(), cVar2 != '\0')))) {
        bVar7 = 0;
        do {
          FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4),4);
          bVar7 = bVar7 + 1;
        } while (bVar7 < 9);
        FUN_00e5e050("core_se_sys_cancel",0);
        *(undefined1 *)(param_1 + 200) = 3;
        return;
      }
      cVar2 = '\0';
      if (*(char *)(param_1 + 0xfb) != '\0') {
        iVar8 = 0;
        do {
          cVar3 = FUN_00d0d3e0(1,iVar8);
          if (cVar3 != '\0') {
            *(char *)(param_1 + 0xfa) = '\b' - cVar2;
            FUN_00ce4ce0(*(undefined4 *)
                          (param_1 + 0x2c +
                          *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),2);
            FUN_00ce4ce0(*(undefined4 *)
                          (param_1 + 0x30 +
                          *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),2);
            *(char *)(param_1 + 0xf8) = *(char *)(param_1 + 0xfa);
            if (((*(char *)(param_1 + 0xc9) == '\x02') && (*(char *)(param_1 + 0xfa) == '\b')) &&
               (*(char *)(param_1 + 0x104) == '\0')) {
              *(undefined1 *)(param_1 + 0xf8) = 7;
            }
            FUN_00ce4ce0(*(undefined4 *)
                          (param_1 + 0x2c +
                          *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),1);
            FUN_00ce4ce0(*(undefined4 *)
                          (param_1 + 0x30 +
                          *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),1);
            FUN_00e5e050("core_se_sys_cursor",0);
            break;
          }
          cVar2 = cVar2 + '\x01';
          iVar8 = (int)cVar2;
        } while (iVar8 < (int)(uint)*(byte *)(param_1 + 0xfb));
      }
      if (*(char *)(param_1 + 0xfa) != -1) {
        return;
      }
      cVar2 = FUN_00cac7e0(8,0);
      if (((cVar2 == '\0') && (cVar2 = FUN_00cac7e0(0x40000,0), cVar2 == '\0')) &&
         (cVar2 = FUN_00cac9c0(0), cVar2 == '\0')) {
        cVar2 = FUN_00cac7e0(4,0);
        if (((cVar2 == '\0') && (cVar2 = FUN_00cac7e0(0x80000,0), cVar2 == '\0')) &&
           (cVar2 = FUN_00cac9c0(1), cVar2 == '\0')) {
          return;
        }
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4)
                     ,2);
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4)
                     ,2);
        *(char *)(param_1 + 0xf8) = *(char *)(param_1 + 0xf8) + '\x01';
        if (((*(char *)(param_1 + 0xc9) == '\x02') && (7 < *(byte *)(param_1 + 0xf8))) &&
           (*(char *)(param_1 + 0x104) == '\0')) {
          *(char *)(param_1 + 0xf8) = '\t' - *(char *)(param_1 + 0xfb);
        }
        if (8 < *(byte *)(param_1 + 0xf8)) {
          *(char *)(param_1 + 0xf8) = '\t' - *(char *)(param_1 + 0xfb);
        }
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4)
                     ,1);
        uVar6 = *(undefined4 *)
                 (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
      }
      else {
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4)
                     ,2);
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4)
                     ,2);
        *(char *)(param_1 + 0xf8) = *(char *)(param_1 + 0xf8) + -1;
        if (*(char *)(param_1 + 0xf8) < (char)('\t' - *(char *)(param_1 + 0xfb))) {
          *(undefined1 *)(param_1 + 0xf8) = 8;
        }
        if (((*(char *)(param_1 + 0xc9) == '\x02') && (*(char *)(param_1 + 0xf8) == '\b')) &&
           (*(char *)(param_1 + 0x104) == '\0')) {
          *(undefined1 *)(param_1 + 0xf8) = 7;
        }
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4)
                     ,1);
        uVar6 = *(undefined4 *)
                 (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
      }
      FUN_00ce4ce0(uVar6,1);
      FUN_00e5e050("core_se_sys_cursor",0);
      return;
    }
    piVar1 = (int *)(param_1 + 0xa0 + *(char *)(param_1 + 0xf8) * 4);
    *(undefined1 *)(param_1 + 0xfa) = 0xff;
    bVar11 = false;
    switch(*piVar1) {
    case 0:
      *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      FUN_00e5e050("core_se_sys_decide_l",0);
      *(undefined1 *)(param_1 + 0x107) = 0;
      break;
    case 1:
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      if (*(char *)(param_1 + 0x107) == '\0') {
        *(undefined1 *)(param_1 + 200) = 10;
        FUN_00e5e050("core_se_sys_decide_l",0);
      }
      else {
        *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
        FUN_00e5e050("core_se_sys_decide_l",0);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xf4);
      }
      break;
    case 2:
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      *(undefined1 *)(param_1 + 200) = 10;
      FUN_00e5e050("core_se_sys_decide_s",0);
      break;
    case 3:
    case 7:
    case 0xf:
    case 0x10:
    case 0x11:
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      *(undefined1 *)(param_1 + 200) = 10;
      FUN_00e5e050("core_se_sys_decide_l",0);
      break;
    case 4:
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      *(undefined1 *)(param_1 + 200) = 0x1e;
      FUN_00e5e050("core_se_sys_decide_l",0);
      break;
    case 5:
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      *(undefined1 *)(param_1 + 200) = 0x14;
      FUN_00e5e050("core_se_sys_decide_l",0);
      break;
    case 6:
    case 8:
    case 9:
      *(undefined4 *)(param_1 + 0xf0) = 0;
      if (*piVar1 == 8) {
        *(undefined4 *)(param_1 + 0xf0) = 1;
      }
      if (*piVar1 == 9) {
        *(undefined4 *)(param_1 + 0xf0) = 2;
      }
      iVar8 = FUN_009c7000();
      if (((iVar8 == 0) && (iVar8 = FUN_009c7060(), iVar8 == 0)) &&
         (iVar8 = FUN_009c45b0(), iVar8 == 0)) {
        *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
        *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
        bVar11 = true;
        pcVar12 = "core_se_sys_decide_l";
      }
      else {
        *(undefined1 *)(param_1 + 200) = 0x3c;
        pcVar12 = "core_se_sys_decide_s";
      }
      FUN_00e5e050(pcVar12,0);
      *(undefined2 *)(param_1 + 0x107) = 0x100;
      if (!bVar11) {
        return;
      }
      break;
    case 10:
      *(undefined1 *)(param_1 + 200) = 0x32;
      FUN_00e5e050("core_se_sys_decide_s",0);
      (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0x28,0,1);
      *(undefined1 *)(param_1 + 0x106) = 1;
      *(bool *)(param_1 + 0x27) = *(int *)(param_1 + 0xf0) == 2;
      return;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      if (*(char *)(param_1 + 0x106) != '\0') {
        *(undefined1 *)(param_1 + 0x106) = 0;
      }
      *(undefined1 *)(param_1 + 200) = 0x32;
      FUN_00e5e050("core_se_sys_decide_s",0);
      return;
    case 0x12:
      *(undefined1 *)(param_1 + 200) = 0x28;
      FUN_00e5e050("core_se_sys_decide_l",0);
      return;
    default:
      goto switchD_009b54ef_caseD_4;
    }
    bVar7 = 0;
    do {
      if (bVar7 == *(byte *)(param_1 + 0xf8)) {
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c +
                      *(int *)(&DAT_016555f4 + (char)*(byte *)(param_1 + 0xf8) * 4) * 4),3);
        uVar6 = *(undefined4 *)
                 (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
        uVar13 = 3;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4);
        uVar13 = 4;
      }
      FUN_00ce4ce0(uVar6,uVar13);
      bVar7 = bVar7 + 1;
    } while (bVar7 < 9);
    *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_1 + 0xf8);
    *(undefined1 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    return;
  case '\x02':
    iVar8 = FUN_00ce4dd0(4);
    if (iVar8 == 0) {
      return;
    }
    bVar7 = 0;
    do {
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x50 + (char)bVar7 * 4),1,3);
      FUN_00cb3350(*(undefined4 *)(param_1 + 0x50 + (char)bVar7 * 4));
      bVar7 = bVar7 + 1;
    } while (bVar7 < 0x12);
    FUN_00ce4dc0(2,1);
    if (*(char *)(param_1 + 0xc9) == '\0') {
      FUN_009a6590();
      bVar7 = 0;
      do {
        bVar4 = bVar7;
        if (*(int *)(param_1 + 0xa0 + (char)bVar7 * 4) == 0) break;
        bVar7 = bVar7 + 1;
        bVar4 = 0xff;
      } while (bVar7 < 9);
      bVar7 = *(byte *)(param_1 + 0xf9);
      *(byte *)(param_1 + 0xf8) = bVar4;
      if ((bVar4 == bVar7) || ((char)bVar7 < '\0')) goto LAB_009b5c66;
    }
    else {
      if ((*(char *)(param_1 + 0xc9) == '\x01') && (*(char *)(param_1 + 0x107) == '\0')) {
        FUN_009a6ba0();
        if (*(char *)(param_1 + 0xfc) != '\0') {
          bVar7 = *(byte *)(param_1 + 0xf9);
          *(undefined1 *)(param_1 + 0xf9) = 0xff;
          goto LAB_009b5c60;
        }
        cVar2 = FUN_00994ef0(5);
        *(char *)(param_1 + 0xf8) = cVar2;
        if (-1 < cVar2) goto LAB_009b5c66;
        uVar6 = 6;
      }
      else {
        FUN_009a6ee0();
        uVar6 = 0xb;
      }
      bVar7 = FUN_00994ef0(uVar6);
    }
LAB_009b5c60:
    *(byte *)(param_1 + 0xf8) = bVar7;
LAB_009b5c66:
    FUN_00ce4ce0(*(undefined4 *)
                  (param_1 + 0x2c + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),1);
    FUN_00ce4ce0(*(undefined4 *)
                  (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4),1);
    *(undefined1 *)(param_1 + 200) = 0;
    return;
  case '\x03':
  case '\n':
  case '\x14':
  case '\x1e':
    iVar8 = FUN_00ce4dd0(4);
    if (iVar8 != 0) {
      *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
      return;
    }
    break;
  case '\v':
    switch(*(undefined4 *)(param_1 + 0xa0 + *(char *)(param_1 + 0xf8) * 4)) {
    case 1:
      if (DAT_01b77cd0 == 7) {
        FUN_00d5ea40("EV6030",1,0);
      }
      else {
        FUN_00a4d650();
      }
      goto LAB_009b5fed;
    case 2:
      FUN_00cad0a0(2);
      uVar13 = 0xffffffff;
      pcVar12 = "START";
      uVar6 = 0xf30;
      break;
    case 3:
      FUN_00cad0c0();
      uVar13 = 0xffffffff;
      pcVar12 = "START";
      uVar6 = 0xf08;
      break;
    default:
      goto switchD_009b5ceb_caseD_4;
    case 5:
      FUN_00cad0c0();
      uVar13 = 0xffffffff;
      pcVar12 = "START";
      uVar6 = 0xf05;
      break;
    case 7:
      FUN_00cad0a0(2);
      uVar13 = 0xffffffff;
      pcVar12 = "START";
      uVar6 = 0xf05;
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      iVar8 = 1;
      local_d4 = 0;
      if ((*(int *)(param_1 + 0xf0) != 0) || (*(char *)(param_1 + 0x107) != '\0')) {
        local_d4 = (int)DAT_01b7638b;
        iVar8 = 0;
        puVar9 = &DAT_01b762c0;
        puVar10 = local_d0;
        for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      local_dc = 0;
      bVar11 = false;
      if (((iVar8 != 0) && (iVar5 = FUN_009c7000(), iVar5 == 0)) &&
         ((iVar5 = FUN_009c7060(), iVar5 != 0 || (iVar5 = FUN_009c5270(), iVar5 != 0)))) {
        local_dc = DAT_01b7589c;
        bVar11 = true;
      }
      if ((*(int *)(param_1 + 0xf0) != 0) && (*(char *)(param_1 + 0x107) == '\0')) {
        iVar8 = 1;
      }
      switch(*(undefined4 *)(param_1 + 0xa0 + *(char *)(param_1 + 0xf8) * 4)) {
      case 10:
        iVar5 = (int)*(char *)(param_1 + 0x106);
        uVar6 = 0;
        break;
      case 0xb:
        iVar5 = (int)*(char *)(param_1 + 0x106);
        uVar6 = 1;
        break;
      case 0xc:
        iVar5 = (int)*(char *)(param_1 + 0x106);
        uVar6 = 2;
        break;
      case 0xd:
        iVar5 = (int)*(char *)(param_1 + 0x106);
        uVar6 = 3;
        break;
      case 0xe:
        iVar5 = (int)*(char *)(param_1 + 0x106);
        uVar6 = 4;
        break;
      default:
        goto switchD_009b5dd9_default;
      }
      FUN_009c8990(uVar6,iVar5,0,iVar8,*(int *)(param_1 + 0xf0));
switchD_009b5dd9_default:
      if (*(char *)(param_1 + 0x107) != '\0') {
        puVar9 = local_d0;
        puVar10 = &DAT_01b762c0;
        for (iVar8 = 0x32; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        _DAT_01b76388 = _DAT_01b76388 | local_d4 << 0x18;
        FUN_009c52d0(0);
      }
      if (bVar11) {
        DAT_01b7589c = local_dc;
        FUN_00dd5650(&DAT_01658010,local_dc);
      }
      if (*(int *)(param_1 + 0xf0) == 1) {
        uVar6 = 3;
      }
      else if (*(int *)(param_1 + 0xf0) == 2) {
        uVar6 = 4;
      }
      else {
        uVar6 = 2;
      }
      FUN_00cad0a0(uVar6);
      if (*(char *)(param_1 + 0x105) == '\0') {
        if (*(int *)(param_1 + 0xf0) == 1) {
          uVar13 = 0xc000;
          pcVar12 = "PC10_MOVIE";
          uVar6 = 0xc10;
        }
        else if (*(int *)(param_1 + 0xf0) == 2) {
          uVar13 = 0xffffffff;
          pcVar12 = "PD10_START";
          uVar6 = 0xd10;
        }
        else {
          uVar13 = 0;
          pcVar12 = "btl_01_start";
          uVar6 = 0xa10;
        }
      }
      else {
        DAT_01bea094 = DAT_01bea094 | 4;
        uVar13 = 0xffffffff;
        if (*(int *)(param_1 + 0xf0) == 1) {
          pcVar12 = "PC08_START";
          uVar6 = 0xc08;
        }
        else {
          pcVar12 = "PEF3_START";
          uVar6 = 0xef3;
        }
      }
      break;
    case 0xf:
      FUN_00cad0a0(4);
      uVar13 = 0xffffffff;
      pcVar12 = "START";
      uVar6 = 0xf0a;
      break;
    case 0x10:
      FUN_00cad0a0(4);
      uVar13 = 0xffffffff;
      pcVar12 = "START";
      uVar6 = 0xf0b;
      break;
    case 0x11:
      FUN_00cad0a0(4);
      uVar13 = 0xffffffff;
      pcVar12 = "START";
      uVar6 = 0xf09;
    }
    FUN_00a4ac40(uVar6,pcVar12,uVar13);
LAB_009b5fed:
    FUN_00e5e1b0("bgm_pef1_exit");
switchD_009b5ceb_caseD_4:
    *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
    return;
  case '(':
    (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0xe,0,1);
    *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
    return;
  case ')':
    iVar8 = FUN_00999fa0();
    if (iVar8 == 2) {
      DAT_01be8e3e = 1;
      *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
      return;
    }
    goto LAB_009b6048;
  case '2':
    if (*(char *)(param_1 + 0x106) != '\0') {
      iVar8 = FUN_00999fa0();
      if (iVar8 == -1) {
        bVar11 = *(int *)(param_1 + 0xf0) == 2;
        if (bVar11) {
          *(undefined1 *)(param_1 + 200) = 1;
        }
        *(undefined1 *)(param_1 + 0x106) = 0;
        if (bVar11) {
          return;
        }
      }
      else if (iVar8 == 1) {
        *(undefined1 *)(param_1 + 0x106) = 0;
      }
      else if (iVar8 != 2) {
        return;
      }
    }
    if (*(int *)(param_1 + 0xf0) == 2) {
      *(char *)(param_1 + 200) = (*(char *)(param_1 + 0x107) != '\0') + '4';
      return;
    }
  case 'd':
    (**(code **)(*(int *)(param_1 + 0x1c) + 4))(0xc,0,1);
    *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
    *(undefined1 *)(param_1 + 0x27) = 1;
    return;
  case '3':
    iVar8 = FUN_00999fa0();
    if (iVar8 == 2) {
      *(undefined1 *)(param_1 + 200) = 10;
      *(undefined1 *)(param_1 + 0x105) = 1;
      if (*(int *)(param_1 + 0xf0) == 0) {
        DAT_01b6f3a8 = DAT_01b6f3a8 | 0x300000;
      }
    }
    else if (iVar8 == 1) {
      *(undefined1 *)(param_1 + 200) = 10;
      *(undefined1 *)(param_1 + 0x105) = 0;
    }
    else {
      if (iVar8 == -1) {
        *(undefined1 *)(param_1 + 200) = 1;
        *(undefined1 *)(param_1 + 0x105) = 0;
        return;
      }
      if (iVar8 < 1) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x108) != '\0') {
      iVar8 = *(int *)(param_1 + 0xf0);
      uVar6 = 0;
      if (iVar8 == 0) {
        uVar6 = 0;
      }
      else if (iVar8 == 1) {
        uVar6 = 1;
      }
      else if (iVar8 == 2) {
        uVar6 = 2;
      }
      FUN_009c4c40(uVar6);
    }
    bVar7 = 0;
    do {
      if (bVar7 == *(byte *)(param_1 + 0xf8)) {
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c +
                      *(int *)(&DAT_016555f4 + (char)*(byte *)(param_1 + 0xf8) * 4) * 4),3);
        uVar6 = *(undefined4 *)
                 (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
        uVar13 = 3;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4);
        uVar13 = 4;
      }
      FUN_00ce4ce0(uVar6,uVar13);
      bVar7 = bVar7 + 1;
    } while (bVar7 < 9);
    goto LAB_009b61f1;
  case '4':
    iVar8 = *(int *)(param_1 + 0xf0);
    *(undefined1 *)(param_1 + 200) = 10;
    *(undefined1 *)(param_1 + 0x105) = 0;
    if (iVar8 != 0) {
      uVar6 = 0;
      if (iVar8 == 0) {
        uVar6 = 0;
      }
      else if (iVar8 == 1) {
        uVar6 = 1;
      }
      else if (iVar8 == 2) {
        uVar6 = 2;
      }
      FUN_009c4c40(uVar6);
    }
    bVar7 = 0;
    do {
      if (bVar7 == *(byte *)(param_1 + 0xf8)) {
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c +
                      *(int *)(&DAT_016555f4 + (char)*(byte *)(param_1 + 0xf8) * 4) * 4),3);
        uVar6 = *(undefined4 *)
                 (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
        uVar13 = 3;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4);
        uVar13 = 4;
      }
      FUN_00ce4ce0(uVar6,uVar13);
      bVar7 = bVar7 + 1;
    } while (bVar7 < 9);
    goto LAB_009b61f1;
  case '5':
    *(undefined1 *)(param_1 + 200) = 10;
    *(undefined1 *)(param_1 + 0x105) = 0;
    bVar7 = 0;
    do {
      if (bVar7 == *(byte *)(param_1 + 0xf8)) {
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c +
                      *(int *)(&DAT_016555f4 + (char)*(byte *)(param_1 + 0xf8) * 4) * 4),3);
        uVar6 = *(undefined4 *)
                 (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
        uVar13 = 3;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4);
        uVar13 = 4;
      }
      FUN_00ce4ce0(uVar6,uVar13);
      bVar7 = bVar7 + 1;
    } while (bVar7 < 9);
LAB_009b61f1:
    *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_1 + 0xf8);
    *(undefined1 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    return;
  case '<':
    cVar2 = '/';
    if (*(int *)(param_1 + 0xf0) == 1) {
      iVar8 = FUN_009c70b0();
      cVar2 = (-(iVar8 != 0) & 2U) + 0x49;
    }
    if (*(int *)(param_1 + 0xf0) == 2) {
      iVar8 = FUN_009c7100();
      cVar2 = (-(iVar8 != 0) & 3U) + 0x49;
    }
    if (*(int *)(param_1 + 0xf0) == 0) {
      iVar8 = FUN_009c70b0();
      if ((iVar8 != 0) || (iVar8 = FUN_009c7100(), iVar8 != 0)) {
        cVar2 = 'I';
      }
      iVar8 = FUN_009c7000();
      if (iVar8 != 0) {
        cVar2 = '/';
      }
    }
    (**(code **)(*(int *)(param_1 + 0x1c) + 4))(cVar2,0,1);
    *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + '\x01';
    return;
  case '=':
    iVar8 = FUN_00999fa0();
    if (iVar8 == 2) {
      *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
      *(undefined1 *)(param_1 + 200) = 2;
      bVar7 = 0;
      do {
        if (bVar7 == *(byte *)(param_1 + 0xf8)) {
          FUN_00ce4ce0(*(undefined4 *)
                        (param_1 + 0x2c +
                        *(int *)(&DAT_016555f4 + (char)*(byte *)(param_1 + 0xf8) * 4) * 4),3);
          uVar6 = *(undefined4 *)
                   (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
          uVar13 = 3;
        }
        else {
          uVar6 = *(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4);
          uVar13 = 4;
        }
        FUN_00ce4ce0(uVar6,uVar13);
        bVar7 = bVar7 + 1;
      } while (bVar7 < 9);
      goto LAB_009b61f1;
    }
LAB_009b6048:
    if (iVar8 == 1) {
LAB_009b6051:
      *(undefined1 *)(param_1 + 200) = 1;
      return;
    }
    break;
  case 'e':
    FUN_00dd5650(&DAT_01657fd4);
    iVar8 = FUN_00999fa0();
    if (iVar8 == 2) {
      FUN_00a4ac40(0xef1,"PEF1_START",0xffffffff);
    }
    else if (iVar8 == 1) {
      FUN_00a4ac40(0xf15,"PF15_SYNOPSIS",0xffffffff);
    }
    else {
      if (iVar8 == -1) goto LAB_009b6051;
      if (iVar8 < 1) {
        return;
      }
    }
    FUN_00e5e1b0("bgm_pef1_exit");
    bVar7 = 0;
    do {
      if (bVar7 == *(byte *)(param_1 + 0xf8)) {
        FUN_00ce4ce0(*(undefined4 *)
                      (param_1 + 0x2c +
                      *(int *)(&DAT_016555f4 + (char)*(byte *)(param_1 + 0xf8) * 4) * 4),3);
        uVar6 = *(undefined4 *)
                 (param_1 + 0x30 + *(int *)(&DAT_016555f4 + *(char *)(param_1 + 0xf8) * 4) * 4);
        uVar13 = 3;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x2c + (char)bVar7 * 4);
        uVar13 = 4;
      }
      FUN_00ce4ce0(uVar6,uVar13);
      bVar7 = bVar7 + 1;
    } while (bVar7 < 9);
  }
switchD_009b54ef_caseD_4:
  return;
}

