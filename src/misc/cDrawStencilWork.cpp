// src/misc/cDrawStencilWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A28F00..00A3D4D0, 16 functions

#include "mgrr.h"
#include "cDrawStencilWork.h"

// 00A28F00  FUN_00a28f00  size=976  [callgraph]
undefined4 FUN_00a28f00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2 * -0.5;
  fVar3 = param_2[1] * -0.5;
  fVar4 = param_2[2] * -0.5;
  fVar2 = -fVar1;
  *param_1 = fVar2;
  fVar6 = -fVar3;
  param_1[1] = fVar6;
  fVar5 = -fVar4;
  param_1[2] = fVar5;
  param_1[3] = fVar1;
  param_1[4] = fVar6;
  param_1[5] = fVar4;
  param_1[6] = fVar1;
  param_1[7] = fVar6;
  param_1[8] = fVar5;
  param_1[9] = *param_1;
  param_1[10] = param_1[1];
  param_1[0xb] = param_1[2];
  param_1[0xc] = fVar2;
  param_1[0xd] = fVar6;
  param_1[0xe] = fVar4;
  param_1[0xf] = param_1[3];
  param_1[0x10] = param_1[4];
  param_1[0x11] = param_1[5];
  param_1[0x12] = fVar2;
  param_1[0x13] = fVar3;
  param_1[0x14] = fVar5;
  param_1[0x15] = fVar1;
  param_1[0x16] = fVar3;
  param_1[0x17] = fVar5;
  param_1[0x18] = fVar1;
  param_1[0x19] = fVar3;
  param_1[0x1a] = fVar4;
  param_1[0x1b] = param_1[0x12];
  param_1[0x1c] = param_1[0x13];
  param_1[0x1d] = param_1[0x14];
  param_1[0x1e] = param_1[0x18];
  param_1[0x1f] = param_1[0x19];
  param_1[0x20] = param_1[0x1a];
  param_1[0x21] = fVar2;
  param_1[0x22] = fVar3;
  param_1[0x23] = fVar4;
  param_1[0x24] = param_1[0x12];
  param_1[0x25] = param_1[0x13];
  param_1[0x26] = param_1[0x14];
  param_1[0x27] = param_1[0x21];
  param_1[0x28] = param_1[0x22];
  param_1[0x29] = param_1[0x23];
  param_1[0x2a] = param_1[9];
  param_1[0x2b] = param_1[10];
  param_1[0x2c] = param_1[0xb];
  param_1[0x2d] = param_1[0x27];
  param_1[0x2e] = param_1[0x28];
  param_1[0x2f] = param_1[0x29];
  param_1[0x30] = param_1[0xc];
  param_1[0x31] = param_1[0xd];
  param_1[0x32] = param_1[0xe];
  param_1[0x33] = param_1[0x2a];
  param_1[0x34] = param_1[0x2b];
  param_1[0x35] = param_1[0x2c];
  param_1[0x36] = param_1[0x18];
  param_1[0x37] = param_1[0x19];
  param_1[0x38] = param_1[0x1a];
  param_1[0x39] = param_1[0x15];
  param_1[0x3a] = param_1[0x16];
  param_1[0x3b] = param_1[0x17];
  param_1[0x3c] = param_1[6];
  param_1[0x3d] = param_1[7];
  param_1[0x3e] = param_1[8];
  param_1[0x3f] = param_1[0x36];
  param_1[0x40] = param_1[0x37];
  param_1[0x41] = param_1[0x38];
  param_1[0x42] = param_1[0x3c];
  param_1[0x43] = param_1[0x3d];
  param_1[0x44] = param_1[0x3e];
  param_1[0x45] = param_1[3];
  param_1[0x46] = param_1[4];
  param_1[0x47] = param_1[5];
  param_1[0x48] = param_1[0x21];
  param_1[0x49] = param_1[0x22];
  param_1[0x4a] = param_1[0x23];
  param_1[0x4b] = param_1[0x18];
  param_1[0x4c] = param_1[0x19];
  param_1[0x4d] = param_1[0x1a];
  param_1[0x4e] = param_1[3];
  param_1[0x4f] = param_1[4];
  param_1[0x50] = param_1[5];
  param_1[0x51] = param_1[0x48];
  param_1[0x52] = param_1[0x49];
  param_1[0x53] = param_1[0x4a];
  param_1[0x54] = param_1[0x4e];
  param_1[0x55] = param_1[0x4f];
  param_1[0x56] = param_1[0x50];
  param_1[0x57] = param_1[0xc];
  param_1[0x58] = param_1[0xd];
  param_1[0x59] = param_1[0xe];
  param_1[0x5a] = param_1[0x12];
  param_1[0x5b] = param_1[0x13];
  param_1[0x5c] = param_1[0x14];
  param_1[0x5d] = param_1[6];
  param_1[0x5e] = param_1[7];
  param_1[0x5f] = param_1[8];
  param_1[0x60] = param_1[0x15];
  param_1[0x61] = param_1[0x16];
  param_1[0x62] = param_1[0x17];
  param_1[99] = param_1[0x5a];
  param_1[100] = param_1[0x5b];
  param_1[0x65] = param_1[0x5c];
  param_1[0x66] = param_1[9];
  param_1[0x67] = param_1[10];
  param_1[0x68] = param_1[0xb];
  param_1[0x69] = param_1[0x5d];
  param_1[0x6a] = param_1[0x5e];
  param_1[0x6b] = param_1[0x5f];
  return 0x24;
}

// 00A29350  cDrawStencilWork::vf04  size=109  [class]
void __fastcall cDrawStencilWork::vf04(int param_1)

{
  FUN_00f9de50(8,*(undefined1 *)(param_1 + 0x31),*(undefined1 *)(param_1 + 0x31));
  FUN_00f9df20(*(undefined1 *)(param_1 + 0x31));
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_00f9df20(*(undefined1 *)(param_1 + 0x32));
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    thunk_FUN_00fa05b0(0xffffffff);
    FUN_00f990e0(&PTR_vftable_018da4f0);
    FUN_00f98f80(&PTR_vftable_018da4c0);
    FUN_00f99010(0,param_1 + 4);
    FUN_00f9dfb0(4);
  }
  return;
}

// 00A29420  FUN_00a29420  size=147  [between]
void FUN_00a29420(void)

{
  DAT_01b83b90 = DAT_018da65c;
  DAT_01b83b8c = DAT_018da670;
  DAT_01b83b88 = DAT_018da674;
  DAT_01b83b84 = DAT_018da678;
  DAT_01b83b80 = DAT_018da66c;
  DAT_01b83b7c = DAT_018da67c;
  DAT_01b83b78 = DAT_018da680;
  DAT_01b83b74 = DAT_018da684;
  DAT_01b83b6c = DAT_018da63c;
  DAT_01b83b68 = DAT_018da644;
  DAT_01b83b64 = DAT_018da648;
  DAT_01b83b70 = DAT_018da688;
  DAT_01b83b60 = DAT_018da650;
  return;
}

// 00A294C0  FUN_00a294c0  size=135  [between]
void FUN_00a294c0(void)

{
  FUN_00f9d8f0(DAT_01b83b90);
  FUN_00f9d970(DAT_01b83b8c,DAT_01b83b88,DAT_01b83b84);
  FUN_00f9d930(DAT_01b83b80);
  FUN_00f9da00(DAT_01b83b7c,DAT_01b83b78,DAT_01b83b74);
  FUN_00f9d6e0(DAT_01b83b6c);
  FUN_00f9d760(DAT_01b83b68);
  FUN_00f9d7a0(DAT_01b83b64);
  FUN_00f9da50(DAT_01b83b70);
  FUN_00f9d850(DAT_01b83b60);
  return;
}

// 00A29550  FUN_00a29550  size=495  [between]
void FUN_00a29550(undefined4 param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float unaff_ESI;
  undefined4 uStack_114;
  undefined1 *puStack_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined1 auStack_fc [8];
  float local_f4;
  float local_f0;
  int local_ec;
  undefined1 local_d0 [20];
  undefined1 auStack_bc [12];
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  local_104 = 1.4930939e-38;
  local_f4 = (float)FUN_00f98a70();
  local_f0 = (float)(int)local_f4;
  local_104 = 1.4930963e-38;
  iVar1 = FUN_00f98a80();
  local_f4 = (float)iVar1;
  if ((param_4 == 0.0) && (param_5 == 0.0)) {
    local_104 = 0.0;
    local_108 = 1.4931051e-38;
    iVar1 = FUN_00f98ed0();
    param_4 = local_f0;
    param_5 = local_f4;
    if (iVar1 != 0) {
      local_104 = 0.0;
      local_108 = 1.4931082e-38;
      iVar1 = FUN_00fa0740();
      if (iVar1 == 0) {
        local_ec = 0;
      }
      else {
        local_ec = *(int *)(iVar1 + 8);
      }
      param_4 = (float)local_ec;
      if (local_ec < 0) {
        param_4 = param_4 + 4.2949673e+09;
      }
      local_104 = 0.0;
      local_108 = 1.4931139e-38;
      iVar1 = FUN_00fa0740();
      if (iVar1 == 0) {
        local_ec = 0;
      }
      else {
        local_ec = *(int *)(iVar1 + 0xc);
      }
      param_5 = (float)local_ec;
      if (local_ec < 0) {
        param_5 = param_5 + 4.2949673e+09;
      }
    }
  }
  local_10c = param_4 / local_f0;
  puStack_110 = local_d0;
  local_108 = param_5 / local_f4;
  local_104 = 1.0;
  uStack_114 = 0xa29639;
  D3DXMatrixScaling();
  fStack_b0 = param_2 / unaff_ESI;
  fStack_ac = param_3 / local_104;
  uStack_a8 = 0;
  uStack_114 = 0;
  D3DXMatrixScaling(auStack_60,0x3f800000,0xbf800000);
  uStack_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  D3DXMatrixMultiply(&local_f0,auStack_70,&local_f0);
  FUN_00ddcbb0(auStack_bc,0,0x3f800000,0x3f800000,0,0,0x3f800000);
  FUN_00f98d70(&uStack_114);
  fStack_8c = fStack_8c - 1.0 / (float)(int)local_10c;
  fStack_88 = 1.0 / (float)(int)local_108 + fStack_88;
  D3DXMatrixMultiply(param_1,auStack_fc,auStack_bc);
  return;
}

// 00A297B0  FUN_00a297b0  size=78  [between]
void FUN_00a297b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00fa0740(0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  iVar1 = FUN_00fa0740(0);
  if (iVar1 != 0) {
    FUN_00fa17a0(param_1,0,0,*(undefined4 *)(iVar1 + 8),uVar2);
    return;
  }
  FUN_00fa17a0(param_1,0,0,0,uVar2);
  return;
}

// 00A29800  FUN_00a29800  size=89  [between]
void __thiscall FUN_00a29800(int param_1,int param_2)

{
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00fa1d50(param_1 + 0x28,param_2);
  local_20 = 0.5 / (float)*(int *)(param_2 + 8);
  local_1c = 0.5 / (float)*(int *)(param_2 + 0xc);
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  FUN_00f9ec50(param_1 + 0x40,&local_20,4);
  return;
}

// 00A29880  FUN_00a29880  size=89  [between]
void __thiscall FUN_00a29880(int param_1,int param_2)

{
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00fa1d50(param_1 + 0x28,param_2);
  local_20 = 0.5 / (float)*(int *)(param_2 + 8);
  local_1c = 0.5 / (float)*(int *)(param_2 + 0xc);
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  FUN_00f9ec50(param_1 + 0x40,&local_20,4);
  return;
}

// 00A29900  FUN_00a29900  size=158  [between]
void __thiscall FUN_00a29900(int param_1,int param_2,int param_3,float param_4,float param_5)

{
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00fa1d50(param_1 + 0x28,param_2);
  FUN_00fa1d50(param_1 + 0x34,param_3);
  local_30 = 0.5 / (float)*(int *)(param_2 + 8);
  local_2c = 0.5 / (float)*(int *)(param_2 + 0xc);
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0.5 / (float)*(int *)(param_3 + 8);
  local_1c = 0.5 / (float)*(int *)(param_3 + 0xc);
  local_18 = param_4 / (float)*(int *)(param_3 + 8);
  local_14 = param_5 / (float)*(int *)(param_3 + 0xc);
  FUN_00f9ec50(param_1 + 0x4c,&local_30,4);
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  return;
}

// 00A299C0  FUN_00a299c0  size=89  [between]
void __thiscall FUN_00a299c0(int param_1,int param_2)

{
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00fa1d50(param_1 + 0x28,param_2);
  local_20 = 0.5 / (float)*(int *)(param_2 + 8);
  local_1c = 0.5 / (float)*(int *)(param_2 + 0xc);
  local_18 = 0x3f800000;
  local_14 = 0x3f800000;
  FUN_00f9ec50(param_1 + 0x40,&local_20,4);
  return;
}

// 00A29A40  FUN_00a29a40  size=112  [between]
void __thiscall FUN_00a29a40(int param_1,int param_2,int param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00fa1d50(param_1 + 0x28,param_2);
  FUN_00fa1d50(param_1 + 0x34,param_3);
  local_20 = 0.5 / (float)*(int *)(param_2 + 8);
  local_1c = 0.5 / (float)*(int *)(param_2 + 0xc);
  local_18 = 0.5 / (float)*(int *)(param_3 + 8);
  local_14 = 0.5 / (float)*(int *)(param_3 + 0xc);
  FUN_00f9ec50(param_1 + 0x4c,&local_20,4);
  return;
}

// 00A2A030  FUN_00a2a030  size=26  [between]
void FUN_00a2a030(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x40,param_2,&stack0x0000000c);
  return;
}

// 00A2A050  cDrawStencilWork::cDrawStencilWork_2  size=21  [class]
undefined4 * __fastcall cDrawStencilWork::cDrawStencilWork_2(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f9c880();
  return param_1;
}

// 00A33F80  FUN_00a33f80  size=341  [callgraph]
void FUN_00a33f80(void)

{
  int iVar1;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (DAT_01b83b98 != 0) {
    FUN_00fa5730(&DAT_01be66dc,1);
    FUN_00f98a50(DAT_01b83bac,DAT_01b83ba8);
    DAT_01b83bbc = DAT_01b83ba4;
    FUN_00a29420();
    FUN_00f9d8f0(1);
    FUN_00f9d970(5,6,1);
    FUN_00f9d930(0);
    FUN_00f9d6e0(1);
    FUN_00f9d760(0);
    FUN_00f9d7a0(0);
    FUN_00f9db30(0);
    FUN_00f9d850(1);
    FUN_00a29550(local_50,0,0,0,0);
    iVar1 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01be6610,iVar1);
    local_60 = 0.5 / (float)*(int *)(iVar1 + 8);
    local_5c = 0.5 / (float)*(int *)(iVar1 + 0xc);
    local_58 = 0x3f800000;
    local_54 = 0x3f800000;
    FUN_00f9ec50(&DAT_01be6628,&local_60,4);
    FUN_00f9eec0(&DAT_01be661c,local_50);
    FUN_00f990e0(&DAT_01be65e8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00a294c0();
    DAT_01bea088 = DAT_01bea088 & 0xff7fffff;
    DAT_01b83b98 = 0;
  }
  return;
}

// 00A341D0  cDrawStencilWork::vf00  size=39  [class]
undefined4 * __thiscall cDrawStencilWork::vf00(undefined4 *param_1,byte param_2)

{
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A3D4D0  cDrawStencilWork::cDrawStencilWork  size=1229  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cDrawStencilWork::cDrawStencilWork(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  int local_2f0;
  float *local_2ec;
  uint local_2e8;
  int local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined4 local_2a4;
  uint local_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float afStack_280 [3];
  float fStack_274;
  undefined4 uStack_270;
  float fStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  undefined4 uStack_258;
  float fStack_254;
  undefined1 auStack_d8 [8];
  undefined1 local_d0 [56];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [56];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  _DAT_01b83c34 = _DAT_01b83c34 + _DAT_0189f594;
  if (_DAT_01b83c34 <= 1.0) {
    if (_DAT_01b83c34 < 0.0) {
      _DAT_01b83c34 = 0.0;
    }
  }
  else {
    _DAT_01b83c34 = 1.0;
  }
  local_2f0._0_1_ = (undefined1)(int)ROUND(_DAT_01b83c34 * 255.0);
  local_294 = (uint)CONCAT11((undefined1)local_2f0,(undefined1)local_2f0) << 0x10 | 0xffff;
  local_2e4 = param_1;
  if (((byte)DAT_01b7b914 & 0x20) == 0) {
    local_2ec = (float *)(param_1 + 0xa4);
    local_2e8 = 0;
  }
  else {
    _DAT_0189f594 = _DAT_0189f594 * -1.0;
    local_2ec = (float *)(param_1 + 0xa4);
    local_2e8 = 0;
  }
  do {
    uVar4 = local_2e8;
    local_2a8 = 0.0;
    local_2ac = 0.0;
    local_2b0 = 0.0;
    local_2b4 = 0;
    local_2bc = 0;
    local_2c0 = 0;
    local_2c4 = 0;
    local_2c8 = 0;
    local_2d0 = 0;
    local_2d4 = 0;
    local_2d8 = 0;
    local_2dc = 0;
    local_2a4 = 0x3f800000;
    local_2b8 = 0x3f800000;
    local_2cc = 0x3f800000;
    local_2e0 = 0x3f800000;
    if (local_2ec[1] != 0.0) {
      D3DXMatrixRotationZ(local_50,local_2ec[1]);
      D3DXMatrixMultiply(&local_2e8,auStack_58,&local_2e8);
    }
    if (*local_2ec != 0.0) {
      D3DXMatrixRotationY(local_d0,*local_2ec);
      D3DXMatrixMultiply(&local_2e8,auStack_d8,&local_2e8);
    }
    if (local_2ec[-1] != 0.0) {
      D3DXMatrixRotationX(auStack_90,local_2ec[-1]);
      D3DXMatrixMultiply(&local_2e8,auStack_98,&local_2e8);
    }
    local_2b0 = local_2ec[-0x21];
    iVar7 = *(int *)(param_1 + uVar4 * 4);
    local_2ac = local_2ec[-0x20];
    local_2a8 = local_2ec[-0x1f];
    if (iVar7 == 1) {
      local_2f0 = FUN_00a28f00(afStack_280,local_2ec + 0x1f);
      if (local_2f0 != 0) {
LAB_00a3d6d5:
        pfVar6 = afStack_280;
        iVar7 = local_2f0;
        do {
          D3DXVec3TransformNormal(pfVar6,pfVar6,&local_2e0);
          iVar7 = iVar7 + -1;
          *pfVar6 = *pfVar6 + local_2b0;
          pfVar6[1] = local_2ac + pfVar6[1];
          pfVar6[2] = local_2a8 + pfVar6[2];
          pfVar6 = pfVar6 + 3;
        } while (iVar7 != 0);
      }
      if ((DAT_01edd490 == 0) ||
         (puVar5 = (undefined4 *)cPrimHeap::allocBuffer(0x34,0x20), puVar5 == (undefined4 *)0x0)) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = vftable;
        FUN_00f9c880();
      }
      uVar1 = *(undefined1 *)(param_1 + local_2e8 * 4);
      cVar2 = *(char *)(param_1 + 0x1c8);
      iVar7 = FUN_00f9cae0(0xc,local_2f0,DAT_01edd494);
      if (iVar7 != 0) {
        FUN_00f99d50(afStack_280,0xc,local_2f0);
        puVar5[0xb] = local_294;
        *(char *)((int)puVar5 + 0x31) = cVar2;
        *(char *)((int)puVar5 + 0x32) = cVar2;
        *(undefined1 *)(puVar5 + 0xc) = uVar1;
        FUN_00f9aea0(1,0x18,1,cVar2 == '\0',&LAB_00f97db0,puVar5);
      }
      param_1 = local_2e4;
      if (*(int *)(local_2e4 + local_2e8 * 4) == 1) {
        fStack_290 = local_2ec[0x1f] * -1.0;
        fStack_28c = local_2ec[0x20] * -1.0;
        fStack_288 = local_2ec[0x21] * -1.0;
        fStack_284 = local_2ec[0x22] * -1.0;
        FUN_00a28f00(afStack_280,&fStack_290);
        iVar7 = 6;
        pfVar6 = afStack_280;
        do {
          D3DXVec3TransformNormal(pfVar6,pfVar6,&local_2e0);
          iVar7 = iVar7 + -1;
          *pfVar6 = *pfVar6 + local_2b0;
          pfVar6[1] = local_2ac + pfVar6[1];
          pfVar6[2] = pfVar6[2] + local_2a8;
          pfVar6 = pfVar6 + 3;
        } while (iVar7 != 0);
        if ((DAT_01edd490 == 0) ||
           (puVar5 = (undefined4 *)cPrimHeap::allocBuffer(0x34,0x20), puVar5 == (undefined4 *)0x0))
        {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = vftable;
          FUN_00f9c880();
        }
        uVar1 = *(undefined1 *)(param_1 + 0x1c8);
        uVar3 = *(undefined1 *)(param_1 + local_2e8 * 4);
        iVar7 = FUN_00f9cae0(0xc,6,DAT_01edd494);
        if (iVar7 != 0) {
          FUN_00f99d50(afStack_280,0xc,6);
          *(undefined1 *)((int)puVar5 + 0x31) = 0;
          *(undefined1 *)((int)puVar5 + 0x32) = uVar1;
          *(undefined1 *)(puVar5 + 0xc) = uVar3;
          puVar5[0xb] = 0xffffffff;
          FUN_00f9aea0(1,0x18,1,1,&LAB_00f97db0,puVar5);
        }
      }
    }
    else if (iVar7 == 2) {
      local_2f0 = 4;
      fStack_274 = local_2ec[0x1f] * -0.5;
      fStack_260 = local_2ec[0x21] * -0.5;
      afStack_280[0] = -fStack_274;
      afStack_280[1] = 0.0;
      afStack_280[2] = -fStack_260;
      uStack_270 = 0;
      uStack_264 = 0;
      uStack_258 = 0;
      fStack_26c = afStack_280[2];
      fStack_268 = afStack_280[0];
      fStack_25c = fStack_274;
      fStack_254 = fStack_260;
      goto LAB_00a3d6d5;
    }
    local_2e8 = local_2e8 + 1;
    local_2ec = local_2ec + 4;
    if (7 < local_2e8) {
      return;
    }
  } while( true );
}

