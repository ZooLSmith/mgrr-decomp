// src/unsorted/unit_00C59B10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C59B10..00C59E30, 5 functions

#include "types.h"

// 00C59B10  FUN_00c59b10  size=75  [run]
void __fastcall FUN_00c59b10(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2c),0);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x28);
  }
  FUN_00dd7270();
  return;
}

// 00C59B60  FUN_00c59b60  size=262  [run]
void __fastcall FUN_00c59b60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  if (0.0 < *(float *)(param_1 + 0x44)) {
    fVar5 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x44) = (float)((float10)*(float *)(param_1 + 0x44) - fVar5);
  }
  if (0.0 < *(float *)(param_1 + 0x48)) {
    fVar5 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x48) = (float)((float10)*(float *)(param_1 + 0x48) - fVar5);
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (iVar4 != *(int *)(param_1 + 0x40)) {
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x28) & 2) != 0)) {
        iVar1 = *(int *)(iVar4 + 4);
        iVar2 = *(int *)(iVar4 + 8);
        if (iVar1 != 0) {
          *(int *)(iVar1 + 8) = iVar2;
        }
        if (iVar2 != 0) {
          *(int *)(iVar2 + 4) = iVar1;
        }
        if (*(int *)(param_1 + 0x3c) == iVar4) {
          *(int *)(param_1 + 0x3c) = iVar2;
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        iVar1 = *(int *)(param_1 + 0x38);
        if (iVar1 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar1 + 4);
        }
        *(int *)(iVar4 + 4) = iVar3;
        *(int *)(iVar4 + 8) = iVar1;
        if (iVar3 != 0) {
          *(int *)(iVar3 + 8) = iVar4;
        }
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = iVar4;
        }
        *(int *)(param_1 + 0x38) = iVar4;
      }
      else {
        iVar2 = *(int *)(iVar4 + 8);
      }
      iVar4 = iVar2;
    } while (iVar2 != *(int *)(param_1 + 0x40));
  }
  iVar4 = 5;
  do {
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) && (*(int *)(iVar2 + 0x4e4) != 0)) {
      FUN_00a7c950();
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00c15990();
  FUN_00c41600(0);
  FUN_00c41600(1);
  FUN_00c27fc0();
  return;
}

// 00C59C70  FUN_00c59c70  size=94  [run]
void __fastcall FUN_00c59c70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar4 = *(int *)(param_1 + 0x3c);
  while (iVar4 != iVar1) {
    iVar2 = *(int *)(iVar4 + 4);
    iVar3 = *(int *)(iVar4 + 8);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    if (*(int *)(param_1 + 0x3c) == iVar4) {
      *(int *)(param_1 + 0x3c) = iVar3;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 4);
    }
    *(int *)(iVar4 + 4) = iVar5;
    *(int *)(iVar4 + 8) = iVar2;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 8) = iVar4;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar4;
    }
    *(int *)(param_1 + 0x38) = iVar4;
    iVar4 = iVar3;
  }
  return;
}

// 00C59D80  FUN_00c59d80  size=164  [run]
int __fastcall FUN_00c59d80(int param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  local_4 = 0xff;
  puVar1 = (undefined4 *)(param_1 + 0xa8);
  do {
    puVar1[-0x11] = 0xffffffff;
    puVar1[-0x13] = 0;
    puVar1[-0x10] = 0xffffffff;
    puVar1[-0x12] = 0;
    puVar1[-0xf] = 0xffffffff;
    puVar1[-0xe] = 0xfffffffe;
    puVar1[-0xd] = 0;
    puVar1[-0xc] = 0xffffffff;
    puVar1[-0xb] = 0x1010000;
    puVar1[-9] = 0;
    puVar1[-10] = 0xffffffff;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0xffffffff;
    FUN_00a7c930();
    FUN_00401040(puVar1 + 5,4,0x200,&LAB_00c3f200);
    puVar1 = puVar1 + 0x219;
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  return param_1;
}

// 00C59E30  FUN_00c59e30  size=113  [run]
void __fastcall FUN_00c59e30(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x3c);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
  }
  FUN_00dd7270();
  return;
}

