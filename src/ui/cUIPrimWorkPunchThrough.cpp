// src/ui/cUIPrimWorkPunchThrough.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB0190..00CCC880, 2 functions

#include "mgrr.h"
#include "cUIPrimWorkPunchThrough.h"

// 00CB0190  cUIPrimWorkPunchThrough::draw  size=327  [class]
void __fastcall cUIPrimWorkPunchThrough::draw(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00f9e370(0x5864a24f);
  if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
    if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)piVar1[1];
    }
  }
  else {
    uVar2 = *(undefined4 *)*piVar1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00f99d30();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00f99a40();
  }
  FUN_00a33150();
  FUN_00f9d890(5,1);
  FUN_00f9d850(1);
  FUN_00f9da90(1);
  FUN_00f9d970(5,6,1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
  }
  FUN_00fd02b0(param_1 + 0x60);
  FUN_00fd02d0(param_1 + 0xa0);
  FUN_00fd3be0(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  FUN_00fd0310(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  FUN_00fd3c70(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  FUN_00fd02f0(param_1 + 0xb0);
  FUN_00f990e0(&DAT_01dc248c);
  FUN_00f98f80(&DAT_01dc2940);
  FUN_00f99010(0,param_1 + 4);
  FUN_00f99090(param_1 + 0x30);
  FUN_00f9f6d0(4,*(int *)(param_1 + 0x54) * 2);
  return;
}

// 00CCC880  cUIPrimWorkPunchThrough::vf00  size=47  [class]
undefined4 * __thiscall cUIPrimWorkPunchThrough::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

