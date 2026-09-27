// src/effect/EspPrimitiveWorkMirrorX4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4F080..00F592E0, 5 functions

#include "types.h"

// 00F4F080  EspPrimitiveWorkMirrorX4::EspPrimitiveWorkMirrorX4  size=48  [class]
undefined4 * __fastcall EspPrimitiveWorkMirrorX4::EspPrimitiveWorkMirrorX4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00F4F100  EspPrimitiveWorkMirrorX4::vf08  size=36  [class]
void EspPrimitiveWorkMirrorX4::vf08(void)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = 4;
  do {
    FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00F4F130  EspPrimitiveWorkMirrorX4::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkMirrorX4::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(1,param_1 + 0x2c + (uVar1 >> 2 & 3) * 0x28);
  }
  else {
    FUN_00f98f80(&PTR_vftable_018da4c0);
  }
  FUN_00f99010(0,param_1 + 4);
  FUN_00f9dfb0(6);
  return;
}

// 00F52140  EspPrimitiveWorkMirrorX4::vf04  size=870  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EspPrimitiveWorkMirrorX4::vf04(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((DAT_01ee6a58 & 1) == 0) {
    DAT_01ee6a58 = DAT_01ee6a58 | 1;
    _DAT_01ee69e0 = 0xbf000000;
    _DAT_01ee69e4 = 0xbf000000;
    _DAT_01ee69e8 = 0;
    _DAT_01ee69ec = 0xbf800000;
    _DAT_01ee6a20 = 0xbf800000;
    _DAT_01ee6a2c = 0xbf800000;
    _DAT_01ee6a34 = 0xbf800000;
    _DAT_01ee6a38 = 0xbf800000;
    _DAT_01ee6a40 = 0xbf800000;
    _DAT_01ee6a4c = 0xbf800000;
    _DAT_01ee69f0 = 0;
    _DAT_01ee69f4 = 0;
    _DAT_01ee69fc = 0;
    _DAT_01ee6a00 = 0;
    _DAT_01ee6a04 = 0;
    _DAT_01ee6a08 = 0;
    _DAT_01ee6a0c = 0;
    _DAT_01ee6a10 = 0;
    _DAT_01ee6a18 = 0;
    _DAT_01ee6a1c = 0;
    _DAT_01ee6a24 = 0;
    _DAT_01ee6a30 = 0;
    _DAT_01ee6a3c = 0;
    _DAT_01ee6a48 = 0;
    _DAT_01ee6a50 = 0;
    _DAT_01ee6a54 = 0;
    _DAT_01ee69f8 = 0xbf000000;
    _DAT_01ee6a14 = 0xbf000000;
    _DAT_01ee6a28 = 0xbf000000;
    _DAT_01ee6a44 = 0xbf000000;
  }
  if ((DAT_01ee6a58 & 2) == 0) {
    DAT_01ee6a58 = DAT_01ee6a58 | 2;
    _DAT_01ee68a0 = 0x3f800000;
    _DAT_01ee68a4 = 0x3f800000;
    _DAT_01ee68b0 = 0x3f800000;
    _DAT_01ee68c4 = 0x3f800000;
    _DAT_01ee68d0 = 0x3f800000;
    _DAT_01ee68e4 = 0x3f800000;
    _DAT_01ee68f4 = 0x3f800000;
    _DAT_01ee68f8 = 0x3f800000;
    _DAT_01ee6908 = 0x3f800000;
    _DAT_01ee6910 = 0x3f800000;
    _DAT_01ee6914 = 0x3f800000;
    _DAT_01ee6918 = 0x3f800000;
    _DAT_01ee6928 = 0x3f800000;
    _DAT_01ee6930 = 0x3f800000;
    _DAT_01ee6934 = 0x3f800000;
    _DAT_01ee6938 = 0x3f800000;
    _DAT_01ee6940 = 0x3f800000;
    _DAT_01ee694c = 0x3f800000;
    _DAT_01ee6950 = 0x3f800000;
    _DAT_01ee6954 = 0x3f800000;
    _DAT_01ee695c = 0x3f800000;
    _DAT_01ee696c = 0x3f800000;
    _DAT_01ee6970 = 0x3f800000;
    _DAT_01ee6974 = 0x3f800000;
    _DAT_01ee697c = 0x3f800000;
    _DAT_01ee698c = 0x3f800000;
    _DAT_01ee6998 = 0x3f800000;
    _DAT_01ee699c = 0x3f800000;
    _DAT_01ee69a4 = 0x3f800000;
    _DAT_01ee69a8 = 0x3f800000;
    _DAT_01ee69ac = 0x3f800000;
    _DAT_01ee69b0 = 0x3f800000;
    _DAT_01ee69b8 = 0x3f800000;
    _DAT_01ee69bc = 0x3f800000;
    _DAT_01ee69c4 = 0x3f800000;
    _DAT_01ee69c8 = 0x3f800000;
    _DAT_01ee69cc = 0x3f800000;
    _DAT_01ee69d0 = 0x3f800000;
    _DAT_01ee69d8 = 0x3f800000;
    _DAT_01ee69dc = 0x3f800000;
    _DAT_01ee68a8 = 0;
    _DAT_01ee68ac = 0;
    _DAT_01ee68b4 = 0;
    _DAT_01ee68b8 = 0;
    _DAT_01ee68bc = 0;
    _DAT_01ee68c0 = 0;
    _DAT_01ee68c8 = 0;
    _DAT_01ee68cc = 0;
    _DAT_01ee68d4 = 0;
    _DAT_01ee68d8 = 0;
    _DAT_01ee68dc = 0;
    _DAT_01ee68e0 = 0;
    _DAT_01ee68e8 = 0;
    _DAT_01ee68ec = 0;
    _DAT_01ee68f0 = 0;
    _DAT_01ee68fc = 0;
    _DAT_01ee6900 = 0;
    _DAT_01ee6904 = 0;
    _DAT_01ee690c = 0;
    _DAT_01ee691c = 0;
    _DAT_01ee6920 = 0;
    _DAT_01ee6924 = 0;
    _DAT_01ee692c = 0;
    _DAT_01ee693c = 0;
    _DAT_01ee6944 = 0;
    _DAT_01ee6948 = 0;
    _DAT_01ee6958 = 0;
    _DAT_01ee6960 = 0;
    _DAT_01ee6964 = 0;
    _DAT_01ee6968 = 0;
    _DAT_01ee6978 = 0;
    _DAT_01ee6980 = 0;
    _DAT_01ee6984 = 0;
    _DAT_01ee6988 = 0;
    _DAT_01ee6990 = 0;
    _DAT_01ee6994 = 0;
    _DAT_01ee69a0 = 0;
    _DAT_01ee69b4 = 0;
    _DAT_01ee69c0 = 0;
    _DAT_01ee69d4 = 0;
    _atexit((_func_4879 *)&DAT_015f2310);
  }
  iVar1 = FUN_00f9cae0(0xc,10,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(&DAT_01ee69e0,0xc,10), iVar1 != 0)) {
    puVar3 = &DAT_01ee68a0;
    uVar2 = 0;
    while ((iVar1 = FUN_00f9cae0(8,10,param_1), iVar1 != 0 &&
           (iVar1 = FUN_00f99d50(puVar3,8,10), iVar1 != 0))) {
      uVar2 = uVar2 + 0x50;
      puVar3 = puVar3 + 0x50;
      if (0x13f < uVar2) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

// 00F592E0  EspPrimitiveWorkMirrorX4::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkMirrorX4::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
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

