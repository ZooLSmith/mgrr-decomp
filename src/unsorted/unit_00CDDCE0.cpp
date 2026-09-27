// src/unsorted/unit_00CDDCE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDDCE0..00CDE140, 11 functions

#include "mgrr.h"

// 00CDDCE0  FUN_00cddce0  size=136  [run]
undefined4 __thiscall FUN_00cddce0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 <= *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != param_2) {
      if (iVar1 < param_2) {
        iVar3 = iVar1 * 0x30;
        iVar1 = param_2 - iVar1;
        do {
          iVar2 = *(int *)(param_1 + 4) + iVar3;
          if (iVar2 != 0) {
            FUN_00a7c930();
            *(undefined4 *)(iVar2 + 4) = 0xffffffff;
            *(undefined4 *)(iVar2 + 8) = 0xffffffff;
            *(undefined4 *)(iVar2 + 0x10) = 0;
            *(undefined4 *)(iVar2 + 0x14) = 0;
            *(undefined4 *)(iVar2 + 0x18) = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0x20) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0x24) = 0;
            *(undefined4 *)(iVar2 + 0x28) = 0;
            *(undefined4 *)(iVar2 + 0x2c) = 0;
          }
          iVar3 = iVar3 + 0x30;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    return 1;
  }
  FUN_00dd5650(&DAT_01640664);
  return 0;
}

// 00CDDD70  FUN_00cddd70  size=138  [run]
undefined4 __thiscall FUN_00cddd70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 <= *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != param_2) {
      if (iVar1 < param_2) {
        iVar3 = iVar1 << 6;
        iVar1 = param_2 - iVar1;
        do {
          iVar2 = *(int *)(param_1 + 4) + iVar3;
          if (iVar2 != 0) {
            FUN_00a7c930();
            *(undefined4 *)(iVar2 + 4) = 0xffffffff;
            *(undefined4 *)(iVar2 + 0x10) = 0;
            *(undefined4 *)(iVar2 + 0x14) = 0;
            *(undefined4 *)(iVar2 + 0x18) = 0;
            *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0x2c) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0x20) = 0;
            *(undefined4 *)(iVar2 + 0x24) = 0;
            *(undefined4 *)(iVar2 + 0x28) = 0;
            *(undefined4 *)(iVar2 + 0x30) = 1;
          }
          iVar3 = iVar3 + 0x40;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    return 1;
  }
  FUN_00dd5650(&DAT_01640664);
  return 0;
}

// 00CDDE00  FUN_00cdde00  size=43  [run]
void __fastcall FUN_00cdde00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDDE40  FUN_00cdde40  size=43  [run]
void __fastcall FUN_00cdde40(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDDE70  FUN_00cdde70  size=43  [run]
void __fastcall FUN_00cdde70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDDEA0  FUN_00cddea0  size=43  [run]
void __fastcall FUN_00cddea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDDED0  FUN_00cdded0  size=43  [run]
void __fastcall FUN_00cdded0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDE020  FUN_00cde020  size=43  [run]
void __fastcall FUN_00cde020(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDE050  FUN_00cde050  size=43  [run]
void __fastcall FUN_00cde050(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDE080  FUN_00cde080  size=43  [run]
void __fastcall FUN_00cde080(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00CDE140  FUN_00cde140  size=83  [run]
void __fastcall FUN_00cde140(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      *piVar1 = (int)(piVar1 + -4);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

