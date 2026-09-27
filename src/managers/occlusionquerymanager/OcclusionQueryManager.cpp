// src/managers/occlusionquerymanager/OcclusionQueryManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9F540..00F9F540, 1 functions

#include "mgrr.h"

// 00F9F540  OcclusionQueryManager::AllocQuery  size=152  [class]
uint OcclusionQueryManager::AllocQuery(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_018da4b0 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00fa8830();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      if ((puVar1 < DAT_018da4b0) || (DAT_018da4b0 + DAT_018da4b4 * 7 <= puVar1)) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = (uint)((int)puVar1 - (int)DAT_018da4b0) / 0x1c;
      }
      puVar1[1] = DAT_01f20664 + uVar2 * 4;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined1 *)((int)puVar1 + 10) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      FUN_00fa8570(puVar1);
      return uVar2;
    }
  }
  FUN_00dd5650(&DAT_016eb618);
  return 0xffffffff;
}

