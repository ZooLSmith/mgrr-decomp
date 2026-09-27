// src/zangeki/ZangekiModeExitSlot.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093D9E0..00943500, 5 functions

#include "mgrr.h"
#include "ZangekiModeExitSlot.h"

// 0093D9E0  ZangekiModeExitSlot::vf10  size=1  [class]
void ZangekiModeExitSlot::vf10(void)

{
  return;
}

// 0093D9F0  ZangekiModeExitSlot::vf14  size=1  [class]
void ZangekiModeExitSlot::vf14(void)

{
  return;
}

// 0093E280  ZangekiModeExitSlot::vf18  size=3  [class]
void ZangekiModeExitSlot::vf18(void)

{
  return;
}

// 0093E290  ZangekiModeExitSlot::vf00  size=31  [class]
undefined4 * __thiscall ZangekiModeExitSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00943500  ZangekiModeExitSlot::ZangekiModeExitSlot  size=349  [class]
void __fastcall ZangekiModeExitSlot::ZangekiModeExitSlot(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_4;
  
  puVar3 = param_1 + 0x26;
  local_4 = 0xc;
  do {
    puVar1 = (undefined4 *)FUN_00dd3500(0x3e90,param_1[0xd]);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = puVar1 + 4;
      puVar1[2] = 0;
      puVar1[3] = 400;
      *puVar1 = lib::StaticArray<DebrisHandleList::_DebrisHandleNode,400>::vftable;
    }
    puVar3[-0x12] = puVar1;
    iVar2 = FUN_00dd7240();
    if (iVar2 != 0) {
      puVar3[-0x10] = 0xbf800000;
      puVar3[-0x11] = 0xffffffff;
      puVar3[-0xf] = 0x10010;
      puVar3[-0xd] = 0;
      puVar3[-0xe] = 0;
      puVar3[-0xc] = 0;
      puVar3[-0xb] = 0;
      puVar3[-10] = 0;
      puVar3[-8] = 0x447a0000;
      puVar3[-9] = 0;
      puVar3[-7] = 0xbf800000;
      puVar3[-6] = 0xbf800000;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3[1] = 0x3f800000;
      puVar3[3] = 0;
      puVar3[4] = 0xffffffff;
      puVar3[2] = 0;
      puVar3[5] = 1;
      puVar3[10] = 0;
      puVar3[9] = 0;
      puVar3[-0x16] = 0;
      puVar3[6] = 0;
      puVar3[-0x14] = 0;
      puVar3[8] = 0;
      puVar3[-0x15] = 0;
    }
    puVar3 = puVar3 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  param_1[0x22a] = 0;
  puVar3 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7bd48);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = vftable;
  }
  param_1[0x220] = puVar3;
  FUN_00d89ec0(0x15,puVar3);
  param_1[0x224] = 0;
  param_1[0x227] = 0;
  param_1[0x226] = 0;
  param_1[0x228] = 1;
  param_1[0x229] = 0xbf800000;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  return;
}

