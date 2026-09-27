// src/hw/cPrimFTyuv.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A2A6D0..00FA5180, 3 functions

#include "mgrr.h"

// 00A2A6D0  Hw::cPrimFTyuv::cPrimFTyuv  size=57  [class]
undefined4 * __fastcall Hw::cPrimFTyuv::cPrimFTyuv(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c880();
  iVar1 = 2;
  do {
    cTexture::cTexture();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00A35160  Hw::cPrimFTyuv::vf00  size=75  [class]
undefined4 * __thiscall Hw::cPrimFTyuv::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    cTexture::~cTexture();
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

// 00FA5180  Hw::cPrimFTyuv::draw  size=449  [class]
void __fastcall Hw::cPrimFTyuv::draw(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00fa05b0(*(undefined4 *)(param_1 + 0xfc));
  FUN_00f9eec0(&DAT_01f20844,param_1 + 0x10);
  uVar2 = FUN_00fa0740(0);
  FUN_00fa01f0(DAT_01f20860,&DAT_01f20864,uVar2);
  uVar2 = FUN_00fa0740(0);
  FUN_00fa01f0(DAT_01f2086c,&DAT_01f20870,uVar2);
  uVar2 = FUN_00fa0740(0);
  FUN_00fa01f0(DAT_01f20878,&DAT_01f2087c,uVar2);
  if (DAT_018da65c != 1) {
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0x1b,1);
    }
    DAT_018da65c = 1;
  }
  if ((DAT_018da66c != 0) && (DAT_018da66c = 0, DAT_01f206d4 != (int *)0x0)) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xce,0);
  }
  if ((*(byte *)(param_1 + 0x100) & 0x40) == 0) {
    FUN_00f9d890(5,1);
    if (DAT_018da650 != 1) {
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xf,1);
      }
      DAT_018da650 = 1;
    }
    uVar4 = 6;
    uVar2 = 5;
  }
  else {
    uVar4 = 1;
    uVar2 = 2;
  }
  FUN_00f9d970(uVar2,uVar4,1);
  if (DAT_01f20590 != &DAT_01f20810) {
    DAT_01f20590 = &DAT_01f20810;
    DAT_01f2058c = 1;
  }
  if (DAT_01f2059c != &PTR_vftable_018da4d8) {
    DAT_01f2059c = &PTR_vftable_018da4d8;
    DAT_01f20598 = 1;
  }
  iVar1 = param_1 + 0x50;
  if (DAT_01f205a0 != iVar1) {
    iVar3 = FUN_00f98600(0,iVar1);
    if (iVar3 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a0 = iVar1;
    }
  }
  iVar1 = param_1 + 0x78;
  if (DAT_01f205a4 != iVar1) {
    iVar3 = FUN_00f98600(1,iVar1);
    if (iVar3 != 0) {
      DAT_01f20598 = 1;
      DAT_01f205a4 = iVar1;
    }
  }
  FUN_00f9dfb0(*(undefined4 *)(param_1 + 0xf8));
  return;
}

