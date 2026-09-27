// src/unsorted/unit_0048E2C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0048E2C0..0048E2C0, 1 functions

#include "types.h"

// 0048E2C0  FUN_0048e2c0  size=337  [run]
/* WARNING: Removing unreachable block (ram,0x0048e326) */

undefined4 __thiscall
FUN_0048e2c0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [16];
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  local_74 = param_1 + 100;
  uVar3 = 0;
  local_78 = param_1;
  iVar1 = FUN_00907640(local_74,&local_7c,local_70);
  if (iVar1 != 0) {
    uVar3 = 1;
    FUN_0112bcf0();
    if (0 < *(int *)(local_7c + 0x14)) {
      iVar1 = *(int *)(*(int *)(local_7c + 0x10) + 0x28);
      iVar2 = 0;
      iVar4 = 0;
      if (*(char *)(iVar1 + 0x18) == '\x01') {
        iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        if (*(char *)(iVar1 + 0x18) == '\x02') {
          iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
        }
        else {
          iVar4 = 0;
        }
      }
      if (iVar2 != 0) {
        FUN_008f7780(iVar2);
      }
      if (iVar4 != 0) {
        FUN_008f7780(iVar4);
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  iVar1 = FUN_009f8b40();
  local_60[0] = local_74;
  local_50 = *param_3;
  local_4c = param_3[1];
  local_2c = iVar1 << 0x10 | 7;
  local_48 = param_3[2];
  local_60[1] = 0;
  local_44 = param_3[3];
  local_28 = 0x3ff001b;
  local_40 = *param_4;
  local_24 = 0;
  local_20 = 0;
  local_3c = param_4[1];
  local_1c = "Em0080 LockMaker";
  local_38 = param_4[2];
  local_34 = param_4[3];
  local_30 = 0x3ecccccd;
  FUN_0090fb00(local_60);
  return uVar3;
}

