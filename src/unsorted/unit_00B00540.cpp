// src/unsorted/unit_00B00540.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B00540..00B00540, 1 functions

#include "mgrr.h"

// 00B00540  FUN_00b00540  size=547  [run]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00b00540(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_a4;
  int local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_80 [9];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined4 local_54 [20];
  
  iVar4 = 0;
  local_98 = (int *)(param_1 + 0xa0c);
  local_9c = param_1 + 0xa64;
  local_80[0] = 0x17;
  local_80[1] = 0x900;
  local_80[2] = 0x901;
  local_80[3] = 0x902;
  local_80[4] = 0x903;
  local_80[5] = 0x904;
  local_80[6] = 0x905;
  local_80[7] = 0x906;
  local_80[8] = 0x907;
  local_a4 = 0;
  iVar2 = 0;
  local_94 = 8;
  do {
    if ((*(byte *)(param_1 + 0xa60) & 0x80) == 0) {
      cFixedList::insert_16(local_58,local_9c + 0x18,&local_a4);
      local_54[iVar2 + 1] = local_80[local_a4];
      iVar2 = iVar2 + 1;
      local_a4 = local_a4 + 1;
    }
    else {
      cFixedList::insert_16(local_5c,local_9c + 0x18,&local_a4);
      puVar5 = local_80 + local_a4;
      local_a4 = local_a4 + 1;
      iVar3 = iVar2 + 1;
      local_54[iVar3] = *puVar5;
      iVar2 = 0;
      if (iVar3 != 0) {
        FUN_00ae4860(iVar4,local_54 + 1,iVar3);
        piVar1 = local_98;
        if (*local_98 != 0) {
          uVar6 = 0x41a00000;
          FUN_00912660(local_54,0);
          FUN_00915e60(uVar6);
          local_90 = 0;
          local_8c = (float)iVar4;
          if (iVar4 < 0) {
            local_8c = local_8c + 4.2949673e+09;
          }
          local_8c = local_8c * -3.0;
          puVar5 = &local_90;
          local_88 = 0;
          local_98 = (int *)iVar4;
          FUN_00912660(&local_a0,0);
          FUN_0091a620(puVar5);
        }
        local_9c = local_9c + 0x1c;
        local_98 = piVar1 + 1;
        iVar4 = iVar4 + 1;
        iVar2 = 0;
      }
    }
    *(int *)(param_1 + 0xa60) = *(int *)(param_1 + 0xa60) << 1;
    local_94 = local_94 + -1;
  } while (local_94 != 0);
  cFixedList::insert_16(&local_a0,param_1 + (iVar4 + 0x5f) * 0x1c + 0x18,&local_a4);
  iVar2 = iVar2 + 1;
  local_54[iVar2] = local_80[local_a4];
  if ((iVar2 != 0) &&
     (FUN_00ae4860(iVar4,local_54 + 1,iVar2), *(int *)(param_1 + 0xa0c + iVar4 * 4) != 0)) {
    uVar6 = 0x41a00000;
    FUN_00912660(&local_a0,0);
    FUN_00915e60(uVar6);
    local_90 = 0;
    local_8c = (float)iVar4;
    if (iVar4 < 0) {
      local_8c = local_8c + 4.2949673e+09;
    }
    local_8c = local_8c * -3.0;
    puVar5 = &local_90;
    local_88 = 0;
    local_a0 = iVar4;
    FUN_00912660(&local_a0,0);
    FUN_0091a620(puVar5);
  }
  return;
}

