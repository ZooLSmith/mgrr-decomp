// src/managers/triggermanager/actions/TrgActReqGpBehInst.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9D540..00C9D540, 1 functions

#include "mgrr.h"

// 00C9D540  Trigger::Act::REQ_GP_BEH_INST  size=206  [class]
undefined4 __fastcall Trigger::Act::REQ_GP_BEH_INST(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40 [15];
  
  iVar1 = *(int *)(param_1 + 4);
  local_48 = 0;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b1b1c);
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  puVar4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = lib::AllocatedArray<Entity*>::vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar4 = puVar2;
  }
  local_44 = &DAT_01b7bd48;
  FUN_00a81e00(0x20,&local_44);
  iVar3 = FUN_00c19d00(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),puVar4);
  if (0 < iVar3) {
    iVar5 = puVar4[1];
    iVar3 = iVar5 + puVar4[2] * 4;
    if (iVar5 != iVar3) {
      local_48 = 1;
      do {
        FUN_00a7c8a0();
        local_40[0] = *(undefined4 *)(iVar1 + 0x10);
        FUN_00a9d720(local_40);
        iVar5 = iVar5 + 4;
      } while (iVar5 != iVar3);
    }
  }
  return local_48;
}

