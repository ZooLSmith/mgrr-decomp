// src/unsorted/unit_00D37800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D37800..00D37800, 1 functions

#include "types.h"

// 00D37800  FUN_00d37800  size=603  [run]
void __fastcall FUN_00d37800(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  float local_68;
  float local_64 [2];
  float local_5c [2];
  float local_54 [17];
  float local_10;
  
  if (*(char *)(param_1 + 0x195) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x194) != '\0') {
    if (*(char *)(param_1 + 0x194) != '\x01') {
      return;
    }
    goto LAB_00d378dd;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  if (*(int *)(param_1 + 0x19c) == 2) {
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    *(undefined1 *)(param_1 + 0x198) = 8;
  }
  else {
    if (*(int *)(param_1 + 0x19c) == 0) {
      if (*(char *)(param_1 + 0x197) == '\0') {
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
LAB_00d378a4:
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x28),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x2c),1,3);
      }
    }
    else if (*(char *)(param_1 + 0x197) == '\0') goto LAB_00d378a4;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
  }
  *(char *)(param_1 + 0x194) = *(char *)(param_1 + 0x194) + '\x01';
  if (*(char *)(param_1 + 0x197) == '\0') {
    return;
  }
LAB_00d378dd:
  if ((*(int *)(param_1 + 0x19c) == 1) || (*(int *)(param_1 + 0x19c) == 0)) {
    local_68 = 0.0;
    FUN_00988d40();
    iVar2 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x28),local_54);
    if (iVar2 != 0) {
      local_68 = local_10 + local_54[0];
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x28) * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      local_68 = *(float *)(iVar2 + 0x10) * local_68;
    }
    FUN_00cb32a0(local_64,*(undefined4 *)(param_1 + 0x24));
    FUN_00cb3240(local_5c,*(undefined4 *)(param_1 + 0x24));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x24),
                 (local_64[0] + local_64[0] + local_68) / local_5c[0]);
  }
  if (*(char *)(param_1 + 0x197) == '\0') {
    *(short *)(param_1 + 0x19a) = *(short *)(param_1 + 0x19a) + 1;
    iVar2 = *(int *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x30 + *(char *)(param_1 + 0x198) * 4);
    if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(uint *)(iVar2 + 0x3b0) = (uint)*(ushort *)(param_1 + 0x19a) % 3;
    }
    if (4 < *(ushort *)(param_1 + 0x19a)) {
      *(undefined2 *)(param_1 + 0x19a) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x30 + *(char *)(param_1 + 0x198) * 4),1);
      *(char *)(param_1 + 0x198) = *(char *)(param_1 + 0x198) + '\x01';
    }
    if ('\b' < *(char *)(param_1 + 0x198)) {
      *(char *)(param_1 + 0x194) = *(char *)(param_1 + 0x194) + '\x01';
      *(undefined1 *)(param_1 + 0x196) = 1;
      return;
    }
  }
  else {
    puVar4 = (uint *)(param_1 + 0x30);
    iVar2 = 10;
    do {
      iVar3 = *(int *)(param_1 + 0x18);
      if (((iVar3 != 0) && (*puVar4 < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *puVar4 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(char *)(param_1 + 0x194) = *(char *)(param_1 + 0x194) + '\x01';
    *(undefined1 *)(param_1 + 0x196) = 1;
  }
  return;
}

