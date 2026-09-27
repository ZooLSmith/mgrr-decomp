// src/ui/cUIPrimWorkScreenSlide.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB0340..00CCCAB0, 4 functions

#include "mgrr.h"
#include "cUIPrimWorkScreenSlide.h"

// 00CB0340  cUIPrimWorkScreenSlide::cUIPrimWorkScreenSlide  size=87  [class]
undefined4 * __fastcall cUIPrimWorkScreenSlide::cUIPrimWorkScreenSlide(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x2a] = 0;
  param_1[0x14] = 1;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return param_1;
}

// 00CCC920  cUIPrimWorkScreenSlide::vf00  size=50  [class]
undefined4 * __thiscall cUIPrimWorkScreenSlide::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCC960  FUN_00ccc960  size=322  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ccc960(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _DAT_01dc2050;
  local_c = _DAT_01dc2050;
  local_8 = _DAT_01dc2050;
  local_4 = _DAT_01dc2050;
  FUN_00eb9070(DAT_01b83bd8,1);
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar5 = 1;
  uVar1 = FUN_00fa0740(0);
  FUN_00fd30b0(uVar1,uVar3,uVar5);
  FUN_00fcfd10(param_1 + 0xa8);
  FUN_00fcfd30(param_1 + 0xb0);
  FUN_00fcfd50(param_1 + 0xb8);
  FUN_00fcfcf0(&local_10);
  FUN_00fcfcd0(param_1 + 0x10);
  iVar2 = FUN_00f98a90();
  local_18 = -0.5 / (float)iVar2;
  iVar2 = FUN_00f98aa0();
  local_14 = -0.5 / (float)iVar2;
  FUN_00fcfd70(&local_18);
  if (*(int *)(param_1 + 0xa4) == 5) {
    if (DAT_01b83bdc == 0) goto LAB_00ccca7c;
  }
  else if (*(int *)(param_1 + 0xa4) != 10) {
LAB_00ccca7c:
    piVar4 = (int *)FUN_00f9e370(0x5864a24f);
    if ((undefined4 *)*piVar4 == (undefined4 *)0x0) {
      if ((undefined4 *)piVar4[1] == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)piVar4[1];
      }
    }
    else {
      uVar3 = *(undefined4 *)*piVar4;
    }
    goto LAB_00ccca53;
  }
  uVar3 = FUN_00fa0740(0);
LAB_00ccca53:
  FUN_00fd3200(uVar3,1);
  FUN_00f990e0(&DAT_01dc24fc);
  return;
}

// 00CCCAB0  cUIPrimWorkScreenSlide::vf04  size=202  [class]
void __fastcall cUIPrimWorkScreenSlide::vf04(int param_1)

{
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00f99d30();
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00f99a40();
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_00f9d760(0);
    FUN_00a28070(local_50,0,0x477fff00);
    FUN_00fa1ed0(local_50);
    FUN_00f9d970(5,6,1);
    FUN_00f9d890(8,1);
    FUN_00f9d850(1);
    FUN_00f9da00(5,7,1);
    FUN_00ccc960();
    FUN_00f98f80(&DAT_01dc2940);
    FUN_00f99010(0,param_1 + 0x5c);
    FUN_00f99090(param_1 + 0x84);
    FUN_00f9f750(5);
  }
  return;
}

