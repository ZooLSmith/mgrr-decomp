// src/unsorted/unit_00F92350.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F92350..00F93020, 18 functions

#include "mgrr.h"

// 00F92350  FUN_00f92350  size=289  [run]
void __thiscall FUN_00f92350(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  puVar3 = (uint *)(param_1 + 0x30);
  puVar4 = (uint *)(param_2 + 1);
  do {
    if (*param_2 == -1) {
      if (local_8 < 0x10) {
        return;
      }
      break;
    }
    puVar3[-1] = *(uint *)(*(int *)(param_1 + 0xf8) + local_8 * 4);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar5 = puVar4[-1];
    if (((uVar1 != 3) && (uVar5 != 3)) && (uVar2 != 3)) {
      if (uVar5 == 1) {
        *puVar3 = *puVar3 & 0xe1ffffff | 0x1000000;
      }
      if ((*puVar3 & 0x1f000000) != 0x1000000) {
        uVar5 = 3;
        uVar1 = 3;
      }
      *puVar3 = ((uVar1 & 0xf) << 4 | uVar2 & 0xf) << 4 | *puVar3 & 0xfffff000 | uVar5 & 0xf;
    }
    *puVar3 = ((puVar4[3] & 0xf | 0x30) << 4 | puVar4[2] & 0xf) << 0xc | *puVar3 & 0xff300fff;
    uVar1 = puVar4[4];
    uVar2 = (uVar1 << 0x18 ^ *puVar3) & 0x1f000000 ^ *puVar3;
    *puVar3 = uVar2;
    if (uVar1 != 1) {
      *puVar3 = uVar2 & 0xfffff3f3 | 0x303;
    }
    param_2 = param_2 + 6;
    local_8 = local_8 + 1;
    puVar4 = puVar4 + 6;
    puVar3 = puVar3 + 3;
  } while (local_8 < 0x10);
  FUN_00dd5650(&DAT_016ea39c);
  return;
}

// 00F92480  FUN_00f92480  size=55  [run]
void __thiscall FUN_00f92480(int param_1,byte param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + (param_3 * 3 + 0xc) * 4);
  *puVar1 = *puVar1 ^ ((uint)param_2 << 0x18 ^ *puVar1) & 0x1f000000;
  if (param_2 != 1) {
    *puVar1 = *puVar1 & 0xfffff3f3 | 0x303;
  }
  return;
}

// 00F924C0  FUN_00f924c0  size=71  [run]
void __thiscall FUN_00f924c0(int param_1,byte param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    uVar3 = (uint)(param_2 & 0x1f) << 0x18;
    puVar2 = (uint *)(param_1 + 0x30);
    do {
      uVar1 = *puVar2;
      *puVar2 = uVar1 & 0xe0ffffff | uVar3;
      if (param_2 != 1) {
        *puVar2 = uVar1 & 0xe0fff3f3 | uVar3 | 0x303;
      }
      puVar2 = puVar2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00F92600  FUN_00f92600  size=227  [run]
undefined4 __thiscall FUN_00f92600(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00fa01a0(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x148,"g_WorldViewProj");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x154,"g_MatrialColor");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 0x160,"g_Sampler0");
        if (iVar1 != 0) {
          FUN_00f9e6d0(param_1 + 0x16c,"g_SetTangent");
          FUN_00f9e6d0(param_1 + 0x178,"g_SetNormal");
          FUN_00f9e6d0(param_1 + 0x184,"g_SetColor");
          uVar2 = 2;
          iVar1 = 2;
          if ((*(byte *)(param_1 + 0x16b) & 0x1f) != 1) {
            uVar2 = 3;
            iVar1 = 3;
          }
          *(uint *)(param_1 + 0x168) =
               iVar1 << 8 | *(uint *)(param_1 + 0x168) & 0xfffff020 | uVar2 | 0x20;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00F926F0  FUN_00f926f0  size=99  [run]
void __thiscall FUN_00f926f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x16b) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x168) = iVar1 << 8 | *(uint *)(param_1 + 0x168) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x160,uVar2);
  return;
}

// 00F92760  FUN_00f92760  size=102  [run]
undefined4 __thiscall FUN_00f92760(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x16b) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x168) = iVar1 << 8 | *(uint *)(param_1 + 0x168) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa1d50(param_1 + 0x160,param_2);
  return uVar2;
}

// 00F92810  FUN_00f92810  size=118  [run]
undefined4 __thiscall FUN_00f92810(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00fa01a0(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00fa39a0(param_1 + 0x148,"g_Sampler0");
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x153) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x150) = iVar1 << 8 | *(uint *)(param_1 + 0x150) & 0xfffff020 | uVar2 | 0x20;
  return 1;
}

// 00F92890  FUN_00f92890  size=99  [run]
void __thiscall FUN_00f92890(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x153) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x150) = iVar1 << 8 | *(uint *)(param_1 + 0x150) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x148,uVar2);
  return;
}

// 00F929A0  FUN_00f929a0  size=99  [run]
void __thiscall FUN_00f929a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x153) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x150) = iVar1 << 8 | *(uint *)(param_1 + 0x150) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x148,uVar2);
  return;
}

// 00F92A10  FUN_00f92a10  size=102  [run]
undefined4 __thiscall FUN_00f92a10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x153) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x150) = iVar1 << 8 | *(uint *)(param_1 + 0x150) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa1d50(param_1 + 0x148,param_2);
  return uVar2;
}

// 00F92A80  FUN_00f92a80  size=227  [run]
undefined4 __thiscall FUN_00f92a80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00fa01a0(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x16c,"g_WorldArray");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x178,"g_MatrialColor");
      if (iVar1 != 0) {
        iVar1 = FUN_00fa39a0(param_1 + 0x184,"g_Sampler0");
        if (iVar1 != 0) {
          FUN_00f9e6d0(param_1 + 0x148,"g_SetTangent");
          FUN_00f9e6d0(param_1 + 0x154,"g_SetNormal");
          FUN_00f9e6d0(param_1 + 0x160,"g_SetColor");
          uVar2 = 2;
          iVar1 = 2;
          if ((*(byte *)(param_1 + 399) & 0x1f) != 1) {
            uVar2 = 3;
            iVar1 = 3;
          }
          *(uint *)(param_1 + 0x18c) =
               iVar1 << 8 | *(uint *)(param_1 + 0x18c) & 0xfffff020 | uVar2 | 0x20;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00F92B70  FUN_00f92b70  size=99  [run]
void __thiscall FUN_00f92b70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 399) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x18c) = iVar1 << 8 | *(uint *)(param_1 + 0x18c) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x184,uVar2);
  return;
}

// 00F92BE0  FUN_00f92be0  size=102  [run]
undefined4 __thiscall FUN_00f92be0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 399) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x18c) = iVar1 << 8 | *(uint *)(param_1 + 0x18c) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa1d50(param_1 + 0x184,param_2);
  return uVar2;
}

// 00F92C50  FUN_00f92c50  size=199  [run]
undefined4 __thiscall FUN_00f92c50(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00fa01a0(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00fa39a0(param_1 + 0x148,"g_Sampler0");
  FUN_00fa39a0(param_1 + 0x154,"g_Sampler1");
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x153) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x150) = iVar1 << 8 | *(uint *)(param_1 + 0x150) & 0xfffff020 | uVar2 | 0x20;
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x15f) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x15c) = iVar1 << 8 | *(uint *)(param_1 + 0x15c) & 0xfffff020 | uVar2 | 0x20;
  return 1;
}

// 00F92D20  FUN_00f92d20  size=99  [run]
void __thiscall FUN_00f92d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x153) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x150) = iVar1 << 8 | *(uint *)(param_1 + 0x150) & 0xfffff020 | uVar3 | 0x20;
  uVar2 = FUN_00fa0740(param_3);
  FUN_00fa1d50(param_1 + 0x148,uVar2);
  return;
}

// 00F92D90  FUN_00f92d90  size=89  [run]
void __thiscall FUN_00f92d90(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 2;
  iVar1 = 2;
  if ((*(byte *)(param_1 + 0x153) & 0x1f) != 1) {
    uVar2 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x150) = iVar1 << 8 | *(uint *)(param_1 + 0x150) & 0xfffff020 | uVar2 | 0x20;
  FUN_00fa1d50(param_1 + 0x148,param_2);
  return;
}

// 00F92DF0  FUN_00f92df0  size=90  [run]
void __fastcall FUN_00f92df0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x15f) & 0x1f) != 1) {
    uVar3 = 3;
    iVar1 = 3;
  }
  *(uint *)(param_1 + 0x15c) = iVar1 << 8 | *(uint *)(param_1 + 0x15c) & 0xfffff000 | uVar3;
  uVar2 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x154,uVar2);
  return;
}

// 00F93020  FUN_00f93020  size=123  [run]
undefined4 __thiscall
FUN_00f93020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  
  iVar1 = FUN_00f9e770(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00f8fed0(param_4);
  FUN_00f8ff60(param_5);
  FUN_00f8ffd0(param_6);
  *(undefined4 *)(param_1 + 0x100) = param_7;
  *(undefined4 *)(param_1 + 0x104) = param_8;
  FUN_00f92350(param_9);
  *(undefined4 *)(param_1 + 0x10c) = param_11;
  *(undefined4 *)(param_1 + 0x108) = param_10;
  return 1;
}

