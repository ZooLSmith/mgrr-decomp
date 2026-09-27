// src/managers/cslowratemanager/cSlowRateManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E06230..00E08740, 4 functions

#include "mgrr.h"

// 00E06230  cSlowRateManager::allocUnit  size=116  [class]
undefined4 * __fastcall cSlowRateManager::allocUnit(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined4 *)FUN_00e14fb0();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[3] = 0x3f800000;
      puVar1[6] = 0x3f800000;
      puVar1[4] = 0x3f800000;
      puVar1[1] = 3;
      puVar1[5] = 0x3f800000;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[7] = 0;
      puVar1[2] = 0;
      InterlockedIncrement(puVar1 + 2);
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      FUN_00e14350(puVar1);
      return puVar1;
    }
  }
  FUN_00dd5650(&DAT_016cc2d0);
  return (undefined4 *)0x0;
}

// 00E08640  FUN_00e08640  size=81  [callgraph]
undefined4 __thiscall FUN_00e08640(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_01dd9160 == 0) {
    FUN_00dd5650(&DAT_016cc124);
  }
  else {
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 4) = param_2;
      return 1;
    }
    iVar1 = cSlowRateManager::allocUnit();
    *param_1 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = param_2;
      return 1;
    }
  }
  return 0;
}

// 00E086A0  FUN_00e086a0  size=145  [callgraph]
undefined4 __thiscall FUN_00e086a0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e198a0(0x400,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(float *)(param_1 + 0x88) = 1.0 / ((1.0 / param_3) * 1000.0);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  return 1;
}

// 00E08740  cSlowRateManager::cleanup  size=163  [class]
void __fastcall cSlowRateManager::cleanup(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  while (uVar4 = uVar2, uVar4 != 0) {
    puVar1 = (uint *)(uVar4 + 0x2c);
    uVar2 = *puVar1;
    if (0 < *(int *)(uVar4 + 8)) {
      FUN_00dd5650(&DAT_016cc398);
    }
    if (*(int *)(uVar4 + 0x28) == 0) {
      *(uint *)(param_1 + 0x38) = *puVar1;
    }
    else {
      *(uint *)(*(int *)(uVar4 + 0x28) + 0x2c) = *puVar1;
    }
    if (*puVar1 != 0) {
      *(undefined4 *)(*puVar1 + 0x28) = *(undefined4 *)(uVar4 + 0x28);
    }
    *(undefined4 *)(uVar4 + 0x28) = 0;
    *puVar1 = 0;
    uVar3 = *(uint *)(param_1 + 0x18);
    if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < *(int *)(param_1 + 0x1c) * 0x34 + uVar3)) {
      FUN_00e14f60(uVar4);
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

