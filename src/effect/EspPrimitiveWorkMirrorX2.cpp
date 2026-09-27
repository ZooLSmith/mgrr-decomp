// src/effect/EspPrimitiveWorkMirrorX2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4EF50..00F59290, 5 functions

#include "mgrr.h"
#include "EspPrimitiveWorkMirrorX2.h"

// 00F4EF50  EspPrimitiveWorkMirrorX2::EspPrimitiveWorkMirrorX2  size=48  [class]
undefined4 * __fastcall EspPrimitiveWorkMirrorX2::EspPrimitiveWorkMirrorX2(undefined4 *param_1)

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

// 00F4EFD0  EspPrimitiveWorkMirrorX2::vf08  size=36  [class]
void EspPrimitiveWorkMirrorX2::vf08(void)

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

// 00F4F000  EspPrimitiveWorkMirrorX2::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkMirrorX2::vf0C(int param_1,int param_2)

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
  FUN_00f9dfb0(5);
  return;
}

// 00F51EE0  EspPrimitiveWorkMirrorX2::vf04  size=606  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 EspPrimitiveWorkMirrorX2::vf04(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if ((DAT_01ee6898 & 1) == 0) {
    DAT_01ee6898 = DAT_01ee6898 | 1;
    _DAT_01ee6850 = 0xbf800000;
    _DAT_01ee6854 = 0xbf800000;
    _DAT_01ee685c = 0xbf800000;
    _DAT_01ee6858 = 0;
    _DAT_01ee6860 = 0;
    _DAT_01ee6864 = 0;
    _DAT_01ee6868 = 0xbf000000;
    _DAT_01ee6874 = 0xbf000000;
    _DAT_01ee686c = 0xbf800000;
    _DAT_01ee6884 = 0xbf800000;
    _DAT_01ee6870 = 0;
    _DAT_01ee6878 = 0;
    _DAT_01ee687c = 0;
    _DAT_01ee6880 = 0;
    _DAT_01ee6888 = 0;
    _DAT_01ee688c = 0;
    _DAT_01ee6890 = 0;
    _DAT_01ee6894 = 0;
  }
  if ((DAT_01ee6898 & 2) == 0) {
    _DAT_01ee6790 = 0;
    DAT_01ee6898 = DAT_01ee6898 | 2;
    _DAT_01ee6794 = 0x3f800000;
    _DAT_01ee67a0 = 0x3f800000;
    _DAT_01ee67a4 = 0x3f800000;
    _DAT_01ee67a8 = 0x3f800000;
    _DAT_01ee67b4 = 0x3f800000;
    _DAT_01ee67c0 = 0x3f800000;
    _DAT_01ee67c4 = 0x3f800000;
    _DAT_01ee67c8 = 0x3f800000;
    _DAT_01ee67d4 = 0x3f800000;
    _DAT_01ee67e0 = 0x3f800000;
    _DAT_01ee67e4 = 0x3f800000;
    _DAT_01ee67e8 = 0x3f800000;
    _DAT_01ee67fc = 0x3f800000;
    _DAT_01ee6800 = 0x3f800000;
    _DAT_01ee6808 = 0x3f800000;
    _DAT_01ee680c = 0x3f800000;
    _DAT_01ee681c = 0x3f800000;
    _DAT_01ee6820 = 0x3f800000;
    _DAT_01ee6828 = 0x3f800000;
    _DAT_01ee682c = 0x3f800000;
    _DAT_01ee683c = 0x3f800000;
    _DAT_01ee6840 = 0x3f800000;
    _DAT_01ee6848 = 0x3f800000;
    _DAT_01ee684c = 0x3f800000;
    _DAT_01ee6798 = 0;
    _DAT_01ee679c = 0;
    _DAT_01ee67ac = 0;
    _DAT_01ee67b0 = 0;
    _DAT_01ee67b8 = 0;
    _DAT_01ee67bc = 0;
    _DAT_01ee67cc = 0;
    _DAT_01ee67d0 = 0;
    _DAT_01ee67d8 = 0;
    _DAT_01ee67dc = 0;
    _DAT_01ee67ec = 0;
    _DAT_01ee67f0 = 0;
    _DAT_01ee67f4 = 0;
    _DAT_01ee67f8 = 0;
    _DAT_01ee6804 = 0;
    _DAT_01ee6810 = 0;
    _DAT_01ee6814 = 0;
    _DAT_01ee6818 = 0;
    _DAT_01ee6824 = 0;
    _DAT_01ee6830 = 0;
    _DAT_01ee6834 = 0;
    _DAT_01ee6838 = 0;
    _DAT_01ee6844 = 0;
    _atexit((_func_4879 *)&DAT_015f2300);
  }
  iVar1 = FUN_00f9cae0(0xc,6,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(&DAT_01ee6850,0xc,6), iVar1 != 0)) {
    puVar3 = &DAT_01ee6790;
    uVar2 = 0;
    while ((iVar1 = FUN_00f9cae0(8,6,param_1), iVar1 != 0 &&
           (iVar1 = FUN_00f99d50(puVar3,8,6), iVar1 != 0))) {
      uVar2 = uVar2 + 0x30;
      puVar3 = puVar3 + 0x30;
      if (0xbf < uVar2) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

// 00F59290  EspPrimitiveWorkMirrorX2::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkMirrorX2::vf00(undefined4 *param_1,byte param_2)

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

