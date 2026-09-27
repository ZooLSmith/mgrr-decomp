// src/misc/cTouchArea.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00982760..009837B0, 6 functions

#include "types.h"

// 00982760  cTouchArea::vf00  size=31  [class]
undefined4 * __thiscall cTouchArea::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00982780  cTouchArea::cTouchArea_3  size=24  [class]
void __fastcall cTouchArea::cTouchArea_3(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0xd] = 1;
  param_1[3] = 0;
  param_1[0xe] = 0;
  return;
}

// 009827A0  FUN_009827a0  size=69  [between]
undefined4 __thiscall FUN_009827a0(int param_1,float param_2,float param_3)

{
  if (((*(byte *)(param_1 + 8) & 1) != 0) &&
     ((((param_2 < *(float *)(param_1 + 0x18) || (*(float *)(param_1 + 0x20) <= param_2)) ||
       (param_3 < *(float *)(param_1 + 0x1c))) || (*(float *)(param_1 + 0x24) <= param_3)))) {
    return 0;
  }
  return 1;
}

// 00982880  cTouchArea::cTouchArea_2  size=99  [class]
void __thiscall cTouchArea::cTouchArea_2(undefined4 *param_1,int param_2)

{
  *param_1 = vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  return;
}

// 00982AB0  FUN_00982ab0  size=282  [callgraph]
uint __thiscall FUN_00982ab0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  byte extraout_DL;
  byte bVar3;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    bVar3 = (byte)DAT_01b7b79c;
    if ((((byte)DAT_01b7b79c & 1) != 0) &&
       (iVar1 = FUN_009827a0(param_2,param_3), param_1 = extraout_ECX, bVar3 = extraout_DL,
       iVar1 != 0)) {
      *(undefined4 *)(extraout_ECX + 0x10) = 1;
      return *(uint *)(extraout_ECX + 0x10);
    }
    if (((bVar3 & 2) != 0) &&
       (iVar1 = FUN_009827a0(param_2,param_3), param_1 = extraout_ECX_00, iVar1 != 0)) {
      *(undefined4 *)(extraout_ECX_00 + 0x10) = 3;
      return *(uint *)(extraout_ECX_00 + 0x10);
    }
    break;
  case 1:
  case 2:
    if (((byte)DAT_01b7b798 & 1) != 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        *(undefined4 *)(param_1 + 0x10) = 2;
        return *(uint *)(param_1 + 0x10);
      }
      iVar1 = FUN_009827a0(param_2,param_3);
      uVar2 = -(uint)(iVar1 != 0) & 2;
      *(uint *)(extraout_ECX_01 + 0x10) = uVar2;
      return uVar2;
    }
    break;
  case 3:
  case 4:
    if (((byte)DAT_01b7b798 & 2) != 0) {
      if (*(int *)(param_1 + 0xc) != 0) {
        *(undefined4 *)(param_1 + 0x10) = 4;
        return *(uint *)(param_1 + 0x10);
      }
      iVar1 = FUN_009827a0(param_2,param_3);
      uVar2 = -(uint)(iVar1 != 0) & 4;
      *(uint *)(extraout_ECX_02 + 0x10) = uVar2;
      return uVar2;
    }
    break;
  default:
    goto switchD_00982acd_default;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
switchD_00982acd_default:
  return *(uint *)(param_1 + 0x10);
}

// 009837B0  cTouchArea::cTouchArea  size=277  [class]
undefined4 __thiscall
cTouchArea::cTouchArea
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  int iVar1;
  undefined **local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  local_3c = vftable;
  local_8 = 1;
  local_30 = 0;
  local_4 = 0;
  do {
    if (iVar1 == *(int *)(param_1 + 0x1c)) {
      if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x10)) {
        FUN_00dd5650(&DAT_016527b8);
        return 0xffffffff;
      }
      local_38 = param_2;
      local_24 = param_3;
      local_20 = param_4;
      local_30 = param_7;
      local_1c = param_5;
      local_18 = param_6;
      local_14 = 0;
      local_2c = 0;
      local_10 = 0;
      local_34 = 1;
      local_c = 0;
      local_8 = 1;
      cFixedList::insert_4(&param_7,param_1 + 0x1c,&local_3c);
LAB_009838b9:
      return *(undefined4 *)(param_1 + 0x10);
    }
    if (*(int *)(iVar1 + 4) == param_2) {
      if (param_8 == 1) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      *(undefined4 *)(iVar1 + 0x18) = param_3;
      *(undefined4 *)(iVar1 + 8) = 1;
      *(undefined4 *)(iVar1 + 0xc) = param_7;
      *(undefined4 *)(iVar1 + 0x1c) = param_4;
      *(undefined4 *)(iVar1 + 0x20) = param_5;
      *(undefined4 *)(iVar1 + 0x24) = param_6;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      if (param_9 == 1) {
        *(undefined4 *)(iVar1 + 0x34) = 1;
        return *(undefined4 *)(param_1 + 0x10);
      }
      goto LAB_009838b9;
    }
    iVar1 = *(int *)(iVar1 + 0x40);
  } while( true );
}

