// src/effect/EspPrimitiveWorkTile4x4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F55E20..00F595B0, 2 functions

#include "types.h"

// 00F55E20  EspPrimitiveWorkTile4x4::vf04  size=1577  [class]
void EspPrimitiveWorkTile4x4::vf04(undefined4 param_1)

{
  float *pfVar1;
  int iVar2;
  undefined1 auStack_9a4 [12];
  undefined4 local_998;
  undefined4 local_994;
  undefined4 local_990;
  undefined4 local_98c;
  undefined4 local_988;
  undefined4 local_984;
  float local_980 [8];
  undefined4 local_960;
  undefined4 local_95c;
  undefined4 local_958;
  undefined4 local_950;
  undefined4 local_94c;
  undefined4 local_948;
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  undefined4 local_930;
  undefined4 local_92c;
  undefined4 local_928;
  undefined1 local_920 [1544];
  undefined1 local_318 [772];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_9a4;
  local_980[0] = -1.0;
  local_980[1] = 0.0;
  local_980[2] = 0.0;
  local_980[4] = 0.0;
  local_980[5] = 0.0;
  iVar2 = 6;
  local_980[6] = 0.0;
  local_960 = 0;
  local_958 = 0;
  local_94c = 0;
  local_948 = 0;
  local_938 = 0;
  local_930 = 0;
  local_928 = 0;
  local_95c = 0xbf800000;
  local_950 = 0xbf800000;
  local_940 = 0xbf800000;
  local_93c = 0xbf800000;
  local_92c = 0xbf800000;
  pfVar1 = local_980 + 1;
  do {
    iVar2 = iVar2 + -1;
    pfVar1[-1] = pfVar1[-1] * 0.25;
    *pfVar1 = *pfVar1 * 0.25;
    pfVar1 = pfVar1 + 4;
  } while (iVar2 != 0);
  local_998 = 0x3f000000;
  local_994 = 0x3f000000;
  local_990 = 0x3f000000;
  local_98c = 0x3f000000;
  local_988 = 0x3f400000;
  local_984 = 0x3f000000;
  FUN_00f4fa70(0,0,0,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f000000;
  local_990 = 0x3f000000;
  local_984 = 0x3f000000;
  local_98c = 0x3f400000;
  local_988 = 0x3f400000;
  FUN_00f4fa70(6,0,0xbe800000,local_980,local_920,&local_998);
  FUN_00f4fa70(0xc,0,0xbf000000,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f000000;
  local_990 = 0x3f000000;
  local_988 = 0x3f000000;
  local_984 = 0x3f000000;
  local_98c = 0x3f400000;
  FUN_00f4fa70(0x12,0,0xbf400000,local_980,local_920,&local_998);
  local_998 = 0x3f000000;
  local_994 = 0x3f000000;
  local_990 = 0x3f400000;
  local_988 = 0x3f400000;
  local_984 = 0x3f400000;
  local_98c = 0x3f000000;
  FUN_00f4fa70(0x18,0xbe800000,0,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f400000;
  local_990 = 0x3f400000;
  local_98c = 0x3f400000;
  local_988 = 0x3f800000;
  local_984 = 0x3f400000;
  FUN_00f4fa70(0x1e,0xbe800000,0xbe800000,local_980,local_920,&local_998);
  local_998 = 0x3f800000;
  local_994 = 0x3f400000;
  local_990 = 0x3f400000;
  local_988 = 0x3f400000;
  local_984 = 0x3f400000;
  local_98c = 0x3f800000;
  FUN_00f4fa70(0x24,0xbe800000,0xbf000000,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f400000;
  local_990 = 0x3f000000;
  local_988 = 0x3f000000;
  local_984 = 0x3f000000;
  local_98c = 0x3f400000;
  FUN_00f4fa70(0x2a,0xbe800000,0xbf400000,local_980,local_920,&local_998);
  local_998 = 0x3f000000;
  local_994 = 0x3f000000;
  local_990 = 0x3f400000;
  local_988 = 0x3f400000;
  local_984 = 0x3f400000;
  local_98c = 0x3f000000;
  FUN_00f4fa70(0x30,0xbf000000,0,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f400000;
  local_990 = 0x3f400000;
  local_98c = 0x3f400000;
  local_988 = 0x3f800000;
  local_984 = 0x3f400000;
  FUN_00f4fa70(0x36,0xbf000000,0xbe800000,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f400000;
  local_990 = 0x3f800000;
  local_984 = 0x3f800000;
  local_98c = 0x3f400000;
  local_988 = 0x3f400000;
  FUN_00f4fa70(0x3c,0xbf000000,0xbf000000,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f400000;
  local_990 = 0x3f000000;
  local_988 = 0x3f000000;
  local_984 = 0x3f000000;
  local_98c = 0x3f400000;
  FUN_00f4fa70(0x42,0xbf000000,0xbf400000,local_980,local_920,&local_998);
  local_998 = 0x3f000000;
  local_994 = 0x3f000000;
  local_990 = 0x3f400000;
  local_984 = 0x3f400000;
  local_98c = 0x3f000000;
  local_988 = 0x3f000000;
  FUN_00f4fa70(0x48,0xbf400000,0,local_980,local_920,&local_998);
  local_998 = 0x3f400000;
  local_994 = 0x3f400000;
  local_990 = 0x3f400000;
  local_98c = 0x3f000000;
  local_988 = 0x3f000000;
  local_984 = 0x3f400000;
  FUN_00f4fa70(0x4e,0xbf400000,0xbe800000,local_980,local_920,&local_998);
  FUN_00f4fa70(0x54,0xbf400000,0xbf000000,local_980,local_920,&local_998);
  local_998 = 0x3f000000;
  local_994 = 0x3f400000;
  local_990 = 0x3f000000;
  local_98c = 0x3f000000;
  local_988 = 0x3f000000;
  local_984 = 0x3f000000;
  FUN_00f4fa70(0x5a,0xbf400000,0xbf400000,local_980,local_920,&local_998);
  iVar2 = FUN_00f9cae0(0x10,0x60,param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00f99d50(local_920,0x10,0x60);
    if (iVar2 != 0) {
      iVar2 = FUN_00f553b0(local_318,4,param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_00f55550(local_318,4,param_1);
        if (iVar2 != 0) {
          iVar2 = FUN_00f556f0(local_318,4,param_1);
          if (iVar2 != 0) {
            FUN_00f558a0(local_318,4,param_1);
            __security_check_cookie(local_14 ^ (uint)auStack_9a4);
            return;
          }
        }
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_9a4);
  return;
}

// 00F595B0  EspPrimitiveWorkTile4x4::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkTile4x4::vf00(undefined4 *param_1,byte param_2)

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

