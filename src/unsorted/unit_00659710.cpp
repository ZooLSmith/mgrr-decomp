// src/unsorted/unit_00659710.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00659710..00659710, 1 functions

#include "mgrr.h"

// 00659710  FUN_00659710  size=962  [run]
void __fastcall FUN_00659710(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x86,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42b40000;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24f] = 0x42b40000;
      if (1.0471976 < (float)param_1[0x2a8]) {
        param_1[0x187] = 6;
      }
    }
    break;
  case 2:
    FUN_00aa4080(0x87,0,0x3d4ccccd,0x3f800000,param_1[0x3c8],0xbf800000,0x3f800000);
    uVar5 = 0;
    param_1[0x250] = 0;
    uVar3 = FUN_00a7c8a0(0);
    FUN_004039a0(0xb,uVar3,uVar5);
    puVar6 = local_160;
    local_1c = 0x87;
    uVar3 = FUN_00e00b40(0x20030,puVar6);
    FUN_00a8c930(uVar3,puVar6);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (0.0 <= (float)param_1[0x24f]) {
      FUN_00a82870((float)param_1[0x24f] * 0.017453292,-(float)param_1[0x24f] * 0.017453292,
                   0x3e99999a,0x3ae4c388,0x3e32b8c2);
      param_1[0x24f] = (int)((float)param_1[0x24f] - 20.0);
    }
    else {
      param_1[0x3ce] = param_1[0x3ce] | 0x20000000;
      FUN_00a82870(0x3fc90fdb,0xbfc90fdb,0x3e99999a,0x3ae4c388,0x3e32b8c2);
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
      if (((param_1[0x3ce] & 0x4000U) == 0) && (2 < param_1[0x250])) {
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    if (param_1[0x638] == 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x88,0,0x3daaaaab,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x670] = (int)((float)param_1[0x6b3] * 60.0);
      (*pcVar2)();
    }
    break;
  case 6:
    FUN_00aa4080(0x89,0,0x3d4ccccd,0x3f800000,param_1[0x3c8] | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 5;
  }
  if ((((param_1[0x3ce] & 0x10004000U) == 0) && (param_1[0x2a1] != 0)) &&
     (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    fVar1 = (float)param_1[0x2a8];
    if (!NAN(fVar1) && 1.7453293 < fVar1 != (fVar1 == 1.7453293)) {
      param_1[0x3ce] = param_1[0x3ce] | 0x10000000;
      param_1[0x24a] = 0x42700000;
    }
  }
  return;
}

