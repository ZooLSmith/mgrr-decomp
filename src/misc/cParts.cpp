// src/misc/cParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A07410..00A193C0, 6 functions

#include "types.h"

// 00A07410  cParts::cParts_2  size=175  [class]
void __fastcall cParts::cParts_2(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[4] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  *(undefined2 *)((int)param_1 + 0xa2) = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0xffff;
  param_1[0x29] = 0;
  return;
}

// 00A074D0  FUN_00a074d0  size=193  [between]
void __thiscall FUN_00a074d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_2 + 0x10);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  *(undefined2 *)(param_1 + 0xa2) = 0;
  if (param_3 != 0) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_2 + 0xa2) & 4;
  }
  return;
}

// 00A07600  FUN_00a07600  size=94  [between]
void __fastcall FUN_00a07600(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-4] == 0) {
      FUN_00dd4940(puVar1 + -4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
    param_1[1] = 0;
  }
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}

// 00A07660  FUN_00a07660  size=225  [between]
undefined4 __thiscall FUN_00a07660(int *param_1,ushort param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  FUN_00a07600();
  if (param_2 == 0) {
    return 1;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar5 = (uint)(short)param_2;
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0xb0 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0xb0);
  puVar1 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar3) | uVar3 + 0x10,param_4);
  if (puVar1 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar1 + 4;
    *puVar1 = uVar5;
    FUN_00401040(puVar4,0xb0,uVar5,cParts::cParts_2);
  }
  *param_1 = (int)puVar4;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar5 * 4),param_4);
  param_1[1] = iVar2;
  if ((*param_1 != 0) && (iVar2 != 0)) {
    iVar2 = 0;
    if (0 < (short)param_2) {
      uVar3 = (uint)param_2;
      do {
        *(undefined4 *)(iVar2 + param_1[1]) = 0;
        iVar2 = iVar2 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    *(ushort *)(param_1 + 2) = param_2;
    param_1[3] = param_3;
    return 1;
  }
  return 0;
}

// 00A07750  cParts::vf00  size=93  [class]
undefined4 * __thiscall cParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 & 2) == 0) {
    *param_1 = vftable;
    if ((param_2 & 1) != 0) {
      FUN_00dd4920(param_1);
    }
    return param_1;
  }
  iVar1 = param_1[-4];
  puVar2 = param_1 + iVar1 * 0x2c;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar2 = puVar2 + -0x2c;
    *puVar2 = vftable;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4940(param_1 + -4);
  }
  return param_1 + -4;
}

// 00A193C0  cParts::cParts  size=185  [class]
void __fastcall cParts::cParts(undefined4 *param_1)

{
  *param_1 = cModelBase::vftable;
  FUN_00a07600();
  FUN_00a159c0();
  param_1[0x60] = 0xbf800000;
  param_1[0x61] = 0xbf800000;
  param_1[0x62] = 0xbf800000;
  param_1[99] = 0xbf800000;
  param_1[0x68] = 1;
  param_1[0x66] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x65] = 0x3f59999a;
  *param_1 = vftable;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  return;
}

