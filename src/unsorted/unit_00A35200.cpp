// src/unsorted/unit_00A35200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A35200..00A36040, 3 functions

#include "types.h"

// 00A35200  FUN_00a35200  size=1470  [run]
void __fastcall FUN_00a35200(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x14c);
  piVar4 = (int *)(param_1 + 0x120);
  puVar3 = (undefined4 *)(param_1 + 0xa8);
  do {
    puVar3[-2] = 0x3f800000;
    puVar3[-1] = 0x3f800000;
    *puVar3 = 0x3f800000;
    puVar3[1] = 0x3f800000;
    *piVar4 = (-(uint)(iVar5 != 0) & 0xffffffe1) + 0x1f;
    *(undefined1 *)(param_1 + 0x140 + iVar5) = 0;
    *puVar2 = 0x3f800000;
    puVar2[1] = 0x3f800000;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0x3f800000;
    puVar2[4] = 0x3f800000;
    puVar2[5] = 0x3f800000;
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 4;
    piVar4 = piVar4 + 1;
    puVar2 = puVar2 + 7;
  } while (iVar5 < 8);
  puVar2 = (undefined4 *)(param_1 + 0x22c);
  iVar5 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x47c);
  puVar1 = (undefined4 *)(param_1 + 0x278);
  piVar4 = (int *)(param_1 + 0x310);
  do {
    puVar2[-1] = 0x41200000;
    *puVar2 = 0;
    puVar1[-2] = 0x3f800000;
    puVar1[-1] = 0x3f800000;
    *puVar1 = 0x3f800000;
    iVar6 = (-(uint)(iVar5 != 0) & 0xffffffe1) + 0x1f;
    puVar1[1] = 0x3f800000;
    piVar4[-8] = iVar6;
    *piVar4 = iVar6;
    piVar4[8] = iVar6;
    *(undefined1 *)(param_1 + 0x350 + iVar5) = 0;
    puVar3[-0x48] = 0x3f800000;
    puVar3[-0x47] = 0x3f800000;
    puVar3[-0x46] = 0x3f800000;
    puVar3[-0x45] = 0x3f800000;
    puVar3[-0x44] = 0x3f800000;
    puVar3[-0x43] = 0x3f800000;
    piVar4[0x4a] = 0x3f800000;
    piVar4[0x52] = 0x3f800000;
    *puVar3 = 0x3f800000;
    puVar3[1] = 0x3f800000;
    puVar3[2] = 0x3f800000;
    puVar3[3] = 0x3f800000;
    puVar3[4] = 0x3f800000;
    puVar3[5] = 0x3f800000;
    puVar3[0x38] = 0x3f800000;
    puVar3[0x39] = 0x3f800000;
    puVar3[0x3a] = 0x3f800000;
    puVar3[0x3b] = 0x3f800000;
    puVar3[0x3c] = 0x3f800000;
    puVar3[0x3d] = 0x3f800000;
    *(undefined4 *)(param_1 + 0x10) = 0x41200000;
    *(undefined4 *)(param_1 + 0x14) = 0x41200000;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x30) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x38) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x34) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x40) = 0x3e19999a;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x50) = 0x3ecccccd;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x60) = 0x41800000;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x447a0000;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x70) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x74) = 0x451c4000;
    puVar2 = puVar2 + 2;
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    iVar5 = iVar5 + 1;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    puVar3 = puVar3 + 7;
    *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x84) = 0x3e4ccccd;
    *(undefined4 *)(param_1 + 0x88) = 0x3ba3d70a;
    *(undefined4 *)(param_1 + 0x8c) = 0x40400000;
    *(undefined4 *)(param_1 + 0x90) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x94) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x638) = 0;
    *(undefined4 *)(param_1 + 0x950) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x954) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0x461c4000;
    *(undefined4 *)(param_1 + 0x94c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x948) = 0x3f800000;
    puVar1[0xf4] = 0x3f800000;
    puVar1[0xf5] = 0x3f800000;
    puVar1[0xf2] = 0x42b40000;
    puVar1[0xf3] = 0;
    puVar1[0x112] = 0x42b40000;
    puVar1[0x113] = 0;
    puVar1[0x114] = 0x3f800000;
    puVar1[0x115] = 0x3f800000;
    puVar1[0x132] = 0x42b40000;
    puVar1[0x133] = 0;
    puVar1[0x134] = 0;
    puVar1[0x135] = 0;
    puVar1[0x152] = 0x42b40000;
    puVar1[0x153] = 0;
    puVar1[0x154] = 0;
    puVar1[0x155] = 0;
    piVar4[0x192] = -1;
    piVar4[0x19a] = -1;
    piVar4[0x1a2] = -1;
    piVar4[0x1aa] = -1;
    puVar1[0x1da] = 0;
    puVar1[0x1db] = 0;
    puVar1[0x1dc] = 0;
    puVar1[0x1dd] = 0;
    puVar1 = puVar1 + 4;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 8);
  *(undefined4 *)(param_1 + 0xae0) = 0;
  *(undefined4 *)(param_1 + 0xae4) = 0;
  *(undefined4 *)(param_1 + 0xae8) = 0;
  *(undefined4 *)(param_1 + 0xaec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(undefined4 *)(param_1 + 0xb64) = 0;
  *(undefined4 *)(param_1 + 0xb68) = 0;
  *(undefined4 *)(param_1 + 0xb6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  *(undefined4 *)(param_1 + 0xaf4) = 0;
  *(undefined4 *)(param_1 + 0xaf8) = 0;
  *(undefined4 *)(param_1 + 0xafc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb70) = 0;
  *(undefined4 *)(param_1 + 0xb74) = 0;
  *(undefined4 *)(param_1 + 0xb78) = 0;
  *(undefined4 *)(param_1 + 0xb7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb00) = 0;
  *(undefined4 *)(param_1 + 0xb04) = 0;
  *(undefined4 *)(param_1 + 0xb08) = 0;
  *(undefined4 *)(param_1 + 0xb0c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  *(undefined4 *)(param_1 + 0xb84) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0;
  *(undefined4 *)(param_1 + 0xb8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb10) = 0;
  *(undefined4 *)(param_1 + 0xb14) = 0;
  *(undefined4 *)(param_1 + 0xb18) = 0;
  *(undefined4 *)(param_1 + 0xb1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb90) = 0;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0xb98) = 0;
  *(undefined4 *)(param_1 + 0xb9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb20) = 0;
  *(undefined4 *)(param_1 + 0xb24) = 0;
  *(undefined4 *)(param_1 + 0xb28) = 0;
  *(undefined4 *)(param_1 + 0xb2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xba0) = 0;
  *(undefined4 *)(param_1 + 0xba4) = 0;
  *(undefined4 *)(param_1 + 0xba8) = 0;
  *(undefined4 *)(param_1 + 0xbac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  *(undefined4 *)(param_1 + 0xb38) = 0;
  *(undefined4 *)(param_1 + 0xb3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbb0) = 0;
  *(undefined4 *)(param_1 + 0xbb4) = 0;
  *(undefined4 *)(param_1 + 3000) = 0;
  *(undefined4 *)(param_1 + 0xbbc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc0) = 0;
  iVar5 = 0x20;
  *(undefined4 *)(param_1 + 0xbc4) = 0;
  *(undefined4 *)(param_1 + 0xbc8) = 0;
  *(undefined4 *)(param_1 + 0xbcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb50) = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined4 *)(param_1 + 0xb5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbd0) = 0;
  *(undefined4 *)(param_1 + 0xbd4) = 0;
  *(undefined4 *)(param_1 + 0xbd8) = 0;
  *(undefined4 *)(param_1 + 0xbdc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xbe0) = 0;
  *(undefined4 *)(param_1 + 0xbe8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbe4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x400;
  *(undefined4 *)(param_1 + 0xbec) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xbf0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xbf4) = 0x3f000000;
  puVar2 = (undefined4 *)(param_1 + 0xc18);
  do {
    puVar2[-5] = 0;
    puVar2[0x12] = 0;
    puVar2[-4] = 0;
    *(undefined1 *)((int)puVar2 + 0x41) = 0x1f;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    iVar5 = iVar5 + -1;
    puVar2[1] = 0x3f800000;
    puVar2[2] = 0x3f800000;
    puVar2[3] = 0x3f800000;
    puVar2[4] = 0x3f800000;
    puVar2[5] = 0x3f800000;
    puVar2[6] = 0x3f800000;
    puVar2[7] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0xffffffff;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined1 *)(puVar2 + 0x10) = 0;
    *(undefined1 *)((int)puVar2 + 0x42) = 0;
    puVar2[0x11] = 0;
    puVar2[0x14] = 0x3f800000;
    puVar2[0x15] = 0x3f800000;
    puVar2[0x16] = 0x3f800000;
    puVar2[0x17] = 0x3f800000;
    puVar2[0x18] = 0x3f800000;
    puVar2[0x19] = 0x3f800000;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2 = puVar2 + 0x24;
  } while (iVar5 != 0);
  return;
}

// 00A357C0  FUN_00a357c0  size=2159  [run]
void __thiscall FUN_00a357c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  int local_4;
  
  local_1c = (undefined4 *)(param_1 + 0x140);
  puVar5 = (undefined4 *)(param_2 + 0xac);
  iVar4 = param_2 - param_1;
  local_10 = 8;
  puVar2 = (undefined4 *)(param_1 + 0x150);
  puVar7 = (undefined4 *)(param_1 + 0x120);
  puVar3 = (undefined4 *)(param_2 + 0x150);
  puVar6 = (undefined4 *)(param_1 + 0xa4);
  do {
    puVar6[-1] = puVar5[-3];
    *puVar6 = *(undefined4 *)(iVar4 + -0x10 + (int)(puVar6 + 4));
    puVar6[1] = puVar5[-1];
    puVar6[2] = *puVar5;
    *puVar7 = *(undefined4 *)(iVar4 + (int)puVar7);
    *(undefined1 *)local_1c = *(undefined1 *)((int)local_1c + iVar4);
    puVar2[-1] = puVar3[-1];
    local_1c = (undefined4 *)((int)local_1c + 1);
    *puVar2 = *puVar3;
    puVar5 = puVar5 + 4;
    local_10 = local_10 + -1;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
    puVar2[4] = puVar3[4];
    puVar2 = puVar2 + 7;
    puVar7 = puVar7 + 1;
    puVar3 = puVar3 + 7;
    puVar6 = puVar6 + 4;
  } while (local_10 != 0);
  local_18 = (undefined1 *)(param_1 + 0x350);
  local_1c = (undefined4 *)(param_2 + 0x330);
  local_c = (undefined4 *)(param_2 + 0x22c);
  puVar5 = (undefined4 *)(param_1 + 0x228);
  puVar2 = (undefined4 *)(param_2 + 0x360);
  puVar7 = (undefined4 *)(param_1 + 0x360);
  local_4 = 8;
  puVar3 = (undefined4 *)(param_1 + 0x274);
  puVar6 = (undefined4 *)(param_2 + 0x27c);
  local_14 = (undefined4 *)(param_1 + 0x2f0);
  do {
    *puVar5 = *(undefined4 *)((int)puVar5 + iVar4);
    puVar5[1] = *local_c;
    puVar3[-1] = puVar6[-3];
    *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
    puVar3[1] = puVar6[-1];
    puVar3[2] = *puVar6;
    *local_14 = *(undefined4 *)((int)local_14 + iVar4);
    local_14[8] = local_1c[-8];
    local_14[0x10] = *local_1c;
    *local_18 = local_18[iVar4];
    puVar7[-1] = puVar2[-1];
    *puVar7 = *puVar2;
    puVar7[1] = puVar2[1];
    puVar7[2] = puVar2[2];
    puVar7[3] = puVar2[3];
    puVar7[4] = puVar2[4];
    local_14[0x52] = local_1c[0x42];
    local_14[0x5a] = local_1c[0x4a];
    puVar7[0x47] = puVar2[0x47];
    puVar7[0x48] = puVar2[0x48];
    puVar7[0x49] = puVar2[0x49];
    puVar7[0x4a] = puVar2[0x4a];
    puVar7[0x4b] = puVar2[0x4b];
    puVar7[0x4c] = puVar2[0x4c];
    puVar7[0x7f] = puVar2[0x7f];
    puVar7[0x80] = puVar2[0x80];
    puVar7[0x81] = puVar2[0x81];
    puVar7[0x82] = puVar2[0x82];
    puVar7[0x83] = puVar2[0x83];
    puVar7[0x84] = puVar2[0x84];
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_2 + 0x638);
    *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_2 + 0x950);
    *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_2 + 0x954);
    puVar3[0xf3] = puVar6[0xf1];
    puVar3[0xf4] = puVar6[0xf2];
    local_c = local_c + 2;
    local_18 = local_18 + 1;
    puVar3[0xf5] = puVar6[0xf3];
    puVar3[0xf6] = puVar6[0xf4];
    puVar7 = puVar7 + 7;
    puVar3[0x113] = puVar6[0x111];
    puVar2 = puVar2 + 7;
    puVar3[0x114] = puVar6[0x112];
    puVar3[0x115] = puVar6[0x113];
    puVar3[0x116] = puVar6[0x114];
    puVar3[0x133] = puVar6[0x131];
    puVar3[0x134] = puVar6[0x132];
    puVar3[0x135] = puVar6[0x133];
    puVar3[0x136] = puVar6[0x134];
    puVar3[0x153] = puVar6[0x151];
    puVar3[0x154] = puVar6[0x152];
    puVar3[0x155] = puVar6[0x153];
    puVar3[0x156] = puVar6[0x154];
    *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_2 + 0x940);
    *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(param_2 + 0x944);
    *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_2 + 0x948);
    *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_2 + 0x94c);
    local_14[0x19a] = local_1c[0x18a];
    local_14[0x1a2] = local_1c[0x192];
    local_14[0x1aa] = local_1c[0x19a];
    puVar1 = local_1c + 0x1a2;
    local_1c = local_1c + 1;
    local_14[0x1b2] = *puVar1;
    puVar3[0x1db] = puVar6[0x1d9];
    puVar5 = puVar5 + 2;
    local_4 = local_4 + -1;
    puVar3[0x1dc] = puVar6[0x1da];
    puVar3[0x1dd] = puVar6[0x1db];
    puVar3[0x1de] = puVar6[0x1dc];
    puVar3 = puVar3 + 4;
    puVar6 = puVar6 + 4;
    local_14 = local_14 + 1;
  } while (local_4 != 0);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
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
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xae0) = *(undefined4 *)(param_2 + 0xae0);
  *(undefined4 *)(param_1 + 0xae4) = *(undefined4 *)(param_2 + 0xae4);
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_2 + 0xae8);
  *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(param_2 + 0xaec);
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_2 + 0xb60);
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_2 + 0xb64);
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0xb68);
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_2 + 0xb6c);
  *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_2 + 0xaf0);
  *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(param_2 + 0xaf4);
  *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_2 + 0xaf8);
  *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_2 + 0xafc);
  *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_2 + 0xb70);
  *(undefined4 *)(param_1 + 0xb74) = *(undefined4 *)(param_2 + 0xb74);
  *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_2 + 0xb78);
  *(undefined4 *)(param_1 + 0xb7c) = *(undefined4 *)(param_2 + 0xb7c);
  *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_2 + 0xb00);
  *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(param_2 + 0xb04);
  *(undefined4 *)(param_1 + 0xb08) = *(undefined4 *)(param_2 + 0xb08);
  *(undefined4 *)(param_1 + 0xb0c) = *(undefined4 *)(param_2 + 0xb0c);
  *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(param_2 + 0xb80);
  *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(param_2 + 0xb84);
  *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_2 + 0xb88);
  *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(param_2 + 0xb8c);
  *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_2 + 0xb10);
  *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0xb14);
  *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xb18);
  *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xb1c);
  *(undefined4 *)(param_1 + 0xb90) = *(undefined4 *)(param_2 + 0xb90);
  *(undefined4 *)(param_1 + 0xb94) = *(undefined4 *)(param_2 + 0xb94);
  *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(param_2 + 0xb98);
  *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(param_2 + 0xb9c);
  *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(param_2 + 0xb20);
  *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(param_2 + 0xb24);
  *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(param_2 + 0xb28);
  *(undefined4 *)(param_1 + 0xb2c) = *(undefined4 *)(param_2 + 0xb2c);
  *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_2 + 0xba0);
  *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_2 + 0xba4);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_2 + 0xba8);
  *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_2 + 0xbac);
  *(undefined4 *)(param_1 + 0xb30) = *(undefined4 *)(param_2 + 0xb30);
  *(undefined4 *)(param_1 + 0xb34) = *(undefined4 *)(param_2 + 0xb34);
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_2 + 0xb38);
  *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_2 + 0xb3c);
  *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0xbb0);
  *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_2 + 0xbb4);
  *(undefined4 *)(param_1 + 3000) = *(undefined4 *)(param_2 + 3000);
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_2 + 0xbbc);
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_2 + 0xb40);
  *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_2 + 0xb44);
  *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_2 + 0xb48);
  *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_2 + 0xb4c);
  *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_2 + 0xbc0);
  *(undefined4 *)(param_1 + 0xbc4) = *(undefined4 *)(param_2 + 0xbc4);
  *(undefined4 *)(param_1 + 0xbc8) = *(undefined4 *)(param_2 + 0xbc8);
  *(undefined4 *)(param_1 + 0xbcc) = *(undefined4 *)(param_2 + 0xbcc);
  *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_2 + 0xb50);
  *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(param_2 + 0xb54);
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xb58);
  *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_2 + 0xb5c);
  *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(param_2 + 0xbd0);
  *(undefined4 *)(param_1 + 0xbd4) = *(undefined4 *)(param_2 + 0xbd4);
  *(undefined4 *)(param_1 + 0xbd8) = *(undefined4 *)(param_2 + 0xbd8);
  *(undefined4 *)(param_1 + 0xbdc) = *(undefined4 *)(param_2 + 0xbdc);
  *(undefined1 *)(param_1 + 0xbe0) = *(undefined1 *)(param_2 + 0xbe0);
  *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_2 + 0xbe4);
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_2 + 0xbe8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)(param_2 + 0xbec);
  *(undefined4 *)(param_1 + 0xbf0) = *(undefined4 *)(param_2 + 0xbf0);
  *(undefined4 *)(param_1 + 0xbf4) = *(undefined4 *)(param_2 + 0xbf4);
  return;
}

// 00A36040  FUN_00a36040  size=228  [run]
void __thiscall FUN_00a36040(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  return;
}

