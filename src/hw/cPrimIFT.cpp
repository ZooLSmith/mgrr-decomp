// src/hw/cPrimIFT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA54C0..00FAAC10, 3 functions

#include "mgrr.h"

// 00FA54C0  Hw::cPrimIFT::vf04  size=365  [class]
void __fastcall Hw::cPrimIFT::vf04(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00fa05b0(*(undefined4 *)(param_1 + 200));
  FUN_00f9eec0(&DAT_01f20794,param_1 + 0x10);
  FUN_00fa01f0(DAT_01f207b0,&DAT_01f207b4,*(undefined4 *)(param_1 + 0xc0));
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  if ((*(byte *)(param_1 + 0xcc) & 0x40) == 0) {
    uVar5 = 6;
    uVar4 = 5;
  }
  else {
    uVar5 = 1;
    uVar4 = 2;
  }
  FUN_00f9d970(uVar4,uVar5,1);
  if ((*(byte *)(param_1 + 0xcc) & 0x80) == 0) {
    if (DAT_01f20590 == &DAT_01f20760) goto LAB_00fa5576;
    DAT_01f20590 = &DAT_01f20760;
  }
  else {
    if (DAT_01f20590 == &DAT_01f207b8) goto LAB_00fa5576;
    DAT_01f20590 = &DAT_01f207b8;
  }
  DAT_01f2058c = 1;
LAB_00fa5576:
  if (DAT_01f2059c != &PTR_vftable_018da4d8) {
    DAT_01f2059c = &PTR_vftable_018da4d8;
    DAT_01f20598 = 1;
  }
  iVar3 = param_1 + 0x50;
  if (DAT_01f205a0 != iVar3) {
    iVar2 = FUN_00f98600(0,iVar3);
    if (iVar2 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar3;
    }
  }
  iVar3 = param_1 + 0x78;
  if (DAT_01f205a4 != iVar3) {
    iVar2 = FUN_00f98600(1,iVar3);
    if (iVar2 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a4 = iVar3;
    }
  }
  puVar1 = (undefined4 *)(param_1 + 0xa0);
  if ((DAT_01f20594 != puVar1) && (DAT_01f206d4 != (int *)0x0)) {
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = (**(code **)(*DAT_01f206d4 + 0x1a0))(DAT_01f206d4,0);
    }
    else {
      iVar3 = (**(code **)(*DAT_01f206d4 + 0x1a0))(DAT_01f206d4,*puVar1);
    }
    if (-1 < iVar3) {
      DAT_01f20594 = puVar1;
    }
  }
  FUN_00f9f750(*(undefined4 *)(param_1 + 0xc4));
  return;
}

// 00FAA810  Hw::cPrimIFT::cPrimIFT  size=134  [class]
void __fastcall Hw::cPrimIFT::cPrimIFT(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 0;
  return;
}

// 00FAAC10  Hw::cPrimIFT::vf00  size=30  [class]
undefined4 __thiscall Hw::cPrimIFT::vf00(undefined4 param_1,byte param_2)

{
  cOtWork::cOtWork_14();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

