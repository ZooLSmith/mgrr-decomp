// src/unsorted/unit_00CB7920.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB7920..00CB7AE0, 5 functions

#include "types.h"

// 00CB7920  FUN_00cb7920  size=90  [run]
void __thiscall FUN_00cb7920(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x140) * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x94);
    uVar2 = *(undefined4 *)(iVar3 + 0x98);
    *param_2 = *(undefined4 *)(iVar3 + 0x90);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00CB7980  FUN_00cb7980  size=184  [run]
float10 __thiscall FUN_00cb7980(int param_1,uint param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  float local_10;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      local_10 = (float)piVar1[1];
      goto LAB_00cb79d2;
    }
  }
  local_10 = 0.0;
LAB_00cb79d2:
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      return ((float10)(float)piVar1[3] + (float10)(float)piVar1[3] + (float10)param_3) /
             (float10)local_10;
    }
  }
  return ((float10)0 + (float10)0 + (float10)param_3) / (float10)local_10;
}

// 00CB7A40  FUN_00cb7a40  size=25  [run]
void FUN_00cb7a40(uint param_1)

{
  DAT_01dc0880 = param_1;
  if (6 < param_1) {
    DAT_01dc0880 = 6;
  }
  return;
}

// 00CB7A60  FUN_00cb7a60  size=76  [run]
void FUN_00cb7a60(uint param_1,undefined4 *param_2)

{
  int iVar1;
  
  DAT_01dc0878 = 1;
  if (param_1 < DAT_01dc0880) {
    *(undefined4 *)(&DAT_01dc4290 + param_1 * 0x18) = *param_2;
    iVar1 = param_1 * 0x18;
    *(undefined4 *)(&DAT_01dc4294 + iVar1) = param_2[1];
    *(undefined4 *)(&DAT_01dc4298 + iVar1) = param_2[2];
    *(undefined4 *)(&DAT_01dc429c + iVar1) = param_2[3];
    *(undefined4 *)(&DAT_01dc42a0 + iVar1) = param_2[4];
    *(undefined4 *)(&DAT_01dc42a4 + iVar1) = param_2[5];
  }
  return;
}

// 00CB7AE0  FUN_00cb7ae0  size=161  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cb7ae0(float param_1,float param_2)

{
  int *piVar1;
  
  if ((param_1 != _DAT_01dc0884) && (param_1 < _DAT_01dc0884)) {
    DAT_01dc0890 = DAT_01dc0890 + 1;
    piVar1 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar1 + 0x2c))();
  }
  if (_DAT_01dc0888 != 0.0) {
    if (param_2 <= _DAT_01dc0888) {
      if (param_2 < _DAT_01dc0888) {
        DAT_01dc08a4 = 1;
        _DAT_01dc0884 = param_1;
        _DAT_01dc0888 = param_2;
        return;
      }
    }
    else {
      DAT_01dc08a0 = 1;
    }
  }
  _DAT_01dc0884 = param_1;
  _DAT_01dc0888 = param_2;
  return;
}

