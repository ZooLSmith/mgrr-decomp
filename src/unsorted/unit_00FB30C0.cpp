// src/unsorted/unit_00FB30C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FB30C0..00FB30C0, 1 functions

#include "mgrr.h"

// 00FB30C0  FUN_00fb30c0  size=9062  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fb30c0(int param_1)

{
  uint uVar1;
  
  if ((DAT_01f8d134 & 1) == 0) {
    DAT_01f8d134 = DAT_01f8d134 | 1;
    _DAT_01f8d114 = "m_data[0].m_OutLineColPl1";
    _DAT_01f8d118 = 0xb;
    _DAT_01f8d11c = 0x10;
    _DAT_01f8d120 = 1;
    _DAT_01f8d124 = 6;
    _DAT_01f8d128 = 0;
    _DAT_01f8d12c = 0;
    DAT_01f8d130 = 0;
  }
  uVar1 = DAT_01f8d134;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d114;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d114;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d114;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01f8d0f4 = "m_data[0].m_OutLineColPl2";
    _DAT_01f8d0f8 = 0xb;
    _DAT_01f8d0fc = 0x20;
    _DAT_01f8d100 = 1;
    _DAT_01f8d104 = 6;
    _DAT_01f8d108 = 0;
    _DAT_01f8d10c = 0;
    DAT_01f8d110 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d0f4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d0f4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d0f4;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01f8d0d4 = "m_data[0].m_OutLineColEm1";
    _DAT_01f8d0d8 = 0xb;
    _DAT_01f8d0dc = 0x30;
    _DAT_01f8d0e0 = 1;
    _DAT_01f8d0e4 = 6;
    _DAT_01f8d0e8 = 0;
    _DAT_01f8d0ec = 0;
    DAT_01f8d0f0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d0d4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d0d4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d0d4;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01f8d0b4 = "m_data[0].m_OutLineColEm2";
    _DAT_01f8d0b8 = 0xb;
    _DAT_01f8d0bc = 0x40;
    _DAT_01f8d0c0 = 1;
    _DAT_01f8d0c4 = 6;
    _DAT_01f8d0c8 = 0;
    _DAT_01f8d0cc = 0;
    DAT_01f8d0d0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d0b4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d0b4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d0b4;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01f8d094 = "m_data[0].m_OutLineColEtc1";
    _DAT_01f8d098 = 0xb;
    _DAT_01f8d09c = 0x50;
    _DAT_01f8d0a0 = 1;
    _DAT_01f8d0a4 = 6;
    _DAT_01f8d0a8 = 0;
    _DAT_01f8d0ac = 0;
    DAT_01f8d0b0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d094;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d094;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d094;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01f8d074 = "m_data[0].m_OutLineColEtc2";
    _DAT_01f8d078 = 0xb;
    _DAT_01f8d07c = 0x60;
    _DAT_01f8d080 = 1;
    _DAT_01f8d084 = 6;
    _DAT_01f8d088 = 0;
    _DAT_01f8d08c = 0;
    DAT_01f8d090 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d074;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d074;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d074;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01f8d054 = "m_data[0].m_OutLineColScr1";
    _DAT_01f8d058 = 0xb;
    _DAT_01f8d05c = 0x70;
    _DAT_01f8d060 = 1;
    _DAT_01f8d064 = 6;
    _DAT_01f8d068 = 0;
    _DAT_01f8d06c = 0;
    DAT_01f8d070 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d054;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d054;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d054;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01f8d034 = "m_data[0].m_OutLineColScr2";
    _DAT_01f8d038 = 0xb;
    _DAT_01f8d03c = 0x80;
    _DAT_01f8d040 = 1;
    _DAT_01f8d044 = 6;
    _DAT_01f8d048 = 0;
    _DAT_01f8d04c = 0;
    DAT_01f8d050 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d034;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d034;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d034;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01f8d014 = "m_data[0].m_specialShadowPow";
    _DAT_01f8d018 = 0xb;
    _DAT_01f8d01c = 0x90;
    _DAT_01f8d020 = 1;
    _DAT_01f8d024 = 6;
    _DAT_01f8d028 = 0;
    _DAT_01f8d02c = 0;
    DAT_01f8d030 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8d014;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8d014;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8d014;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01f8cff4 = "m_data[0].m_edgeDetectionParam";
    _DAT_01f8cff8 = 0xb;
    _DAT_01f8cffc = 0xa0;
    _DAT_01f8d000 = 1;
    _DAT_01f8d004 = 6;
    _DAT_01f8d008 = 0;
    _DAT_01f8d00c = 0;
    DAT_01f8d010 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cff4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cff4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cff4;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01f8cfd4 = "m_data[0].m_edgeDetectionParam2";
    _DAT_01f8cfd8 = 0xb;
    _DAT_01f8cfdc = 0xb0;
    _DAT_01f8cfe0 = 1;
    _DAT_01f8cfe4 = 6;
    _DAT_01f8cfe8 = 0;
    _DAT_01f8cfec = 0;
    DAT_01f8cff0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cfd4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cfd4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cfd4;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01f8cfb4 = "m_data[0].m_HalfLambert[0]";
    _DAT_01f8cfb8 = 6;
    _DAT_01f8cfbc = 0xc0;
    _DAT_01f8cfc0 = 1;
    _DAT_01f8cfc4 = 6;
    _DAT_01f8cfc8 = 0;
    _DAT_01f8cfcc = 0;
    DAT_01f8cfd0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cfb4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cfb4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cfb4;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01f8cf94 = "m_data[0].m_HalfLambert[1]";
    _DAT_01f8cf98 = 6;
    _DAT_01f8cf9c = 0xc4;
    _DAT_01f8cfa0 = 1;
    _DAT_01f8cfa4 = 6;
    _DAT_01f8cfa8 = 0;
    _DAT_01f8cfac = 0;
    DAT_01f8cfb0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cf94;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cf94;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cf94;
  if ((uVar1 & 0x2000) == 0) {
    uVar1 = uVar1 | 0x2000;
    _DAT_01f8cf74 = "m_data[0].m_HalfLambert[2]";
    _DAT_01f8cf78 = 6;
    _DAT_01f8cf7c = 200;
    _DAT_01f8cf80 = 1;
    _DAT_01f8cf84 = 6;
    _DAT_01f8cf88 = 0;
    _DAT_01f8cf8c = 0;
    DAT_01f8cf90 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cf74;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cf74;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cf74;
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = uVar1 | 0x4000;
    _DAT_01f8cf54 = "m_data[0].m_HalfLambert[3]";
    _DAT_01f8cf58 = 6;
    _DAT_01f8cf5c = 0xcc;
    _DAT_01f8cf60 = 1;
    _DAT_01f8cf64 = 6;
    _DAT_01f8cf68 = 0;
    _DAT_01f8cf6c = 0;
    DAT_01f8cf70 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cf54;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cf54;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cf54;
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 | 0x8000;
    _DAT_01f8cf34 = "m_data[0].m_specialShadow[0]";
    _DAT_01f8cf38 = 6;
    _DAT_01f8cf3c = 0xd0;
    _DAT_01f8cf40 = 1;
    _DAT_01f8cf44 = 6;
    _DAT_01f8cf48 = 0;
    _DAT_01f8cf4c = 0;
    DAT_01f8cf50 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cf34;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cf34;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cf34;
  if ((uVar1 & 0x10000) == 0) {
    uVar1 = uVar1 | 0x10000;
    _DAT_01f8cf14 = "m_data[0].m_specialShadow[1]";
    _DAT_01f8cf18 = 6;
    _DAT_01f8cf1c = 0xd4;
    _DAT_01f8cf20 = 1;
    _DAT_01f8cf24 = 6;
    _DAT_01f8cf28 = 0;
    _DAT_01f8cf2c = 0;
    DAT_01f8cf30 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cf14;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cf14;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cf14;
  if ((uVar1 & 0x20000) == 0) {
    uVar1 = uVar1 | 0x20000;
    _DAT_01f8cef4 = "m_data[0].m_specialShadow[2]";
    _DAT_01f8cef8 = 6;
    _DAT_01f8cefc = 0xd8;
    _DAT_01f8cf00 = 1;
    _DAT_01f8cf04 = 6;
    _DAT_01f8cf08 = 0;
    _DAT_01f8cf0c = 0;
    DAT_01f8cf10 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cef4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cef4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cef4;
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 | 0x40000;
    _DAT_01f8ced4 = "m_data[0].m_specialShadow[3]";
    _DAT_01f8ced8 = 6;
    _DAT_01f8cedc = 0xdc;
    _DAT_01f8cee0 = 1;
    _DAT_01f8cee4 = 6;
    _DAT_01f8cee8 = 0;
    _DAT_01f8ceec = 0;
    DAT_01f8cef0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ced4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ced4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ced4;
  if ((uVar1 & 0x80000) == 0) {
    uVar1 = uVar1 | 0x80000;
    _DAT_01f8ceb4 = "m_data[0].m_shadowMaskReverse";
    _DAT_01f8ceb8 = 6;
    _DAT_01f8cebc = 0xe0;
    _DAT_01f8cec0 = 1;
    _DAT_01f8cec4 = 6;
    _DAT_01f8cec8 = 0;
    _DAT_01f8cecc = 0;
    DAT_01f8ced0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ceb4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ceb4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ceb4;
  if ((uVar1 & 0x100000) == 0) {
    uVar1 = uVar1 | 0x100000;
    _DAT_01f8ce94 = "m_data[0].m_shadowMaskOutLineUse";
    _DAT_01f8ce98 = 6;
    _DAT_01f8ce9c = 0xe4;
    _DAT_01f8cea0 = 1;
    _DAT_01f8cea4 = 6;
    _DAT_01f8cea8 = 0;
    _DAT_01f8ceac = 0;
    DAT_01f8ceb0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ce94;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ce94;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ce94;
  if ((uVar1 & 0x200000) == 0) {
    uVar1 = uVar1 | 0x200000;
    _DAT_01f8ce74 = "m_data[0].m_toonLightUse";
    _DAT_01f8ce78 = 6;
    _DAT_01f8ce7c = 0xe8;
    _DAT_01f8ce80 = 1;
    _DAT_01f8ce84 = 6;
    _DAT_01f8ce88 = 0;
    _DAT_01f8ce8c = 0;
    DAT_01f8ce90 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ce74;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ce74;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ce74;
  if ((uVar1 & 0x400000) == 0) {
    uVar1 = uVar1 | 0x400000;
    _DAT_01f8ce54 = "m_data[0].m_bEdgeDetection";
    _DAT_01f8ce58 = 6;
    _DAT_01f8ce5c = 0xec;
    _DAT_01f8ce60 = 1;
    _DAT_01f8ce64 = 6;
    _DAT_01f8ce68 = 0;
    _DAT_01f8ce6c = 0;
    DAT_01f8ce70 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ce54;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ce54;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ce54;
  if ((uVar1 & 0x800000) == 0) {
    uVar1 = uVar1 | 0x800000;
    _DAT_01f8ce34 = "m_data[0].m_bEdgeDetectionNormal";
    _DAT_01f8ce38 = 6;
    _DAT_01f8ce3c = 0xf0;
    _DAT_01f8ce40 = 1;
    _DAT_01f8ce44 = 6;
    _DAT_01f8ce48 = 0;
    _DAT_01f8ce4c = 0;
    DAT_01f8ce50 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ce34;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ce34;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ce34;
  if ((uVar1 & 0x1000000) == 0) {
    uVar1 = uVar1 | 0x1000000;
    _DAT_01f8ce14 = "m_data[1].m_OutLineColPl1";
    _DAT_01f8ce18 = 0xb;
    _DAT_01f8ce1c = 0x100;
    _DAT_01f8ce20 = 1;
    _DAT_01f8ce24 = 6;
    _DAT_01f8ce28 = 0;
    _DAT_01f8ce2c = 0;
    DAT_01f8ce30 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ce14;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ce14;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ce14;
  if ((uVar1 & 0x2000000) == 0) {
    uVar1 = uVar1 | 0x2000000;
    _DAT_01f8cdf4 = "m_data[1].m_OutLineColPl2";
    _DAT_01f8cdf8 = 0xb;
    _DAT_01f8cdfc = 0x110;
    _DAT_01f8ce00 = 1;
    _DAT_01f8ce04 = 6;
    _DAT_01f8ce08 = 0;
    _DAT_01f8ce0c = 0;
    DAT_01f8ce10 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cdf4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cdf4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cdf4;
  if ((uVar1 & 0x4000000) == 0) {
    uVar1 = uVar1 | 0x4000000;
    _DAT_01f8cdd4 = "m_data[1].m_OutLineColEm1";
    _DAT_01f8cdd8 = 0xb;
    _DAT_01f8cddc = 0x120;
    _DAT_01f8cde0 = 1;
    _DAT_01f8cde4 = 6;
    _DAT_01f8cde8 = 0;
    _DAT_01f8cdec = 0;
    DAT_01f8cdf0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cdd4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cdd4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cdd4;
  if ((uVar1 & 0x8000000) == 0) {
    uVar1 = uVar1 | 0x8000000;
    _DAT_01f8cdb4 = "m_data[1].m_OutLineColEm2";
    _DAT_01f8cdb8 = 0xb;
    _DAT_01f8cdbc = 0x130;
    _DAT_01f8cdc0 = 1;
    _DAT_01f8cdc4 = 6;
    _DAT_01f8cdc8 = 0;
    _DAT_01f8cdcc = 0;
    DAT_01f8cdd0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cdb4;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cdb4;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cdb4;
  if ((uVar1 & 0x10000000) == 0) {
    uVar1 = uVar1 | 0x10000000;
    _DAT_01f8cd94 = "m_data[1].m_OutLineColEtc1";
    _DAT_01f8cd98 = 0xb;
    _DAT_01f8cd9c = 0x140;
    _DAT_01f8cda0 = 1;
    _DAT_01f8cda4 = 6;
    _DAT_01f8cda8 = 0;
    _DAT_01f8cdac = 0;
    DAT_01f8cdb0 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cd94;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cd94;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cd94;
  if ((uVar1 & 0x20000000) == 0) {
    uVar1 = uVar1 | 0x20000000;
    _DAT_01f8cd74 = "m_data[1].m_OutLineColEtc2";
    _DAT_01f8cd78 = 0xb;
    _DAT_01f8cd7c = 0x150;
    _DAT_01f8cd80 = 1;
    _DAT_01f8cd84 = 6;
    _DAT_01f8cd88 = 0;
    _DAT_01f8cd8c = 0;
    DAT_01f8cd90 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cd74;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cd74;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cd74;
  if ((uVar1 & 0x40000000) == 0) {
    uVar1 = uVar1 | 0x40000000;
    _DAT_01f8cd54 = "m_data[1].m_OutLineColScr1";
    _DAT_01f8cd58 = 0xb;
    _DAT_01f8cd5c = 0x160;
    _DAT_01f8cd60 = 1;
    _DAT_01f8cd64 = 6;
    _DAT_01f8cd68 = 0;
    _DAT_01f8cd6c = 0;
    DAT_01f8cd70 = 0;
    DAT_01f8d134 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cd54;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cd54;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cd54;
  if (-1 < (int)uVar1) {
    DAT_01f8d134 = uVar1 | 0x80000000;
    _DAT_01f8cd34 = "m_data[1].m_OutLineColScr2";
    _DAT_01f8cd38 = 0xb;
    _DAT_01f8cd3c = 0x170;
    _DAT_01f8cd40 = 1;
    _DAT_01f8cd44 = 6;
    _DAT_01f8cd48 = 0;
    _DAT_01f8cd4c = 0;
    DAT_01f8cd50 = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cd34;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cd34;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cd34;
  if ((DAT_01f8cd30 & 1) == 0) {
    DAT_01f8cd30 = DAT_01f8cd30 | 1;
    _DAT_01f8cd10 = "m_data[1].m_specialShadowPow";
    _DAT_01f8cd14 = 0xb;
    _DAT_01f8cd18 = 0x180;
    _DAT_01f8cd1c = 1;
    _DAT_01f8cd20 = 6;
    _DAT_01f8cd24 = 0;
    _DAT_01f8cd28 = 0;
    DAT_01f8cd2c = 0;
  }
  uVar1 = DAT_01f8cd30;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cd10;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cd10;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cd10;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01f8ccf0 = "m_data[1].m_edgeDetectionParam";
    _DAT_01f8ccf4 = 0xb;
    _DAT_01f8ccf8 = 400;
    _DAT_01f8ccfc = 1;
    _DAT_01f8cd00 = 6;
    _DAT_01f8cd04 = 0;
    _DAT_01f8cd08 = 0;
    DAT_01f8cd0c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ccf0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ccf0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ccf0;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01f8ccd0 = "m_data[1].m_edgeDetectionParam2";
    _DAT_01f8ccd4 = 0xb;
    _DAT_01f8ccd8 = 0x1a0;
    _DAT_01f8ccdc = 1;
    _DAT_01f8cce0 = 6;
    _DAT_01f8cce4 = 0;
    _DAT_01f8cce8 = 0;
    DAT_01f8ccec = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ccd0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ccd0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ccd0;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01f8ccb0 = "m_data[1].m_HalfLambert[0]";
    _DAT_01f8ccb4 = 6;
    _DAT_01f8ccb8 = 0x1b0;
    _DAT_01f8ccbc = 1;
    _DAT_01f8ccc0 = 6;
    _DAT_01f8ccc4 = 0;
    _DAT_01f8ccc8 = 0;
    DAT_01f8cccc = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ccb0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ccb0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ccb0;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01f8cc90 = "m_data[1].m_HalfLambert[1]";
    _DAT_01f8cc94 = 6;
    _DAT_01f8cc98 = 0x1b4;
    _DAT_01f8cc9c = 1;
    _DAT_01f8cca0 = 6;
    _DAT_01f8cca4 = 0;
    _DAT_01f8cca8 = 0;
    DAT_01f8ccac = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cc90;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cc90;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cc90;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01f8cc70 = "m_data[1].m_HalfLambert[2]";
    _DAT_01f8cc74 = 6;
    _DAT_01f8cc78 = 0x1b8;
    _DAT_01f8cc7c = 1;
    _DAT_01f8cc80 = 6;
    _DAT_01f8cc84 = 0;
    _DAT_01f8cc88 = 0;
    DAT_01f8cc8c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cc70;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cc70;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cc70;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01f8cc50 = "m_data[1].m_HalfLambert[3]";
    _DAT_01f8cc54 = 6;
    _DAT_01f8cc58 = 0x1bc;
    _DAT_01f8cc5c = 1;
    _DAT_01f8cc60 = 6;
    _DAT_01f8cc64 = 0;
    _DAT_01f8cc68 = 0;
    DAT_01f8cc6c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cc50;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cc50;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cc50;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01f8cc30 = "m_data[1].m_specialShadow[0]";
    _DAT_01f8cc34 = 6;
    _DAT_01f8cc38 = 0x1c0;
    _DAT_01f8cc3c = 1;
    _DAT_01f8cc40 = 6;
    _DAT_01f8cc44 = 0;
    _DAT_01f8cc48 = 0;
    DAT_01f8cc4c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cc30;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cc30;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cc30;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01f8cc10 = "m_data[1].m_specialShadow[1]";
    _DAT_01f8cc14 = 6;
    _DAT_01f8cc18 = 0x1c4;
    _DAT_01f8cc1c = 1;
    _DAT_01f8cc20 = 6;
    _DAT_01f8cc24 = 0;
    _DAT_01f8cc28 = 0;
    DAT_01f8cc2c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cc10;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cc10;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cc10;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01f8cbf0 = "m_data[1].m_specialShadow[2]";
    _DAT_01f8cbf4 = 6;
    _DAT_01f8cbf8 = 0x1c8;
    _DAT_01f8cbfc = 1;
    _DAT_01f8cc00 = 6;
    _DAT_01f8cc04 = 0;
    _DAT_01f8cc08 = 0;
    DAT_01f8cc0c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cbf0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cbf0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cbf0;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01f8cbd0 = "m_data[1].m_specialShadow[3]";
    _DAT_01f8cbd4 = 6;
    _DAT_01f8cbd8 = 0x1cc;
    _DAT_01f8cbdc = 1;
    _DAT_01f8cbe0 = 6;
    _DAT_01f8cbe4 = 0;
    _DAT_01f8cbe8 = 0;
    DAT_01f8cbec = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cbd0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cbd0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cbd0;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01f8cbb0 = "m_data[1].m_shadowMaskReverse";
    _DAT_01f8cbb4 = 6;
    _DAT_01f8cbb8 = 0x1d0;
    _DAT_01f8cbbc = 1;
    _DAT_01f8cbc0 = 6;
    _DAT_01f8cbc4 = 0;
    _DAT_01f8cbc8 = 0;
    DAT_01f8cbcc = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cbb0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cbb0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cbb0;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01f8cb90 = "m_data[1].m_shadowMaskOutLineUse";
    _DAT_01f8cb94 = 6;
    _DAT_01f8cb98 = 0x1d4;
    _DAT_01f8cb9c = 1;
    _DAT_01f8cba0 = 6;
    _DAT_01f8cba4 = 0;
    _DAT_01f8cba8 = 0;
    DAT_01f8cbac = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cb90;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cb90;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cb90;
  if ((uVar1 & 0x2000) == 0) {
    uVar1 = uVar1 | 0x2000;
    _DAT_01f8cb70 = "m_data[1].m_toonLightUse";
    _DAT_01f8cb74 = 6;
    _DAT_01f8cb78 = 0x1d8;
    _DAT_01f8cb7c = 1;
    _DAT_01f8cb80 = 6;
    _DAT_01f8cb84 = 0;
    _DAT_01f8cb88 = 0;
    DAT_01f8cb8c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cb70;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cb70;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cb70;
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = uVar1 | 0x4000;
    _DAT_01f8cb50 = "m_data[1].m_bEdgeDetection";
    _DAT_01f8cb54 = 6;
    _DAT_01f8cb58 = 0x1dc;
    _DAT_01f8cb5c = 1;
    _DAT_01f8cb60 = 6;
    _DAT_01f8cb64 = 0;
    _DAT_01f8cb68 = 0;
    DAT_01f8cb6c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cb50;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cb50;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cb50;
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 | 0x8000;
    _DAT_01f8cb30 = "m_data[1].m_bEdgeDetectionNormal";
    _DAT_01f8cb34 = 6;
    _DAT_01f8cb38 = 0x1e0;
    _DAT_01f8cb3c = 1;
    _DAT_01f8cb40 = 6;
    _DAT_01f8cb44 = 0;
    _DAT_01f8cb48 = 0;
    DAT_01f8cb4c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cb30;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cb30;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cb30;
  if ((uVar1 & 0x10000) == 0) {
    uVar1 = uVar1 | 0x10000;
    _DAT_01f8cb10 = "m_data[2].m_OutLineColPl1";
    _DAT_01f8cb14 = 0xb;
    _DAT_01f8cb18 = 0x1f0;
    _DAT_01f8cb1c = 1;
    _DAT_01f8cb20 = 6;
    _DAT_01f8cb24 = 0;
    _DAT_01f8cb28 = 0;
    DAT_01f8cb2c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cb10;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cb10;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cb10;
  if ((uVar1 & 0x20000) == 0) {
    uVar1 = uVar1 | 0x20000;
    _DAT_01f8caf0 = "m_data[2].m_OutLineColPl2";
    _DAT_01f8caf4 = 0xb;
    _DAT_01f8caf8 = 0x200;
    _DAT_01f8cafc = 1;
    _DAT_01f8cb00 = 6;
    _DAT_01f8cb04 = 0;
    _DAT_01f8cb08 = 0;
    DAT_01f8cb0c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8caf0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8caf0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8caf0;
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 | 0x40000;
    _DAT_01f8cad0 = "m_data[2].m_OutLineColEm1";
    _DAT_01f8cad4 = 0xb;
    _DAT_01f8cad8 = 0x210;
    _DAT_01f8cadc = 1;
    _DAT_01f8cae0 = 6;
    _DAT_01f8cae4 = 0;
    _DAT_01f8cae8 = 0;
    DAT_01f8caec = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cad0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cad0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cad0;
  if ((uVar1 & 0x80000) == 0) {
    uVar1 = uVar1 | 0x80000;
    _DAT_01f8cab0 = "m_data[2].m_OutLineColEm2";
    _DAT_01f8cab4 = 0xb;
    _DAT_01f8cab8 = 0x220;
    _DAT_01f8cabc = 1;
    _DAT_01f8cac0 = 6;
    _DAT_01f8cac4 = 0;
    _DAT_01f8cac8 = 0;
    DAT_01f8cacc = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8cab0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8cab0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8cab0;
  if ((uVar1 & 0x100000) == 0) {
    uVar1 = uVar1 | 0x100000;
    _DAT_01f8ca90 = "m_data[2].m_OutLineColEtc1";
    _DAT_01f8ca94 = 0xb;
    _DAT_01f8ca98 = 0x230;
    _DAT_01f8ca9c = 1;
    _DAT_01f8caa0 = 6;
    _DAT_01f8caa4 = 0;
    _DAT_01f8caa8 = 0;
    DAT_01f8caac = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ca90;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ca90;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ca90;
  if ((uVar1 & 0x200000) == 0) {
    uVar1 = uVar1 | 0x200000;
    _DAT_01f8ca70 = "m_data[2].m_OutLineColEtc2";
    _DAT_01f8ca74 = 0xb;
    _DAT_01f8ca78 = 0x240;
    _DAT_01f8ca7c = 1;
    _DAT_01f8ca80 = 6;
    _DAT_01f8ca84 = 0;
    _DAT_01f8ca88 = 0;
    DAT_01f8ca8c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ca70;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ca70;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ca70;
  if ((uVar1 & 0x400000) == 0) {
    uVar1 = uVar1 | 0x400000;
    _DAT_01f8ca50 = "m_data[2].m_OutLineColScr1";
    _DAT_01f8ca54 = 0xb;
    _DAT_01f8ca58 = 0x250;
    _DAT_01f8ca5c = 1;
    _DAT_01f8ca60 = 6;
    _DAT_01f8ca64 = 0;
    _DAT_01f8ca68 = 0;
    DAT_01f8ca6c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ca50;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ca50;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ca50;
  if ((uVar1 & 0x800000) == 0) {
    uVar1 = uVar1 | 0x800000;
    _DAT_01f8ca30 = "m_data[2].m_OutLineColScr2";
    _DAT_01f8ca34 = 0xb;
    _DAT_01f8ca38 = 0x260;
    _DAT_01f8ca3c = 1;
    _DAT_01f8ca40 = 6;
    _DAT_01f8ca44 = 0;
    _DAT_01f8ca48 = 0;
    DAT_01f8ca4c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ca30;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ca30;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ca30;
  if ((uVar1 & 0x1000000) == 0) {
    uVar1 = uVar1 | 0x1000000;
    _DAT_01f8ca10 = "m_data[2].m_specialShadowPow";
    _DAT_01f8ca14 = 0xb;
    _DAT_01f8ca18 = 0x270;
    _DAT_01f8ca1c = 1;
    _DAT_01f8ca20 = 6;
    _DAT_01f8ca24 = 0;
    _DAT_01f8ca28 = 0;
    DAT_01f8ca2c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8ca10;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8ca10;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8ca10;
  if ((uVar1 & 0x2000000) == 0) {
    uVar1 = uVar1 | 0x2000000;
    _DAT_01f8c9f0 = "m_data[2].m_edgeDetectionParam";
    _DAT_01f8c9f4 = 0xb;
    _DAT_01f8c9f8 = 0x280;
    _DAT_01f8c9fc = 1;
    _DAT_01f8ca00 = 6;
    _DAT_01f8ca04 = 0;
    _DAT_01f8ca08 = 0;
    DAT_01f8ca0c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c9f0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c9f0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c9f0;
  if ((uVar1 & 0x4000000) == 0) {
    uVar1 = uVar1 | 0x4000000;
    _DAT_01f8c9d0 = "m_data[2].m_edgeDetectionParam2";
    _DAT_01f8c9d4 = 0xb;
    _DAT_01f8c9d8 = 0x290;
    _DAT_01f8c9dc = 1;
    _DAT_01f8c9e0 = 6;
    _DAT_01f8c9e4 = 0;
    _DAT_01f8c9e8 = 0;
    DAT_01f8c9ec = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c9d0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c9d0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c9d0;
  if ((uVar1 & 0x8000000) == 0) {
    uVar1 = uVar1 | 0x8000000;
    _DAT_01f8c9b0 = "m_data[2].m_HalfLambert[0]";
    _DAT_01f8c9b4 = 6;
    _DAT_01f8c9b8 = 0x2a0;
    _DAT_01f8c9bc = 1;
    _DAT_01f8c9c0 = 6;
    _DAT_01f8c9c4 = 0;
    _DAT_01f8c9c8 = 0;
    DAT_01f8c9cc = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c9b0;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c9b0;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c9b0;
  if ((uVar1 & 0x10000000) == 0) {
    uVar1 = uVar1 | 0x10000000;
    _DAT_01f8c990 = "m_data[2].m_HalfLambert[1]";
    _DAT_01f8c994 = 6;
    _DAT_01f8c998 = 0x2a4;
    _DAT_01f8c99c = 1;
    _DAT_01f8c9a0 = 6;
    _DAT_01f8c9a4 = 0;
    _DAT_01f8c9a8 = 0;
    DAT_01f8c9ac = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c990;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c990;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c990;
  if ((uVar1 & 0x20000000) == 0) {
    uVar1 = uVar1 | 0x20000000;
    _DAT_01f8c970 = "m_data[2].m_HalfLambert[2]";
    _DAT_01f8c974 = 6;
    _DAT_01f8c978 = 0x2a8;
    _DAT_01f8c97c = 1;
    _DAT_01f8c980 = 6;
    _DAT_01f8c984 = 0;
    _DAT_01f8c988 = 0;
    DAT_01f8c98c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c970;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c970;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c970;
  if ((uVar1 & 0x40000000) == 0) {
    uVar1 = uVar1 | 0x40000000;
    _DAT_01f8c950 = "m_data[2].m_HalfLambert[3]";
    _DAT_01f8c954 = 6;
    _DAT_01f8c958 = 0x2ac;
    _DAT_01f8c95c = 1;
    _DAT_01f8c960 = 6;
    _DAT_01f8c964 = 0;
    _DAT_01f8c968 = 0;
    DAT_01f8c96c = 0;
    DAT_01f8cd30 = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c950;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c950;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c950;
  if (-1 < (int)uVar1) {
    DAT_01f8cd30 = uVar1 | 0x80000000;
    _DAT_01f8c930 = "m_data[2].m_specialShadow[0]";
    _DAT_01f8c934 = 6;
    _DAT_01f8c938 = 0x2b0;
    _DAT_01f8c93c = 1;
    _DAT_01f8c940 = 6;
    _DAT_01f8c944 = 0;
    _DAT_01f8c948 = 0;
    DAT_01f8c94c = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c930;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c930;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c930;
  if ((DAT_01f8c92c & 1) == 0) {
    DAT_01f8c92c = DAT_01f8c92c | 1;
    _DAT_01f8c90c = "m_data[2].m_specialShadow[1]";
    _DAT_01f8c910 = 6;
    _DAT_01f8c914 = 0x2b4;
    _DAT_01f8c918 = 1;
    _DAT_01f8c91c = 6;
    _DAT_01f8c920 = 0;
    _DAT_01f8c924 = 0;
    DAT_01f8c928 = 0;
  }
  uVar1 = DAT_01f8c92c;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c90c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c90c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c90c;
  if ((uVar1 & 2) == 0) {
    uVar1 = uVar1 | 2;
    _DAT_01f8c8ec = "m_data[2].m_specialShadow[2]";
    _DAT_01f8c8f0 = 6;
    _DAT_01f8c8f4 = 0x2b8;
    _DAT_01f8c8f8 = 1;
    _DAT_01f8c8fc = 6;
    _DAT_01f8c900 = 0;
    _DAT_01f8c904 = 0;
    DAT_01f8c908 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c8ec;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c8ec;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c8ec;
  if ((uVar1 & 4) == 0) {
    uVar1 = uVar1 | 4;
    _DAT_01f8c8cc = "m_data[2].m_specialShadow[3]";
    _DAT_01f8c8d0 = 6;
    _DAT_01f8c8d4 = 700;
    _DAT_01f8c8d8 = 1;
    _DAT_01f8c8dc = 6;
    _DAT_01f8c8e0 = 0;
    _DAT_01f8c8e4 = 0;
    DAT_01f8c8e8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c8cc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c8cc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c8cc;
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 | 8;
    _DAT_01f8c8ac = "m_data[2].m_shadowMaskReverse";
    _DAT_01f8c8b0 = 6;
    _DAT_01f8c8b4 = 0x2c0;
    _DAT_01f8c8b8 = 1;
    _DAT_01f8c8bc = 6;
    _DAT_01f8c8c0 = 0;
    _DAT_01f8c8c4 = 0;
    DAT_01f8c8c8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c8ac;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c8ac;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c8ac;
  if ((uVar1 & 0x10) == 0) {
    uVar1 = uVar1 | 0x10;
    _DAT_01f8c88c = "m_data[2].m_shadowMaskOutLineUse";
    _DAT_01f8c890 = 6;
    _DAT_01f8c894 = 0x2c4;
    _DAT_01f8c898 = 1;
    _DAT_01f8c89c = 6;
    _DAT_01f8c8a0 = 0;
    _DAT_01f8c8a4 = 0;
    DAT_01f8c8a8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c88c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c88c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c88c;
  if ((uVar1 & 0x20) == 0) {
    uVar1 = uVar1 | 0x20;
    _DAT_01f8c86c = "m_data[2].m_toonLightUse";
    _DAT_01f8c870 = 6;
    _DAT_01f8c874 = 0x2c8;
    _DAT_01f8c878 = 1;
    _DAT_01f8c87c = 6;
    _DAT_01f8c880 = 0;
    _DAT_01f8c884 = 0;
    DAT_01f8c888 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c86c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c86c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c86c;
  if ((uVar1 & 0x40) == 0) {
    uVar1 = uVar1 | 0x40;
    _DAT_01f8c84c = "m_data[2].m_bEdgeDetection";
    _DAT_01f8c850 = 6;
    _DAT_01f8c854 = 0x2cc;
    _DAT_01f8c858 = 1;
    _DAT_01f8c85c = 6;
    _DAT_01f8c860 = 0;
    _DAT_01f8c864 = 0;
    DAT_01f8c868 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c84c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c84c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c84c;
  if (-1 < (char)uVar1) {
    uVar1 = uVar1 | 0x80;
    _DAT_01f8c82c = "m_data[2].m_bEdgeDetectionNormal";
    _DAT_01f8c830 = 6;
    _DAT_01f8c834 = 0x2d0;
    _DAT_01f8c838 = 1;
    _DAT_01f8c83c = 6;
    _DAT_01f8c840 = 0;
    _DAT_01f8c844 = 0;
    DAT_01f8c848 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c82c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c82c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c82c;
  if ((uVar1 & 0x100) == 0) {
    uVar1 = uVar1 | 0x100;
    _DAT_01f8c80c = "m_bOilPaint";
    _DAT_01f8c810 = 6;
    _DAT_01f8c814 = 0x300;
    _DAT_01f8c818 = 1;
    _DAT_01f8c81c = 6;
    _DAT_01f8c820 = 0;
    _DAT_01f8c824 = 0;
    DAT_01f8c828 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c80c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c80c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c80c;
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 | 0x200;
    _DAT_01f8c7ec = "m_bWaterColor";
    _DAT_01f8c7f0 = 6;
    _DAT_01f8c7f4 = 0x304;
    _DAT_01f8c7f8 = 1;
    _DAT_01f8c7fc = 6;
    _DAT_01f8c800 = 0;
    _DAT_01f8c804 = 0;
    DAT_01f8c808 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c7ec;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c7ec;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c7ec;
  if ((uVar1 & 0x400) == 0) {
    uVar1 = uVar1 | 0x400;
    _DAT_01f8c7cc = "m_opParam";
    _DAT_01f8c7d0 = 0xb;
    _DAT_01f8c7d4 = 0x2e0;
    _DAT_01f8c7d8 = 1;
    _DAT_01f8c7dc = 6;
    _DAT_01f8c7e0 = 0;
    _DAT_01f8c7e4 = 0;
    DAT_01f8c7e8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c7cc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c7cc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c7cc;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 | 0x800;
    _DAT_01f8c7ac = "m_wcParam";
    _DAT_01f8c7b0 = 0xb;
    _DAT_01f8c7b4 = 0x2f0;
    _DAT_01f8c7b8 = 1;
    _DAT_01f8c7bc = 6;
    _DAT_01f8c7c0 = 0;
    _DAT_01f8c7c4 = 0;
    DAT_01f8c7c8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c7ac;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c7ac;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c7ac;
  if ((uVar1 & 0x1000) == 0) {
    uVar1 = uVar1 | 0x1000;
    _DAT_01f8c78c = "m_bKuwahara";
    _DAT_01f8c790 = 6;
    _DAT_01f8c794 = 0x308;
    _DAT_01f8c798 = 1;
    _DAT_01f8c79c = 6;
    _DAT_01f8c7a0 = 0;
    _DAT_01f8c7a4 = 0;
    DAT_01f8c7a8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c78c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c78c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c78c;
  if ((uVar1 & 0x2000) == 0) {
    uVar1 = uVar1 | 0x2000;
    _DAT_01f8c76c = "m_kuwaharaLv";
    _DAT_01f8c770 = 6;
    _DAT_01f8c774 = 0x30c;
    _DAT_01f8c778 = 1;
    _DAT_01f8c77c = 6;
    _DAT_01f8c780 = 0;
    _DAT_01f8c784 = 0;
    DAT_01f8c788 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c76c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c76c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c76c;
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = uVar1 | 0x4000;
    _DAT_01f8c74c = "m_bShadowMaskShow";
    _DAT_01f8c750 = 6;
    _DAT_01f8c754 = 0x310;
    _DAT_01f8c758 = 1;
    _DAT_01f8c75c = 6;
    _DAT_01f8c760 = 0;
    _DAT_01f8c764 = 0;
    DAT_01f8c768 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c74c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c74c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c74c;
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 | 0x8000;
    _DAT_01f8c72c = "m_bShadowMaskBlend";
    _DAT_01f8c730 = 6;
    _DAT_01f8c734 = 0x314;
    _DAT_01f8c738 = 1;
    _DAT_01f8c73c = 6;
    _DAT_01f8c740 = 0;
    _DAT_01f8c744 = 0;
    DAT_01f8c748 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c72c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c72c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c72c;
  if ((uVar1 & 0x10000) == 0) {
    uVar1 = uVar1 | 0x10000;
    _DAT_01f8c70c = "m_bShadowMaskBlendAll";
    _DAT_01f8c710 = 6;
    _DAT_01f8c714 = 0x318;
    _DAT_01f8c718 = 1;
    _DAT_01f8c71c = 6;
    _DAT_01f8c720 = 0;
    _DAT_01f8c724 = 0;
    DAT_01f8c728 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c70c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c70c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c70c;
  if ((uVar1 & 0x20000) == 0) {
    uVar1 = uVar1 | 0x20000;
    _DAT_01f8c6ec = "m_shadowMaskCol";
    _DAT_01f8c6f0 = 0xb;
    _DAT_01f8c6f4 = 800;
    _DAT_01f8c6f8 = 1;
    _DAT_01f8c6fc = 6;
    _DAT_01f8c700 = 0;
    _DAT_01f8c704 = 0;
    DAT_01f8c708 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c6ec;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c6ec;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c6ec;
  if ((uVar1 & 0x40000) == 0) {
    uVar1 = uVar1 | 0x40000;
    _DAT_01f8c6cc = "m_bOLC_DiffUse";
    _DAT_01f8c6d0 = 6;
    _DAT_01f8c6d4 = 0x330;
    _DAT_01f8c6d8 = 1;
    _DAT_01f8c6dc = 6;
    _DAT_01f8c6e0 = 0;
    _DAT_01f8c6e4 = 0;
    DAT_01f8c6e8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c6cc;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c6cc;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c6cc;
  if ((uVar1 & 0x80000) == 0) {
    uVar1 = uVar1 | 0x80000;
    _DAT_01f8c6ac = "m_bOLC_AlbedoUse";
    _DAT_01f8c6b0 = 6;
    _DAT_01f8c6b4 = 0x334;
    _DAT_01f8c6b8 = 1;
    _DAT_01f8c6bc = 6;
    _DAT_01f8c6c0 = 0;
    _DAT_01f8c6c4 = 0;
    DAT_01f8c6c8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c6ac;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c6ac;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c6ac;
  if ((uVar1 & 0x100000) == 0) {
    uVar1 = uVar1 | 0x100000;
    _DAT_01f8c68c = "m_shadowAlbedoRate";
    _DAT_01f8c690 = 7;
    _DAT_01f8c694 = 0x338;
    _DAT_01f8c698 = 1;
    _DAT_01f8c69c = 6;
    _DAT_01f8c6a0 = 0;
    _DAT_01f8c6a4 = 0;
    DAT_01f8c6a8 = 0;
    DAT_01f8c92c = uVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c68c;
  }
  else {
    *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c68c;
  }
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c68c;
  if ((uVar1 & 0x200000) == 0) {
    DAT_01f8c92c = uVar1 | 0x200000;
    _DAT_01f8c66c = "m_hatchUvType";
    _DAT_01f8c670 = 6;
    _DAT_01f8c674 = 0x33c;
    _DAT_01f8c678 = 1;
    _DAT_01f8c67c = 6;
    _DAT_01f8c680 = 0;
    _DAT_01f8c684 = 0;
    _DAT_01f8c688 = 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_01f8c66c;
    *(undefined **)(param_1 + 0x14) = &DAT_01f8c66c;
    return;
  }
  *(undefined **)(*(int *)(param_1 + 0x14) + 0x1c) = &DAT_01f8c66c;
  *(undefined **)(param_1 + 0x14) = &DAT_01f8c66c;
  return;
}

