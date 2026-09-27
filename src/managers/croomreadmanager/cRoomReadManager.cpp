// src/managers/croomreadmanager/cRoomReadManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A4C9F0..00A4C9F0, 1 functions

#include "mgrr.h"

// 00A4C9F0  cRoomReadManager::setCommonRoom  size=262  [class]
undefined4 __fastcall cRoomReadManager::setCommonRoom(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  
  uVar3 = 0;
  puVar4 = (uint *)(param_1 + 0x214);
  do {
    uVar1 = *puVar4;
    if ((uVar1 != 0xffffffff) && (0xff < (int)uVar1)) {
      uVar2 = uVar1 & 0xff;
      if (uVar2 < 0x20) {
        uVar1 = uVar1 & 0xf00;
      }
      else if (uVar2 < 0x40) {
        uVar1 = uVar1 & 0xf00 | 0x20;
      }
      else if (uVar2 < 0x60) {
        uVar1 = uVar1 & 0xf00 | 0x40;
      }
      else if (uVar2 < 0x80) {
        uVar1 = uVar1 & 0xf00 | 0x60;
      }
      else if (uVar2 < 0xa0) {
        uVar1 = uVar1 & 0xf00 | 0x80;
      }
      else if (uVar2 < 0xc0) {
        uVar1 = uVar1 & 0xf00 | 0xa0;
      }
      else {
        if (0xdf < uVar2) goto LAB_00a4cadf;
        uVar1 = uVar1 & 0xf00 | 0xc0;
      }
      if ((uVar1 != 0) && (uVar1 != 0xffffffff)) {
        uVar2 = 0;
        puVar5 = (uint *)(param_1 + 0x214);
        do {
          if (*puVar5 == uVar1) goto LAB_00a4cadf;
          uVar2 = uVar2 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar2 < 8);
        uVar2 = 0;
        piVar6 = (int *)(param_1 + 0x214);
        while (*piVar6 != -1) {
          uVar2 = uVar2 + 1;
          piVar6 = piVar6 + 1;
          if (7 < uVar2) {
            FUN_00dd5650(&DAT_01661db0,uVar1);
            return 0;
          }
        }
        *(uint *)(param_1 + 0x214 + uVar2 * 4) = uVar1;
      }
    }
LAB_00a4cadf:
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
    if (7 < uVar3) {
      return 1;
    }
  } while( true );
}

