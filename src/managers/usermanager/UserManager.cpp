// src/managers/usermanager/UserManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009C8720..009C8720, 1 functions

#include "mgrr.h"

// 009C8720  UserManager::SetSigninPad  size=617  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 UserManager::SetSigninPad(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (DAT_01b5d1d8 != 0) {
    FUN_00dd5650(&DAT_01658838);
    return 0;
  }
  iVar2 = FUN_00df7fc0();
  if (DAT_01b5d1d4 != 0) {
    FUN_00dfd560();
  }
  DAT_01b5d1d4 = 0;
  iVar5 = 0;
  puVar3 = &DAT_01b7b914;
  do {
    if ((*puVar3 & ((-(uint)(iVar2 != 1) & 0xfffffff0) + 0x20 | 0x100)) != 0) {
      _memset(&DAT_01b660c0,0,0x4880);
      FUN_009c4120(&DAT_01b6a940,0);
      FUN_009c3e30(&DAT_01b6caa0,0);
      FUN_009c4120(&DAT_01b6a940,1);
      FUN_009c3e30(&DAT_01b6caa0,1);
      iVar2 = FUN_0094a8e0(9);
      _DAT_01b6ca64 = 0;
      _DAT_01b6ca68 = 0;
      _DAT_01b6ca80 = 0;
      _DAT_01b6ca84 = 0;
      _DAT_01b6ca88 = 0xb;
      _DAT_01b6ca8c = 0x10;
      _DAT_01b6ca90 = 0xffffffff;
      if (iVar2 < 0x20) {
        puVar6 = (undefined4 *)(&DAT_01b6c98c + iVar2 * 4);
        for (iVar4 = 0x20 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
      }
      _DAT_01b6ca0c = 0xffffffff;
      _DAT_01b6ca10 = 0xffffffff;
      _DAT_01b6ca14 = 0xffffffff;
      _DAT_01b6ca18 = 0xffffffff;
      _DAT_01b6ca1c = 0xffffffff;
      _DAT_01b6ca20 = 0xffffffff;
      _DAT_01b6ca24 = 0xffffffff;
      _DAT_01b6ca28 = 0xffffffff;
      _DAT_01b6ca2c = 0xffffffff;
      _DAT_01b6ca30 = 0xffffffff;
      _DAT_01b6ca34 = 0xffffffff;
      _DAT_01b6ca38 = 0xffffffff;
      _DAT_01b6ca3c = 0xffffffff;
      _DAT_01b6ca40 = 0xffffffff;
      _DAT_01b6ca44 = 0xffffffff;
      _DAT_01b6ca48 = 0xffffffff;
      FUN_009c3e30(&DAT_01b6caa0,2);
      FUN_009c4020(&DAT_01b6caa0);
      _memset(&DAT_01b6d550,0,0x19c0);
      if ((_DAT_01bea098 & 0x20000000) != 0) {
        DAT_01b6eefd = 1;
      }
      _DAT_01b6edb0 = 0xffffffff;
      FUN_009c66e0(&DAT_01b6ef10);
      FID_conflict__memcpy(&DAT_01b5d1e0,&DAT_01b660c0,0x8ee0);
      FID_conflict__memcpy(&DAT_01b6efe0,&DAT_01b660c0,0x8ee0);
      if ((_DAT_01bea098 & 0x20000000) != 0) {
        DAT_01b6601d = 1;
        DAT_01b77e1d = 1;
      }
      FUN_009c7c20();
      FUN_009c6770();
      FUN_00dfd570(iVar5);
      return 1;
    }
    puVar3 = puVar3 + 0xc;
    iVar5 = iVar5 + 1;
  } while ((int)puVar3 < 0x1b7b9d4);
  iVar2 = FUN_00dd9520();
  if (iVar2 == 0) {
    cVar1 = FUN_00cac950();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  FUN_009c8280();
  FUN_00dfd570(0);
  return 1;
}

