// src/unsorted/unit_00F9BC30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9BC30..00F9C130, 9 functions

#include "types.h"

// 00F9BC30  FUN_00f9bc30  size=97  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9bc30(int param_1)

{
  DAT_01f20708 = param_1;
  DAT_01f2070c = 1;
  if (param_1 == 2) {
    _DAT_01f205f8 = 2;
    _DAT_01f20630 = 2;
    return;
  }
  if (param_1 != 4) {
    if (param_1 == 8) {
      _DAT_01f205f8 = 8;
      _DAT_01f20630 = 8;
      return;
    }
    _DAT_01f205f8 = 0;
    _DAT_01f20630 = 0;
    return;
  }
  _DAT_01f205f8 = 4;
  _DAT_01f20630 = 4;
  return;
}

// 00F9BCA0  FUN_00f9bca0  size=382  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9bca0(uint param_1)

{
  undefined1 auStack_58 [4];
  longlong local_54;
  float local_4c [18];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_58;
  if ((param_1 < 6) && ((&DAT_01f20668)[param_1] != 0)) {
    local_4c[0] = 1920.0;
    DAT_01f206e4 = DAT_01f206dc;
    local_4c[1] = 1080.0;
    local_4c[2] = 0.0;
    DAT_01f206e8 = DAT_01f206e0;
    local_4c[3] = 1680.0;
    local_4c[4] = 1050.0;
    local_4c[5] = 0.0;
    local_4c[6] = 1366.0;
    local_4c[7] = 768.0;
    local_4c[8] = 0.0;
    local_4c[9] = 1280.0;
    local_4c[10] = 720.0;
    local_4c[0xb] = 0.0;
    local_4c[0xc] = 1024.0;
    local_4c[0xd] = 768.0;
    local_4c[0xe] = 0.0;
    local_4c[0xf] = 800.0;
    local_4c[0x10] = 600.0;
    local_4c[0x11] = 0.0;
    local_54._0_4_ = (undefined4)(longlong)ROUND(local_4c[param_1 * 3]);
    DAT_01f20620 = (undefined4)local_54;
    DAT_01f206dc = (undefined4)local_54;
    local_54 = (longlong)ROUND(local_4c[param_1 * 3 + 1]);
    DAT_01f206e0 = (undefined4)local_54;
    DAT_01f20624 = (undefined4)local_54;
    DAT_01f2070c = 1;
    _DAT_018da490 = local_4c[param_1 * 3] / 1280.0;
    _DAT_018da494 = local_4c[param_1 * 3 + 1] / 720.0;
    __security_check_cookie(local_4 ^ (uint)auStack_58);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)auStack_58);
  return;
}

// 00F9BE20  FUN_00f9be20  size=42  [run]
bool FUN_00f9be20(void)

{
  int iVar1;
  
  if ((DAT_01f206d4 != (int *)0x0) && (DAT_01f206f4 == 0)) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0xa8))(DAT_01f206d4);
    return -1 < iVar1;
  }
  return false;
}

// 00F9BF20  FUN_00f9bf20  size=104  [run]
void FUN_00f9bf20(int param_1)

{
  *(undefined4 *)(param_1 + 4) = DAT_018da6d4;
  *(undefined4 *)(param_1 + 8) = DAT_018da6d8;
  *(undefined4 *)(param_1 + 0xc) = DAT_018da6dc;
  *(undefined4 *)(param_1 + 0x10) = DAT_018da6e0;
  *(undefined4 *)(param_1 + 0x14) = DAT_018da6e4;
  *(undefined4 *)(param_1 + 0x18) = DAT_018da6e8;
  *(undefined4 *)(param_1 + 0x1c) = DAT_018da6ec;
  *(undefined4 *)(param_1 + 0x20) = DAT_018da6f0;
  *(undefined4 *)(param_1 + 0x24) = DAT_018da6f4;
  *(undefined4 *)(param_1 + 0x28) = DAT_018da6f8;
  *(undefined4 *)(param_1 + 0x2c) = DAT_018da6fc;
  return;
}

// 00F9BF90  FUN_00f9bf90  size=121  [run]
undefined4 FUN_00f9bf90(void)

{
  int iVar1;
  
  if (DAT_01f20598 != 0) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0x15c))(DAT_01f206d4,*(undefined4 *)(DAT_01f2059c + 4));
    }
    DAT_01f20598 = 0;
  }
  if (DAT_01f2058c == 0) {
    return 1;
  }
  iVar1 = FUN_00f993a0(DAT_01f20590 + 4);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99400(DAT_01f20590 + 0x14), iVar1 != 0)) {
    DAT_01f2058c = 0;
    return 1;
  }
  return 0;
}

// 00F9C010  thunk_FUN_00f9bc30  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00f9bc30(int param_1)

{
  DAT_01f20708 = param_1;
  DAT_01f2070c = 1;
  if (param_1 == 2) {
    _DAT_01f205f8 = 2;
    _DAT_01f20630 = 2;
    return;
  }
  if (param_1 != 4) {
    if (param_1 == 8) {
      _DAT_01f205f8 = 8;
      _DAT_01f20630 = 8;
      return;
    }
    _DAT_01f205f8 = 0;
    _DAT_01f20630 = 0;
    return;
  }
  _DAT_01f205f8 = 4;
  _DAT_01f20630 = 4;
  return;
}

// 00F9C020  thunk_FUN_00f9bca0  size=5  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00f9bca0(uint param_1)

{
  undefined1 auStack_58 [4];
  longlong lStack_54;
  float afStack_4c [18];
  uint uStack_4;
  
  uStack_4 = DAT_018e8764 ^ (uint)auStack_58;
  if ((param_1 < 6) && ((&DAT_01f20668)[param_1] != 0)) {
    afStack_4c[0] = 1920.0;
    DAT_01f206e4 = DAT_01f206dc;
    afStack_4c[1] = 1080.0;
    afStack_4c[2] = 0.0;
    DAT_01f206e8 = DAT_01f206e0;
    afStack_4c[3] = 1680.0;
    afStack_4c[4] = 1050.0;
    afStack_4c[5] = 0.0;
    afStack_4c[6] = 1366.0;
    afStack_4c[7] = 768.0;
    afStack_4c[8] = 0.0;
    afStack_4c[9] = 1280.0;
    afStack_4c[10] = 720.0;
    afStack_4c[0xb] = 0.0;
    afStack_4c[0xc] = 1024.0;
    afStack_4c[0xd] = 768.0;
    afStack_4c[0xe] = 0.0;
    afStack_4c[0xf] = 800.0;
    afStack_4c[0x10] = 600.0;
    afStack_4c[0x11] = 0.0;
    lStack_54._0_4_ = (undefined4)(longlong)ROUND(afStack_4c[param_1 * 3]);
    DAT_01f20620 = (undefined4)lStack_54;
    DAT_01f206dc = (undefined4)lStack_54;
    lStack_54 = (longlong)ROUND(afStack_4c[param_1 * 3 + 1]);
    DAT_01f206e0 = (undefined4)lStack_54;
    DAT_01f20624 = (undefined4)lStack_54;
    DAT_01f2070c = 1;
    _DAT_018da490 = afStack_4c[param_1 * 3] / 1280.0;
    _DAT_018da494 = afStack_4c[param_1 * 3 + 1] / 720.0;
    __security_check_cookie(uStack_4 ^ (uint)auStack_58);
    return;
  }
  __security_check_cookie(uStack_4 ^ (uint)auStack_58);
  return;
}

// 00F9C030  FUN_00f9c030  size=249  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9c030(void)

{
  _DAT_018da698 = 0x3f800000;
  DAT_018da63c = 1;
  DAT_018da648 = 1;
  DAT_018da670 = 1;
  DAT_018da678 = 1;
  DAT_018da680 = 1;
  DAT_018da684 = 1;
  DAT_018da6a0 = 1;
  DAT_018da6a4 = 1;
  DAT_018da6a8 = 1;
  _DAT_018da6ac = 1;
  _DAT_018da6b0 = 1;
  _DAT_018da6b4 = 1;
  _DAT_018da638 = 3;
  DAT_018da640 = 0;
  DAT_018da644 = 0;
  DAT_018da650 = 0;
  DAT_018da654 = 0;
  DAT_018da658 = 8;
  DAT_018da65c = 0;
  DAT_018da660 = 0;
  DAT_018da664 = 0;
  DAT_018da668 = 0;
  DAT_018da66c = 0;
  DAT_018da67c = 2;
  DAT_018da688 = 0xf;
  DAT_018da69c = 0;
  DAT_018da6b8 = 8;
  DAT_018da6bc = 0;
  DAT_018da6c0 = 0xffffffff;
  _DAT_018da6c4 = 8;
  DAT_018da6c8 = 0xffffffff;
  _DAT_018da6cc = 0xffffffff;
  DAT_018da64c = 4;
  DAT_018da68c = 0xf;
  DAT_018da690 = 0xf;
  DAT_018da694 = 0xf;
  return;
}

// 00F9C130  FUN_00f9c130  size=41  [run]
void FUN_00f9c130(void)

{
  DAT_01f204d8 = DAT_01f20560;
  _memset(&DAT_01f204e0,0,0x80);
  DAT_01f204d4 = 0;
  return;
}

