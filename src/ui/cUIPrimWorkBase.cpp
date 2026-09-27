// src/ui/cUIPrimWorkBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCAA70..00CCBA80, 16 functions

#include "mgrr.h"
#include "cUIPrimWorkBase.h"

// 00CCAA70  cUIPrimWorkBase::cUIPrimWorkBase  size=235  [class]
undefined4 * __fastcall cUIPrimWorkBase::cUIPrimWorkBase(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  FUN_00f9c7b0();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 1;
  param_1[0x1e] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x35] = 0;
  param_1[0x39] = 0;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  iVar1 = FUN_00f98a90();
  param_1[0x36] = -0.5 / (float)iVar1;
  iVar1 = FUN_00f98aa0();
  param_1[0x3a] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0xffffffff;
  param_1[0x37] = -0.5 / (float)iVar1;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  return param_1;
}

// 00CCAB60  cUIPrimWorkBase::vf10  size=3  [class]
undefined4 cUIPrimWorkBase::vf10(void)

{
  return 0;
}

// 00CCAB70  cUIPrimWorkBase::vf00  size=53  [class]
undefined4 * __thiscall cUIPrimWorkBase::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCABB0  FUN_00ccabb0  size=81  [between]
void __thiscall
FUN_00ccabb0(int param_1,void *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00dd5650(&DAT_016b79e8);
  }
  *(undefined4 *)(param_1 + 0x78) = param_4;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  *(undefined4 *)(param_1 + 0xe0) = param_5;
  FID_conflict__memcpy((void *)(param_1 + 0x20),param_2,0x40);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - 1.0;
  return;
}

// 00CCAC10  FUN_00ccac10  size=131  [between]
void __thiscall
FUN_00ccac10(int *param_1,void *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  param_1[0x1e] = param_5;
  param_1[0x1c] = param_4;
  param_1[0x38] = param_6;
  if (param_1[0x19] == 0) {
    FUN_00dd5650(&DAT_016b7a58);
  }
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 <= param_3) {
    FUN_00dd5650(&DAT_016b7a24);
    return;
  }
  param_3 = param_3 * 0x40;
  FID_conflict__memcpy((void *)(param_1[0x18] + param_3),param_2,0x40);
  *(float *)(param_3 + 0x34 + param_1[0x18]) = *(float *)(param_3 + 0x34 + param_1[0x18]) - 1.0;
  return;
}

// 00CCACA0  FUN_00ccaca0  size=305  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccaca0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = (float)param_1[0x1f];
  local_c = (float)param_1[0x20];
  local_8 = (float)param_1[0x21];
  local_4 = (float)param_1[0x22];
  if (param_1[0x1c] != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = local_8 * _DAT_01dc2058;
    local_4 = local_4 * _DAT_01dc205c;
  }
  FUN_00fd1aa0(param_1[0x1a],param_1[0x1d],param_1[0x1b]);
  FUN_00fd1bf0(param_2,param_1[0x1d]);
  FUN_00fcec30(&local_10);
  if (param_1[0x19] == 0) {
    FUN_00fcec10(param_1 + 8);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x10))();
    FUN_00fd04d0(param_1[0x18],uVar1);
  }
  FUN_00fcec50(&local_18);
  FUN_00fcec70(param_1 + 0x36);
  FUN_00fcec90(param_1[0x38]);
  FUN_00fced00(param_1[0x49]);
  FUN_00f990e0(&DAT_01dc2060);
  return;
}

// 00CCADE0  FUN_00ccade0  size=274  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccade0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 1.0;
  local_c = 1.0;
  local_8 = 1.0;
  local_4 = 1.0;
  FUN_00eb9070(DAT_01b83bd8,1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fd38e0(uVar1);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = _DAT_01dc2058 * local_8;
    local_4 = _DAT_01dc205c * local_4;
  }
  FUN_00fd36e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd3830(param_2,*(undefined4 *)(param_1 + 0x74));
  FUN_00fd00a0(&local_10);
  FUN_00fd0080(param_1 + 0x20);
  FUN_00fd00c0(&local_18);
  FUN_00fd00e0(param_1 + 0xd8);
  FUN_00fd0100(*(undefined4 *)(param_1 + 0xe0));
  FUN_00f990e0(&DAT_01dc2100);
  return;
}

// 00CCAF10  FUN_00ccaf10  size=274  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccaf10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 1.0;
  local_c = 1.0;
  local_8 = 1.0;
  local_4 = 1.0;
  FUN_00eb9070(DAT_01b83bd8,1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fd2d90(uVar1);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = _DAT_01dc2058 * local_8;
    local_4 = _DAT_01dc205c * local_4;
  }
  FUN_00fd2b90(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd2ce0(param_2,*(undefined4 *)(param_1 + 0x74));
  FUN_00fcfa50(&local_10);
  FUN_00fcfa30(param_1 + 0x20);
  FUN_00fcfa70(&local_18);
  FUN_00fcfa90(param_1 + 0xd8);
  FUN_00fcfab0(*(undefined4 *)(param_1 + 0xe0));
  FUN_00f990e0(&DAT_01dc21a0);
  return;
}

// 00CCB030  FUN_00ccb030  size=274  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccb030(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 1.0;
  local_c = 1.0;
  local_8 = 1.0;
  local_4 = 1.0;
  FUN_00eb9070(DAT_01b83bd8,1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fd3020(uVar1);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = _DAT_01dc2058 * local_8;
    local_4 = _DAT_01dc205c * local_4;
  }
  FUN_00fd2e20(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd2f70(param_2,*(undefined4 *)(param_1 + 0x74));
  FUN_00fcfba0(&local_10);
  FUN_00fcfb80(param_1 + 0x20);
  FUN_00fcfbc0(&local_18);
  FUN_00fcfbe0(param_1 + 0xd8);
  FUN_00fcfc00(*(undefined4 *)(param_1 + 0xe0));
  FUN_00f990e0(&DAT_01dc2240);
  return;
}

// 00CCB150  FUN_00ccb150  size=273  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccb150(int param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = *(float *)(param_1 + 0x7c);
  local_c = *(float *)(param_1 + 0x80);
  local_8 = *(float *)(param_1 + 0x84);
  local_4 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = local_8 * _DAT_01dc2058;
    local_4 = local_4 * _DAT_01dc205c;
  }
  FUN_00fd1ca0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd1df0(param_2,*(undefined4 *)(param_1 + 0x74));
  FUN_00fcedb0(&local_10);
  FUN_00fced90(param_1 + 0x20);
  FUN_00fcedd0(&local_18);
  FUN_00fcedf0(param_1 + 0xd8);
  FUN_00fccb80(*(undefined4 *)(param_1 + 0xe0));
  FUN_00fcee10(*(undefined4 *)(param_1 + 0x124));
  FUN_00f990e0(&DAT_01dc22e0);
  return;
}

// 00CCB270  FUN_00ccb270  size=414  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccb270(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_10 = *(float *)(param_1 + 0x7c);
  local_c = *(float *)(param_1 + 0x80);
  local_8 = *(float *)(param_1 + 0x84);
  local_4 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = local_8 * _DAT_01dc2058;
    local_4 = local_4 * _DAT_01dc205c;
  }
  FUN_00fd1ea0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd1ff0(param_2,*(undefined4 *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0xe8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = -(uint)(DAT_01dc2d0c != 0) & DAT_01dc2d08;
  }
  FUN_00fd20a0(uVar1,1);
  FUN_00fceec0(&local_10);
  FUN_00fceea0(param_1 + 0x20);
  FUN_00fceee0(&local_20);
  FUN_00fcef00(param_1 + 0xd8);
  FUN_00fcef20(*(undefined4 *)(param_1 + 0xe0));
  FUN_00fcef90(*(undefined4 *)(param_1 + 0x124));
  FUN_00fcefe0(*(int *)(param_1 + 0x11c) != 0);
  local_14 = *(float *)(param_1 + 0xf0) / (float)*(int *)(*(int *)(param_1 + 0x68) + 0xc);
  local_18 = *(float *)(param_1 + 0xec) / (float)*(int *)(*(int *)(param_1 + 0x68) + 8);
  FUN_00fcefc0(&local_18);
  if ((DAT_01dc2d0c != 0) && (DAT_01dc2d08 != 0)) {
    FUN_00fcf010(*(undefined4 *)(DAT_01dc2d08 + 8),*(undefined4 *)(DAT_01dc2d08 + 0xc));
  }
  FUN_00f990e0(&DAT_01dc259c);
  return;
}

// 00CCB410  FUN_00ccb410  size=427  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccb410(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_10 = *(float *)(param_1 + 0x7c);
  local_c = *(float *)(param_1 + 0x80);
  local_8 = *(float *)(param_1 + 0x84);
  local_4 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = local_8 * _DAT_01dc2058;
    local_4 = local_4 * _DAT_01dc205c;
  }
  FUN_00fd2150(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd22a0(param_2,*(undefined4 *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0xe8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = -(uint)(DAT_01dc2d0c != 0) & DAT_01dc2d08;
  }
  FUN_00fd2350(uVar1,1);
  FUN_00fcf0e0(&local_10);
  FUN_00fcf0c0(param_1 + 0x20);
  FUN_00fcf100(&local_20);
  FUN_00fcf120(param_1 + 0xd8);
  FUN_00fcf140(*(undefined4 *)(param_1 + 0xe0));
  FUN_00fcf1b0(*(undefined4 *)(param_1 + 0x124));
  FUN_00fcf200(*(int *)(param_1 + 0x11c) != 0);
  local_14 = *(float *)(param_1 + 0xf0) / (float)*(int *)(*(int *)(param_1 + 0x68) + 0xc);
  local_18 = *(float *)(param_1 + 0xec) / (float)*(int *)(*(int *)(param_1 + 0x68) + 8);
  FUN_00fcf1e0(&local_18);
  FUN_00fcf230(*(undefined4 *)((-(uint)(DAT_01dc2d0c != 0) & DAT_01dc2d08) + 8),
               *(undefined4 *)((-(uint)(DAT_01dc2d0c != 0) & DAT_01dc2d08) + 0xc));
  FUN_00f990e0(&DAT_01dc266c);
  return;
}

// 00CCB5C0  FUN_00ccb5c0  size=317  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccb5c0(int param_1,undefined4 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_10 = *(float *)(param_1 + 0x7c);
  local_c = *(float *)(param_1 + 0x80);
  local_8 = *(float *)(param_1 + 0x84);
  local_4 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = local_8 * _DAT_01dc2058;
    local_4 = local_4 * _DAT_01dc205c;
  }
  FUN_00fd2400(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd2550(param_2,*(undefined4 *)(param_1 + 0x74));
  FUN_00fcf300(&local_10);
  FUN_00fcf2e0(param_1 + 0x20);
  FUN_00fcf320(&local_20);
  FUN_00fcf340(param_1 + 0xd8);
  FUN_00fcf360(*(undefined4 *)(param_1 + 0xe0));
  FUN_00fcf3d0(*(undefined4 *)(param_1 + 0x124));
  local_14 = *(float *)(param_1 + 0xf0) / (float)*(int *)(*(int *)(param_1 + 0x68) + 0xc);
  local_18 = *(float *)(param_1 + 0xec) / (float)*(int *)(*(int *)(param_1 + 0x68) + 8);
  FUN_00fcf400(&local_18);
  FUN_00f990e0(&DAT_01dc273c);
  return;
}

// 00CCB700  FUN_00ccb700  size=317  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ccb700(int param_1,undefined4 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_10 = *(float *)(param_1 + 0x7c);
  local_c = *(float *)(param_1 + 0x80);
  local_8 = *(float *)(param_1 + 0x84);
  local_4 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = _DAT_01dc2054 * local_c;
    local_8 = local_8 * _DAT_01dc2058;
    local_4 = local_4 * _DAT_01dc205c;
  }
  FUN_00fd2600(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x6c));
  FUN_00fd2750(param_2,*(undefined4 *)(param_1 + 0x74));
  FUN_00fcf4a0(&local_10);
  FUN_00fcf480(param_1 + 0x20);
  FUN_00fcf4c0(&local_20);
  FUN_00fcf4e0(param_1 + 0xd8);
  FUN_00fcf500(*(undefined4 *)(param_1 + 0xe0));
  FUN_00fcf570(*(undefined4 *)(param_1 + 0x124));
  local_14 = *(float *)(param_1 + 0xf0) / (float)*(int *)(*(int *)(param_1 + 0x68) + 0xc);
  local_18 = *(float *)(param_1 + 0xec) / (float)*(int *)(*(int *)(param_1 + 0x68) + 8);
  FUN_00fcf5a0(&local_18);
  FUN_00f990e0(&DAT_01dc27e8);
  return;
}

// 00CCB840  FUN_00ccb840  size=568  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ccb840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_20 = 0;
  local_1c = 0;
  uVar3 = 0x484b51b5;
  local_28 = 8.0;
  local_24 = 8.0;
  local_10 = *(float *)(param_1 + 0x7c);
  local_c = *(float *)(param_1 + 0x80);
  local_8 = *(float *)(param_1 + 0x84);
  local_4 = *(float *)(param_1 + 0x88);
  FUN_00eaf7d0(0x484b51b5);
  iVar1 = FUN_00fa0740(uVar3);
  if (iVar1 != 0) {
    local_28 = (float)*(int *)(iVar1 + 8);
    local_24 = (float)*(int *)(iVar1 + 0xc);
  }
  if (*(int *)(param_1 + 0x70) != 2) {
    local_10 = _DAT_01dc2050 * local_10;
    local_c = local_c * _DAT_01dc2054;
    local_8 = local_8 * _DAT_01dc2058;
    local_4 = local_4 * _DAT_01dc205c;
  }
  if (((byte)DAT_01bea060 & 0x80) == 0) {
    local_10 = _DAT_01dc2020 * local_10;
    local_c = local_c * _DAT_01dc2024;
    local_8 = local_8 * _DAT_01dc2028;
    local_4 = local_4 * _DAT_01dc202c;
  }
  FUN_00fd2800(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = 0x484b51b5;
  FUN_00eaf7d0(0x484b51b5,uVar3);
  uVar2 = FUN_00fa0740(uVar2);
  FUN_00fd2890(uVar2,uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = 0x3f4c6123;
  FUN_00eaf7d0(0x3f4c6123,uVar3);
  uVar2 = FUN_00fa0740(uVar2);
  FUN_00fd2930(uVar2,uVar3);
  FUN_00fcf640(&local_10);
  FUN_00fcf620(param_1 + 0x20);
  FUN_00fcf660(&local_20);
  FUN_00fcf680(param_1 + 0xd8);
  FUN_00fcf6a0(*(undefined4 *)(param_1 + 0x124));
  local_2c = *(float *)(param_1 + 0xf0) / (float)*(int *)(*(int *)(param_1 + 0x68) + 0xc);
  local_30 = *(float *)(param_1 + 0xec) / (float)*(int *)(*(int *)(param_1 + 0x68) + 8);
  FUN_00fcf6d0(&local_30);
  iVar1 = FUN_00f98a90();
  local_30 = (float)iVar1 / local_28;
  iVar1 = FUN_00f98aa0();
  local_14 = (float)iVar1 / local_24;
  local_18 = local_30;
  FUN_00fcf710(&local_18);
  local_18 = *(float *)(param_1 + 0x108);
  local_14 = *(float *)(param_1 + 0x10c);
  FUN_00fcf6f0(&local_18);
  FUN_00f990e0(&DAT_01dc2894);
  return;
}

// 00CCBA80  cUIPrimWorkBase::draw  size=1411  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cUIPrimWorkBase::draw(int *param_1)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_30 [48];
  
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  local_44 = param_1[3];
  bVar1 = false;
  bVar3 = false;
  puVar2 = (undefined *)0x0;
  local_40 = 0xffffff;
  FUN_00f9d760(param_1[0x49]);
  if (param_1[0x39] != 0) {
    if (param_1[1] != 0) {
      FUN_00f99d30();
    }
    if (param_1[2] != 0) {
      FUN_00f99a40();
    }
    param_1[0x39] = 0;
  }
  if ((param_1[0x1e] != 0) ||
     (((iVar6 = FUN_00f96e50(), iVar6 != 0 && (iVar6 = FUN_00f96f20(), iVar6 != 0)) &&
      (iVar6 = (**(code **)(*param_1 + 0xc))(), iVar6 != 0)))) {
    iVar6 = param_1[0x47];
    if (iVar6 != param_1[0x48]) {
      if (param_1[0x46] == 0) {
        puVar10 = DAT_01f6c7a8;
        if ((iVar6 != 2) && (iVar6 != 3)) {
          if (iVar6 == 1) {
            puVar10 = &DAT_01dc2b80;
          }
          else {
            puVar10 = &DAT_01dc2c80;
          }
        }
      }
      else {
        puVar10 = &DAT_01dc2c40;
      }
      FUN_00fa1ed0(puVar10);
      iVar6 = param_1[0x47];
      param_1[0x48] = iVar6;
    }
    puVar10 = (undefined *)0x0;
    switch(param_1[0x1e]) {
    case 1:
      bVar1 = true;
      puVar10 = DAT_01b83bdc;
      break;
    case 2:
    case 4:
      puVar10 = DAT_01b83bdc;
      break;
    case 3:
      bVar1 = true;
      local_40 = 0xffffffff;
      puVar10 = DAT_01b83bdc;
      break;
    case 5:
      puVar2 = DAT_01b83bdc;
      break;
    case 6:
      bVar1 = true;
      puVar10 = &DAT_01be0bb0;
      break;
    case 7:
    case 9:
      puVar10 = &DAT_01be0bb0;
      break;
    case 8:
      bVar1 = true;
      local_40 = 0xffffffff;
      puVar10 = &DAT_01be0bb0;
      break;
    case 10:
      puVar2 = &DAT_01be0bb0;
      break;
    default:
      puVar10 = (undefined *)0x0;
    }
    if (((iVar6 != 3) && (param_1[0x44] != 1)) &&
       ((param_1[0x45] != 1 &&
        ((puVar10 != (undefined *)0x0 && (puVar7 = (undefined *)FUN_00f98ed0(0), puVar7 != puVar10))
        )))) {
      bVar3 = true;
      FUN_00f9bf20(local_30);
      FUN_00a28210(puVar10,0,0,1);
      if (bVar1) {
        FUN_00f98b60(local_40,0x3f800000,0,1);
      }
    }
    FUN_00f9d890(5,1);
    FUN_00f9d850(1);
    switch(param_1[0x1e]) {
    case 2:
    case 7:
      FUN_00f9da90(0);
      FUN_00f9d970(5,6,1);
      FUN_00f9da00(5,6,1);
      break;
    default:
      switch(param_1[0x1c]) {
      case 0:
        FUN_00f9d970(5,6,1);
        break;
      case 1:
        FUN_00f9db30(0);
        FUN_00f9d970(5,2,1);
        break;
      case 2:
        FUN_00f9db30(0);
        FUN_00f9d970(5,2,3);
        break;
      case 3:
        FUN_00f9d970(5,6,1);
        local_44 = 1;
        break;
      case 4:
        FUN_00f9d970(5,6,1);
        if ((local_44 != 6) && (local_44 != 8)) {
          local_44 = 2;
        }
        break;
      case 5:
        FUN_00f9d970(5,6,1);
        local_44 = 3;
        break;
      case 6:
        FUN_00f9d970(5,6,1);
        local_44 = 4;
        break;
      case -1:
        FUN_00f9d970(2,1,1);
      }
      if (puVar10 == (undefined *)param_1[0x35]) {
        uVar11 = 1;
      }
      else {
        uVar11 = 5;
      }
      FUN_00f9da00(2,1,uVar11);
      break;
    case 4:
    case 9:
      FUN_00f9da90(0);
      FUN_00f9d970(5,6,1);
      FUN_00f9da00(5,2,3);
    }
    switch(param_1[0x1e]) {
    case 1:
    case 3:
    case 6:
    case 8:
      break;
    default:
      if (param_1[0x1a] == 0) {
        puVar8 = (undefined4 *)FUN_00f9e370(0x5864a24f);
        if ((int *)*puVar8 == (int *)0x0) {
          if ((int *)puVar8[1] == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)puVar8[1];
          }
        }
        else {
          iVar6 = *(int *)*puVar8;
        }
        param_1[0x1a] = iVar6;
      }
      if (puVar2 == (undefined *)0x0) {
        piVar9 = (int *)FUN_00f9e370(0x5864a24f);
        if ((undefined4 *)*piVar9 == (undefined4 *)0x0) {
          if ((undefined4 *)piVar9[1] == (undefined4 *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined4 *)piVar9[1];
          }
        }
        else {
          uVar11 = *(undefined4 *)*piVar9;
        }
      }
      else {
        uVar11 = FUN_00fa0740(0);
      }
      switch(local_44) {
      case 0:
        FUN_00ccaca0(uVar11);
        break;
      case 1:
        FUN_00ccade0(uVar11);
        break;
      case 2:
        FUN_00ccb150(uVar11);
        break;
      case 3:
        FUN_00ccaf10(uVar11);
        break;
      case 4:
        FUN_00ccb030(uVar11);
        break;
      case 5:
        FUN_00ccb270(uVar11);
        break;
      case 6:
        FUN_00ccb410(uVar11);
        break;
      case 7:
        FUN_00ccb5c0(uVar11);
        break;
      case 8:
        FUN_00ccb700(uVar11);
        break;
      case 9:
        FUN_00ccb840(uVar11);
      }
      if (param_1[0x1e] == 0xb) {
        local_3c = (undefined4)(longlong)ROUND(_DAT_01dc2cfc);
        uVar11 = local_3c;
        local_3c = (undefined4)(longlong)ROUND(_DAT_01dc2cf8);
        uVar4 = local_3c;
        local_3c = (undefined4)(longlong)ROUND(_DAT_01dc2cf4);
        uVar5 = local_3c;
        local_3c = (undefined4)(longlong)ROUND(_DAT_01dc2cf0);
        thunk_FUN_00f98510(local_3c,uVar5,uVar4,uVar11);
      }
      FUN_00f98f80(&DAT_01dc2940);
      FUN_00f99010(0,param_1 + 0x23);
      FUN_00f99090(param_1 + 0x2d);
      uVar11 = (**(code **)(*param_1 + 0xc))();
      uVar11 = (**(code **)(*param_1 + 8))(uVar11);
      FUN_00f9f6d0(uVar11);
      if (param_1[0x1e] == 0xb) {
        FUN_00f98c00();
      }
    }
    switch(param_1[0x1e]) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
      FUN_00f9da90(1);
    }
    if (param_1[0x1c] - 1U < 2) {
      FUN_00f9db30(1);
    }
    if (bVar3) {
      thunk_FUN_00fa5730(local_30,1);
    }
  }
  Hw::cRenderTargetInfo::~cRenderTargetInfo();
  return;
}

