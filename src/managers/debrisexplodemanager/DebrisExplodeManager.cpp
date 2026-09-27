// src/managers/debrisexplodemanager/DebrisExplodeManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00942E00..00942E00, 1 functions

#include "mgrr.h"

// 00942E00  DebrisExplodeManager::addHandle  size=271  [class]
undefined4 __thiscall DebrisExplodeManager::addHandle(int *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (*param_2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x83c) != 0)) {
      uVar3 = 0;
      while( true ) {
        if ((param_1[uVar3 * 0x2c + 0x15] == *(int *)(iVar2 + 0x83c)) &&
           (param_1[uVar3 * 0x2c + 0x29] == 0)) break;
        bVar1 = (char)uVar3 + 1;
        uVar3 = (uint)bVar1;
        if (0xb < bVar1) {
          bVar1 = 0;
          while ((*(int *)(param_1[(uint)bVar1 * 0x2c + 0x14] + 4) != 0 &&
                 (*(int *)(param_1[(uint)bVar1 * 0x2c + 0x14] + 8) != 0))) {
            bVar1 = bVar1 + 1;
            if (0xb < bVar1) {
              return 1;
            }
          }
          iVar2 = DebrisHandleList::addHandle(param_2,param_3);
          if (iVar2 != 0) {
            iVar2 = param_1[(uint)bVar1 * 0x2c + 0x15];
            iVar4 = 0xc;
            piVar5 = param_1;
            do {
              if (iVar2 == *piVar5) {
                param_1[(uint)bVar1 * 0x2c + 0x2e] = 1;
              }
              piVar5 = piVar5 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            return 1;
          }
LAB_00942ed7:
          FUN_00dd5650(&DAT_0164f628);
          return 0;
        }
      }
      iVar2 = DebrisHandleList::addHandle(param_2,param_3);
      if (iVar2 != 0) {
        iVar2 = 0xc;
        piVar5 = param_1;
        do {
          if (param_1[uVar3 * 0x2c + 0x15] == *piVar5) {
            param_1[uVar3 * 0x2c + 0x2e] = 1;
          }
          piVar5 = piVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        return 1;
      }
      goto LAB_00942ed7;
    }
  }
  return 0;
}

