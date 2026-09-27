// src/managers/triggermanager/actions/TrgActReqBehInst.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F4C0..00C7F4C0, 1 functions

#include "mgrr.h"

// 00C7F4C0  Trigger::Act::REQ_BEH_INST  size=129  [class]
undefined4 __fastcall Trigger::Act::REQ_BEH_INST(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_40 [15];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aac58);
    return 0;
  }
  iVar2 = FUN_00a7f600(*(undefined4 *)(iVar1 + 8));
  if (iVar2 != 0) {
    local_40[0] = *(undefined4 *)(iVar1 + 0xc);
    puVar3 = local_40;
    FUN_00a7c8a0(puVar3);
    FUN_00a9d720(puVar3);
    return 1;
  }
  FUN_00dd5650(&DAT_016aac1c,*(undefined4 *)(iVar1 + 8));
  return 0;
}

