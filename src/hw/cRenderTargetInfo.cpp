// src/hw/cRenderTargetInfo.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F97540..015F4430, 8 functions

#include "mgrr.h"

// 00F97540  Hw::cRenderTargetInfo::~cRenderTargetInfo  size=7  [class]
void __fastcall Hw::cRenderTargetInfo::~cRenderTargetInfo(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00F9A130  Hw::cRenderTargetInfo::cRenderTargetInfo  size=44  [class]
void __fastcall Hw::cRenderTargetInfo::cRenderTargetInfo(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00FA3400  FUN_00fa3400  size=405  [callgraph]
void FUN_00fa3400(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_84 [18];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_84;
  iVar1 = FUN_00fa30d0(param_1,&PTR_vftable_018da6d0,DAT_01f20564);
  uVar3 = DAT_01f20580;
  uVar6 = DAT_01f20584;
  if (iVar1 != 0) {
    if ((DAT_018da6d4 == param_1[1]) && (DAT_018da6d8 != 0)) {
      param_1[2] = DAT_018da6d8;
    }
    if ((DAT_018da6dc == param_1[3]) && (DAT_018da6e0 != 0)) {
      param_1[4] = DAT_018da6e0;
    }
    if ((DAT_018da6e4 == param_1[5]) && (DAT_018da6e8 != 0)) {
      param_1[6] = DAT_018da6e8;
    }
    if ((DAT_018da6ec == param_1[7]) && (DAT_018da6f0 != 0)) {
      param_1[8] = DAT_018da6f0;
    }
    ppuVar4 = &PTR_vftable_018da6d0;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppuVar4 = (undefined *)*param_1;
      param_1 = param_1 + 1;
      ppuVar4 = ppuVar4 + 1;
    }
    uVar3 = DAT_01f20580;
    uVar6 = DAT_01f20584;
    if (param_2 != 0) {
      if (DAT_018da6d4 == 0) {
        puVar2 = &DAT_01f20668;
        puVar5 = local_84;
        for (iVar1 = 0x1a; uVar3 = local_38, uVar6 = local_3c, iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        iVar1 = FUN_00fa0740(0);
        if (iVar1 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(iVar1 + 8);
        }
        iVar1 = FUN_00fa0740(0);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(iVar1 + 0xc);
        }
      }
      DAT_01f20578 = 0;
      DAT_01f20568 = 0;
      DAT_01f2056c = 0;
      DAT_01f2057c = 0x3f800000;
      DAT_01f20570 = uVar6;
      DAT_01f20574 = uVar3;
      if (DAT_01f206d4 != (int *)0x0) {
        local_c = 0;
        local_1c = 0;
        local_18 = 0;
        local_8 = 0x3f800000;
        local_14 = uVar6;
        local_10 = uVar3;
        (**(code **)(*DAT_01f206d4 + 0xbc))(DAT_01f206d4,&local_1c);
      }
    }
  }
  DAT_01f20584 = uVar6;
  DAT_01f20580 = uVar3;
  __security_check_cookie(local_4 ^ (uint)local_84);
  return;
}

// 00FA35A0  Hw::cRenderTargetInfo::cRenderTargetInfo_3  size=101  [class]
void Hw::cRenderTargetInfo::cRenderTargetInfo_3(void)

{
  undefined **local_34;
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
  
  local_4 = DAT_018e8764 ^ (uint)&local_34;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_30 = 0;
  local_34 = vftable;
  local_2c = 1;
  FUN_00fa3400(&local_34,1);
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}

// 00FA6660  Hw::cRenderTargetInfo::cRenderTargetInfo_5  size=101  [class]
void Hw::cRenderTargetInfo::cRenderTargetInfo_5(void)

{
  undefined **local_34;
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
  
  local_4 = DAT_018e8764 ^ (uint)&local_34;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_30 = 0;
  local_34 = vftable;
  local_2c = 1;
  FUN_00fa5730(&local_34,1);
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}

// 00FA66D0  Hw::cRenderTargetInfo::cRenderTargetInfo_4  size=117  [class]
void Hw::cRenderTargetInfo::cRenderTargetInfo_4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_34;
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
  
  local_4 = DAT_018e8764 ^ (uint)&local_34;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_30 = param_1;
  local_10 = param_2;
  local_34 = vftable;
  local_2c = 1;
  local_8 = param_3;
  FUN_00fa5730(&local_34,param_4);
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}

// 00FA8B70  Hw::cRenderTargetInfo::vf00  size=31  [class]
undefined4 * __thiscall Hw::cRenderTargetInfo::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F4430  Hw::cRenderTargetInfo::cRenderTargetInfo_6  size=11  [class]
void Hw::cRenderTargetInfo::cRenderTargetInfo_6(void)

{
  PTR_vftable_018da6d0 = (undefined *)vftable;
  return;
}

