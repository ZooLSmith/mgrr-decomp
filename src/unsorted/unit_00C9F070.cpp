// src/unsorted/unit_00C9F070.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9F070..00C9F090, 2 functions

#include "types.h"

// 00C9F070  FUN_00c9f070  size=15  [run]
uint __fastcall FUN_00c9f070(int param_1)

{
  return ~(*(uint *)(param_1 + 0x713c) >> 3) & 1;
}

// 00C9F090  FUN_00c9f090  size=477  [run]
void __thiscall FUN_00c9f090(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 1;
  param_1[0x1c59] = param_1[0x1c59] | 1 << ((byte)param_2 & 0x1f);
  piVar1 = param_1 + 0x19a;
  iVar3 = 2;
  do {
    iVar5 = iVar3;
    if ((piVar1[-1] == 3) && (*piVar1 == param_2)) {
      piVar1[10] = piVar1[1];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[0x197] == 3) && (piVar1[0x198] == param_2)) {
      piVar1[0x1a2] = piVar1[0x199];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[0x32f] == 3) && (piVar1[0x330] == param_2)) {
      piVar1[0x33a] = piVar1[0x331];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[0x4c7] == 3) && (piVar1[0x4c8] == param_2)) {
      piVar1[0x4d2] = piVar1[0x4c9];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[0x65f] == 3) && (piVar1[0x660] == param_2)) {
      piVar1[0x66a] = piVar1[0x661];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[0x7f7] == 3) && (piVar1[0x7f8] == param_2)) {
      piVar1[0x802] = piVar1[0x7f9];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[0x98f] == 3) && (piVar1[0x990] == param_2)) {
      piVar1[0x99a] = piVar1[0x991];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if ((piVar1[0xb27] == 3) && (piVar1[0xb28] == param_2)) {
      piVar1[0xb32] = piVar1[0xb29];
      param_1[0x1c59] = param_1[0x1c59] & ~uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    piVar1 = piVar1 + 0xcc0;
    iVar3 = iVar5 + -1;
  } while (iVar3 != 0);
  iVar3 = 0;
  piVar1 = param_1 + 0x19d;
  iVar5 = iVar5 + 0xf;
  do {
    if ((*piVar1 < piVar1[1]) || ((char)piVar1[-0x18d] == '\0')) {
      iVar2 = piVar1[-0x184];
    }
    else {
      iVar2 = (piVar1[-0x189] - piVar1[-0x187]) + piVar1[-0x184];
    }
    iVar3 = iVar3 + iVar2;
    piVar1 = piVar1 + 0x198;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (((iVar3 == 0) && ((*(byte *)(param_1 + 0x1c4f) & 4) != 0)) && (*param_1 != 0)) {
    return;
  }
  return;
}

