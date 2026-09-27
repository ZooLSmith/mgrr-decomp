// src/hw/cPrimFTyuva.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A2A710..00FA5350, 3 functions

#include "types.h"

// 00A2A710  Hw::cPrimFTyuva::cPrimFTyuva  size=57  [class]
undefined4 * __fastcall Hw::cPrimFTyuva::cPrimFTyuva(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  iVar1 = 3;
  do {
    cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00A351B0  Hw::cPrimFTyuva::vf00  size=75  [class]
undefined4 * __thiscall Hw::cPrimFTyuva::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  thunk_FUN_00fa45a0();
  *param_1 = cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FA5350  Hw::cPrimFTyuva::vf04  size=356  [class]
void __fastcall Hw::cPrimFTyuva::vf04(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0x11c));
  FUN_00f9eec0(&DAT_01f208b4,param_1 + 0x10);
  FUN_00fa4420(param_1 + 0xa0);
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  if ((DAT_018da66c != 0) && (DAT_018da66c = 0, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xce,0);
  }
  if ((*(byte *)(param_1 + 0x114) & 0x40) == 0) {
    FUN_00f9d890(5,1);
    if (DAT_018da650 != 1) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xf,1);
      }
      DAT_018da650 = 1;
    }
    uVar4 = 6;
    uVar3 = 5;
  }
  else {
    uVar4 = 1;
    uVar3 = 2;
  }
  FUN_00f9d970(uVar3,uVar4,1);
  if (DAT_01f20590 != &DAT_01f20880) {
    DAT_01f20590 = &DAT_01f20880;
    DAT_01f2058c = 1;
  }
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
  FUN_00f9dfb0(*(undefined4 *)(param_1 + 0x118));
  return;
}

