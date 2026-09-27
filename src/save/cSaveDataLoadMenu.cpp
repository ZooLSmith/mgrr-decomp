// src/save/cSaveDataLoadMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009947A0..009BD760, 10 functions

#include "mgrr.h"
#include "cSaveDataLoadMenu.h"

// 009947A0  FUN_009947a0  size=26  [callgraph]
undefined4 __thiscall FUN_009947a0(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x3dc)) {
    return *(undefined4 *)(param_1 + 0x3e0);
  }
  return 0;
}

// 009947C0  cSaveDataLoadMenu::vf0C  size=129  [class]
void __fastcall cSaveDataLoadMenu::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00d389f0(10,0,0,0,*(int *)(param_1 + 0x18),0x5a,1);
    FUN_00d389f0(10,1,0,0,*(undefined4 *)(param_1 + 0x18),0x5b,1);
    FUN_00d389f0(10,2,0,0,*(undefined4 *)(param_1 + 0x18),0x5c,1);
  }
  return;
}

// 00994850  FUN_00994850  size=19  [callgraph]
undefined4 __fastcall FUN_00994850(int param_1)

{
  if (*(int *)(param_1 + 0x390) == 0xc) {
    return *(undefined4 *)(param_1 + 0x3c0);
  }
  return 0;
}

// 00994870  FUN_00994870  size=151  [callgraph]
void __thiscall FUN_00994870(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3a4);
  iVar1 = 0;
  do {
    iVar2 = iVar2 + (uint)(param_2 != 1) * -2 + 1;
    if (iVar2 < 3) {
      if (iVar2 < 0) {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 0;
    }
  } while ((*(int *)(param_1 + 0x3b4) == iVar2) && (iVar1 = iVar1 + 1, iVar1 < 3));
  if (param_3 != 0) {
    FUN_00ce4d70(2);
    FUN_00ce4d70(1);
    *(undefined4 *)(param_1 + 0x3b8) = 0;
  }
  *(int *)(param_1 + 0x3a4) = iVar2;
  return;
}

// 00994910  FUN_00994910  size=130  [callgraph]
void __fastcall FUN_00994910(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = FUN_00cac570(0x40008,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_00cac570(0x80004,0);
    if (cVar1 == '\0') goto LAB_00994975;
    iVar2 = 2;
  }
  else {
    iVar2 = 1;
  }
  if (iVar2 == *(int *)(param_1 + 0x3dc)) {
    iVar2 = FUN_00ca8620(param_1 + 0x3d8,10);
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3e0) = 1;
    return;
  }
LAB_00994975:
  *(int *)(param_1 + 0x3dc) = iVar2;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  return;
}

// 009A5E60  cSaveDataLoadMenu::vf08  size=648  [class]
void __fastcall cSaveDataLoadMenu::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  uVar1 = FUN_00cb25d0(0x5a);
  *(undefined4 *)(param_1 + 0x230) = uVar1;
  uVar1 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  uVar1 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0x238) = uVar1;
  uVar1 = FUN_00cb25d0(99);
  *(undefined4 *)(param_1 + 0x23c) = uVar1;
  local_c = (undefined4 *)(param_1 + 0x354);
  local_14 = (undefined4 *)(param_1 + 0x230);
  puVar4 = (undefined4 *)(param_1 + 0x244);
  local_8 = 3;
  do {
    uVar1 = FUN_00cb3300(*local_14);
    FUN_00cb2240(uVar1);
    uVar1 = FUN_00cb25d0(1);
    puVar4[-1] = uVar1;
    uVar1 = FUN_00cb25d0(10);
    *puVar4 = uVar1;
    uVar1 = FUN_00cb25d0(0x14);
    puVar4[1] = uVar1;
    uVar1 = FUN_00cb25d0(0x17);
    puVar4[2] = uVar1;
    uVar1 = FUN_00cb25d0(0x23);
    puVar4[6] = uVar1;
    uVar1 = FUN_00cb25d0(0x24);
    puVar4[7] = uVar1;
    uVar1 = FUN_00cb25d0(0x21);
    puVar4[4] = uVar1;
    uVar1 = FUN_00cb25d0(0x22);
    puVar4[5] = uVar1;
    uVar1 = FUN_00cb25d0(0x26);
    puVar4[8] = uVar1;
    uVar1 = FUN_00cb25d0(0x28);
    puVar4[9] = uVar1;
    uVar1 = FUN_00cb25d0(0x2b);
    puVar4[0xb] = uVar1;
    uVar1 = FUN_00cb25d0(0x2c);
    puVar4[0xc] = uVar1;
    uVar1 = FUN_00cb25d0(0x2e);
    puVar4[0xd] = uVar1;
    uVar1 = FUN_00cb25d0(0x2f);
    puVar4[0xe] = uVar1;
    uVar1 = FUN_00cb25d0(0x32);
    puVar4[0xf] = uVar1;
    uVar1 = FUN_00cb25d0(0x46);
    puVar4[0x10] = uVar1;
    puVar3 = puVar4 + 0x11;
    uVar1 = FUN_00cb25d0(0x47);
    *puVar3 = uVar1;
    uVar1 = FUN_00cb25d0(0x48);
    puVar4[0x12] = uVar1;
    uVar1 = FUN_00cb25d0(0x49);
    puVar4[0x13] = uVar1;
    uVar1 = FUN_00cb25d0(0x4a);
    puVar4[0x14] = uVar1;
    uVar1 = FUN_00cb25d0(0x4b);
    puVar4[0x15] = uVar1;
    local_10 = local_c;
    local_c = (undefined4 *)0x5;
    do {
      uVar1 = FUN_00cb3300(*puVar3);
      FUN_00cb2240(uVar1);
      uVar1 = FUN_00cb25d0(0x1a);
      *local_10 = uVar1;
      local_10 = local_10 + 1;
      puVar3 = puVar3 + 1;
      local_c = (undefined4 *)((int)local_c + -1);
    } while (local_c != (undefined4 *)0x0);
    local_14 = local_14 + 1;
    puVar4 = puVar4 + 0x17;
    local_8 = local_8 + -1;
    local_c = local_10;
  } while (local_8 != 0);
  FUN_00cb2740(0);
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
  FUN_00ce4d70(0);
  iVar2 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar2 != 0) {
      uVar1 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar2 + 4) = uVar1;
    }
  }
  *(int *)(param_1 + 0x3d4) = iVar2;
  FUN_00cb2630(1);
  FUN_00cb2600(0);
  FUN_009c7230();
  return;
}

// 009B4930  cSaveDataLoadMenu::vf00  size=30  [class]
undefined4 __thiscall cSaveDataLoadMenu::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_26();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B4950  FUN_009b4950  size=213  [callgraph]
void __thiscall FUN_009b4950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = param_2;
  iVar2 = FUN_009c56c0();
  piVar3 = (int *)(iVar2 + param_2 * 0x10);
  FUN_00cb2310(*(undefined4 *)(param_2 * 0x5c + 0x240 + param_1),1);
  FUN_00cb2310(*(undefined4 *)(param_2 * 0x5c + 0x24c + param_1),0);
  puVar4 = (undefined4 *)(param_1 + 0x354 + param_2 * 0x14);
  param_2 = 5;
  do {
    FUN_00cb2310(*puVar4,0);
    puVar4 = puVar4 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  if ((piVar3 != (int *)0x0) && (*piVar3 != -1)) {
    *(undefined4 *)(param_1 + 0x39c) = 1;
    *(undefined4 *)(param_1 + 0x3a8 + iVar1 * 4) = 1;
    FUN_009a6200(iVar1,piVar3);
    return;
  }
  *(undefined4 *)(param_1 + 0x3a8 + iVar1 * 4) = 0;
  FUN_009a60f0(iVar1);
  return;
}

// 009B4A30  FUN_009b4a30  size=133  [callgraph]
void __fastcall FUN_009b4a30(int param_1)

{
  int iVar1;
  char *local_c [3];
  
  iVar1 = *(int *)(param_1 + 0x3bc);
  local_c[0] = "select_saved_data";
  local_c[1] = "select_saved_data_empty";
  local_c[2] = "select_saved_data_copy_to";
  if (*(int *)(param_1 + 0x390) == 4) {
    *(undefined4 *)(param_1 + 0x3bc) = 2;
  }
  else {
    *(uint *)(param_1 + 0x3bc) =
         (uint)(*(int *)(param_1 + 0x3a8 + *(int *)(param_1 + 0x3a4) * 4) == 0);
  }
  if ((iVar1 != *(int *)(param_1 + 0x3bc)) && (*(int *)(param_1 + 0x3d4) != 0)) {
    FUN_009ab030(local_c[*(int *)(param_1 + 0x3bc)],param_1 + 0x220,0x41700000,0);
  }
  return;
}

// 009BD760  cSaveDataLoadMenu::vf14  size=2984  [class]
void __fastcall cSaveDataLoadMenu::vf14(int param_1)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  
  switch(*(undefined4 *)(param_1 + 0x390)) {
  case 0:
    iVar8 = FUN_009c5690();
    if (iVar8 == 0) {
      iVar8 = FUN_009c72e0();
      if (iVar8 == 0) {
        iVar8 = FUN_009c7300();
        if (iVar8 == 0) {
          *(undefined4 *)(param_1 + 0x3c0) = 1;
          *(undefined4 *)(param_1 + 0x390) = 0xb;
        }
        else {
          puVar5 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x23c));
          *(undefined4 *)(param_1 + 0x220) = *puVar5;
          *(undefined4 *)(param_1 + 0x224) = puVar5[1];
          *(undefined4 *)(param_1 + 0x228) = puVar5[2];
          *(undefined4 *)(param_1 + 0x22c) = puVar5[3];
          iVar8 = 0;
          do {
            FUN_009b4950(iVar8);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          iVar8 = 0;
          do {
            if (iVar8 == *(int *)(param_1 + 0x3a4)) {
              uVar12 = 1;
            }
            else {
              uVar12 = 2;
            }
            FUN_00ce4d70(uVar12);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          FUN_009b4a30();
          FUN_00cb2600(1);
          *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x3c0) = 2;
        *(undefined4 *)(param_1 + 0x390) = 0xb;
      }
    }
    break;
  case 1:
    fVar10 = (float10)FUN_00cacf20();
    fVar10 = fVar10 + (float10)*(float *)(param_1 + 0x398);
    *(float *)(param_1 + 0x398) = (float)fVar10;
    fVar11 = (float10)1;
    if (fVar11 < fVar10 != (fVar11 == fVar10)) {
      *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
      *(float *)(param_1 + 0x398) = (float)fVar11;
    }
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x398));
    iVar8 = *(int *)(param_1 + 0x3d4);
    if (iVar8 == 0) break;
    uVar12 = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(iVar8 + 0x78) = 1;
    goto LAB_009be2ed;
  case 2:
    FUN_00994910();
    iVar8 = -1;
    iVar6 = FUN_00cb24b0(*(undefined4 *)(*(int *)(param_1 + 0x3a4) * 0x5c + 0x280 + param_1));
    iVar7 = iVar8;
    if (iVar6 != 0) {
      iVar7 = 0;
      do {
        cVar4 = FUN_00d0d3e0(10,iVar7);
        if (cVar4 != '\0') {
          FUN_00ce4d70(2);
          *(int *)(param_1 + 0x3a4) = iVar7;
          FUN_00ce4d70(1);
          *(undefined4 *)(param_1 + 0x3b8) = 0;
          FUN_009b4a30();
          FUN_00e5e050("core_se_sys_title_save_cursor",0);
          iVar8 = iVar7;
          if (iVar7 != -1) goto LAB_009bda80;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 3);
      cVar4 = FUN_00cac640(0x40008,0);
      iVar7 = iVar8;
      if ((cVar4 == '\0') &&
         (((*(int *)(param_1 + 0x3dc) != 1 || (*(int *)(param_1 + 0x3e0) == 0)) &&
          (cVar4 = FUN_00cac9c0(0), cVar4 == '\0')))) {
        cVar4 = FUN_00cac640(0x80004,0);
        if (((cVar4 == '\0') && (iVar8 = FUN_009947a0(2), iVar8 == 0)) &&
           (cVar4 = FUN_00cac9c0(1), cVar4 == '\0')) goto LAB_009bda80;
        FUN_00ce4d70(2);
        *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + 1;
        if (2 < *(int *)(param_1 + 0x3a4)) {
          *(undefined4 *)(param_1 + 0x3a4) = 0;
        }
      }
      else {
        FUN_00ce4d70(2);
        piVar1 = (int *)(param_1 + 0x3a4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          *(undefined4 *)(param_1 + 0x3a4) = 2;
        }
      }
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x3b8) = 0;
      FUN_009b4a30();
      FUN_00e5e050("core_se_sys_title_save_cursor",0);
    }
LAB_009bda80:
    iVar8 = FUN_00ce4dd0(1);
    if ((iVar8 != 0) && (*(int *)(param_1 + 0x3b8) == 0)) {
      FUN_00ce4d70(5);
      *(undefined4 *)(param_1 + 0x3b8) = 1;
    }
    cVar4 = FUN_00ce12f0(0);
    if ((cVar4 == '\0') && (iVar7 == -1)) {
      cVar4 = FUN_00ce1360(0);
      if ((cVar4 == '\0') && (cVar4 = FUN_00cac960(), cVar4 == '\0')) {
        cVar4 = FUN_00cac640(0x80,0);
        if ((cVar4 == '\0') && (iVar8 = FUN_00dd9400(0x5a), iVar8 == 0)) {
          cVar4 = FUN_00cac640(0x40,0);
          if (((cVar4 != '\0') || (iVar8 = FUN_00dd9400(0x58), iVar8 != 0)) &&
             (*(int *)(param_1 + 0x3a8 + *(int *)(param_1 + 0x3a4) * 4) != 0)) {
            (**(code **)(*(int *)(param_1 + 0x3c4) + 4))(10,0,1);
            *(undefined4 *)(param_1 + 0x390) = 6;
            FUN_00e5e050("core_se_sys_custom_item_equip",0);
            *(undefined4 *)(param_1 + 0x3dc) = 0;
            *(undefined4 *)(param_1 + 0x3d8) = 0;
            *(undefined4 *)(param_1 + 0x3e0) = 0;
          }
        }
        else if ((*(int *)(param_1 + 0x3a8 + *(int *)(param_1 + 0x3a4) * 4) != 0) &&
                (*(int *)(param_1 + 0x39c) != 0)) {
          FUN_00ce4d70(3);
          iVar8 = *(int *)(param_1 + 0x3a4);
          *(int *)(param_1 + 0x3b4) = iVar8;
          iVar6 = 0;
          iVar7 = iVar8;
          do {
            iVar7 = iVar7 + 1;
            if (iVar7 < 3) {
              if (iVar7 < 0) {
                iVar7 = 2;
              }
            }
            else {
              iVar7 = 0;
            }
          } while ((iVar8 == iVar7) && (iVar6 = iVar6 + 1, iVar6 < 3));
          *(int *)(param_1 + 0x3a4) = iVar7;
          FUN_00ce4d70(1);
          *(undefined4 *)(param_1 + 0x3b8) = 0;
          *(undefined4 *)(param_1 + 0x390) = 4;
          FUN_009b4a30();
          FUN_00e5e050("core_se_sys_custom_item_equip",0);
          *(undefined4 *)(param_1 + 0x3dc) = 0;
          *(undefined4 *)(param_1 + 0x3d8) = 0;
          *(undefined4 *)(param_1 + 0x3e0) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x3c0) = 2;
        *(undefined4 *)(param_1 + 0x390) = 0xb;
        FUN_00e5e050("core_se_sys_cancel",0);
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x3a4);
      *(undefined4 *)(param_1 + 0x3c0) = 1;
      if (*(int *)(param_1 + 0x3a8 + iVar8 * 4) == 0) {
        FUN_009c8650(iVar8);
        *(undefined4 *)(param_1 + 0x3a0) = 1;
        iVar8 = FUN_009c7300();
        if (iVar8 == 0) {
          *(undefined4 *)(param_1 + 0x390) = 0xb;
        }
        else {
          (**(code **)(*(int *)(param_1 + 0x3c4) + 4))(0xd,1,1);
          *(undefined4 *)(param_1 + 0x390) = 3;
          *(undefined4 *)(param_1 + 0x394) = 0xb;
        }
      }
      else {
        FUN_009c71e0(iVar8);
        *(undefined4 *)(param_1 + 0x390) = 9;
        *(undefined4 *)(param_1 + 0x394) = 0xb;
      }
      *(undefined4 *)(param_1 + 0x3dc) = 0;
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      FUN_00e5e050("core_se_sys_title_save_decide",0);
    }
    break;
  case 3:
    iVar8 = FUN_00999fa0();
    if (iVar8 == -1) {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        *(undefined4 *)(param_1 + 0x390) = 0xb;
        *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
      }
      else {
        FUN_009c8c00(2,0xffffffff);
        *(undefined4 *)(param_1 + 0x390) = 9;
        *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
      }
    }
    break;
  case 4:
    FUN_00994910();
    iVar7 = FUN_00cb24b0(*(undefined4 *)(*(int *)(param_1 + 0x3a4) * 0x5c + 0x280 + param_1));
    iVar8 = -1;
    if (iVar7 != 0) {
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        if ((*(int *)(param_1 + 0x3b4) != iVar8) && (cVar4 = FUN_00d0d3e0(10,iVar8), cVar4 != '\0'))
        {
          if (iVar8 < *(int *)(param_1 + 0x3a4)) {
            uVar12 = 0;
LAB_009bddfc:
            FUN_00994870(uVar12,1);
          }
          else if (*(int *)(param_1 + 0x3a4) < iVar8) {
            uVar12 = 1;
            goto LAB_009bddfc;
          }
          (**(code **)(*(int *)(param_1 + 0x3c4) + 4))(8,0,1);
          *(undefined4 *)(param_1 + 0x3dc) = 0;
          *(undefined4 *)(param_1 + 0x3d8) = 0;
          *(undefined4 *)(param_1 + 0x3e0) = 0;
          *(undefined4 *)(param_1 + 0x390) = 5;
          FUN_00e5e050("core_se_sys_title_save_cursor",0);
          if (iVar8 != -1) goto LAB_009bded0;
          break;
        }
        iVar7 = iVar8 + 1;
        iVar8 = -1;
      } while (iVar7 < 3);
      cVar4 = FUN_00cac640(0x40008,0);
      if (((cVar4 == '\0') && (iVar7 = FUN_009947a0(1), iVar7 == 0)) &&
         (cVar4 = FUN_00cac9c0(0), cVar4 == '\0')) {
        cVar4 = FUN_00cac640(0x80004,0);
        if (((cVar4 == '\0') && (iVar7 = FUN_009947a0(2), iVar7 == 0)) &&
           (cVar4 = FUN_00cac9c0(1), cVar4 == '\0')) goto LAB_009bded0;
        uVar12 = 1;
      }
      else {
        uVar12 = 0;
      }
      FUN_00994870(uVar12,1);
      FUN_00e5e050("core_se_sys_title_save_cursor",0);
    }
LAB_009bded0:
    iVar7 = FUN_00ce4dd0(1);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x3b8) == 0)) {
      FUN_00ce4d70(5);
      *(undefined4 *)(param_1 + 0x3b8) = 1;
    }
    if (iVar8 == -1) {
      cVar4 = FUN_00ce1360(0);
      if ((cVar4 == '\0') && (cVar4 = FUN_00cac960(), cVar4 == '\0')) {
        cVar4 = FUN_00ce12f0(0);
        if (cVar4 != '\0') {
          (**(code **)(*(int *)(param_1 + 0x3c4) + 4))(8,0,1);
          *(undefined4 *)(param_1 + 0x390) = 5;
          FUN_00e5e050("core_se_sys_custom_item_equip",0);
          *(undefined4 *)(param_1 + 0x3dc) = 0;
          *(undefined4 *)(param_1 + 0x3d8) = 0;
          *(undefined4 *)(param_1 + 0x3e0) = 0;
        }
      }
      else {
        FUN_00ce4d70(4);
        *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x390) = 2;
        FUN_009b4a30();
        FUN_00e5e050("core_se_sys_cancel",0);
        *(undefined4 *)(param_1 + 0x3dc) = 0;
        *(undefined4 *)(param_1 + 0x3d8) = 0;
        *(undefined4 *)(param_1 + 0x3e0) = 0;
      }
    }
    break;
  case 5:
    iVar8 = FUN_00999fa0();
    if (iVar8 == 2) {
      FUN_009c7290(*(undefined4 *)(param_1 + 0x3a4),*(undefined4 *)(param_1 + 0x3b4));
      *(undefined4 *)(param_1 + 0x394) = 10;
      *(undefined4 *)(param_1 + 0x390) = 9;
    }
    else if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x390) = 4;
    }
    break;
  case 6:
    iVar8 = FUN_00999fa0();
    if (iVar8 == 2) {
      FUN_009c86a0(*(undefined4 *)(param_1 + 0x3a4));
      *(undefined4 *)(param_1 + 0x394) = 10;
      *(undefined4 *)(param_1 + 0x390) = 9;
      break;
    }
    goto LAB_009be0c3;
  case 7:
    iVar8 = FUN_00999fa0();
    bVar9 = iVar8 == -1;
    goto LAB_009be0c6;
  case 8:
    iVar8 = FUN_00999fa0();
    if (iVar8 == 2) {
      FUN_009c86d0(*(undefined4 *)(param_1 + 0x3a4));
      *(undefined4 *)(param_1 + 0x390) = 9;
      break;
    }
LAB_009be0c3:
    bVar9 = iVar8 == 1;
LAB_009be0c6:
    if (bVar9) {
      *(undefined4 *)(param_1 + 0x390) = 2;
    }
    break;
  case 9:
    iVar8 = FUN_009c5690();
    if ((iVar8 == 0) && (DAT_018b5758 == 0)) {
      iVar8 = FUN_009c72f0();
      if (iVar8 == 0) {
        if (*(int *)(param_1 + 0x394) == 0xb) {
          iVar8 = FUN_009c72e0();
          if (iVar8 == 0) {
            iVar8 = FUN_009c72d0();
            if (iVar8 == 0) {
              if (*(int *)(param_1 + 0x3a0) == 0) {
                iVar8 = FUN_009c7300();
                if (iVar8 == 0) {
                  *(undefined4 *)(param_1 + 0x394) = 0xb;
                }
                else {
                  (**(code **)(*(int *)(param_1 + 0x3c4) + 4))(0xd,1,1);
                  *(undefined4 *)(param_1 + 0x394) = 3;
                }
              }
            }
            else {
              FUN_009c7230();
              *(undefined4 *)(param_1 + 0x394) = 10;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x394) = 10;
          }
        }
        else {
          FUN_009c7230();
        }
        if (*(int *)(param_1 + 0x3b4) != -1) {
          FUN_00ce4d70(4);
          *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
          FUN_009b4a30();
        }
        *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x394);
      }
      else if (*(int *)(param_1 + 0x3b4) == -1) {
        (**(code **)(*(int *)(param_1 + 0x3c4) + 4))(0x1d,0,1);
        *(undefined4 *)(param_1 + 0x390) = 8;
      }
      else {
        FUN_00ce4d70(4);
        pcVar3 = *(code **)(*(int *)(param_1 + 0x3c4) + 4);
        *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
        (*pcVar3)(0x1e,1,1);
        *(undefined4 *)(param_1 + 0x390) = 7;
      }
    }
    break;
  case 10:
    iVar8 = FUN_009c5690();
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x39c) = 0;
      iVar8 = 0;
      do {
        FUN_009b4950(iVar8);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
      *(undefined4 *)(param_1 + 0x390) = 2;
      FUN_009b4a30();
    }
    break;
  case 0xb:
    fVar2 = *(float *)(param_1 + 0x398);
    fVar11 = (float10)FUN_00cacf20();
    fVar11 = (float10)fVar2 - fVar11;
    *(float *)(param_1 + 0x398) = (float)fVar11;
    if (fVar11 <= (float10)0) {
      *(float *)(param_1 + 0x398) = (float)(float10)0;
      *(undefined4 *)(param_1 + 0x390) = 0xc;
    }
    FUN_00cb2740(*(undefined4 *)(param_1 + 0x398));
    iVar8 = *(int *)(param_1 + 0x3d4);
    if (iVar8 == 0) break;
    uVar12 = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(iVar8 + 0x78) = 1;
LAB_009be2ed:
    *(undefined4 *)(iVar8 + 0x74) = uVar12;
  }
  if (*(int *)(param_1 + 0x3d4) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}

