// src/effect/cEspDrawWork30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EF2FE0..00F3FA00, 2 functions

#include "types.h"

// 00EF2FE0  cEspDrawWork30::vf04  size=704  [class]
void __fastcall cEspDrawWork30::vf04(int param_1)

{
  void *_Src;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 auStack_a8 [8];
  undefined1 local_a0 [48];
  undefined1 auStack_70 [16];
  undefined1 local_60 [48];
  uint uStack_30;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_a8;
  cEspDrawWork::vf04();
  _Src = (void *)(param_1 + 0x40);
  puStack_c0 = (undefined1 *)0xef3013;
  FID_conflict__memcpy(local_60,_Src,0x40);
  if (*(float *)(param_1 + 0xd0) < 0.0) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef3043;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
  }
  if (0.0 < *(float *)(param_1 + 0xd0)) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef3087;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
  }
  if (*(float *)(param_1 + 0xd4) < 0.0) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef30cb;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
  }
  if (0.0 < *(float *)(param_1 + 0xd4)) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef310f;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
  }
  if ((*(float *)(param_1 + 0xd0) < 0.0) && (*(float *)(param_1 + 0xd4) < 0.0)) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef3160;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
  }
  if ((*(float *)(param_1 + 0xd0) < 0.0) && (0.0 < *(float *)(param_1 + 0xd4))) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef31b7;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
  }
  if ((0.0 < *(float *)(param_1 + 0xd0)) && (*(float *)(param_1 + 0xd4) < 0.0)) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef320e;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
  }
  if ((0.0 < *(float *)(param_1 + 0xd0)) && (0.0 < *(float *)(param_1 + 0xd4))) {
    puStack_c0 = local_a0;
    puStack_c4 = (undefined1 *)0xef325f;
    D3DXMatrixTranslation();
    puStack_c4 = &stack0xffffff50;
    D3DXMatrixMultiply(_Src,auStack_70);
    cEspDrawWork::vf04();
    __security_check_cookie(uStack_30 ^ (uint)&puStack_c4);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_a8);
  return;
}

// 00F3FA00  cEspDrawWork30::vf00  size=31  [class]
undefined4 * __thiscall cEspDrawWork30::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

