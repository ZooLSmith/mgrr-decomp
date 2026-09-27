// src/managers/triggermanager/actions/TrgActRadermap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F550..00C7F550, 1 functions

#include "mgrr.h"

// 00C7F550  Trigger::Act::RADERMAP  size=156  [class]
undefined4 __fastcall Trigger::Act::RADERMAP(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_28 [10];
  
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = 0;
  local_28[0] = 0x24;
  local_28[1] = 0x22;
  local_28[2] = 0x27;
  local_28[3] = 0x29;
  local_28[4] = 0x25;
  local_28[5] = 0x23;
  local_28[6] = 0x21;
  local_28[7] = 0x28;
  local_28[8] = 0x2a;
  local_28[9] = 0x26;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aac88);
    return 0;
  }
  uVar2 = *(uint *)(iVar1 + 8);
  if ((uVar2 < 2) && (*(uint *)(iVar1 + 0xc) < 5)) {
    FUN_00d89e60(local_28[*(uint *)(iVar1 + 0xc) + uVar2 * 4 + uVar2]);
    uVar3 = 1;
  }
  return uVar3;
}

