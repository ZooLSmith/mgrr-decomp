// src/unsorted/unit_0094BC80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094BC80..0094BFE0, 4 functions

#include "mgrr.h"

// 0094BC80  FUN_0094bc80  size=142  [run]
int FUN_0094bc80(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  uVar4 = 0;
  iVar2 = 0;
  if (param_1 == 0x15e901d6) {
    iVar2 = 0x14;
    uVar4 = DAT_01b6f3a0;
  }
  else if (param_1 == 0x6f2396e8) {
    iVar2 = 0x1e;
    uVar4 = DAT_01b6f3b4;
  }
  else if (param_1 == 0x75d75fe5) {
    iVar2 = 0x14;
    uVar4 = DAT_01b6f3b0;
  }
  else if (param_1 == -0x21524111) {
    iVar2 = 5;
    uVar4 = DAT_01b6f3b8;
  }
  else if (param_1 == 0x3855170f) {
    iVar2 = 0x20;
    uVar4 = DAT_01b758a8;
  }
  uVar3 = 1;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if ((uVar4 & uVar3) != 0) {
      iVar1 = iVar1 + 1;
    }
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  }
  return iVar1;
}

// 0094BD10  FUN_0094bd10  size=194  [run]
void FUN_0094bd10(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = 0;
  uVar1 = 1;
  iVar2 = 0x14;
  do {
    if ((DAT_01b6f3a0 & uVar1) != 0) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (0x13 < uVar3) {
    FUN_009c6540(0x2f);
  }
  uVar3 = 0;
  uVar1 = 1;
  iVar2 = 0x1e;
  do {
    if ((DAT_01b6f3b4 & uVar1) != 0) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (0x1d < uVar3) {
    FUN_009c6540(0x2a);
  }
  uVar3 = 0;
  uVar1 = 1;
  iVar2 = 0x14;
  do {
    if ((DAT_01b6f3b0 & uVar1) != 0) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (0x13 < uVar3) {
    FUN_009c6540(0x2d);
  }
  bVar4 = (DAT_01b6f3b8 & 1) != 0;
  if ((DAT_01b6f3b8 & 2) != 0) {
    bVar4 = bVar4 + 1;
  }
  if ((DAT_01b6f3b8 & 4) != 0) {
    bVar4 = bVar4 + 1;
  }
  if ((DAT_01b6f3b8 & 8) != 0) {
    bVar4 = bVar4 + 1;
  }
  if ((DAT_01b6f3b8 & 0x10) != 0) {
    bVar4 = bVar4 + 1;
  }
  if (4 < bVar4) {
    FUN_009c6540(0x2c);
  }
  return;
}

// 0094BDE0  FUN_0094bde0  size=277  [run]
void FUN_0094bde0(int param_1,int param_2)

{
  if (param_1 == -0x21524111) {
    if (param_2 == 1) {
      FUN_0093b4a0("MIB_01",0,0);
      return;
    }
    if (param_2 == 3) {
      FUN_0093b4a0("MIB_03",0,0);
      return;
    }
    if (param_2 == 5) {
      FUN_0093b4a0("MIB_05",0,0);
      return;
    }
  }
  else if (param_1 == 0x6f2396e8) {
    if (param_2 == 1) {
      FUN_0093b4a0("LEFT_ARM_01",0,0);
      return;
    }
    if (param_2 == 2) {
      FUN_0093b4a0("LEFT_ARM_02",0,0);
      return;
    }
    if (param_2 == 3) {
      FUN_0093b4a0("LEFT_ARM_03",0,0);
      return;
    }
    if (param_2 == 10) {
      FUN_0093b4a0("LEFT_ARM_10",0,0);
      return;
    }
    if (param_2 == 0x14) {
      FUN_0093b4a0("LEFT_ARM_20",0,0);
      return;
    }
    if (param_2 == 0x1e) {
      FUN_0093b4a0("LEFT_ARM_30",0,0);
    }
  }
  return;
}

// 0094BFE0  FUN_0094bfe0  size=57  [run]
int * __thiscall FUN_0094bfe0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)0x0;
  piVar2 = (int *)(param_1 + 0x10);
  iVar3 = 4;
  do {
    if (piVar2[-4] == param_2) {
      piVar1 = piVar2 + -4;
    }
    if (piVar2[-2] == param_2) {
      piVar1 = piVar2 + -2;
    }
    if (*piVar2 == param_2) {
      piVar1 = piVar2;
    }
    if (piVar2[2] == param_2) {
      piVar1 = piVar2 + 2;
    }
    piVar2 = piVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return piVar1;
}

