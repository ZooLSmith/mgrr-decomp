// src/misc/cTitleStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00995250..009B6670, 9 functions

#include "mgrr.h"
#include "cTitleStart.h"

// 00995250  cTitleStart::cTitleStart  size=105  [class]
undefined4 * __fastcall cTitleStart::cTitleStart(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  iVar1 = 3;
  do {
    Hw::cTexture::cTexture_6();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  DAT_01bea060 = DAT_01bea060 | 0x100;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0x3f800000;
  return param_1;
}

// 009952C0  cTitleStart::~cTitleStart  size=84  [class]
void __fastcall cTitleStart::~cTitleStart(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  DAT_01bea060 = DAT_01bea060 & 0xfffffeff;
  DAT_01b3920c = 0;
  thunk_FUN_00dfbaa0(param_1[0xf]);
  FUN_00cfdc10();
  iVar1 = 3;
  do {
    Hw::cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 00995320  FUN_00995320  size=68  [callgraph]
int FUN_00995320(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xcc,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cTitleStart::cTitleStart();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cTitleStart";
      FUN_00d29ca0(0x73,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 00995390  FUN_00995390  size=27  [callgraph]
void __fastcall FUN_00995390(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 6;
  DAT_01b3920c = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_00ce4d70(0);
  return;
}

// 009953B0  FUN_009953b0  size=11  [callgraph]
void __fastcall FUN_009953b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 1;
  return;
}

// 009953C0  FUN_009953c0  size=88  [callgraph]
void __fastcall FUN_009953c0(int param_1)

{
  if (DAT_01dc1418 != '\0') {
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"TITEL_SEL_21",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),"TITEL_SEL_21",0,0xffffffff);
    return;
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"TITEL_SEL_01",0,0xffffffff);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),"TITEL_SEL_01",0,0xffffffff);
  return;
}

// 009A71F0  cTitleStart::vf00  size=30  [class]
undefined4 __thiscall cTitleStart::vf00(undefined4 param_1,byte param_2)

{
  ~cTitleStart();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A7220  cTitleStart::vf14  size=629  [class]
void __fastcall cTitleStart::vf14(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
    iVar3 = FUN_00a4d630();
    if ((iVar3 != 0) && (DAT_01b3920c != 0)) {
      thunk_FUN_00dfba30(*(undefined4 *)(param_1 + 0x3c));
      FUN_00cb2600(1);
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x38) = 2;
      *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
      return;
    }
    break;
  case 2:
    iVar3 = FUN_00a4d630();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 3;
      FUN_009c5840();
      return;
    }
    break;
  case 3:
    if (*(uint *)(param_1 + 200) != (uint)DAT_01dc1418) {
      FUN_009953c0();
      *(uint *)(param_1 + 200) = (uint)DAT_01dc1418;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar2 = FUN_00e5e050("core_se_sys_title_start",0);
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
      FUN_00ce4d70(1);
      *(undefined4 *)(param_1 + 0x38) = 4;
      return;
    }
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 0xbc) - 0.083333336;
    *(float *)(param_1 + 0xbc) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xbc);
    FUN_00a28400(*(undefined4 *)(param_1 + 0xbc));
    iVar3 = FUN_00ce4dd0(1);
    if ((iVar3 != 0) && (*(float *)(param_1 + 0xbc) <= 0.0)) {
      FUN_00cb2740(0);
      *(undefined4 *)(param_1 + 0x38) = 5;
      return;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0xc4) == 0) {
      uVar2 = 0x3f800000;
      if (*(float *)(param_1 + 0xbc) == 1.0) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0xbc) + 0.083333336;
      *(float *)(param_1 + 0xbc) = fVar1;
      if (fVar1 <= 1.0) goto LAB_009a73ec;
    }
    else {
      uVar2 = 0;
      if (*(float *)(param_1 + 0xbc) == 0.0) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0xbc) - 0.083333336;
      *(float *)(param_1 + 0xbc) = fVar1;
      if (0.0 <= fVar1) goto LAB_009a73ec;
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
LAB_009a73ec:
    FUN_00a28400(*(undefined4 *)(param_1 + 0xbc));
    return;
  case 6:
    fVar1 = *(float *)(param_1 + 0xb8) + 0.083333336;
    *(float *)(param_1 + 0xb8) = fVar1;
    if (fVar1 <= *(float *)(param_1 + 0xbc)) {
      fVar1 = *(float *)(param_1 + 0xbc);
    }
    *(float *)(param_1 + 0xbc) = fVar1;
    FUN_00a28400(fVar1);
    FUN_00cb2740(*(undefined4 *)(param_1 + 0xb8));
    if (1.0 < *(float *)(param_1 + 0xb8)) {
      *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
      FUN_00a28400(*(undefined4 *)(param_1 + 0xbc));
      FUN_00cb2740(*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0x38) = 3;
      DAT_01b3920c = 1;
      FUN_009c5840();
      return;
    }
  }
  return;
}

// 009B6670  cTitleStart::vf08  size=417  [class]
void __fastcall cTitleStart::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(0x33);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0x36);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  iVar2 = FUN_00dec390("movie_ui/Title_Alpha.usm");
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_01658054);
  }
  else {
    local_78 = 0xbf800000;
    local_74 = 0xbf800000;
    local_70 = 0xbf800000;
    local_6c = 0xbf800000;
    local_44 = 0;
    local_40 = 0;
    local_68 = 0;
    local_48 = 0xf;
    local_64 = 0;
    local_5c = 0;
    local_58 = 0;
    local_60 = 0x3f800000;
    local_54 = 0x3f800000;
    local_50 = 0x3f800000;
    local_4c = 0x3f800000;
    uVar1 = thunk_FUN_00dfc8e0("movie_ui/Title_Alpha.usm",&local_78,&DAT_01b7ddc0);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
  }
  FUN_00cb2630(1);
  FUN_00cb2600(0);
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
    FUN_00a28400(0x3f800000);
    thunk_FUN_00dfba30(*(undefined4 *)(param_1 + 0x3c));
    FUN_00cb2600(1);
    FUN_00cb2740(*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0x38) = 5;
  }
  if (DAT_01dc1418 == 0) {
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"TITEL_SEL_01",0,0xffffffff);
    pcVar3 = "TITEL_SEL_01";
  }
  else {
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"TITEL_SEL_21",0,0xffffffff);
    pcVar3 = "TITEL_SEL_21";
  }
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),pcVar3,0,0xffffffff);
  *(uint *)(param_1 + 200) = (uint)DAT_01dc1418;
  return;
}

