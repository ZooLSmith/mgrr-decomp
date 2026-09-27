// src/unsorted/unit_00FBA040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FBA040..00FBA430, 4 functions

#include "types.h"

// 00FBA040  FUN_00fba040  size=687  [run]
void __thiscall FUN_00fba040(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(param_1 + 0xf60) = param_2;
  *(int *)(param_1 + 0xe00) = param_2 * 0x40 + param_1;
  *(int *)(param_1 + 0xe04) = (param_2 + 7) * 0x40 + param_1;
  *(int *)(param_1 + 0xe08) = (param_2 + 0xe) * 0x40 + param_1;
  *(int *)(param_1 + 0xed0) = (param_2 + 0x15) * 0x40 + param_1;
  *(int *)(param_1 + 0xed4) = (param_2 + 0x1c) * 0x40 + param_1;
  puVar2 = (undefined4 *)((param_2 + 0xc4) * 0x10 + param_1);
  *(int *)(param_1 + 0xed8) = (param_2 + 0x23) * 0x40 + param_1;
  *(int *)(param_1 + 0xedc) = (param_2 + 0x2a) * 0x40 + param_1;
  *(undefined4 *)(param_1 + 0xee0) = *puVar2;
  *(undefined4 *)(param_1 + 0xee4) = puVar2[1];
  *(undefined4 *)(param_1 + 0xee8) = puVar2[2];
  *(undefined4 *)(param_1 + 0xeec) = puVar2[3];
  iVar3 = (*(int *)(param_1 + 0xf60) + 0xcb) * 0x10;
  iVar4 = iVar3 + param_1;
  *(undefined4 *)(param_1 + 0xef0) = *(undefined4 *)(iVar3 + param_1);
  *(undefined4 *)(param_1 + 0xef4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(param_1 + 0xef8) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(param_1 + 0xefc) = *(undefined4 *)(iVar4 + 0xc);
  iVar3 = (*(int *)(param_1 + 0xf60) + 0xd2) * 0x10;
  iVar4 = iVar3 + param_1;
  *(undefined4 *)(param_1 + 0xf00) = *(undefined4 *)(iVar3 + param_1);
  *(undefined4 *)(param_1 + 0xf04) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(param_1 + 0xf08) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(param_1 + 0xf0c) = *(undefined4 *)(iVar4 + 0xc);
  iVar3 = (*(int *)(param_1 + 0xf60) + 0xd9) * 0x10;
  iVar4 = iVar3 + param_1;
  *(undefined4 *)(param_1 + 0xf10) = *(undefined4 *)(iVar3 + param_1);
  *(undefined4 *)(param_1 + 0xf14) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(param_1 + 0xf18) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(param_1 + 0xf1c) = *(undefined4 *)(iVar4 + 0xc);
  D3DXMatrixTranspose(param_1 + 0xe10,*(undefined4 *)(param_1 + 0xe00));
  D3DXMatrixTranspose(param_1 + 0xe50,*(undefined4 *)(param_1 + 0xe04));
  D3DXMatrixTranspose(param_1 + 0xe90,*(undefined4 *)(param_1 + 0xe08));
  pfVar1 = (float *)(param_1 + 0xf20);
  *pfVar1 = *(float *)(param_1 + 0xef0) - *(float *)(param_1 + 0xee0);
  *(float *)(param_1 + 0xf24) = *(float *)(param_1 + 0xef4) - *(float *)(param_1 + 0xee4);
  *(float *)(param_1 + 0xf28) = *(float *)(param_1 + 0xef8) - *(float *)(param_1 + 0xee8);
  *(float *)(param_1 + 0xf2c) = *(float *)(param_1 + 0xefc) - *(float *)(param_1 + 0xeec);
  if (((*pfVar1 == 0.0) && (*(float *)(param_1 + 0xf24) == 0.0)) &&
     (*(float *)(param_1 + 0xf28) == 0.0)) {
    return;
  }
  if (*(float *)(param_1 + 0xf24) * *(float *)(param_1 + 0xf24) + *pfVar1 * *pfVar1 +
      *(float *)(param_1 + 0xf28) * *(float *)(param_1 + 0xf28) <= 0.0) {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar1 = 0.0;
    *(undefined4 *)(param_1 + 0xf24) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xf28) = 0;
    return;
  }
  FUN_00ddf460(pfVar1,pfVar1);
  return;
}

// 00FBA2F0  FUN_00fba2f0  size=8  [run]
void FUN_00fba2f0(void)

{
  FUN_00fba040(0);
  return;
}

// 00FBA300  FUN_00fba300  size=295  [run]
void __fastcall FUN_00fba300(int param_1)

{
  int iVar1;
  
  if ((DAT_01f8d280 & 1) == 0) {
    DAT_01f8d280 = DAT_01f8d280 | 1;
  }
  if ((DAT_01f8d280 & 2) == 0) {
    DAT_01f8d280 = DAT_01f8d280 | 2;
  }
  D3DXMatrixTranspose(&DAT_01f8d180,*(undefined4 *)(param_1 + 0xe04));
  D3DXMatrixTranspose(&DAT_01f8d1c0,*(undefined4 *)(param_1 + 0xe00));
  D3DXMatrixTranspose(&DAT_01f8d200,*(undefined4 *)(param_1 + 0xe08));
  D3DXMatrixTranspose(&DAT_01f8d240,*(undefined4 *)(param_1 + 0xed0));
  D3DXMatrixTranspose(&DAT_01f8d140,*(undefined4 *)(param_1 + 0xedc));
  iVar1 = FUN_00f994a0(0,&DAT_01f8d180,0x40);
  if (iVar1 == 0) {
    FID_conflict__memcpy(&DAT_01f134d0,&DAT_01f8d180,0x100);
    FUN_00f995e0(0,&DAT_01f134d0,0x40);
  }
  FUN_00e6b900();
  iVar1 = FUN_00f994a0(0x24,&DAT_01f8d140,0x10);
  if (iVar1 == 0) {
    FID_conflict__memcpy(&DAT_01f13710,&DAT_01f8d140,0x40);
    FUN_00f995e0(0x24,&DAT_01f13710,0x10);
  }
  iVar1 = FUN_00f99540(0,&DAT_01f8d180,0x40);
  if (iVar1 == 0) {
    FID_conflict__memcpy(&DAT_01f126d0,&DAT_01f8d180,0x100);
    FUN_00f99620(0,&DAT_01f126d0,0x40);
  }
  return;
}

// 00FBA430  FUN_00fba430  size=22  [run]
undefined4 * FUN_00fba430(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_LAB_016f3538;
    return param_1;
  }
  return (undefined4 *)0x0;
}

