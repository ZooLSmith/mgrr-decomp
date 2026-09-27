// src/effect/EspPrimitiveWorkTile3x3.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F553B0..00F59560, 6 functions

#include "types.h"

// 00F553B0  FUN_00f553b0  size=408  [callgraph]
void __thiscall
FUN_00f553b0(undefined4 param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  ushort uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  float local_48 [17];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_70;
  local_4c = 0;
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 1.0;
  local_48[5] = 1.0;
  local_68 = (int)(short)param_3;
  local_48[6] = 1.0;
  local_48[0xc] = 1.0;
  local_54 = param_4;
  local_48[0xe] = 1.0;
  local_48[0xf] = 1.0;
  iVar4 = 6;
  local_48[3] = 0.0;
  local_48[4] = 0.0;
  local_48[7] = 0.0;
  local_48[8] = 0.0;
  local_48[9] = 0.0;
  local_48[10] = 0.0;
  local_48[0xb] = 0.0;
  local_48[0xd] = 0.0;
  local_48[0x10] = 0.0;
  local_60 = (float)local_68;
  pfVar2 = local_48;
  do {
    iVar4 = iVar4 + -1;
    pfVar2[-1] = pfVar2[-1] / local_60;
    *pfVar2 = *pfVar2 / local_60;
    pfVar2 = pfVar2 + 3;
  } while (iVar4 != 0);
  uVar1 = param_3 - 1;
  local_60 = 1.0 / local_60;
  local_64 = (uint)uVar1;
  iVar4 = 0;
  local_58 = param_1;
  if (-1 < (short)uVar1) {
    local_6c = (int)(short)uVar1;
    do {
      if (0 < (short)param_3) {
        uVar6 = (uint)param_3;
        local_5c = (float)local_6c * local_60;
        uVar5 = iVar4 * 6 & 0xffff;
        local_70 = 0;
        iVar4 = iVar4 + uVar6;
        do {
          local_50 = (float)local_70 * local_60;
          FUN_00f4fb30(uVar5,local_5c,local_50,&local_4c,param_2);
          local_70 = local_70 + 1;
          uVar5 = uVar5 + 6;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      local_6c = local_6c + -1;
      local_64 = local_64 - 1;
    } while (-1 < (short)local_64);
  }
  iVar4 = local_68 * local_68 * 6;
  iVar3 = FUN_00f9cae0(8,iVar4,local_54);
  if ((iVar3 != 0) && (iVar4 = FUN_00f99d50(param_2,8,iVar4), iVar4 != 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_70);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_70);
  return;
}

// 00F55550  FUN_00f55550  size=406  [callgraph]
void __thiscall FUN_00f55550(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48 [17];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_6c;
  local_4c = 0x3f800000;
  fVar4 = (float)(int)param_3;
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 0.0;
  local_48[4] = 0.0;
  local_48[5] = 0.0;
  local_68 = param_2;
  local_48[7] = 0.0;
  local_54 = param_4;
  local_48[9] = 0.0;
  local_48[10] = 0.0;
  local_48[0xd] = 0.0;
  iVar3 = 6;
  local_48[0xe] = 0.0;
  local_48[0x10] = 0.0;
  local_48[6] = 1.0;
  local_48[8] = 1.0;
  local_48[0xb] = 1.0;
  local_48[0xc] = 1.0;
  local_48[0xf] = 1.0;
  local_5c = (float)(int)fVar4;
  pfVar1 = local_48;
  do {
    iVar3 = iVar3 + -1;
    pfVar1[-1] = pfVar1[-1] / local_5c;
    *pfVar1 = *pfVar1 / local_5c;
    pfVar1 = pfVar1 + 3;
  } while (iVar3 != 0);
  local_5c = 1.0 / local_5c;
  iVar3 = 0;
  local_60 = 0;
  local_6c = fVar4;
  local_50 = param_1;
  if (0 < (int)fVar4) {
    local_6c = 0.0;
    do {
      uVar6 = 0;
      local_64 = 0;
      local_58 = (float)(int)local_6c * local_5c;
      uVar5 = iVar3 * 6 & 0xffff;
      do {
        local_6c = (float)local_64 * local_5c;
        FUN_00f4fb30(uVar5,local_58,local_6c,&local_4c,local_68);
        uVar6 = uVar6 + 1;
        local_64 = uVar6 & 0xffff;
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 + 6;
      } while ((int)local_64 < (int)fVar4);
      local_60 = local_60 + 1;
      local_6c = (float)(local_60 & 0xffff);
    } while ((int)local_6c < (int)fVar4);
  }
  iVar3 = (int)fVar4 * (int)fVar4 * 6;
  iVar2 = FUN_00f9cae0(8,iVar3,local_54);
  if ((iVar2 != 0) && (iVar3 = FUN_00f99d50(local_68,8,iVar3), iVar3 != 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_6c);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_6c);
  return;
}

// 00F556F0  FUN_00f556f0  size=420  [callgraph]
void __thiscall FUN_00f556f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_74;
  int local_70;
  float local_6c;
  uint local_68;
  int local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  float local_48 [17];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_74;
  local_4c = 0;
  local_48[0] = 1.0;
  local_48[2] = 1.0;
  local_48[3] = 1.0;
  local_64 = (int)(short)param_3;
  local_48[5] = 1.0;
  local_48[9] = 1.0;
  local_48[0xe] = 1.0;
  local_54 = param_4;
  iVar3 = 6;
  local_48[1] = 0.0;
  local_48[4] = 0.0;
  local_48[6] = 0.0;
  local_48[7] = 0.0;
  local_48[8] = 0.0;
  local_48[10] = 0.0;
  local_48[0xb] = 0.0;
  local_48[0xc] = 0.0;
  local_48[0xd] = 0.0;
  local_48[0xf] = 0.0;
  local_48[0x10] = 0.0;
  local_6c = (float)local_64;
  pfVar1 = local_48;
  do {
    iVar3 = iVar3 + -1;
    pfVar1[-1] = pfVar1[-1] / local_6c;
    *pfVar1 = *pfVar1 / local_6c;
    pfVar1 = pfVar1 + 3;
  } while (iVar3 != 0);
  uVar4 = param_3 - 1;
  local_6c = 1.0 / local_6c;
  local_68 = uVar4 & 0xffff;
  iVar3 = 0;
  local_5c = param_1;
  local_50 = uVar4;
  if (-1 < (short)uVar4) {
    local_70 = (int)(short)uVar4;
    do {
      uVar5 = uVar4 & 0xffff;
      if (-1 < (short)uVar4) {
        local_74 = (int)(short)uVar4;
        local_58 = (float)local_70 * local_6c;
        uVar6 = iVar3 * 6 & 0xffff;
        iVar3 = uVar5 + 1 + iVar3;
        do {
          local_60 = (float)local_74 * local_6c;
          FUN_00f4fb30(uVar6,local_58,local_60,&local_4c,param_2);
          local_74 = local_74 + -1;
          uVar5 = uVar5 - 1;
          uVar6 = uVar6 + 6;
          uVar4 = local_50;
        } while (-1 < (short)uVar5);
      }
      local_70 = local_70 + -1;
      local_68 = local_68 - 1;
    } while (-1 < (short)local_68);
  }
  iVar3 = local_64 * local_64 * 6;
  iVar2 = FUN_00f9cae0(8,iVar3,local_54);
  if ((iVar2 != 0) && (iVar3 = FUN_00f99d50(param_2,8,iVar3), iVar3 != 0)) {
    __security_check_cookie(local_4 ^ (uint)&local_74);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_74);
  return;
}

// 00F558A0  FUN_00f558a0  size=428  [callgraph]
void __thiscall FUN_00f558a0(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_74;
  int local_70;
  float local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  float local_48 [17];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_74;
  local_4c = 0x3f800000;
  local_48[0] = 1.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[4] = 0.0;
  local_64 = (int)(short)param_3;
  local_48[5] = 0.0;
  local_48[6] = 0.0;
  local_54 = param_4;
  local_48[7] = 0.0;
  local_48[10] = 0.0;
  local_48[0xc] = 0.0;
  iVar3 = 6;
  local_48[0xd] = 0.0;
  local_48[0xe] = 0.0;
  local_48[0xf] = 0.0;
  local_48[0x10] = 0.0;
  local_48[3] = 1.0;
  local_48[8] = 1.0;
  local_48[9] = 1.0;
  local_48[0xb] = 1.0;
  local_6c = (float)local_64;
  pfVar1 = local_48;
  do {
    iVar3 = iVar3 + -1;
    pfVar1[-1] = pfVar1[-1] / local_6c;
    *pfVar1 = *pfVar1 / local_6c;
    pfVar1 = pfVar1 + 3;
  } while (iVar3 != 0);
  local_6c = 1.0 / local_6c;
  iVar3 = 0;
  local_5c = param_1;
  if (0 < (short)param_3) {
    local_60 = param_3 - 1;
    local_68 = param_3 & 0xffff;
    local_70 = 0;
    do {
      uVar4 = local_60 & 0xffff;
      if (-1 < (short)local_60) {
        local_74 = (int)(short)local_60;
        local_50 = (float)local_70 * local_6c;
        uVar5 = iVar3 * 6 & 0xffff;
        iVar3 = uVar4 + 1 + iVar3;
        do {
          local_58 = (float)local_74 * local_6c;
          FUN_00f4fb30(uVar5,local_50,local_58,&local_4c,param_2);
          local_74 = local_74 + -1;
          uVar4 = uVar4 - 1;
          uVar5 = uVar5 + 6;
        } while (-1 < (short)uVar4);
      }
      local_70 = local_70 + 1;
      local_68 = local_68 - 1;
    } while (local_68 != 0);
    local_68 = 0;
  }
  iVar3 = local_64 * local_64 * 6;
  iVar2 = FUN_00f9cae0(8,iVar3,local_54);
  if (iVar2 != 0) {
    iVar3 = FUN_00f99d50(param_2,8,iVar3);
    if (iVar3 != 0) {
      __security_check_cookie(local_4 ^ (uint)&local_74);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_74);
  return;
}

// 00F55A60  EspPrimitiveWorkTile3x3::vf04  size=949  [class]
void EspPrimitiveWorkTile3x3::vf04(undefined4 param_1)

{
  float *pfVar1;
  int iVar2;
  undefined1 auStack_5b4 [12];
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  float local_590 [8];
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined1 local_530 [872];
  undefined1 local_1c8 [436];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_5b4;
  local_590[0] = -1.0;
  local_590[1] = 0.0;
  local_590[2] = 0.0;
  local_590[4] = 0.0;
  iVar2 = 6;
  local_590[5] = 0.0;
  local_590[6] = 0.0;
  local_570 = 0;
  local_568 = 0;
  local_55c = 0;
  local_558 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_56c = 0xbf800000;
  local_560 = 0xbf800000;
  local_550 = 0xbf800000;
  local_54c = 0xbf800000;
  local_53c = 0xbf800000;
  pfVar1 = local_590 + 1;
  do {
    iVar2 = iVar2 + -1;
    pfVar1[-1] = pfVar1[-1] / 3.0;
    *pfVar1 = *pfVar1 / 3.0;
    pfVar1 = pfVar1 + 4;
  } while (iVar2 != 0);
  local_5a4 = 0;
  local_5a0 = 0;
  local_594 = 0;
  local_59c = 1;
  local_598 = 1;
  local_5a8 = 1;
  FUN_00f4f9a0(0,0,0,local_590,local_530,0x3f400000,&local_5a8);
  FUN_00f4f9a0(6,0,0xbeaaaaab,local_590,local_530,0x3f400000,&local_5a8);
  FUN_00f4f9a0(0xc,0,0xbf2aaaab,local_590,local_530,0x3f400000,&local_5a8);
  local_5a8 = 1;
  local_5a4 = 1;
  local_5a0 = 1;
  local_59c = 1;
  local_598 = 1;
  local_594 = 1;
  FUN_00f4f9a0(0x12,0xbeaaaaab,0,local_590,local_530,0x3f400000,&local_5a8);
  FUN_00f4f9a0(0x18,0xbeaaaaab,0xbeaaaaab,local_590,local_530,0x3f400000,&local_5a8);
  FUN_00f4f9a0(0x1e,0xbeaaaaab,0xbf2aaaab,local_590,local_530,0x3f400000,&local_5a8);
  local_5a8 = 0;
  local_59c = 0;
  local_598 = 0;
  local_5a0 = 1;
  local_594 = 1;
  local_5a4 = 1;
  FUN_00f4f9a0(0x24,0xbf2aaaab,0,local_590,local_530,0x3f400000,&local_5a8);
  FUN_00f4f9a0(0x2a,0xbf2aaaab,0xbeaaaaab,local_590,local_530,0x3f400000,&local_5a8);
  FUN_00f4f9a0(0x30,0xbf2aaaab,0xbf2aaaab,local_590,local_530,0x3f400000,&local_5a8);
  iVar2 = FUN_00f9cae0(0x10,0x36,param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00f99d50(local_530,0x10,0x36);
    if (iVar2 != 0) {
      iVar2 = FUN_00f553b0(local_1c8,3,param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_00f55550(local_1c8,3,param_1);
        if (iVar2 != 0) {
          iVar2 = FUN_00f556f0(local_1c8,3,param_1);
          if (iVar2 != 0) {
            FUN_00f558a0(local_1c8,3,param_1);
            __security_check_cookie(local_14 ^ (uint)auStack_5b4);
            return;
          }
        }
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_5b4);
  return;
}

// 00F59560  EspPrimitiveWorkTile3x3::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkTile3x3::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = EspPrimitiveWorkTileBase::vftable;
  iVar1 = 3;
  do {
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

