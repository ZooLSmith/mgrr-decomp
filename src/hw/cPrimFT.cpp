// src/hw/cPrimFT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A2A6B0..00FA5050, 3 functions

#include "mgrr.h"

// 00A2A6B0  Hw::cPrimFT::cPrimFT  size=29  [class]
undefined4 * __fastcall Hw::cPrimFT::cPrimFT(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  return param_1;
}

// 00A35130  Hw::cPrimFT::vf00  size=47  [class]
undefined4 * __thiscall Hw::cPrimFT::vf00(undefined4 *param_1,byte param_2)

{
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FA5050  Hw::cPrimFT::draw  size=300  [class]
void __fastcall Hw::cPrimFT::draw(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0xa8));
  FUN_00f9eec0(&DAT_01f20794,param_1 + 0x10);
  FUN_00fa01f0(DAT_01f207b0,&DAT_01f207b4,*(undefined4 *)(param_1 + 0xa0));
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  if ((*(byte *)(param_1 + 0xac) & 0x40) == 0) {
    uVar4 = 6;
    uVar3 = 5;
  }
  else {
    uVar4 = 1;
    uVar3 = 2;
  }
  FUN_00f9d970(uVar3,uVar4,1);
  if ((*(byte *)(param_1 + 0xac) & 0x80) == 0) {
    if (DAT_01f20590 == &DAT_01f20760) goto LAB_00fa5106;
    DAT_01f20590 = &DAT_01f20760;
  }
  else {
    if (DAT_01f20590 == &DAT_01f207b8) goto LAB_00fa5106;
    DAT_01f20590 = &DAT_01f207b8;
  }
  DAT_01f2058c = 1;
LAB_00fa5106:
  if (DAT_01f2059c != &PTR_vftable_018da4d8) {
    DAT_01f2059c = &PTR_vftable_018da4d8;
    DAT_01f20598 = 1;
  }
  iVar1 = param_1 + 0x50;
  if (DAT_01f205a0 != iVar1) {
    iVar2 = FUN_00f98600(0,iVar1);
    if (iVar2 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar1;
    }
  }
  iVar1 = param_1 + 0x78;
  if (DAT_01f205a4 != iVar1) {
    iVar2 = FUN_00f98600(1,iVar1);
    if (iVar2 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a4 = iVar1;
    }
  }
  FUN_00f9dfb0(*(undefined4 *)(param_1 + 0xa4));
  return;
}

