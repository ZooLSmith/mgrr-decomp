// src/ui/cUIDrawString.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3D30..00CE6B40, 10 functions

#include "types.h"

// 00CB3D30  cUIDrawString::vf18  size=14  [class]
void cUIDrawString::vf18(void)

{
  FUN_00dd5650(&DAT_016b72f4);
  return;
}

// 00CCF0D0  cUIDrawString::cUIDrawString  size=261  [class]
undefined4 * __fastcall cUIDrawString::cUIDrawString(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00cce470();
  param_1[1] = 0;
  param_1[9] = 1;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x1c] = 0x3f800000;
  param_1[0x1d] = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x2c] = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0x3f800000;
  param_1[0x33] = 0x3f800000;
  param_1[0x34] = 0;
  return param_1;
}

// 00CCF1E0  cUIDrawString::vf08  size=6  [class]
undefined4 cUIDrawString::vf08(void)

{
  return 4;
}

// 00CCF1F0  cUIDrawString::vf00  size=31  [class]
undefined4 * __thiscall cUIDrawString::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIDrawBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCF210  FUN_00ccf210  size=332  [between]
void __thiscall FUN_00ccf210(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  *(undefined4 *)(param_1 + 0xc) = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = param_2[3];
  *(undefined4 *)(param_1 + 0x14) = param_2[7];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 0x20) = param_2[6];
  *(int *)(param_1 + 0x24) = (int)*(char *)(param_2 + 8);
  *(int *)(param_1 + 0x28) = (int)*(char *)((int)param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x2c) = param_2[0x16];
  *(undefined4 *)(param_1 + 0x30) = param_2[0x17];
  *(undefined4 *)(param_1 + 0x5c) = param_2[9];
  *(undefined4 *)(param_1 + 0x60) = param_2[0xb];
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 0x15);
  uVar1 = param_2[0xe];
  uVar2 = param_2[0xf];
  uVar3 = param_2[0x10];
  *(undefined4 *)(param_1 + 0x68) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x78) = param_2[10];
  *(undefined4 *)(param_1 + 0x7c) = param_2[0xc];
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)((int)param_2 + 0x56);
  uVar1 = param_2[0x12];
  uVar2 = param_2[0x13];
  uVar3 = param_2[0x14];
  *(undefined4 *)(param_1 + 0x84) = param_2[0x11];
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x90);
  return;
}

// 00CCF520  cUIDrawString::vf10  size=48  [class]
void __thiscall
cUIDrawString::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00cc86d0(param_1 + 0x18,param_1 + 0x1c,param_1 + 0x20,param_3,param_4,param_5);
  }
  return;
}

// 00CCF550  FUN_00ccf550  size=170  [between]
undefined4 __thiscall FUN_00ccf550(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  pcVar2 = (char *)(param_1 + 0x34);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((pcVar2 != (char *)(param_1 + 0x35)) && (-1 < *(int *)(param_1 + 0x14))) {
    *param_2 = param_1 + 0x34;
    param_2[1] = *(int *)(param_1 + 0x14);
    param_2[3] = *(int *)(param_1 + 0x18);
    param_2[4] = *(int *)(param_1 + 0x1c);
    param_2[5] = *(int *)(param_1 + 0x20);
    param_2[6] = 0x3f800000;
    param_2[7] = 0x3f800000;
    param_2[8] = 0x3f800000;
    param_2[9] = 0x3f800000;
    param_2[10] = 0x3f800000;
    param_2[0xb] = 0x3f800000;
    param_2[0xc] = 0x3f800000;
    param_2[0xd] = 0x3f800000;
    param_2[0xe] = 0;
    param_2[0xf] = *(int *)(param_1 + 0xc);
    param_2[0x10] = *(int *)(param_1 + 0x10);
    param_2[0x16] = 0;
    param_2[0x398] = *(int *)(param_1 + 0x94);
    piVar4 = (int *)(param_1 + 0xf98);
    piVar5 = param_2 + 0x3ae;
    for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    return 1;
  }
  return 0;
}

// 00CCF600  cUIDrawString::vf0C  size=59  [class]
void __fastcall cUIDrawString::vf0C(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ccf550(param_1 + 0xe0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xf9c) == 0) {
      FUN_00cb1930(param_1 + 0xe0,*(undefined4 *)(param_1 + 0x54));
    }
    *(undefined4 *)(param_1 + 0xf9c) = 0;
  }
  return;
}

// 00CE6AB0  FUN_00ce6ab0  size=131  [callgraph]
undefined4 __thiscall FUN_00ce6ab0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ccf550(param_1 + 0xe0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x60);
  FUN_00ce4450(param_1 + 0xe0);
  return 1;
}

// 00CE6B40  cUIDrawString::vf14  size=447  [class]
void __thiscall cUIDrawString::vf14(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_50 [19];
  
  iVar1 = FUN_00ce6ab0(param_3);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x138) != 0)) &&
     ((*(int *)(param_1 + 0xf98) == 0 || (*(int *)(param_1 + 0xfa8) != 0)))) {
    puVar2 = param_3;
    puVar4 = local_50;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00cacde0(local_50,param_3[0x1b]);
    if (*param_2 != 0) {
      puVar2 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20);
      if (puVar2 != (undefined4 *)0x0) {
        cMsgPrimWorkBase::cMsgPrimWorkBase();
        *puVar2 = cMsgPrimWork::vftable;
        FUN_00cb10b0(param_2,*(undefined4 *)(param_1 + 0x130),0);
        iVar1 = param_3[0x1b];
        puVar2[0x49] = iVar1;
        puVar2[0x4b] = (uint)(iVar1 == 3);
        FUN_00cb0a10(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
        FUN_00cb0980(local_50,param_3[0x1a],0);
        FUN_00ce4380(param_1 + 0x5c,param_1 + 0x78);
        uVar3 = param_3[0x1d];
        puVar2[0x16] = *(undefined4 *)(param_1 + 0x134);
        puVar2[0x29] = uVar3;
        FUN_00cb1440(param_1 + 0x140,*(undefined4 *)(param_1 + 0x130));
        puVar2[0x48] = param_3[0x20];
        FUN_00cb0910();
        if (param_3[0x1e] == 2) {
          FUN_00a30800(puVar2,0x3e,0);
          return;
        }
        if (param_3[0x1e] == 1) {
          uVar3 = FUN_00cb3840(param_3[0x1f],param_3[0x1c]);
          FUN_00a30800(puVar2,0x69,uVar3);
          return;
        }
        if (param_3[0x1b] == 3) {
          FUN_00a30800(puVar2,0x61,0);
          return;
        }
        uVar3 = FUN_00cb3840(param_3[0x1f],param_3[0x1c]);
        FUN_00a30800(puVar2,0x67,uVar3);
      }
    }
  }
  return;
}

