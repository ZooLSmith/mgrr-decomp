// src/managers/cubemapmanager/CubeMapManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EAF820..00EB3F70, 5 functions

#include "types.h"

// 00EAF820  FUN_00eaf820  size=107  [callgraph]
void __thiscall FUN_00eaf820(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  uint uVar2;
  
  if (((*param_3 == 'C') && (param_3[1] == 'T')) && (param_3[2] == '2')) {
    uVar2 = 0;
    *param_1 = param_2;
    param_1[1] = param_3;
    if (*(int *)(param_3 + 4) != 0) {
      piVar1 = (int *)(param_3 + 8);
      do {
        if ((*piVar1 != 0) && (param_3 + *piVar1 != (char *)0x0)) {
          FUN_00fa25d0(param_3 + *piVar1);
        }
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar2 < *(uint *)(param_3 + 4));
    }
    return;
  }
  FUN_00dd5650(&DAT_016d2b20,param_2);
  return;
}

// 00EAF890  FUN_00eaf890  size=108  [callgraph]
void __fastcall FUN_00eaf890(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != -1) {
    uVar2 = 0;
    if (*(int *)(param_1[1] + 4) != 0) {
      iVar3 = 8;
      do {
        iVar1 = *(int *)(iVar3 + param_1[1]);
        if ((iVar1 != 0) && (iVar1 = param_1[1] + iVar1, iVar1 != 0)) {
          iVar1 = FUN_00f99270(iVar1);
          if (iVar1 != 0) {
            FUN_00fa3830(iVar1);
          }
          FUN_00f972f0();
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < *(uint *)(param_1[1] + 4));
    }
    *param_1 = -1;
    param_1[1] = 0;
  }
  return;
}

// 00EAF900  CubeMapManager::setData  size=200  [class]
void __thiscall CubeMapManager::setData(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[0x54e] == 8) {
    FUN_00dd5650(&DAT_016d2b60,param_2);
    return;
  }
  param_1[param_1[0x54e] + 0x54f] = param_2;
  param_1[param_1[0x54e] + 0x557] = param_3;
  piVar2 = param_1 + 0x54e;
  *piVar2 = *piVar2 + 1;
  if (*piVar2 != 0) {
    uVar3 = 0;
    if (param_1[0x54e] != 0) {
      piVar2 = param_1 + 0x557;
      do {
        uVar4 = 0;
        piVar1 = param_1;
        do {
          if (*piVar1 == -1) {
            FUN_00eaf820(piVar2[-8],*piVar2);
            break;
          }
          uVar4 = uVar4 + 1;
          piVar1 = piVar1 + 0xe2;
        } while (uVar4 < 6);
        if (uVar4 == 6) {
          FUN_00dd5650(&DAT_016d2ba0);
        }
        piVar2[-8] = -1;
        *piVar2 = 0;
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < (uint)param_1[0x54e]);
    }
    param_1[0x54e] = 0;
  }
  return;
}

// 00EAF9D0  FUN_00eaf9d0  size=70  [callgraph]
void __thiscall FUN_00eaf9d0(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x1830) = 1;
    *(undefined4 *)(param_1 + 0x1834) = *param_3;
    *(undefined4 *)(param_1 + 0x1838) = param_3[1];
    *(undefined4 *)(param_1 + 0x183c) = param_3[2];
    CubeMapManager::setData();
    return;
  }
  return;
}

// 00EB3F70  CubeMapManager::getCubeTexIndex  size=109  [class]
int __thiscall CubeMapManager::getCubeTexIndex(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == -1) {
    FUN_00dd5650(&DAT_016d2d28);
    return -1;
  }
  uVar2 = 0;
  do {
    if (*param_1 == param_2) {
      iVar1 = *(int *)(param_1[1] + 8 + param_3 * 4);
      if ((iVar1 != 0) && (param_1[1] + iVar1 != 0)) {
        return uVar2 * 0x100 + param_3;
      }
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0xe2;
    if (5 < uVar2) {
      if (param_3 != 0) {
        FUN_00dd5650(&DAT_016d2e30,param_2,param_3);
      }
      return -1;
    }
  } while( true );
}

