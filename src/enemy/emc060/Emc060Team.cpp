// src/enemy/emc060/Emc060Team.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00781610..00781610, 1 functions

#include "mgrr.h"

// 00781610  Emc060Team::entry  size=195  [class]
undefined4 __fastcall Emc060Team::entry(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  if (param_1[0x26] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    FUN_00a7c930();
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    local_c = *(undefined4 *)(iVar2 + 0x51c);
    local_8 = 2;
    local_4 = 2;
    cVar1 = (**(code **)(*(int *)param_1[0x1e] + 8))(local_10);
    if (cVar1 != '\0') {
      param_1[0xc] = 0;
      *param_1 = 0;
      if (param_1[0x26] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
  }
  FUN_00dd5650("Emc060Team::entry() error.");
  if (param_1[0x26] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

