// src/graphics/cLightApplyScale.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A2D7F0..00EC9940, 19 functions

#include "types.h"

// 00A2D7F0  cLightApplyScale::vf00  size=6  [class]
undefined ** cLightApplyScale::vf00(void)

{
  return &PTR_s_cLightApplyScale_0189f598;
}

// 00A2D800  cLightApplyScale::vf04  size=31  [class]
undefined4 * __thiscall cLightApplyScale::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A34F70  cLightApplyScale::cLightApplyScale_4  size=241  [class]
void __thiscall cLightApplyScale::cLightApplyScale_4(undefined4 *param_1,int param_2)

{
  *param_1 = cLightSaveWork::vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
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
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)((int)param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)((int)param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  param_1[0x17] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x19] = vftable;
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x74);
  param_1[0x1e] = *(undefined4 *)(param_2 + 0x78);
  param_1[0x1f] = *(undefined4 *)(param_2 + 0x7c);
  param_1[0x20] = *(undefined4 *)(param_2 + 0x80);
  param_1[0x21] = *(undefined4 *)(param_2 + 0x84);
  return;
}

// 00A36590  FUN_00a36590  size=6717  [callgraph]
int __thiscall FUN_00a36590(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
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
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x141) = *(undefined1 *)(param_2 + 0x141);
  *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_2 + 0x142);
  *(undefined1 *)(param_1 + 0x143) = *(undefined1 *)(param_2 + 0x143);
  *(undefined1 *)(param_1 + 0x144) = *(undefined1 *)(param_2 + 0x144);
  *(undefined1 *)(param_1 + 0x145) = *(undefined1 *)(param_2 + 0x145);
  *(undefined1 *)(param_1 + 0x146) = *(undefined1 *)(param_2 + 0x146);
  *(undefined1 *)(param_1 + 0x147) = *(undefined1 *)(param_2 + 0x147);
  iVar4 = 8;
  puVar1 = (undefined4 *)(param_1 + 0x150);
  puVar2 = (undefined4 *)(param_2 + 0x150);
  do {
    puVar1[-1] = puVar2[-1];
    iVar4 = iVar4 + -1;
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 7;
    puVar2 = puVar2 + 7;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x244);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
  *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_2 + 0x280);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x300);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_2 + 0x310);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x34c);
  *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x350);
  *(undefined1 *)(param_1 + 0x351) = *(undefined1 *)(param_2 + 0x351);
  *(undefined1 *)(param_1 + 0x352) = *(undefined1 *)(param_2 + 0x352);
  *(undefined1 *)(param_1 + 0x353) = *(undefined1 *)(param_2 + 0x353);
  *(undefined1 *)(param_1 + 0x354) = *(undefined1 *)(param_2 + 0x354);
  *(undefined1 *)(param_1 + 0x355) = *(undefined1 *)(param_2 + 0x355);
  *(undefined1 *)(param_1 + 0x356) = *(undefined1 *)(param_2 + 0x356);
  *(undefined1 *)(param_1 + 0x357) = *(undefined1 *)(param_2 + 0x357);
  iVar4 = 8;
  puVar1 = (undefined4 *)(param_1 + 0x360);
  puVar2 = (undefined4 *)(param_2 + 0x360);
  do {
    puVar1[-1] = puVar2[-1];
    iVar4 = iVar4 + -1;
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 7;
    puVar2 = puVar2 + 7;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  iVar4 = 8;
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_2 + 0x440);
  *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_2 + 0x464);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(param_2 + 0x474);
  puVar1 = (undefined4 *)(param_1 + 0x480);
  puVar2 = (undefined4 *)(param_2 + 0x480);
  do {
    puVar1[-1] = puVar2[-1];
    iVar4 = iVar4 + -1;
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 7;
    puVar2 = puVar2 + 7;
  } while (iVar4 != 0);
  iVar4 = 8;
  puVar1 = (undefined4 *)(param_1 + 0x560);
  puVar2 = (undefined4 *)(param_2 + 0x560);
  do {
    puVar1[-1] = puVar2[-1];
    iVar4 = iVar4 + -1;
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 7;
    puVar2 = puVar2 + 7;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_2 + 0x638);
  *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_2 + 0x640);
  *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_2 + 0x644);
  *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_2 + 0x648);
  *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(param_2 + 0x64c);
  *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_2 + 0x650);
  *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(param_2 + 0x654);
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_2 + 0x65c);
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 0x660);
  *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_2 + 0x664);
  *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_2 + 0x668);
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_2 + 0x66c);
  *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_2 + 0x670);
  *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(param_2 + 0x674);
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
  *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(param_2 + 0x67c);
  *(undefined4 *)(param_1 + 0x680) = *(undefined4 *)(param_2 + 0x680);
  *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0x688) = *(undefined4 *)(param_2 + 0x688);
  *(undefined4 *)(param_1 + 0x68c) = *(undefined4 *)(param_2 + 0x68c);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 0x690);
  *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(param_2 + 0x694);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_2 + 0x69c);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_2 + 0x6a0);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_2 + 0x6a4);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x6a8);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_2 + 0x6ac);
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_2 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_2 + 0x6b4);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_2 + 0x6bc);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_2 + 0x6c0);
  *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_2 + 0x6c4);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x6c8);
  *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_2 + 0x6cc);
  *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_2 + 0x6d4);
  *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_2 + 0x6d8);
  *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_2 + 0x6dc);
  *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_2 + 0x6e0);
  *(undefined4 *)(param_1 + 0x6e4) = *(undefined4 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_2 + 0x6e8);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_2 + 0x6ec);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_2 + 0x6f4);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_2 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_2 + 0x6fc);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_2 + 0x704);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_2 + 0x70c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 0x710);
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(param_2 + 0x714);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_2 + 0x718);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_2 + 0x71c);
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(param_2 + 0x720);
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(param_2 + 0x724);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x728);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_2 + 0x730);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x734);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_2 + 0x738);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(param_2 + 0x73c);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_2 + 0x740);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_2 + 0x744);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_2 + 0x748);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_2 + 0x74c);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_2 + 0x750);
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_2 + 0x754);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(param_2 + 0x75c);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_2 + 0x760);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_2 + 0x768);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_2 + 0x774);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_2 + 0x778);
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(param_2 + 0x77c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_2 + 0x780);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_2 + 0x784);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_2 + 0x788);
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_2 + 0x78c);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_2 + 0x790);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_2 + 0x794);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(param_2 + 0x798);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(param_2 + 0x79c);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_2 + 0x7a0);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_2 + 0x7a4);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_2 + 0x7a8);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_2 + 0x7ac);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_2 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_2 + 0x7b4);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_2 + 0x7b8);
  *(undefined4 *)(param_1 + 0x7bc) = *(undefined4 *)(param_2 + 0x7bc);
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_2 + 0x7c4);
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_2 + 0x7c8);
  *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_2 + 0x7cc);
  *(undefined4 *)(param_1 + 2000) = *(undefined4 *)(param_2 + 2000);
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_2 + 0x7d4);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_2 + 0x7d8);
  *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_2 + 0x7dc);
  *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_2 + 0x7e0);
  *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(param_2 + 0x7e4);
  *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(param_2 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_2 + 0x7ec);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 0x7f0);
  *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_2 + 0x7f4);
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(param_2 + 0x7f8);
  *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(param_2 + 0x7fc);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 0x800);
  *(undefined4 *)(param_1 + 0x804) = *(undefined4 *)(param_2 + 0x804);
  *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_2 + 0x808);
  *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_2 + 0x80c);
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_2 + 0x810);
  *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_2 + 0x814);
  *(undefined4 *)(param_1 + 0x818) = *(undefined4 *)(param_2 + 0x818);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_2 + 0x81c);
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 0x820);
  *(undefined4 *)(param_1 + 0x824) = *(undefined4 *)(param_2 + 0x824);
  *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_2 + 0x828);
  *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_2 + 0x82c);
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_2 + 0x830);
  *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(param_2 + 0x834);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_2 + 0x838);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_2 + 0x83c);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_2 + 0x840);
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(param_2 + 0x844);
  *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_2 + 0x848);
  *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_2 + 0x84c);
  *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_2 + 0x850);
  *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_2 + 0x854);
  *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_2 + 0x858);
  *(undefined4 *)(param_1 + 0x85c) = *(undefined4 *)(param_2 + 0x85c);
  *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_2 + 0x860);
  *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_2 + 0x864);
  *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_2 + 0x868);
  *(undefined4 *)(param_1 + 0x86c) = *(undefined4 *)(param_2 + 0x86c);
  *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_2 + 0x870);
  *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_2 + 0x874);
  *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_2 + 0x878);
  *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_2 + 0x87c);
  *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_2 + 0x880);
  *(undefined4 *)(param_1 + 0x884) = *(undefined4 *)(param_2 + 0x884);
  *(undefined4 *)(param_1 + 0x888) = *(undefined4 *)(param_2 + 0x888);
  *(undefined4 *)(param_1 + 0x88c) = *(undefined4 *)(param_2 + 0x88c);
  *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_2 + 0x890);
  *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(param_2 + 0x894);
  *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_2 + 0x898);
  *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_2 + 0x89c);
  *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_2 + 0x8a4);
  *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_2 + 0x8a8);
  *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_2 + 0x8ac);
  *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_2 + 0x8b0);
  *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_2 + 0x8b4);
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_2 + 0x8b8);
  *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(param_2 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_2 + 0x8c0);
  *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(param_2 + 0x8c4);
  *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_2 + 0x8c8);
  *(undefined4 *)(param_1 + 0x8cc) = *(undefined4 *)(param_2 + 0x8cc);
  *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_2 + 0x8d0);
  *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(param_2 + 0x8d4);
  *(undefined4 *)(param_1 + 0x8d8) = *(undefined4 *)(param_2 + 0x8d8);
  *(undefined4 *)(param_1 + 0x8dc) = *(undefined4 *)(param_2 + 0x8dc);
  *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_2 + 0x8e0);
  *(undefined4 *)(param_1 + 0x8e4) = *(undefined4 *)(param_2 + 0x8e4);
  *(undefined4 *)(param_1 + 0x8e8) = *(undefined4 *)(param_2 + 0x8e8);
  *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_2 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(param_2 + 0x8f0);
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_2 + 0x8f4);
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_2 + 0x8f8);
  *(undefined4 *)(param_1 + 0x8fc) = *(undefined4 *)(param_2 + 0x8fc);
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_2 + 0x900);
  *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_2 + 0x904);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_2 + 0x908);
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_2 + 0x90c);
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_2 + 0x910);
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_2 + 0x914);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_2 + 0x918);
  *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(param_2 + 0x91c);
  *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_2 + 0x920);
  *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_2 + 0x924);
  *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_2 + 0x928);
  *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(param_2 + 0x92c);
  *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_2 + 0x930);
  *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_2 + 0x934);
  *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_2 + 0x938);
  *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_2 + 0x93c);
  *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_2 + 0x940);
  *(undefined4 *)(param_1 + 0x944) = *(undefined4 *)(param_2 + 0x944);
  *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_2 + 0x948);
  *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_2 + 0x94c);
  *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(param_2 + 0x950);
  *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(param_2 + 0x954);
  *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_2 + 0x958);
  *(undefined4 *)(param_1 + 0x95c) = *(undefined4 *)(param_2 + 0x95c);
  *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_2 + 0x960);
  *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_2 + 0x964);
  *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_2 + 0x968);
  *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_2 + 0x96c);
  *(undefined4 *)(param_1 + 0x970) = *(undefined4 *)(param_2 + 0x970);
  *(undefined4 *)(param_1 + 0x974) = *(undefined4 *)(param_2 + 0x974);
  *(undefined4 *)(param_1 + 0x978) = *(undefined4 *)(param_2 + 0x978);
  *(undefined4 *)(param_1 + 0x97c) = *(undefined4 *)(param_2 + 0x97c);
  *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_2 + 0x980);
  *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_2 + 0x984);
  *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_2 + 0x988);
  *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_2 + 0x98c);
  *(undefined4 *)(param_1 + 0x990) = *(undefined4 *)(param_2 + 0x990);
  *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(param_2 + 0x994);
  *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(param_2 + 0x998);
  *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(param_2 + 0x99c);
  *(undefined4 *)(param_1 + 0x9a0) = *(undefined4 *)(param_2 + 0x9a0);
  *(undefined4 *)(param_1 + 0x9a4) = *(undefined4 *)(param_2 + 0x9a4);
  *(undefined4 *)(param_1 + 0x9a8) = *(undefined4 *)(param_2 + 0x9a8);
  *(undefined4 *)(param_1 + 0x9ac) = *(undefined4 *)(param_2 + 0x9ac);
  *(undefined4 *)(param_1 + 0x9b0) = *(undefined4 *)(param_2 + 0x9b0);
  *(undefined4 *)(param_1 + 0x9b4) = *(undefined4 *)(param_2 + 0x9b4);
  *(undefined4 *)(param_1 + 0x9b8) = *(undefined4 *)(param_2 + 0x9b8);
  *(undefined4 *)(param_1 + 0x9bc) = *(undefined4 *)(param_2 + 0x9bc);
  *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(param_2 + 0x9c0);
  *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(param_2 + 0x9c4);
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_2 + 0x9c8);
  *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_2 + 0x9cc);
  *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_2 + 0x9d0);
  *(undefined4 *)(param_1 + 0x9d4) = *(undefined4 *)(param_2 + 0x9d4);
  *(undefined4 *)(param_1 + 0x9e0) = *(undefined4 *)(param_2 + 0x9e0);
  *(undefined4 *)(param_1 + 0x9e4) = *(undefined4 *)(param_2 + 0x9e4);
  *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(param_2 + 0x9e8);
  *(undefined4 *)(param_1 + 0x9ec) = *(undefined4 *)(param_2 + 0x9ec);
  *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_2 + 0x9f0);
  *(undefined4 *)(param_1 + 0x9f4) = *(undefined4 *)(param_2 + 0x9f4);
  *(undefined4 *)(param_1 + 0x9f8) = *(undefined4 *)(param_2 + 0x9f8);
  *(undefined4 *)(param_1 + 0x9fc) = *(undefined4 *)(param_2 + 0x9fc);
  *(undefined4 *)(param_1 + 0xa00) = *(undefined4 *)(param_2 + 0xa00);
  *(undefined4 *)(param_1 + 0xa04) = *(undefined4 *)(param_2 + 0xa04);
  *(undefined4 *)(param_1 + 0xa08) = *(undefined4 *)(param_2 + 0xa08);
  *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_2 + 0xa0c);
  *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(param_2 + 0xa10);
  *(undefined4 *)(param_1 + 0xa14) = *(undefined4 *)(param_2 + 0xa14);
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_2 + 0xa18);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_2 + 0xa1c);
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_2 + 0xa20);
  *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_2 + 0xa24);
  *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_2 + 0xa28);
  *(undefined4 *)(param_1 + 0xa2c) = *(undefined4 *)(param_2 + 0xa2c);
  *(undefined4 *)(param_1 + 0xa30) = *(undefined4 *)(param_2 + 0xa30);
  *(undefined4 *)(param_1 + 0xa34) = *(undefined4 *)(param_2 + 0xa34);
  *(undefined4 *)(param_1 + 0xa38) = *(undefined4 *)(param_2 + 0xa38);
  *(undefined4 *)(param_1 + 0xa3c) = *(undefined4 *)(param_2 + 0xa3c);
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(param_2 + 0xa40);
  *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(param_2 + 0xa44);
  *(undefined4 *)(param_1 + 0xa48) = *(undefined4 *)(param_2 + 0xa48);
  *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_2 + 0xa4c);
  *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(param_2 + 0xa50);
  *(undefined4 *)(param_1 + 0xa54) = *(undefined4 *)(param_2 + 0xa54);
  *(undefined4 *)(param_1 + 0xa58) = *(undefined4 *)(param_2 + 0xa58);
  *(undefined4 *)(param_1 + 0xa5c) = *(undefined4 *)(param_2 + 0xa5c);
  *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(param_2 + 0xa60);
  *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(param_2 + 0xa64);
  *(undefined4 *)(param_1 + 0xa68) = *(undefined4 *)(param_2 + 0xa68);
  *(undefined4 *)(param_1 + 0xa6c) = *(undefined4 *)(param_2 + 0xa6c);
  *(undefined4 *)(param_1 + 0xa70) = *(undefined4 *)(param_2 + 0xa70);
  *(undefined4 *)(param_1 + 0xa74) = *(undefined4 *)(param_2 + 0xa74);
  *(undefined4 *)(param_1 + 0xa78) = *(undefined4 *)(param_2 + 0xa78);
  *(undefined4 *)(param_1 + 0xa7c) = *(undefined4 *)(param_2 + 0xa7c);
  *(undefined4 *)(param_1 + 0xa80) = *(undefined4 *)(param_2 + 0xa80);
  *(undefined4 *)(param_1 + 0xa84) = *(undefined4 *)(param_2 + 0xa84);
  *(undefined4 *)(param_1 + 0xa88) = *(undefined4 *)(param_2 + 0xa88);
  *(undefined4 *)(param_1 + 0xa8c) = *(undefined4 *)(param_2 + 0xa8c);
  *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_2 + 0xa90);
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_2 + 0xa94);
  *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_2 + 0xa98);
  *(undefined4 *)(param_1 + 0xa9c) = *(undefined4 *)(param_2 + 0xa9c);
  *(undefined4 *)(param_1 + 0xaa0) = *(undefined4 *)(param_2 + 0xaa0);
  *(undefined4 *)(param_1 + 0xaa4) = *(undefined4 *)(param_2 + 0xaa4);
  *(undefined4 *)(param_1 + 0xaa8) = *(undefined4 *)(param_2 + 0xaa8);
  *(undefined4 *)(param_1 + 0xaac) = *(undefined4 *)(param_2 + 0xaac);
  *(undefined4 *)(param_1 + 0xab0) = *(undefined4 *)(param_2 + 0xab0);
  *(undefined4 *)(param_1 + 0xab4) = *(undefined4 *)(param_2 + 0xab4);
  *(undefined4 *)(param_1 + 0xab8) = *(undefined4 *)(param_2 + 0xab8);
  *(undefined4 *)(param_1 + 0xabc) = *(undefined4 *)(param_2 + 0xabc);
  *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)(param_2 + 0xac0);
  *(undefined4 *)(param_1 + 0xac4) = *(undefined4 *)(param_2 + 0xac4);
  *(undefined4 *)(param_1 + 0xac8) = *(undefined4 *)(param_2 + 0xac8);
  *(undefined4 *)(param_1 + 0xacc) = *(undefined4 *)(param_2 + 0xacc);
  *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(param_2 + 0xad0);
  *(undefined4 *)(param_1 + 0xad4) = *(undefined4 *)(param_2 + 0xad4);
  *(undefined4 *)(param_1 + 0xad8) = *(undefined4 *)(param_2 + 0xad8);
  *(undefined4 *)(param_1 + 0xadc) = *(undefined4 *)(param_2 + 0xadc);
  *(undefined4 *)(param_1 + 0xae0) = *(undefined4 *)(param_2 + 0xae0);
  *(undefined4 *)(param_1 + 0xae4) = *(undefined4 *)(param_2 + 0xae4);
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_2 + 0xae8);
  *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(param_2 + 0xaec);
  *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_2 + 0xaf0);
  *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(param_2 + 0xaf4);
  *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_2 + 0xaf8);
  *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_2 + 0xafc);
  *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_2 + 0xb00);
  *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(param_2 + 0xb04);
  *(undefined4 *)(param_1 + 0xb08) = *(undefined4 *)(param_2 + 0xb08);
  *(undefined4 *)(param_1 + 0xb0c) = *(undefined4 *)(param_2 + 0xb0c);
  *(undefined4 *)(param_1 + 0xb10) = *(undefined4 *)(param_2 + 0xb10);
  *(undefined4 *)(param_1 + 0xb14) = *(undefined4 *)(param_2 + 0xb14);
  *(undefined4 *)(param_1 + 0xb18) = *(undefined4 *)(param_2 + 0xb18);
  *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(param_2 + 0xb1c);
  *(undefined4 *)(param_1 + 0xb20) = *(undefined4 *)(param_2 + 0xb20);
  *(undefined4 *)(param_1 + 0xb24) = *(undefined4 *)(param_2 + 0xb24);
  *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(param_2 + 0xb28);
  *(undefined4 *)(param_1 + 0xb2c) = *(undefined4 *)(param_2 + 0xb2c);
  *(undefined4 *)(param_1 + 0xb30) = *(undefined4 *)(param_2 + 0xb30);
  *(undefined4 *)(param_1 + 0xb34) = *(undefined4 *)(param_2 + 0xb34);
  *(undefined4 *)(param_1 + 0xb38) = *(undefined4 *)(param_2 + 0xb38);
  *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_2 + 0xb3c);
  *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(param_2 + 0xb40);
  *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(param_2 + 0xb44);
  *(undefined4 *)(param_1 + 0xb48) = *(undefined4 *)(param_2 + 0xb48);
  *(undefined4 *)(param_1 + 0xb4c) = *(undefined4 *)(param_2 + 0xb4c);
  *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_2 + 0xb50);
  *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(param_2 + 0xb54);
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xb58);
  *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_2 + 0xb5c);
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_2 + 0xb60);
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_2 + 0xb64);
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0xb68);
  *(undefined4 *)(param_1 + 0xb6c) = *(undefined4 *)(param_2 + 0xb6c);
  *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_2 + 0xb70);
  *(undefined4 *)(param_1 + 0xb74) = *(undefined4 *)(param_2 + 0xb74);
  *(undefined4 *)(param_1 + 0xb78) = *(undefined4 *)(param_2 + 0xb78);
  *(undefined4 *)(param_1 + 0xb7c) = *(undefined4 *)(param_2 + 0xb7c);
  *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(param_2 + 0xb80);
  *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(param_2 + 0xb84);
  *(undefined4 *)(param_1 + 0xb88) = *(undefined4 *)(param_2 + 0xb88);
  *(undefined4 *)(param_1 + 0xb8c) = *(undefined4 *)(param_2 + 0xb8c);
  *(undefined4 *)(param_1 + 0xb90) = *(undefined4 *)(param_2 + 0xb90);
  *(undefined4 *)(param_1 + 0xb94) = *(undefined4 *)(param_2 + 0xb94);
  *(undefined4 *)(param_1 + 0xb98) = *(undefined4 *)(param_2 + 0xb98);
  *(undefined4 *)(param_1 + 0xb9c) = *(undefined4 *)(param_2 + 0xb9c);
  *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_2 + 0xba0);
  *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_2 + 0xba4);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_2 + 0xba8);
  *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_2 + 0xbac);
  *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0xbb0);
  *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_2 + 0xbb4);
  *(undefined4 *)(param_1 + 3000) = *(undefined4 *)(param_2 + 3000);
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_2 + 0xbbc);
  *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_2 + 0xbc0);
  *(undefined4 *)(param_1 + 0xbc4) = *(undefined4 *)(param_2 + 0xbc4);
  *(undefined4 *)(param_1 + 0xbc8) = *(undefined4 *)(param_2 + 0xbc8);
  *(undefined4 *)(param_1 + 0xbcc) = *(undefined4 *)(param_2 + 0xbcc);
  *(undefined4 *)(param_1 + 0xbd0) = *(undefined4 *)(param_2 + 0xbd0);
  *(undefined4 *)(param_1 + 0xbd4) = *(undefined4 *)(param_2 + 0xbd4);
  *(undefined4 *)(param_1 + 0xbd8) = *(undefined4 *)(param_2 + 0xbd8);
  *(undefined4 *)(param_1 + 0xbdc) = *(undefined4 *)(param_2 + 0xbdc);
  *(undefined1 *)(param_1 + 0xbe0) = *(undefined1 *)(param_2 + 0xbe0);
  *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_2 + 0xbe4);
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_2 + 0xbe8);
  *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)(param_2 + 0xbec);
  *(undefined4 *)(param_1 + 0xbf0) = *(undefined4 *)(param_2 + 0xbf0);
  *(undefined4 *)(param_1 + 0xbf4) = *(undefined4 *)(param_2 + 0xbf4);
  iVar4 = param_1 + 0xc00;
  iVar3 = 0x20;
  do {
    FUN_00a36040((param_2 - param_1) + iVar4);
    iVar4 = iVar4 + 0x90;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1;
}

// 00A380B0  FUN_00a380b0  size=254  [callgraph]
void __thiscall FUN_00a380b0(undefined4 *param_1,int param_2)

{
  param_1[0x1e] = *(uint *)(param_2 + 4) | 8;
  param_1[0x1f] = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((int)param_1 + 0x66) = *(undefined1 *)(param_2 + 0x59);
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = *(undefined4 *)(param_2 + 0x14);
  param_1[2] = *(undefined4 *)(param_2 + 0x18);
  param_1[3] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[8] = (float)param_1[0xb] * (float)param_1[8];
  param_1[9] = (float)param_1[0xb] * (float)param_1[9];
  param_1[10] = (float)param_1[0xb] * (float)param_1[10];
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)((int)param_1 + 0x65) = *(undefined1 *)(param_2 + 0x58);
  param_1[0x21] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x22] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x23] = *(undefined4 *)(param_2 + 0x70);
  param_1[0x24] = *(undefined4 *)(param_2 + 0x74);
  param_1[0x25] = *(undefined4 *)(param_2 + 0x78);
  param_1[0x26] = *(undefined4 *)(param_2 + 0x7c);
  *(undefined1 *)((int)param_1 + 0x67) = *(undefined1 *)(param_2 + 0x5a);
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x27] = *(undefined4 *)(param_2 + 0x80);
  param_1[0x28] = *(undefined4 *)(param_2 + 0x84);
  return;
}

// 00A381F0  FUN_00a381f0  size=167  [callgraph]
void FUN_00a381f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x360);
  if (*(int *)(param_1 + 0x360) == 0) {
    iVar1 = param_1;
  }
  if ((*(short *)(iVar1 + 0x358) < 1) || (iVar1 = *(int *)(iVar1 + 0x350), iVar1 == 0)) {
    local_20 = *(undefined4 *)(param_1 + 0x50);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    local_14 = *(undefined4 *)(param_1 + 0x5c);
  }
  else {
    local_20 = *(undefined4 *)(iVar1 + 0x40);
    local_1c = *(undefined4 *)(iVar1 + 0x44);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
  }
  iVar1 = FUN_00eb1c20(&local_20);
  if (iVar1 == 0) {
    uVar3 = 0;
    uVar4 = FUN_00a4d610(0);
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar1 + 10);
    uVar4 = (uint)*(ushort *)(iVar1 + 8);
  }
  uVar2 = CubeMapManager::getCubeTexIndex(uVar4,uVar3);
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  return;
}

// 00A382A0  FUN_00a382a0  size=305  [callgraph]
void __thiscall
FUN_00a382a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,short param_7,int param_8,undefined1 param_9,
            undefined1 param_10,int param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  puVar6 = (undefined4 *)FUN_00a36510();
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[0x1e] = 5;
    iVar7 = FUN_00e6b900();
    if (iVar7 == 3) {
      puVar6[0x1e] = puVar6[0x1e] | 0x18;
    }
    if (param_8 == 0) {
      puVar6[0x1a] = puVar6[0x1a] | 1;
    }
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
    puVar6[0xc] = *param_3;
    puVar6[0xd] = param_3[1];
    puVar6[8] = param_4;
    puVar6[9] = param_5;
    puVar6[10] = param_6;
    puVar6[0xb] = 0x3f800000;
    *(undefined1 *)((int)puVar6 + 0x65) = param_10;
    *(undefined1 *)((int)puVar6 + 0x66) = param_9;
    puVar6[0x1f] = (int)param_7;
    if (param_11 != 0) {
      uVar1 = *(undefined4 *)(param_11 + 8);
      uVar2 = *(undefined4 *)(param_11 + 0xc);
      uVar3 = *(undefined4 *)(param_11 + 0x10);
      uVar4 = *(undefined4 *)(param_11 + 0x14);
      uVar5 = *(undefined4 *)(param_11 + 0x18);
      puVar6[0x21] = *(undefined4 *)(param_11 + 4);
      puVar6[0x22] = uVar1;
      puVar6[0x23] = uVar2;
      puVar6[0x24] = uVar3;
      puVar6[0x25] = uVar4;
      puVar6[0x26] = uVar5;
    }
    puVar6[0x18] = 1;
  }
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  return;
}

// 00A383E0  FUN_00a383e0  size=402  [callgraph]
void __thiscall
FUN_00a383e0(int param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,short param_10,
            int param_11,undefined1 param_12,undefined1 param_13,int param_14,int param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  puVar6 = (undefined4 *)FUN_00a36510();
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[0x1e] = 5;
    iVar7 = FUN_00e6b900();
    if (iVar7 == 3) {
      puVar6[0x1e] = puVar6[0x1e] | 0x18;
    }
    puVar6[0x1a] = (uint)(param_11 == 0);
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
    puVar6[0xc] = *param_3;
    puVar6[0xd] = param_3[1];
    puVar6[0xe] = param_3[2];
    puVar6[0xf] = param_3[3];
    puVar6[0x10] = param_4 * 57.29578;
    puVar6[0x11] = param_5 * 57.29578;
    puVar6[0x12] = param_6 * 57.29578;
    puVar6[8] = param_7;
    puVar6[9] = param_8;
    puVar6[10] = param_9;
    puVar6[0xb] = 0x3f800000;
    *(undefined1 *)((int)puVar6 + 0x65) = param_13;
    *(undefined1 *)((int)puVar6 + 0x66) = param_12;
    puVar6[0x1f] = (int)param_10;
    *(undefined1 *)((int)puVar6 + 0x67) = 1;
    if (param_15 != 0) {
      uVar1 = *(undefined4 *)(param_15 + 8);
      uVar2 = *(undefined4 *)(param_15 + 0xc);
      uVar3 = *(undefined4 *)(param_15 + 0x10);
      uVar4 = *(undefined4 *)(param_15 + 0x14);
      uVar5 = *(undefined4 *)(param_15 + 0x18);
      puVar6[0x21] = *(undefined4 *)(param_15 + 4);
      puVar6[0x22] = uVar1;
      puVar6[0x23] = uVar2;
      puVar6[0x24] = uVar3;
      puVar6[0x25] = uVar4;
      puVar6[0x26] = uVar5;
    }
    puVar6[0x18] = 1;
    if ((param_14 != 0) && (param_11 != 0)) {
      DAT_01be5528 = 1;
    }
  }
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  return;
}

// 00A38580  FUN_00a38580  size=375  [callgraph]
void __thiscall
FUN_00a38580(int param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,short param_10,
            int param_11,undefined1 param_12,undefined1 param_13,int param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  puVar6 = (undefined4 *)FUN_00a36510();
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[0x1e] = 5;
    iVar7 = FUN_00e6b900();
    if (iVar7 == 3) {
      puVar6[0x1e] = puVar6[0x1e] | 0x18;
    }
    puVar6[0x1a] = (uint)(param_11 == 0);
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
    puVar6[0xc] = *param_3;
    puVar6[0xd] = param_3[1];
    puVar6[0xe] = param_3[2];
    puVar6[0x10] = param_4 * 57.29578;
    puVar6[0x11] = param_5 * 57.29578;
    puVar6[0x12] = param_6 * 57.29578;
    puVar6[8] = param_7;
    puVar6[9] = param_8;
    puVar6[10] = param_9;
    puVar6[0xb] = 0x3f800000;
    *(undefined1 *)((int)puVar6 + 0x66) = param_12;
    puVar6[0x1f] = (int)param_10;
    *(undefined1 *)((int)puVar6 + 0x67) = 2;
    *(undefined1 *)((int)puVar6 + 0x65) = param_13;
    if (param_14 != 0) {
      uVar1 = *(undefined4 *)(param_14 + 8);
      uVar2 = *(undefined4 *)(param_14 + 0xc);
      uVar3 = *(undefined4 *)(param_14 + 0x10);
      uVar4 = *(undefined4 *)(param_14 + 0x14);
      uVar5 = *(undefined4 *)(param_14 + 0x18);
      puVar6[0x21] = *(undefined4 *)(param_14 + 4);
      puVar6[0x22] = uVar1;
      puVar6[0x23] = uVar2;
      puVar6[0x24] = uVar3;
      puVar6[0x25] = uVar4;
      puVar6[0x26] = uVar5;
    }
    puVar6[0x18] = 1;
  }
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  return;
}

// 00A38700  FUN_00a38700  size=362  [callgraph]
void __thiscall
FUN_00a38700(int param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,short param_10,
            int param_11,undefined1 param_12,int param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  puVar6 = (undefined4 *)FUN_00a36510();
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[0x1e] = 5;
    iVar7 = FUN_00e6b900();
    if (iVar7 == 3) {
      puVar6[0x1e] = puVar6[0x1e] | 0x18;
    }
    puVar6[0x1a] = (uint)(param_11 == 0);
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
    puVar6[0xc] = *param_3;
    puVar6[0xd] = param_3[1];
    puVar6[0x10] = param_4 * 57.29578;
    puVar6[0x11] = param_5 * 57.29578;
    puVar6[0x12] = param_6 * 57.29578;
    puVar6[8] = param_7;
    puVar6[9] = param_8;
    puVar6[10] = param_9;
    puVar6[0xb] = 0x3f800000;
    puVar6[0x1f] = (int)param_10;
    *(undefined1 *)((int)puVar6 + 0x67) = 3;
    *(undefined1 *)((int)puVar6 + 0x66) = param_12;
    if (param_13 != 0) {
      uVar1 = *(undefined4 *)(param_13 + 8);
      uVar2 = *(undefined4 *)(param_13 + 0xc);
      uVar3 = *(undefined4 *)(param_13 + 0x10);
      uVar4 = *(undefined4 *)(param_13 + 0x14);
      uVar5 = *(undefined4 *)(param_13 + 0x18);
      puVar6[0x21] = *(undefined4 *)(param_13 + 4);
      puVar6[0x22] = uVar1;
      puVar6[0x23] = uVar2;
      puVar6[0x24] = uVar3;
      puVar6[0x25] = uVar4;
      puVar6[0x26] = uVar5;
    }
    puVar6[0x18] = 1;
  }
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  return;
}

// 00A38870  FUN_00a38870  size=362  [callgraph]
void __thiscall
FUN_00a38870(int param_1,undefined4 *param_2,undefined4 *param_3,float param_4,float param_5,
            float param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,short param_10,
            int param_11,undefined1 param_12,int param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  puVar6 = (undefined4 *)FUN_00a36510();
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[0x1e] = 5;
    iVar7 = FUN_00e6b900();
    if (iVar7 == 3) {
      puVar6[0x1e] = puVar6[0x1e] | 0x18;
    }
    puVar6[0x1a] = (uint)(param_11 == 0);
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
    puVar6[0xc] = *param_3;
    puVar6[0xd] = param_3[1];
    puVar6[0x10] = param_4 * 57.29578;
    puVar6[0x11] = param_5 * 57.29578;
    puVar6[0x12] = param_6 * 57.29578;
    puVar6[8] = param_7;
    puVar6[9] = param_8;
    puVar6[10] = param_9;
    puVar6[0xb] = 0x3f800000;
    puVar6[0x1f] = (int)param_10;
    *(undefined1 *)((int)puVar6 + 0x67) = 4;
    *(undefined1 *)((int)puVar6 + 0x66) = param_12;
    if (param_13 != 0) {
      uVar1 = *(undefined4 *)(param_13 + 8);
      uVar2 = *(undefined4 *)(param_13 + 0xc);
      uVar3 = *(undefined4 *)(param_13 + 0x10);
      uVar4 = *(undefined4 *)(param_13 + 0x14);
      uVar5 = *(undefined4 *)(param_13 + 0x18);
      puVar6[0x21] = *(undefined4 *)(param_13 + 4);
      puVar6[0x22] = uVar1;
      puVar6[0x23] = uVar2;
      puVar6[0x24] = uVar3;
      puVar6[0x25] = uVar4;
      puVar6[0x26] = uVar5;
    }
    puVar6[0x18] = 1;
  }
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  return;
}

// 00A389E0  cLightApplyScale::cLightApplyScale_2  size=1967  [class]
void __fastcall cLightApplyScale::cLightApplyScale_2(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int local_74;
  int local_64;
  
  FUN_00a35200();
  iVar8 = -0x5a1a0 - param_1;
  iVar6 = -param_1;
  pfVar11 = (float *)(param_1 + 0x15c);
  pfVar12 = (float *)(param_1 + 0x5a240);
  local_74 = 8;
  do {
    *pfVar12 = (*(float *)((int)pfVar12 + *(int *)(param_1 + 0x5a19c) + iVar8) - pfVar12[-0x16864])
               / *(float *)(param_1 + 0x5bfa0);
    pfVar12[1] = (*(float *)((int)pfVar12 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a19c) -
                 pfVar12[-0x16863]) / *(float *)(param_1 + 0x5bfa0);
    pfVar12[2] = (*(float *)((int)pfVar12 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a198) -
                 pfVar12[-0x16862]) / *(float *)(param_1 + 0x5bfa0);
    pfVar12[3] = (*(float *)((int)pfVar12 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a194) -
                 pfVar12[-0x16861]) / *(float *)(param_1 + 0x5bfa0);
    iVar9 = FUN_00fdbc60();
    iVar14 = *(int *)(param_1 + 0x5a19c) + -param_1 + -0x14;
    fVar1 = *(float *)((int)pfVar11 + iVar14 + 8);
    fVar2 = *(float *)((int)pfVar11 + iVar14 + 0xc);
    fVar3 = *(float *)((int)pfVar11 + iVar14 + 0x10);
    fVar4 = *(float *)((int)pfVar11 + iVar14 + 0x14);
    fVar5 = *(float *)((int)pfVar11 + iVar14 + 0x18);
    fVar7 = (float)iVar9;
    pfVar11[0x16864] =
         (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + -param_1 + -0x10) - *pfVar11) /
         fVar7;
    pfVar11[0x16865] = (fVar1 - pfVar11[1]) / fVar7;
    pfVar11[0x16866] = (fVar2 - pfVar11[2]) / fVar7;
    pfVar11[0x16867] = (fVar3 - pfVar11[3]) / fVar7;
    pfVar11[0x16868] = (fVar4 - pfVar11[4]) / fVar7;
    pfVar11[0x16869] = (fVar5 - pfVar11[5]) / fVar7;
    pfVar12 = pfVar12 + 4;
    pfVar11 = pfVar11 + 7;
    local_74 = local_74 + -1;
  } while (local_74 != 0);
  iVar6 = -param_1;
  iVar14 = -param_1;
  pfVar11 = (float *)(param_1 + 0x5a3c8);
  pfVar12 = (float *)(param_1 + 0x5a5d8);
  pfVar13 = (float *)(param_1 + 0x5a410);
  local_64 = 8;
  pfVar15 = (float *)(param_1 + 0x5a61c);
  do {
    *pfVar11 = (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + iVar8) - pfVar11[-0x16864])
               / *(float *)(param_1 + 0x5bfa0);
    pfVar11[1] = (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + (-0x5a19c - param_1)) -
                 pfVar11[-0x16863]) / *(float *)(param_1 + 0x5bfa0);
    *pfVar13 = (*(float *)((int)pfVar13 + *(int *)(param_1 + 0x5a19c) + iVar8) - pfVar13[-0x16864])
               / *(float *)(param_1 + 0x5bfa0);
    pfVar13[1] = (*(float *)((int)pfVar13 + *(int *)(param_1 + 0x5a19c) + iVar14 + -0x5a19c) -
                 pfVar13[-0x16863]) / *(float *)(param_1 + 0x5bfa0);
    pfVar13[2] = (*(float *)((int)pfVar13 + *(int *)(param_1 + 0x5a19c) + iVar14 + -0x5a198) -
                 pfVar13[-0x16862]) / *(float *)(param_1 + 0x5bfa0);
    pfVar13[3] = (*(float *)((int)pfVar13 + *(int *)(param_1 + 0x5a19c) + iVar14 + -0x5a194) -
                 pfVar13[-0x16861]) / *(float *)(param_1 + 0x5bfa0);
    iVar10 = FUN_00fdbc60();
    iVar9 = *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a2c4;
    fVar1 = *(float *)((int)pfVar15 + iVar9 + 8);
    fVar2 = *(float *)((int)pfVar15 + iVar9 + 0xc);
    fVar3 = *(float *)((int)pfVar15 + iVar9 + 0x10);
    fVar4 = *(float *)((int)pfVar15 + iVar9 + 0x14);
    fVar5 = *(float *)((int)pfVar15 + iVar9 + 0x18);
    fVar7 = (float)iVar10;
    pfVar15[-0x48] =
         (*(float *)((int)pfVar15 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a2c0) -
         pfVar15[-0x168ac]) / fVar7;
    pfVar15[-0x47] = (fVar1 - pfVar15[-0x168ab]) / fVar7;
    pfVar15[-0x46] = (fVar2 - pfVar15[-0x168aa]) / fVar7;
    pfVar15[-0x45] = (fVar3 - pfVar15[-0x168a9]) / fVar7;
    pfVar15[-0x44] = (fVar4 - pfVar15[-0x168a8]) / fVar7;
    pfVar15[-0x43] = (fVar5 - pfVar15[-0x168a7]) / fVar7;
    *pfVar12 = (*(float *)((int)pfVar12 + *(int *)(param_1 + 0x5a19c) + iVar8) - pfVar12[-0x16864])
               / *(float *)(param_1 + 0x5bfa0);
    pfVar12[8] = (*(float *)((int)pfVar12 + *(int *)(param_1 + 0x5a19c) + (-0x5a180 - param_1)) -
                 pfVar12[-0x1685c]) / *(float *)(param_1 + 0x5bfa0);
    iVar10 = FUN_00fdbc60();
    iVar9 = *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a1a4;
    fVar1 = *(float *)((int)pfVar15 + iVar9 + 8);
    fVar2 = *(float *)((int)pfVar15 + iVar9 + 0xc);
    fVar3 = *(float *)((int)pfVar15 + iVar9 + 0x10);
    fVar4 = *(float *)((int)pfVar15 + iVar9 + 0x14);
    fVar5 = *(float *)((int)pfVar15 + iVar9 + 0x18);
    fVar7 = (float)iVar10;
    *pfVar15 = (*(float *)((int)pfVar15 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a1a0) -
               pfVar15[-0x16864]) / fVar7;
    pfVar15[1] = (fVar1 - pfVar15[-0x16863]) / fVar7;
    pfVar15[2] = (fVar2 - pfVar15[-0x16862]) / fVar7;
    pfVar15[3] = (fVar3 - pfVar15[-0x16861]) / fVar7;
    pfVar15[4] = (fVar4 - pfVar15[-0x16860]) / fVar7;
    pfVar15[5] = (fVar5 - pfVar15[-0x1685f]) / fVar7;
    iVar10 = FUN_00fdbc60();
    iVar9 = *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a0c4;
    fVar1 = *(float *)((int)pfVar15 + iVar9 + 8);
    fVar2 = *(float *)((int)pfVar15 + iVar9 + 0xc);
    pfVar11 = pfVar11 + 2;
    pfVar12 = pfVar12 + 1;
    fVar3 = *(float *)((int)pfVar15 + iVar9 + 0x10);
    pfVar13 = pfVar13 + 4;
    local_64 = local_64 + -1;
    fVar4 = *(float *)((int)pfVar15 + iVar9 + 0x14);
    fVar5 = *(float *)((int)pfVar15 + iVar9 + 0x18);
    fVar7 = (float)iVar10;
    pfVar15[0x38] =
         (*(float *)((int)pfVar15 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a0c0) -
         pfVar15[-0x1682c]) / fVar7;
    pfVar15[0x39] = (fVar1 - pfVar15[-0x1682b]) / fVar7;
    pfVar15[0x3a] = (fVar2 - pfVar15[-0x1682a]) / fVar7;
    pfVar15[0x3b] = (fVar3 - pfVar15[-0x16829]) / fVar7;
    pfVar15[0x3c] = (fVar4 - pfVar15[-0x16828]) / fVar7;
    pfVar15[0x3d] = (fVar5 - pfVar15[-0x16827]) / fVar7;
    pfVar15 = pfVar15 + 7;
  } while (local_64 != 0);
  iVar6 = -param_1;
  iVar14 = 8;
  pfVar11 = (float *)(param_1 + 0x5ac80);
  do {
    *pfVar11 = (*(float *)(*(int *)(param_1 + 0x5a19c) + iVar8 + (int)pfVar11) - pfVar11[-0x16864])
               / *(float *)(param_1 + 0x5bfa0);
    pfVar11[1] = (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a19c) -
                 pfVar11[-0x16863]) / *(float *)(param_1 + 0x5bfa0);
    pfVar11[2] = (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a198) -
                 pfVar11[-0x16862]) / *(float *)(param_1 + 0x5bfa0);
    pfVar11[3] = (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a194) -
                 pfVar11[-0x16861]) / *(float *)(param_1 + 0x5bfa0);
    iVar14 = iVar14 + -1;
    pfVar11[0x20] =
         (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + (-0x5a120 - param_1)) -
         pfVar11[-0x16844]) / *(float *)(param_1 + 0x5bfa0);
    pfVar11[0x21] =
         (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a11c) -
         pfVar11[-0x16843]) / *(float *)(param_1 + 0x5bfa0);
    pfVar11[0x22] =
         (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a118) -
         pfVar11[-0x16842]) / *(float *)(param_1 + 0x5bfa0);
    pfVar11[0x23] =
         (*(float *)((int)pfVar11 + *(int *)(param_1 + 0x5a19c) + iVar6 + -0x5a114) -
         pfVar11[-0x16841]) / *(float *)(param_1 + 0x5bfa0);
    pfVar11 = pfVar11 + 4;
  } while (iVar14 != 0);
  iVar6 = *(int *)(param_1 + 0x5a19c);
  fVar1 = *(float *)(iVar6 + 0xbf0);
  fVar2 = *(float *)(iVar6 + 0xbf4);
  fVar3 = 1.0 / *(float *)(param_1 + 0x5bfa0);
  *(float *)(param_1 + 0x5ad8c) = fVar3 * (*(float *)(iVar6 + 0xbec) - *(float *)(param_1 + 0xbfc));
  *(float *)(param_1 + 0x5ad90) = fVar3 * (fVar1 - *(float *)(param_1 + 0xc00));
  *(float *)(param_1 + 0x5ad94) = fVar3 * (fVar2 - *(float *)(param_1 + 0xc04));
  *(float *)(param_1 + 0x5ad88) =
       (*(float *)(*(int *)(param_1 + 0x5a19c) + 0xbe8) - *(float *)(param_1 + 0xbf8)) /
       *(float *)(param_1 + 0x5bfa0);
  return;
}

// 00A391A0  cLightApplyScale::cLightApplyScale  size=4274  [class]
void __fastcall cLightApplyScale::cLightApplyScale(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_cc;
  float *local_c8;
  float *local_74;
  
  if ((0.0 < *(float *)(param_1 + 0x5bfa4)) && (*(int *)(param_1 + 0x5a19c) != 0)) {
    fVar4 = 1.0 - *(float *)(param_1 + 0x5bfa4);
    iVar9 = -0x10 - param_1;
    iVar13 = -param_1;
    pfVar7 = (float *)(param_1 + 0x15c);
    pfVar6 = (float *)(param_1 + 0xb0);
    iVar11 = 0x15c;
    do {
      iVar12 = iVar11 + 0x1c;
      *pfVar6 = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + iVar9) -
                pfVar6[0x16864] * fVar4;
      pfVar6[1] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + iVar13 + -0xc) -
                  pfVar6[0x16865] * fVar4;
      pfVar6[2] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + iVar13 + -8) -
                  pfVar6[0x16866] * fVar4;
      pfVar6[3] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + iVar13 + -4) -
                  pfVar6[0x16867] * fVar4;
      *pfVar7 = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar9) -
                pfVar7[0x16864] * fVar4;
      pfVar7[1] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + (-0xc - param_1)) -
                  pfVar7[0x16865] * fVar4;
      pfVar7[2] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + (-8 - param_1)) -
                  pfVar7[0x16866] * fVar4;
      pfVar7[3] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + (-4 - param_1)) -
                  pfVar7[0x16867] * fVar4;
      pfVar7[4] = *(float *)(iVar11 + *(int *)(param_1 + 0x5a19c)) - pfVar7[0x16868] * fVar4;
      pfVar7[5] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + (4 - param_1)) -
                  pfVar7[0x16869] * fVar4;
      pfVar7 = pfVar7 + 7;
      pfVar6 = pfVar6 + 4;
      iVar11 = iVar12;
    } while (iVar12 < 0x23c);
    pfVar7 = (float *)(param_1 + 0x238);
    local_c8 = (float *)0x36c;
    pfVar6 = (float *)(param_1 + 0x36c);
    pfVar8 = (float *)(param_1 + 0x5a418);
    local_74 = (float *)(param_1 + 0x448);
    do {
      *pfVar7 = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar9) -
                pfVar7[0x16864] * fVar4;
      pfVar7[1] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + (-0xc - param_1)) -
                  pfVar7[0x16865] * fVar4;
      pfVar10 = (float *)((int)pfVar8 + *(int *)(param_1 + 0x5a19c) + (-0x5a1a8 - param_1));
      fVar1 = pfVar10[1];
      fVar2 = pfVar10[2];
      fVar3 = pfVar10[3];
      pfVar8[-0x16866] = *pfVar10 - pfVar8[-2] * fVar4;
      pfVar8[-0x16865] = fVar1 - pfVar8[-1] * fVar4;
      pfVar8[-0x16864] = fVar2 - *pfVar8 * fVar4;
      pfVar8[-0x16863] = fVar3 - pfVar8[1] * fVar4;
      *pfVar6 = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + iVar9) -
                pfVar6[0x16864] * fVar4;
      pfVar6[0x48] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x110 - param_1)) -
                     pfVar6[0x168ac] * fVar4;
      pfVar6[0x80] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x1f0 - param_1)) -
                     pfVar6[0x168e4] * fVar4;
      pfVar6[1] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (-0xc - param_1)) -
                  pfVar6[0x16865] * fVar4;
      pfVar6[0x49] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x114 - param_1)) -
                     pfVar6[0x168ad] * fVar4;
      pfVar6[0x81] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (500 - param_1)) -
                     pfVar6[0x168e5] * fVar4;
      pfVar6[2] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (-8 - param_1)) -
                  pfVar6[0x16866] * fVar4;
      pfVar6[0x4a] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x118 - param_1)) -
                     pfVar6[0x168ae] * fVar4;
      pfVar6[0x82] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x1f8 - param_1)) -
                     pfVar6[0x168e6] * fVar4;
      pfVar6[3] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (-4 - param_1)) -
                  pfVar6[0x16867] * fVar4;
      pfVar6[0x4b] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x11c - param_1)) -
                     pfVar6[0x168af] * fVar4;
      pfVar6[0x83] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x1fc - param_1)) -
                     pfVar6[0x168e7] * fVar4;
      pfVar6[4] = *(float *)((int)local_c8 + *(int *)(param_1 + 0x5a19c)) - pfVar6[0x16868] * fVar4;
      pfVar6[0x4c] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x120 - param_1)) -
                     pfVar6[0x168b0] * fVar4;
      pfVar6[0x84] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x200 - param_1)) -
                     pfVar6[0x168e8] * fVar4;
      pfVar6[5] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (4 - param_1)) -
                  pfVar6[0x16869] * fVar4;
      pfVar6[0x4d] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x124 - param_1)) -
                     pfVar6[0x168b1] * fVar4;
      pfVar6[0x85] = *(float *)((int)pfVar6 + *(int *)(param_1 + 0x5a19c) + (0x204 - param_1)) -
                     pfVar6[0x168e9] * fVar4;
      pfVar8 = pfVar8 + 4;
      pfVar6 = pfVar6 + 7;
      *local_74 = *(float *)((int)local_74 + *(int *)(param_1 + 0x5a19c) + iVar9) -
                  local_74[0x16864] * fVar4;
      local_c8 = (float *)((int)local_c8 + 0x1c);
      local_74[8] = *(float *)((int)local_74 + *(int *)(param_1 + 0x5a19c) + (0x10 - param_1)) -
                    local_74[0x1686c] * fVar4;
      pfVar7 = pfVar7 + 2;
      local_74 = local_74 + 1;
    } while ((int)local_c8 < 0x44c);
    iVar13 = -param_1;
    local_cc = 8;
    pfVar7 = (float *)(param_1 + 0xaf0);
    do {
      *pfVar7 = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar9) -
                pfVar7[0x16864] * fVar4;
      pfVar7[1] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar13 + -0xc) -
                  pfVar7[0x16865] * fVar4;
      pfVar7[2] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar13 + -8) -
                  pfVar7[0x16866] * fVar4;
      local_cc = local_cc + -1;
      pfVar7[3] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar13 + -4) -
                  pfVar7[0x16867] * fVar4;
      pfVar7[0x20] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + (0x70 - param_1)) -
                     pfVar7[0x16884] * fVar4;
      pfVar7[0x21] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar13 + 0x74) -
                     pfVar7[0x16885] * fVar4;
      pfVar7[0x22] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar13 + 0x78) -
                     pfVar7[0x16886] * fVar4;
      pfVar7[0x23] = *(float *)((int)pfVar7 + *(int *)(param_1 + 0x5a19c) + iVar13 + 0x7c) -
                     pfVar7[0x16887] * fVar4;
      pfVar7 = pfVar7 + 4;
    } while (local_cc != 0);
    iVar13 = *(int *)(param_1 + 0x5a19c);
    fVar1 = *(float *)(iVar13 + 0xbf0);
    fVar2 = *(float *)(iVar13 + 0xbf4);
    *(float *)(param_1 + 0xbfc) = *(float *)(iVar13 + 0xbec) - fVar4 * *(float *)(param_1 + 0x5ad8c)
    ;
    *(float *)(param_1 + 0xc00) = fVar1 - *(float *)(param_1 + 0x5ad90) * fVar4;
    *(float *)(param_1 + 0xc04) = fVar2 - *(float *)(param_1 + 0x5ad94) * fVar4;
    *(float *)(param_1 + 0xbf8) =
         *(float *)(*(int *)(param_1 + 0x5a19c) + 0xbe8) - fVar4 * *(float *)(param_1 + 0x5ad88);
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x5bfa0)) {
    iVar13 = 8;
    pfVar7 = (float *)(param_1 + 0x5a248);
    pfVar6 = (float *)(param_1 + 0x5a2ec);
    pfVar8 = (float *)(param_1 + 0x160);
    do {
      iVar13 = iVar13 + -1;
      pfVar7[-0x16866] = pfVar7[-2] + pfVar7[-0x16866];
      pfVar7[-0x16865] = pfVar7[-1] + pfVar7[-0x16865];
      pfVar7[-0x16864] = *pfVar7 + pfVar7[-0x16864];
      pfVar7[-0x16863] = pfVar7[1] + pfVar7[-0x16863];
      fVar4 = *pfVar8;
      fVar1 = pfVar8[1];
      fVar2 = pfVar8[2];
      fVar3 = pfVar8[3];
      fVar5 = pfVar8[4];
      pfVar6[-0x16864] = pfVar8[-1] + *pfVar6;
      pfVar6[-0x16863] = pfVar6[1] + fVar4;
      pfVar6[-0x16862] = fVar1 + pfVar6[2];
      pfVar6[-0x16861] = fVar2 + pfVar6[3];
      pfVar6[-0x16860] = fVar3 + pfVar6[4];
      pfVar6[-0x1685f] = fVar5 + pfVar6[5];
      pfVar7 = pfVar7 + 4;
      pfVar6 = pfVar6 + 7;
      pfVar8 = pfVar8 + 7;
    } while (iVar13 != 0);
    local_c8 = (float *)(param_1 + 0x238);
    pfVar7 = (float *)(param_1 + 0x448);
    pfVar6 = (float *)(param_1 + 0x5a418);
    local_cc = 8;
    pfVar8 = (float *)(param_1 + 0x48c);
    pfVar10 = (float *)(param_1 + 0x370);
    do {
      *local_c8 = local_c8[0x16864] + *local_c8;
      local_c8[1] = local_c8[0x16865] + local_c8[1];
      pfVar6[-0x16866] = pfVar6[-2] + pfVar6[-0x16866];
      pfVar6[-0x16865] = pfVar6[-1] + pfVar6[-0x16865];
      pfVar6[-0x16864] = pfVar6[-0x16864] + *pfVar6;
      pfVar6[-0x16863] = pfVar6[1] + pfVar6[-0x16863];
      fVar4 = *pfVar10;
      fVar1 = pfVar10[1];
      fVar2 = pfVar10[2];
      fVar3 = pfVar10[3];
      fVar5 = pfVar10[4];
      pfVar8[-0x48] = pfVar10[-1] + pfVar8[0x1681c];
      pfVar8[-0x47] = pfVar8[0x1681d] + fVar4;
      pfVar8[-0x46] = fVar1 + pfVar8[0x1681e];
      pfVar8[-0x45] = fVar2 + pfVar8[0x1681f];
      pfVar8[-0x44] = fVar3 + pfVar8[0x16820];
      pfVar8[-0x43] = fVar5 + pfVar8[0x16821];
      *pfVar7 = pfVar7[0x16864] + *pfVar7;
      pfVar7[8] = pfVar7[0x1686c] + pfVar7[8];
      local_c8 = local_c8 + 2;
      pfVar6 = pfVar6 + 4;
      fVar4 = pfVar10[0x48];
      pfVar7 = pfVar7 + 1;
      local_cc = local_cc + -1;
      fVar1 = pfVar10[0x49];
      fVar2 = pfVar10[0x4a];
      fVar3 = pfVar10[0x4b];
      fVar5 = pfVar10[0x4c];
      *pfVar8 = pfVar10[0x47] + pfVar8[0x16864];
      pfVar8[1] = fVar4 + pfVar8[0x16865];
      pfVar8[2] = fVar1 + pfVar8[0x16866];
      pfVar8[3] = fVar2 + pfVar8[0x16867];
      pfVar8[4] = fVar3 + pfVar8[0x16868];
      pfVar8[5] = fVar5 + pfVar8[0x16869];
      fVar4 = pfVar10[0x80];
      fVar1 = pfVar10[0x81];
      fVar2 = pfVar10[0x82];
      fVar3 = pfVar10[0x83];
      fVar5 = pfVar10[0x84];
      pfVar8[0x38] = pfVar10[0x7f] + pfVar8[0x1689c];
      pfVar8[0x39] = fVar4 + pfVar8[0x1689d];
      pfVar8[0x3a] = fVar1 + pfVar8[0x1689e];
      pfVar8[0x3b] = fVar2 + pfVar8[0x1689f];
      pfVar8[0x3c] = fVar3 + pfVar8[0x168a0];
      pfVar8[0x3d] = fVar5 + pfVar8[0x168a1];
      pfVar8 = pfVar8 + 7;
      pfVar10 = pfVar10 + 7;
    } while (local_cc != 0);
    *(float *)(param_1 + 0xaf0) = *(float *)(param_1 + 0x5ac80) + *(float *)(param_1 + 0xaf0);
    *(float *)(param_1 + 0xaf4) = *(float *)(param_1 + 0xaf4) + *(float *)(param_1 + 0x5ac84);
    *(float *)(param_1 + 0xaf8) = *(float *)(param_1 + 0xaf8) + *(float *)(param_1 + 0x5ac88);
    *(float *)(param_1 + 0xafc) = *(float *)(param_1 + 0xafc) + *(float *)(param_1 + 0x5ac8c);
    *(float *)(param_1 + 0xb70) = *(float *)(param_1 + 0x5ad00) + *(float *)(param_1 + 0xb70);
    *(float *)(param_1 + 0xb74) = *(float *)(param_1 + 0x5ad04) + *(float *)(param_1 + 0xb74);
    *(float *)(param_1 + 0xb78) = *(float *)(param_1 + 0x5ad08) + *(float *)(param_1 + 0xb78);
    *(float *)(param_1 + 0xb7c) = *(float *)(param_1 + 0x5ad0c) + *(float *)(param_1 + 0xb7c);
    *(float *)(param_1 + 0xb00) = *(float *)(param_1 + 0x5ac90) + *(float *)(param_1 + 0xb00);
    *(float *)(param_1 + 0xb04) = *(float *)(param_1 + 0xb04) + *(float *)(param_1 + 0x5ac94);
    *(float *)(param_1 + 0xb08) = *(float *)(param_1 + 0xb08) + *(float *)(param_1 + 0x5ac98);
    *(float *)(param_1 + 0xb0c) = *(float *)(param_1 + 0xb0c) + *(float *)(param_1 + 0x5ac9c);
    *(float *)(param_1 + 0xb80) = *(float *)(param_1 + 0x5ad10) + *(float *)(param_1 + 0xb80);
    *(float *)(param_1 + 0xb84) = *(float *)(param_1 + 0x5ad14) + *(float *)(param_1 + 0xb84);
    *(float *)(param_1 + 0xb88) = *(float *)(param_1 + 0x5ad18) + *(float *)(param_1 + 0xb88);
    *(float *)(param_1 + 0xb8c) = *(float *)(param_1 + 0x5ad1c) + *(float *)(param_1 + 0xb8c);
    *(float *)(param_1 + 0xb10) = *(float *)(param_1 + 0x5aca0) + *(float *)(param_1 + 0xb10);
    *(float *)(param_1 + 0xb14) = *(float *)(param_1 + 0xb14) + *(float *)(param_1 + 0x5aca4);
    *(float *)(param_1 + 0xb18) = *(float *)(param_1 + 0xb18) + *(float *)(param_1 + 0x5aca8);
    *(float *)(param_1 + 0xb1c) = *(float *)(param_1 + 0xb1c) + *(float *)(param_1 + 0x5acac);
    *(float *)(param_1 + 0xb90) = *(float *)(param_1 + 0x5ad20) + *(float *)(param_1 + 0xb90);
    *(float *)(param_1 + 0xb94) = *(float *)(param_1 + 0x5ad24) + *(float *)(param_1 + 0xb94);
    *(float *)(param_1 + 0xb98) = *(float *)(param_1 + 0x5ad28) + *(float *)(param_1 + 0xb98);
    *(float *)(param_1 + 0xb9c) = *(float *)(param_1 + 0x5ad2c) + *(float *)(param_1 + 0xb9c);
    *(float *)(param_1 + 0xb20) = *(float *)(param_1 + 0x5acb0) + *(float *)(param_1 + 0xb20);
    *(float *)(param_1 + 0xb24) = *(float *)(param_1 + 0xb24) + *(float *)(param_1 + 0x5acb4);
    *(float *)(param_1 + 0xb28) = *(float *)(param_1 + 0xb28) + *(float *)(param_1 + 0x5acb8);
    *(float *)(param_1 + 0xb2c) = *(float *)(param_1 + 0xb2c) + *(float *)(param_1 + 0x5acbc);
    *(float *)(param_1 + 0xba0) = *(float *)(param_1 + 0x5ad30) + *(float *)(param_1 + 0xba0);
    *(float *)(param_1 + 0xba4) = *(float *)(param_1 + 0x5ad34) + *(float *)(param_1 + 0xba4);
    *(float *)(param_1 + 0xba8) = *(float *)(param_1 + 0x5ad38) + *(float *)(param_1 + 0xba8);
    *(float *)(param_1 + 0xbac) = *(float *)(param_1 + 0x5ad3c) + *(float *)(param_1 + 0xbac);
    *(float *)(param_1 + 0xb30) = *(float *)(param_1 + 0x5acc0) + *(float *)(param_1 + 0xb30);
    *(float *)(param_1 + 0xb34) = *(float *)(param_1 + 0xb34) + *(float *)(param_1 + 0x5acc4);
    *(float *)(param_1 + 0xb38) = *(float *)(param_1 + 0xb38) + *(float *)(param_1 + 0x5acc8);
    *(float *)(param_1 + 0xb3c) = *(float *)(param_1 + 0xb3c) + *(float *)(param_1 + 0x5accc);
    *(float *)(param_1 + 0xbb0) = *(float *)(param_1 + 0x5ad40) + *(float *)(param_1 + 0xbb0);
    *(float *)(param_1 + 0xbb4) = *(float *)(param_1 + 0x5ad44) + *(float *)(param_1 + 0xbb4);
    *(float *)(param_1 + 3000) = *(float *)(param_1 + 0x5ad48) + *(float *)(param_1 + 3000);
    *(float *)(param_1 + 0xbbc) = *(float *)(param_1 + 0x5ad4c) + *(float *)(param_1 + 0xbbc);
    *(float *)(param_1 + 0xb40) = *(float *)(param_1 + 0x5acd0) + *(float *)(param_1 + 0xb40);
    *(float *)(param_1 + 0xb44) = *(float *)(param_1 + 0xb44) + *(float *)(param_1 + 0x5acd4);
    *(float *)(param_1 + 0xb48) = *(float *)(param_1 + 0xb48) + *(float *)(param_1 + 0x5acd8);
    *(float *)(param_1 + 0xb4c) = *(float *)(param_1 + 0xb4c) + *(float *)(param_1 + 0x5acdc);
    *(float *)(param_1 + 0xbc0) = *(float *)(param_1 + 0x5ad50) + *(float *)(param_1 + 0xbc0);
    *(float *)(param_1 + 0xbc4) = *(float *)(param_1 + 0x5ad54) + *(float *)(param_1 + 0xbc4);
    *(float *)(param_1 + 0xbc8) = *(float *)(param_1 + 0x5ad58) + *(float *)(param_1 + 0xbc8);
    *(float *)(param_1 + 0xbcc) = *(float *)(param_1 + 0x5ad5c) + *(float *)(param_1 + 0xbcc);
    *(float *)(param_1 + 0xb50) = *(float *)(param_1 + 0x5ace0) + *(float *)(param_1 + 0xb50);
    *(float *)(param_1 + 0xb54) = *(float *)(param_1 + 0xb54) + *(float *)(param_1 + 0x5ace4);
    *(float *)(param_1 + 0xb58) = *(float *)(param_1 + 0xb58) + *(float *)(param_1 + 0x5ace8);
    *(float *)(param_1 + 0xb5c) = *(float *)(param_1 + 0xb5c) + *(float *)(param_1 + 0x5acec);
    *(float *)(param_1 + 0xbd0) = *(float *)(param_1 + 0x5ad60) + *(float *)(param_1 + 0xbd0);
    *(float *)(param_1 + 0xbd4) = *(float *)(param_1 + 0x5ad64) + *(float *)(param_1 + 0xbd4);
    *(float *)(param_1 + 0xbd8) = *(float *)(param_1 + 0x5ad68) + *(float *)(param_1 + 0xbd8);
    *(float *)(param_1 + 0xbdc) = *(float *)(param_1 + 0x5ad6c) + *(float *)(param_1 + 0xbdc);
    *(float *)(param_1 + 0xb60) = *(float *)(param_1 + 0x5acf0) + *(float *)(param_1 + 0xb60);
    *(float *)(param_1 + 0xb64) = *(float *)(param_1 + 0xb64) + *(float *)(param_1 + 0x5acf4);
    *(float *)(param_1 + 0xb68) = *(float *)(param_1 + 0xb68) + *(float *)(param_1 + 0x5acf8);
    *(float *)(param_1 + 0xb6c) = *(float *)(param_1 + 0xb6c) + *(float *)(param_1 + 0x5acfc);
    *(float *)(param_1 + 0xbe0) = *(float *)(param_1 + 0x5ad70) + *(float *)(param_1 + 0xbe0);
    *(float *)(param_1 + 0xbe4) = *(float *)(param_1 + 0x5ad74) + *(float *)(param_1 + 0xbe4);
    *(float *)(param_1 + 0xbe8) = *(float *)(param_1 + 0x5ad78) + *(float *)(param_1 + 0xbe8);
    *(float *)(param_1 + 0xbec) = *(float *)(param_1 + 0x5ad7c) + *(float *)(param_1 + 0xbec);
    *(float *)(param_1 + 0xbfc) = *(float *)(param_1 + 0x5ad8c) + *(float *)(param_1 + 0xbfc);
    *(float *)(param_1 + 0xc00) = *(float *)(param_1 + 0x5ad90) + *(float *)(param_1 + 0xc00);
    *(float *)(param_1 + 0xc04) = *(float *)(param_1 + 0x5ad94) + *(float *)(param_1 + 0xc04);
    *(float *)(param_1 + 0xbf8) = *(float *)(param_1 + 0x5ad88) + *(float *)(param_1 + 0xbf8);
    fVar4 = *(float *)(param_1 + 0x5bfa0) - 1.0;
    *(float *)(param_1 + 0x5bfa0) = fVar4;
    if ((fVar4 < 0.0 != (fVar4 == 0.0)) && (*(int *)(param_1 + 0x5a19c) != 0)) {
      FUN_00a36590(*(int *)(param_1 + 0x5a19c));
      *(undefined4 *)(param_1 + 0x5bfa0) = 0;
      *(undefined4 *)(param_1 + 0x5a198) = *(undefined4 *)(param_1 + 0x5a19c);
      return;
    }
  }
  return;
}

// 00A3E950  cLightApplyScale::cLightApplyScale_3  size=7867  [class]
undefined4 * __thiscall cLightApplyScale::cLightApplyScale_3(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = cLightDataMinimum::vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
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
  param_1[0x32] = *(undefined4 *)(param_2 + 200);
  param_1[0x33] = *(undefined4 *)(param_2 + 0xcc);
  param_1[0x34] = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x35] = *(undefined4 *)(param_2 + 0xd4);
  param_1[0x36] = *(undefined4 *)(param_2 + 0xd8);
  param_1[0x37] = *(undefined4 *)(param_2 + 0xdc);
  param_1[0x38] = *(undefined4 *)(param_2 + 0xe0);
  param_1[0x39] = *(undefined4 *)(param_2 + 0xe4);
  param_1[0x3a] = *(undefined4 *)(param_2 + 0xe8);
  param_1[0x3b] = *(undefined4 *)(param_2 + 0xec);
  param_1[0x3c] = *(undefined4 *)(param_2 + 0xf0);
  param_1[0x3d] = *(undefined4 *)(param_2 + 0xf4);
  param_1[0x3e] = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x3f] = *(undefined4 *)(param_2 + 0xfc);
  param_1[0x40] = *(undefined4 *)(param_2 + 0x100);
  param_1[0x41] = *(undefined4 *)(param_2 + 0x104);
  param_1[0x42] = *(undefined4 *)(param_2 + 0x108);
  param_1[0x43] = *(undefined4 *)(param_2 + 0x10c);
  param_1[0x44] = *(undefined4 *)(param_2 + 0x110);
  param_1[0x45] = *(undefined4 *)(param_2 + 0x114);
  param_1[0x46] = *(undefined4 *)(param_2 + 0x118);
  param_1[0x47] = *(undefined4 *)(param_2 + 0x11c);
  puVar3 = (undefined4 *)(param_2 + 0x120);
  puVar4 = param_1 + 0x48;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x50] = *(undefined4 *)(param_2 + 0x140);
  param_1[0x51] = *(undefined4 *)(param_2 + 0x144);
  param_1[0x52] = vftable;
  param_1[0x53] = *(undefined4 *)(param_2 + 0x14c);
  param_1[0x54] = *(undefined4 *)(param_2 + 0x150);
  param_1[0x55] = *(undefined4 *)(param_2 + 0x154);
  param_1[0x56] = *(undefined4 *)(param_2 + 0x158);
  param_1[0x57] = *(undefined4 *)(param_2 + 0x15c);
  param_1[0x58] = *(undefined4 *)(param_2 + 0x160);
  param_1[0x59] = vftable;
  param_1[0x5a] = *(undefined4 *)(param_2 + 0x168);
  param_1[0x5b] = *(undefined4 *)(param_2 + 0x16c);
  param_1[0x5c] = *(undefined4 *)(param_2 + 0x170);
  param_1[0x5d] = *(undefined4 *)(param_2 + 0x174);
  param_1[0x5e] = *(undefined4 *)(param_2 + 0x178);
  param_1[0x5f] = *(undefined4 *)(param_2 + 0x17c);
  param_1[0x60] = vftable;
  param_1[0x61] = *(undefined4 *)(param_2 + 0x184);
  param_1[0x62] = *(undefined4 *)(param_2 + 0x188);
  param_1[99] = *(undefined4 *)(param_2 + 0x18c);
  param_1[100] = *(undefined4 *)(param_2 + 400);
  param_1[0x65] = *(undefined4 *)(param_2 + 0x194);
  param_1[0x66] = *(undefined4 *)(param_2 + 0x198);
  param_1[0x67] = vftable;
  param_1[0x68] = *(undefined4 *)(param_2 + 0x1a0);
  param_1[0x69] = *(undefined4 *)(param_2 + 0x1a4);
  param_1[0x6a] = *(undefined4 *)(param_2 + 0x1a8);
  param_1[0x6b] = *(undefined4 *)(param_2 + 0x1ac);
  param_1[0x6c] = *(undefined4 *)(param_2 + 0x1b0);
  param_1[0x6d] = *(undefined4 *)(param_2 + 0x1b4);
  param_1[0x6e] = vftable;
  param_1[0x6f] = *(undefined4 *)(param_2 + 0x1bc);
  param_1[0x70] = *(undefined4 *)(param_2 + 0x1c0);
  param_1[0x71] = *(undefined4 *)(param_2 + 0x1c4);
  param_1[0x72] = *(undefined4 *)(param_2 + 0x1c8);
  param_1[0x73] = *(undefined4 *)(param_2 + 0x1cc);
  param_1[0x74] = *(undefined4 *)(param_2 + 0x1d0);
  param_1[0x75] = vftable;
  param_1[0x76] = *(undefined4 *)(param_2 + 0x1d8);
  param_1[0x77] = *(undefined4 *)(param_2 + 0x1dc);
  param_1[0x78] = *(undefined4 *)(param_2 + 0x1e0);
  param_1[0x79] = *(undefined4 *)(param_2 + 0x1e4);
  param_1[0x7a] = *(undefined4 *)(param_2 + 0x1e8);
  param_1[0x7b] = *(undefined4 *)(param_2 + 0x1ec);
  param_1[0x7c] = vftable;
  param_1[0x7d] = *(undefined4 *)(param_2 + 500);
  param_1[0x7e] = *(undefined4 *)(param_2 + 0x1f8);
  param_1[0x7f] = *(undefined4 *)(param_2 + 0x1fc);
  param_1[0x80] = *(undefined4 *)(param_2 + 0x200);
  param_1[0x81] = *(undefined4 *)(param_2 + 0x204);
  param_1[0x82] = *(undefined4 *)(param_2 + 0x208);
  param_1[0x83] = vftable;
  param_1[0x84] = *(undefined4 *)(param_2 + 0x210);
  param_1[0x85] = *(undefined4 *)(param_2 + 0x214);
  param_1[0x86] = *(undefined4 *)(param_2 + 0x218);
  param_1[0x87] = *(undefined4 *)(param_2 + 0x21c);
  param_1[0x88] = *(undefined4 *)(param_2 + 0x220);
  param_1[0x89] = *(undefined4 *)(param_2 + 0x224);
  puVar3 = (undefined4 *)(param_2 + 0x228);
  puVar4 = param_1 + 0x8a;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x9c] = *(undefined4 *)(param_2 + 0x270);
  param_1[0x9d] = *(undefined4 *)(param_2 + 0x274);
  param_1[0x9e] = *(undefined4 *)(param_2 + 0x278);
  param_1[0x9f] = *(undefined4 *)(param_2 + 0x27c);
  param_1[0xa0] = *(undefined4 *)(param_2 + 0x280);
  param_1[0xa1] = *(undefined4 *)(param_2 + 0x284);
  param_1[0xa2] = *(undefined4 *)(param_2 + 0x288);
  param_1[0xa3] = *(undefined4 *)(param_2 + 0x28c);
  param_1[0xa4] = *(undefined4 *)(param_2 + 0x290);
  param_1[0xa5] = *(undefined4 *)(param_2 + 0x294);
  param_1[0xa6] = *(undefined4 *)(param_2 + 0x298);
  param_1[0xa7] = *(undefined4 *)(param_2 + 0x29c);
  param_1[0xa8] = *(undefined4 *)(param_2 + 0x2a0);
  param_1[0xa9] = *(undefined4 *)(param_2 + 0x2a4);
  param_1[0xaa] = *(undefined4 *)(param_2 + 0x2a8);
  param_1[0xab] = *(undefined4 *)(param_2 + 0x2ac);
  param_1[0xac] = *(undefined4 *)(param_2 + 0x2b0);
  param_1[0xad] = *(undefined4 *)(param_2 + 0x2b4);
  param_1[0xae] = *(undefined4 *)(param_2 + 0x2b8);
  param_1[0xaf] = *(undefined4 *)(param_2 + 700);
  param_1[0xb0] = *(undefined4 *)(param_2 + 0x2c0);
  param_1[0xb1] = *(undefined4 *)(param_2 + 0x2c4);
  param_1[0xb2] = *(undefined4 *)(param_2 + 0x2c8);
  param_1[0xb3] = *(undefined4 *)(param_2 + 0x2cc);
  param_1[0xb4] = *(undefined4 *)(param_2 + 0x2d0);
  param_1[0xb5] = *(undefined4 *)(param_2 + 0x2d4);
  param_1[0xb6] = *(undefined4 *)(param_2 + 0x2d8);
  param_1[0xb7] = *(undefined4 *)(param_2 + 0x2dc);
  param_1[0xb8] = *(undefined4 *)(param_2 + 0x2e0);
  param_1[0xb9] = *(undefined4 *)(param_2 + 0x2e4);
  param_1[0xba] = *(undefined4 *)(param_2 + 0x2e8);
  param_1[0xbb] = *(undefined4 *)(param_2 + 0x2ec);
  puVar3 = (undefined4 *)(param_2 + 0x2f0);
  puVar4 = param_1 + 0xbc;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0x310);
  puVar4 = param_1 + 0xc4;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0x330);
  puVar4 = param_1 + 0xcc;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0xd4] = *(undefined4 *)(param_2 + 0x350);
  param_1[0xd5] = *(undefined4 *)(param_2 + 0x354);
  param_1[0xd6] = vftable;
  param_1[0xd7] = *(undefined4 *)(param_2 + 0x35c);
  param_1[0xd8] = *(undefined4 *)(param_2 + 0x360);
  param_1[0xd9] = *(undefined4 *)(param_2 + 0x364);
  param_1[0xda] = *(undefined4 *)(param_2 + 0x368);
  param_1[0xdb] = *(undefined4 *)(param_2 + 0x36c);
  param_1[0xdc] = *(undefined4 *)(param_2 + 0x370);
  param_1[0xdd] = vftable;
  param_1[0xde] = *(undefined4 *)(param_2 + 0x378);
  param_1[0xdf] = *(undefined4 *)(param_2 + 0x37c);
  param_1[0xe0] = *(undefined4 *)(param_2 + 0x380);
  param_1[0xe1] = *(undefined4 *)(param_2 + 900);
  param_1[0xe2] = *(undefined4 *)(param_2 + 0x388);
  param_1[0xe3] = *(undefined4 *)(param_2 + 0x38c);
  param_1[0xe4] = vftable;
  param_1[0xe5] = *(undefined4 *)(param_2 + 0x394);
  param_1[0xe6] = *(undefined4 *)(param_2 + 0x398);
  param_1[0xe7] = *(undefined4 *)(param_2 + 0x39c);
  param_1[0xe8] = *(undefined4 *)(param_2 + 0x3a0);
  param_1[0xe9] = *(undefined4 *)(param_2 + 0x3a4);
  param_1[0xea] = *(undefined4 *)(param_2 + 0x3a8);
  param_1[0xeb] = vftable;
  param_1[0xec] = *(undefined4 *)(param_2 + 0x3b0);
  param_1[0xed] = *(undefined4 *)(param_2 + 0x3b4);
  param_1[0xee] = *(undefined4 *)(param_2 + 0x3b8);
  param_1[0xef] = *(undefined4 *)(param_2 + 0x3bc);
  param_1[0xf0] = *(undefined4 *)(param_2 + 0x3c0);
  param_1[0xf1] = *(undefined4 *)(param_2 + 0x3c4);
  param_1[0xf2] = vftable;
  param_1[0xf3] = *(undefined4 *)(param_2 + 0x3cc);
  param_1[0xf4] = *(undefined4 *)(param_2 + 0x3d0);
  param_1[0xf5] = *(undefined4 *)(param_2 + 0x3d4);
  param_1[0xf6] = *(undefined4 *)(param_2 + 0x3d8);
  param_1[0xf7] = *(undefined4 *)(param_2 + 0x3dc);
  param_1[0xf8] = *(undefined4 *)(param_2 + 0x3e0);
  param_1[0xf9] = vftable;
  param_1[0xfa] = *(undefined4 *)(param_2 + 1000);
  param_1[0xfb] = *(undefined4 *)(param_2 + 0x3ec);
  param_1[0xfc] = *(undefined4 *)(param_2 + 0x3f0);
  param_1[0xfd] = *(undefined4 *)(param_2 + 0x3f4);
  param_1[0xfe] = *(undefined4 *)(param_2 + 0x3f8);
  param_1[0xff] = *(undefined4 *)(param_2 + 0x3fc);
  param_1[0x100] = vftable;
  param_1[0x101] = *(undefined4 *)(param_2 + 0x404);
  param_1[0x102] = *(undefined4 *)(param_2 + 0x408);
  param_1[0x103] = *(undefined4 *)(param_2 + 0x40c);
  param_1[0x104] = *(undefined4 *)(param_2 + 0x410);
  param_1[0x105] = *(undefined4 *)(param_2 + 0x414);
  param_1[0x106] = *(undefined4 *)(param_2 + 0x418);
  param_1[0x107] = vftable;
  param_1[0x108] = *(undefined4 *)(param_2 + 0x420);
  param_1[0x109] = *(undefined4 *)(param_2 + 0x424);
  param_1[0x10a] = *(undefined4 *)(param_2 + 0x428);
  param_1[0x10b] = *(undefined4 *)(param_2 + 0x42c);
  param_1[0x10c] = *(undefined4 *)(param_2 + 0x430);
  param_1[0x10d] = *(undefined4 *)(param_2 + 0x434);
  puVar3 = (undefined4 *)(param_2 + 0x438);
  puVar4 = param_1 + 0x10e;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0x458);
  puVar4 = param_1 + 0x116;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x11e] = vftable;
  param_1[0x11f] = *(undefined4 *)(param_2 + 0x47c);
  param_1[0x120] = *(undefined4 *)(param_2 + 0x480);
  param_1[0x121] = *(undefined4 *)(param_2 + 0x484);
  param_1[0x122] = *(undefined4 *)(param_2 + 0x488);
  param_1[0x123] = *(undefined4 *)(param_2 + 0x48c);
  param_1[0x124] = *(undefined4 *)(param_2 + 0x490);
  param_1[0x125] = vftable;
  param_1[0x126] = *(undefined4 *)(param_2 + 0x498);
  param_1[0x127] = *(undefined4 *)(param_2 + 0x49c);
  param_1[0x128] = *(undefined4 *)(param_2 + 0x4a0);
  param_1[0x129] = *(undefined4 *)(param_2 + 0x4a4);
  param_1[0x12a] = *(undefined4 *)(param_2 + 0x4a8);
  param_1[299] = *(undefined4 *)(param_2 + 0x4ac);
  param_1[300] = vftable;
  param_1[0x12d] = *(undefined4 *)(param_2 + 0x4b4);
  param_1[0x12e] = *(undefined4 *)(param_2 + 0x4b8);
  param_1[0x12f] = *(undefined4 *)(param_2 + 0x4bc);
  param_1[0x130] = *(undefined4 *)(param_2 + 0x4c0);
  param_1[0x131] = *(undefined4 *)(param_2 + 0x4c4);
  param_1[0x132] = *(undefined4 *)(param_2 + 0x4c8);
  param_1[0x133] = vftable;
  param_1[0x134] = *(undefined4 *)(param_2 + 0x4d0);
  param_1[0x135] = *(undefined4 *)(param_2 + 0x4d4);
  param_1[0x136] = *(undefined4 *)(param_2 + 0x4d8);
  param_1[0x137] = *(undefined4 *)(param_2 + 0x4dc);
  param_1[0x138] = *(undefined4 *)(param_2 + 0x4e0);
  param_1[0x139] = *(undefined4 *)(param_2 + 0x4e4);
  param_1[0x13a] = vftable;
  param_1[0x13b] = *(undefined4 *)(param_2 + 0x4ec);
  param_1[0x13c] = *(undefined4 *)(param_2 + 0x4f0);
  param_1[0x13d] = *(undefined4 *)(param_2 + 0x4f4);
  param_1[0x13e] = *(undefined4 *)(param_2 + 0x4f8);
  param_1[0x13f] = *(undefined4 *)(param_2 + 0x4fc);
  param_1[0x140] = *(undefined4 *)(param_2 + 0x500);
  param_1[0x141] = vftable;
  param_1[0x142] = *(undefined4 *)(param_2 + 0x508);
  param_1[0x143] = *(undefined4 *)(param_2 + 0x50c);
  param_1[0x144] = *(undefined4 *)(param_2 + 0x510);
  param_1[0x145] = *(undefined4 *)(param_2 + 0x514);
  param_1[0x146] = *(undefined4 *)(param_2 + 0x518);
  param_1[0x147] = *(undefined4 *)(param_2 + 0x51c);
  param_1[0x148] = vftable;
  param_1[0x149] = *(undefined4 *)(param_2 + 0x524);
  param_1[0x14a] = *(undefined4 *)(param_2 + 0x528);
  param_1[0x14b] = *(undefined4 *)(param_2 + 0x52c);
  param_1[0x14c] = *(undefined4 *)(param_2 + 0x530);
  param_1[0x14d] = *(undefined4 *)(param_2 + 0x534);
  param_1[0x14e] = *(undefined4 *)(param_2 + 0x538);
  param_1[0x14f] = vftable;
  param_1[0x150] = *(undefined4 *)(param_2 + 0x540);
  param_1[0x151] = *(undefined4 *)(param_2 + 0x544);
  param_1[0x152] = *(undefined4 *)(param_2 + 0x548);
  param_1[0x153] = *(undefined4 *)(param_2 + 0x54c);
  param_1[0x154] = *(undefined4 *)(param_2 + 0x550);
  param_1[0x155] = *(undefined4 *)(param_2 + 0x554);
  param_1[0x156] = vftable;
  param_1[0x157] = *(undefined4 *)(param_2 + 0x55c);
  param_1[0x158] = *(undefined4 *)(param_2 + 0x560);
  param_1[0x159] = *(undefined4 *)(param_2 + 0x564);
  param_1[0x15a] = *(undefined4 *)(param_2 + 0x568);
  param_1[0x15b] = *(undefined4 *)(param_2 + 0x56c);
  param_1[0x15c] = *(undefined4 *)(param_2 + 0x570);
  param_1[0x15d] = vftable;
  param_1[0x15e] = *(undefined4 *)(param_2 + 0x578);
  param_1[0x15f] = *(undefined4 *)(param_2 + 0x57c);
  param_1[0x160] = *(undefined4 *)(param_2 + 0x580);
  param_1[0x161] = *(undefined4 *)(param_2 + 0x584);
  param_1[0x162] = *(undefined4 *)(param_2 + 0x588);
  param_1[0x163] = *(undefined4 *)(param_2 + 0x58c);
  param_1[0x164] = vftable;
  param_1[0x165] = *(undefined4 *)(param_2 + 0x594);
  param_1[0x166] = *(undefined4 *)(param_2 + 0x598);
  param_1[0x167] = *(undefined4 *)(param_2 + 0x59c);
  param_1[0x168] = *(undefined4 *)(param_2 + 0x5a0);
  param_1[0x169] = *(undefined4 *)(param_2 + 0x5a4);
  param_1[0x16a] = *(undefined4 *)(param_2 + 0x5a8);
  param_1[0x16b] = vftable;
  param_1[0x16c] = *(undefined4 *)(param_2 + 0x5b0);
  param_1[0x16d] = *(undefined4 *)(param_2 + 0x5b4);
  param_1[0x16e] = *(undefined4 *)(param_2 + 0x5b8);
  param_1[0x16f] = *(undefined4 *)(param_2 + 0x5bc);
  param_1[0x170] = *(undefined4 *)(param_2 + 0x5c0);
  param_1[0x171] = *(undefined4 *)(param_2 + 0x5c4);
  param_1[0x172] = vftable;
  param_1[0x173] = *(undefined4 *)(param_2 + 0x5cc);
  param_1[0x174] = *(undefined4 *)(param_2 + 0x5d0);
  param_1[0x175] = *(undefined4 *)(param_2 + 0x5d4);
  param_1[0x176] = *(undefined4 *)(param_2 + 0x5d8);
  param_1[0x177] = *(undefined4 *)(param_2 + 0x5dc);
  param_1[0x178] = *(undefined4 *)(param_2 + 0x5e0);
  param_1[0x179] = vftable;
  param_1[0x17a] = *(undefined4 *)(param_2 + 0x5e8);
  param_1[0x17b] = *(undefined4 *)(param_2 + 0x5ec);
  param_1[0x17c] = *(undefined4 *)(param_2 + 0x5f0);
  param_1[0x17d] = *(undefined4 *)(param_2 + 0x5f4);
  param_1[0x17e] = *(undefined4 *)(param_2 + 0x5f8);
  param_1[0x17f] = *(undefined4 *)(param_2 + 0x5fc);
  param_1[0x180] = vftable;
  param_1[0x181] = *(undefined4 *)(param_2 + 0x604);
  param_1[0x182] = *(undefined4 *)(param_2 + 0x608);
  param_1[0x183] = *(undefined4 *)(param_2 + 0x60c);
  param_1[0x184] = *(undefined4 *)(param_2 + 0x610);
  param_1[0x185] = *(undefined4 *)(param_2 + 0x614);
  param_1[0x186] = *(undefined4 *)(param_2 + 0x618);
  param_1[0x187] = vftable;
  param_1[0x188] = *(undefined4 *)(param_2 + 0x620);
  param_1[0x189] = *(undefined4 *)(param_2 + 0x624);
  param_1[0x18a] = *(undefined4 *)(param_2 + 0x628);
  param_1[0x18b] = *(undefined4 *)(param_2 + 0x62c);
  param_1[0x18c] = *(undefined4 *)(param_2 + 0x630);
  param_1[0x18d] = *(undefined4 *)(param_2 + 0x634);
  param_1[0x18e] = *(undefined4 *)(param_2 + 0x638);
  param_1[400] = *(undefined4 *)(param_2 + 0x640);
  param_1[0x191] = *(undefined4 *)(param_2 + 0x644);
  param_1[0x192] = *(undefined4 *)(param_2 + 0x648);
  param_1[0x193] = *(undefined4 *)(param_2 + 0x64c);
  param_1[0x194] = *(undefined4 *)(param_2 + 0x650);
  param_1[0x195] = *(undefined4 *)(param_2 + 0x654);
  param_1[0x196] = *(undefined4 *)(param_2 + 0x658);
  param_1[0x197] = *(undefined4 *)(param_2 + 0x65c);
  param_1[0x198] = *(undefined4 *)(param_2 + 0x660);
  param_1[0x199] = *(undefined4 *)(param_2 + 0x664);
  param_1[0x19a] = *(undefined4 *)(param_2 + 0x668);
  param_1[0x19b] = *(undefined4 *)(param_2 + 0x66c);
  param_1[0x19c] = *(undefined4 *)(param_2 + 0x670);
  param_1[0x19d] = *(undefined4 *)(param_2 + 0x674);
  param_1[0x19e] = *(undefined4 *)(param_2 + 0x678);
  param_1[0x19f] = *(undefined4 *)(param_2 + 0x67c);
  param_1[0x1a0] = *(undefined4 *)(param_2 + 0x680);
  param_1[0x1a1] = *(undefined4 *)(param_2 + 0x684);
  param_1[0x1a2] = *(undefined4 *)(param_2 + 0x688);
  param_1[0x1a3] = *(undefined4 *)(param_2 + 0x68c);
  param_1[0x1a4] = *(undefined4 *)(param_2 + 0x690);
  param_1[0x1a5] = *(undefined4 *)(param_2 + 0x694);
  param_1[0x1a6] = *(undefined4 *)(param_2 + 0x698);
  param_1[0x1a7] = *(undefined4 *)(param_2 + 0x69c);
  param_1[0x1a8] = *(undefined4 *)(param_2 + 0x6a0);
  param_1[0x1a9] = *(undefined4 *)(param_2 + 0x6a4);
  param_1[0x1aa] = *(undefined4 *)(param_2 + 0x6a8);
  param_1[0x1ab] = *(undefined4 *)(param_2 + 0x6ac);
  param_1[0x1ac] = *(undefined4 *)(param_2 + 0x6b0);
  param_1[0x1ad] = *(undefined4 *)(param_2 + 0x6b4);
  param_1[0x1ae] = *(undefined4 *)(param_2 + 0x6b8);
  param_1[0x1af] = *(undefined4 *)(param_2 + 0x6bc);
  param_1[0x1b0] = *(undefined4 *)(param_2 + 0x6c0);
  param_1[0x1b1] = *(undefined4 *)(param_2 + 0x6c4);
  param_1[0x1b2] = *(undefined4 *)(param_2 + 0x6c8);
  param_1[0x1b3] = *(undefined4 *)(param_2 + 0x6cc);
  param_1[0x1b4] = *(undefined4 *)(param_2 + 0x6d0);
  param_1[0x1b5] = *(undefined4 *)(param_2 + 0x6d4);
  param_1[0x1b6] = *(undefined4 *)(param_2 + 0x6d8);
  param_1[0x1b7] = *(undefined4 *)(param_2 + 0x6dc);
  param_1[0x1b8] = *(undefined4 *)(param_2 + 0x6e0);
  param_1[0x1b9] = *(undefined4 *)(param_2 + 0x6e4);
  param_1[0x1ba] = *(undefined4 *)(param_2 + 0x6e8);
  param_1[0x1bb] = *(undefined4 *)(param_2 + 0x6ec);
  param_1[0x1bc] = *(undefined4 *)(param_2 + 0x6f0);
  param_1[0x1bd] = *(undefined4 *)(param_2 + 0x6f4);
  param_1[0x1be] = *(undefined4 *)(param_2 + 0x6f8);
  param_1[0x1bf] = *(undefined4 *)(param_2 + 0x6fc);
  param_1[0x1c0] = *(undefined4 *)(param_2 + 0x700);
  param_1[0x1c1] = *(undefined4 *)(param_2 + 0x704);
  param_1[0x1c2] = *(undefined4 *)(param_2 + 0x708);
  param_1[0x1c3] = *(undefined4 *)(param_2 + 0x70c);
  param_1[0x1c4] = *(undefined4 *)(param_2 + 0x710);
  param_1[0x1c5] = *(undefined4 *)(param_2 + 0x714);
  param_1[0x1c6] = *(undefined4 *)(param_2 + 0x718);
  param_1[0x1c7] = *(undefined4 *)(param_2 + 0x71c);
  param_1[0x1c8] = *(undefined4 *)(param_2 + 0x720);
  param_1[0x1c9] = *(undefined4 *)(param_2 + 0x724);
  param_1[0x1ca] = *(undefined4 *)(param_2 + 0x728);
  param_1[0x1cb] = *(undefined4 *)(param_2 + 0x72c);
  param_1[0x1cc] = *(undefined4 *)(param_2 + 0x730);
  param_1[0x1cd] = *(undefined4 *)(param_2 + 0x734);
  param_1[0x1ce] = *(undefined4 *)(param_2 + 0x738);
  param_1[0x1cf] = *(undefined4 *)(param_2 + 0x73c);
  param_1[0x1d0] = *(undefined4 *)(param_2 + 0x740);
  param_1[0x1d1] = *(undefined4 *)(param_2 + 0x744);
  param_1[0x1d2] = *(undefined4 *)(param_2 + 0x748);
  param_1[0x1d3] = *(undefined4 *)(param_2 + 0x74c);
  param_1[0x1d4] = *(undefined4 *)(param_2 + 0x750);
  param_1[0x1d5] = *(undefined4 *)(param_2 + 0x754);
  param_1[0x1d6] = *(undefined4 *)(param_2 + 0x758);
  param_1[0x1d7] = *(undefined4 *)(param_2 + 0x75c);
  param_1[0x1d8] = *(undefined4 *)(param_2 + 0x760);
  param_1[0x1d9] = *(undefined4 *)(param_2 + 0x764);
  param_1[0x1da] = *(undefined4 *)(param_2 + 0x768);
  param_1[0x1db] = *(undefined4 *)(param_2 + 0x76c);
  param_1[0x1dc] = *(undefined4 *)(param_2 + 0x770);
  param_1[0x1dd] = *(undefined4 *)(param_2 + 0x774);
  param_1[0x1de] = *(undefined4 *)(param_2 + 0x778);
  param_1[0x1df] = *(undefined4 *)(param_2 + 0x77c);
  param_1[0x1e0] = *(undefined4 *)(param_2 + 0x780);
  param_1[0x1e1] = *(undefined4 *)(param_2 + 0x784);
  param_1[0x1e2] = *(undefined4 *)(param_2 + 0x788);
  param_1[0x1e3] = *(undefined4 *)(param_2 + 0x78c);
  param_1[0x1e4] = *(undefined4 *)(param_2 + 0x790);
  param_1[0x1e5] = *(undefined4 *)(param_2 + 0x794);
  param_1[0x1e6] = *(undefined4 *)(param_2 + 0x798);
  param_1[0x1e7] = *(undefined4 *)(param_2 + 0x79c);
  param_1[0x1e8] = *(undefined4 *)(param_2 + 0x7a0);
  param_1[0x1e9] = *(undefined4 *)(param_2 + 0x7a4);
  param_1[0x1ea] = *(undefined4 *)(param_2 + 0x7a8);
  param_1[0x1eb] = *(undefined4 *)(param_2 + 0x7ac);
  param_1[0x1ec] = *(undefined4 *)(param_2 + 0x7b0);
  param_1[0x1ed] = *(undefined4 *)(param_2 + 0x7b4);
  param_1[0x1ee] = *(undefined4 *)(param_2 + 0x7b8);
  param_1[0x1ef] = *(undefined4 *)(param_2 + 0x7bc);
  param_1[0x1f0] = *(undefined4 *)(param_2 + 0x7c0);
  param_1[0x1f1] = *(undefined4 *)(param_2 + 0x7c4);
  param_1[0x1f2] = *(undefined4 *)(param_2 + 0x7c8);
  param_1[499] = *(undefined4 *)(param_2 + 0x7cc);
  param_1[500] = *(undefined4 *)(param_2 + 2000);
  param_1[0x1f5] = *(undefined4 *)(param_2 + 0x7d4);
  param_1[0x1f6] = *(undefined4 *)(param_2 + 0x7d8);
  param_1[0x1f7] = *(undefined4 *)(param_2 + 0x7dc);
  param_1[0x1f8] = *(undefined4 *)(param_2 + 0x7e0);
  param_1[0x1f9] = *(undefined4 *)(param_2 + 0x7e4);
  param_1[0x1fa] = *(undefined4 *)(param_2 + 0x7e8);
  param_1[0x1fb] = *(undefined4 *)(param_2 + 0x7ec);
  param_1[0x1fc] = *(undefined4 *)(param_2 + 0x7f0);
  param_1[0x1fd] = *(undefined4 *)(param_2 + 0x7f4);
  param_1[0x1fe] = *(undefined4 *)(param_2 + 0x7f8);
  param_1[0x1ff] = *(undefined4 *)(param_2 + 0x7fc);
  param_1[0x200] = *(undefined4 *)(param_2 + 0x800);
  param_1[0x201] = *(undefined4 *)(param_2 + 0x804);
  param_1[0x202] = *(undefined4 *)(param_2 + 0x808);
  param_1[0x203] = *(undefined4 *)(param_2 + 0x80c);
  param_1[0x204] = *(undefined4 *)(param_2 + 0x810);
  param_1[0x205] = *(undefined4 *)(param_2 + 0x814);
  param_1[0x206] = *(undefined4 *)(param_2 + 0x818);
  param_1[0x207] = *(undefined4 *)(param_2 + 0x81c);
  param_1[0x208] = *(undefined4 *)(param_2 + 0x820);
  param_1[0x209] = *(undefined4 *)(param_2 + 0x824);
  param_1[0x20a] = *(undefined4 *)(param_2 + 0x828);
  param_1[0x20b] = *(undefined4 *)(param_2 + 0x82c);
  param_1[0x20c] = *(undefined4 *)(param_2 + 0x830);
  param_1[0x20d] = *(undefined4 *)(param_2 + 0x834);
  param_1[0x20e] = *(undefined4 *)(param_2 + 0x838);
  param_1[0x20f] = *(undefined4 *)(param_2 + 0x83c);
  param_1[0x210] = *(undefined4 *)(param_2 + 0x840);
  param_1[0x211] = *(undefined4 *)(param_2 + 0x844);
  param_1[0x212] = *(undefined4 *)(param_2 + 0x848);
  param_1[0x213] = *(undefined4 *)(param_2 + 0x84c);
  param_1[0x214] = *(undefined4 *)(param_2 + 0x850);
  param_1[0x215] = *(undefined4 *)(param_2 + 0x854);
  param_1[0x216] = *(undefined4 *)(param_2 + 0x858);
  param_1[0x217] = *(undefined4 *)(param_2 + 0x85c);
  param_1[0x218] = *(undefined4 *)(param_2 + 0x860);
  param_1[0x219] = *(undefined4 *)(param_2 + 0x864);
  param_1[0x21a] = *(undefined4 *)(param_2 + 0x868);
  param_1[0x21b] = *(undefined4 *)(param_2 + 0x86c);
  param_1[0x21c] = *(undefined4 *)(param_2 + 0x870);
  param_1[0x21d] = *(undefined4 *)(param_2 + 0x874);
  param_1[0x21e] = *(undefined4 *)(param_2 + 0x878);
  param_1[0x21f] = *(undefined4 *)(param_2 + 0x87c);
  param_1[0x220] = *(undefined4 *)(param_2 + 0x880);
  param_1[0x221] = *(undefined4 *)(param_2 + 0x884);
  param_1[0x222] = *(undefined4 *)(param_2 + 0x888);
  param_1[0x223] = *(undefined4 *)(param_2 + 0x88c);
  param_1[0x224] = *(undefined4 *)(param_2 + 0x890);
  param_1[0x225] = *(undefined4 *)(param_2 + 0x894);
  param_1[0x226] = *(undefined4 *)(param_2 + 0x898);
  param_1[0x227] = *(undefined4 *)(param_2 + 0x89c);
  param_1[0x228] = *(undefined4 *)(param_2 + 0x8a0);
  param_1[0x229] = *(undefined4 *)(param_2 + 0x8a4);
  param_1[0x22a] = *(undefined4 *)(param_2 + 0x8a8);
  param_1[0x22b] = *(undefined4 *)(param_2 + 0x8ac);
  param_1[0x22c] = *(undefined4 *)(param_2 + 0x8b0);
  param_1[0x22d] = *(undefined4 *)(param_2 + 0x8b4);
  param_1[0x22e] = *(undefined4 *)(param_2 + 0x8b8);
  param_1[0x22f] = *(undefined4 *)(param_2 + 0x8bc);
  param_1[0x230] = *(undefined4 *)(param_2 + 0x8c0);
  param_1[0x231] = *(undefined4 *)(param_2 + 0x8c4);
  param_1[0x232] = *(undefined4 *)(param_2 + 0x8c8);
  param_1[0x233] = *(undefined4 *)(param_2 + 0x8cc);
  param_1[0x234] = *(undefined4 *)(param_2 + 0x8d0);
  param_1[0x235] = *(undefined4 *)(param_2 + 0x8d4);
  param_1[0x236] = *(undefined4 *)(param_2 + 0x8d8);
  param_1[0x237] = *(undefined4 *)(param_2 + 0x8dc);
  param_1[0x238] = *(undefined4 *)(param_2 + 0x8e0);
  param_1[0x239] = *(undefined4 *)(param_2 + 0x8e4);
  param_1[0x23a] = *(undefined4 *)(param_2 + 0x8e8);
  param_1[0x23b] = *(undefined4 *)(param_2 + 0x8ec);
  param_1[0x23c] = *(undefined4 *)(param_2 + 0x8f0);
  param_1[0x23d] = *(undefined4 *)(param_2 + 0x8f4);
  param_1[0x23e] = *(undefined4 *)(param_2 + 0x8f8);
  param_1[0x23f] = *(undefined4 *)(param_2 + 0x8fc);
  param_1[0x240] = *(undefined4 *)(param_2 + 0x900);
  param_1[0x241] = *(undefined4 *)(param_2 + 0x904);
  param_1[0x242] = *(undefined4 *)(param_2 + 0x908);
  param_1[0x243] = *(undefined4 *)(param_2 + 0x90c);
  param_1[0x244] = *(undefined4 *)(param_2 + 0x910);
  param_1[0x245] = *(undefined4 *)(param_2 + 0x914);
  param_1[0x246] = *(undefined4 *)(param_2 + 0x918);
  param_1[0x247] = *(undefined4 *)(param_2 + 0x91c);
  param_1[0x248] = *(undefined4 *)(param_2 + 0x920);
  param_1[0x249] = *(undefined4 *)(param_2 + 0x924);
  param_1[0x24a] = *(undefined4 *)(param_2 + 0x928);
  param_1[0x24b] = *(undefined4 *)(param_2 + 0x92c);
  param_1[0x24c] = *(undefined4 *)(param_2 + 0x930);
  param_1[0x24d] = *(undefined4 *)(param_2 + 0x934);
  param_1[0x24e] = *(undefined4 *)(param_2 + 0x938);
  param_1[0x24f] = *(undefined4 *)(param_2 + 0x93c);
  param_1[0x250] = *(undefined4 *)(param_2 + 0x940);
  param_1[0x251] = *(undefined4 *)(param_2 + 0x944);
  param_1[0x252] = *(undefined4 *)(param_2 + 0x948);
  param_1[0x253] = *(undefined4 *)(param_2 + 0x94c);
  param_1[0x254] = *(undefined4 *)(param_2 + 0x950);
  param_1[0x255] = *(undefined4 *)(param_2 + 0x954);
  puVar3 = (undefined4 *)(param_2 + 0x958);
  puVar4 = param_1 + 0x256;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0x978);
  puVar4 = param_1 + 0x25e;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0x998);
  puVar4 = param_1 + 0x266;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0x9b8);
  puVar4 = param_1 + 0x26e;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x278] = *(undefined4 *)(param_2 + 0x9e0);
  param_1[0x279] = *(undefined4 *)(param_2 + 0x9e4);
  param_1[0x27a] = *(undefined4 *)(param_2 + 0x9e8);
  param_1[0x27b] = *(undefined4 *)(param_2 + 0x9ec);
  param_1[0x27c] = *(undefined4 *)(param_2 + 0x9f0);
  param_1[0x27d] = *(undefined4 *)(param_2 + 0x9f4);
  param_1[0x27e] = *(undefined4 *)(param_2 + 0x9f8);
  param_1[0x27f] = *(undefined4 *)(param_2 + 0x9fc);
  param_1[0x280] = *(undefined4 *)(param_2 + 0xa00);
  param_1[0x281] = *(undefined4 *)(param_2 + 0xa04);
  param_1[0x282] = *(undefined4 *)(param_2 + 0xa08);
  param_1[0x283] = *(undefined4 *)(param_2 + 0xa0c);
  param_1[0x284] = *(undefined4 *)(param_2 + 0xa10);
  param_1[0x285] = *(undefined4 *)(param_2 + 0xa14);
  param_1[0x286] = *(undefined4 *)(param_2 + 0xa18);
  param_1[0x287] = *(undefined4 *)(param_2 + 0xa1c);
  param_1[0x288] = *(undefined4 *)(param_2 + 0xa20);
  param_1[0x289] = *(undefined4 *)(param_2 + 0xa24);
  param_1[0x28a] = *(undefined4 *)(param_2 + 0xa28);
  param_1[0x28b] = *(undefined4 *)(param_2 + 0xa2c);
  param_1[0x28c] = *(undefined4 *)(param_2 + 0xa30);
  param_1[0x28d] = *(undefined4 *)(param_2 + 0xa34);
  param_1[0x28e] = *(undefined4 *)(param_2 + 0xa38);
  param_1[0x28f] = *(undefined4 *)(param_2 + 0xa3c);
  param_1[0x290] = *(undefined4 *)(param_2 + 0xa40);
  param_1[0x291] = *(undefined4 *)(param_2 + 0xa44);
  param_1[0x292] = *(undefined4 *)(param_2 + 0xa48);
  param_1[0x293] = *(undefined4 *)(param_2 + 0xa4c);
  param_1[0x294] = *(undefined4 *)(param_2 + 0xa50);
  param_1[0x295] = *(undefined4 *)(param_2 + 0xa54);
  param_1[0x296] = *(undefined4 *)(param_2 + 0xa58);
  param_1[0x297] = *(undefined4 *)(param_2 + 0xa5c);
  param_1[0x298] = *(undefined4 *)(param_2 + 0xa60);
  param_1[0x299] = *(undefined4 *)(param_2 + 0xa64);
  param_1[0x29a] = *(undefined4 *)(param_2 + 0xa68);
  param_1[0x29b] = *(undefined4 *)(param_2 + 0xa6c);
  param_1[0x29c] = *(undefined4 *)(param_2 + 0xa70);
  param_1[0x29d] = *(undefined4 *)(param_2 + 0xa74);
  param_1[0x29e] = *(undefined4 *)(param_2 + 0xa78);
  param_1[0x29f] = *(undefined4 *)(param_2 + 0xa7c);
  param_1[0x2a0] = *(undefined4 *)(param_2 + 0xa80);
  param_1[0x2a1] = *(undefined4 *)(param_2 + 0xa84);
  param_1[0x2a2] = *(undefined4 *)(param_2 + 0xa88);
  param_1[0x2a3] = *(undefined4 *)(param_2 + 0xa8c);
  param_1[0x2a4] = *(undefined4 *)(param_2 + 0xa90);
  param_1[0x2a5] = *(undefined4 *)(param_2 + 0xa94);
  param_1[0x2a6] = *(undefined4 *)(param_2 + 0xa98);
  param_1[0x2a7] = *(undefined4 *)(param_2 + 0xa9c);
  param_1[0x2a8] = *(undefined4 *)(param_2 + 0xaa0);
  param_1[0x2a9] = *(undefined4 *)(param_2 + 0xaa4);
  param_1[0x2aa] = *(undefined4 *)(param_2 + 0xaa8);
  param_1[0x2ab] = *(undefined4 *)(param_2 + 0xaac);
  param_1[0x2ac] = *(undefined4 *)(param_2 + 0xab0);
  param_1[0x2ad] = *(undefined4 *)(param_2 + 0xab4);
  param_1[0x2ae] = *(undefined4 *)(param_2 + 0xab8);
  param_1[0x2af] = *(undefined4 *)(param_2 + 0xabc);
  param_1[0x2b0] = *(undefined4 *)(param_2 + 0xac0);
  param_1[0x2b1] = *(undefined4 *)(param_2 + 0xac4);
  param_1[0x2b2] = *(undefined4 *)(param_2 + 0xac8);
  param_1[0x2b3] = *(undefined4 *)(param_2 + 0xacc);
  param_1[0x2b4] = *(undefined4 *)(param_2 + 0xad0);
  param_1[0x2b5] = *(undefined4 *)(param_2 + 0xad4);
  param_1[0x2b6] = *(undefined4 *)(param_2 + 0xad8);
  param_1[0x2b7] = *(undefined4 *)(param_2 + 0xadc);
  param_1[0x2b8] = *(undefined4 *)(param_2 + 0xae0);
  param_1[0x2b9] = *(undefined4 *)(param_2 + 0xae4);
  param_1[0x2ba] = *(undefined4 *)(param_2 + 0xae8);
  param_1[699] = *(undefined4 *)(param_2 + 0xaec);
  param_1[700] = *(undefined4 *)(param_2 + 0xaf0);
  param_1[0x2bd] = *(undefined4 *)(param_2 + 0xaf4);
  param_1[0x2be] = *(undefined4 *)(param_2 + 0xaf8);
  param_1[0x2bf] = *(undefined4 *)(param_2 + 0xafc);
  param_1[0x2c0] = *(undefined4 *)(param_2 + 0xb00);
  param_1[0x2c1] = *(undefined4 *)(param_2 + 0xb04);
  param_1[0x2c2] = *(undefined4 *)(param_2 + 0xb08);
  param_1[0x2c3] = *(undefined4 *)(param_2 + 0xb0c);
  param_1[0x2c4] = *(undefined4 *)(param_2 + 0xb10);
  param_1[0x2c5] = *(undefined4 *)(param_2 + 0xb14);
  param_1[0x2c6] = *(undefined4 *)(param_2 + 0xb18);
  param_1[0x2c7] = *(undefined4 *)(param_2 + 0xb1c);
  param_1[0x2c8] = *(undefined4 *)(param_2 + 0xb20);
  param_1[0x2c9] = *(undefined4 *)(param_2 + 0xb24);
  param_1[0x2ca] = *(undefined4 *)(param_2 + 0xb28);
  param_1[0x2cb] = *(undefined4 *)(param_2 + 0xb2c);
  param_1[0x2cc] = *(undefined4 *)(param_2 + 0xb30);
  param_1[0x2cd] = *(undefined4 *)(param_2 + 0xb34);
  param_1[0x2ce] = *(undefined4 *)(param_2 + 0xb38);
  param_1[0x2cf] = *(undefined4 *)(param_2 + 0xb3c);
  param_1[0x2d0] = *(undefined4 *)(param_2 + 0xb40);
  param_1[0x2d1] = *(undefined4 *)(param_2 + 0xb44);
  param_1[0x2d2] = *(undefined4 *)(param_2 + 0xb48);
  param_1[0x2d3] = *(undefined4 *)(param_2 + 0xb4c);
  param_1[0x2d4] = *(undefined4 *)(param_2 + 0xb50);
  param_1[0x2d5] = *(undefined4 *)(param_2 + 0xb54);
  param_1[0x2d6] = *(undefined4 *)(param_2 + 0xb58);
  param_1[0x2d7] = *(undefined4 *)(param_2 + 0xb5c);
  param_1[0x2d8] = *(undefined4 *)(param_2 + 0xb60);
  param_1[0x2d9] = *(undefined4 *)(param_2 + 0xb64);
  param_1[0x2da] = *(undefined4 *)(param_2 + 0xb68);
  param_1[0x2db] = *(undefined4 *)(param_2 + 0xb6c);
  param_1[0x2dc] = *(undefined4 *)(param_2 + 0xb70);
  param_1[0x2dd] = *(undefined4 *)(param_2 + 0xb74);
  param_1[0x2de] = *(undefined4 *)(param_2 + 0xb78);
  param_1[0x2df] = *(undefined4 *)(param_2 + 0xb7c);
  param_1[0x2e0] = *(undefined4 *)(param_2 + 0xb80);
  param_1[0x2e1] = *(undefined4 *)(param_2 + 0xb84);
  param_1[0x2e2] = *(undefined4 *)(param_2 + 0xb88);
  param_1[0x2e3] = *(undefined4 *)(param_2 + 0xb8c);
  iVar1 = param_2 + 0xc00;
  param_1[0x2e4] = *(undefined4 *)(param_2 + 0xb90);
  iVar2 = 0x1f;
  param_1[0x2e5] = *(undefined4 *)(param_2 + 0xb94);
  param_1[0x2e6] = *(undefined4 *)(param_2 + 0xb98);
  param_1[0x2e7] = *(undefined4 *)(param_2 + 0xb9c);
  param_1[0x2e8] = *(undefined4 *)(param_2 + 0xba0);
  param_1[0x2e9] = *(undefined4 *)(param_2 + 0xba4);
  param_1[0x2ea] = *(undefined4 *)(param_2 + 0xba8);
  param_1[0x2eb] = *(undefined4 *)(param_2 + 0xbac);
  param_1[0x2ec] = *(undefined4 *)(param_2 + 0xbb0);
  param_1[0x2ed] = *(undefined4 *)(param_2 + 0xbb4);
  param_1[0x2ee] = *(undefined4 *)(param_2 + 3000);
  param_1[0x2ef] = *(undefined4 *)(param_2 + 0xbbc);
  param_1[0x2f0] = *(undefined4 *)(param_2 + 0xbc0);
  param_1[0x2f1] = *(undefined4 *)(param_2 + 0xbc4);
  param_1[0x2f2] = *(undefined4 *)(param_2 + 0xbc8);
  param_1[0x2f3] = *(undefined4 *)(param_2 + 0xbcc);
  param_1[0x2f4] = *(undefined4 *)(param_2 + 0xbd0);
  param_1[0x2f5] = *(undefined4 *)(param_2 + 0xbd4);
  param_1[0x2f6] = *(undefined4 *)(param_2 + 0xbd8);
  param_1[0x2f7] = *(undefined4 *)(param_2 + 0xbdc);
  *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0xbe0);
  param_1[0x2f9] = *(undefined4 *)(param_2 + 0xbe4);
  param_1[0x2fa] = *(undefined4 *)(param_2 + 0xbe8);
  param_1[0x2fb] = *(undefined4 *)(param_2 + 0xbec);
  param_1[0x2fc] = *(undefined4 *)(param_2 + 0xbf0);
  param_1[0x2fd] = *(undefined4 *)(param_2 + 0xbf4);
  do {
    cLightApplyScale_4(iVar1);
    iVar1 = iVar1 + 0x90;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return param_1;
}

// 00A409E0  cLightApplyScale::cLightApplyScale_8  size=244  [class]
void __fastcall cLightApplyScale::cLightApplyScale_8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cLightDataMinimum::vftable;
  param_1[0x52] = vftable;
  param_1[0x59] = vftable;
  param_1[0x60] = vftable;
  param_1[0x67] = vftable;
  param_1[0x6e] = vftable;
  param_1[0x75] = vftable;
  param_1[0x7c] = vftable;
  param_1[0x83] = vftable;
  param_1[0xd6] = vftable;
  param_1[0xdd] = vftable;
  param_1[0xe4] = vftable;
  param_1[0xeb] = vftable;
  param_1[0xf2] = vftable;
  param_1[0xf9] = vftable;
  param_1[0x100] = vftable;
  param_1[0x107] = vftable;
  param_1[0x11e] = vftable;
  param_1[0x125] = vftable;
  param_1[300] = vftable;
  param_1[0x133] = vftable;
  param_1[0x13a] = vftable;
  param_1[0x141] = vftable;
  param_1[0x148] = vftable;
  param_1[0x14f] = vftable;
  param_1[0x156] = vftable;
  param_1[0x15d] = vftable;
  param_1[0x164] = vftable;
  param_1[0x16b] = vftable;
  param_1[0x172] = vftable;
  param_1[0x179] = vftable;
  param_1[0x180] = vftable;
  param_1[0x187] = vftable;
  param_1 = param_1 + 0x300;
  iVar1 = 0x1f;
  do {
    *param_1 = cLightSaveWork::vftable;
    param_1[0x19] = vftable;
    param_1 = param_1 + 0x24;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 00A40B40  cLightApplyScale::cLightApplyScale_9  size=113  [class]
undefined4 * __fastcall cLightApplyScale::cLightApplyScale_9(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = cLightManager::vftable;
  cLightApplyScale_8();
  iVar2 = 0x3ff;
  puVar1 = param_1 + 0x858;
  do {
    *puVar1 = vftable;
    puVar1 = puVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0x3ff;
  puVar1 = param_1 + 0xb858;
  do {
    *puVar1 = vftable;
    puVar1 = puVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[0x16858] = vftable;
  cLightApplyScale_8();
  param_1[0x16ff0] = 0;
  return param_1;
}

// 00EC9740  cLightApplyScale::cLightApplyScale_7  size=160  [class]
void cLightApplyScale::cLightApplyScale_7(int param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_28;
  local_1c = *(undefined4 *)(param_1 + 0x48);
  local_18 = *(undefined4 *)(param_1 + 0x4c);
  local_14 = *(undefined4 *)(param_1 + 0x50);
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  local_8 = *(undefined4 *)(param_1 + 0x5c);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_20 = vftable;
  FUN_00a382a0(param_1,&local_28,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38),*(undefined2 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0x42),
               *(undefined1 *)(param_1 + 0x43),&local_20);
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}

// 00EC9890  cLightApplyScale::cLightApplyScale_5  size=164  [class]
void cLightApplyScale::cLightApplyScale_5(int param_1)

{
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_20;
  local_1c = *(undefined4 *)(param_1 + 0x48);
  local_18 = *(undefined4 *)(param_1 + 0x4c);
  local_14 = *(undefined4 *)(param_1 + 0x50);
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  local_8 = *(undefined4 *)(param_1 + 0x5c);
  local_20 = vftable;
  FUN_00a38580(param_1,param_1 + 0x10,*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x38),*(undefined2 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x3c),*(undefined1 *)(param_1 + 0x42),
               *(undefined1 *)(param_1 + 0x43),&local_20);
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}

// 00EC9940  cLightApplyScale::cLightApplyScale_6  size=175  [class]
void cLightApplyScale::cLightApplyScale_6(int param_1)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_28;
  local_1c = *(undefined4 *)(param_1 + 0x48);
  local_18 = *(undefined4 *)(param_1 + 0x4c);
  local_14 = *(undefined4 *)(param_1 + 0x50);
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  local_8 = *(undefined4 *)(param_1 + 0x5c);
  local_28 = *(undefined4 *)(param_1 + 0x10);
  local_20 = vftable;
  local_24 = *(undefined4 *)(param_1 + 0x14);
  FUN_00a38700(param_1,&local_28,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
               *(undefined2 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c),
               *(undefined1 *)(param_1 + 0x42),&local_20);
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}

