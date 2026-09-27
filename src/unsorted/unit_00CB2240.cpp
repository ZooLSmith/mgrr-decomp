// src/unsorted/unit_00CB2240.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB2240..00CB3840, 48 functions

#include "types.h"

// 00CB2240  FUN_00cb2240  size=10  [run]
void __thiscall FUN_00cb2240(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

// 00CB2250  FUN_00cb2250  size=180  [run]
undefined4 FUN_00cb2250(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 10;
  uVar2 = 0xb;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = 1;
  }
  else if (param_2 == 1) {
    uVar1 = 2;
    uVar2 = 3;
  }
  else if (param_2 == 2) {
    uVar1 = 4;
    uVar2 = 5;
  }
  else if (param_2 == 3) {
    uVar1 = 6;
    uVar2 = 7;
  }
  else if (param_2 == 4) {
    uVar1 = 8;
    uVar2 = 9;
  }
  else if (param_2 == 6) {
    uVar1 = 0xc;
    uVar2 = 0xd;
  }
  else if (param_2 == 7) {
    uVar1 = 0xe;
    uVar2 = 0xf;
  }
  else if (param_2 == 8) {
    uVar1 = 0x14;
    uVar2 = 0x15;
  }
  else if (param_2 == 9) {
    uVar1 = 0x16;
    uVar2 = 0x17;
  }
  else if (param_2 == 10) {
    uVar1 = 0x18;
    uVar2 = 0x19;
  }
  else if (param_2 == 0xb) {
    uVar1 = 0x1a;
    uVar2 = 0x1b;
  }
  if ((param_1 != 1) && (uVar1 = uVar2, param_1 != 2)) {
    uVar1 = 6;
  }
  return uVar1;
}

// 00CB2310  FUN_00cb2310  size=40  [run]
void __thiscall FUN_00cb2310(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = param_3;
  }
  return;
}

// 00CB2340  FUN_00cb2340  size=53  [run]
void __thiscall FUN_00cb2340(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x3ee) = 1;
    *(undefined4 *)(iVar1 + 0x3d4) = param_3;
    *(undefined4 *)(iVar1 + 0x3d0) = param_3;
  }
  return;
}

// 00CB2380  FUN_00cb2380  size=67  [run]
void __thiscall
FUN_00cb2380(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3d8) = param_3;
    *(undefined1 *)(iVar1 + 0x3ec) = param_5;
    *(undefined1 *)(iVar1 + 0x3ed) = 0;
    *(undefined4 *)(iVar1 + 0x3dc) = param_4;
  }
  return;
}

// 00CB23D0  FUN_00cb23d0  size=47  [run]
void __thiscall FUN_00cb23d0(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x3ed) = param_3;
    *(undefined1 *)(iVar1 + 0x3ee) = 1;
  }
  return;
}

// 00CB2480  FUN_00cb2480  size=41  [run]
undefined4 __thiscall FUN_00cb2480(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x3b0);
  }
  return 0;
}

// 00CB24B0  FUN_00cb24b0  size=51  [run]
undefined4 __thiscall FUN_00cb24b0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) &&
     (((*(uint *)(iVar1 + 0x80) <= param_2 ||
       (iVar1 = param_2 * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 == 0)) ||
      (*(char *)(iVar1 + 0x3ed) != '\0')))) {
    return 1;
  }
  return 0;
}

// 00CB2570  FUN_00cb2570  size=15  [run]
void __fastcall FUN_00cb2570(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cab4a0();
    return;
  }
  return;
}

// 00CB25B0  FUN_00cb25b0  size=32  [run]
bool __fastcall FUN_00cb25b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return false;
  }
  iVar1 = FUN_00cab580();
  return iVar1 != 0;
}

// 00CB25D0  FUN_00cb25d0  size=36  [run]
uint __thiscall FUN_00cb25d0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (param_2 - 1U < 99)) {
    return (uint)*(ushort *)(*(int *)(param_1 + 0x18) + 0x86 + param_2 * 2);
  }
  return 0xffffffff;
}

// 00CB2600  FUN_00cb2600  size=17  [run]
void __thiscall FUN_00cb2600(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = param_2;
  }
  return;
}

// 00CB2620  FUN_00cb2620  size=12  [run]
undefined4 __fastcall FUN_00cb2620(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
}

// 00CB2630  FUN_00cb2630  size=20  [run]
void __thiscall FUN_00cb2630(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = param_2;
  }
  return;
}

// 00CB2660  FUN_00cb2660  size=12  [run]
undefined4 __fastcall FUN_00cb2660(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18);
}

// 00CB2670  FUN_00cb2670  size=10  [run]
bool __fastcall FUN_00cb2670(int param_1)

{
  return *(int *)(param_1 + 4) == -1;
}

// 00CB2680  FUN_00cb2680  size=28  [run]
void __thiscall FUN_00cb2680(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x18) + 0x10);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

// 00CB26D0  FUN_00cb26d0  size=50  [run]
void __thiscall FUN_00cb26d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = *param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = uVar2;
    return;
  }
  return;
}

// 00CB2710  FUN_00cb2710  size=39  [run]
void __thiscall FUN_00cb2710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = param_4;
  }
  return;
}

// 00CB2740  FUN_00cb2740  size=17  [run]
void __thiscall FUN_00cb2740(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x5c) = param_2;
  }
  return;
}

// 00CB2760  FUN_00cb2760  size=40  [run]
int __thiscall FUN_00cb2760(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00CB2790  FUN_00cb2790  size=37  [run]
int __thiscall FUN_00cb2790(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00CB27C0  FUN_00cb27c0  size=224  [run]
void __thiscall FUN_00cb27c0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (iVar1 = param_2 * 0x400, *(int *)(iVar2 + 0x7c) + 0x2a0 + iVar1 != 0)) {
    if (param_2 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + iVar1;
    }
    else {
      iVar2 = 0;
    }
    fVar3 = (float10)FUN_00ddb510(*param_3,0);
    *(float *)(iVar2 + 0xc0) = (float)fVar3;
    iVar2 = *(int *)(param_1 + 0x18);
    if ((iVar2 == 0) || (*(uint *)(iVar2 + 0x80) <= param_2)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + iVar1;
    }
    fVar3 = (float10)FUN_00ddb510(param_3[1],0);
    *(float *)(iVar2 + 0xc4) = (float)fVar3;
    iVar2 = *(int *)(param_1 + 0x18);
    if ((iVar2 == 0) || (*(uint *)(iVar2 + 0x80) <= param_2)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x7c) + 0x2a0 + iVar1;
    }
    fVar3 = (float10)FUN_00ddb510(param_3[2],0);
    *(float *)(iVar1 + 200) = (float)fVar3;
  }
  return;
}

// 00CB28A0  FUN_00cb28a0  size=89  [run]
void __thiscall FUN_00cb28a0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      iVar1 = *(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400;
    }
    else {
      iVar1 = 0;
    }
    fVar2 = (float10)FUN_00ddb510(param_3,0);
    *(float *)(iVar1 + 0xc0) = (float)fVar2;
  }
  return;
}

// 00CB2900  FUN_00cb2900  size=89  [run]
void __thiscall FUN_00cb2900(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      iVar1 = *(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400;
    }
    else {
      iVar1 = 0;
    }
    fVar2 = (float10)FUN_00ddb510(param_3,0);
    *(float *)(iVar1 + 0xc4) = (float)fVar2;
  }
  return;
}

// 00CB29C0  FUN_00cb29c0  size=104  [run]
void __thiscall FUN_00cb29c0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      iVar1 = *(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400;
    }
    else {
      iVar1 = 0;
    }
    *(undefined4 *)(iVar1 + 0xe0) = *param_3;
    *(undefined4 *)(iVar1 + 0xe4) = param_3[1];
    *(undefined4 *)(iVar1 + 0xe8) = param_3[2];
    *(undefined4 *)(iVar1 + 0xec) = param_3[3];
  }
  return;
}

// 00CB2A30  FUN_00cb2a30  size=87  [run]
void __thiscall FUN_00cb2a30(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x7c) + param_2 * 0x400 + 0x380) = param_3;
      return;
    }
    uRam000000e0 = param_3;
  }
  return;
}

// 00CB2A90  FUN_00cb2a90  size=87  [run]
void __thiscall FUN_00cb2a90(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x7c) + param_2 * 0x400 + 900) = param_3;
      return;
    }
    uRam000000e4 = param_3;
  }
  return;
}

// 00CB2AF0  FUN_00cb2af0  size=87  [run]
void __thiscall FUN_00cb2af0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x7c) + param_2 * 0x400 + 0x388) = param_3;
      return;
    }
    uRam000000e8 = param_3;
  }
  return;
}

// 00CB2BC0  FUN_00cb2bc0  size=87  [run]
void __thiscall FUN_00cb2bc0(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x7c) + param_2 * 0x400 + 0x370) = param_3;
      return;
    }
    uRam000000d0 = param_3;
  }
  return;
}

// 00CB2C20  FUN_00cb2c20  size=87  [run]
void __thiscall FUN_00cb2c20(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar1 + 0x80)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x7c) + param_2 * 0x400 + 0x374) = param_3;
      return;
    }
    uRam000000d4 = param_3;
  }
  return;
}

// 00CB2CE0  FUN_00cb2ce0  size=62  [run]
void __thiscall FUN_00cb2ce0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 1)) {
    piVar1[9] = param_3;
  }
  return;
}

// 00CB2D20  FUN_00cb2d20  size=62  [run]
void __thiscall FUN_00cb2d20(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 3)) {
    piVar1[0x1b] = param_3;
  }
  return;
}

// 00CB2D60  FUN_00cb2d60  size=227  [run]
void __thiscall FUN_00cb2d60(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 3)) {
    piVar1[0x5c] = 0;
    piVar1[0x5d] = 0;
    piVar1[0x5e] = 1;
    piVar1[0x5f] = 0;
    piVar1[0x60] = 0;
    piVar1[0x61] = 0;
    piVar1[0x62] = 0;
    piVar1[99] = 0;
    piVar1[100] = 0;
    piVar1[0x65] = 0;
    piVar1[0x66] = 0;
    piVar1[0x67] = 0;
    piVar1[0x68] = 0;
    piVar1[0x69] = 0;
    piVar1[0x6a] = 0;
    piVar1[0x6b] = 0;
    piVar1[0x6c] = 0;
    piVar1[0x6d] = 0;
    piVar1[0x6e] = 0;
    piVar1[0x6f] = 0;
    piVar1[0x70] = 0;
    piVar1[0x71] = 3;
    piVar1[0x72] = 0xc;
  }
  return;
}

// 00CB2E50  FUN_00cb2e50  size=67  [run]
int __thiscall FUN_00cb2e50(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      return piVar1[0x5c];
    }
  }
  return 0;
}

// 00CB2F10  FUN_00cb2f10  size=67  [run]
int * __thiscall FUN_00cb2f10(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      return piVar1 + 0x5c;
    }
  }
  return (int *)0x0;
}

// 00CB2F60  FUN_00cb2f60  size=115  [run]
void __thiscall FUN_00cb2f60(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_3 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_3 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      iVar2 = piVar1[0x3f];
      param_2[1] = piVar1[0x40];
      *param_2 = iVar2;
      return;
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
  return;
}

// 00CB2FE0  FUN_00cb2fe0  size=62  [run]
void __thiscall FUN_00cb2fe0(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 3)) {
    piVar1[3] = param_3;
  }
  return;
}

// 00CB30B0  FUN_00cb30b0  size=227  [run]
void __thiscall FUN_00cb30b0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
     && (iVar2 = (**(code **)(*piVar1 + 8))(), iVar2 == 4)) {
    piVar1[0x3e6] = 0;
    piVar1[999] = 0;
    piVar1[1000] = 1;
    piVar1[0x3e9] = 0;
    piVar1[0x3ea] = 0;
    piVar1[0x3eb] = 0;
    piVar1[0x3ec] = 0;
    piVar1[0x3ed] = 0;
    piVar1[0x3ee] = 0;
    piVar1[0x3ef] = 0;
    piVar1[0x3f0] = 0;
    piVar1[0x3f1] = 0;
    piVar1[0x3f2] = 0;
    piVar1[0x3f3] = 0;
    piVar1[0x3f4] = 0;
    piVar1[0x3f5] = 0;
    piVar1[0x3f6] = 0;
    piVar1[0x3f7] = 0;
    piVar1[0x3f8] = 0;
    piVar1[0x3f9] = 0;
    piVar1[0x3fa] = 0;
    piVar1[0x3fb] = 3;
    piVar1[0x3fc] = 0xc;
  }
  return;
}

// 00CB31A0  FUN_00cb31a0  size=67  [run]
int __thiscall FUN_00cb31a0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 4) {
      return piVar1[0x3e6];
    }
  }
  return 0;
}

// 00CB3240  FUN_00cb3240  size=85  [run]
void __thiscall FUN_00cb3240(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_3 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_3 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      iVar2 = piVar1[2];
      *param_2 = piVar1[1];
      param_2[1] = iVar2;
      return;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

// 00CB32A0  FUN_00cb32a0  size=85  [run]
void __thiscall FUN_00cb32a0(int param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_3 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_3 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      iVar2 = piVar1[4];
      *param_2 = piVar1[3];
      param_2[1] = iVar2;
      return;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

// 00CB3300  FUN_00cb3300  size=68  [run]
int * __thiscall FUN_00cb3300(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  if ((param_2 < *(uint *)(iVar2 + 0x80)) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 0) {
      return piVar1 + 4;
    }
  }
  return (int *)0x0;
}

// 00CB3350  FUN_00cb3350  size=55  [run]
void __thiscall FUN_00cb3350(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
      (iVar2 = param_2 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
     ((piVar1 = *(int **)(iVar2 + 0x3f4), piVar1 != (int *)0x0 && (piVar1[1] == 2)))) {
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}

// 00CB33D0  FUN_00cb33d0  size=867  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00cb33d0(int param_1,uint param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  
  fVar3 = _DAT_01dc2cc4;
  fVar2 = _DAT_01dc2cc0;
  if ((_DAT_01dc2cc0 == *(float *)(param_1 + 0x30)) && (_DAT_01dc2cc4 == *(float *)(param_1 + 0x34))
     ) {
    fVar1 = *(float *)(param_1 + 0x24) / *(float *)(param_1 + 0x1c);
    *(float *)(param_1 + 0x24) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x20)) {
LAB_00cb342e:
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar1;
    if (*(float *)(param_1 + 0x20) < fVar1) goto LAB_00cb342e;
  }
  if (*(float *)(param_1 + 0x30) <= fVar2) {
    if ((*(float *)(param_1 + 0x30) < fVar2) &&
       (fVar1 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x24),
       *(float *)(param_1 + 0x30) = fVar1, fVar2 < fVar1)) goto LAB_00cb3470;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x30) = fVar1;
    if (fVar1 < fVar2) {
LAB_00cb3470:
      *(float *)(param_1 + 0x30) = fVar2;
    }
  }
  if (*(float *)(param_1 + 0x34) <= fVar3) {
    if ((fVar3 <= *(float *)(param_1 + 0x34)) ||
       (fVar1 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x24),
       *(float *)(param_1 + 0x34) = fVar1, fVar1 <= fVar3)) goto LAB_00cb34b2;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x34) = fVar1;
    if (fVar3 <= fVar1) goto LAB_00cb34b2;
  }
  *(float *)(param_1 + 0x34) = fVar3;
LAB_00cb34b2:
  iVar5 = *(int *)(param_1 + 0x18);
  fVar1 = param_3 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x50);
  fVar4 = fRam000000e0;
  if ((((iVar5 != 0) && (param_2 < *(uint *)(iVar5 + 0x80))) &&
      (*(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) &&
     (fVar4 = fVar1, param_2 < *(uint *)(iVar5 + 0x80))) {
    *(float *)(*(int *)(iVar5 + 0x7c) + 0x380 + param_2 * 0x400) = fVar1;
    fVar4 = fRam000000e0;
  }
  fRam000000e0 = fVar4;
  iVar5 = *(int *)(param_1 + 0x18);
  fVar1 = param_4 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x54);
  fVar4 = fRam000000e4;
  if (((iVar5 != 0) && (param_2 < *(uint *)(iVar5 + 0x80))) &&
     ((*(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0 &&
      (fVar4 = fVar1, param_2 < *(uint *)(iVar5 + 0x80))))) {
    *(float *)(*(int *)(iVar5 + 0x7c) + 900 + param_2 * 0x400) = fVar1;
    fVar4 = fRam000000e4;
  }
  fRam000000e4 = fVar4;
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (param_2 < *(uint *)(iVar5 + 0x80))) &&
     (*(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar5 + 0x80)) {
      iVar5 = *(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400;
    }
    else {
      iVar5 = 0;
    }
    fVar6 = (float10)FUN_00ddb510(param_5 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x40),
                                  0);
    *(float *)(iVar5 + 0xc0) = (float)fVar6;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (param_2 < *(uint *)(iVar5 + 0x80))) &&
     (*(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar5 + 0x80)) {
      iVar5 = *(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400;
    }
    else {
      iVar5 = 0;
    }
    fVar6 = (float10)FUN_00ddb510(*(float *)(param_1 + 0x44) - param_6 * *(float *)(param_1 + 0x30),
                                  0);
    *(float *)(iVar5 + 0xc4) = (float)fVar6;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (param_2 < *(uint *)(iVar5 + 0x80))) &&
     (*(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400 != 0)) {
    if (param_2 < *(uint *)(iVar5 + 0x80)) {
      iVar5 = *(int *)(iVar5 + 0x7c) + 0x2a0 + param_2 * 0x400;
    }
    else {
      iVar5 = 0;
    }
    fVar6 = (float10)FUN_00ddb510(*(undefined4 *)(param_1 + 0x48),0);
    *(float *)(iVar5 + 200) = (float)fVar6;
  }
  *(float *)(param_1 + 0x70) = param_5 * *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x74) = -(param_6 * *(float *)(param_1 + 0x30));
  *(float *)(param_1 + 0x80) = param_3 * *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x84) = param_4 * *(float *)(param_1 + 0x34);
  if (fVar2 == 0.0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x30) * 20.0;
  }
  if (fVar3 == 0.0) {
    *(undefined4 *)(param_1 + 100) = 0;
    return;
  }
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0x34) * 20.0;
  return;
}

// 00CB37A0  FUN_00cb37a0  size=72  [run]
void FUN_00cb37a0(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != -1)) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x74);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x70);
      return;
    }
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x18) = 1;
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}

// 00CB37F0  FUN_00cb37f0  size=72  [run]
void FUN_00cb37f0(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != -1)) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x54);
      return;
    }
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 *)(param_1 + 0x24) = 1;
    }
  }
  return;
}

// 00CB3840  FUN_00cb3840  size=44  [run]
int FUN_00cb3840(int param_1,int param_2)

{
  if (DAT_01dc5030 != 0) {
    if (param_1 == 0) {
      return param_2 + -1;
    }
    if ((param_1 != 1) && (param_1 == 2)) {
      return param_2 + 1;
    }
  }
  return param_2;
}

