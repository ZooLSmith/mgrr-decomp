// src/misc/cFilter.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBDF20..00EC2D70, 5 functions

#include "mgrr.h"
#include "cFilter.h"

// 00EBDF20  cFilter::vf04  size=4316  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cFilter::vf04(undefined *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined1 auStack_174 [4];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined *local_154;
  undefined *local_150;
  undefined *local_14c;
  undefined *local_148;
  undefined *local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined *local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_174;
  local_124 = param_1;
  iVar3 = FUN_0043ff60(7);
  if (iVar3 != 0) goto LAB_00ebefd6;
  uVar4 = FUN_00f98ed0(0);
  local_e4 = uVar4;
  FUN_00a28210(&DAT_01be08e0,0,0,1);
  local_11c = *(undefined4 *)(param_1 + 0x74);
  local_114 = *(undefined4 *)(param_1 + 0x7c);
  local_120 = *(float *)(param_1 + 0x3c) * (_DAT_018d5df0 + _DAT_018d5df0);
  local_118 = (_DAT_018d5df0 + _DAT_018d5df0) * *(float *)(param_1 + 0x78);
  local_100 = 0x3f800000;
  local_fc = 0x3f800000;
  local_f8 = 0x3f800000;
  local_f4 = 0x3f800000;
  local_110 = 0x3f800000;
  local_10c = 0x3f800000;
  local_108 = 0x3f800000;
  local_104 = 1.0 - *(float *)(param_1 + 0x4c);
  iVar3 = FUN_00f99540(0xba,&local_100,4);
  if (iVar3 == 0) {
    _DAT_01f13270 = local_100;
    _DAT_01f13274 = local_fc;
    _DAT_01f13278 = local_f8;
    _DAT_01f1327c = local_f4;
    FUN_00f99620(0xba,&DAT_01f13270,4);
  }
  iVar3 = FUN_00f99540(0xbb,&local_110,4);
  if (iVar3 == 0) {
    _DAT_01f13280 = local_110;
    _DAT_01f13284 = local_10c;
    _DAT_01f13288 = local_108;
    _DAT_01f1328c = local_104;
    FUN_00f99620(0xbb,&DAT_01f13280,4);
  }
  local_140 = 0x3acccccd;
  local_13c = 0x3b3a2e8c;
  local_138 = 0x3acccccd;
  local_134 = 0x3acccccd;
  iVar3 = FUN_00f99540(0xb9,&local_140,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_140;
    DAT_01f13264 = local_13c;
    DAT_01f13268 = local_138;
    DAT_01f1326c = local_134;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00eae450(uVar4,&local_120,&local_170,&local_170,0,0,0x43a00000,0x43300000);
  uVar2 = DAT_018da674;
  uVar1 = DAT_018da670;
  uVar4 = DAT_018da65c;
  if ((DAT_01eddad8 & 1) == 0) {
    DAT_01eddad8 = DAT_01eddad8 | 1;
    _DAT_01eddac8 = 0x3f800000;
    _DAT_01eddacc = 0x3f800000;
    _DAT_01eddad0 = 0x3f800000;
    _DAT_01eddad4 = 0x3f666666;
  }
  if (DAT_01eddac4 != 0) {
    if (DAT_018d5e58 == 0) {
      if (DAT_01edab78 != 0) {
        local_148 = DAT_018da678;
        FUN_00f9d8f0(1);
        FUN_00f9d970(5,2,1);
        local_154 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_150 = DAT_018da644;
        FUN_00f9d760(0);
        local_14c = DAT_018da648;
        FUN_00f9d7a0(0);
        local_144 = DAT_018da688;
        FUN_00f9db30(1);
        FUN_00eadf00(local_a0,local_e0,0,0,0x43a00000,0x43300000,1);
        FUN_00f9ea50(&DAT_01edcd64,&DAT_01eddac8,4);
        D3DXMatrixMultiply(local_60,local_e0,local_a0);
        FUN_00f9ee50(&DAT_01edcd58,local_60);
        uVar8 = 2;
        iVar3 = 2;
        if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
          uVar8 = 3;
          iVar3 = 3;
        }
        uVar5 = DAT_01edcd78 ^ (iVar3 << 8 ^ DAT_01edcd78) & 0xf00;
        DAT_01edcd78 = (uVar5 ^ (uVar8 ^ uVar5) & 0xf) & 0xffffff2f | 0x20;
        uVar6 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcd70,uVar6);
        local_170 = 0x3f800000;
        uStack_16c = 0x3f800000;
        uStack_168 = 0x3f800000;
        uStack_164 = _DAT_01eddad4;
        iVar3 = FUN_00f99540(0xb9,&local_170,4);
        if (iVar3 == 0) {
          DAT_01f13260 = local_170;
          DAT_01f13264 = uStack_16c;
          DAT_01f13268 = uStack_168;
          DAT_01f1326c = uStack_164;
          FUN_00f99620(0xb9,&DAT_01f13260,4);
        }
        FUN_00f990e0(&DAT_01edcb50);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar4);
        FUN_00f9d970(uVar1,uVar2,local_148);
        FUN_00f9d6e0(local_154);
        FUN_00f9d760(local_150);
        FUN_00f9d7a0(local_14c);
        puVar7 = local_144;
LAB_00ebe5f4:
        FUN_00f9da50(puVar7);
      }
    }
    else if (DAT_01edab78 != 0) {
      local_144 = DAT_018da678;
      FUN_00f9d8f0(1);
      FUN_00f9d970(5,2,1);
      local_14c = DAT_018da63c;
      FUN_00f9d6e0(1);
      local_150 = DAT_018da644;
      FUN_00f9d760(0);
      local_154 = DAT_018da648;
      FUN_00f9d7a0(0);
      local_148 = DAT_018da688;
      FUN_00f9db30(1);
      FUN_00eadf00(local_60,local_e0,0,0,0x43a00000,0x43300000,1);
      FUN_00f9ea50(&DAT_01edcd64,&DAT_01eddac8,4);
      D3DXMatrixMultiply(local_a0,local_e0,local_60);
      FUN_00f9ee50(&DAT_01edcd58,local_a0);
      uVar8 = 2;
      iVar3 = 2;
      if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
        uVar8 = 3;
        iVar3 = 3;
      }
      uVar5 = DAT_01edcd78 ^ (iVar3 << 8 ^ DAT_01edcd78) & 0xf00;
      DAT_01edcd78 = (uVar5 ^ (uVar8 ^ uVar5) & 0xf) & 0xffffff2f | 0x20;
      uVar6 = FUN_00fa0740(0);
      FUN_00fa1d50(&DAT_01edcd70,uVar6);
      local_170 = 0x3f800000;
      uStack_16c = 0x3f800000;
      uStack_168 = 0x3f800000;
      uStack_164 = _DAT_01eddad4;
      iVar3 = FUN_00f99540(0xb9,&local_170,4);
      if (iVar3 == 0) {
        DAT_01f13260 = local_170;
        DAT_01f13264 = uStack_16c;
        DAT_01f13268 = uStack_168;
        DAT_01f1326c = uStack_164;
        FUN_00f99620(0xb9,&DAT_01f13260,4);
      }
      FUN_00f990e0(&DAT_01edcb50);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f9dfb0(5);
      FUN_00f9d8f0(uVar4);
      FUN_00f9d970(uVar1,uVar2,local_144);
      FUN_00f9d6e0(local_14c);
      FUN_00f9d760(local_150);
      FUN_00f9d7a0(local_154);
      puVar7 = local_148;
      goto LAB_00ebe5f4;
    }
  }
  FUN_00eb0a90(0,&DAT_01be0930 + (uint)DAT_018d5e58 * 0x50,0x140,0xb0,0);
  local_140 = 0x3bcccccd;
  local_13c = 0x3c2aaaab;
  local_138 = 0x3acccccd;
  local_134 = 0xbb3a2e8c;
  iVar3 = FUN_00f99540(0xb9,&local_140,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_140;
    DAT_01f13264 = local_13c;
    DAT_01f13268 = local_138;
    DAT_01f1326c = local_134;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00eb0a90(&DAT_01be0930 + (uint)DAT_018d5e58 * 0x50,&DAT_01be0a20,0x50,0x30,0);
  local_140 = 0x3c2aaaab;
  local_13c = 0x3c800000;
  local_138 = 0;
  local_134 = 0x3b3a2e8c;
  iVar3 = FUN_00f99540(0xb9,&local_140,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_140;
    DAT_01f13264 = local_13c;
    DAT_01f13268 = local_138;
    DAT_01f1326c = local_134;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00eb0a90(&DAT_01be0930 + (uint)DAT_018d5e58 * 0x50,&DAT_01be0a70,0x30,0x20,1);
  local_140 = 0x3c2aaaab;
  local_13c = 0x3c800000;
  local_138 = 0x3acccccd;
  local_134 = 0;
  iVar3 = FUN_00f99540(0xb9,&local_140,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_140;
    DAT_01f13264 = local_13c;
    DAT_01f13268 = local_138;
    DAT_01f1326c = local_134;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00eb0a90(&DAT_01be0930 + (uint)DAT_018d5e58 * 0x50,&DAT_01be0a70,0x30,0x20,2);
  uVar2 = DAT_018da674;
  uVar1 = DAT_018da670;
  uVar4 = DAT_018da65c;
  if ((DAT_01eddad8 & 2) == 0) {
    _DAT_01eddab4 = 0x3f800000;
    DAT_01eddad8 = DAT_01eddad8 | 2;
    _DAT_01eddab8 = 0x3f800000;
    _DAT_01eddabc = 0x3f800000;
    _DAT_01eddac0 = 0x3f4ccccd;
  }
  if ((DAT_01eddad8 & 4) == 0) {
    DAT_01eddad8 = DAT_01eddad8 | 4;
    _DAT_01eddaa4 = 0x3f800000;
    _DAT_01eddaa8 = 0x3f800000;
    _DAT_01eddaac = 0x3f800000;
    _DAT_01eddab0 = 0x3ecccccd;
  }
  if ((DAT_01eddad8 & 8) == 0) {
    _DAT_01edda94 = 0x3ecccccd;
    DAT_01eddad8 = DAT_01eddad8 | 8;
    _DAT_01edda98 = 0x3ecccccd;
    _DAT_01edda9c = 0x3ecccccd;
    _DAT_01eddaa0 = 0x3f800000;
  }
  if ((DAT_01eddad8 & 0x10) == 0) {
    _DAT_01edda84 = 0x3ecccccd;
    DAT_01eddad8 = DAT_01eddad8 | 0x10;
    _DAT_01edda88 = 0x3ecccccd;
    _DAT_01edda8c = 0x3ecccccd;
    _DAT_01edda90 = 0x3f800000;
  }
  if ((DAT_01eddad8 & 0x20) == 0) {
    DAT_01eddad8 = DAT_01eddad8 | 0x20;
    _DAT_01edda74 = 0x3f800000;
    _DAT_01edda78 = 0x3f800000;
    _DAT_01edda7c = 0x3f800000;
    _DAT_01edda80 = 0x3ecccccd;
  }
  local_144 = &DAT_01be0930 + (uint)DAT_018d5e58 * 0x50;
  if (DAT_01edab78 != 0) {
    local_14c = DAT_018da678;
    FUN_00f9d8f0(0);
    local_150 = DAT_018da63c;
    FUN_00f9d6e0(1);
    local_154 = DAT_018da644;
    FUN_00f9d760(0);
    local_148 = DAT_018da648;
    FUN_00f9d7a0(0);
    local_124 = DAT_018da688;
    FUN_00f9db30(1);
    FUN_00eadf00(local_60,local_e0,0,0,0x43a00000,0x43300000,1);
    FUN_00f9ea50(&DAT_01edcd64,&DAT_01eddaa4,4);
    D3DXMatrixMultiply(local_a0,local_e0,local_60);
    FUN_00f9ee50(&DAT_01edcd58,local_a0);
    uVar8 = 2;
    iVar3 = 2;
    if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
      uVar8 = 3;
      iVar3 = 3;
    }
    DAT_01edcd78 = iVar3 << 8 | uVar8 | DAT_01edcd78 & 0xfffff020 | 0x20;
    uVar6 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edcd70,uVar6);
    local_170 = 0x3f800000;
    uStack_16c = 0x3f800000;
    uStack_168 = 0x3f800000;
    uStack_164 = _DAT_01eddab0;
    iVar3 = FUN_00f99540(0xb9,&local_170,4);
    if (iVar3 == 0) {
      DAT_01f13260 = local_170;
      DAT_01f13264 = uStack_16c;
      DAT_01f13268 = uStack_168;
      DAT_01f1326c = uStack_164;
      FUN_00f99620(0xb9,&DAT_01f13260,4);
    }
    FUN_00f990e0(&DAT_01edcb50);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(uVar4);
    FUN_00f9d970(uVar1,uVar2,local_14c);
    FUN_00f9d6e0(local_150);
    FUN_00f9d760(local_154);
    FUN_00f9d7a0(local_148);
    FUN_00f9da50(local_124);
    uVar2 = DAT_018da674;
    uVar1 = DAT_018da670;
    uVar4 = DAT_018da65c;
    if (DAT_01edab78 != 0) {
      local_144 = DAT_018da678;
      FUN_00f9d8f0(1);
      FUN_00f9d970(5,2,1);
      local_14c = DAT_018da63c;
      FUN_00f9d6e0(1);
      local_150 = DAT_018da644;
      FUN_00f9d760(0);
      local_154 = DAT_018da648;
      FUN_00f9d7a0(0);
      local_148 = DAT_018da688;
      FUN_00f9db30(1);
      FUN_00eadf00(local_60,local_e0,0,0,0x43a00000,0x43300000,1);
      FUN_00f9ea50(&DAT_01edcd64,&DAT_01edda94,4);
      D3DXMatrixMultiply(local_a0,local_e0,local_60);
      FUN_00f9ee50(&DAT_01edcd58,local_a0);
      uVar8 = 2;
      iVar3 = 2;
      if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
        uVar8 = 3;
        iVar3 = 3;
      }
      DAT_01edcd78 = iVar3 << 8 | uVar8 | DAT_01edcd78 & 0xfffff020 | 0x20;
      uVar6 = FUN_00fa0740(0);
      FUN_00fa1d50(&DAT_01edcd70,uVar6);
      local_170 = 0x3f800000;
      uStack_16c = 0x3f800000;
      uStack_168 = 0x3f800000;
      uStack_164 = _DAT_01eddaa0;
      iVar3 = FUN_00f99540(0xb9,&local_170,4);
      if (iVar3 == 0) {
        DAT_01f13260 = local_170;
        DAT_01f13264 = uStack_16c;
        DAT_01f13268 = uStack_168;
        DAT_01f1326c = uStack_164;
        FUN_00f99620(0xb9,&DAT_01f13260,4);
      }
      FUN_00f990e0(&DAT_01edcb50);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f9dfb0(5);
      FUN_00f9d8f0(uVar4);
      FUN_00f9d970(uVar1,uVar2,local_144);
      FUN_00f9d6e0(local_14c);
      FUN_00f9d760(local_150);
      FUN_00f9d7a0(local_154);
      FUN_00f9da50(local_148);
      uVar2 = DAT_018da674;
      uVar1 = DAT_018da670;
      uVar4 = DAT_018da65c;
      if (DAT_01edab78 != 0) {
        local_144 = DAT_018da678;
        FUN_00f9d8f0(1);
        FUN_00f9d970(5,2,1);
        local_14c = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_150 = DAT_018da644;
        FUN_00f9d760(0);
        local_154 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_148 = DAT_018da688;
        FUN_00f9db30(1);
        FUN_00eadf00(local_60,local_e0,0,0,0x43a00000,0x43300000,1);
        FUN_00f9ea50(&DAT_01edcd64,&DAT_01edda84,4);
        D3DXMatrixMultiply(local_a0,local_e0,local_60);
        FUN_00f9ee50(&DAT_01edcd58,local_a0);
        uVar8 = 2;
        iVar3 = 2;
        if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
          uVar8 = 3;
          iVar3 = 3;
        }
        uVar5 = DAT_01edcd78 ^ (iVar3 << 8 ^ DAT_01edcd78) & 0xf00;
        DAT_01edcd78 = (uVar5 ^ (uVar8 ^ uVar5) & 0xf) & 0xffffff2f | 0x20;
        uVar6 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcd70,uVar6);
        local_170 = 0x3f800000;
        uStack_16c = 0x3f800000;
        uStack_168 = 0x3f800000;
        uStack_164 = _DAT_01edda90;
        iVar3 = FUN_00f99540(0xb9,&local_170,4);
        if (iVar3 == 0) {
          DAT_01f13260 = local_170;
          DAT_01f13264 = uStack_16c;
          DAT_01f13268 = uStack_168;
          DAT_01f1326c = uStack_164;
          FUN_00f99620(0xb9,&DAT_01f13260,4);
        }
        FUN_00f990e0(&DAT_01edcb50);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar4);
        FUN_00f9d970(uVar1,uVar2,local_144);
        FUN_00f9d6e0(local_14c);
        FUN_00f9d760(local_150);
        FUN_00f9d7a0(local_154);
        FUN_00f9da50(local_148);
      }
    }
  }
  FUN_00a33150();
  DAT_018d1f70 = 1;
  if ((DAT_018d1f74 != 0) && (iVar3 = FUN_00e6b900(), iVar3 == 3)) {
    FUN_00a28210(local_e4,0,0,1);
    FUN_00eb9070(DAT_01b83bbc,1);
    FUN_00eb8190(DAT_01b83bbc,DAT_01b83c2c);
  }
LAB_00ebefd6:
  FUN_00f9d6e0(3);
  FUN_00f9d760(1);
  __security_check_cookie(local_14 ^ (uint)auStack_174);
  return;
}

// 00EBF000  FUN_00ebf000  size=492  [callgraph]
void __fastcall FUN_00ebf000(undefined4 *param_1)

{
  FUN_00dd7240();
  if (param_1[0x16a] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x164));
  }
  param_1[2] = 0;
  *param_1 = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[1] = 1;
  param_1[5] = 0;
  param_1[4] = 1;
  param_1[6] = 0xffffffff;
  param_1[8] = 0;
  param_1[7] = 1;
  param_1[9] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[10] = 1;
  param_1[0xc] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xd] = 1;
  param_1[0xf] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x10] = 1;
  param_1[0x12] = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x13] = 1;
  param_1[0x15] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x16] = 1;
  param_1[0x1a4] = 0xffffffff;
  param_1[0x1a7] = 0xffffffff;
  param_1[0x1a6] = 0;
  param_1[0x1a5] = 1;
  param_1[0x1a9] = 0;
  param_1[0x1a8] = 1;
  param_1[0x1aa] = 0xffffffff;
  param_1[0x1ac] = 0;
  param_1[0x1ab] = 1;
  param_1[0x1ad] = 0xffffffff;
  param_1[0x1af] = 0;
  param_1[0x1ae] = 1;
  param_1[0x1b0] = 0xffffffff;
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 1;
  param_1[0x1b3] = 0xffffffff;
  param_1[0x1b5] = 0;
  param_1[0x1b4] = 1;
  param_1[0x1b6] = 0xffffffff;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 1;
  param_1[0x1b9] = 0xffffffff;
  param_1[0x1bb] = 0;
  param_1[0x1ba] = 1;
  param_1[0x1bc] = 0xffffffff;
  param_1[0x1bf] = 0xffffffff;
  param_1[0x1be] = 0;
  param_1[0x1bd] = 1;
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 1;
  param_1[0x1c2] = 0xffffffff;
  param_1[0x1c4] = 0;
  param_1[0x1c3] = 1;
  param_1[0x1c5] = 0xffffffff;
  param_1[0x1c7] = 0;
  param_1[0x1c6] = 1;
  param_1[0x1c8] = 0xffffffff;
  param_1[0x1ca] = 0;
  param_1[0x1c9] = 1;
  param_1[0x1cb] = 0xffffffff;
  param_1[0x1cd] = 0;
  param_1[0x1cc] = 1;
  param_1[0x1ce] = 0xffffffff;
  param_1[0x1d0] = 0;
  param_1[0x1cf] = 1;
  param_1[0x1d1] = 0xffffffff;
  param_1[0x1d3] = 0;
  param_1[0x1d2] = 1;
  FUN_00a2a8a0();
  FUN_00a2a8a0();
  param_1[0x110e] = 0;
  param_1[0x110c] = 0x3f000000;
  param_1[0x110d] = 0x40000000;
  FUN_00eae820();
  param_1[0x11f] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  if (param_1[0x16a] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x164));
  }
  return;
}

// 00EBF1F0  FUN_00ebf1f0  size=185  [callgraph]
void __thiscall FUN_00ebf1f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4444) == 0) {
    if (*(int *)(param_1 + 0x4448) == 0) {
      if (*(int *)(param_1 + 100) == 0) {
        return;
      }
      FUN_00ec3380(param_1 + 0x1180);
      uVar1 = *(undefined4 *)(param_1 + 100);
      uVar2 = *(undefined4 *)(param_1 + 0x70);
      goto LAB_00ebf280;
    }
LAB_00ebf239:
    if (*(int *)(param_1 + 0x4448) != 0) {
      if (*(int *)(param_1 + 0x6c) == 0) {
        return;
      }
      FUN_00ec3380(param_1 + 0x1180);
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
      uVar2 = *(undefined4 *)(param_1 + 0x78);
      goto LAB_00ebf280;
    }
  }
  else if ((*(int *)(param_1 + 0x4448) != 0) && (*(int *)(param_1 + 0x4444) == 0))
  goto LAB_00ebf239;
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  FUN_00ec3380(param_1 + 0x1180);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar1 = *(undefined4 *)(param_1 + 0x68);
LAB_00ebf280:
  FUN_00ec37b0(uVar2,uVar1);
  *(undefined4 *)(param_1 + 0x4420) = 0;
  *(undefined4 *)(param_1 + 0x4424) = 0;
  *(undefined4 *)(param_1 + 0x4428) = param_2;
  return;
}

// 00EC1FD0  cFilter::cFilter  size=406  [class]
void __thiscall cFilter::cFilter(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1[0x18] == 0) {
    piVar1 = (int *)FUN_00dd3500(0x80,&DAT_01b7bd48);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = (int)vftable;
    }
    param_1[0x18] = (int)piVar1;
    (**(code **)(*piVar1 + 8))(param_2);
  }
  FUN_00a2a8a0();
  FUN_00a2a8a0();
  FUN_00a2a8a0();
  param_1[0x1108] = 0;
  param_1[0x1109] = -0x40800000;
  param_1[0x110a] = -0x40800000;
  param_1[0x1111] = 0;
  param_1[0x1112] = 0;
  param_1[0x19] = 0;
  param_1[0x1119] = 0;
  param_1[0x1a] = 0;
  param_1[0x111a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1120] = 0x42200000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1121] = 0x42c80000;
  param_1[0x110f] = 1;
  param_1[0x1110] = 1;
  param_1[0x1122] = 0x40a00000;
  param_1[0x1114] = -1;
  param_1[0x1115] = -1;
  param_1[0x1123] = 0;
  param_1[0x111d] = 0;
  param_1[0x111b] = 0;
  param_1[0x111c] = 0;
  FUN_00ec1b70(0,0,0,0,0,0,0);
  if (param_1[0x1113] == 0) {
    FUN_00ebf1f0(0x3f800000);
  }
  param_1[0x1113] = 1;
  param_1[0x1d4] = 0x534c46;
  param_1[0x1d5] = 1;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0x10;
  uVar2 = 0;
  piVar1 = param_1;
  do {
    if (*piVar1 == -1) {
      piVar1 = param_1 + uVar2 * 3;
      piVar1[1] = 1;
      *piVar1 = 0xfffe;
      piVar1[2] = (int)(param_1 + 0x1d4);
      param_1[0x11f] = 0;
      return;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 3;
  } while (uVar2 < 8);
  FUN_00dd5650(&DAT_016d4528);
  param_1[0x11f] = 0;
  return;
}

// 00EC2D70  cFilter::vf00  size=31  [class]
undefined4 * __thiscall cFilter::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

