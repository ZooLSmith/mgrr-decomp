// src/ui/cUIPrimWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A4C6A0..00CFA750, 23 functions

#include "types.h"

// 00A4C6A0  cUIPrimWork::cUIPrimWork_5  size=18  [class]
undefined4 * __fastcall cUIPrimWork::cUIPrimWork_5(undefined4 *param_1)

{
  cUIPrimWorkBase::cUIPrimWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00A4C6C0  cUIPrimWork::vf08  size=6  [class]
undefined4 cUIPrimWork::vf08(void)

{
  return 4;
}

// 00A4C6D0  cUIPrimWork::vf0C  size=9  [class]
int __fastcall cUIPrimWork::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x130) * 2;
}

// 00A4C6E0  cUIPrimWork::vf10  size=7  [class]
undefined4 __fastcall cUIPrimWork::vf10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x134);
}

// 00A4C720  cUIPrimWork::vf00  size=53  [class]
undefined4 * __thiscall cUIPrimWork::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A4EB30  cUIPrimWork::cUIPrimWork_4  size=523  [class]
void cUIPrimWork::cUIPrimWork_4
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 *param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_60 = 0;
  local_90 = 0;
  local_5c = 0;
  local_8c = 0;
  local_58 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_18 = 0;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_14 = 0x3f800000;
  local_28 = 0x3f800000;
  local_3c = 0x3f800000;
  local_50 = 0x3f800000;
  local_20 = *param_1;
  local_1c = param_1[1];
  if (DAT_01edd490 != 0) {
    puVar1 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20);
    if (puVar1 != (undefined4 *)0x0) {
      cUIPrimWorkBase::cUIPrimWorkBase();
      *puVar1 = vftable;
      puVar1[0x1f] = *param_5;
      puVar1[0x20] = param_5[1];
      puVar1[0x21] = param_5[2];
      puVar1[0x22] = param_5[3];
      iVar2 = FUN_00caefd0(&DAT_01edd490,1,0,0);
      if (iVar2 != 0) {
        if (param_7 == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 2;
        }
        FUN_00caeec0(param_6,uVar3,0);
        if ((*(uint *)(param_6 + 0x1c) & 0x8000000) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 2;
        }
        FUN_00ccabb0(&local_50,0,0,uVar3);
        local_b0 = 0;
        local_a0 = *param_2;
        local_ac = 0;
        local_9c = param_2[1];
        local_90 = *param_3;
        local_8c = param_3[1];
        local_5c = param_4;
        local_88 = param_3[2];
        local_60 = 0;
        local_84 = param_3[3];
        local_58 = 0;
        local_80 = 0x3f800000;
        local_7c = 0x3f800000;
        local_78 = 0x3f800000;
        local_74 = 0x3f800000;
        local_70 = 0x3f800000;
        local_6c = 0x3f800000;
        local_68 = 0x3f800000;
        local_64 = 0x3f800000;
        iVar2 = FUN_00caf060(&local_b0);
        if (iVar2 != 0) {
          FUN_00a30800(puVar1,0x67,0);
        }
      }
    }
  }
  return;
}

// 00A4ED40  FUN_00a4ed40  size=1637  [callgraph]
void __fastcall FUN_00a4ed40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  float10 fVar5;
  undefined4 uVar6;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = FUN_00df7c00(8);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == -1) {
    return;
  }
  if (*(float *)(param_1 + 8) <= 0.0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c + iVar2 * 0x24) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + iVar2 * 0x24 + 0x18);
  }
  iVar1 = *(int *)(param_1 + 0x1a4);
  local_20 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x3f800000;
  local_14 = *(undefined4 *)(param_1 + 8);
  if (iVar1 < 3) {
LAB_00a4f176:
    if (iVar2 == 2) {
      local_40 = 100.0;
    }
    else {
LAB_00a4f189:
      local_40 = 0.0;
    }
    local_38 = 0;
    local_34 = 0x3f800000;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x3f800000;
    local_24 = 0x3f340000;
    fVar5 = (float10)FUN_00cad4b0();
    local_40 = (float)(fVar5 * (float10)local_40);
    fVar5 = (float10)FUN_00cad4d0();
    local_3c = (float)(fVar5 * (float10)(float)(undefined *)0x0);
    fVar5 = (float10)FUN_00cad4b0();
    local_48 = (float)(fVar5 * (float10)1024.0);
    FUN_00cad4d0();
    iVar2 = FUN_00fdbc60();
    local_40 = (float)iVar2;
    iVar2 = FUN_00fdbc60();
    local_3c = (float)iVar2;
    iVar2 = FUN_00fdbc60();
    local_48 = (float)iVar2;
    iVar2 = FUN_00fdbc60();
    bVar4 = *(int *)(param_1 + 0x1a4) == 2;
  }
  else {
    if (iVar2 != 0) {
      if (iVar1 < 3) goto LAB_00a4f176;
      if (iVar2 == 1) {
        local_38 = 0;
        local_30 = 0;
        local_2c = 0;
        local_34 = 0x3f800000;
        local_28 = 0x3f800000;
        local_24 = 0x3f340000;
        iVar2 = FUN_00f98a90();
        local_40 = (float)iVar2 * 0.00052083336 * -360.0;
        iVar2 = FUN_00f98aa0();
        local_3c = (float)iVar2 * 0.0009259259 * -512.0;
        iVar2 = FUN_00f98a90();
        local_40 = (float)iVar2 * 0.5 + local_40;
        iVar2 = FUN_00f98aa0();
        local_3c = (float)iVar2 * 0.5 + local_3c;
        iVar2 = FUN_00f98a90();
        local_48 = (float)iVar2 * 0.00052083336 * 720.0;
        FUN_00f98aa0();
        iVar2 = FUN_00fdbc60();
        local_40 = (float)iVar2;
        iVar2 = FUN_00fdbc60();
        local_3c = (float)iVar2;
        iVar2 = FUN_00fdbc60();
        local_48 = (float)iVar2;
        iVar2 = FUN_00fdbc60();
        local_44 = (float)iVar2;
        bVar4 = *(int *)(param_1 + 0x1a4) != 5;
        uVar6 = 1;
        goto LAB_00a4f26b;
      }
      if (iVar1 < 3) goto LAB_00a4f176;
      if (iVar2 == 2) {
        local_38 = 0;
        local_30 = 0;
        local_2c = 0;
        local_34 = 0x3f800000;
        local_28 = 0x3f800000;
        local_24 = 0x3f340000;
        iVar2 = FUN_00f98a90();
        local_40 = (float)iVar2 * 0.00052083336 * -342.0;
        iVar2 = FUN_00f98aa0();
        local_3c = (float)iVar2 * 0.0009259259 * -378.0;
        iVar2 = FUN_00f98a90();
        local_40 = (float)iVar2 * 0.5 + local_40;
        iVar2 = FUN_00f98aa0();
        local_3c = (float)iVar2 * 0.5 + local_3c;
        iVar2 = FUN_00f98a90();
        local_48 = (float)iVar2 * 0.00052083336 * 1024.0;
        FUN_00f98aa0();
        iVar2 = FUN_00fdbc60();
        local_40 = (float)iVar2;
        iVar2 = FUN_00fdbc60();
        local_3c = (float)iVar2;
        iVar2 = FUN_00fdbc60();
        local_48 = (float)iVar2;
        iVar2 = FUN_00fdbc60();
        bVar4 = *(int *)(param_1 + 0x1a4) != 5;
        local_44 = (float)iVar2;
        uVar6 = 0;
        goto LAB_00a4f26b;
      }
      goto LAB_00a4f189;
    }
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = 0x3f800000;
    local_28 = 0x3f800000;
    local_24 = 0x3f340000;
    iVar2 = FUN_00f98a90();
    local_40 = (float)iVar2 * 0.00052083336 * -512.0;
    iVar2 = FUN_00f98aa0();
    local_3c = (float)iVar2 * 0.0009259259 * -360.0;
    iVar2 = FUN_00f98a90();
    local_40 = (float)iVar2 * 0.5 + local_40;
    iVar2 = FUN_00f98aa0();
    local_3c = (float)iVar2 * 0.5 + local_3c;
    iVar2 = FUN_00f98a90();
    local_48 = (float)iVar2 * 0.00052083336 * 1024.0;
    FUN_00f98aa0();
    iVar2 = FUN_00fdbc60();
    local_40 = (float)iVar2;
    iVar2 = FUN_00fdbc60();
    local_3c = (float)iVar2;
    iVar2 = FUN_00fdbc60();
    local_48 = (float)iVar2;
    iVar2 = FUN_00fdbc60();
    bVar4 = *(int *)(param_1 + 0x1a4) == 5;
  }
  local_44 = (float)iVar2;
  bVar4 = !bVar4;
  uVar6 = 0;
LAB_00a4f26b:
  cUIPrimWork::cUIPrimWork_4(&local_40,&local_48,&local_30,uVar6,&local_20,uVar3,bVar4);
  if ((2 < *(int *)(param_1 + 0x1a4)) && (*(int *)(param_1 + 4) < 3)) {
    return;
  }
  if (*(int *)(param_1 + 4) == 2) {
    local_40 = 1124.0;
  }
  else {
    local_40 = 1024.0;
  }
  local_38 = 0;
  local_34 = 0x3f800000;
  local_30 = 0;
  local_2c = 0x3f350000;
  local_28 = 0x3f340000;
  local_24 = 0x3f750000;
  fVar5 = (float10)FUN_00cad4b0();
  local_40 = (float)(fVar5 * (float10)local_40);
  fVar5 = (float10)FUN_00cad4d0();
  local_3c = (float)(fVar5 * (float10)(float)(undefined *)0x0);
  fVar5 = (float10)FUN_00cad4b0();
  local_48 = (float)(fVar5 * (float10)256.0);
  FUN_00cad4d0();
  iVar2 = FUN_00fdbc60();
  local_40 = (float)iVar2;
  iVar2 = FUN_00fdbc60();
  local_3c = (float)iVar2;
  iVar2 = FUN_00fdbc60();
  local_48 = (float)iVar2;
  iVar2 = FUN_00fdbc60();
  local_44 = (float)iVar2;
  cUIPrimWork::cUIPrimWork_4
            (&local_40,&local_48,&local_30,1,&local_20,uVar3,*(int *)(param_1 + 0x1a4) != 2);
  return;
}

// 00CCABB0  FUN_00ccabb0  size=81  [callgraph]
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

// 00CCAC10  FUN_00ccac10  size=131  [callgraph]
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

// 00CCACA0  FUN_00ccaca0  size=305  [callgraph]
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

// 00CCADE0  FUN_00ccade0  size=274  [callgraph]
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

// 00CCAF10  FUN_00ccaf10  size=274  [callgraph]
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

// 00CCB030  FUN_00ccb030  size=274  [callgraph]
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

// 00CCB150  FUN_00ccb150  size=273  [callgraph]
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

// 00CCB270  FUN_00ccb270  size=414  [callgraph]
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

// 00CCB410  FUN_00ccb410  size=427  [callgraph]
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

// 00CCB5C0  FUN_00ccb5c0  size=317  [callgraph]
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

// 00CCB700  FUN_00ccb700  size=317  [callgraph]
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

// 00CCB840  FUN_00ccb840  size=568  [callgraph]
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

// 00CCBA80  cUIPrimWork::vf04  size=1411  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cUIPrimWork::vf04(int *param_1)

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
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  return;
}

// 00CF9BF0  cUIPrimWork::cUIPrimWork_2  size=501  [class]
undefined4 *
cUIPrimWork::cUIPrimWork_2(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_20 = 0;
  local_50 = 0.0;
  local_1c = 0;
  local_4c = 0.0;
  local_18 = 0;
  local_48 = 0.0;
  local_44 = 0.0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (*param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  cUIPrimWorkBase::cUIPrimWorkBase();
  *puVar3 = vftable;
  iVar4 = FUN_00caef00(param_1,4,6);
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3[3] = param_4;
  puVar3[0x4c] = 0;
  puVar3[0x4d] = 1;
  local_70 = *param_2;
  local_60 = param_2[4];
  local_6c = param_2[1];
  local_5c = param_2[5];
  local_68 = param_2[2];
  local_64 = param_2[3];
  local_48 = ((float)param_2[8] + (float)param_2[6]) * (float)param_2[10];
  local_44 = ((float)param_2[9] + (float)param_2[7]) * (float)param_2[0xb];
  local_50 = (float)param_2[6] * (float)param_2[10];
  if (param_2[0xd] != 0) {
    local_50 = local_48;
    local_48 = (float)param_2[6] * (float)param_2[10];
  }
  local_4c = (float)param_2[7] * (float)param_2[0xb];
  if (param_2[0xe] != 0) {
    local_4c = local_44;
    local_44 = (float)param_2[7] * (float)param_2[0xb];
  }
  local_40 = *(undefined4 *)(param_3 + 0x40);
  puVar7 = (undefined4 *)(param_3 + 0x40);
  local_20 = *(undefined4 *)(param_3 + 0x60);
  local_3c = *(undefined4 *)(param_3 + 0x44);
  puVar1 = (undefined4 *)(param_3 + 0x50);
  local_38 = *(undefined4 *)(param_3 + 0x48);
  local_34 = *(undefined4 *)(param_3 + 0x4c);
  local_30 = *puVar1;
  local_2c = *(undefined4 *)(param_3 + 0x54);
  local_28 = *(undefined4 *)(param_3 + 0x58);
  local_24 = *(undefined4 *)(param_3 + 0x5c);
  if (0.0 <= *(float *)(param_3 + 100)) {
    if (*(float *)(param_3 + 100) <= 0.0) goto LAB_00cf9dbf;
    fVar2 = *(float *)(param_3 + 100);
    puVar5 = &local_30;
    puVar6 = puVar1;
  }
  else {
    fVar2 = *(float *)(param_3 + 100);
    puVar5 = &local_40;
    puVar6 = puVar7;
    puVar7 = puVar1;
  }
  FUN_00ca82a0(puVar5,puVar6,puVar7,ABS(fVar2));
LAB_00cf9dbf:
  iVar4 = FUN_00caf060(&local_70);
  if (iVar4 == 0) {
    return (undefined4 *)0x0;
  }
  return puVar3;
}

// 00CF9DF0  cUIPrimWork::cUIPrimWork_3  size=2390  [class]
undefined4 * cUIPrimWork::cUIPrimWork_3(int *param_1,int param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_b0 = 0.0;
  local_ac = 0.0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0.0;
  local_9c = 0.0;
  local_60 = 0.0;
  local_90 = 0.0;
  local_5c = 0;
  local_8c = 0.0;
  local_58 = 0;
  local_88 = 0.0;
  local_84 = 0.0;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = 0.0;
  local_74 = 0.0;
  local_70 = 0.0;
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  if (*param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  cUIPrimWorkBase::cUIPrimWorkBase();
  *puVar2 = vftable;
  if ((*(float *)(param_2 + 0x10) == 1024.0) && (*(float *)(param_2 + 0x14) == 1024.0)) {
    iVar3 = FUN_00caef00(param_1,8,0xc);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    local_b0 = 0.0;
    puVar2[3] = param_4;
    local_ac = 0.0;
    puVar2[0x4c] = 0;
    local_a8 = 0;
    puVar2[0x4d] = 2;
    local_a4 = 0x3f800000;
    local_4c = (float)FUN_00f98aa0();
    iVar3 = FUN_00f98a90();
    pfVar6 = param_3 + 0x14;
    local_58 = 0;
    local_a0 = (float)iVar3 * 0.00078125 * 1024.0;
    local_60 = param_3[0x18];
    local_9c = (float)(int)local_4c * 0.0013888889 * 720.0;
    local_90 = 0.0;
    pfVar4 = param_3 + 0x10;
    local_8c = 0.0;
    local_88 = 1.0;
    local_84 = 0.703125;
    local_80 = *pfVar4;
    local_7c = param_3[0x11];
    local_78 = param_3[0x12];
    local_74 = param_3[0x13];
    local_70 = *pfVar6;
    local_6c = param_3[0x15];
    local_68 = param_3[0x16];
    local_64 = param_3[0x17];
    if (0.0 <= param_3[0x19]) {
      if (0.0 < param_3[0x19]) {
        local_44 = *pfVar4;
        local_40 = param_3[0x11];
        local_3c = param_3[0x12];
        local_38 = param_3[0x13];
        FUN_00ca82a0(&local_34,pfVar6,pfVar4,ABS(param_3[0x19]));
      }
    }
    else {
      FUN_00ca82a0(&local_44,pfVar4,pfVar6,ABS(param_3[0x19]));
      local_34 = *pfVar6;
      local_30 = param_3[0x15];
      local_2c = param_3[0x16];
      local_28 = param_3[0x17];
    }
    if (local_60 == 4.2039e-45) {
      pfVar4 = &local_34;
      pfVar5 = &local_44;
      pfVar6 = &local_70;
LAB_00cfa076:
      FUN_00ca82a0(pfVar6,pfVar5,pfVar4,0x3f4ccccd);
    }
    else if (local_60 == 5.60519e-45) {
      pfVar4 = &local_44;
      pfVar5 = &local_34;
      pfVar6 = &local_80;
      goto LAB_00cfa076;
    }
    iVar3 = FUN_00caf060(&local_b0);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    local_4c = (float)FUN_00f98a90();
    local_b0 = (float)(int)local_4c * 0.00078125 * 1024.0;
    local_ac = 0.0;
    local_a8 = 0;
    local_a4 = 0x3f800000;
    iVar3 = FUN_00f98aa0();
    local_4c = (float)FUN_00f98a90();
    local_5c = 1;
    local_a0 = (float)(int)local_4c * 0.00078125 * 256.0;
    local_9c = (float)iVar3 * 0.0013888889 * 720.0;
    local_90 = 0.0;
    local_8c = 0.70703125;
    local_88 = 0.703125;
    local_84 = 0.95703125;
    if (local_60 != 4.2039e-45) {
      if (local_60 == 5.60519e-45) {
        local_70 = local_80;
        local_6c = local_7c;
        local_68 = local_78;
        local_64 = local_74;
        local_80 = local_44;
        local_7c = local_40;
        local_78 = local_3c;
        local_74 = local_38;
      }
      goto LAB_00cfa1f7;
    }
  }
  else {
    if ((*(float *)(param_2 + 0x10) != 512.0) || (*(float *)(param_2 + 0x14) != 512.0)) {
      iVar3 = FUN_00caef00(param_1,4,6);
      if (iVar3 == 0) {
        return (undefined4 *)0x0;
      }
      local_b0 = 0.0;
      puVar2[3] = param_4;
      local_ac = 0.0;
      puVar2[0x4c] = 0;
      local_a8 = 0;
      puVar2[0x4d] = 1;
      local_a4 = 0x3f800000;
      local_a0 = 1280.0;
      local_90 = *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x28);
      local_9c = 720.0;
      local_88 = (*(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x18)) *
                 *(float *)(param_2 + 0x28);
      local_8c = *(float *)(param_2 + 0x2c) * *(float *)(param_2 + 0x1c);
      local_84 = (*(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x1c)) *
                 *(float *)(param_2 + 0x2c);
      pfVar6 = param_3 + 0x10;
      local_60 = param_3[0x18];
      pfVar4 = param_3 + 0x14;
      local_80 = *pfVar6;
      local_7c = param_3[0x11];
      local_78 = param_3[0x12];
      local_74 = param_3[0x13];
      local_70 = *pfVar4;
      local_6c = param_3[0x15];
      local_68 = param_3[0x16];
      local_64 = param_3[0x17];
      if (0.0 <= param_3[0x19]) {
        if (0.0 < param_3[0x19]) {
          FUN_00ca82a0(&local_70,pfVar4,pfVar6,ABS(param_3[0x19]));
        }
      }
      else {
        FUN_00ca82a0(&local_80,pfVar6,pfVar4,ABS(param_3[0x19]));
      }
      goto LAB_00cfa1f7;
    }
    iVar3 = FUN_00caef00(param_1,8,0xc);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2[3] = param_4;
    puVar2[0x4c] = 0;
    puVar2[0x4d] = 2;
    local_b4 = 512.0;
    local_20 = SQRT(param_3[1] * param_3[1] + *param_3 * *param_3 + param_3[2] * param_3[2]);
    local_1c = SQRT(param_3[5] * param_3[5] + param_3[4] * param_3[4] + param_3[6] * param_3[6]);
    if (local_20 == 0.0) {
      fVar1 = 640.0;
    }
    else {
      fVar1 = local_20 * 640.0;
      local_b4 = local_20 * 512.0;
    }
    if (local_1c == 0.0) {
      local_9c = 360.0;
    }
    else {
      local_9c = local_1c * 360.0;
    }
    pfVar6 = param_3 + 0x14;
    local_58 = 0;
    fVar1 = 640.0 - fVar1 * 0.5;
    local_ac = 360.0 - local_9c * 0.5;
    local_a8 = 0;
    local_a4 = 0x3f800000;
    local_4c = local_b4;
    local_a0 = local_b4;
    local_60 = param_3[0x18];
    local_90 = 0.0;
    local_8c = 0.0;
    pfVar4 = param_3 + 0x10;
    local_88 = 1.0;
    local_84 = 0.703125;
    local_80 = *pfVar4;
    local_7c = param_3[0x11];
    local_78 = param_3[0x12];
    local_74 = param_3[0x13];
    local_70 = *pfVar6;
    local_6c = param_3[0x15];
    local_68 = param_3[0x16];
    local_64 = param_3[0x17];
    local_b0 = fVar1;
    local_48 = local_9c;
    local_24 = local_ac;
    if (0.0 <= param_3[0x19]) {
      if (0.0 < param_3[0x19]) {
        local_44 = *pfVar4;
        local_40 = param_3[0x11];
        local_3c = param_3[0x12];
        local_38 = param_3[0x13];
        FUN_00ca82a0(&local_34,pfVar6,pfVar4,ABS(param_3[0x19]));
      }
    }
    else {
      FUN_00ca82a0(&local_44,pfVar4,pfVar6,ABS(param_3[0x19]));
      local_34 = *pfVar6;
      local_30 = param_3[0x15];
      local_2c = param_3[0x16];
      local_28 = param_3[0x17];
    }
    if (local_60 == 4.2039e-45) {
      pfVar4 = &local_34;
      pfVar5 = &local_44;
      pfVar6 = &local_70;
LAB_00cfa4cc:
      FUN_00ca82a0(pfVar6,pfVar5,pfVar4,0x3f4ccccd);
    }
    else if (local_60 == 5.60519e-45) {
      pfVar4 = &local_44;
      pfVar5 = &local_34;
      pfVar6 = &local_80;
      goto LAB_00cfa4cc;
    }
    iVar3 = FUN_00caf060(&local_b0);
    if (iVar3 == 0) {
      return (undefined4 *)0x0;
    }
    local_b0 = fVar1 + local_b4;
    local_ac = local_24;
    local_a8 = 0;
    local_a4 = 0x3f800000;
    if (local_20 == 0.0) {
      local_a0 = 128.0;
    }
    else {
      local_a0 = local_20 * 128.0;
    }
    if (local_1c == 0.0) {
      local_9c = 360.0;
    }
    else {
      local_9c = local_1c * 360.0;
    }
    local_90 = 0.0;
    local_5c = 1;
    local_8c = 0.70703125;
    local_88 = 0.703125;
    local_84 = 0.95703125;
    if (local_60 != 4.2039e-45) {
      if (local_60 == 5.60519e-45) {
        local_70 = local_80;
        local_6c = local_7c;
        local_68 = local_78;
        local_64 = local_74;
        local_80 = local_44;
        local_7c = local_40;
        local_78 = local_3c;
        local_74 = local_38;
      }
      goto LAB_00cfa1f7;
    }
  }
  local_5c = 1;
  local_84 = 0.95703125;
  local_88 = 0.703125;
  local_8c = 0.70703125;
  local_90 = 0.0;
  local_80 = local_70;
  local_7c = local_6c;
  local_78 = local_68;
  local_74 = local_64;
  local_70 = local_34;
  local_6c = local_30;
  local_68 = local_2c;
  local_64 = local_28;
LAB_00cfa1f7:
  iVar3 = FUN_00caf060(&local_b0);
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  return puVar2;
}

// 00CFA750  cUIPrimWork::cUIPrimWork  size=1361  [class]
undefined4 * cUIPrimWork::cUIPrimWork(int *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 extraout_ST0;
  float10 fVar22;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  int local_f8;
  float local_f4;
  float local_f0;
  float local_d8;
  float local_d4;
  int local_b4;
  float local_b0;
  float local_8c;
  float local_84;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_70 = 0.0;
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  local_60 = 0.0;
  iVar17 = 1;
  local_5c = 0.0;
  local_50 = 0.0;
  local_20 = 0;
  local_4c = 0.0;
  local_1c = 0;
  local_48 = 0.0;
  local_18 = 0;
  local_44 = 0.0;
  local_b4 = 1;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if ((*param_1 != 0) &&
     (puVar14 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar14 != (undefined4 *)0x0)) {
    cUIPrimWorkBase::cUIPrimWorkBase();
    *puVar14 = vftable;
    fVar18 = (float10)param_2[4] / (float10)param_2[8];
    fVar19 = (float10)param_2[5] / (float10)param_2[9];
    fVar1 = (float)fVar19;
    fVar22 = (float10)1;
    fVar20 = (float10)0.5;
    if (fVar22 < fVar18) {
      fVar21 = (fVar18 - fVar22) * fVar20;
      local_d8 = (float)fVar21;
      if (fVar21 <= fVar22) {
        iVar17 = 3;
      }
      else {
        fVar20 = fVar19;
        iVar15 = FUN_00fdbc60();
        fVar19 = fVar22;
        iVar17 = iVar15 * 2 + 3;
        local_d8 = (float)(extraout_ST0 - (float10)iVar15);
        fVar22 = extraout_ST1;
      }
    }
    if (fVar22 < fVar19) {
      fVar20 = (fVar19 - fVar22) * fVar20;
      local_d4 = (float)fVar20;
      if (fVar20 <= fVar22) {
        local_b4 = 3;
      }
      else {
        iVar15 = FUN_00fdbc60();
        local_b4 = iVar15 * 2 + 3;
        local_d4 = (float)(extraout_ST0_00 - (float10)iVar15);
      }
    }
    iVar15 = local_b4 * iVar17;
    if ((iVar15 != 0) && (iVar16 = FUN_00caef00(param_1,iVar15 * 4,iVar15 * 6), iVar16 != 0)) {
      puVar14[3] = param_4;
      puVar14[0x4d] = iVar15;
      puVar14[0x4c] = 0;
      fVar8 = (param_2[8] + param_2[6]) * param_2[10];
      fVar12 = (param_2[7] + param_2[9]) * param_2[0xb];
      fVar7 = param_2[6] * param_2[10];
      if (param_2[0xd] != 0.0) {
        fVar7 = fVar8;
        fVar8 = param_2[6] * param_2[10];
      }
      fVar11 = param_2[7] * param_2[0xb];
      if (param_2[0xe] != 0.0) {
        fVar11 = fVar12;
        fVar12 = param_2[7] * param_2[0xb];
      }
      fVar5 = param_2[8];
      fVar13 = fVar8 - fVar7;
      fVar6 = param_2[9];
      local_f8 = 0;
      fVar10 = fVar12 - fVar11;
      local_b0 = *param_2;
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      fVar4 = param_2[3];
      if (local_b4 < 1) {
        return puVar14;
      }
      do {
        if (local_f8 == 0) {
          fVar2 = param_2[1];
        }
        else {
          fVar2 = local_f0 + fVar2;
        }
        if (local_b4 == 1) {
          fVar9 = (1.0 - fVar1) * 0.5 * fVar10;
          local_f0 = fVar6 * fVar1;
          local_8c = fVar9 + fVar11;
          local_84 = fVar12 - fVar9;
        }
        else {
          local_84 = fVar12;
          if (local_f8 == 0) {
            local_f0 = fVar6 * local_d4;
            local_8c = (1.0 - local_d4) * fVar10 + fVar11;
          }
          else {
            local_f0 = fVar6;
            local_8c = fVar11;
            if (local_f8 == local_b4 + -1) {
              local_f0 = fVar6 * local_d4;
              local_84 = fVar12 - (1.0 - local_d4) * fVar10;
            }
          }
        }
        iVar15 = 0;
        if (0 < iVar17) {
          do {
            if (iVar15 == 0) {
              local_b0 = *param_2;
            }
            else {
              local_b0 = local_f4 + local_b0;
            }
            if (iVar17 == 1) {
              fVar9 = (1.0 - (float)fVar18) * 0.5 * fVar13;
              local_48 = fVar8 - fVar9;
              local_50 = fVar9 + fVar7;
              local_f4 = fVar5 * (float)fVar18;
            }
            else {
              local_48 = fVar8;
              if (iVar15 == 0) {
                local_50 = (1.0 - local_d8) * fVar13 + fVar7;
                local_f4 = fVar5 * local_d8;
              }
              else {
                local_50 = fVar7;
                local_f4 = fVar5;
                if (iVar15 == iVar17 + -1) {
                  local_48 = fVar8 - (1.0 - local_d8) * fVar13;
                  local_f4 = fVar5 * local_d8;
                }
              }
            }
            local_20 = *(undefined4 *)(param_3 + 0x60);
            local_60 = local_f4;
            local_5c = local_f0;
            local_4c = local_8c;
            local_44 = local_84;
            local_40 = *(undefined4 *)(param_3 + 0x40);
            local_3c = *(undefined4 *)(param_3 + 0x44);
            local_38 = *(undefined4 *)(param_3 + 0x48);
            local_34 = *(undefined4 *)(param_3 + 0x4c);
            local_30 = *(undefined4 *)(param_3 + 0x50);
            local_2c = *(undefined4 *)(param_3 + 0x54);
            local_28 = *(undefined4 *)(param_3 + 0x58);
            local_24 = *(undefined4 *)(param_3 + 0x5c);
            local_70 = local_b0;
            local_6c = fVar2;
            local_68 = fVar3;
            local_64 = fVar4;
            iVar16 = FUN_00caf060(&local_70);
            if (iVar16 == 0) {
              return (undefined4 *)0x0;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar17);
        }
        local_f8 = local_f8 + 1;
        if (local_b4 <= local_f8) {
          return puVar14;
        }
      } while( true );
    }
  }
  return (undefined4 *)0x0;
}

