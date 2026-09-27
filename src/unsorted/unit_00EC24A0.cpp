// src/unsorted/unit_00EC24A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC24A0..00EC2C80, 5 functions

#include "types.h"

// 00EC24A0  FUN_00ec24a0  size=373  [run]
void __thiscall FUN_00ec24a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  return;
}

// 00EC2620  FUN_00ec2620  size=12  [run]
undefined4 __fastcall FUN_00ec2620(undefined4 param_1)

{
  Hw::cTexture::cTexture_6();
  return param_1;
}

// 00EC2960  FUN_00ec2960  size=80  [run]
void __fastcall FUN_00ec2960(int param_1)

{
  _memset((void *)(param_1 + 0x1c),0,0x4c);
  _memset((void *)(param_1 + 0x68),0,0x4c);
  _memset((void *)(param_1 + 0xb4),0,0x4c);
  *(void **)(param_1 + 8) = (void *)(param_1 + 0x1c);
  *(void **)(param_1 + 0xc) = (void *)(param_1 + 0x68);
  *(void **)(param_1 + 0x10) = (void *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x12;
  return;
}

// 00EC2A50  FUN_00ec2a50  size=252  [run]
void __fastcall FUN_00ec2a50(void *param_1)

{
  _memset(param_1,0,0x560);
  *(undefined4 *)((int)param_1 + 0x400) = 0;
  *(undefined4 *)((int)param_1 + 0x404) = 0;
  *(undefined4 *)((int)param_1 + 0x408) = 0;
  *(undefined4 *)((int)param_1 + 0x40c) = 0;
  *(undefined4 *)((int)param_1 + 0x410) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x414) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x418) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x41c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x444) = 0x461c4000;
  *(undefined4 *)((int)param_1 + 0x4c4) = 0x461c4000;
  *(undefined4 *)((int)param_1 + 0x4e4) = 0x461c4000;
  *(undefined4 *)((int)param_1 + 0x504) = 0x461c4000;
  *(undefined4 *)((int)param_1 + 0x524) = 0x461c4000;
  *(undefined4 *)((int)param_1 + 0x46c) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x484) = 0x3dcccccd;
  *(undefined4 *)((int)param_1 + 0x47c) = 0x43160000;
  *(undefined1 *)((int)param_1 + *(int *)((int)param_1 + 0x448) * 2 + 0x44c) = 0x40;
  *(undefined1 *)((int)param_1 + *(int *)((int)param_1 + 0x448) * 2 + 0x44d) = 0x40;
  *(int *)((int)param_1 + 0x448) = *(int *)((int)param_1 + 0x448) + 1;
  *(undefined1 *)((int)param_1 + *(int *)((int)param_1 + 0x448) * 2 + 0x44c) = 0x80;
  *(undefined1 *)((int)param_1 + *(int *)((int)param_1 + 0x448) * 2 + 0x44d) = 0x80;
  *(int *)((int)param_1 + 0x448) = *(int *)((int)param_1 + 0x448) + 1;
  *(undefined1 *)((int)param_1 + *(int *)((int)param_1 + 0x448) * 2 + 0x44c) = 0xc0;
  *(undefined1 *)((int)param_1 + *(int *)((int)param_1 + 0x448) * 2 + 0x44d) = 0xc0;
  *(int *)((int)param_1 + 0x448) = *(int *)((int)param_1 + 0x448) + 1;
  return;
}

// 00EC2C80  FUN_00ec2c80  size=71  [run]
int __fastcall FUN_00ec2c80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 5;
  iVar1 = param_1 + 8;
  do {
    FUN_00401040(iVar1,0x1c,0x20,Hw::cTexture::cTexture_6);
    iVar1 = iVar1 + 0x388;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x1838) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x183c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1834) = 3;
  return param_1;
}

