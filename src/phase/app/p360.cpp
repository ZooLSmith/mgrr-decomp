// src/phase/app/p360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48A80..00D703A0, 8 functions

#include "types.h"

// 00D48A80  P360::vf1C  size=3  [class]
void P360::vf1C(void)

{
  return;
}

// 00D48A90  P360::vf0C  size=1  [class]
void P360::vf0C(void)

{
  return;
}

// 00D48AA0  FUN_00d48aa0  size=162  [callgraph]
void __fastcall FUN_00d48aa0(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (*(int *)(param_1 + 300) == 0) {
    uVar8 = 0xf5010;
    uVar3 = FUN_00e03ea0("emblem",0xf5010);
    iVar4 = FUN_00a18d70(uVar3,uVar8);
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      iVar7 = 0;
      if (0 < *(short *)(iVar4 + 0x324)) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(iVar4 + 800);
          iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar6) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_01640d84), iVar5 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iVar7 < *(short *)(iVar4 + 0x324));
      }
      *(undefined4 *)(param_1 + 300) = 1;
    }
  }
  return;
}

// 00D53B70  P360::vf14  size=80  [class]
void __fastcall P360::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x120),1);
  if (iVar1 != 0) {
    DAT_01bea094 = DAT_01bea094 | 0x8000;
    DAT_01bea090 = DAT_01bea090 | 0x10;
  }
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x11c),1);
  if (iVar1 != 0) {
    DAT_01bea094 = DAT_01bea094 | 0x14000;
  }
  return;
}

// 00D53BC0  P360::vf18  size=112  [class]
void __fastcall P360::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    iVar1 = FUN_00a7f600(0xf001e);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x20))();
        *(undefined4 *)(param_1 + 0x128) = 1;
      }
    }
  }
  iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
  if (iVar1 != 0) {
    DAT_01bea090 = DAT_01bea090 | 0x800000;
    DAT_01bea094 = DAT_01bea094 | 0x400;
  }
  FUN_00d48aa0();
  return;
}

// 00D53C30  P360::vf08  size=485  [class]
void __fastcall P360::vf08(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_00e03ea0("P360_BUILD");
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  uVar1 = FUN_00e03ea0("P360_START");
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  uVar1 = FUN_00e03ea0("P360_SAM_TALK");
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  DAT_01bea090 = DAT_01bea090 & 0xff7fffef;
  DAT_01bea094 = DAT_01bea094 & 0xfffe3bff;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  piVar2 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar2 + 0x44))(0,"r30b_gate_COL");
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("r30b_gate",0x30b);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("floor_after",0x30b);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  FUN_00c81e90(0x1e);
  FUN_00c81e90(0x1f);
  FUN_00c81e90(0x20);
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_cloud01",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_cloud02",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_rain01",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x1c))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  iVar3 = (**(code **)(*piVar2 + 0x20))("hologram_area_rain02",0x30f);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x1c))();
  }
  piVar2 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar2 + 0x44))(0,"r30f_cloud_COL");
  piVar2 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar2 + 0x44))(1,"r30f_rain_COL");
  return;
}

// 00D53E20  P360::vf10  size=47  [class]
void P360::vf10(void)

{
  DAT_01bea090 = DAT_01bea090 & 0xff7fffef;
  DAT_01bea094 = DAT_01bea094 & 0xfffe3bff;
  return;
}

// 00D703A0  P360::vf00  size=54  [class]
undefined4 * __thiscall P360::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

