// src/unsorted/unit_00942C00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00942C00..00942D90, 3 functions

#include "types.h"

// 00942C00  FUN_00942c00  size=83  [run]
void __thiscall FUN_00942c00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  iVar2 = 0xb;
  puVar1 = (undefined4 *)(param_1 + 0xe0);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  return;
}

// 00942C60  FUN_00942c60  size=293  [run]
void __fastcall FUN_00942c60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  puVar1 = param_1 + 0x26;
  local_4 = 0xc;
  do {
    FUN_00dd7270();
    if (*(int *)(puVar1[-0x12] + 4) != 0) {
      *(undefined4 *)(puVar1[-0x12] + 8) = 0;
    }
    puVar1[-0x10] = 0xbf800000;
    puVar1[-0x11] = 0xffffffff;
    puVar1[-0xf] = 0x10010;
    puVar1[-0xd] = 0;
    puVar1[-0xe] = 0;
    puVar1[-0xc] = 0;
    puVar1[-0xb] = 0;
    puVar1[-10] = 0;
    puVar1[-8] = 0x447a0000;
    puVar1[-9] = 0;
    puVar1[-7] = 0xbf800000;
    puVar1[-6] = 0xbf800000;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0x3f800000;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[10] = 0;
    puVar1[5] = 1;
    puVar1[-0x16] = 0;
    puVar1[9] = 0;
    puVar1[-0x14] = 0;
    puVar1[6] = 0;
    puVar1[-0x15] = 0;
    if ((undefined4 *)puVar1[-0x12] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[-0x12])(1);
    }
    puVar1 = puVar1 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_00d8a1d0(0x15,param_1[0x220]);
  if ((undefined4 *)param_1[0x220] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x220])(1);
    param_1[0x220] = 0;
  }
  param_1[0x224] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 1;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  return;
}

// 00942D90  FUN_00942d90  size=111  [run]
void __fastcall FUN_00942d90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_20 [28];
  
  piVar3 = (int *)(param_1 + 0x4c);
  iVar2 = 0xc;
  do {
    if ((((*piVar3 != 0) && (piVar3[0x16] == 0)) && (*(int *)(piVar3[1] + 4) != 0)) &&
       ((*(int *)(piVar3[1] + 8) != 0 && ((float)piVar3[3] < 0.0)))) {
      piVar3[0x16] = 1;
      uVar1 = DebrisHandleList::getExplosionPos(local_20);
      DebrisHandleList::callExplosion(uVar1);
      FUN_0093e740();
    }
    piVar3 = piVar3 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

