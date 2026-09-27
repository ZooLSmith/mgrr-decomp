// src/unsorted/unit_00962860.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00962860..00962E70, 7 functions

#include "types.h"

// 00962860  FUN_00962860  size=48  [run]
void __fastcall FUN_00962860(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_14;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  return;
}

// 009628E0  FUN_009628e0  size=42  [run]
void __thiscall FUN_009628e0(int param_1,float *param_2)

{
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *param_2;
  *(float *)(param_1 + 0x14) = param_2[1] + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) = param_2[2] + *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x1c) = param_2[3] + *(float *)(param_1 + 0x1c);
  return;
}

// 00962910  FUN_00962910  size=170  [run]
undefined4 __thiscall FUN_00962910(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [52];
  undefined1 auStack_6c [28];
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return 0;
  }
  local_e4 = param_3[2];
  local_e8 = param_3[1];
  local_ec = *param_3;
  D3DXMatrixTranslation(local_50);
  D3DXMatrixInverse(auStack_a0,0,*(int *)(param_1 + 0x24) + 0x10);
  D3DXMatrixMultiply(&local_ec,auStack_6c,auStack_ac);
  *param_2 = uStack_c8;
  param_2[1] = uStack_c4;
  param_2[2] = uStack_c0;
  return 1;
}

// 009629C0  FUN_009629c0  size=98  [run]
undefined4 __thiscall FUN_009629c0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    return 0;
  }
  D3DXVec3TransformNormal(param_2,param_3,iVar1 + 0x10);
  *param_2 = *param_2 + *(float *)(iVar1 + 0x40);
  param_2[1] = *(float *)(iVar1 + 0x44) + param_2[1];
  param_2[2] = *(float *)(iVar1 + 0x48) + param_2[2];
  return 1;
}

// 00962AA0  FUN_00962aa0  size=55  [run]
void __thiscall FUN_00962aa0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  return;
}

// 00962C50  FUN_00962c50  size=182  [run]
int * __fastcall FUN_00962c50(int *param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = param_1[3] + 1;
  piVar5 = (int *)(param_1[2] + param_1[3] * 0x18);
  param_1[3] = iVar4;
  if (iVar4 < 0x400) {
    *piVar5 = -1;
    piVar5[1] = 0;
    piVar5[4] = 0;
    piVar5[2] = 0;
    piVar5[5] = 0;
    piVar5[3] = 0;
  }
  else {
    FUN_00dd5650("Node Buff Over !!!!!!");
    piVar5 = (int *)0x0;
  }
  piVar3 = (int *)*param_1;
  fVar1 = 10000.0;
  piVar2 = piVar3;
  if (piVar5 == (int *)0x0) {
    return (int *)0x0;
  }
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[5]) {
    if ((float)piVar2[3] < fVar1) {
      fVar1 = (float)piVar2[3];
      piVar5 = piVar2;
    }
  }
  if (*piVar3 != *piVar5) {
    do {
      piVar2 = piVar3;
      piVar3 = (int *)piVar2[5];
      if (piVar3 == (int *)0x0) {
        return piVar5;
      }
    } while (*piVar3 != *piVar5);
    if (piVar2 != (int *)0x0) {
      piVar2[5] = piVar3[5];
      return piVar5;
    }
  }
  *param_1 = piVar3[5];
  return piVar5;
}

// 00962E70  FUN_00962e70  size=164  [run]
void __fastcall FUN_00962e70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar1 = param_1 + 0x10;
  *param_1 = 0;
  param_1[0x3e] = 0xffffffff;
  param_1[1] = 0;
  param_1[0x3f] = 0xffffffff;
  param_1[2] = 0;
  iVar2 = 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  do {
    puVar1[-1] = 0x3fc00000;
    *(undefined2 *)(puVar1 + -2) = 0xffff;
    *(undefined2 *)((int)puVar1 + -6) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  return;
}

