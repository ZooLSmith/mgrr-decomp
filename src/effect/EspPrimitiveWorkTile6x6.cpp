// src/effect/EspPrimitiveWorkTile6x6.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F56450..00F59600, 2 functions

#include "mgrr.h"
#include "EspPrimitiveWorkTile6x6.h"

// 00F56450  EspPrimitiveWorkTile6x6::vf04  size=2439  [class]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void EspPrimitiveWorkTile6x6::vf04(undefined4 param_1)

{
  float *pfVar1;
  int iVar2;
  undefined1 auStack_14e4 [12];
  undefined4 local_14d8;
  undefined4 local_14d4;
  undefined4 local_14d0;
  undefined4 local_14cc;
  undefined4 local_14c8;
  undefined4 local_14c4;
  float local_14c0 [8];
  undefined4 local_14a0;
  undefined4 local_149c;
  undefined4 local_1498;
  undefined4 local_1490;
  undefined4 local_148c;
  undefined4 local_1488;
  undefined4 local_1480;
  undefined4 local_147c;
  undefined4 local_1478;
  undefined4 local_1470;
  undefined4 local_146c;
  undefined4 local_1468;
  undefined1 local_1460 [3464];
  undefined1 local_6d8 [1732];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_14e4;
  local_14c0[0] = -1.0;
  local_14c0[1] = 0.0;
  local_14c0[2] = 0.0;
  local_14c0[4] = 0.0;
  local_14c0[5] = 0.0;
  iVar2 = 6;
  local_14c0[6] = 0.0;
  local_14a0 = 0;
  local_1498 = 0;
  local_148c = 0;
  local_1488 = 0;
  local_1478 = 0;
  local_1470 = 0;
  local_1468 = 0;
  local_149c = 0xbf800000;
  local_1490 = 0xbf800000;
  local_1480 = 0xbf800000;
  local_147c = 0xbf800000;
  local_146c = 0xbf800000;
  pfVar1 = local_14c0 + 1;
  do {
    iVar2 = iVar2 + -1;
    pfVar1[-1] = pfVar1[-1] / 6.0;
    *pfVar1 = *pfVar1 / 6.0;
    pfVar1 = pfVar1 + 4;
  } while (iVar2 != 0);
  local_14d8 = 0;
  local_14d4 = 0;
  local_14d0 = 0;
  local_14cc = 0;
  local_14c8 = 0;
  local_14c4 = 0;
  FUN_00f4f9a0(0,0,0,local_14c0,local_1460,0,&local_14d8);
  FUN_00f4f9a0(6,0,0xbe2aaaab,local_14c0,local_1460,0,&local_14d8);
  FUN_00f4f9a0(0xc,0,0xbeaaaaab,local_14c0,local_1460,0,&local_14d8);
  FUN_00f4f9a0(0x12,0,0xbf000000,local_14c0,local_1460,0,&local_14d8);
  FUN_00f4f9a0(0x18,0,0xbf2aaaab,local_14c0,local_1460,0,&local_14d8);
  FUN_00f4f9a0(0x1e,0,0xbf555556,local_14c0,local_1460,0,&local_14d8);
  FUN_00f4f9a0(0x24,0xbe2aaaab,0,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x2a,0xbe2aaaab,0xbe2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x30,0xbe2aaaab,0xbeaaaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x36,0xbe2aaaab,0xbf000000,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x3c,0xbe2aaaab,0xbf2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x42,0xbe2aaaab,0xbf555556,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x48,0xbeaaaaab,0,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x4e,0xbeaaaaab,0xbe2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x54,0xbeaaaaab,0xbeaaaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x5a,0xbeaaaaab,0xbf000000,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x60,0xbeaaaaab,0xbf2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x66,0xbeaaaaab,0xbf555556,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x6c,0xbf000000,0,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x72,0xbf000000,0xbe2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x78,0xbf000000,0xbeaaaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x7e,0xbf000000,0xbf000000,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x84,0xbf000000,0xbf2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x8a,0xbf000000,0xbf555556,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0x90,0xbf2aaaab,0,local_14c0,local_1460,0x3f800000,&local_14d8);
  FUN_00f4f9a0(0x96,0xbf2aaaab,0xbe2aaaab,local_14c0,local_1460,0x3f800000,&local_14d8);
  FUN_00f4f9a0(0x9c,0xbf2aaaab,0xbeaaaaab,local_14c0,local_1460,0x3f800000,&local_14d8);
  FUN_00f4f9a0(0xa2,0xbf2aaaab,0xbf000000,local_14c0,local_1460,0x3f800000,&local_14d8);
  FUN_00f4f9a0(0xa8,0xbf2aaaab,0xbf2aaaab,local_14c0,local_1460,0x3f800000,&local_14d8);
  FUN_00f4f9a0(0xae,0xbf2aaaab,0xbf555556,local_14c0,local_1460,0x3f800000,&local_14d8);
  FUN_00f4f9a0(0xb4,0xbf555556,0,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0xba,0xbf555556,0xbe2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0xc0,0xbf555556,0xbeaaaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0xc6,0xbf555556,0xbf000000,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0xcc,0xbf555556,0xbf2aaaab,local_14c0,local_1460,0x3f400000,&local_14d8);
  FUN_00f4f9a0(0xd2,0xbf555556,0xbf555556,local_14c0,local_1460,0x3f400000,&local_14d8);
  iVar2 = FUN_00f9cae0(0x10,0xd8,param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00f99d50(local_1460,0x10,0xd8);
    if (iVar2 != 0) {
      iVar2 = FUN_00f553b0(local_6d8,6,param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_00f55550(local_6d8,6,param_1);
        if (iVar2 != 0) {
          iVar2 = FUN_00f556f0(local_6d8,6,param_1);
          if (iVar2 != 0) {
            FUN_00f558a0(local_6d8,6,param_1);
            __security_check_cookie(local_14 ^ (uint)auStack_14e4);
            return;
          }
        }
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_14e4);
  return;
}

// 00F59600  EspPrimitiveWorkTile6x6::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkTile6x6::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkTileBase::vftable;
  iVar1 = 3;
  do {
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

