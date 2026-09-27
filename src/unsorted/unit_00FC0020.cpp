// src/unsorted/unit_00FC0020.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FC0020..00FC2150, 26 functions

#include "mgrr.h"

// 00FC0020  FUN_00fc0020  size=65  [run]
void __fastcall FUN_00fc0020(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00FC0070  FUN_00fc0070  size=37  [run]
void FUN_00fc0070(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = *(int *)(*param_2 + 8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return;
}

// 00FC00A0  FUN_00fc00a0  size=61  [run]
void __thiscall FUN_00fc00a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[4];
  if (iVar1 == *param_1) {
    *param_2 = *param_1;
    return;
  }
  iVar2 = *(int *)(iVar1 + 4);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar3;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = iVar2;
  }
  param_1[4] = iVar3;
  param_1[3] = param_1[3] + 1;
  *param_2 = iVar1;
  return;
}

// 00FC00F0  FUN_00fc00f0  size=442  [run]
/* WARNING: Removing unreachable block (ram,0x00fc01d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fc00f0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  undefined4 local_14;
  
  if ((DAT_01bea084 & 0x200000) == 0) {
    bVar1 = *(byte *)(param_1 + 0xa4);
    if (*(byte *)(param_3 + 0x40) != bVar1) {
      *(byte *)(param_3 + 0x40) = bVar1;
      *(uint *)(param_3 + 0x30) =
           *(uint *)(param_3 + 0x30) ^
           ((uint)bVar1 << 0x18 ^ *(uint *)(param_3 + 0x30)) & 0x1f000000;
      if (bVar1 != 1) {
        *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) & 0xfffff3f3 | 0x303;
      }
    }
  }
  else if (*(char *)(param_3 + 0x40) != '\x10') {
    *(undefined1 *)(param_3 + 0x40) = 0x10;
    *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) & 0xf0fff3f3 | 0x10000303;
  }
  local_40 = *(undefined4 *)(param_2 + 0x330);
  local_3c = *(undefined4 *)(param_2 + 0x330);
  local_38 = 0;
  local_34 = 0;
  FUN_00f9ec50(param_3 + 0x34,&local_40,4);
  uVar2 = *(uint *)(param_3 + 0x30);
  local_14 = *(undefined4 *)(param_2 + 0x358);
  *(uint *)(param_3 + 0x30) = uVar2 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_3 + 0x30) = uVar2 & 0xe1fff010 | 0x1000111;
  FUN_00fa1d50(param_3 + 0x28,local_14);
  uVar3 = FUN_00f910d0(*(undefined4 *)(local_18 + 0x74));
  FUN_00f98f80(uVar3);
  FUN_00f990e0(param_3);
  FUN_00f9d850(0);
  local_30 = 0x3f4ccccd;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar4 = FUN_00e6b900();
  if (iVar4 == 3) {
    local_30 = _DAT_0189f734;
  }
  iVar4 = FUN_00f99540(0xba,&local_30,4);
  if (iVar4 == 0) {
    _DAT_01f13270 = local_30;
    _DAT_01f13274 = local_2c;
    _DAT_01f13278 = local_28;
    _DAT_01f1327c = local_24;
    FUN_00f99620(0xba,&DAT_01f13270,4);
  }
  return;
}

// 00FC02B0  FUN_00fc02b0  size=25  [run]
void FUN_00fc02b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fc00f0(param_1,param_3,&DAT_01f725a8);
  return;
}

// 00FC02D0  FUN_00fc02d0  size=25  [run]
void FUN_00fc02d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fc00f0(param_1,param_3,&DAT_01f725f0);
  return;
}

// 00FC02F0  FUN_00fc02f0  size=25  [run]
void FUN_00fc02f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fc00f0(param_1,param_3,&DAT_01f72680);
  return;
}

// 00FC0310  FUN_00fc0310  size=25  [run]
void FUN_00fc0310(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fc00f0(param_1,param_3,&DAT_01f726c8);
  return;
}

// 00FC0330  FUN_00fc0330  size=756  [run]
void __thiscall FUN_00fc0330(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x84);
  iVar2 = *(int *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x8c);
  iVar6 = *(int *)(param_1 + 0x98);
  iVar7 = *(int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x78)) {
    iVar8 = *(int *)(param_1 + 0x604);
    *(uint *)(iVar8 + 0x30) =
         *(uint *)(iVar8 + 0x30) ^ (param_2 << 0x18 ^ *(uint *)(iVar8 + 0x30)) & 0x1f000000;
    if ((param_2 & 0xff) != 1) {
      *(uint *)(iVar8 + 0x30) = *(uint *)(iVar8 + 0x30) & 0xfffff3f3 | 0x303;
    }
  }
  if (-1 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x604);
    *(uint *)(iVar4 + 0x3c) =
         *(uint *)(iVar4 + 0x3c) ^ (param_2 << 0x18 ^ *(uint *)(iVar4 + 0x3c)) & 0x1f000000;
    if ((param_2 & 0xff) != 1) {
      *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xfffff3f3 | 0x303;
    }
  }
  if (-1 < iVar5) {
    iVar4 = *(int *)(param_1 + 0x604);
    *(uint *)(iVar4 + 0x48) =
         *(uint *)(iVar4 + 0x48) ^ (param_2 << 0x18 ^ *(uint *)(iVar4 + 0x48)) & 0x1f000000;
    if ((param_2 & 0xff) != 1) {
      *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) & 0xfffff3f3 | 0x303;
    }
  }
  if (-1 < iVar7) {
    iVar4 = *(int *)(param_1 + 0x604);
    *(uint *)(iVar4 + 0x54) =
         *(uint *)(iVar4 + 0x54) ^ (param_2 << 0x18 ^ *(uint *)(iVar4 + 0x54)) & 0x1f000000;
    if ((param_2 & 0xff) != 1) {
      *(uint *)(iVar4 + 0x54) = *(uint *)(iVar4 + 0x54) & 0xfffff3f3 | 0x303;
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar4 = *(int *)(param_1 + 0x604);
    *(uint *)(iVar4 + 0x48) =
         *(uint *)(iVar4 + 0x48) ^ (param_2 << 0x18 ^ *(uint *)(iVar4 + 0x48)) & 0x1f000000;
    if ((param_2 & 0xff) != 1) {
      *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) & 0xfffff3f3 | 0x303;
    }
  }
  FUN_00f924c0(param_2,*(undefined4 *)(param_1 + 0x600));
  FUN_00f924c0(param_2,*(undefined4 *)(param_1 + 0x600));
  if (-1 < iVar3) {
    *(uint *)(*(int *)(param_1 + 0x604) + 0x60) =
         *(uint *)(*(int *)(param_1 + 0x604) + 0x60) & 0xe0fff3f3 | 0x303;
    FUN_00f92480(0,iVar3);
    FUN_00f92480(0,iVar3);
  }
  if (-1 < iVar2) {
    *(uint *)(*(int *)(param_1 + 0x604) + 0x6c) =
         *(uint *)(*(int *)(param_1 + 0x604) + 0x6c) & 0xe0fff3f3 | 0x303;
    FUN_00f92480(0,iVar2);
    FUN_00f92480(0,iVar2);
  }
  if (-1 < iVar6) {
    *(uint *)(*(int *)(param_1 + 0x604) + 0x9c) =
         *(uint *)(*(int *)(param_1 + 0x604) + 0x9c) & 0xe0fff3f3 | 0x303;
    FUN_00f92480(0,iVar6);
    FUN_00f92480(0,iVar6);
    if (-1 < iVar3) {
      *(uint *)(*(int *)(param_1 + 0x604) + 0xa8) =
           *(uint *)(*(int *)(param_1 + 0x604) + 0xa8) & 0xe0fff3f3 | 0x303;
      FUN_00f92480(0,iVar3);
      FUN_00f92480(0,iVar3);
    }
  }
  if (-1 < iVar1) {
    *(uint *)(*(int *)(param_1 + 0x604) + 0x78) =
         *(uint *)(*(int *)(param_1 + 0x604) + 0x78) & 0xe0fff3f3 | 0x303;
    FUN_00f92480(0,iVar1);
    FUN_00f92480(0,iVar1);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(uint *)(*(int *)(param_1 + 0x604) + 0x90) =
         *(uint *)(*(int *)(param_1 + 0x604) + 0x90) & 0xe0fff3f3 | 0x303;
  }
  return;
}

// 00FC0630  FUN_00fc0630  size=202  [run]
void FUN_00fc0630(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_14;
  
  bVar1 = DAT_01be1fec;
  if (*(byte *)(param_3 + 0x40) != DAT_01be1fec) {
    *(byte *)(param_3 + 0x40) = DAT_01be1fec;
    *(uint *)(param_3 + 0x30) =
         *(uint *)(param_3 + 0x30) ^ ((uint)bVar1 << 0x18 ^ *(uint *)(param_3 + 0x30)) & 0x1f000000;
    if (bVar1 != 1) {
      *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) & 0xfffff3f3 | 0x303;
    }
  }
  local_30 = *(undefined4 *)(param_2 + 0x330);
  local_2c = *(undefined4 *)(param_2 + 0x334);
  local_28 = 0;
  local_24 = 0;
  FUN_00f9ec50(param_3 + 0x34,&local_30,4);
  FUN_00fa1d50(param_3 + 0x28,*(undefined4 *)(param_2 + 0x358));
  uVar2 = FUN_00f910d0(*(undefined4 *)(local_14 + 0x74));
  FUN_00f98f80(uVar2);
  FUN_00f990e0(param_3);
  FUN_00f9d850(0);
  return;
}

// 00FC09D0  FUN_00fc09d0  size=25  [run]
void FUN_00fc09d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fc0630(param_1,param_3,&DAT_01f729e0);
  return;
}

// 00FC09F0  FUN_00fc09f0  size=25  [run]
void FUN_00fc09f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00fc0630(param_1,param_3,&DAT_01f72a28);
  return;
}

// 00FC0A10  FUN_00fc0a10  size=265  [run]
/* WARNING: Removing unreachable block (ram,0x00fc0a80) */
/* WARNING: Removing unreachable block (ram,0x00fc0ac4) */

undefined4 __thiscall FUN_00fc0a10(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fba8b0(param_2,param_3);
  if (((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_SpecMaskSampler"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 0x58,"g_SpecPowSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
    return 1;
  }
  return 0;
}

// 00FC0B20  FUN_00fc0b20  size=96  [run]
void __fastcall FUN_00fc0b20(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  return;
}

// 00FC0B80  FUN_00fc0b80  size=281  [run]
/* WARNING: Removing unreachable block (ram,0x00fc0bf0) */
/* WARNING: Removing unreachable block (ram,0x00fc0c34) */

bool __thiscall FUN_00fc0b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fbaa50(param_2,param_3);
  if (((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_SpecMaskSampler"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 0x58,"g_SpecPowSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
    iVar2 = FUN_00f9e6d0(param_1 + 0xac,"g_otherParam");
    return iVar2 != 0;
  }
  return false;
}

// 00FC0CA0  FUN_00fc0ca0  size=143  [run]
/* WARNING: Removing unreachable block (ram,0x00fc0cfd) */

undefined4 __thiscall FUN_00fc0ca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fc0b80(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x70,"g_ShadowSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x78) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FC0D70  FUN_00fc0d70  size=261  [run]
/* WARNING: Removing unreachable block (ram,0x00fc0de0) */
/* WARNING: Removing unreachable block (ram,0x00fc0e24) */

undefined4 __thiscall FUN_00fc0d70(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fbac20(param_2,param_3);
  if (((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_SpecMaskSampler"), iVar2 != 0)) &&
     (iVar2 = FUN_00fa39a0(param_1 + 0x58,"g_SpecPowSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0x7fffffff;
    return 1;
  }
  return 0;
}

// 00FC0F40  FUN_00fc0f40  size=342  [run]
void __fastcall FUN_00fc0f40(int param_1)

{
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  return;
}

// 00FC12A0  FUN_00fc12a0  size=104  [run]
void __fastcall FUN_00fc12a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  return;
}

// 00FC13D0  FUN_00fc13d0  size=141  [run]
void __fastcall FUN_00fc13d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  return;
}

// 00FC1520  FUN_00fc1520  size=2462  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fc1520(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  int local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&stack0xfffffff0;
  if ((DAT_01bea084 & 0x40000) != 0) {
    local_c0 = _DAT_01be1fc0;
    local_bc = _DAT_01be1fc4;
    local_b8 = _DAT_01be1fc8;
    local_b4 = _DAT_01be1fcc;
    local_b0 = _DAT_01be1fd0;
    local_ac = _DAT_01be1fd4;
    local_a8 = _DAT_01be1fd8;
    local_a4 = _DAT_01be1fdc;
    iVar2 = FUN_00c12740(0);
    iVar3 = FUN_00c12740(4);
    local_f0 = *(float *)(iVar2 + 0x1b0);
    local_ec = *(float *)(iVar2 + 0x1b4);
    local_e8 = *(float *)(iVar2 + 0x1b8);
    local_e4 = *(float *)(iVar2 + 0x1bc);
    local_e0 = *(float *)(iVar2 + 0x1c0);
    local_dc = *(float *)(iVar2 + 0x1c4);
    local_d8 = *(float *)(iVar2 + 0x1c8);
    local_d4 = *(float *)(iVar2 + 0x1cc);
    if (local_b4 == 0.0) {
      local_ec = local_ec - (local_ec - local_bc) * 2.0;
      local_dc = local_dc - (local_dc - local_bc) * 2.0;
      local_cc = *(float *)(iVar2 + 0x1d4);
      local_c4 = *(undefined4 *)(iVar2 + 0x1dc);
      local_d0 = *(float *)(iVar2 + 0x1d0) * -1.0;
      local_c8 = *(float *)(iVar2 + 0x1d8) * -1.0;
      thunk_FUN_00de01a0(local_60,&local_f0,&local_e0,&local_d0);
      FUN_00de6060(&local_d0);
      *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar2 + 0x94);
      FUN_00de5f20(&local_f0);
      FUN_00de5fc0(&local_e0);
      FUN_00de5180(local_60);
      FUN_00de5b30(iVar2 + 0x10,0);
      FUN_00da3940();
      fVar1 = *(float *)(iVar2 + 0x98);
    }
    else {
      if ((_DAT_01f8d2b0 & 1) == 0) {
        _DAT_01f8d2b0 = _DAT_01f8d2b0 | 1;
        FUN_00d93a30();
      }
      local_d0 = 0.0;
      local_cc = 0.0;
      local_c8 = -1.0;
      local_c4 = 0;
      local_130 = local_b0;
      local_12c = local_ac;
      local_128 = local_a8;
      local_124 = local_a4;
      local_150 = local_c0;
      local_14c = local_bc;
      local_148 = local_b8;
      local_144 = local_b4;
      local_f0 = *(float *)(iVar2 + 0x1b0);
      local_ec = *(float *)(iVar2 + 0x1b4);
      local_e8 = *(float *)(iVar2 + 0x1b8);
      local_e4 = *(float *)(iVar2 + 0x1bc);
      local_e0 = *(float *)(iVar2 + 0x1c0);
      local_dc = *(float *)(iVar2 + 0x1c4);
      local_d8 = *(float *)(iVar2 + 0x1c8);
      local_d4 = *(float *)(iVar2 + 0x1cc);
      FUN_00ddc1d0(local_a0,&local_130,5);
      D3DXVec3TransformNormal(&local_d0,&local_d0,local_a0);
      local_f4 = local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8;
      if (local_f4 < 0.0 == (local_f4 == 0.0)) {
        FUN_00ddf460(&local_d0,&local_d0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_d0 = 0.0;
        local_cc = 1.0;
        local_c8 = 0.0;
      }
      FUN_00d93a90(&local_150,&local_d0);
      FUN_00d93b70(&local_140,&local_f0);
      FUN_00d93b70(&local_110,&local_e0);
      local_f0 = local_f0 - (local_f0 - local_140) * 2.0;
      local_ec = local_ec - (local_ec - local_13c) * 2.0;
      local_e8 = local_e8 - (local_e8 - local_138) * 2.0;
      local_e4 = local_e4 - (local_e4 - local_134) * 2.0;
      local_c0 = (local_e0 - local_110) * 2.0;
      local_bc = (local_dc - local_10c) * 2.0;
      local_b8 = (local_d8 - local_108) * 2.0;
      local_b4 = (local_d4 - local_104) * 2.0;
      local_e0 = local_e0 - local_c0;
      local_dc = local_dc - local_bc;
      local_d8 = local_d8 - local_b8;
      local_d4 = local_d4 - local_b4;
      fVar1 = *(float *)(iVar2 + 0x98) + _DAT_01be1fe0;
      local_b0 = local_e0;
      local_ac = local_dc;
      local_a8 = local_d8;
      local_a4 = local_d4;
    }
    *(float *)(iVar3 + 0x98) = fVar1;
    local_110 = 0.0;
    local_10c = 1.0;
    local_104 = 1.0;
    local_108 = 0.0;
    thunk_FUN_00de01a0(local_60,&local_f0,&local_e0,&local_110);
    *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar2 + 0x94);
    FUN_00de5f20(&local_f0);
    FUN_00de5fc0(&local_e0);
    FUN_00de5180(local_60);
    FUN_00de5b30(iVar2 + 0x10,0);
    FUN_00da3940();
    FUN_00da8480();
  }
  local_f4 = 0.0;
  do {
    if (local_f4 != 8.40779e-45) {
      iVar2 = (&DAT_016f3cbc)[(int)local_f4];
      local_114 = iVar2;
      local_fc = FUN_00c12740((&DAT_016f3cd8)[(int)local_f4]);
      local_f8 = iVar2 * 0x40;
      puVar4 = (undefined4 *)(local_fc + 0x10);
      puVar5 = (undefined4 *)(&DAT_01f6b9a0 + local_f8);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)(local_fc + 0xb0);
      puVar5 = (undefined4 *)(&DAT_01f6bb60 + local_f8);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)FUN_00da3980(0);
      puVar5 = (undefined4 *)(&DAT_01f6bd20 + local_f8);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)(local_fc + 0x130);
      puVar5 = (undefined4 *)(&DAT_01f6bee0 + local_f8);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)(local_fc + 0x50);
      puVar5 = (undefined4 *)(&DAT_01f6c0a0 + local_f8);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)FUN_00da3990(0);
      puVar5 = (undefined4 *)(&DAT_01f6c260 + local_f8);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined4 *)FUN_00da39a0(0);
      puVar5 = (undefined4 *)(&DAT_01f6c420 + local_f8);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar2 = local_114 * 0x10;
      *(undefined4 *)(&DAT_01f6c5e0 + iVar2) = *(undefined4 *)(local_fc + 0x1b0);
      *(undefined4 *)(&DAT_01f6c5e4 + iVar2) = *(undefined4 *)(local_fc + 0x1b4);
      *(undefined4 *)(&DAT_01f6c5e8 + iVar2) = *(undefined4 *)(local_fc + 0x1b8);
      *(undefined4 *)(&DAT_01f6c5ec + iVar2) = *(undefined4 *)(local_fc + 0x1bc);
      *(undefined4 *)(&DAT_01f6c650 + iVar2) = *(undefined4 *)(local_fc + 0x1c0);
      *(undefined4 *)(&DAT_01f6c654 + iVar2) = *(undefined4 *)(local_fc + 0x1c4);
      *(undefined4 *)(&DAT_01f6c658 + iVar2) = *(undefined4 *)(local_fc + 0x1c8);
      *(undefined4 *)(&DAT_01f6c65c + iVar2) = *(undefined4 *)(local_fc + 0x1cc);
      *(undefined4 *)(&DAT_01f6c6c0 + iVar2) = *(undefined4 *)(local_fc + 0x1d0);
      *(undefined4 *)(&DAT_01f6c6c4 + iVar2) = *(undefined4 *)(local_fc + 0x1d4);
      *(undefined4 *)(&DAT_01f6c6c8 + iVar2) = *(undefined4 *)(local_fc + 0x1d8);
      *(undefined4 *)(&DAT_01f6c6cc + iVar2) = *(undefined4 *)(local_fc + 0x1dc);
      *(undefined4 *)(&DAT_01f6c730 + iVar2) = *(undefined4 *)(local_fc + 0x1e0);
      *(undefined4 *)(&DAT_01f6c734 + iVar2) = *(undefined4 *)(local_fc + 0x1e4);
      *(undefined4 *)(&DAT_01f6c738 + iVar2) = *(undefined4 *)(local_fc + 0x1e8);
      *(undefined4 *)(&DAT_01f6c73c + iVar2) = *(undefined4 *)(local_fc + 0x1ec);
    }
    local_f4 = (float)((int)local_f4 + 1);
  } while ((uint)local_f4 < 7);
  iVar2 = FUN_00c12740(0);
  _DAT_01f6c924 = *(undefined4 *)(iVar2 + 0x98);
  _DAT_01f6c928 = *(undefined4 *)(iVar2 + 0x9c);
  _DAT_01f6c92c = *(undefined4 *)(iVar2 + 0x1e0);
  _DAT_01f6c930 = *(undefined4 *)(iVar2 + 0x1e4);
  if ((DAT_01bea084 & 0x2000000) != 0) {
    _DAT_01f6c918 = 0;
    _DAT_01f6c91c = 0;
    if (DAT_01be8e54 != 0) {
      _DAT_01f6c8d0 = *(undefined4 *)(DAT_01be8e54 + 0x40);
      _DAT_01f6c8d4 = *(undefined4 *)(DAT_01be8e54 + 0x44);
      _DAT_01f6c8d8 = *(undefined4 *)(DAT_01be8e54 + 0x48);
      _DAT_01f6c8dc = *(undefined4 *)(DAT_01be8e54 + 0x4c);
      _DAT_01f6c8f0 = 0;
      _DAT_01f6c8f4 = 0;
      _DAT_01f6c8f8 = 0;
      _DAT_01f6c8fc = 0x3f800000;
    }
    _DAT_01f6c8e0 = _DAT_01be85f0;
    _DAT_01f6c8e4 = _DAT_01be85f4;
    FUN_00fba040(DAT_01f6c900);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

// 00FC1ED0  FUN_00fc1ed0  size=62  [run]
undefined4 __thiscall FUN_00fc1ed0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 == 0) {
    return 0;
  }
  FUN_00fbffb0(3000,param_2);
  FUN_00fbffb0(3000,*(undefined4 *)(param_1 + 0x3c));
  return 1;
}

// 00FC1F10  FUN_00fc1f10  size=168  [run]
void __fastcall FUN_00fc1f10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar2 = *(undefined4 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = (undefined4 *)puVar2[2]
      ) {
    (**(code **)(*(int *)*puVar2 + 4))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x38);
  for (puVar1 = *(undefined4 **)(param_1 + 0x34); puVar1 != puVar2; puVar1 = (undefined4 *)puVar1[2]
      ) {
    (**(code **)(*(int *)*puVar1 + 4))();
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 4);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
  }
  return;
}

// 00FC1FC0  FUN_00fc1fc0  size=159  [run]
void __fastcall FUN_00fc1fc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  return;
}

// 00FC2100  FUN_00fc2100  size=65  [run]
void __fastcall FUN_00fc2100(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00FC2150  FUN_00fc2150  size=105  [run]
int * __thiscall FUN_00fc2150(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 4);
  iVar2 = *(int *)(*param_3 + 8);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
  }
  *(int *)(*param_3 + 4) = iVar2;
  *(int *)(*param_3 + 8) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

