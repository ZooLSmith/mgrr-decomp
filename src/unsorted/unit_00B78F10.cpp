// src/unsorted/unit_00B78F10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B78F10..00B798A0, 12 functions

#include "mgrr.h"

// 00B78F10  FUN_00b78f10  size=93  [run]
void __thiscall FUN_00b78f10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x4b0) == 0x11013) {
    uVar2 = 0;
    uVar1 = FUN_00a7c8a0(0);
    FUN_004039a0(param_2,uVar1,uVar2);
    FUN_00dffb20(param_3);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  }
  return;
}

// 00B78F70  FUN_00b78f70  size=138  [run]
void __fastcall FUN_00b78f70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0xa00) != 0) {
    *(undefined4 *)(param_1 + 0xa00) = 0;
    FUN_00eaa6e0(0x41200000,0);
    if (*(int *)(param_1 + 0x4b0) == 0x11013) {
      uVar2 = 0;
      uVar1 = FUN_00a7c8a0(0);
      FUN_004039a0(0,uVar1,uVar2);
      FUN_00dffb20(param_1 + 0xa10);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    }
  }
  return;
}

// 00B79000  FUN_00b79000  size=138  [run]
void __fastcall FUN_00b79000(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0xa00) != 1) {
    *(undefined4 *)(param_1 + 0xa00) = 1;
    FUN_00eaa6e0(0x41200000,0);
    if (*(int *)(param_1 + 0x4b0) == 0x11013) {
      uVar2 = 0;
      uVar1 = FUN_00a7c8a0(0);
      FUN_004039a0(1,uVar1,uVar2);
      FUN_00dffb20(param_1 + 0xa10);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    }
  }
  return;
}

// 00B79090  FUN_00b79090  size=138  [run]
void __fastcall FUN_00b79090(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0xa00) != 2) {
    *(undefined4 *)(param_1 + 0xa00) = 2;
    FUN_00eaa6e0(0x41200000,0);
    if (*(int *)(param_1 + 0x4b0) == 0x11013) {
      uVar2 = 0;
      uVar1 = FUN_00a7c8a0(0);
      FUN_004039a0(2,uVar1,uVar2);
      FUN_00dffb20(param_1 + 0xa10);
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    }
  }
  return;
}

// 00B79180  FUN_00b79180  size=45  [run]
undefined4 FUN_00b79180(void)

{
  int iVar1;
  undefined1 local_20 [28];
  
  iVar1 = FUN_008e0ce0(local_20);
  if (*(float *)(iVar1 + 4) < 0.0) {
    return 1;
  }
  return 0;
}

// 00B79400  FUN_00b79400  size=39  [run]
int __fastcall FUN_00b79400(int param_1)

{
  FUN_00a7c930();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}

// 00B794F0  FUN_00b794f0  size=103  [run]
undefined4 __thiscall FUN_00b794f0(int *param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar2 = FUN_00c26190();
    if (iVar2 != 0) {
      if ((((*(byte *)(param_1 + 2) & 1) == 0) && (param_3 == 0)) &&
         (fVar1 = (float)param_1[1], param_1[1] = (int)(fVar1 - param_2), fVar1 - param_2 < 0.0)) {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        return 0;
      }
      return 1;
    }
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return 0;
}

// 00B79560  FUN_00b79560  size=43  [run]
undefined4 __fastcall FUN_00b79560(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(*param_1 + 0x34) != 0)) {
      FUN_00a81330();
      uVar2 = FUN_00a7c8a0();
      return uVar2;
    }
  }
  return 0;
}

// 00B79650  FUN_00b79650  size=29  [run]
undefined4 __thiscall FUN_00b79650(int param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (param_2 == '\x01') {
    return *(undefined4 *)(param_1 + 0x10);
  }
  if (param_2 == '\x02') {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}

// 00B796F0  FUN_00b796f0  size=44  [run]
undefined4 __fastcall FUN_00b796f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x12b4) != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x12b4) + 0x34) != 0)) {
      uVar2 = FUN_00a81330();
      return uVar2;
    }
  }
  return 0;
}

// 00B797D0  FUN_00b797d0  size=39  [run]
void __fastcall FUN_00b797d0(undefined4 param_1)

{
  DAT_01dc08d4 = 1;
  DAT_01dc08d8 = 0;
  FUN_00e5e0c0("core_se_btl_char_zan",param_1,0xffffffff,0);
  return;
}

// 00B798A0  FUN_00b798a0  size=54  [run]
void __thiscall FUN_00b798a0(int param_1,float param_2)

{
  if ((0.0 < *(float *)(param_1 + 0x3be4)) &&
     (param_2 = *(float *)(param_1 + 0x3be4) - param_2, *(float *)(param_1 + 0x3be4) = param_2,
     param_2 < 0.0)) {
    *(undefined4 *)(param_1 + 0x3be4) = 0;
    return;
  }
  return;
}

