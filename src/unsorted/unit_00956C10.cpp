// src/unsorted/unit_00956C10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00956C10..00957020, 8 functions

#include "mgrr.h"

// 00956C10  FUN_00956c10  size=19  [run]
void FUN_00956c10(void)

{
  lib::Array<stItemData*>::Array<stItemData*>();
  lib::Array<stItemData*>::Array<stItemData*>();
  return;
}

// 00956C30  FUN_00956c30  size=40  [run]
void __fastcall FUN_00956c30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  cXmlBinary::cXmlBinary_59();
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

// 00956C60  FUN_00956c60  size=232  [run]
undefined4 __thiscall FUN_00956c60(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_8 [8];
  
  if ((*(int *)(param_1 + 0x30) == 2) && ((param_2 & 0xf00) == 0xc00)) {
    iVar1 = FUN_00e9cfe0(*(undefined4 *)(param_1 + 0x34));
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 0;
    uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x34));
    FUN_00de3610(uVar2,uVar3);
    iVar1 = cXmlBinary::cXmlBinary_60(local_8);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01650858);
      return 1;
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 3) && ((param_2 & 0xf00) == 0xd00)) {
    iVar1 = FUN_00e9cfe0(*(undefined4 *)(param_1 + 0x34));
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 0;
    uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x34));
    FUN_00de3610(uVar2,uVar3);
    iVar1 = cXmlBinary::cXmlBinary_60(local_8);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01650838);
    }
  }
  return 1;
}

// 00956D50  FUN_00956d50  size=127  [run]
undefined4 __thiscall FUN_00956d50(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_2 & 0xf00) != 0xc00) && (*(int *)(param_1 + 0x30) == 2)) {
    FUN_00955ec0();
    FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    uVar1 = 1;
  }
  if (((param_2 & 0xf00) != 0xd00) && (*(int *)(param_1 + 0x30) == 3)) {
    FUN_00955ec0();
    FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    uVar1 = 1;
  }
  return uVar1;
}

// 00956E30  FUN_00956e30  size=169  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00956e30(void)

{
  DAT_01b3735c = 0;
  FUN_00dd7240();
  if (DAT_01886a64 != 0) {
    _DAT_01886a68 = 0;
  }
  cXmlBinary::cXmlBinary_59();
  DAT_01886a90 = 0xffffffff;
  if (DAT_01886a7c != 0) {
    _DAT_01886a80 = 0;
  }
  _DAT_01886a94 = 0;
  cXmlBinary::cXmlBinary_65();
  DAT_018871c0 = 0;
  _DAT_018871c4 = 0;
  _DAT_018871c8 = 0;
  if (PTR_DAT_01886fb4 != (undefined *)0x0) {
    DAT_01886fb8 = 0;
  }
  FUN_00dd7240();
  if (PTR_DAT_01886ab4 != (undefined *)0x0) {
    _DAT_01886ab8 = 0;
  }
  DAT_01b37340 = 0;
  _DAT_01b3734c = 0;
  _DAT_01b37350 = 0;
  _DAT_01b37344 = 0xffffffff;
  return;
}

// 00956EE0  FUN_00956ee0  size=151  [run]
void FUN_00956ee0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    *(undefined4 *)((int)&DAT_01b374d4 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01b374d0 + uVar1) = 0;
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x80);
  FUN_00950f20();
  FUN_00954910();
  FUN_00950860();
  FUN_009505f0();
  FUN_00955f60();
  FUN_0094b930(DAT_018b91a0,DAT_018b9148);
  FUN_0094bae0(DAT_018b91a0,DAT_018b9148);
  FUN_00956d50(DAT_018b91a0,DAT_018b9148);
  return;
}

// 00956F80  FUN_00956f80  size=151  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00956f80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_100 [256];
  
  if (PTR_DAT_01886fb4 != (undefined *)0x0) {
    DAT_01886fb8 = 0;
  }
  iVar1 = FUN_00de4550("_ItemRate.bxm",0);
  if (iVar1 != 0) {
    cXmlBinary::cXmlBinary_55(iVar1);
  }
  _sprintf_s(local_100,0x100,"_ItemInsta.bxm",param_1);
  uVar2 = FUN_00de4550(local_100,0);
  cXmlBinary::cXmlBinary_45(uVar2,param_1);
  DAT_01b37340 = 0;
  _DAT_01b3734c = 0;
  _DAT_01b37350 = 0;
  _DAT_01b37344 = 0xffffffff;
  return;
}

// 00957020  FUN_00957020  size=21  [run]
void FUN_00957020(undefined4 param_1,undefined4 param_2)

{
  FUN_00956c60(param_1,param_2);
  return;
}

