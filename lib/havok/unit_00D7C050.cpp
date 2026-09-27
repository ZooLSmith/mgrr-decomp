// lib/havok/unit_00D7C050.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7C050..00D7C050, 1 functions

#include "types.h"

// 00D7C050  hkpAllCdPointCollector::hkpAllCdPointCollector_10  size=579  [run]
undefined4 * __thiscall
hkpAllCdPointCollector::hkpAllCdPointCollector_10
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_1 = Collision::vftable;
  param_1[5] = 0x7f7fffee;
  param_1[4] = vftable;
  param_1[8] = param_1 + 0xc;
  param_1[10] = 0x80000008;
  param_1[9] = 0;
  param_1[5] = 0x7f7fffee;
  param_1[0x6c] = vftable;
  param_1[0x6d] = 0x7f7fffee;
  param_1[0x72] = 0x80000008;
  param_1[0x70] = param_1 + 0x74;
  param_1[0x71] = 0;
  param_1[0x6d] = 0x7f7fffee;
  param_1[0xd4] = 1;
  uVar2 = (**(code **)*DAT_01dc52e8)();
  param_1[0x105] = 0;
  param_1[0xd5] = uVar2;
  param_1[0xda] = param_2;
  param_1[0xdc] = param_4;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdb] = param_3;
  param_1[0xdd] = 0;
  param_1[0xde] = param_5;
  param_1[0xdf] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 1;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0xffffffff;
  param_1[0x104] = 0xffffffff;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x10a] = 0xffffffff;
  param_1[0x10b] = 0xffffffff;
  param_1[0x10c] = 0;
  param_1[0xe0] = param_1;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  puVar3 = (undefined4 *)FUN_00dd3500(0x6f0,&DAT_01b7c0b8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = puVar3 + 4;
    puVar3[2] = 0;
    puVar3[3] = 5;
    *puVar3 = lib::StaticArray<Collision::History,5>::vftable;
  }
  param_1[0x10d] = puVar3;
  puVar3 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7c0b8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = puVar3 + 4;
    puVar3[2] = 0;
    puVar3[3] = 5;
    *puVar3 = lib::StaticArray<Collision::WithinOneFrame,5>::vftable;
  }
  puVar1 = (undefined4 *)param_1[0x10d];
  param_1[0x10e] = puVar3;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar3 != (undefined4 *)0x0) goto LAB_00d7c242;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      param_1[0x10d] = 0;
    }
  }
  if ((undefined4 *)param_1[0x10e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x10e])(1);
    param_1[0x10e] = 0;
  }
  FUN_00dd5650(&DAT_016c13c0);
LAB_00d7c242:
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  return param_1;
}

