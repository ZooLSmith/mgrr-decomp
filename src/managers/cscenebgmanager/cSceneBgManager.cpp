// src/managers/cscenebgmanager/cSceneBgManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009351C0..00935420, 2 functions

#include "mgrr.h"

// 009351C0  cSceneBgManager::moveReadLayoutRequest  size=606  [class]
void __fastcall cSceneBgManager::moveReadLayoutRequest(undefined4 *param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  uint local_3c;
  undefined1 local_34 [4];
  char local_30 [16];
  char local_20 [32];
  
  iVar7 = param_1[1];
  local_3c = 0;
  piVar6 = param_1 + 0x89e;
  do {
    if (*(int *)(param_1[1] + 8) <= (int)param_1[4]) break;
    if (*piVar6 == -1) {
LAB_00935231:
      if (0x100 < (int)param_1[4]) {
        FUN_00dd5650(&DAT_0164ed5c);
        break;
      }
      pcVar1 = (char *)(iVar7 + 0x14 + param_1[4] * 0x14);
      local_30[0] = '\0';
      local_30[1] = '\0';
      local_30[2] = '\0';
      local_30[3] = '\0';
      local_30[4] = '\0';
      local_30[5] = '\0';
      local_30[6] = '\0';
      local_30[7] = '\0';
      local_30[8] = 0;
      iVar3 = 0;
      pcVar5 = pcVar1;
      do {
        pcVar5[(int)(local_30 + -(int)pcVar1)] = *pcVar5;
        if (*pcVar5 == '\0') break;
        iVar3 = iVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (iVar3 < 8);
      if (local_30[0] == '\0') {
        _sprintf_s(local_20,0x20,"%c%c%04x",(int)pcVar1[8],(int)pcVar1[9],
                   (uint)*(ushort *)(pcVar1 + 10));
      }
      else {
        _sprintf_s(local_20,0x20,"%s_%c%c%04x",local_30);
      }
      iVar3 = FUN_009fde60(local_20);
      if (iVar3 != 0xd0404) {
        if (iVar3 == -1) {
          FUN_00dd5650(&DAT_0164ede8,local_20,*param_1);
        }
        else {
          iVar4 = FUN_009fe920(iVar3);
          if (iVar4 == 0) {
            FUN_00dd5650(&DAT_0164edb8,local_20,*param_1);
          }
          else {
            iVar4 = FUN_00a00a60(iVar3,0);
            if (iVar4 == 0) {
              FUN_00dd5650(&DAT_0164ed84,local_20,*param_1);
            }
            else {
              *piVar6 = iVar3;
            }
          }
        }
      }
      param_1[4] = param_1[4] + 1;
    }
    else {
      iVar3 = FUN_00a00ca0(*piVar6,0);
      if (iVar3 != 0) {
        cFixedList::insert_2(local_34,param_1 + 0xc,piVar6);
        *piVar6 = -1;
        goto LAB_00935231;
      }
      if (*piVar6 == -1) goto LAB_00935231;
    }
    local_3c = local_3c + 1;
    piVar6 = piVar6 + 1;
  } while (local_3c < 0x10);
  if (*(int *)(param_1[1] + 8) <= (int)param_1[4]) {
    bVar2 = true;
    piVar6 = param_1 + 0x89e;
    iVar7 = 0x10;
    do {
      if (*piVar6 != -1) {
        iVar3 = FUN_00a00ca0(*piVar6,0);
        if (iVar3 == 0) {
          iVar3 = FUN_00a01080(*piVar6,0);
          if (iVar3 == 0) {
            bVar2 = false;
          }
          else {
            FUN_00a00bd0(*piVar6,0);
            FUN_009f8ea0(local_30,0x10,*piVar6,0);
            FUN_00dd5650(&DAT_0164ed08,local_30);
            *piVar6 = -1;
          }
        }
        else {
          cFixedList::insert_2(local_34,param_1 + 0xc,piVar6);
          *piVar6 = -1;
        }
      }
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (bVar2) {
      param_1[3] = 4;
    }
  }
  return;
}

// 00935420  FUN_00935420  size=225  [callgraph]
void __fastcall FUN_00935420(int param_1)

{
  int *piVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  default:
    return;
  case 2:
    break;
  case 3:
    cSceneBgManager::moveReadLayoutRequest();
    return;
  case 5:
    piVar1 = (int *)(param_1 + 0x2278);
    iVar2 = 0x10;
    do {
      if (*piVar1 != -1) {
        FUN_00a00bd0(*piVar1,0);
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 0xc) = 6;
    return;
  case 6:
    FUN_00933840();
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(int *)(*(int *)(param_1 + 4) + 8) != 0) {
      *(undefined4 *)(param_1 + 0x2278) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x227c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2280) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2284) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2288) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x228c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2290) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2294) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2298) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x229c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22a0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22a4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22a8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22ac) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22b0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22b4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc) = 3;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  return;
}

