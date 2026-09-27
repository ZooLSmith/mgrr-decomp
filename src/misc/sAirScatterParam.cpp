// src/misc/sAirScatterParam.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A284D0..00A2AD80, 3 functions

#include "mgrr.h"
#include "sAirScatterParam.h"

// 00A284D0  sAirScatterParam::sAirScatterParam  size=411  [class]
void __thiscall sAirScatterParam::sAirScatterParam(undefined4 *param_1,int param_2)

{
  *param_1 = vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x14] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x19] = *(undefined4 *)(param_2 + 100);
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x74);
  param_1[0x1e] = *(undefined4 *)(param_2 + 0x78);
  param_1[0x1f] = *(undefined4 *)(param_2 + 0x7c);
  param_1[0x20] = *(undefined4 *)(param_2 + 0x80);
  param_1[0x21] = *(undefined4 *)(param_2 + 0x84);
  param_1[0x22] = *(undefined4 *)(param_2 + 0x88);
  param_1[0x23] = *(undefined4 *)(param_2 + 0x8c);
  param_1[0x24] = *(undefined4 *)(param_2 + 0x90);
  param_1[0x25] = *(undefined4 *)(param_2 + 0x94);
  param_1[0x26] = *(undefined4 *)(param_2 + 0x98);
  param_1[0x27] = *(undefined4 *)(param_2 + 0x9c);
  param_1[0x28] = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x29] = *(undefined4 *)(param_2 + 0xa4);
  param_1[0x2a] = *(undefined4 *)(param_2 + 0xa8);
  param_1[0x2b] = *(undefined4 *)(param_2 + 0xac);
  param_1[0x2c] = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x2d] = *(undefined4 *)(param_2 + 0xb4);
  param_1[0x2e] = *(undefined4 *)(param_2 + 0xb8);
  param_1[0x2f] = *(undefined4 *)(param_2 + 0xbc);
  param_1[0x30] = *(undefined4 *)(param_2 + 0xc0);
  param_1[0x31] = *(undefined4 *)(param_2 + 0xc4);
  return;
}

// 00A28670  sAirScatterParam::vf00  size=6  [class]
undefined ** sAirScatterParam::vf00(void)

{
  return &PTR_s_sAirScatterParam_018d19a0;
}

// 00A2AD80  sAirScatterParam::vf04  size=31  [class]
undefined4 * __thiscall sAirScatterParam::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

