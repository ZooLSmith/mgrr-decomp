// src/managers/cobjcutmanager/cObjCutManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8CF50..00D8CF50, 1 functions

#include "mgrr.h"

// 00D8CF50  cObjCutManager::startup  size=186  [class]
undefined4 __fastcall cObjCutManager::startup(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d8c640(0x10,&DAT_01b7bd48);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    iVar1 = FUN_00d8c720(0x800,&DAT_01b7bd48);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x180) = 100;
      *(undefined4 *)(param_1 + 0x184) = 0;
      *(undefined4 *)(param_1 + 0x188) = 100;
      *(undefined4 *)(param_1 + 0x18c) = 0;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(undefined4 *)(param_1 + 0x194) = 0;
      FUN_00d8aaf0(DAT_01b6efd0);
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016c2830);
  return 0;
}

