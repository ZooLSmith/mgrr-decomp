// src/unsorted/unit_00CD0AD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD0AD0..00CD0AD0, 1 functions

#include "types.h"

// 00CD0AD0  FUN_00cd0ad0  size=304  [run]
undefined4 __thiscall FUN_00cd0ad0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = FUN_00986a80(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00985e00(param_2);
  uVar2 = FUN_00a82090("BodyModel",uVar2,0);
  FUN_00a7c970(uVar2);
  FUN_00a81330();
  FUN_00a7c800();
  FUN_00a0bba0(param_3);
  FUN_00a81330();
  iVar1 = FUN_00a7c890();
  if (iVar1 != 0) {
    uVar8 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0;
    uVar5 = 0x3f800000;
    uVar4 = 0;
    uVar2 = 0;
    puVar3 = &DAT_016b7cb4;
    FUN_00a81330(&DAT_016b7cb4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a7c890();
    FUN_00e3ff90(puVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
    uVar8 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0x40200;
    uVar5 = 0x3f800000;
    uVar4 = 0x3e4ccccd;
    uVar2 = 1;
    puVar3 = &DAT_016b7cac;
    FUN_00a81330(&DAT_016b7cac,1,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
    FUN_00a7c890();
    FUN_00e3ff90(puVar3,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
    FUN_00a81330();
    iVar1 = FUN_00a7c890();
    *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
    *(undefined4 *)(param_1 + 0x90 + (param_3 & 0xff) * 4) = 3;
    *(undefined4 *)(param_1 + 0x98 + (param_3 & 0xff) * 4) = 0xffffffff;
  }
  return 1;
}

