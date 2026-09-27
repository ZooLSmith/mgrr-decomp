// src/unsorted/unit_00D01B60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D01B60..00D033F0, 8 functions

#include "types.h"

// 00D01B60  FUN_00d01b60  size=2699  [run]
void __fastcall FUN_00d01b60(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = (uint *)(param_1 + 0x1c);
  iVar4 = 0x1f;
  do {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*puVar3 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *puVar3 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0xa4) & 0x400) == 0) {
    if ((*(uint *)(param_1 + 0xa4) & 1) == 0) {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x48) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x48) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
    }
    else {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x58) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x58) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
        if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cded00(uVar1,0xc);
        }
        goto LAB_00d01cdc;
      }
    }
  }
  else {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x58) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x58) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
LAB_00d01cdc:
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
      else {
        FUN_00cded00(uVar1,0xc);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((*(uint *)(param_1 + 0xa4) & 0x800) == 0) && ((*(uint *)(param_1 + 0xa4) & 2) == 0)) {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x4c) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x4c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  else {
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x5c) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x5c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      FUN_00ce4ce0(uVar1,0xb);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((*(uint *)(param_1 + 0xa4) & 0x1000) == 0) && ((*(uint *)(param_1 + 0xa4) & 4) == 0)) {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x44) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x44) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  else {
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x54) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x54) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      FUN_00ce4ce0(uVar1,0xe);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((*(uint *)(param_1 + 0xa4) & 0x2000) == 0) && ((*(uint *)(param_1 + 0xa4) & 8) == 0)) {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x40) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x40) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  else {
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x50) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x50) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      FUN_00ce4ce0(uVar1,0xd);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  if (((*(uint *)(param_1 + 0xa4) & 0x3c00) == 0) && ((*(uint *)(param_1 + 0xa4) & 0xf) == 0)) {
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x1c) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x3c) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x3c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0xa4) & 0x4000) == 0) {
    if ((*(uint *)(param_1 + 0xa4) & 0x100) == 0) {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x88) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x88) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
    }
    else {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
        if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        FUN_00ce4ce0(uVar1,0x13);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
    }
  }
  else {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(uVar1,0x13);
      }
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0xa4) & 0x8000) == 0) {
    if ((*(uint *)(param_1 + 0xa4) & 0x200) == 0) {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x8c) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x8c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
    }
    else {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
        if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cded00(uVar1,0x14);
        }
        goto LAB_00d02123;
      }
    }
  }
  else {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
LAB_00d02123:
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
      else {
        FUN_00cded00(uVar1,0x14);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
    }
  }
  if ((*(uint *)(param_1 + 0xa4) & 0xc300) != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x84) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x84) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0xa4) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0xa4) & 0x400000) == 0) {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 100) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 100) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      goto LAB_00d02238;
    }
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
  }
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x74) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x74) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 1;
  }
  if (*(int *)(param_1 + 0xa0) < 2) {
    iVar4 = *(int *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
    if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    FUN_00ce4ce0(uVar1,0x11);
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  }
LAB_00d02238:
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0xa4) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0xa4) & 0x800000) == 0) {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x68) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x68) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
    }
    else {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x78) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x78) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
        if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        FUN_00ce4ce0(uVar1,0x12);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
    }
  }
  else {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x78) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x78) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(uVar1,0x12);
      }
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0xa4) & 0x40) == 0) {
    if ((*(uint *)(param_1 + 0xa4) & 0x1000000) == 0) {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x6c) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x6c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
    }
    else {
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x7c) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x7c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0xa0) < 2) {
        iVar4 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
        if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        FUN_00ce4ce0(uVar1,0xf);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
      }
    }
  }
  else {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x7c) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x7c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(uVar1,0xf);
      }
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((char)*(uint *)(param_1 + 0xa4) < '\0') {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x80) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x80) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(uVar1,0x10);
      }
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  else if ((*(uint *)(param_1 + 0xa4) & 0x2000000) == 0) {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x70) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x70) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  else {
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x80) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x80) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0xa0) < 2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(int *)(param_1 + 0xa0) * 4);
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = uVar1 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      FUN_00ce4ce0(uVar1,0x10);
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    }
  }
  if (((*(uint *)(param_1 + 0xa4) & 0xf0) != 0) || ((*(uint *)(param_1 + 0xa4) & 0x3c00000) != 0)) {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x60) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x60) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  return;
}

// 00D025F0  FUN_00d025f0  size=1715  [run]
void __fastcall FUN_00d025f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x40) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x40) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x58) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x58) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x5c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x5c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x68) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x68) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x80) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x80) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x174)) {
  case 1:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x5c),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
    iVar1 = DAT_01b77e80;
    if (DAT_01b77e80 < 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),1);
      FUN_00cbd180(1,iVar1,1);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      uVar3 = 0x1f;
    }
    else {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x68),1);
      uVar2 = FUN_00cc7280(iVar1);
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x6c),uVar2);
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x70),uVar2);
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x74),uVar2);
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x78),uVar2);
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x7c),uVar2);
      iVar1 = FUN_00caa390(iVar1);
      if (iVar1 == 1) {
        uVar2 = *(undefined4 *)(param_1 + 0x2c);
        uVar3 = 0x1e;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x2c);
        uVar3 = 0x1f;
      }
    }
    FUN_00ce4ce0(uVar2,uVar3);
    if (DAT_01b77e84 < 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),1);
      FUN_00cbd180(2,extraout_EDX,0);
      FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x5c),1);
    uVar3 = FUN_00cc7280(extraout_EDX_00);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x60),uVar3);
    uVar2 = *(undefined4 *)(param_1 + 100);
    break;
  case 2:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),1);
    FUN_00cf04d0();
    iVar1 = DAT_01b77e84;
    if (DAT_01b77e84 < 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),1);
      FUN_00cbd180(2,iVar1,1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),0x1f);
      FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x80),1);
    uVar2 = FUN_00cc7280(iVar1);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x84),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x88),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x8c),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x90),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x94),uVar2);
    iVar1 = FUN_00caa390(iVar1);
    if (iVar1 != 1) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),0x1f);
      FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
      return;
    }
    FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30),0x1e);
    FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
    return;
  case 3:
    if (DAT_01b77eb0 < 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_00d02c19;
    }
    goto LAB_00d02a48;
  case 4:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_00cf04d0();
    if (DAT_01b77e84 < 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),1);
      FUN_00cbd180(2,extraout_EDX_02,0);
      FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x5c),1);
    uVar3 = FUN_00cc7280(extraout_EDX_03);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x60),uVar3);
    uVar2 = *(undefined4 *)(param_1 + 100);
    break;
  case 5:
  case 10:
    if (DAT_01b77e78 < 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_00d02c19;
    }
    goto LAB_00d02a48;
  case 6:
  case 0xb:
    iVar1 = DAT_01b77e7c;
    goto LAB_00d02c0f;
  case 7:
    if (DAT_01b77e74 < 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      goto LAB_00d02c19;
    }
LAB_00d02a48:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),1);
    uVar3 = FUN_00cc7280(extraout_EDX_01);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x44),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x48),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x4c),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x50),uVar3);
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    break;
  case 8:
    iVar1 = DAT_01b77e88;
LAB_00d02c0f:
    if (iVar1 < 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x34);
LAB_00d02c19:
      FUN_00cb2310(uVar2,1);
      FUN_00cbd180(0,extraout_EDX_06,1);
      FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x40),1);
    uVar3 = FUN_00cc7280(extraout_EDX_07);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x44),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x48),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x4c),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x50),uVar3);
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    break;
  case 9:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_00cf04d0();
    if (DAT_01b77e88 < 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),1);
      FUN_00cbd180(2,extraout_EDX_04,1);
      FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
      return;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x80),1);
    uVar3 = FUN_00cc7280(extraout_EDX_05);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x84),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x88),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x8c),uVar3);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x90),uVar3);
    uVar2 = *(undefined4 *)(param_1 + 0x94);
    break;
  default:
    goto switchD_00d027e7_default;
  }
  FUN_00cb2ce0(uVar2,uVar3);
switchD_00d027e7_default:
  FUN_00cf0240(*(undefined4 *)(param_1 + 0x174));
  return;
}

// 00D02CD0  FUN_00d02cd0  size=550  [run]
void __fastcall FUN_00d02cd0(int param_1)

{
  if (*(int *)(param_1 + 0x154) != 0) {
    do {
      *(undefined4 *)(param_1 + 0x14c) = 0;
      switch(*(undefined4 *)(param_1 + 0x148)) {
      case 0:
        *(undefined4 *)(param_1 + 0x148) = 1;
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x120),"HUD_PIECE_12",1,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x124),"HUD_PIECE_12",1,0xffffffff);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x120),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x124),1,3);
        if (*(int *)(param_1 + 0xa8) != 0) {
          FUN_00cdeec0(3);
        }
        if (*(int *)(param_1 + 0xa8) != 0) {
          FUN_00cdeec0(1);
        }
        FUN_00cd6290(0x45bb8000);
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(5);
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(1);
        }
        FUN_00e5e050("core_se_sys_map_alert_on",0);
        FUN_00cbdb20();
      case 1:
      case 2:
        *(undefined4 *)(param_1 + 0x140) = 0x43b40000;
        return;
      case 3:
        *(undefined4 *)(param_1 + 0x140) = 0x43b40000;
        *(undefined4 *)(param_1 + 0x148) = 2;
        FUN_00cd6290(0x45bb8000);
        return;
      case 4:
      case 5:
        *(undefined4 *)(param_1 + 0x140) = 0x43b40000;
        *(undefined4 *)(param_1 + 0x148) = 2;
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x120),"HUD_PIECE_12",1,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x124),"HUD_PIECE_12",1,0xffffffff);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x120),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x124),1,3);
        if (*(int *)(param_1 + 0xa8) != 0) {
          FUN_00cdeec0(3);
        }
        FUN_00cd6290(0x45bb8000);
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(6);
        }
        FUN_00e5e050("core_se_sys_map_alert_on",0);
        return;
      case 6:
        if (*(int *)(param_1 + 0xa8) != 0) {
          FUN_00cdeec0(0);
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(5);
        }
        *(undefined4 *)(param_1 + 0x148) = 0;
        if (*(int *)(param_1 + 0x154) == 0) {
          return;
        }
        break;
      default:
        goto switchD_00d02d05_default;
      }
    } while( true );
  }
switchD_00d02d05_default:
  return;
}

// 00D02F20  FUN_00d02f20  size=370  [run]
void __fastcall FUN_00d02f20(int param_1)

{
  if (*(int *)(param_1 + 0x154) == 0) {
switchD_00d02f55_caseD_1:
    return;
  }
LAB_00d02f40:
  *(undefined4 *)(param_1 + 0x14c) = 0;
  switch(*(undefined4 *)(param_1 + 0x148)) {
  case 0:
    *(undefined4 *)(param_1 + 0x148) = 4;
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x120),"HUD_PIECE_13",1,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x124),"HUD_PIECE_13",1,0xffffffff);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x120),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x124),1,3);
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_00cdeec0(0);
    }
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_00cdeec0(1);
    }
    *(undefined4 *)(param_1 + 0x140) = 0x45bb7b33;
    FUN_00cd6290(0x45bb8000);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(5);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(3);
    }
    if (*(int *)(param_1 + 0x170) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x16c) = 1;
    return;
  default:
    goto switchD_00d02f55_caseD_1;
  case 4:
    *(undefined4 *)(param_1 + 0x148) = 4;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x148) = 5;
    break;
  case 6:
    goto switchD_00d02f55_caseD_6;
  }
  *(undefined4 *)(param_1 + 0x140) = 0x45bb7b33;
  FUN_00cd6290(0x45bb8000);
  return;
switchD_00d02f55_caseD_6:
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(5);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x154) == 0) {
    return;
  }
  goto LAB_00d02f40;
}

// 00D030C0  FUN_00d030c0  size=238  [run]
int __thiscall FUN_00d030c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  local_10 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x80) <= uVar1) ||
        (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 == (int *)0x0))
       || (iVar2 = (**(code **)(*piVar3 + 8))(), iVar2 != 4)) {
      piVar3 = (int *)0x0;
    }
    FUN_00ce51d0(piVar3,&local_54);
  }
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) {
    return uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c);
  }
  return 0;
}

// 00D031B0  FUN_00d031b0  size=252  [run]
float10 __thiscall FUN_00d031b0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_54 [17];
  float local_10;
  
  fVar5 = (float10)0;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_10 = (float)fVar5;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  local_54[4] = 0.0;
  local_54[5] = 0.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 0.0;
  local_54[0xb] = 0.0;
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 0.0;
  iVar3 = *(int *)(param_1 + 0x220 + param_2 * 0x1c);
  puVar1 = (uint *)(param_1 + 0x19c + param_3 * 4 + param_2 * 0xc);
  uVar2 = *puVar1;
  if (iVar3 == 0) goto LAB_00d03282;
  if ((uVar2 < *(uint *)(iVar3 + 0x80)) &&
     (piVar4 = *(int **)(uVar2 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar4 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar4 + 8))();
    if (iVar3 != 4) goto LAB_00d03260;
  }
  else {
LAB_00d03260:
    piVar4 = (int *)0x0;
  }
  iVar3 = FUN_00ce51d0(piVar4,local_54);
  if (iVar3 == 0) {
    fVar5 = (float10)(float)fVar5;
  }
  else {
    fVar5 = (float10)local_10 + (float10)local_54[0];
  }
LAB_00d03282:
  iVar3 = *(int *)(param_1 + param_2 * 0x1c + 0x220);
  uVar2 = *puVar1;
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = uVar2 * 0x400 + 0x50 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    fVar5 = fVar5 * (float10)*(float *)(iVar3 + 0x10);
  }
  return fVar5;
}

// 00D032B0  FUN_00d032b0  size=306  [run]
void __fastcall FUN_00d032b0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_10 [4];
  
  if (DAT_01dc1418 == '\0') {
    uVar1 = *(uint *)(DAT_01dc14c8 + 0xe40);
    iVar4 = 0;
    if (uVar1 < 0x2001) {
      if (uVar1 == 0x2000) {
        iVar4 = 0;
      }
      else if (uVar1 == 0x400) {
        iVar4 = 2;
      }
      else if (uVar1 == 0x800) {
        iVar4 = 3;
      }
    }
    else if (uVar1 == 0x4000) {
      iVar4 = 1;
    }
    local_10[0] = "CORE_BTN_MES_04";
    local_10[1] = "CORE_BTN_MES_05";
    local_10[2] = "CORE_BTN_MES_06";
    local_10[3] = "CORE_BTN_MES_07";
    pcVar2 = local_10[iVar4];
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
        (piVar3 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar3 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar3 + 8))(), iVar4 == 3)) {
      uVar5 = FUN_00e03ea0(pcVar2);
      piVar3[0x2a] = -1;
      piVar3[0x2b] = 0;
      if (((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) &&
         (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
        piVar3[0x2a] = iVar4;
        piVar3[0x2b] = 0;
        piVar3[0x2e] = 0;
      }
    }
  }
  else {
    if (DAT_01b77eb8 < 0) {
      iVar4 = FUN_00caa220();
    }
    else {
      iVar4 = FUN_00ca9f90(DAT_01b77eb8);
    }
    if (iVar4 != 0) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),iVar4,0,0xffffffff);
      return;
    }
  }
  return;
}

// 00D033F0  FUN_00d033f0  size=306  [run]
void __fastcall FUN_00d033f0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_10 [4];
  
  if (DAT_01dc1418 == '\0') {
    uVar1 = *(uint *)(DAT_01dc14c8 + 0xe40);
    iVar4 = 0;
    if (uVar1 < 0x2001) {
      if (uVar1 == 0x2000) {
        iVar4 = 0;
      }
      else if (uVar1 == 0x400) {
        iVar4 = 2;
      }
      else if (uVar1 == 0x800) {
        iVar4 = 3;
      }
    }
    else if (uVar1 == 0x4000) {
      iVar4 = 1;
    }
    local_10[0] = "CORE_BTN_MES_04";
    local_10[1] = "CORE_BTN_MES_05";
    local_10[2] = "CORE_BTN_MES_06";
    local_10[3] = "CORE_BTN_MES_07";
    pcVar2 = local_10[iVar4];
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
        (piVar3 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar3 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar3 + 8))(), iVar4 == 3)) {
      uVar5 = FUN_00e03ea0(pcVar2);
      piVar3[0x2a] = -1;
      piVar3[0x2b] = 0;
      if (((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) &&
         (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
        piVar3[0x2a] = iVar4;
        piVar3[0x2b] = 0;
        piVar3[0x2e] = 0;
      }
    }
  }
  else {
    if (DAT_01b77eb8 < 0) {
      iVar4 = FUN_00caa220();
    }
    else {
      iVar4 = FUN_00ca9f90(DAT_01b77eb8);
    }
    if (iVar4 != 0) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),iVar4,0,0xffffffff);
      return;
    }
  }
  return;
}

