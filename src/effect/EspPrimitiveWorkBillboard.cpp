// src/effect/EspPrimitiveWorkBillboard.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4EA70..00F59180, 5 functions

#include "mgrr.h"
#include "EspPrimitiveWorkBillboard.h"

// 00F4EA70  EspPrimitiveWorkBillboard::EspPrimitiveWorkBillboard  size=70  [class]
undefined4 * __fastcall EspPrimitiveWorkBillboard::EspPrimitiveWorkBillboard(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00f9c880();
  FUN_00f9c880();
  return param_1;
}

// 00F4EB10  EspPrimitiveWorkBillboard::vf08  size=36  [class]
void EspPrimitiveWorkBillboard::vf08(void)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = 4;
  do {
    FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00F4EB40  EspPrimitiveWorkBillboard::vf0C  size=119  [class]
void __thiscall EspPrimitiveWorkBillboard::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 0x11) == 'K') {
    FUN_00dd5650(&DAT_016e0f74,&DAT_016e0f04);
  }
  if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(1,param_1 + 0x2c + (uVar1 >> 2 & 3) * 0x28);
  }
  else {
    FUN_00f98f80(&PTR_vftable_018da4c0);
  }
  FUN_00f99010(0,param_1 + 4);
  FUN_00f9dfb0(5);
  return;
}

// 00F51230  EspPrimitiveWorkBillboard::vf04  size=535  [class]
void EspPrimitiveWorkBillboard::vf04(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
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
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_dc;
  local_b4 = 0xbf800000;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_d4 = param_1;
  local_a4 = 0;
  local_a0 = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_9c = 0xbf800000;
  local_80 = 0;
  local_98 = 0xbf800000;
  local_58 = 0;
  local_8c = 0xbf800000;
  local_30 = 0;
  local_8 = 0;
  local_bc = 0x3f800000;
  local_c4 = 0x3f800000;
  local_dc = 0x3f800000;
  local_d8 = 0x3f800000;
  local_6c = 0x3f800000;
  local_68 = 0x3f800000;
  local_b8 = 0;
  local_c8 = 0;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  local_84 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0x3f800000;
  local_64 = 0x3f800000;
  local_60 = 0;
  local_5c = 0;
  local_4c = 0;
  local_48 = 0x3f800000;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_34 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_00f9cae0(0xc,4,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(&local_b4,0xc,4), iVar1 != 0)) {
    uVar2 = 0;
    puVar3 = &local_84;
    do {
      iVar1 = FUN_00f9cae0(8,4,local_d4);
      if ((iVar1 == 0) || (iVar1 = FUN_00f99d50(puVar3,8,4), iVar1 == 0)) break;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (uVar2 < 4);
  }
  __security_check_cookie(local_4 ^ (uint)&local_dc);
  return;
}

// 00F59180  EspPrimitiveWorkBillboard::vf00  size=30  [class]
undefined4 __thiscall EspPrimitiveWorkBillboard::vf00(undefined4 param_1,byte param_2)

{
  EspPrimitiveWorkBase::EspPrimitiveWorkBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

