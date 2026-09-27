// src/misc/Fw.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4B9A0..00F5E2C0, 7 functions

#include "mgrr.h"

// 00F4B9A0  Fw::StringCopy  size=142  [class]
undefined4 __thiscall
Fw::StringCopy(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_00ec4720(param_2,param_4,param_5);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016dfeb8);
    return 0;
  }
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((int)(pcVar3 + (1 - (int)(param_3 + 1))) < 0x10) {
    FID_conflict__memcpy
              ((void *)(param_1 + 0x2c),param_3,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
  }
  else {
    FUN_00dd5650("[Fw::StringCopy] len + 1 < size");
  }
  FUN_00f4b160();
  FUN_00f4b330();
  FUN_00f498f0();
  *(undefined4 *)(param_1 + 0x3c) = 1;
  return 1;
}

// 00F5DF60  Fw::StringCopyCat  size=132  [class]
void Fw::StringCopyCat(char *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t _Size;
  undefined1 local_44;
  undefined4 uStack_43;
  undefined1 auStack_3f [59];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_44;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Size = (int)pcVar2 - (int)(param_1 + 1);
  if ((int)(_Size + 5) < 0x40) {
    FID_conflict__memcpy(&local_44,param_1,_Size);
    *(undefined4 *)(&local_44 + _Size) = 0x6f73762e;
    *(undefined1 *)((int)&uStack_43 + _Size + 3) = 0;
  }
  else {
    FUN_00dd5650("[Fw::StringCopyCat] len0 + len1 + 1 < size");
  }
  FUN_00de3d80(0,&local_44);
  __security_check_cookie(local_4 ^ (uint)&local_44);
  return;
}

// 00F5DFF0  Fw::StringCopyCat_2  size=132  [class]
void Fw::StringCopyCat_2(char *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t _Size;
  undefined1 local_44;
  undefined4 uStack_43;
  undefined1 auStack_3f [59];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_44;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Size = (int)pcVar2 - (int)(param_1 + 1);
  if ((int)(_Size + 5) < 0x40) {
    FID_conflict__memcpy(&local_44,param_1,_Size);
    *(undefined4 *)(&local_44 + _Size) = 0x6f73702e;
    *(undefined1 *)((int)&uStack_43 + _Size + 3) = 0;
  }
  else {
    FUN_00dd5650("[Fw::StringCopyCat] len0 + len1 + 1 < size");
  }
  FUN_00de3d80(0,&local_44);
  __security_check_cookie(local_4 ^ (uint)&local_44);
  return;
}

// 00F5E080  FUN_00f5e080  size=309  [callgraph]
bool FUN_00f5e080(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  int local_4;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar3 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar3;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  *(undefined2 *)(param_1 + 0x428) = 0x79;
  if (*(short *)(param_1 + 0x4c) != 0x2c) {
    local_8 = 0;
    if (((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) &&
       (local_8 = 1, (*(uint *)(param_1 + 0x3c) & 0x10000000) != 0)) {
      local_8 = 3;
    }
    if ((0xfd < *(ushort *)(uVar5 + 4)) && (*(ushort *)(uVar5 + 4) < 0x100)) {
      local_8 = local_8 | 1;
    }
    if (((*(uint *)(param_1 + 0x3c) & 0x200000) != 0) && (0.01 <= ABS(*(float *)(uVar5 + 0x54)))) {
      local_8 = local_8 | 4;
      *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(uVar5 + 0x54);
    }
    if ((*(uint *)(param_1 + 0x3c) & 0x4000000) != 0) {
      local_8 = local_8 | 8;
    }
    if ((*(uint *)(param_1 + 0x38) & 0x40) != 0) {
      local_8 = local_8 | 0x10;
    }
    if ((char)*(uint *)(param_1 + 0x38) < '\0') {
      local_8 = local_8 | 0x20;
    }
    local_4 = param_1;
    local_c = uVar5;
    if (0xf < *(byte *)(uVar5 + 0x2e)) {
      sVar2 = FUN_009cf5c0(&local_c);
      *(short *)(param_1 + 0x428) = sVar2;
      return sVar2 != 0x79;
    }
    uVar1 = (*(code *)(&PTR_LAB_016e1c18)[*(byte *)(uVar5 + 0x2e)])(&local_c);
    *(undefined2 *)(param_1 + 0x428) = uVar1;
  }
  return true;
}

// 00F5E1C0  FUN_00f5e1c0  size=128  [callgraph]
void FUN_00f5e1c0(int param_1)

{
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_00f45870();
  }
  FUN_00fa1d50(&DAT_01eecc50,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eecc44,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f9eec0(&DAT_01eecc20,local_60);
  FUN_00f990e0(&DAT_01eecbf8);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F5E240  FUN_00f5e240  size=115  [callgraph]
void FUN_00f5e240(int param_1)

{
  undefined1 auStack_6c [12];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_6c;
  FUN_009e0150(local_60,param_1);
  FUN_00f9eec0(&DAT_01eeccb4,local_60);
  FUN_00fa1d50(&DAT_01eecca8,*(undefined4 *)(param_1 + 0x18));
  FUN_00fa1d50(&DAT_01eeccc0,*(undefined4 *)(param_1 + 0x1c));
  FUN_00f990e0(&DAT_01eecc68);
  __security_check_cookie(local_14 ^ (uint)auStack_6c);
  return;
}

// 00F5E2C0  FUN_00f5e2c0  size=48  [callgraph]
void FUN_00f5e2c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = Fw::StringCopyCat(param_1);
  uVar2 = Fw::StringCopyCat_2(param_1);
  FUN_00fa01a0(uVar1,uVar2);
  return;
}

