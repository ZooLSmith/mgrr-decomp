// src/hw/cPrimHeap.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9D070..00FA9B80, 3 functions

#include "mgrr.h"

// 00F9D070  Hw::cPrimHeap::cPrimHeap  size=49  [class]
void __fastcall Hw::cPrimHeap::cPrimHeap(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[1] != 0) && (param_1[1] != 0)) {
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00FA5F60  Hw::cPrimHeap::cPrimHeap_2  size=230  [class]
void __fastcall Hw::cPrimHeap::cPrimHeap_2(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar5;
  int *piVar4;
  
  iVar2 = 1;
  puVar5 = (undefined4 *)(param_1 + 0xb8);
  do {
    puVar5[-7] = cIndexBufferHeap::vftable;
    if (puVar5[-5] != 0) {
      FUN_00fa16d0(puVar5[-6]);
      piVar3 = (int *)puVar5[-6];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        puVar5[-6] = 0;
      }
    }
    iVar2 = iVar2 + -1;
    puVar5[-5] = 0;
    puVar5[-6] = 0;
    puVar5[-4] = 0;
    puVar5[-3] = 0;
    puVar5[-1] = 0;
    puVar5[-2] = 0;
    puVar5 = puVar5 + -7;
  } while (-1 < iVar2);
  iVar2 = 1;
  piVar3 = (int *)(param_1 + 0x80);
  do {
    piVar4 = piVar3 + -7;
    if (piVar3[-6] != 0) {
      FUN_00fa16d0(*piVar4);
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar4 = 0;
      }
    }
    piVar3[-6] = 0;
    *piVar4 = 0;
    if (piVar3[-5] != 0) {
      FUN_00dd48d0(piVar3[-5],0);
      piVar3[-5] = 0;
    }
    iVar2 = iVar2 + -1;
    piVar3[-3] = 0;
    piVar3[-1] = 0;
    piVar3[-2] = 0;
    piVar3[-4] = 0;
    piVar3 = piVar4;
  } while (-1 < iVar2);
  iVar2 = 1;
  puVar5 = (undefined4 *)(param_1 + 0x48);
  do {
    puVar5[-5] = vftable;
    if ((puVar5[-4] != 0) && (puVar5[-4] != 0)) {
      FUN_00dd48d0(puVar5[-4],0);
      puVar5[-4] = 0;
    }
    iVar2 = iVar2 + -1;
    puVar5[-4] = 0;
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    puVar5 = puVar5 + -5;
  } while (-1 < iVar2);
  return;
}

// 00FA9B80  Hw::cPrimHeap::vf00  size=69  [class]
undefined4 * __thiscall Hw::cPrimHeap::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[1] != 0) && (param_1[1] != 0)) {
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

