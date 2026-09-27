// src/misc/cGameResult.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0A600..00D37C70, 3 functions

#include "mgrr.h"
#include "cGameResult.h"

// 00D0A600  cGameResult::vf00  size=30  [class]
undefined4 __thiscall cGameResult::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_29();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D0A620  cGameResult::vf08  size=1099  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cGameResult::vf08(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iStack_28;
  int iStack_24;
  int aiStack_1c [7];
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar7 = 0;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xc4);
  }
  *(uint *)(param_1 + 0x604) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xc6);
  }
  *(uint *)(param_1 + 0x608) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0x60c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9c);
  }
  *(uint *)(param_1 + 0x610) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0x9e);
  }
  *(uint *)(param_1 + 0x614) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  *(uint *)(param_1 + 0x618) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xa2);
  }
  *(uint *)(param_1 + 0x61c) = uVar4;
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar2 + 0xec);
  }
  *(uint *)(param_1 + 0x620) = uVar4;
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar2 + 0xee);
  }
  *(uint *)(param_1 + 0x624) = uVar5;
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar2 + 0xf0);
  }
  *(uint *)(param_1 + 0x628) = uVar5;
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x62c) = uVar5;
  if (((iVar2 != 0) && (uVar4 < *(uint *)(iVar2 + 0x80))) &&
     (piVar6 = *(int **)(uVar4 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar6 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar6 + 8))();
    if ((iVar2 == 0) && (piVar6 + 4 != (int *)0x0)) {
      *(int **)(param_1 + 0x34) = piVar6 + 4;
      *(undefined1 *)(param_1 + 0x129) = 0;
      FUN_00cf3ad0();
      if (*(char *)(param_1 + 0x633) != '\0') {
        *(undefined1 *)(param_1 + 300) = 1;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x624) < *(uint *)(iVar2 + 0x80))) &&
     (piVar6 = *(int **)(*(uint *)(param_1 + 0x624) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar6 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar6 + 8))();
    if ((iVar2 == 0) && (piVar6 + 4 != (int *)0x0)) {
      *(int **)(param_1 + 0x250) = piVar6 + 4;
      *(undefined1 *)(param_1 + 0x345) = 1;
      FUN_00cf3ad0();
      if (*(char *)(param_1 + 0x633) != '\0') {
        *(undefined1 *)(param_1 + 0x348) = 1;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x628) < *(uint *)(iVar2 + 0x80))) &&
     (piVar6 = *(int **)(*(uint *)(param_1 + 0x628) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar6 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar6 + 8))();
    if ((iVar2 == 0) && (piVar6 + 4 != (int *)0x0)) {
      *(int **)(param_1 + 0x46c) = piVar6 + 4;
      FUN_00cf4990();
      *(undefined4 *)(param_1 + 0x5f0) = 0;
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x470),"RESULT_TITLE_09",0,0xffffffff);
      iVar2 = FUN_009c4bf0();
      if (*(char *)(param_1 + 0x633) != '\0') {
        iVar3 = FUN_009c4bf0();
        if ((iVar3 == -1) || (DAT_01b75f54 == 0)) {
          iVar2 = (int)DAT_01b7638b;
        }
      }
      if (*(int *)(param_1 + 0x638) != -1) {
        iVar2 = *(int *)(param_1 + 0x638);
      }
      FUN_00d0a0f0(iVar2);
      if (*(char *)(param_1 + 0x633) != '\0') {
        *(undefined1 *)(param_1 + 0x5eb) = 1;
      }
      iStack_28 = 0;
      aiStack_1c[0] = 0;
      aiStack_1c[1] = 5;
      aiStack_1c[2] = 4;
      aiStack_1c[3] = 3;
      aiStack_1c[4] = 2;
      aiStack_1c[5] = 1;
      aiStack_1c[6] = 0;
      bVar1 = true;
      piVar6 = &DAT_01b75a14;
      piVar8 = &DAT_01b6f434 + iVar2 * 0x30;
      iStack_24 = 8;
      do {
        if (*(int *)(param_1 + 0x638) == -1) {
          iVar2 = FUN_009c4bf0();
          if ((iVar2 == -1) || (DAT_01b75f54 == 0)) goto LAB_00d0a946;
          FUN_00d0a210(iVar7,*piVar6,1 << ((byte)iVar7 & 0x1f) & _DAT_01b76388);
          iVar2 = *piVar6;
        }
        else {
LAB_00d0a946:
          FUN_00d0a210(iVar7,*piVar8,0);
          iVar2 = *piVar8;
        }
        if (iVar2 == 0) {
          bVar1 = false;
        }
        iStack_28 = iStack_28 + aiStack_1c[iVar2];
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 0x30;
        piVar8 = piVar8 + 0xf0;
        iStack_24 = iStack_24 + -1;
      } while (iStack_24 != 0);
      aiStack_1c[0] = 0;
      aiStack_1c[1] = 5;
      aiStack_1c[2] = 4;
      aiStack_1c[3] = 3;
      aiStack_1c[4] = 2;
      aiStack_1c[5] = 1;
      if (bVar1) {
        iVar2 = aiStack_1c[(int)(iStack_28 + (iStack_28 >> 0x1f & 7U)) >> 3];
      }
      else {
        iVar2 = 0;
      }
      FUN_00d0a210(8,iVar2,0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x60c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x60c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  if (*(char *)(param_1 + 0x633) == '\0') {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    FUN_00e5e050("core_se_sys_game_result",0);
  }
  iVar2 = *(int *)(param_1 + 0x634);
  if (((iVar2 == 1) || (iVar2 == 2)) || ((iVar2 == 4 || (iVar2 == 5)))) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x628) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x628) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  return;
}

// 00D37C70  cGameResult::vf14  size=720  [class]
void __fastcall cGameResult::vf14(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  
  iVar3 = FUN_00c20a50();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = 2;
  do {
    FUN_00d09750();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (((*(char *)(param_1 + 299) != '\0') && (*(char *)(param_1 + 0x347) != '\0')) ||
     (*(char *)(param_1 + 0x633) != '\0')) {
    *(undefined1 *)(param_1 + 0x5e9) = 1;
  }
  FUN_00d37800();
  if ((*(char *)(param_1 + 0x5ea) == '\0') || (*(char *)(param_1 + 0x631) != '\0'))
  goto LAB_00d37ef3;
  if (*(int *)(param_1 + 0x600) == 0) {
    uVar4 = FUN_009a29d0();
    iVar3 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x600) = uVar4;
    if ((iVar3 == 0) || (*(uint *)(iVar3 + 0x80) <= *(uint *)(param_1 + 0x62c))) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(*(uint *)(param_1 + 0x62c) * 0x400 + 0x50 + *(int *)(iVar3 + 0x7c));
    }
    if (*(char *)(param_1 + 0x633) == '\0') {
      pcVar8 = "game_result";
    }
    else {
      pcVar8 = "select_chapter_result";
    }
    FUN_009a2df0(pcVar8,*puVar5,puVar5[1],0x41700000,0);
  }
  if (*(char *)(param_1 + 0x632) == '\0') {
    if (*(char *)(param_1 + 0x631) != '\0') goto LAB_00d37ef3;
    puVar5 = *(undefined4 **)(param_1 + 0x5f8);
    if (puVar5 == (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0x5fc) == 0) {
        puVar5 = *(undefined4 **)(param_1 + 0x5f4);
        if (puVar5 == (undefined4 *)0x0) {
          cVar2 = FUN_00ce12f0(0);
          if ((cVar2 != '\0') || (DAT_01b7b79c == 1)) {
            iVar3 = cTitleDisp::cTitleDisp();
            *(int *)(param_1 + 0x5f4) = iVar3;
            *(undefined1 *)(iVar3 + 0xe0) = 0;
            DAT_01dc13fc = 0;
            uVar1 = *(uint *)(param_1 + 0x228);
            iVar7 = 0;
            iVar3 = 0x1c;
            do {
              if ((uVar1 & 1 << ((byte)iVar7 & 0x1f)) != 0) {
                FUN_00cc4d40(iVar7);
              }
              iVar7 = iVar7 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else if (*(char *)((int)puVar5 + 0xd5) != '\0') {
          (**(code **)*puVar5)(1);
          *(undefined4 *)(param_1 + 0x5f4) = 0;
          iVar3 = cTitleDisp::cTitleDisp();
          *(int *)(param_1 + 0x5f8) = iVar3;
          *(undefined1 *)(iVar3 + 0xe0) = 1;
          DAT_01dc13fc = 1;
          uVar1 = *(uint *)(param_1 + 0x228);
          iVar7 = 0;
          iVar3 = 0x1c;
          do {
            if ((uVar1 & 1 << ((byte)iVar7 & 0x1f)) != 0) {
              FUN_00cc4d40(iVar7);
            }
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        goto LAB_00d37ef3;
      }
    }
    else if (*(char *)((int)puVar5 + 0xd5) != '\0') {
      (**(code **)*puVar5)(1);
      *(undefined4 *)(param_1 + 0x5f8) = 0;
      if (DAT_018b9148 != 0xf09) {
        iVar3 = cTitleDisp::cTitleDisp();
        *(int *)(param_1 + 0x5fc) = iVar3;
        *(undefined1 *)(iVar3 + 0xe0) = 2;
        DAT_01dc13fc = 2;
        uVar1 = *(uint *)(param_1 + 0x228);
        iVar3 = 0;
        uVar6 = 1;
        do {
          if ((uVar1 & uVar6) != 0) {
            FUN_00cc4d40(iVar3);
          }
          iVar3 = iVar3 + 1;
          uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        } while (iVar3 < 0x1c);
        goto LAB_00d37ef3;
      }
      goto LAB_00d37eec;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x5fc);
    if ((puVar5 == (undefined4 *)0x0) || (*(char *)((int)puVar5 + 0xd5) == '\0')) goto LAB_00d37ef3;
    (**(code **)*puVar5)(1);
    *(undefined4 *)(param_1 + 0x5fc) = 0;
  }
LAB_00d37eec:
  *(undefined1 *)(param_1 + 0x631) = 1;
LAB_00d37ef3:
  if (*(int **)(param_1 + 0x5f4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5f4) + 4))();
  }
  if (*(int **)(param_1 + 0x5f8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5f8) + 4))();
  }
  if (*(int **)(param_1 + 0x5fc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5fc) + 4))();
  }
  if (*(int *)(param_1 + 0x600) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}

