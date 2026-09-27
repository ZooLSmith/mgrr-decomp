// src/unsorted/unit_00CC4D40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC4D40..00CC5290, 4 functions

#include "mgrr.h"

// 00CC4D40  FUN_00cc4d40  size=166  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cc4d40(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_2 < 0x1c) {
    cVar1 = *(char *)(param_1 + 0xe0);
    if (cVar1 == '\0') {
      if ((param_2 < 0) || (10 < param_2)) {
        *(undefined1 *)(param_1 + 0xe1) = 1;
        return;
      }
    }
    else if (cVar1 == '\x01') {
      if ((param_2 < 0xb) || (0x15 < param_2)) {
LAB_00cc4d80:
        *(undefined1 *)(param_1 + 0xe1) = 1;
        return;
      }
    }
    else if ((cVar1 == '\x02') && (param_2 < 0x16)) goto LAB_00cc4d80;
    bVar2 = (byte)param_2;
    uVar3 = 1 << (bVar2 & 0x1f);
    if ((uVar3 & *(uint *)(param_1 + 0xdc)) == 0) {
      *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd7) + '\x01';
      *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | uVar3;
      if (param_2 < 0x16) {
        DAT_01b6f3bc = DAT_01b6f3bc | uVar3;
        return;
      }
      if (param_2 < 0x19) {
        _DAT_01b7381c = _DAT_01b7381c | 1 << (bVar2 - 0x16 & 0x1f);
        return;
      }
      _DAT_01b73834 = _DAT_01b73834 | 1 << (bVar2 - 0x19 & 0x1f);
    }
  }
  return;
}

// 00CC4DF0  FUN_00cc4df0  size=8  [run]
void __fastcall FUN_00cc4df0(int param_1)

{
  *(undefined1 *)(param_1 + 0x633) = 1;
  return;
}

// 00CC4E00  FUN_00cc4e00  size=1168  [run]
void __fastcall FUN_00cc4e00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined2 *)(param_1 + 0xdc) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9a);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xae);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xc2);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xd6);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xea);
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9c);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x3c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xc4);
  }
  *(uint *)(param_1 + 0x40) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xd8);
  }
  *(uint *)(param_1 + 0x44) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xec);
  }
  *(uint *)(param_1 + 0x48) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x4c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb2);
  }
  *(uint *)(param_1 + 0x50) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xc6);
  }
  *(uint *)(param_1 + 0x54) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xda);
  }
  *(uint *)(param_1 + 0x58) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xee);
  }
  *(uint *)(param_1 + 0x5c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xa0);
  }
  *(uint *)(param_1 + 0x60) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb4);
  }
  *(uint *)(param_1 + 100) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 200);
  }
  *(uint *)(param_1 + 0x68) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xdc);
  }
  *(uint *)(param_1 + 0x6c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf0);
  }
  *(uint *)(param_1 + 0x70) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xa2);
  }
  *(uint *)(param_1 + 0x74) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  }
  *(uint *)(param_1 + 0x78) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xca);
  }
  *(uint *)(param_1 + 0x7c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xde);
  }
  *(uint *)(param_1 + 0x80) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf2);
  }
  *(uint *)(param_1 + 0x84) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xa4);
  }
  *(uint *)(param_1 + 0x88) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb8);
  }
  *(uint *)(param_1 + 0x8c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xcc);
  }
  *(uint *)(param_1 + 0x90) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xe0);
  }
  *(uint *)(param_1 + 0x94) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf4);
  }
  *(uint *)(param_1 + 0x98) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xa6);
  }
  *(uint *)(param_1 + 0x9c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xba);
  }
  *(uint *)(param_1 + 0xa0) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xce);
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xe2);
  }
  *(uint *)(param_1 + 0xa8) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf6);
  }
  *(uint *)(param_1 + 0xac) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xa8);
  }
  *(uint *)(param_1 + 0xb0) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xbc);
  }
  *(uint *)(param_1 + 0xb4) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xd0);
  }
  *(uint *)(param_1 + 0xb8) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xe4);
  }
  *(uint *)(param_1 + 0xbc) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf8);
  }
  *(uint *)(param_1 + 0xc0) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xac);
  }
  *(uint *)(param_1 + 0xc4) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xc0);
  }
  *(uint *)(param_1 + 200) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xd4);
  }
  *(uint *)(param_1 + 0xcc) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xe8);
  }
  *(uint *)(param_1 + 0xd0) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xfc);
  }
  *(uint *)(param_1 + 0xd4) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
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
  return;
}

// 00CC5290  FUN_00cc5290  size=426  [run]
void __fastcall FUN_00cc5290(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xd9) != '\0') {
    if (*(char *)(param_1 + 0xd8) == '\0') {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      *(char *)(param_1 + 0xd8) = *(char *)(param_1 + 0xd8) + '\x01';
      if (*(int *)(param_1 + 0xe0) != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        *(char *)(param_1 + 0xd8) = *(char *)(param_1 + 0xd8) + '\x02';
        *(undefined1 *)(param_1 + 0xda) = 1;
        if (((iVar2 != 0) && (*(uint *)(param_1 + 0x24) < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = *(uint *)(param_1 + 0x24) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if (((iVar2 != 0) && (*(uint *)(param_1 + 0x28) < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = *(uint *)(param_1 + 0x28) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if (((iVar2 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if (((iVar2 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if (((iVar2 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        *(char *)(param_1 + 0xdb) = *(char *)(param_1 + 0xdb) + '\x05';
        *(undefined2 *)(param_1 + 0xdc) = 0;
      }
    }
    else if (*(char *)(param_1 + 0xd8) == '\x01') {
      *(short *)(param_1 + 0xdc) = *(short *)(param_1 + 0xdc) + 1;
      iVar2 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(param_1 + 0x24 + *(char *)(param_1 + 0xdb) * 4);
      if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(uint *)(iVar2 + 0x3b0) = (uint)*(ushort *)(param_1 + 0xdc) % 3;
      }
      if (8 < *(ushort *)(param_1 + 0xdc)) {
        *(undefined2 *)(param_1 + 0xdc) = 0;
        iVar2 = *(int *)(param_1 + 0x18);
        uVar1 = *(uint *)(param_1 + 0x24 + *(char *)(param_1 + 0xdb) * 4);
        if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        *(char *)(param_1 + 0xdb) = *(char *)(param_1 + 0xdb) + '\x01';
      }
      if ('\x04' < *(char *)(param_1 + 0xdb)) {
        *(char *)(param_1 + 0xd8) = *(char *)(param_1 + 0xd8) + '\x01';
        *(undefined1 *)(param_1 + 0xda) = 1;
        return;
      }
    }
  }
  return;
}

