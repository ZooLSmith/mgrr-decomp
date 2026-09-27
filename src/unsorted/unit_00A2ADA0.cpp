// src/unsorted/unit_00A2ADA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A2ADA0..00A2D740, 8 functions

#include "types.h"

// 00A2ADA0  FUN_00a2ada0  size=119  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2ada0(int param_1)

{
  if ((_DAT_01be674c & 1) == 0) {
    _DAT_01be674c = _DAT_01be674c | 1;
    _DAT_01be672c = "m_scale";
    _DAT_01be6730 = 7;
    _DAT_01be6734 = 4;
    _DAT_01be6738 = 6;
    _DAT_01be673c = 6;
    _DAT_01be6740 = 0;
    _DAT_01be6744 = 0;
    _DAT_01be6748 = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be672c;
    *(undefined **)(param_1 + 0x14) = &DAT_01be672c;
    return;
  }
  *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be672c;
  *(undefined **)(param_1 + 0x14) = &DAT_01be672c;
  return;
}

// 00A2AE20  FUN_00a2ae20  size=1405  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2ae20(int param_1)

{
  uint uVar1;
  
  if ((DAT_01be6910 & 1) == 0) {
    DAT_01be6910 = DAT_01be6910 | 1;
    _DAT_01be68f0 = "m_flag";
    _DAT_01be68f4 = 2;
    _DAT_01be68f8 = 4;
    _DAT_01be68fc = 1;
    _DAT_01be6900 = 6;
    _DAT_01be6904 = 0;
    _DAT_01be6908 = 0;
    DAT_01be690c = 0;
  }
  uVar1 = DAT_01be6910;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be68f0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be68f0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be68f0;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01be68d0 = "m_priority";
    _DAT_01be68d4 = 6;
    _DAT_01be68d8 = 8;
    _DAT_01be68dc = 1;
    _DAT_01be68e0 = 6;
    _DAT_01be68e4 = 0;
    _DAT_01be68e8 = 0;
    DAT_01be68ec = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be68d0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be68d0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be68d0;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01be68b0 = "m_applyFlag";
    _DAT_01be68b4 = 0;
    _DAT_01be68b8 = 0x59;
    _DAT_01be68bc = 1;
    _DAT_01be68c0 = 6;
    _DAT_01be68c4 = 0;
    _DAT_01be68c8 = 0;
    DAT_01be68cc = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be68b0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be68b0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be68b0;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01be6890 = "m_pos";
    _DAT_01be6894 = 0xb;
    _DAT_01be6898 = 0x10;
    _DAT_01be689c = 1;
    _DAT_01be68a0 = 6;
    _DAT_01be68a4 = 0;
    _DAT_01be68a8 = 0;
    DAT_01be68ac = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6890;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6890;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6890;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01be6870 = "m_color";
    _DAT_01be6874 = 0xb;
    _DAT_01be6878 = 0x20;
    _DAT_01be687c = 1;
    _DAT_01be6880 = 6;
    _DAT_01be6884 = 0;
    _DAT_01be6888 = 0;
    DAT_01be688c = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6870;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6870;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6870;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01be6850 = "m_distance";
    _DAT_01be6854 = 7;
    _DAT_01be6858 = 0x30;
    _DAT_01be685c = 4;
    _DAT_01be6860 = 6;
    _DAT_01be6864 = 0;
    _DAT_01be6868 = 0;
    DAT_01be686c = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6850;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6850;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6850;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01be6830 = "m_DirAng";
    _DAT_01be6834 = 10;
    _DAT_01be6838 = 0x40;
    _DAT_01be683c = 1;
    _DAT_01be6840 = 6;
    _DAT_01be6844 = 0;
    _DAT_01be6848 = 0;
    DAT_01be684c = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6830;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6830;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6830;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01be6810 = "m_group";
    _DAT_01be6814 = 4;
    _DAT_01be6818 = 0x58;
    _DAT_01be681c = 1;
    _DAT_01be6820 = 6;
    _DAT_01be6824 = 0;
    _DAT_01be6828 = 0;
    DAT_01be682c = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6810;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6810;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6810;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01be67f0 = "m_applyScale";
    _DAT_01be67f4 = 0xf;
    _DAT_01be67f8 = 100;
    _DAT_01be67fc = 1;
    _DAT_01be6800 = 6;
    _DAT_01be6804 = 0;
    _DAT_01be6808 = 0;
    DAT_01be680c = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be67f0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be67f0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be67f0;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01be67d0 = "m_lightType";
    _DAT_01be67d4 = 0;
    _DAT_01be67d8 = 0x5a;
    _DAT_01be67dc = 1;
    _DAT_01be67e0 = 6;
    _DAT_01be67e4 = 0;
    _DAT_01be67e8 = 0;
    DAT_01be67ec = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be67d0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be67d0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be67d0;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01be67b0 = "m_lightOptionFlag";
    _DAT_01be67b4 = 2;
    _DAT_01be67b8 = 0x5c;
    _DAT_01be67bc = 1;
    _DAT_01be67c0 = 6;
    _DAT_01be67c4 = 0;
    _DAT_01be67c8 = 0;
    DAT_01be67cc = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be67b0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be67b0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be67b0;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01be6790 = "m_effectiveDist";
    _DAT_01be6794 = 7;
    _DAT_01be6798 = 0x60;
    _DAT_01be679c = 1;
    _DAT_01be67a0 = 6;
    _DAT_01be67a4 = 0;
    _DAT_01be67a8 = 0;
    DAT_01be67ac = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6790;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6790;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6790;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01be6770 = "m_anmParam.m_cycle";
    _DAT_01be6774 = 7;
    _DAT_01be6778 = 0x80;
    _DAT_01be677c = 1;
    _DAT_01be6780 = 6;
    _DAT_01be6784 = 0;
    _DAT_01be6788 = 0;
    DAT_01be678c = 0;
    DAT_01be6910 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6770;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6770;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6770;
  if ((uVar1 & 0x2000) == 0) {
    DAT_01be6910 = uVar1 | 0x2000;
    _DAT_01be6750 = "m_anmParam.m_range";
    _DAT_01be6754 = 7;
    _DAT_01be6758 = 0x84;
    _DAT_01be675c = 1;
    _DAT_01be6760 = 6;
    _DAT_01be6764 = 0;
    _DAT_01be6768 = 0;
    _DAT_01be676c = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6750;
    *(undefined **)(param_1 + 0x14) = &DAT_01be6750;
    return;
  }
  *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6750;
  *(undefined **)(param_1 + 0x14) = &DAT_01be6750;
  return;
}

// 00A2B3A0  FUN_00a2b3a0  size=30  [run]
void __thiscall FUN_00a2b3a0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  return;
}

// 00A2B3C0  FUN_00a2b3c0  size=225  [run]
void __fastcall FUN_00a2b3c0(undefined4 *param_1)

{
  param_1[2] = 0x3f800000;
  param_1[1] = 0xffffffff;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x3f800000;
  *param_1 = 0;
  param_1[5] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  param_1[0x13] = 0xffffffff;
  param_1[0x15] = 0x3f800000;
  param_1[0x18] = 0xffffffff;
  param_1[0x16] = 0x3f800000;
  param_1[0x17] = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0x3f800000;
  param_1[0x26] = 0;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0x3f800000;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0x3f800000;
  param_1[0x2e] = 0x3f800000;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x31] = &DAT_01be1f34;
  param_1[0x32] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  return;
}

// 00A2B4B0  FUN_00a2b4b0  size=258  [run]
void FUN_00a2b4b0(undefined4 param_1,float *param_2,undefined4 param_3)

{
  undefined1 auStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (param_2[2] != 0.0) {
    D3DXMatrixRotationZ(local_50,param_2[2]);
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (param_2[1] != 0.0) {
    D3DXMatrixRotationY(local_50,param_2[1]);
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  if (*param_2 != 0.0) {
    D3DXMatrixRotationX(local_50,*param_2);
    D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
  }
  D3DXMatrixMultiply(param_1,&local_90,param_3);
  return;
}

// 00A2B640  FUN_00a2b640  size=3531  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2b640(int param_1)

{
  uint uVar1;
  
  if ((DAT_01be6d58 & 1) == 0) {
    DAT_01be6d58 = DAT_01be6d58 | 1;
    _DAT_01be6d38 = "m_AmbCol";
    _DAT_01be6d3c = 0xb;
    _DAT_01be6d40 = 0xa0;
    _DAT_01be6d44 = 8;
    _DAT_01be6d48 = 6;
    _DAT_01be6d4c = 0;
    _DAT_01be6d50 = 0;
    DAT_01be6d54 = 0;
  }
  uVar1 = DAT_01be6d58;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6d38;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6d38;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6d38;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01be6d18 = "m_AmbApplyFlag";
    _DAT_01be6d1c = 2;
    _DAT_01be6d20 = 0x120;
    _DAT_01be6d24 = 8;
    _DAT_01be6d28 = 6;
    _DAT_01be6d2c = 0;
    _DAT_01be6d30 = 0;
    DAT_01be6d34 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6d18;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6d18;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6d18;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01be6cf8 = "m_AmbApplyGroup";
    _DAT_01be6cfc = 0;
    _DAT_01be6d00 = 0x140;
    _DAT_01be6d04 = 8;
    _DAT_01be6d08 = 6;
    _DAT_01be6d0c = 0;
    _DAT_01be6d10 = 0;
    DAT_01be6d14 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6cf8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6cf8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6cf8;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01be6cd8 = "m_AmbApplyScale";
    _DAT_01be6cdc = 0xf;
    _DAT_01be6ce0 = 0x148;
    _DAT_01be6ce4 = 8;
    _DAT_01be6ce8 = 6;
    _DAT_01be6cec = 0;
    _DAT_01be6cf0 = 0;
    DAT_01be6cf4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6cd8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6cd8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6cd8;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01be6cb8 = "m_DirAng";
    _DAT_01be6cbc = 9;
    _DAT_01be6cc0 = 0x228;
    _DAT_01be6cc4 = 8;
    _DAT_01be6cc8 = 6;
    _DAT_01be6ccc = 0;
    _DAT_01be6cd0 = 0;
    DAT_01be6cd4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6cb8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6cb8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6cb8;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01be6c98 = "m_DirCol";
    _DAT_01be6c9c = 0xb;
    _DAT_01be6ca0 = 0x270;
    _DAT_01be6ca4 = 8;
    _DAT_01be6ca8 = 6;
    _DAT_01be6cac = 0;
    _DAT_01be6cb0 = 0;
    DAT_01be6cb4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6c98;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6c98;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6c98;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01be6c78 = "m_DirApplyFlag";
    _DAT_01be6c7c = 2;
    _DAT_01be6c80 = 0x2f0;
    _DAT_01be6c84 = 8;
    _DAT_01be6c88 = 6;
    _DAT_01be6c8c = 0;
    _DAT_01be6c90 = 0;
    DAT_01be6c94 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6c78;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6c78;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6c78;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01be6c58 = "m_DirApplyGroup";
    _DAT_01be6c5c = 0;
    _DAT_01be6c60 = 0x350;
    _DAT_01be6c64 = 8;
    _DAT_01be6c68 = 6;
    _DAT_01be6c6c = 0;
    _DAT_01be6c70 = 0;
    DAT_01be6c74 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6c58;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6c58;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6c58;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01be6c38 = "m_DirApplyScale";
    _DAT_01be6c3c = 0xf;
    _DAT_01be6c40 = 0x358;
    _DAT_01be6c44 = 8;
    _DAT_01be6c48 = 6;
    _DAT_01be6c4c = 0;
    _DAT_01be6c50 = 0;
    DAT_01be6c54 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6c38;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6c38;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6c38;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01be6c18 = "m_DirSpecRate";
    _DAT_01be6c1c = 7;
    _DAT_01be6c20 = 0x438;
    _DAT_01be6c24 = 8;
    _DAT_01be6c28 = 6;
    _DAT_01be6c2c = 0;
    _DAT_01be6c30 = 0;
    DAT_01be6c34 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6c18;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6c18;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6c18;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01be6bf8 = "m_SpecApplyFlag";
    _DAT_01be6bfc = 2;
    _DAT_01be6c00 = 0x310;
    _DAT_01be6c04 = 8;
    _DAT_01be6c08 = 6;
    _DAT_01be6c0c = 0;
    _DAT_01be6c10 = 0;
    DAT_01be6c14 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6bf8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6bf8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6bf8;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01be6bd8 = "m_CubeApplyFlag";
    _DAT_01be6bdc = 2;
    _DAT_01be6be0 = 0x330;
    _DAT_01be6be4 = 8;
    _DAT_01be6be8 = 6;
    _DAT_01be6bec = 0;
    _DAT_01be6bf0 = 0;
    DAT_01be6bf4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6bd8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6bd8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6bd8;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01be6bb8 = "m_DirSpecRate";
    _DAT_01be6bbc = 7;
    _DAT_01be6bc0 = 0x438;
    _DAT_01be6bc4 = 8;
    _DAT_01be6bc8 = 6;
    _DAT_01be6bcc = 0;
    _DAT_01be6bd0 = 0;
    DAT_01be6bd4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6bb8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6bb8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6bb8;
  if ((uVar1 & 0x2000) == 0) {
    uVar1 = uVar1 | 0x2000;
    _DAT_01be6b98 = "m_DirCubeRate";
    _DAT_01be6b9c = 7;
    _DAT_01be6ba0 = 0x458;
    _DAT_01be6ba4 = 8;
    _DAT_01be6ba8 = 6;
    _DAT_01be6bac = 0;
    _DAT_01be6bb0 = 0;
    DAT_01be6bb4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6b98;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6b98;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6b98;
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = uVar1 | 0x4000;
    _DAT_01be6b78 = "m_SpecApplyScale";
    _DAT_01be6b7c = 0xf;
    _DAT_01be6b80 = 0x478;
    _DAT_01be6b84 = 8;
    _DAT_01be6b88 = 6;
    _DAT_01be6b8c = 0;
    _DAT_01be6b90 = 0;
    DAT_01be6b94 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6b78;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6b78;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6b78;
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 | 0x8000;
    _DAT_01be6b58 = "m_CubeApplyScale";
    _DAT_01be6b5c = 0xf;
    _DAT_01be6b60 = 0x558;
    _DAT_01be6b64 = 8;
    _DAT_01be6b68 = 6;
    _DAT_01be6b6c = 0;
    _DAT_01be6b70 = 0;
    DAT_01be6b74 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6b58;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6b58;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6b58;
  if ((uVar1 & 0x10000) == 0) {
    uVar1 = uVar1 | 0x10000;
    _DAT_01be6b38 = "m_HemisphereSkyCol";
    _DAT_01be6b3c = 0xb;
    _DAT_01be6b40 = 0xae0;
    _DAT_01be6b44 = 8;
    _DAT_01be6b48 = 6;
    _DAT_01be6b4c = 0;
    _DAT_01be6b50 = 0;
    DAT_01be6b54 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6b38;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6b38;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6b38;
  if ((uVar1 & 0x20000) == 0) {
    uVar1 = uVar1 | 0x20000;
    _DAT_01be6b18 = "m_HemisphereGroundCol";
    _DAT_01be6b1c = 0xb;
    _DAT_01be6b20 = 0xb60;
    _DAT_01be6b24 = 8;
    _DAT_01be6b28 = 6;
    _DAT_01be6b2c = 0;
    _DAT_01be6b30 = 0;
    DAT_01be6b34 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6b18;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6b18;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6b18;
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 | 0x40000;
    _DAT_01be6af8 = "m_ShadowDirIdx";
    _DAT_01be6afc = 0;
    _DAT_01be6b00 = 0xbe0;
    _DAT_01be6b04 = 1;
    _DAT_01be6b08 = 6;
    _DAT_01be6b0c = 0;
    _DAT_01be6b10 = 0;
    DAT_01be6b14 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6af8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6af8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6af8;
  if ((uVar1 & 0x80000) == 0) {
    uVar1 = uVar1 | 0x80000;
    _DAT_01be6ad8 = "m_screenResolution";
    _DAT_01be6adc = 6;
    _DAT_01be6ae0 = 0xbe4;
    _DAT_01be6ae4 = 1;
    _DAT_01be6ae8 = 6;
    _DAT_01be6aec = 0;
    _DAT_01be6af0 = 0;
    DAT_01be6af4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6ad8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6ad8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6ad8;
  if ((uVar1 & 0x100000) == 0) {
    uVar1 = uVar1 | 0x100000;
    _DAT_01be6ab8 = "m_backLightRate";
    _DAT_01be6abc = 7;
    _DAT_01be6ac0 = 0xbe8;
    _DAT_01be6ac4 = 1;
    _DAT_01be6ac8 = 6;
    _DAT_01be6acc = 0;
    _DAT_01be6ad0 = 0;
    DAT_01be6ad4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6ab8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6ab8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6ab8;
  if ((uVar1 & 0x200000) == 0) {
    uVar1 = uVar1 | 0x200000;
    _DAT_01be6a98 = "m_ShadowMove";
    _DAT_01be6a9c = 2;
    _DAT_01be6aa0 = 0xc;
    _DAT_01be6aa4 = 1;
    _DAT_01be6aa8 = 6;
    _DAT_01be6aac = 0;
    _DAT_01be6ab0 = 0;
    DAT_01be6ab4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6a98;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6a98;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6a98;
  if ((uVar1 & 0x400000) == 0) {
    uVar1 = uVar1 | 0x400000;
    _DAT_01be6a78 = "m_LightMapShadowPow";
    _DAT_01be6a7c = 10;
    _DAT_01be6a80 = 0xbec;
    _DAT_01be6a84 = 1;
    _DAT_01be6a88 = 6;
    _DAT_01be6a8c = 0;
    _DAT_01be6a90 = 0;
    DAT_01be6a94 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6a78;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6a78;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6a78;
  if ((uVar1 & 0x800000) == 0) {
    uVar1 = uVar1 | 0x800000;
    _DAT_01be6a58 = "m_ShadowMode";
    _DAT_01be6a5c = 6;
    _DAT_01be6a60 = 0x638;
    _DAT_01be6a64 = 1;
    _DAT_01be6a68 = 6;
    _DAT_01be6a6c = 0;
    _DAT_01be6a70 = 0;
    DAT_01be6a74 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6a58;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6a58;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6a58;
  if ((uVar1 & 0x1000000) == 0) {
    uVar1 = uVar1 | 0x1000000;
    _DAT_01be6a38 = "m_RoomLightWork";
    _DAT_01be6a3c = 0xf;
    _DAT_01be6a40 = 0xc00;
    _DAT_01be6a44 = 0x20;
    _DAT_01be6a48 = 6;
    _DAT_01be6a4c = 0;
    _DAT_01be6a50 = 0;
    DAT_01be6a54 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6a38;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6a38;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6a38;
  if ((uVar1 & 0x2000000) == 0) {
    uVar1 = uVar1 | 0x2000000;
    _DAT_01be6a18 = "m_noiseParam";
    _DAT_01be6a1c = 0xb;
    _DAT_01be6a20 = 0x10;
    _DAT_01be6a24 = 1;
    _DAT_01be6a28 = 6;
    _DAT_01be6a2c = 0;
    _DAT_01be6a30 = 0;
    DAT_01be6a34 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6a18;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6a18;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6a18;
  if ((uVar1 & 0x4000000) == 0) {
    uVar1 = uVar1 | 0x4000000;
    _DAT_01be69f8 = "m_noiseCol";
    _DAT_01be69fc = 0xb;
    _DAT_01be6a00 = 0x20;
    _DAT_01be6a04 = 1;
    _DAT_01be6a08 = 6;
    _DAT_01be6a0c = 0;
    _DAT_01be6a10 = 0;
    DAT_01be6a14 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be69f8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be69f8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be69f8;
  if ((uVar1 & 0x8000000) == 0) {
    uVar1 = uVar1 | 0x8000000;
    _DAT_01be69d8 = "m_sslbParam";
    _DAT_01be69dc = 0xb;
    _DAT_01be69e0 = 0x30;
    _DAT_01be69e4 = 1;
    _DAT_01be69e8 = 6;
    _DAT_01be69ec = 0;
    _DAT_01be69f0 = 0;
    DAT_01be69f4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be69d8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be69d8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be69d8;
  if ((uVar1 & 0x10000000) == 0) {
    uVar1 = uVar1 | 0x10000000;
    _DAT_01be69b8 = "m_sunLightParam[0]";
    _DAT_01be69bc = 0xb;
    _DAT_01be69c0 = 0x40;
    _DAT_01be69c4 = 1;
    _DAT_01be69c8 = 6;
    _DAT_01be69cc = 0;
    _DAT_01be69d0 = 0;
    DAT_01be69d4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be69b8;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be69b8;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be69b8;
  if ((uVar1 & 0x20000000) == 0) {
    uVar1 = uVar1 | 0x20000000;
    _DAT_01be6998 = "m_sunLightParam[1]";
    _DAT_01be699c = 0xb;
    _DAT_01be69a0 = 0x50;
    _DAT_01be69a4 = 1;
    _DAT_01be69a8 = 6;
    _DAT_01be69ac = 0;
    _DAT_01be69b0 = 0;
    DAT_01be69b4 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6998;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6998;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6998;
  if ((uVar1 & 0x40000000) == 0) {
    uVar1 = uVar1 | 0x40000000;
    _DAT_01be6978 = "m_ssaoParam";
    _DAT_01be697c = 0xb;
    _DAT_01be6980 = 0x60;
    _DAT_01be6984 = 1;
    _DAT_01be6988 = 6;
    _DAT_01be698c = 0;
    _DAT_01be6990 = 0;
    DAT_01be6994 = 0;
    DAT_01be6d58 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6978;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6978;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6978;
  if (-1 < (int)uVar1) {
    DAT_01be6d58 = uVar1 | 0x80000000;
    _DAT_01be6958 = "m_ssaoBlurParam";
    _DAT_01be695c = 0xb;
    _DAT_01be6960 = 0x70;
    _DAT_01be6964 = 1;
    _DAT_01be6968 = 6;
    _DAT_01be696c = 0;
    _DAT_01be6970 = 0;
    DAT_01be6974 = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6958;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6958;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6958;
  if ((DAT_01be6954 & 1) == 0) {
    DAT_01be6954 = DAT_01be6954 | 1;
    _DAT_01be6934 = "m_hdaoParam";
    _DAT_01be6938 = 0xb;
    _DAT_01be693c = 0x80;
    _DAT_01be6940 = 1;
    _DAT_01be6944 = 6;
    _DAT_01be6948 = 0;
    _DAT_01be694c = 0;
    DAT_01be6950 = 0;
  }
  uVar1 = DAT_01be6954;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6934;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6934;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6934;
  if ((uVar1 & 2) == 0) {
    DAT_01be6954 = uVar1 | 2;
    _DAT_01be6914 = "m_hdaoParam2";
    _DAT_01be6918 = 0xb;
    _DAT_01be691c = 0x90;
    _DAT_01be6920 = 1;
    _DAT_01be6924 = 6;
    _DAT_01be6928 = 0;
    _DAT_01be692c = 0;
    _DAT_01be6930 = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6914;
    *(undefined **)(param_1 + 0x14) = &DAT_01be6914;
    return;
  }
  *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6914;
  *(undefined **)(param_1 + 0x14) = &DAT_01be6914;
  return;
}

// 00A2C410  FUN_00a2c410  size=4899  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2c410(int param_1)

{
  uint uVar1;
  
  if ((DAT_01be7340 & 1) == 0) {
    DAT_01be7340 = DAT_01be7340 | 1;
    _DAT_01be7320 = "m_AmbCol";
    _DAT_01be7324 = 0xb;
    _DAT_01be7328 = 0xa0;
    _DAT_01be732c = 8;
    _DAT_01be7330 = 6;
    _DAT_01be7334 = 0;
    _DAT_01be7338 = 0;
    DAT_01be733c = 0;
  }
  uVar1 = DAT_01be7340;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7320;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7320;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7320;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01be7300 = "m_AmbApplyFlag";
    _DAT_01be7304 = 2;
    _DAT_01be7308 = 0x120;
    _DAT_01be730c = 8;
    _DAT_01be7310 = 6;
    _DAT_01be7314 = 0;
    _DAT_01be7318 = 0;
    DAT_01be731c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7300;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7300;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7300;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01be72e0 = "m_AmbApplyGroup";
    _DAT_01be72e4 = 0;
    _DAT_01be72e8 = 0x140;
    _DAT_01be72ec = 8;
    _DAT_01be72f0 = 6;
    _DAT_01be72f4 = 0;
    _DAT_01be72f8 = 0;
    DAT_01be72fc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be72e0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be72e0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be72e0;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01be72c0 = "m_AmbApplyScale";
    _DAT_01be72c4 = 0xf;
    _DAT_01be72c8 = 0x148;
    _DAT_01be72cc = 8;
    _DAT_01be72d0 = 6;
    _DAT_01be72d4 = 0;
    _DAT_01be72d8 = 0;
    DAT_01be72dc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be72c0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be72c0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be72c0;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01be72a0 = "m_DirAng";
    _DAT_01be72a4 = 9;
    _DAT_01be72a8 = 0x228;
    _DAT_01be72ac = 8;
    _DAT_01be72b0 = 6;
    _DAT_01be72b4 = 0;
    _DAT_01be72b8 = 0;
    DAT_01be72bc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be72a0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be72a0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be72a0;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01be7280 = "m_DirCol";
    _DAT_01be7284 = 0xb;
    _DAT_01be7288 = 0x270;
    _DAT_01be728c = 8;
    _DAT_01be7290 = 6;
    _DAT_01be7294 = 0;
    _DAT_01be7298 = 0;
    DAT_01be729c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7280;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7280;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7280;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01be7260 = "m_DirApplyFlag";
    _DAT_01be7264 = 2;
    _DAT_01be7268 = 0x2f0;
    _DAT_01be726c = 8;
    _DAT_01be7270 = 6;
    _DAT_01be7274 = 0;
    _DAT_01be7278 = 0;
    DAT_01be727c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7260;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7260;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7260;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01be7240 = "m_DirApplyGroup";
    _DAT_01be7244 = 0;
    _DAT_01be7248 = 0x350;
    _DAT_01be724c = 8;
    _DAT_01be7250 = 6;
    _DAT_01be7254 = 0;
    _DAT_01be7258 = 0;
    DAT_01be725c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7240;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7240;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7240;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01be7220 = "m_DirApplyScale";
    _DAT_01be7224 = 0xf;
    _DAT_01be7228 = 0x358;
    _DAT_01be722c = 8;
    _DAT_01be7230 = 6;
    _DAT_01be7234 = 0;
    _DAT_01be7238 = 0;
    DAT_01be723c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7220;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7220;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7220;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01be7200 = "m_DirSpecRate";
    _DAT_01be7204 = 7;
    _DAT_01be7208 = 0x438;
    _DAT_01be720c = 8;
    _DAT_01be7210 = 6;
    _DAT_01be7214 = 0;
    _DAT_01be7218 = 0;
    DAT_01be721c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7200;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7200;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7200;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01be71e0 = "m_SpecApplyFlag";
    _DAT_01be71e4 = 2;
    _DAT_01be71e8 = 0x310;
    _DAT_01be71ec = 8;
    _DAT_01be71f0 = 6;
    _DAT_01be71f4 = 0;
    _DAT_01be71f8 = 0;
    DAT_01be71fc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be71e0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be71e0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be71e0;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01be71c0 = "m_CubeApplyFlag";
    _DAT_01be71c4 = 2;
    _DAT_01be71c8 = 0x330;
    _DAT_01be71cc = 8;
    _DAT_01be71d0 = 6;
    _DAT_01be71d4 = 0;
    _DAT_01be71d8 = 0;
    DAT_01be71dc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be71c0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be71c0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be71c0;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01be71a0 = "m_DirSpecRate";
    _DAT_01be71a4 = 7;
    _DAT_01be71a8 = 0x438;
    _DAT_01be71ac = 8;
    _DAT_01be71b0 = 6;
    _DAT_01be71b4 = 0;
    _DAT_01be71b8 = 0;
    DAT_01be71bc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be71a0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be71a0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be71a0;
  if ((uVar1 & 0x2000) == 0) {
    uVar1 = uVar1 | 0x2000;
    _DAT_01be7180 = "m_DirCubeRate";
    _DAT_01be7184 = 7;
    _DAT_01be7188 = 0x458;
    _DAT_01be718c = 8;
    _DAT_01be7190 = 6;
    _DAT_01be7194 = 0;
    _DAT_01be7198 = 0;
    DAT_01be719c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7180;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7180;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7180;
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = uVar1 | 0x4000;
    _DAT_01be7160 = "m_SpecApplyScale";
    _DAT_01be7164 = 0xf;
    _DAT_01be7168 = 0x478;
    _DAT_01be716c = 8;
    _DAT_01be7170 = 6;
    _DAT_01be7174 = 0;
    _DAT_01be7178 = 0;
    DAT_01be717c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7160;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7160;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7160;
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 | 0x8000;
    _DAT_01be7140 = "m_CubeApplyScale";
    _DAT_01be7144 = 0xf;
    _DAT_01be7148 = 0x558;
    _DAT_01be714c = 8;
    _DAT_01be7150 = 6;
    _DAT_01be7154 = 0;
    _DAT_01be7158 = 0;
    DAT_01be715c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7140;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7140;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7140;
  if ((uVar1 & 0x10000) == 0) {
    uVar1 = uVar1 | 0x10000;
    _DAT_01be7120 = "m_HemisphereSkyCol";
    _DAT_01be7124 = 0xb;
    _DAT_01be7128 = 0xae0;
    _DAT_01be712c = 8;
    _DAT_01be7130 = 6;
    _DAT_01be7134 = 0;
    _DAT_01be7138 = 0;
    DAT_01be713c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7120;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7120;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7120;
  if ((uVar1 & 0x20000) == 0) {
    uVar1 = uVar1 | 0x20000;
    _DAT_01be7100 = "m_HemisphereGroundCol";
    _DAT_01be7104 = 0xb;
    _DAT_01be7108 = 0xb60;
    _DAT_01be710c = 8;
    _DAT_01be7110 = 6;
    _DAT_01be7114 = 0;
    _DAT_01be7118 = 0;
    DAT_01be711c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7100;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7100;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7100;
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 | 0x40000;
    _DAT_01be70e0 = "m_ShadowDirIdx";
    _DAT_01be70e4 = 0;
    _DAT_01be70e8 = 0xbe0;
    _DAT_01be70ec = 1;
    _DAT_01be70f0 = 6;
    _DAT_01be70f4 = 0;
    _DAT_01be70f8 = 0;
    DAT_01be70fc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be70e0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be70e0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be70e0;
  if ((uVar1 & 0x80000) == 0) {
    uVar1 = uVar1 | 0x80000;
    _DAT_01be70c0 = "m_screenResolution";
    _DAT_01be70c4 = 6;
    _DAT_01be70c8 = 0xbe4;
    _DAT_01be70cc = 1;
    _DAT_01be70d0 = 6;
    _DAT_01be70d4 = 0;
    _DAT_01be70d8 = 0;
    DAT_01be70dc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be70c0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be70c0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be70c0;
  if ((uVar1 & 0x100000) == 0) {
    uVar1 = uVar1 | 0x100000;
    _DAT_01be70a0 = "m_backLightRate";
    _DAT_01be70a4 = 7;
    _DAT_01be70a8 = 0xbe8;
    _DAT_01be70ac = 1;
    _DAT_01be70b0 = 6;
    _DAT_01be70b4 = 0;
    _DAT_01be70b8 = 0;
    DAT_01be70bc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be70a0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be70a0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be70a0;
  if ((uVar1 & 0x200000) == 0) {
    uVar1 = uVar1 | 0x200000;
    _DAT_01be7080 = "m_ShadowMove";
    _DAT_01be7084 = 2;
    _DAT_01be7088 = 0xc;
    _DAT_01be708c = 1;
    _DAT_01be7090 = 6;
    _DAT_01be7094 = 0;
    _DAT_01be7098 = 0;
    DAT_01be709c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7080;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7080;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7080;
  if ((uVar1 & 0x400000) == 0) {
    uVar1 = uVar1 | 0x400000;
    _DAT_01be7060 = "m_LightMapShadowPow";
    _DAT_01be7064 = 10;
    _DAT_01be7068 = 0xbec;
    _DAT_01be706c = 1;
    _DAT_01be7070 = 6;
    _DAT_01be7074 = 0;
    _DAT_01be7078 = 0;
    DAT_01be707c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7060;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7060;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7060;
  if ((uVar1 & 0x800000) == 0) {
    uVar1 = uVar1 | 0x800000;
    _DAT_01be7040 = "m_RoomLightWork";
    _DAT_01be7044 = 0xf;
    _DAT_01be7048 = 0xc00;
    _DAT_01be704c = 0x20;
    _DAT_01be7050 = 6;
    _DAT_01be7054 = 0;
    _DAT_01be7058 = 0;
    DAT_01be705c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7040;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7040;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7040;
  if ((uVar1 & 0x1000000) == 0) {
    uVar1 = uVar1 | 0x1000000;
    _DAT_01be7020 = "m_noiseParam";
    _DAT_01be7024 = 0xb;
    _DAT_01be7028 = 0x10;
    _DAT_01be702c = 1;
    _DAT_01be7030 = 6;
    _DAT_01be7034 = 0;
    _DAT_01be7038 = 0;
    DAT_01be703c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7020;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7020;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7020;
  if ((uVar1 & 0x2000000) == 0) {
    uVar1 = uVar1 | 0x2000000;
    _DAT_01be7000 = "m_noiseCol";
    _DAT_01be7004 = 0xb;
    _DAT_01be7008 = 0x20;
    _DAT_01be700c = 1;
    _DAT_01be7010 = 6;
    _DAT_01be7014 = 0;
    _DAT_01be7018 = 0;
    DAT_01be701c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be7000;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be7000;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be7000;
  if ((uVar1 & 0x4000000) == 0) {
    uVar1 = uVar1 | 0x4000000;
    _DAT_01be6fe0 = "m_sslbParam";
    _DAT_01be6fe4 = 0xb;
    _DAT_01be6fe8 = 0x30;
    _DAT_01be6fec = 1;
    _DAT_01be6ff0 = 6;
    _DAT_01be6ff4 = 0;
    _DAT_01be6ff8 = 0;
    DAT_01be6ffc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6fe0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6fe0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6fe0;
  if ((uVar1 & 0x8000000) == 0) {
    uVar1 = uVar1 | 0x8000000;
    _DAT_01be6fc0 = "m_sunLightParam[0]";
    _DAT_01be6fc4 = 0xb;
    _DAT_01be6fc8 = 0x40;
    _DAT_01be6fcc = 1;
    _DAT_01be6fd0 = 6;
    _DAT_01be6fd4 = 0;
    _DAT_01be6fd8 = 0;
    DAT_01be6fdc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6fc0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6fc0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6fc0;
  if ((uVar1 & 0x10000000) == 0) {
    uVar1 = uVar1 | 0x10000000;
    _DAT_01be6fa0 = "m_sunLightParam[1]";
    _DAT_01be6fa4 = 0xb;
    _DAT_01be6fa8 = 0x50;
    _DAT_01be6fac = 1;
    _DAT_01be6fb0 = 6;
    _DAT_01be6fb4 = 0;
    _DAT_01be6fb8 = 0;
    DAT_01be6fbc = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6fa0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6fa0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6fa0;
  if ((uVar1 & 0x20000000) == 0) {
    uVar1 = uVar1 | 0x20000000;
    _DAT_01be6f80 = "m_ssaoParam";
    _DAT_01be6f84 = 0xb;
    _DAT_01be6f88 = 0x60;
    _DAT_01be6f8c = 1;
    _DAT_01be6f90 = 6;
    _DAT_01be6f94 = 0;
    _DAT_01be6f98 = 0;
    DAT_01be6f9c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6f80;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6f80;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6f80;
  if ((uVar1 & 0x40000000) == 0) {
    uVar1 = uVar1 | 0x40000000;
    _DAT_01be6f60 = "m_ssaoBlurParam";
    _DAT_01be6f64 = 0xb;
    _DAT_01be6f68 = 0x70;
    _DAT_01be6f6c = 1;
    _DAT_01be6f70 = 6;
    _DAT_01be6f74 = 0;
    _DAT_01be6f78 = 0;
    DAT_01be6f7c = 0;
    DAT_01be7340 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6f60;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6f60;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6f60;
  if (-1 < (int)uVar1) {
    DAT_01be7340 = uVar1 | 0x80000000;
    _DAT_01be6f40 = "m_hdaoParam";
    _DAT_01be6f44 = 0xb;
    _DAT_01be6f48 = 0x80;
    _DAT_01be6f4c = 1;
    _DAT_01be6f50 = 6;
    _DAT_01be6f54 = 0;
    _DAT_01be6f58 = 0;
    DAT_01be6f5c = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6f40;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6f40;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6f40;
  if ((DAT_01be6f3c & 1) == 0) {
    DAT_01be6f3c = DAT_01be6f3c | 1;
    _DAT_01be6f1c = "m_hdaoParam2";
    _DAT_01be6f20 = 0xb;
    _DAT_01be6f24 = 0x90;
    _DAT_01be6f28 = 1;
    _DAT_01be6f2c = 6;
    _DAT_01be6f30 = 0;
    _DAT_01be6f34 = 0;
    DAT_01be6f38 = 0;
  }
  uVar1 = DAT_01be6f3c;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6f1c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6f1c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6f1c;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01be6efc = "m_ShadowMode";
    _DAT_01be6f00 = 6;
    _DAT_01be6f04 = 0x638;
    _DAT_01be6f08 = 1;
    _DAT_01be6f0c = 6;
    _DAT_01be6f10 = 0;
    _DAT_01be6f14 = 0;
    DAT_01be6f18 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6efc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6efc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6efc;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01be6edc = "m_AlphaShadowLV";
    _DAT_01be6ee0 = 6;
    _DAT_01be6ee4 = 0x950;
    _DAT_01be6ee8 = 1;
    _DAT_01be6eec = 6;
    _DAT_01be6ef0 = 0;
    _DAT_01be6ef4 = 0;
    DAT_01be6ef8 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6edc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6edc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6edc;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01be6ebc = "m_dofType";
    _DAT_01be6ec0 = 2;
    _DAT_01be6ec4 = 0x954;
    _DAT_01be6ec8 = 1;
    _DAT_01be6ecc = 6;
    _DAT_01be6ed0 = 0;
    _DAT_01be6ed4 = 0;
    DAT_01be6ed8 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6ebc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6ebc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6ebc;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01be6e9c = "m_EyeLightParam1";
    _DAT_01be6ea0 = 0xb;
    _DAT_01be6ea4 = 0x640;
    _DAT_01be6ea8 = 8;
    _DAT_01be6eac = 6;
    _DAT_01be6eb0 = 0;
    _DAT_01be6eb4 = 0;
    DAT_01be6eb8 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6e9c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6e9c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6e9c;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01be6e7c = "m_EyeLightParam2";
    _DAT_01be6e80 = 0xb;
    _DAT_01be6e84 = 0x6c0;
    _DAT_01be6e88 = 8;
    _DAT_01be6e8c = 6;
    _DAT_01be6e90 = 0;
    _DAT_01be6e94 = 0;
    DAT_01be6e98 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6e7c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6e7c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6e7c;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01be6e5c = "m_EyeLightParam1_Post";
    _DAT_01be6e60 = 0xb;
    _DAT_01be6e64 = 0x740;
    _DAT_01be6e68 = 8;
    _DAT_01be6e6c = 6;
    _DAT_01be6e70 = 0;
    _DAT_01be6e74 = 0;
    DAT_01be6e78 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6e5c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6e5c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6e5c;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01be6e3c = "m_EyeLightParam2_Post";
    _DAT_01be6e40 = 0xb;
    _DAT_01be6e44 = 0x7c0;
    _DAT_01be6e48 = 8;
    _DAT_01be6e4c = 6;
    _DAT_01be6e50 = 0;
    _DAT_01be6e54 = 0;
    DAT_01be6e58 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6e3c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6e3c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6e3c;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01be6e1c = "m_CamFrustumParam";
    _DAT_01be6e20 = 0xb;
    _DAT_01be6e24 = 0x940;
    _DAT_01be6e28 = 1;
    _DAT_01be6e2c = 6;
    _DAT_01be6e30 = 0;
    _DAT_01be6e34 = 0;
    DAT_01be6e38 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6e1c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6e1c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6e1c;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01be6dfc = "m_cubeTargetNo1";
    _DAT_01be6e00 = 6;
    _DAT_01be6e04 = 0x958;
    _DAT_01be6e08 = 8;
    _DAT_01be6e0c = 6;
    _DAT_01be6e10 = 0;
    _DAT_01be6e14 = 0;
    DAT_01be6e18 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6dfc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6dfc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6dfc;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01be6ddc = "m_cubeTargetNo2";
    _DAT_01be6de0 = 6;
    _DAT_01be6de4 = 0x978;
    _DAT_01be6de8 = 8;
    _DAT_01be6dec = 6;
    _DAT_01be6df0 = 0;
    _DAT_01be6df4 = 0;
    DAT_01be6df8 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6ddc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6ddc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6ddc;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01be6dbc = "m_cubeTargetNo3";
    _DAT_01be6dc0 = 6;
    _DAT_01be6dc4 = 0x998;
    _DAT_01be6dc8 = 8;
    _DAT_01be6dcc = 6;
    _DAT_01be6dd0 = 0;
    _DAT_01be6dd4 = 0;
    DAT_01be6dd8 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6dbc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6dbc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6dbc;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01be6d9c = "m_cubeTargetNo4";
    _DAT_01be6da0 = 6;
    _DAT_01be6da4 = 0x9b8;
    _DAT_01be6da8 = 8;
    _DAT_01be6dac = 6;
    _DAT_01be6db0 = 0;
    _DAT_01be6db4 = 0;
    DAT_01be6db8 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6d9c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6d9c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6d9c;
  if ((uVar1 & 0x2000) == 0) {
    uVar1 = uVar1 | 0x2000;
    _DAT_01be6d7c = "m_CubeAnimParam";
    _DAT_01be6d80 = 0xb;
    _DAT_01be6d84 = 0x9e0;
    _DAT_01be6d88 = 8;
    _DAT_01be6d8c = 6;
    _DAT_01be6d90 = 0;
    _DAT_01be6d94 = 0;
    DAT_01be6d98 = 0;
    DAT_01be6f3c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6d7c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6d7c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01be6d7c;
  if ((uVar1 & 0x4000) == 0) {
    DAT_01be6f3c = uVar1 | 0x4000;
    _DAT_01be6d5c = "m_CubeAnimParam";
    _DAT_01be6d60 = 0xb;
    _DAT_01be6d64 = 0x9e0;
    _DAT_01be6d68 = 8;
    _DAT_01be6d6c = 6;
    _DAT_01be6d70 = 0;
    _DAT_01be6d74 = 0;
    _DAT_01be6d78 = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01be6d5c;
    *(undefined **)(param_1 + 0x14) = &DAT_01be6d5c;
    return;
  }
  *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01be6d5c;
  *(undefined **)(param_1 + 0x14) = &DAT_01be6d5c;
  return;
}

// 00A2D740  FUN_00a2d740  size=159  [run]
void __thiscall FUN_00a2d740(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  puVar2 = (uint *)(param_1 + 0x2208);
  iVar3 = 0x100;
  do {
    if (((puVar2[-0x2c] & 1) != 0) && ((param_2 & puVar2[-0x2c]) != 0)) {
      puVar2[-0x2c] = puVar2[-0x2c] & 0xfffffffe;
    }
    uVar1 = *puVar2;
    if (((uVar1 & 1) != 0) && ((param_2 & uVar1) != 0)) {
      *puVar2 = uVar1 & 0xfffffffe;
    }
    uVar1 = puVar2[0x2c];
    if (((uVar1 & 1) != 0) && ((param_2 & uVar1) != 0)) {
      puVar2[0x2c] = uVar1 & 0xfffffffe;
    }
    uVar1 = puVar2[0x58];
    if (((uVar1 & 1) != 0) && ((param_2 & uVar1) != 0)) {
      puVar2[0x58] = uVar1 & 0xfffffffe;
    }
    puVar2 = puVar2 + 0xb0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  return;
}

