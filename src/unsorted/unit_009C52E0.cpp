// src/unsorted/unit_009C52E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009C52E0..009C5840, 17 functions

#include "types.h"

// 009C52E0  FUN_009c52e0  size=23  [run]
void __fastcall FUN_009c52e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x7220);
  puVar3 = &DAT_01b76200;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// 009C5300  FUN_009c5300  size=39  [run]
void FUN_009c5300(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)DAT_01b6efc0 * 0.2;
  *param_1 = *param_1 * fVar1;
  param_1[1] = param_1[1] * fVar1;
  param_1[2] = fVar1 * param_1[2];
  return;
}

// 009C5330  FUN_009c5330  size=416  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009c5330(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_01f206dc < 0x557) {
    if (DAT_01f206dc == 0x556) {
      DAT_01b6efb0 = 3;
    }
    else if (DAT_01f206dc == 800) {
      DAT_01b6efb0 = 0;
    }
    else if (DAT_01f206dc == 0x400) {
      DAT_01b6efb0 = 1;
    }
    else if (DAT_01f206dc == 0x500) {
      DAT_01b6efb0 = 2;
    }
  }
  else if (DAT_01f206dc == 0x690) {
    DAT_01b6efb0 = 4;
  }
  else if (DAT_01f206dc == 0x780) {
    DAT_01b6efb0 = 5;
  }
  uVar1 = FUN_00f98920();
  switch(uVar1) {
  case 0:
    DAT_01b6efcc = 0;
    break;
  case 2:
    DAT_01b6efcc = 1;
    break;
  case 4:
    DAT_01b6efcc = 2;
    break;
  case 8:
    DAT_01b6efcc = 3;
  }
  switch(DAT_01b6efb4) {
  case 0:
    uVar1 = 1;
    break;
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 4;
    break;
  case 3:
    uVar1 = 8;
    break;
  case 4:
    uVar1 = 0x10;
    break;
  default:
    goto switchD_009c53ea_default;
  }
  FUN_00a28a50(uVar1);
switchD_009c53ea_default:
  switch(_DAT_01be1fec) {
  case 1:
    DAT_01b6efb4 = 0;
    break;
  case 2:
    DAT_01b6efb4 = 1;
    break;
  case 4:
  case 6:
    DAT_01b6efb4 = 2;
    break;
  case 8:
  case 10:
  case 0xc:
    DAT_01b6efb4 = 3;
    break;
  case 0x10:
    DAT_01b6efb4 = 4;
  }
  iVar2 = FUN_00f989f0();
  if (iVar2 == 0) {
    DAT_01b6efb8 = 1;
  }
  if (DAT_01b6efb8 == 0) {
    DAT_01bea084 = DAT_01bea084 | 0x40000000;
  }
  else if (DAT_01b6efb8 == 1) {
    DAT_01bea084 = DAT_01bea084 & 0xbfffffff;
  }
  if (DAT_01b6efbc == 0) {
    DAT_01bea084 = DAT_01bea084 & 0xffffff3f;
  }
  else {
    if (DAT_01b6efbc == 1) {
      DAT_01bea084 = DAT_01bea084 & 0xffffffbf | 0x80;
      return;
    }
    if (DAT_01b6efbc == 2) {
      DAT_01bea084 = DAT_01bea084 & 0xffffff7f | 0x40;
      return;
    }
  }
  return;
}

// 009C5530  FUN_009c5530  size=197  [run]
undefined4 FUN_009c5530(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x8e24) & 0xf00;
  if (uVar1 == 0xc00) {
    return 8;
  }
  if (uVar1 == 0xd00) {
    return 9;
  }
  uVar1 = *(uint *)(param_1 + 0x7490) & 0xf00;
  if (uVar1 < 0x401) {
    if (uVar1 == 0x400) {
      return 4;
    }
    if (uVar1 < 0x201) {
      if (uVar1 == 0x200) {
        return 2;
      }
      if (uVar1 == 0) {
        return 0;
      }
      if (uVar1 == 0x100) {
        return 1;
      }
    }
    else if (uVar1 == 0x300) {
      return 3;
    }
  }
  else if (uVar1 < 0x701) {
    if (uVar1 == 0x700) {
      return 7;
    }
    if (uVar1 == 0x500) {
      return 5;
    }
    if (uVar1 == 0x600) {
      return 6;
    }
  }
  else if (uVar1 == 0xa00) {
    return 0;
  }
  return 0xffffffff;
}

// 009C5600  FUN_009c5600  size=62  [run]
undefined4 FUN_009c5600(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00932720();
  iVar2 = FUN_00a4a320(uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00a4a3d0(uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_009c4b40(uVar1);
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return DAT_01b76234;
}

// 009C5640  FUN_009c5640  size=6  [run]
undefined4 FUN_009c5640(void)

{
  return DAT_01b76234;
}

// 009C5690  FUN_009c5690  size=8  [run]
bool __fastcall FUN_009c5690(int *param_1)

{
  return *param_1 != 0;
}

// 009C56A0  FUN_009c56a0  size=26  [run]
undefined4 __fastcall FUN_009c56a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 != 3) && (iVar1 != 7)) && (iVar1 != 6)) {
    return 0;
  }
  return 1;
}

// 009C56C0  FUN_009c56c0  size=4  [run]
int __fastcall FUN_009c56c0(int param_1)

{
  return param_1 + 0x18;
}

// 009C56D0  FUN_009c56d0  size=209  [run]
void FUN_009c56d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_8;
  
  uVar3 = FUN_009c5530(param_2);
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  *param_1 = (int)uVar3;
  local_8 = (undefined4)(longlong)ROUND(*(float *)(iVar1 + 0x47d0) * 0.016666668);
  param_1[1] = local_8;
  cVar2 = 2 < *(byte *)(iVar1 + 0x4c00);
  if (2 < *(byte *)(iVar1 + 0x4c20)) {
    cVar2 = cVar2 + '\x01';
  }
  if (2 < *(byte *)(iVar1 + 0x4c40)) {
    cVar2 = cVar2 + '\x01';
  }
  if (2 < *(byte *)(iVar1 + 0x4c60)) {
    cVar2 = cVar2 + '\x01';
  }
  *(char *)(param_1 + 2) = *(char *)(iVar1 + 0x68c0) + cVar2;
  cVar2 = 2 < *(byte *)(iVar1 + 0x4c80);
  if (2 < *(byte *)(iVar1 + 0x4ca0)) {
    cVar2 = cVar2 + '\x01';
  }
  if (2 < *(byte *)(iVar1 + 0x4cc0)) {
    cVar2 = cVar2 + '\x01';
  }
  if (2 < *(byte *)(iVar1 + 0x4ce0)) {
    cVar2 = cVar2 + '\x01';
  }
  if (2 < *(byte *)(iVar1 + 0x4d00)) {
    cVar2 = cVar2 + '\x01';
  }
  *(char *)((int)param_1 + 9) = *(char *)(iVar1 + 0x68c4) + cVar2;
  param_1[3] = *(undefined4 *)(iVar1 + 0x7250);
  return;
}

// 009C57C0  FUN_009c57c0  size=8  [run]
void __fastcall FUN_009c57c0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

// 009C57D0  FUN_009c57d0  size=4  [run]
undefined4 __fastcall FUN_009c57d0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 009C57E0  FUN_009c57e0  size=3  [run]
undefined4 FUN_009c57e0(void)

{
  return 0;
}

// 009C57F0  FUN_009c57f0  size=3  [run]
undefined4 FUN_009c57f0(void)

{
  return 0;
}

// 009C5800  FUN_009c5800  size=3  [run]
undefined4 FUN_009c5800(void)

{
  return 0;
}

// 009C5830  FUN_009c5830  size=1  [run]
void FUN_009c5830(void)

{
  return;
}

// 009C5840  FUN_009c5840  size=1  [run]
void FUN_009c5840(void)

{
  return;
}

