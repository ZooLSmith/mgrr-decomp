// src/unsorted/unit_004455A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004455A0..00445810, 2 functions

#include "types.h"

// 004455A0  FUN_004455a0  size=522  [run]
void __fastcall FUN_004455a0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x22,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x373] = 1;
    FUN_00a95fb0(0x40400000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (iVar4 = FUN_00a952e0(0,0x420c0000), iVar4 != 0)) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    param_1[0x4db] = param_1[0x4db] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
    FUN_00a8d280();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x373] = 0;
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3eb2b8c2,0);
    }
    if (((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(10), iVar4 != 0)) &&
       (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
      fVar1 = *(float *)(param_1[0x2a1] + 0x48);
      fVar2 = *(float *)(iVar4 + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar4 + 0x40)) * 0.01);
      param_1[0x16] = (int)((fVar1 - fVar2) * 0.01 + (float)param_1[0x16]);
      (*pcVar3)(0x3f000000,0x393702d3,0x3e32b8c2,0);
      return;
    }
  }
  return;
}

// 00445810  FUN_00445810  size=112  [run]
void __fastcall FUN_00445810(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x375] = iVar1;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
    }
  }
  return;
}

