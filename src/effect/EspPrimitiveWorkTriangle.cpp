// src/effect/EspPrimitiveWorkTriangle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4EE00..00F59240, 5 functions

#include "mgrr.h"
#include "EspPrimitiveWorkTriangle.h"

// 00F4EE00  EspPrimitiveWorkTriangle::EspPrimitiveWorkTriangle  size=48  [class]
undefined4 * __fastcall EspPrimitiveWorkTriangle::EspPrimitiveWorkTriangle(undefined4 *param_1)

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

// 00F4EE80  EspPrimitiveWorkTriangle::vf08  size=36  [class]
void EspPrimitiveWorkTriangle::vf08(void)

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

// 00F4EEB0  EspPrimitiveWorkTriangle::vf0C  size=119  [class]
void __thiscall EspPrimitiveWorkTriangle::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 0x11) == 'K') {
    FUN_00dd5650(&DAT_016e1024,&DAT_016e0fbc);
  }
  if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(1,param_1 + 0x2c + (uVar1 >> 2 & 3) * 0x28);
  }
  else {
    FUN_00f98f80(&PTR_vftable_018da4c0);
  }
  FUN_00f99010(0,param_1 + 4);
  FUN_00f9dfb0(5);
  return;
}

// 00F51D40  EspPrimitiveWorkTriangle::vf04  size=411  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EspPrimitiveWorkTriangle::vf04(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((DAT_01ee678c & 1) == 0) {
    DAT_01ee678c = DAT_01ee678c | 1;
    _DAT_01ee6768 = 0xbf800000;
    _DAT_01ee676c = 0;
    _DAT_01ee6770 = 0;
    _DAT_01ee6774 = 0;
    _DAT_01ee6778 = 0;
    _DAT_01ee677c = 0;
    _DAT_01ee6780 = 0xbf000000;
    _DAT_01ee6784 = 0xbf800000;
    _DAT_01ee6788 = 0;
  }
  if ((DAT_01ee678c & 2) == 0) {
    _DAT_01ee6708 = 0;
    DAT_01ee678c = DAT_01ee678c | 2;
    _DAT_01ee670c = 0;
    _DAT_01ee6710 = 0x3f800000;
    _DAT_01ee6714 = 0;
    _DAT_01ee6718 = 0x3f000000;
    _DAT_01ee6730 = 0x3f000000;
    _DAT_01ee6748 = 0x3f000000;
    _DAT_01ee6760 = 0x3f000000;
    _DAT_01ee671c = 0x3f800000;
    _DAT_01ee6720 = 0x3f800000;
    _DAT_01ee6734 = 0x3f800000;
    _DAT_01ee673c = 0x3f800000;
    _DAT_01ee6740 = 0x3f800000;
    _DAT_01ee6744 = 0x3f800000;
    _DAT_01ee6750 = 0x3f800000;
    _DAT_01ee6754 = 0x3f800000;
    _DAT_01ee675c = 0x3f800000;
    _DAT_01ee6724 = 0;
    _DAT_01ee6728 = 0;
    _DAT_01ee672c = 0;
    _DAT_01ee6738 = 0;
    _DAT_01ee674c = 0;
    _DAT_01ee6758 = 0;
    _DAT_01ee6764 = 0;
    _atexit((_func_4879 *)&DAT_015f22f0);
  }
  iVar1 = FUN_00f9cae0(0xc,3,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(&DAT_01ee6768,0xc,3), iVar1 != 0)) {
    puVar3 = &DAT_01ee6708;
    uVar2 = 0;
    while ((iVar1 = FUN_00f9cae0(8,3,param_1), iVar1 != 0 &&
           (iVar1 = FUN_00f99d50(puVar3,8,3), iVar1 != 0))) {
      uVar2 = uVar2 + 0x18;
      puVar3 = puVar3 + 0x18;
      if (0x5f < uVar2) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

// 00F59240  EspPrimitiveWorkTriangle::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkTriangle::vf00(undefined4 *param_1,byte param_2)

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

