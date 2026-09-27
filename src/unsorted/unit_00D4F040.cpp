// src/unsorted/unit_00D4F040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4F040..00D4F4F0, 11 functions

#include "types.h"

// 00D4F040  FUN_00d4f040  size=107  [run]
uint __thiscall FUN_00d4f040(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      piVar1 = (int *)(*(int *)(iVar2 + 8) + 0x20);
      do {
        if (*piVar1 == param_2) {
          if (-1 < iVar3) {
            iVar2 = FUN_00d4ef90(param_1 + 0x3c);
            if (iVar2 != iVar3) {
              return (uint)(iVar3 < iVar2);
            }
            return param_3;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 0xb;
      } while (iVar3 < *(int *)(iVar2 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbc4,param_2);
  return 0;
}

// 00D4F0B0  FUN_00d4f0b0  size=111  [run]
uint __thiscall FUN_00d4f0b0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(iVar2 + 4)) {
      piVar1 = (int *)(*(int *)(iVar2 + 8) + 0x20);
      do {
        if (*piVar1 == param_2) {
          if (-1 < iVar3) {
            iVar2 = FUN_00d4ef90(param_1 + 0x3c);
            if (iVar2 != iVar3) {
              return (uint)(iVar3 < iVar2);
            }
            return param_3;
          }
          break;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 0xb;
      } while (iVar3 < *(int *)(iVar2 + 4));
    }
  }
  FUN_00dd5650(&DAT_016bcbf8,param_4);
  return 0;
}

// 00D4F120  FUN_00d4f120  size=34  [run]
void FUN_00d4f120(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e03ea0(param_1,param_2,param_1);
  FUN_00d4f0b0(uVar1,param_2,param_1);
  return;
}

// 00D4F150  FUN_00d4f150  size=9  [run]
uint __fastcall FUN_00d4f150(uint *param_1)

{
  return *param_1 >> 2 & 1;
}

// 00D4F160  FUN_00d4f160  size=9  [run]
uint __fastcall FUN_00d4f160(uint *param_1)

{
  return *param_1 >> 8 & 1;
}

// 00D4F170  FUN_00d4f170  size=192  [run]
void __fastcall FUN_00d4f170(uint *param_1)

{
  param_1[0x84] = 1;
  if (param_1[0x39] != 0xffffffff) {
    param_1[0x18] = param_1[0x39];
    param_1[0x19] = param_1[0x3a];
    param_1[0x22] = param_1[0x43];
    FID_conflict__memcpy(param_1 + 0x1a,param_1 + 0x3b,0x20);
    param_1[0x39] = 0xffffffff;
    param_1[0x3a] = 0;
    param_1[0x43] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    *param_1 = *param_1 | 0x10;
    return;
  }
  if (param_1[0x23] != 0xffffffff) {
    param_1[0x18] = param_1[0x23];
    param_1[0x19] = param_1[0x24];
    param_1[0x22] = param_1[0x2d];
    FID_conflict__memcpy(param_1 + 0x1a,param_1 + 0x25,0x20);
  }
  *param_1 = *param_1 | 0x10;
  return;
}

// 00D4F230  FUN_00d4f230  size=98  [run]
void __thiscall FUN_00d4f230(uint *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  
  param_1[0x18] = param_2;
  param_1[0x22] = 1;
  if (param_3 != (char *)0x0) {
    uVar1 = FUN_00e03ea0(param_3);
    param_1[0x19] = uVar1;
    _strcpy_s((char *)(param_1 + 0x1a),0x20,param_3);
    *param_1 = *param_1 | 0x80;
    param_1[0x7e] = 0;
    return;
  }
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *param_1 = *param_1 | 0x80;
  param_1[0x7e] = 0;
  return;
}

// 00D4F2A0  FUN_00d4f2a0  size=103  [run]
void __thiscall FUN_00d4f2a0(uint *param_1,uint param_2,char *param_3)

{
  uint uVar1;
  
  FUN_00d469a0();
  param_1[0x18] = param_2;
  param_1[0x22] = 1;
  if (param_3 != (char *)0x0) {
    uVar1 = FUN_00e03ea0(param_3);
    param_1[0x19] = uVar1;
    _strcpy_s((char *)(param_1 + 0x1a),0x20,param_3);
    *param_1 = *param_1 | 0x80;
    param_1[0x7e] = 0;
    return;
  }
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *param_1 = *param_1 | 0x80;
  param_1[0x7e] = 0;
  return;
}

// 00D4F310  FUN_00d4f310  size=195  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00d4f310(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_40;
  undefined4 local_3c [14];
  
  if ((DAT_01bea060 & 0x20000000) != 0) {
    return 0;
  }
  _memset(&local_40,0,0x30);
  local_40 = *(undefined4 *)(param_1 + 0xe4);
  puVar4 = (undefined4 *)(param_1 + 0xec);
  puVar5 = local_3c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = FUN_009c6820(0,&local_40);
  if (iVar2 == 1) {
    uVar3 = *(uint *)(param_1 + 0x34) & 0xf00;
    if (uVar3 == 0xc00) {
      iVar2 = ProgressFlagDlc2::SAVE();
    }
    else if (uVar3 == 0xd00) {
      iVar2 = ProgressFlagDlc3::SAVE();
    }
    else {
      iVar2 = ProgressFlag::SAVE();
    }
  }
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_009c8c00(0,0xffffffff);
    _DAT_018b5760 = 1;
  }
  return uVar1;
}

// 00D4F3E0  FUN_00d4f3e0  size=258  [run]
undefined4 __fastcall FUN_00d4f3e0(uint *param_1)

{
  uint *_Dst;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_40;
  char local_3c [56];
  
  iVar1 = FUN_009c44e0(0,&local_40);
  if (iVar1 != 0) {
    if ((local_40 & 0xf00) == 0xc00) {
      uVar3 = 3;
    }
    else if ((local_40 & 0xf00) == 0xd00) {
      uVar3 = 4;
    }
    else {
      uVar3 = 2;
    }
    FUN_00cad0a0(uVar3);
    param_1[0x3a] = 0;
    param_1[0x39] = 0xffffffff;
    _Dst = param_1 + 0x3b;
    *_Dst = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x39] = local_40;
    param_1[0x43] = 1;
    uVar2 = FUN_00e03ea0(local_3c);
    param_1[0x3a] = uVar2;
    _strcpy_s((char *)_Dst,0x20,local_3c);
    param_1[0x18] = param_1[0x39];
    param_1[0x19] = param_1[0x3a];
    param_1[0x22] = param_1[0x43];
    FID_conflict__memcpy(param_1 + 0x1a,_Dst,0x20);
    *param_1 = *param_1 | 0x280;
    param_1[0x7e] = 0;
    return 1;
  }
  return 0;
}

// 00D4F4F0  FUN_00d4f4f0  size=360  [run]
void __fastcall FUN_00d4f4f0(int param_1)

{
  uint uVar1;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *(undefined4 *)(param_1 + 0x130);
  uVar1 = *(uint *)(param_1 + 0x34) & 0xf00;
  local_1c = *(undefined4 *)(param_1 + 0x134);
  local_18 = *(undefined4 *)(param_1 + 0x138);
  local_14 = 0x3f800000;
  local_24 = *(undefined4 *)(param_1 + 0x14c);
  local_30 = *(float *)(param_1 + 0x140) * 0.017453292;
  local_2c = *(float *)(param_1 + 0x144) * 0.017453292;
  local_28 = *(float *)(param_1 + 0x148) * 0.017453292;
  if ((((uVar1 == 0xc00) || (uVar1 == 0xd00)) && (*(int *)(param_1 + 0x25c) != 0)) &&
     (*(int *)(param_1 + 0x260) != 0)) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x24c) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x254) = 0;
    local_20 = *(undefined4 *)(param_1 + 0x220);
    local_1c = *(undefined4 *)(param_1 + 0x224);
    local_18 = *(undefined4 *)(param_1 + 0x228);
    local_30 = 0.0;
    local_28 = 0.0;
    local_24 = 0x3f800000;
    local_2c = *(float *)(param_1 + 0x22c);
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  FUN_00da8ea0();
  FUN_00a4d790(&local_20,&local_30,1);
  return;
}

