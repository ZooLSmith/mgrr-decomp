// src/unsorted/unit_0094C060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094C060..0094C150, 2 functions

#include "mgrr.h"

// 0094C060  FUN_0094c060  size=228  [run]
bool FUN_0094c060(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_1 == 0x15e901d6) {
    iVar1 = FUN_00d46780();
    uVar3 = DAT_01b73824;
    if ((iVar1 == 0) && (iVar1 = FUN_00d467a0(), uVar3 = uVar2, iVar1 != 0)) {
      uVar3 = DAT_01b7383c;
    }
  }
  else {
    uVar3 = DAT_01b73818;
    if ((param_1 != 0x263b6dae) && (uVar3 = DAT_01b73830, param_1 != 0x513c5d38)) {
      if (param_1 == 0x3855170f) {
        iVar1 = FUN_00d46780();
        uVar3 = DAT_01b7597c;
        if ((iVar1 == 0) && (iVar1 = FUN_00d467a0(), uVar3 = uVar2, iVar1 != 0)) {
          uVar3 = DAT_01b75984;
        }
      }
      else {
        uVar3 = uVar2;
        if (((param_1 == 0x4cbfda41) && (iVar1 = FUN_00d46780(), uVar3 = DAT_01b75980, iVar1 == 0))
           && (iVar1 = FUN_00d467a0(), uVar3 = uVar2, iVar1 != 0)) {
          uVar3 = DAT_01b75988;
        }
      }
    }
  }
  return (1 << (param_2 - 1U & 0x1f) & uVar3) != 0;
}

// 0094C150  FUN_0094c150  size=244  [run]
int FUN_0094c150(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  iVar2 = 0;
  if (param_1 == 0x15e901d6) {
    iVar2 = FUN_00d46780();
    uVar1 = DAT_01b73824;
    if ((iVar2 == 0) && (iVar2 = FUN_00d467a0(), uVar1 = uVar3, iVar2 != 0)) {
      uVar1 = DAT_01b7383c;
    }
  }
  else {
    uVar1 = DAT_01b73818;
    if ((param_1 != 0x263b6dae) && (uVar1 = DAT_01b73830, param_1 != 0x513c5d38)) {
      if (param_1 == 0x3855170f) {
        iVar2 = FUN_00d46780();
        if (iVar2 == 0) {
          iVar2 = FUN_00d467a0();
          if (iVar2 != 0) {
            uVar3 = DAT_01b75984;
          }
          iVar2 = 10;
        }
        else {
          iVar2 = 10;
          uVar3 = DAT_01b7597c;
        }
        goto LAB_0094c22a;
      }
      if (param_1 != 0x4cbfda41) goto LAB_0094c22a;
      iVar2 = FUN_00d46780();
      uVar1 = DAT_01b75980;
      if ((iVar2 == 0) && (iVar2 = FUN_00d467a0(), uVar1 = uVar3, iVar2 != 0)) {
        uVar1 = DAT_01b75988;
      }
    }
  }
  iVar2 = 5;
  uVar3 = uVar1;
LAB_0094c22a:
  uVar1 = 1;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if ((uVar3 & uVar1) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
  }
  return iVar4;
}

