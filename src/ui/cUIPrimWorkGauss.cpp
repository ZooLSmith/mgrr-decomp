// src/ui/cUIPrimWorkGauss.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCC500..00CCC5E0, 3 functions

#include "mgrr.h"
#include "cUIPrimWorkGauss.h"

// 00CCC500  cUIPrimWorkGauss::cUIPrimWorkGauss  size=84  [class]
undefined4 * __fastcall cUIPrimWorkGauss::cUIPrimWorkGauss(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 1;
  do {
    FUN_00f9c880();
    FUN_00f9c7b0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x3c] = 0x40a00000;
  param_1[0x3f] = 0x3f800000;
  param_1[0x40] = 0x3f800000;
  param_1[0x41] = 0x3f800000;
  param_1[0x42] = 0x3f800000;
  return param_1;
}

// 00CCC590  cUIPrimWorkGauss::vf00  size=67  [class]
undefined4 * __thiscall cUIPrimWorkGauss::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_00fa5be0();
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCC5E0  cUIPrimWorkGauss::vf04  size=498  [class]
void __fastcall cUIPrimWorkGauss::vf04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_60 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_54 = 0x3f800000;
  iVar3 = 2;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0x98) != 0) {
      FUN_00f99d30();
    }
    if (*(int *)(iVar1 + 0x9c) != 0) {
      FUN_00f99a40();
    }
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 0x50;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_00f9d760(0);
    FUN_00a28070(local_50,0,0x477fff00);
    FUN_00fa1ed0(local_50);
    FUN_00f9d850(1);
    FUN_00f9d890(5,1);
    FUN_00f9d970(5,6,1);
    FUN_00f9da00(5,7,1);
    iVar1 = FUN_00f98ed0(0);
    FUN_00eb9070(DAT_01b83bd4,1);
    FUN_00a28210(DAT_01b83be0,0,0,1);
    uVar2 = FUN_00fa0740(0);
    FUN_00fcfeb0(param_1 + 0x10);
    FUN_00fcfed0(&local_60);
    FUN_00fd3320(uVar2,*(undefined4 *)(param_1 + 0xf0),0);
    FUN_00f990e0(&DAT_01dc2374);
    FUN_00f98f80(&DAT_01dc2940);
    FUN_00f99010(0,param_1 + 0x50);
    FUN_00f99090(param_1 + 0x78);
    FUN_00f9f750(4);
    FUN_00a33150();
    if (iVar1 != 0) {
      FUN_00a28210(iVar1,0,0,1);
    }
    uVar2 = FUN_00fa0740(0);
    FUN_00fcfeb0(param_1 + 0x10);
    FUN_00fcfed0(param_1 + 0xfc);
    FUN_00fd3320(uVar2,*(undefined4 *)(param_1 + 0xf0),1);
    FUN_00f990e0(&DAT_01dc2374);
    FUN_00f98f80(&DAT_01dc2940);
    FUN_00f99010(0,param_1 + 0xa0);
    FUN_00f99090(param_1 + 200);
    FUN_00f9f750(4);
  }
  return;
}

