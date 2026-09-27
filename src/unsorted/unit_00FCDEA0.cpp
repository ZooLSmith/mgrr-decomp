// src/unsorted/unit_00FCDEA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FCDEA0..00FDA250, 361 functions

#include "mgrr.h"

// 00FCDEA0  FUN_00fcdea0  size=76  [run]
void __thiscall FUN_00fcdea0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_2 & 0x1f) == 0) {
    puVar1 = (uint *)(param_1 + 0x900);
    iVar2 = 8;
    do {
      if ((*puVar1 == (param_2 & 0x5fff0 | 0xa0000) >> 4) && (*puVar1 = 0xffffffff, puVar1[3] != 0))
      {
        FUN_00f972f0();
      }
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00FCDF50  FUN_00fcdf50  size=57  [run]
void __fastcall FUN_00fcdf50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  return;
}

// 00FCDF90  FUN_00fcdf90  size=34  [run]
void __fastcall FUN_00fcdf90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FCDFC0  FUN_00fcdfc0  size=74  [run]
void __fastcall FUN_00fcdfc0(int param_1)

{
  FUN_00f9ea50(param_1 + 0x34,&stack0x00000004,1);
  FUN_00f9ea50(param_1 + 0x40,&stack0x00000008,1);
  FUN_00f9ea50(param_1 + 0x4c,&stack0x0000000c,1);
  FUN_00f9ea50(param_1 + 0x58,&stack0x00000010,1);
  return;
}

// 00FCE010  FUN_00fce010  size=103  [run]
void __fastcall FUN_00fce010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x34,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x40,uVar1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x4c,uVar1);
  return;
}

// 00FCE080  FUN_00fce080  size=25  [run]
void __thiscall FUN_00fce080(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x58,param_2,4);
  return;
}

// 00FCE0A0  FUN_00fce0a0  size=59  [run]
void __thiscall FUN_00fce0a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00f9ea50(param_1 + 100,param_2,1);
  FUN_00f9ea50(param_1 + 0x70,param_3,1);
  FUN_00f9ea50(param_1 + 0x7c,param_4,1);
  return;
}

// 00FCE0E0  FUN_00fce0e0  size=34  [run]
void __fastcall FUN_00fce0e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FCE110  FUN_00fce110  size=25  [run]
void __fastcall FUN_00fce110(int param_1)

{
  FUN_00f9ea50(param_1 + 0x34,&stack0x00000004,1);
  return;
}

// 00FCE130  FUN_00fce130  size=34  [run]
void __fastcall FUN_00fce130(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FCE160  FUN_00fce160  size=34  [run]
void __fastcall FUN_00fce160(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FCE190  FUN_00fce190  size=34  [run]
void __fastcall FUN_00fce190(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FCE1C0  FUN_00fce1c0  size=77  [run]
undefined4 __fastcall FUN_00fce1c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00fa0740(0);
  iVar2 = FUN_00fa1d50(param_1 + 0x28,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_00fa0740(0);
    iVar2 = FUN_00fa1d50(param_1 + 0x34,uVar1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00FCE210  FUN_00fce210  size=34  [run]
void __fastcall FUN_00fce210(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FCE240  FUN_00fce240  size=104  [run]
undefined4 __fastcall FUN_00fce240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00fa0740(0);
  iVar2 = FUN_00fa1d50(param_1 + 0x28,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_00fa0740(0);
    iVar2 = FUN_00fa1d50(param_1 + 0x34,uVar1);
    if (iVar2 != 0) {
      uVar1 = FUN_00fa0740(0);
      iVar2 = FUN_00fa1d50(param_1 + 0x40,uVar1);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00FCE2B0  FUN_00fce2b0  size=34  [run]
void __fastcall FUN_00fce2b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00fa0740(0);
  FUN_00fa1d50(param_1 + 0x28,uVar1);
  return;
}

// 00FCE2E0  FUN_00fce2e0  size=39  [run]
undefined4 * __thiscall FUN_00fce2e0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3fb4;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCE310  FUN_00fce310  size=42  [run]
void FUN_00fce310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcc4b0();
  return;
}

// 00FCE340  FUN_00fce340  size=23  [run]
void __thiscall FUN_00fce340(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCE360  FUN_00fce360  size=25  [run]
void __thiscall FUN_00fce360(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCE380  FUN_00fce380  size=25  [run]
void __thiscall FUN_00fce380(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCE3A0  FUN_00fce3a0  size=25  [run]
void __thiscall FUN_00fce3a0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCE3C0  FUN_00fce3c0  size=94  [run]
void __thiscall FUN_00fce3c0(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 == 0) {
    local_c = 0x3f800000;
  }
  else if (param_2 == 1) {
    local_10 = 0x3f800000;
  }
  else if (param_2 == 2) {
    local_14 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x58,&local_14,3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FCE420  FUN_00fce420  size=40  [run]
void __thiscall FUN_00fce420(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 100,&param_2,1);
  return;
}

// 00FCE450  FUN_00fce450  size=39  [run]
undefined4 * __thiscall FUN_00fce450(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f3ff4;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCE480  FUN_00fce480  size=42  [run]
void FUN_00fce480(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcc570();
  return;
}

// 00FCE4B0  FUN_00fce4b0  size=23  [run]
void __thiscall FUN_00fce4b0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCE4D0  FUN_00fce4d0  size=25  [run]
void __thiscall FUN_00fce4d0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCE4F0  FUN_00fce4f0  size=25  [run]
void __thiscall FUN_00fce4f0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCE510  FUN_00fce510  size=25  [run]
void __thiscall FUN_00fce510(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCE530  FUN_00fce530  size=94  [run]
void __thiscall FUN_00fce530(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 == 0) {
    local_c = 0x3f800000;
  }
  else if (param_2 == 1) {
    local_10 = 0x3f800000;
  }
  else if (param_2 == 2) {
    local_14 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x58,&local_14,3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FCE590  FUN_00fce590  size=40  [run]
void __thiscall FUN_00fce590(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 100,&param_2,1);
  return;
}

// 00FCE5C0  FUN_00fce5c0  size=25  [run]
void __thiscall FUN_00fce5c0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x70,param_2,2);
  return;
}

// 00FCE5E0  FUN_00fce5e0  size=40  [run]
void __thiscall FUN_00fce5e0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x7c,&param_2,1);
  return;
}

// 00FCE610  FUN_00fce610  size=71  [run]
void __thiscall FUN_00fce610(int param_1,int param_2,int param_3)

{
  int iVar1;
  float local_10;
  float local_c;
  int local_8;
  
  local_8 = FUN_00f98a90();
  local_10 = (float)local_8 / (float)param_2;
  iVar1 = FUN_00f98aa0();
  local_c = (float)iVar1 / (float)param_3;
  FUN_00f9ea50(param_1 + 0x88,&local_10,2);
  return;
}

// 00FCE660  FUN_00fce660  size=39  [run]
undefined4 * __thiscall FUN_00fce660(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4024;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCE690  FUN_00fce690  size=42  [run]
void FUN_00fce690(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcc6a0();
  return;
}

// 00FCE6C0  FUN_00fce6c0  size=23  [run]
void __thiscall FUN_00fce6c0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCE6E0  FUN_00fce6e0  size=25  [run]
void __thiscall FUN_00fce6e0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCE700  FUN_00fce700  size=25  [run]
void __thiscall FUN_00fce700(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCE720  FUN_00fce720  size=25  [run]
void __thiscall FUN_00fce720(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCE740  FUN_00fce740  size=94  [run]
void __thiscall FUN_00fce740(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 == 0) {
    local_c = 0x3f800000;
  }
  else if (param_2 == 1) {
    local_10 = 0x3f800000;
  }
  else if (param_2 == 2) {
    local_14 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x58,&local_14,3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FCE7A0  FUN_00fce7a0  size=40  [run]
void __thiscall FUN_00fce7a0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 100,&param_2,1);
  return;
}

// 00FCE7D0  FUN_00fce7d0  size=25  [run]
void __thiscall FUN_00fce7d0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x70,param_2,2);
  return;
}

// 00FCE7F0  FUN_00fce7f0  size=39  [run]
undefined4 * __thiscall FUN_00fce7f0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f402c;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCE820  FUN_00fce820  size=42  [run]
void FUN_00fce820(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcc780();
  return;
}

// 00FCE850  FUN_00fce850  size=23  [run]
void __thiscall FUN_00fce850(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCE870  FUN_00fce870  size=25  [run]
void __thiscall FUN_00fce870(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCE890  FUN_00fce890  size=25  [run]
void __thiscall FUN_00fce890(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCE8B0  FUN_00fce8b0  size=25  [run]
void __thiscall FUN_00fce8b0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCE8D0  FUN_00fce8d0  size=94  [run]
void __thiscall FUN_00fce8d0(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 == 0) {
    local_c = 0x3f800000;
  }
  else if (param_2 == 1) {
    local_10 = 0x3f800000;
  }
  else if (param_2 == 2) {
    local_14 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x58,&local_14,3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FCE930  FUN_00fce930  size=39  [run]
undefined4 * __thiscall FUN_00fce930(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4034;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCE960  FUN_00fce960  size=42  [run]
void FUN_00fce960(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcc840();
  return;
}

// 00FCE990  FUN_00fce990  size=23  [run]
void __thiscall FUN_00fce990(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCE9B0  FUN_00fce9b0  size=25  [run]
void __thiscall FUN_00fce9b0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCE9D0  FUN_00fce9d0  size=25  [run]
void __thiscall FUN_00fce9d0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCE9F0  FUN_00fce9f0  size=25  [run]
void __thiscall FUN_00fce9f0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCEA10  FUN_00fcea10  size=94  [run]
void __thiscall FUN_00fcea10(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 == 0) {
    local_c = 0x3f800000;
  }
  else if (param_2 == 1) {
    local_10 = 0x3f800000;
  }
  else if (param_2 == 2) {
    local_14 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x58,&local_14,3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FCEA70  FUN_00fcea70  size=39  [run]
undefined4 * __thiscall FUN_00fcea70(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f403c;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCEAA0  FUN_00fceaa0  size=42  [run]
void FUN_00fceaa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcc900();
  return;
}

// 00FCEAD0  FUN_00fcead0  size=23  [run]
void __thiscall FUN_00fcead0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCEAF0  FUN_00fceaf0  size=25  [run]
void __thiscall FUN_00fceaf0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCEB10  FUN_00fceb10  size=25  [run]
void __thiscall FUN_00fceb10(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCEB30  FUN_00fceb30  size=25  [run]
void __thiscall FUN_00fceb30(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCEB50  FUN_00fceb50  size=94  [run]
void __thiscall FUN_00fceb50(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_2 == 0) {
    local_c = 0x3f800000;
  }
  else if (param_2 == 1) {
    local_10 = 0x3f800000;
  }
  else if (param_2 == 2) {
    local_14 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x58,&local_14,3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FCEBB0  FUN_00fcebb0  size=39  [run]
undefined4 * __thiscall FUN_00fcebb0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4044;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCEBE0  FUN_00fcebe0  size=42  [run]
void FUN_00fcebe0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcc9c0();
  return;
}

// 00FCEC10  FUN_00fcec10  size=23  [run]
void __thiscall FUN_00fcec10(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x28,param_2);
  return;
}

// 00FCEC30  FUN_00fcec30  size=25  [run]
void __thiscall FUN_00fcec30(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCEC50  FUN_00fcec50  size=25  [run]
void __thiscall FUN_00fcec50(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCEC70  FUN_00fcec70  size=25  [run]
void __thiscall FUN_00fcec70(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCEC90  FUN_00fcec90  size=104  [run]
void __thiscall FUN_00fcec90(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fcecda;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fcecda:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FCED00  FUN_00fced00  size=40  [run]
void __thiscall FUN_00fced00(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x7c,&param_2,1);
  return;
}

// 00FCED30  FUN_00fced30  size=39  [run]
undefined4 * __thiscall FUN_00fced30(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4078;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCED60  FUN_00fced60  size=42  [run]
void FUN_00fced60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fccab0();
  return;
}

// 00FCED90  FUN_00fced90  size=23  [run]
void __thiscall FUN_00fced90(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCEDB0  FUN_00fcedb0  size=25  [run]
void __thiscall FUN_00fcedb0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCEDD0  FUN_00fcedd0  size=25  [run]
void __thiscall FUN_00fcedd0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCEDF0  FUN_00fcedf0  size=25  [run]
void __thiscall FUN_00fcedf0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCEE10  FUN_00fcee10  size=40  [run]
void __thiscall FUN_00fcee10(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x70,&param_2,1);
  return;
}

// 00FCEE40  FUN_00fcee40  size=39  [run]
undefined4 * __thiscall FUN_00fcee40(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4080;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCEE70  FUN_00fcee70  size=42  [run]
void FUN_00fcee70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fccba0();
  return;
}

// 00FCEEA0  FUN_00fceea0  size=23  [run]
void __thiscall FUN_00fceea0(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x28,param_2);
  return;
}

// 00FCEEC0  FUN_00fceec0  size=25  [run]
void __thiscall FUN_00fceec0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCEEE0  FUN_00fceee0  size=25  [run]
void __thiscall FUN_00fceee0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCEF00  FUN_00fcef00  size=25  [run]
void __thiscall FUN_00fcef00(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCEF20  FUN_00fcef20  size=104  [run]
void __thiscall FUN_00fcef20(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fcef6a;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fcef6a:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FCEF90  FUN_00fcef90  size=40  [run]
void __thiscall FUN_00fcef90(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x7c,&param_2,1);
  return;
}

// 00FCEFC0  FUN_00fcefc0  size=28  [run]
void __thiscall FUN_00fcefc0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x88,param_2,2);
  return;
}

// 00FCEFE0  FUN_00fcefe0  size=43  [run]
void __thiscall FUN_00fcefe0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x94,&param_2,1);
  return;
}

// 00FCF010  FUN_00fcf010  size=71  [run]
void __thiscall FUN_00fcf010(int param_1,int param_2,int param_3)

{
  int iVar1;
  float local_10;
  float local_c;
  int local_8;
  
  local_8 = FUN_00f98a90();
  local_10 = (float)local_8 / (float)param_2;
  iVar1 = FUN_00f98aa0();
  local_c = (float)iVar1 / (float)param_3;
  FUN_00f9ea50(param_1 + 0xa0,&local_10,2);
  return;
}

// 00FCF060  FUN_00fcf060  size=39  [run]
undefined4 * __thiscall FUN_00fcf060(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4088;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCF090  FUN_00fcf090  size=42  [run]
void FUN_00fcf090(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fccd00();
  return;
}

// 00FCF0C0  FUN_00fcf0c0  size=23  [run]
void __thiscall FUN_00fcf0c0(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x28,param_2);
  return;
}

// 00FCF0E0  FUN_00fcf0e0  size=25  [run]
void __thiscall FUN_00fcf0e0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCF100  FUN_00fcf100  size=25  [run]
void __thiscall FUN_00fcf100(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCF120  FUN_00fcf120  size=25  [run]
void __thiscall FUN_00fcf120(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCF140  FUN_00fcf140  size=104  [run]
void __thiscall FUN_00fcf140(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fcf18a;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fcf18a:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FCF1B0  FUN_00fcf1b0  size=40  [run]
void __thiscall FUN_00fcf1b0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x7c,&param_2,1);
  return;
}

// 00FCF1E0  FUN_00fcf1e0  size=28  [run]
void __thiscall FUN_00fcf1e0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x88,param_2,2);
  return;
}

// 00FCF200  FUN_00fcf200  size=43  [run]
void __thiscall FUN_00fcf200(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x94,&param_2,1);
  return;
}

// 00FCF230  FUN_00fcf230  size=71  [run]
void __thiscall FUN_00fcf230(int param_1,int param_2,int param_3)

{
  int iVar1;
  float local_10;
  float local_c;
  int local_8;
  
  local_8 = FUN_00f98a90();
  local_10 = (float)local_8 / (float)param_2;
  iVar1 = FUN_00f98aa0();
  local_c = (float)iVar1 / (float)param_3;
  FUN_00f9ea50(param_1 + 0xa0,&local_10,2);
  return;
}

// 00FCF280  FUN_00fcf280  size=39  [run]
undefined4 * __thiscall FUN_00fcf280(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4090;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCF2B0  FUN_00fcf2b0  size=42  [run]
void FUN_00fcf2b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcce60();
  return;
}

// 00FCF2E0  FUN_00fcf2e0  size=23  [run]
void __thiscall FUN_00fcf2e0(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x28,param_2);
  return;
}

// 00FCF300  FUN_00fcf300  size=25  [run]
void __thiscall FUN_00fcf300(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCF320  FUN_00fcf320  size=25  [run]
void __thiscall FUN_00fcf320(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCF340  FUN_00fcf340  size=25  [run]
void __thiscall FUN_00fcf340(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCF360  FUN_00fcf360  size=104  [run]
void __thiscall FUN_00fcf360(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fcf3aa;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fcf3aa:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FCF3D0  FUN_00fcf3d0  size=40  [run]
void __thiscall FUN_00fcf3d0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x7c,&param_2,1);
  return;
}

// 00FCF400  FUN_00fcf400  size=28  [run]
void __thiscall FUN_00fcf400(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x88,param_2,2);
  return;
}

// 00FCF420  FUN_00fcf420  size=39  [run]
undefined4 * __thiscall FUN_00fcf420(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4098;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCF450  FUN_00fcf450  size=42  [run]
void FUN_00fcf450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fccf70();
  return;
}

// 00FCF480  FUN_00fcf480  size=23  [run]
void __thiscall FUN_00fcf480(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x28,param_2);
  return;
}

// 00FCF4A0  FUN_00fcf4a0  size=25  [run]
void __thiscall FUN_00fcf4a0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCF4C0  FUN_00fcf4c0  size=25  [run]
void __thiscall FUN_00fcf4c0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCF4E0  FUN_00fcf4e0  size=25  [run]
void __thiscall FUN_00fcf4e0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCF500  FUN_00fcf500  size=104  [run]
void __thiscall FUN_00fcf500(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fcf54a;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fcf54a:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FCF570  FUN_00fcf570  size=40  [run]
void __thiscall FUN_00fcf570(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x7c,&param_2,1);
  return;
}

// 00FCF5A0  FUN_00fcf5a0  size=28  [run]
void __thiscall FUN_00fcf5a0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x88,param_2,2);
  return;
}

// 00FCF5C0  FUN_00fcf5c0  size=39  [run]
undefined4 * __thiscall FUN_00fcf5c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f40a0;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCF5F0  FUN_00fcf5f0  size=42  [run]
void FUN_00fcf5f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd080();
  return;
}

// 00FCF620  FUN_00fcf620  size=23  [run]
void __thiscall FUN_00fcf620(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x28,param_2);
  return;
}

// 00FCF640  FUN_00fcf640  size=28  [run]
void __thiscall FUN_00fcf640(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x94,param_2,4);
  return;
}

// 00FCF660  FUN_00fcf660  size=25  [run]
void __thiscall FUN_00fcf660(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,2);
  return;
}

// 00FCF680  FUN_00fcf680  size=25  [run]
void __thiscall FUN_00fcf680(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCF6A0  FUN_00fcf6a0  size=40  [run]
void __thiscall FUN_00fcf6a0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = 0x3f800000;
  }
  FUN_00f9ea50(param_1 + 0x4c,&param_2,1);
  return;
}

// 00FCF6D0  FUN_00fcf6d0  size=25  [run]
void __thiscall FUN_00fcf6d0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x58,param_2,2);
  return;
}

// 00FCF6F0  FUN_00fcf6f0  size=28  [run]
void __thiscall FUN_00fcf6f0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0xa0,param_2,2);
  return;
}

// 00FCF710  FUN_00fcf710  size=25  [run]
void __thiscall FUN_00fcf710(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 100,param_2,2);
  return;
}

// 00FCF730  FUN_00fcf730  size=39  [run]
undefined4 * __thiscall FUN_00fcf730(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f40c4;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCF760  FUN_00fcf760  size=42  [run]
void FUN_00fcf760(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd190();
  return;
}

// 00FCF790  FUN_00fcf790  size=23  [run]
void __thiscall FUN_00fcf790(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCF7B0  FUN_00fcf7b0  size=25  [run]
void __thiscall FUN_00fcf7b0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCF7D0  FUN_00fcf7d0  size=25  [run]
void __thiscall FUN_00fcf7d0(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x40,param_2,4);
  return;
}

// 00FCF7F0  FUN_00fcf7f0  size=25  [run]
void __thiscall FUN_00fcf7f0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCF810  FUN_00fcf810  size=39  [run]
undefined4 * __thiscall FUN_00fcf810(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f40d8;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCF840  FUN_00fcf840  size=42  [run]
void FUN_00fcf840(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd210();
  return;
}

// 00FCF870  FUN_00fcf870  size=23  [run]
void __thiscall FUN_00fcf870(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCF890  FUN_00fcf890  size=25  [run]
void __thiscall FUN_00fcf890(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCF8B0  FUN_00fcf8b0  size=25  [run]
void __thiscall FUN_00fcf8b0(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x40,param_2,4);
  return;
}

// 00FCF8D0  FUN_00fcf8d0  size=25  [run]
void __thiscall FUN_00fcf8d0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCF8F0  FUN_00fcf8f0  size=39  [run]
undefined4 * __thiscall FUN_00fcf8f0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f40e0;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCF920  FUN_00fcf920  size=42  [run]
void FUN_00fcf920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd290();
  return;
}

// 00FCF950  FUN_00fcf950  size=23  [run]
void __thiscall FUN_00fcf950(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCF970  FUN_00fcf970  size=25  [run]
void __thiscall FUN_00fcf970(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCF990  FUN_00fcf990  size=25  [run]
void __thiscall FUN_00fcf990(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,4);
  return;
}

// 00FCF9B0  FUN_00fcf9b0  size=25  [run]
void __thiscall FUN_00fcf9b0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCF9D0  FUN_00fcf9d0  size=39  [run]
undefined4 * __thiscall FUN_00fcf9d0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f40e8;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCFA00  FUN_00fcfa00  size=42  [run]
void FUN_00fcfa00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd310();
  return;
}

// 00FCFA30  FUN_00fcfa30  size=23  [run]
void __thiscall FUN_00fcfa30(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCFA50  FUN_00fcfa50  size=25  [run]
void __thiscall FUN_00fcfa50(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCFA70  FUN_00fcfa70  size=25  [run]
void __thiscall FUN_00fcfa70(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCFA90  FUN_00fcfa90  size=25  [run]
void __thiscall FUN_00fcfa90(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCFAB0  FUN_00fcfab0  size=104  [run]
void __thiscall FUN_00fcfab0(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fcfafa;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fcfafa:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FCFB20  FUN_00fcfb20  size=39  [run]
undefined4 * __thiscall FUN_00fcfb20(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f40f0;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCFB50  FUN_00fcfb50  size=42  [run]
void FUN_00fcfb50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd400();
  return;
}

// 00FCFB80  FUN_00fcfb80  size=23  [run]
void __thiscall FUN_00fcfb80(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCFBA0  FUN_00fcfba0  size=25  [run]
void __thiscall FUN_00fcfba0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCFBC0  FUN_00fcfbc0  size=25  [run]
void __thiscall FUN_00fcfbc0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCFBE0  FUN_00fcfbe0  size=25  [run]
void __thiscall FUN_00fcfbe0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCFC00  FUN_00fcfc00  size=104  [run]
void __thiscall FUN_00fcfc00(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fcfc4a;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fcfc4a:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FCFC70  FUN_00fcfc70  size=39  [run]
undefined4 * __thiscall FUN_00fcfc70(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f40f8;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCFCA0  FUN_00fcfca0  size=42  [run]
void FUN_00fcfca0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd4f0();
  return;
}

// 00FCFCD0  FUN_00fcfcd0  size=23  [run]
void __thiscall FUN_00fcfcd0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCFCF0  FUN_00fcfcf0  size=25  [run]
void __thiscall FUN_00fcfcf0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCFD10  FUN_00fcfd10  size=25  [run]
void __thiscall FUN_00fcfd10(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FCFD30  FUN_00fcfd30  size=25  [run]
void __thiscall FUN_00fcfd30(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FCFD50  FUN_00fcfd50  size=25  [run]
void __thiscall FUN_00fcfd50(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x58,param_2,2);
  return;
}

// 00FCFD70  FUN_00fcfd70  size=25  [run]
void __thiscall FUN_00fcfd70(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 100,param_2,2);
  return;
}

// 00FCFD90  FUN_00fcfd90  size=39  [run]
undefined4 * __thiscall FUN_00fcfd90(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4120;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCFDC0  FUN_00fcfdc0  size=42  [run]
void FUN_00fcfdc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd5e0();
  return;
}

// 00FCFDF0  FUN_00fcfdf0  size=23  [run]
void __thiscall FUN_00fcfdf0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCFE10  FUN_00fcfe10  size=25  [run]
void __thiscall FUN_00fcfe10(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,4);
  return;
}

// 00FCFE30  FUN_00fcfe30  size=25  [run]
void __thiscall FUN_00fcfe30(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCFE50  FUN_00fcfe50  size=39  [run]
undefined4 * __thiscall FUN_00fcfe50(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4138;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCFE80  FUN_00fcfe80  size=42  [run]
void FUN_00fcfe80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd650();
  return;
}

// 00FCFEB0  FUN_00fcfeb0  size=23  [run]
void __thiscall FUN_00fcfeb0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCFED0  FUN_00fcfed0  size=25  [run]
void __thiscall FUN_00fcfed0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FCFEF0  FUN_00fcfef0  size=39  [run]
undefined4 * __thiscall FUN_00fcfef0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4250;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FCFF20  FUN_00fcff20  size=42  [run]
void FUN_00fcff20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd850();
  return;
}

// 00FCFF50  FUN_00fcff50  size=23  [run]
void __thiscall FUN_00fcff50(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FCFF70  FUN_00fcff70  size=25  [run]
void __thiscall FUN_00fcff70(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FD0000  FUN_00fd0000  size=25  [run]
void __thiscall FUN_00fd0000(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FD0020  FUN_00fd0020  size=39  [run]
undefined4 * __thiscall FUN_00fd0020(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4264;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FD0050  FUN_00fd0050  size=42  [run]
void FUN_00fd0050(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd8d0();
  return;
}

// 00FD0080  FUN_00fd0080  size=23  [run]
void __thiscall FUN_00fd0080(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FD00A0  FUN_00fd00a0  size=25  [run]
void __thiscall FUN_00fd00a0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FD00C0  FUN_00fd00c0  size=25  [run]
void __thiscall FUN_00fd00c0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FD00E0  FUN_00fd00e0  size=25  [run]
void __thiscall FUN_00fd00e0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FD0100  FUN_00fd0100  size=104  [run]
void __thiscall FUN_00fd0100(int param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 1) {
    local_20 = 0;
    local_1c = 0x3f800000;
  }
  else {
    if (param_2 == 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x3f800000;
      goto LAB_00fd014a;
    }
    local_20 = 0x3f800000;
    local_1c = 0;
  }
  local_18 = 0;
LAB_00fd014a:
  local_14 = 0;
  FUN_00f9ea50(param_1 + 0x70,&local_20,4);
  return;
}

// 00FD0170  FUN_00fd0170  size=39  [run]
undefined4 * __thiscall FUN_00fd0170(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f426c;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FD01A0  FUN_00fd01a0  size=42  [run]
void FUN_00fd01a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  FUN_00fcd9c0();
  return;
}

// 00FD01D0  FUN_00fd01d0  size=23  [run]
void __thiscall FUN_00fd01d0(int param_1,undefined4 param_2)

{
  FUN_00f9ee50(param_1 + 0x28,param_2);
  return;
}

// 00FD01F0  FUN_00fd01f0  size=25  [run]
void __thiscall FUN_00fd01f0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FD0210  FUN_00fd0210  size=25  [run]
void __thiscall FUN_00fd0210(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x4c,param_2,2);
  return;
}

// 00FD0230  FUN_00fd0230  size=25  [run]
void __thiscall FUN_00fd0230(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x58,param_2,4);
  return;
}

// 00FD0250  FUN_00fd0250  size=39  [run]
undefined4 * __thiscall FUN_00fd0250(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4284;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FD0280  FUN_00fd0280  size=44  [run]
undefined4 FUN_00fd0280(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00fa01a0(param_1,param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_00fcda80();
    return uVar2;
  }
  return 0;
}

// 00FD02B0  FUN_00fd02b0  size=23  [run]
void __thiscall FUN_00fd02b0(int param_1,undefined4 param_2)

{
  FUN_00f9eec0(param_1 + 0x28,param_2);
  return;
}

// 00FD02D0  FUN_00fd02d0  size=25  [run]
void __thiscall FUN_00fd02d0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x34,param_2,4);
  return;
}

// 00FD02F0  FUN_00fd02f0  size=25  [run]
void __thiscall FUN_00fd02f0(int param_1,undefined4 param_2)

{
  FUN_00f9ea50(param_1 + 0x40,param_2,2);
  return;
}

// 00FD0310  FUN_00fd0310  size=42  [run]
void __thiscall FUN_00fd0310(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  FUN_00f9ea50(param_1 + 0x4c,&local_c,2);
  return;
}

// 00FD0340  FUN_00fd0340  size=39  [run]
undefined4 * __thiscall FUN_00fd0340(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f42c4;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FD0370  FUN_00fd0370  size=25  [run]
void __thiscall FUN_00fd0370(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x4c,param_2,4);
  return;
}

// 00FD0390  FUN_00fd0390  size=23  [run]
void __thiscall FUN_00fd0390(int param_1,undefined4 param_2)

{
  FUN_00fa1d50(param_1 + 0x40,param_2);
  return;
}

// 00FD03B0  FUN_00fd03b0  size=25  [run]
void __thiscall FUN_00fd03b0(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 0x58,param_2,4);
  return;
}

// 00FD03D0  FUN_00fd03d0  size=25  [run]
void __thiscall FUN_00fd03d0(int param_1,undefined4 param_2)

{
  FUN_00f9ec50(param_1 + 100,param_2,4);
  return;
}

// 00FD0410  FUN_00fd0410  size=85  [run]
void FUN_00fd0410(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_1,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_1;
    DAT_01f13254 = param_1[1];
    DAT_01f13258 = param_1[2];
    DAT_01f1325c = param_1[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  return;
}

// 00FD0470  FUN_00fd0470  size=85  [run]
void FUN_00fd0470(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99540(0xb8,param_1,4);
  if (iVar1 == 0) {
    DAT_01f13250 = *param_1;
    DAT_01f13254 = param_1[1];
    DAT_01f13258 = param_1[2];
    DAT_01f1325c = param_1[3];
    FUN_00f99620(0xb8,&DAT_01f13250,4);
  }
  return;
}

// 00FD04D0  FUN_00fd04d0  size=614  [run]
undefined4 FUN_00fd04d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (0x28 < param_2) {
    param_2 = 0x28;
  }
  iVar5 = 0;
  if (3 < param_2) {
    iVar4 = (param_2 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    puVar1 = (undefined4 *)(param_1 + 8);
    puVar3 = &DAT_01f8d2c8;
    do {
      puVar3[-4] = puVar1[-2];
      *puVar3 = puVar1[-1];
      puVar3[4] = *puVar1;
      puVar3[-3] = puVar1[2];
      puVar3[1] = puVar1[3];
      puVar3[5] = puVar1[4];
      puVar3[-2] = puVar1[6];
      puVar3[2] = puVar1[7];
      puVar3[6] = puVar1[8];
      puVar3[-1] = puVar1[10];
      puVar3[3] = puVar1[0xb];
      puVar3[7] = puVar1[0xc];
      puVar3[8] = puVar1[0xe];
      puVar3[0xc] = puVar1[0xf];
      puVar3[0x10] = puVar1[0x10];
      puVar3[9] = puVar1[0x12];
      puVar3[0xd] = puVar1[0x13];
      puVar3[0x11] = puVar1[0x14];
      puVar3[10] = puVar1[0x16];
      puVar3[0xe] = puVar1[0x17];
      puVar3[0x12] = puVar1[0x18];
      puVar3[0xb] = puVar1[0x1a];
      puVar3[0xf] = puVar1[0x1b];
      puVar3[0x13] = puVar1[0x1c];
      puVar3[0x14] = puVar1[0x1e];
      puVar3[0x18] = puVar1[0x1f];
      puVar3[0x1c] = puVar1[0x20];
      puVar3[0x15] = puVar1[0x22];
      puVar3[0x19] = puVar1[0x23];
      puVar3[0x1d] = puVar1[0x24];
      puVar3[0x16] = puVar1[0x26];
      puVar3[0x1a] = puVar1[0x27];
      puVar3[0x1e] = puVar1[0x28];
      puVar3[0x17] = puVar1[0x2a];
      puVar3[0x1b] = puVar1[0x2b];
      puVar3[0x1f] = puVar1[0x2c];
      puVar3[0x20] = puVar1[0x2e];
      puVar3[0x24] = puVar1[0x2f];
      puVar3[0x28] = puVar1[0x30];
      puVar3[0x21] = puVar1[0x32];
      puVar3[0x25] = puVar1[0x33];
      iVar4 = iVar4 + -1;
      puVar3[0x29] = puVar1[0x34];
      puVar3[0x22] = puVar1[0x36];
      puVar3[0x26] = puVar1[0x37];
      puVar3[0x2a] = puVar1[0x38];
      puVar3[0x23] = puVar1[0x3a];
      puVar3[0x27] = puVar1[0x3b];
      puVar3[0x2b] = puVar1[0x3c];
      puVar1 = puVar1 + 0x40;
      puVar3 = puVar3 + 0x30;
    } while (iVar4 != 0);
  }
  if (iVar5 < param_2) {
    iVar4 = param_2 - iVar5;
    puVar1 = &DAT_01f8d2c8 + iVar5 * 0xc;
    puVar3 = (undefined4 *)(iVar5 * 0x40 + 8 + param_1);
    do {
      puVar1[-4] = puVar3[-2];
      iVar4 = iVar4 + -1;
      *puVar1 = puVar3[-1];
      puVar1[4] = *puVar3;
      puVar1[-3] = puVar3[2];
      puVar1[1] = puVar3[3];
      puVar1[5] = puVar3[4];
      puVar1[-2] = puVar3[6];
      puVar1[2] = puVar3[7];
      puVar1[6] = puVar3[8];
      puVar1[-1] = puVar3[10];
      puVar1[3] = puVar3[0xb];
      puVar1[7] = puVar3[0xc];
      puVar1 = puVar1 + 0xc;
      puVar3 = puVar3 + 0x10;
    } while (iVar4 != 0);
  }
  iVar5 = FUN_00f994a0(0x3a,&DAT_01f8d2b8,param_2 * 0xc);
  if (iVar5 != 0) {
    return 1;
  }
  FID_conflict__memcpy(&DAT_01f13870,&DAT_01f8d2b8,param_2 * 0x30);
  uVar2 = FUN_00f995e0(0x3a,&DAT_01f13870,param_2 * 0xc);
  return uVar2;
}

// 00FD0740  FUN_00fd0740  size=233  [run]
undefined4 __fastcall FUN_00fd0740(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_00a281f0("FilterScrShot.pso");
  uVar2 = FUN_00a281f0("FilterScrShot.vso",uVar1);
  iVar3 = FUN_00fa01a0(uVar2,uVar1);
  if (iVar3 != 0) {
    iVar3 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar3 != 0) {
      iVar3 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1");
      if (iVar3 != 0) {
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x30) =
             iVar3 << 8 | *(uint *)(param_1 + 0x30) & 0xfffff020 | uVar4 | 0x20;
        uVar4 = 2;
        iVar3 = 2;
        if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
          uVar4 = 3;
          iVar3 = 3;
        }
        *(uint *)(param_1 + 0x3c) =
             iVar3 << 8 | *(uint *)(param_1 + 0x3c) & 0xfffff020 | uVar4 | 0x20;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
        return 1;
      }
    }
  }
  return 0;
}

// 00FD0830  FUN_00fd0830  size=219  [run]
undefined4 __fastcall FUN_00fd0830(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterScrShot2.pso");
  uVar3 = FUN_00a281f0("FilterScrShot2.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_add_alpha");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_color_saido");
        if (iVar4 != 0) {
          iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_tone_st");
          if (iVar4 != 0) {
            iVar4 = FUN_00f9e6d0(param_1 + 0x58,"g_tone_ed");
            if (iVar4 != 0) {
              uVar5 = 2;
              iVar4 = 2;
              if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
                uVar5 = 3;
                iVar4 = 3;
              }
              uVar1 = *(uint *)(param_1 + 0x30);
              *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
              *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FD0910  FUN_00fd0910  size=485  [run]
undefined4 __fastcall FUN_00fd0910(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterScrShot3.pso");
  uVar3 = FUN_00a281f0("FilterScrShot3.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar4 != 0) {
      iVar4 = FUN_00fa39a0(param_1 + 0x34,"g_Sampler1");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler2");
        if (iVar4 != 0) {
          iVar4 = FUN_00fa39a0(param_1 + 0x4c,"g_Sampler3");
          if (iVar4 != 0) {
            iVar4 = FUN_00f9e6d0(param_1 + 0x58,"g_MatrialColor");
            if (iVar4 != 0) {
              iVar4 = FUN_00f9e6d0(param_1 + 100,"g_constant_range");
              if (iVar4 != 0) {
                iVar4 = FUN_00f9e6d0(param_1 + 0x70,"g_eff_range");
                if (iVar4 != 0) {
                  iVar4 = FUN_00f9e6d0(param_1 + 0x7c,"g_dv_range");
                  if (iVar4 != 0) {
                    uVar5 = 2;
                    iVar4 = 2;
                    if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
                      uVar5 = 3;
                      iVar4 = 3;
                    }
                    uVar1 = *(uint *)(param_1 + 0x30);
                    *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
                    *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
                    uVar5 = 2;
                    iVar4 = 2;
                    if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
                      uVar5 = 3;
                      iVar4 = 3;
                    }
                    uVar1 = *(uint *)(param_1 + 0x3c);
                    *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
                    *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
                    uVar5 = 2;
                    iVar4 = 2;
                    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
                      uVar5 = 3;
                      iVar4 = 3;
                    }
                    uVar1 = *(uint *)(param_1 + 0x48);
                    *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
                    *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
                    uVar5 = 2;
                    iVar4 = 2;
                    if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
                      uVar5 = 3;
                      iVar4 = 3;
                    }
                    uVar1 = *(uint *)(param_1 + 0x54);
                    *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
                    *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00FD0B00  FUN_00fd0b00  size=159  [run]
undefined4 __fastcall FUN_00fd0b00(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterScrShot4.pso");
  uVar3 = FUN_00a281f0("FilterScrShot4.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_add_alpha");
      if (iVar4 != 0) {
        uVar5 = 2;
        iVar4 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar5 = 3;
          iVar4 = 3;
        }
        uVar1 = *(uint *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
        *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
        return 1;
      }
    }
  }
  return 0;
}

// 00FD0BA0  FUN_00fd0ba0  size=232  [run]
/* WARNING: Removing unreachable block (ram,0x00fd0bfc) */
/* WARNING: Removing unreachable block (ram,0x00fd0c40) */

undefined4 __thiscall FUN_00fd0ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_SceneSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1fff000 | 0x1000101;
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x3c) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xff333fff | 0x333000;
    return 1;
  }
  return 0;
}

// 00FD0C90  FUN_00fd0c90  size=143  [run]
/* WARNING: Removing unreachable block (ram,0x00fd0ced) */

undefined4 __thiscall FUN_00fd0c90(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_SceneSampler"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FD0D20  FUN_00fd0d20  size=139  [run]
undefined4 __fastcall FUN_00fd0d20(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterShaderEdgeDetection.pso");
  uVar3 = FUN_00a281f0("ModelShaderBlur.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0");
    if (iVar4 != 0) {
      uVar5 = 2;
      iVar4 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar5 = 3;
        iVar4 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
      return 1;
    }
  }
  return 0;
}

// 00FD0EC0  FUN_00fd0ec0  size=143  [run]
/* WARNING: Removing unreachable block (ram,0x00fd0f1d) */

undefined4 __thiscall FUN_00fd0ec0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if ((iVar2 != 0) && (iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler0"), iVar2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x30) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FD10A0  FUN_00fd10a0  size=139  [run]
undefined4 __fastcall FUN_00fd10a0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("filtershaderspotshadow.pso");
  uVar3 = FUN_00a281f0("filtershaderspotshadow.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x28,"g_Z_sampler");
    if (iVar4 != 0) {
      uVar5 = 2;
      iVar4 = 2;
      if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
        uVar5 = 3;
        iVar4 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
      *(uint *)(param_1 + 0x30) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
      return 1;
    }
  }
  return 0;
}

// 00FD1130  FUN_00fd1130  size=139  [run]
void __thiscall FUN_00fd1130(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x78) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FD11C0  FUN_00fd11c0  size=160  [run]
void __thiscall FUN_00fd11c0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD1260  FUN_00fd1260  size=163  [run]
void __thiscall FUN_00fd1260(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x9c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x9c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD1310  FUN_00fd1310  size=163  [run]
void __thiscall FUN_00fd1310(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xab) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xa8) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xa8) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xa0,param_2);
  return;
}

// 00FD13C0  FUN_00fd13c0  size=163  [run]
void __thiscall FUN_00fd13c0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xb7) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xb4) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xb4) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xac,param_2);
  return;
}

// 00FD1470  FUN_00fd1470  size=160  [run]
void __thiscall FUN_00fd1470(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD1510  FUN_00fd1510  size=163  [run]
void __thiscall FUN_00fd1510(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD15C0  FUN_00fd15c0  size=139  [run]
void __thiscall FUN_00fd15c0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x6c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x6c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 100,param_2);
  return;
}

// 00FD1650  FUN_00fd1650  size=139  [run]
void __thiscall FUN_00fd1650(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x78) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FD16E0  FUN_00fd16e0  size=128  [run]
/* WARNING: Removing unreachable block (ram,0x00fd1712) */

void __thiscall FUN_00fd16e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x84) = uVar1 & 0xe1111010 | 0x1111111;
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD1760  FUN_00fd1760  size=139  [run]
void __thiscall FUN_00fd1760(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x6c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x6c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 100,param_2);
  return;
}

// 00FD17F0  FUN_00fd17f0  size=139  [run]
void __thiscall FUN_00fd17f0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x78) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FD1880  FUN_00fd1880  size=128  [run]
/* WARNING: Removing unreachable block (ram,0x00fd18b2) */

void __thiscall FUN_00fd1880(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x84) = uVar1 & 0xe1111010 | 0x1111111;
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD1900  FUN_00fd1900  size=139  [run]
void __thiscall FUN_00fd1900(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x6c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x6c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 100,param_2);
  return;
}

// 00FD1990  FUN_00fd1990  size=139  [run]
void __thiscall FUN_00fd1990(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x78) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FD1A20  FUN_00fd1a20  size=128  [run]
/* WARNING: Removing unreachable block (ram,0x00fd1a52) */

void __thiscall FUN_00fd1a20(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x84) = uVar1 & 0xe1111010 | 0x1111111;
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD1AA0  FUN_00fd1aa0  size=334  [run]
void __thiscall FUN_00fd1aa0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD1BF0  FUN_00fd1bf0  size=163  [run]
void __thiscall FUN_00fd1bf0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x9c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x9c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD1CA0  FUN_00fd1ca0  size=331  [run]
void __thiscall FUN_00fd1ca0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1111fff | 0x1111000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD1DF0  FUN_00fd1df0  size=163  [run]
void __thiscall FUN_00fd1df0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD1EA0  FUN_00fd1ea0  size=334  [run]
void __thiscall FUN_00fd1ea0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xb7) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xb4) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xb4) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xe1111fff | 0x1111000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0xac,param_2);
  return;
}

// 00FD1FF0  FUN_00fd1ff0  size=163  [run]
void __thiscall FUN_00fd1ff0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xc3) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xc0) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xc0) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xb8,param_2);
  return;
}

// 00FD20A0  FUN_00fd20a0  size=163  [run]
void __thiscall FUN_00fd20a0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xcf) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xcc) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xcc) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xc4,param_2);
  return;
}

// 00FD2150  FUN_00fd2150  size=334  [run]
void __thiscall FUN_00fd2150(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xb7) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xb4) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xb4) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xe1111fff | 0x1111000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0xac,param_2);
  return;
}

// 00FD22A0  FUN_00fd22a0  size=163  [run]
void __thiscall FUN_00fd22a0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xc3) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xc0) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xc0) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xb8,param_2);
  return;
}

// 00FD2350  FUN_00fd2350  size=163  [run]
void __thiscall FUN_00fd2350(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xcf) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xcc) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xcc) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xc4,param_2);
  return;
}

// 00FD2400  FUN_00fd2400  size=334  [run]
void __thiscall FUN_00fd2400(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x9c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x9c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1111fff | 0x1111000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD2550  FUN_00fd2550  size=163  [run]
void __thiscall FUN_00fd2550(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xab) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xa8) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xa8) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xa0,param_2);
  return;
}

// 00FD2600  FUN_00fd2600  size=334  [run]
void __thiscall FUN_00fd2600(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x9c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x9c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1111fff | 0x1111000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD2750  FUN_00fd2750  size=163  [run]
void __thiscall FUN_00fd2750(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0xab) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0xa8) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0xa8) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0xa0,param_2);
  return;
}

// 00FD2800  FUN_00fd2800  size=139  [run]
void __thiscall FUN_00fd2800(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x78) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1333fff | 0x1333000;
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FD2890  FUN_00fd2890  size=160  [run]
void __thiscall FUN_00fd2890(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD2930  FUN_00fd2930  size=163  [run]
void __thiscall FUN_00fd2930(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD29E0  FUN_00fd29e0  size=139  [run]
void __thiscall FUN_00fd29e0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x60) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x60) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x58,param_2);
  return;
}

// 00FD2A70  FUN_00fd2a70  size=139  [run]
void __thiscall FUN_00fd2a70(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x60) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x60) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x58,param_2);
  return;
}

// 00FD2B00  FUN_00fd2b00  size=139  [run]
void __thiscall FUN_00fd2b00(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x60) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x60) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x58,param_2);
  return;
}

// 00FD2B90  FUN_00fd2b90  size=331  [run]
void __thiscall FUN_00fd2b90(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1333fff | 0x1333000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD2CE0  FUN_00fd2ce0  size=163  [run]
void __thiscall FUN_00fd2ce0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD2D90  FUN_00fd2d90  size=131  [run]
/* WARNING: Removing unreachable block (ram,0x00fd2dc2) */

void __thiscall FUN_00fd2d90(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1333010 | 0x1333111;
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD2E20  FUN_00fd2e20  size=331  [run]
void __thiscall FUN_00fd2e20(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1333fff | 0x1333000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD2F70  FUN_00fd2f70  size=163  [run]
void __thiscall FUN_00fd2f70(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD3020  FUN_00fd3020  size=131  [run]
/* WARNING: Removing unreachable block (ram,0x00fd3052) */

void __thiscall FUN_00fd3020(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1333010 | 0x1333111;
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD30B0  FUN_00fd30b0  size=334  [run]
void __thiscall FUN_00fd30b0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x70,&local_20,4);
  FUN_00f9ec50(param_1 + 0x7c,&local_30,4);
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD3200  FUN_00fd3200  size=163  [run]
void __thiscall FUN_00fd3200(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x9c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x9c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD32B0  FUN_00fd32b0  size=107  [run]
bool __thiscall FUN_00fd32b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 2;
  iVar2 = 2;
  if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
    uVar3 = 3;
    iVar2 = 3;
  }
  uVar1 = *(uint *)(param_1 + 0x54);
  *(uint *)(param_1 + 0x54) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
  *(uint *)(param_1 + 0x54) = iVar2 << 8 | uVar1 & 0xe1111020 | uVar3 | 0x1111020;
  iVar2 = FUN_00fa1d50(param_1 + 0x4c,param_2);
  return iVar2 != 0;
}

// 00FD3320  FUN_00fd3320  size=812  [run]
void __thiscall FUN_00fd3320(int param_1,int param_2,float param_3,int param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float local_7c;
  float local_78;
  float *local_74;
  float local_70;
  float local_6c;
  float local_68 [24];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    local_7c = 0.0;
    local_78 = 0.0;
  }
  else {
    local_7c = (float)*(int *)(param_2 + 8);
    local_78 = (float)*(int *)(param_2 + 0xc);
  }
  local_74 = (float *)0x0;
  if (0.0 <= local_7c) {
    local_7c = 1.0 / local_7c;
  }
  else {
    local_7c = 0.0;
  }
  if (0.0 <= local_78) {
    local_78 = 1.0 / local_78;
  }
  else {
    local_78 = 0.0;
  }
  local_6c = 0.0;
  do {
    fVar3 = local_6c;
    if (param_4 == 0) {
      fVar2 = (float)(int)local_6c * 2.0 + 1.0;
      local_68[(int)local_6c * 2] = fVar2 * -1.0 * local_7c;
      local_68[(int)local_6c * 2 + 1] = 0.0;
    }
    else {
      local_68[(int)local_6c * 2] = 0.0;
      fVar2 = (float)(int)local_6c * 2.0 + 1.0;
      local_68[(int)local_6c * 2 + 1] = local_78 * fVar2 * -1.0;
    }
    if (0.0 < param_3 * param_3) {
      local_6c = (fVar2 * fVar2 * -0.5) / (param_3 * param_3);
      fVar9 = (float10)FUN_00fe0f1c();
    }
    else {
      local_6c = fVar2;
      fVar9 = (float10)FUN_00fe0f1c();
    }
    local_68[(int)fVar3 + 0x10] = (float)fVar9;
    local_6c = (float)((int)fVar3 + 1);
    local_74 = (float *)((float)local_74 + local_68[(int)fVar3 + 0x10] * 2.0);
  } while ((int)local_6c < 8);
  if (param_4 == 0) {
    local_70 = local_7c * 16.0;
    local_6c = 0.0;
  }
  else {
    local_70 = 0.0;
    local_6c = local_78 * 16.0;
  }
  fVar3 = 0.0;
  if ((float)local_74 < 0.0 == ((float)local_74 == 0.0)) {
    local_68[0x10] = local_68[0x10] / (float)local_74;
  }
  else {
    local_68[0x10] = 0.0;
  }
  if (0.0 < (float)local_74) {
    local_68[0x11] = local_68[0x11] / (float)local_74;
    local_68[0x12] = local_68[0x12] / (float)local_74;
    local_68[0x13] = local_68[0x13] / (float)local_74;
    local_68[0x14] = local_68[0x14] / (float)local_74;
    local_68[0x15] = local_68[0x15] / (float)local_74;
    local_68[0x16] = local_68[0x16] / (float)local_74;
    fVar3 = local_68[0x17] / (float)local_74;
  }
  else {
    local_68[0x11] = 0.0;
    local_68[0x12] = 0.0;
    local_68[0x13] = 0.0;
    local_68[0x14] = 0.0;
    local_68[0x15] = 0.0;
    local_68[0x16] = 0.0;
  }
  local_68[0x17] = fVar3;
  iVar4 = FUN_00f9ea50(param_1 + 0x40,&local_70,2);
  if (iVar4 != 0) {
    local_74 = local_68 + 0x10;
    iVar8 = 0;
    pfVar6 = local_68;
    iVar4 = param_1 + 0xac;
    while ((iVar5 = FUN_00f9ea50(iVar4 + -0x60,pfVar6,2), iVar5 != 0 &&
           (iVar5 = FUN_00f9ea50(iVar4,local_74,1), iVar5 != 0))) {
      local_74 = local_74 + 1;
      iVar8 = iVar8 + 1;
      pfVar6 = pfVar6 + 2;
      iVar4 = iVar4 + 0xc;
      if (7 < iVar8) {
        uVar7 = 2;
        iVar4 = 2;
        if ((*(byte *)(param_1 + 0x117) & 0x1f) != 1) {
          uVar7 = 3;
          iVar4 = 3;
        }
        uVar1 = *(uint *)(param_1 + 0x114);
        *(uint *)(param_1 + 0x114) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar7 | 0x20;
        *(uint *)(param_1 + 0x114) = iVar4 << 8 | uVar1 & 0xe1111020 | uVar7 | 0x1111020;
        FUN_00fa1d50(param_1 + 0x10c,param_2);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 00FD3650  FUN_00fd3650  size=139  [run]
void __thiscall FUN_00fd3650(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x60) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x60) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x58,param_2);
  return;
}

// 00FD36E0  FUN_00fd36e0  size=331  [run]
void __thiscall FUN_00fd36e0(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1333fff | 0x1333000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x1c) & 0x8000000;
  }
  if (param_4 == 0) {
    if (uVar1 == 0) {
      local_20 = 0x3f800000;
      local_1c = 0x3f800000;
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_24 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
    }
    else {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      local_28 = 0x3f800000;
      local_24 = 0;
    }
  }
  else {
    local_24 = 0x3f800000;
    local_20 = 0x3f800000;
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  FUN_00f9ec50(param_1 + 0x58,&local_20,4);
  FUN_00f9ec50(param_1 + 100,&local_30,4);
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD3830  FUN_00fd3830  size=163  [run]
void __thiscall FUN_00fd3830(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD38E0  FUN_00fd38e0  size=131  [run]
/* WARNING: Removing unreachable block (ram,0x00fd3912) */

void __thiscall FUN_00fd38e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1ffffff | 0x1000000;
  *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1333010 | 0x1333111;
  FUN_00fa1d50(param_1 + 0x94,param_2);
  return;
}

// 00FD3970  FUN_00fd3970  size=139  [run]
void __thiscall FUN_00fd3970(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x6c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x6c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 100,param_2);
  return;
}

// 00FD3A00  FUN_00fd3a00  size=139  [run]
void __thiscall FUN_00fd3a00(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x7b) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x78) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x78) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x70,param_2);
  return;
}

// 00FD3A90  FUN_00fd3a90  size=160  [run]
void __thiscall FUN_00fd3a90(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x87) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x84) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x84) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x7c,param_2);
  return;
}

// 00FD3B30  FUN_00fd3b30  size=163  [run]
void __thiscall FUN_00fd3b30(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x90) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x90) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x88,param_2);
  return;
}

// 00FD3BE0  FUN_00fd3be0  size=139  [run]
void __thiscall FUN_00fd3be0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x60) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x60) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 0x58,param_2);
  return;
}

// 00FD3C70  FUN_00fd3c70  size=139  [run]
void __thiscall FUN_00fd3c70(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 3) {
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1ffffff | 0x1000000;
    }
    uVar1 = param_3;
    if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
      uVar1 = 3;
    }
    *(uint *)(param_1 + 0x6c) =
         ((uVar1 & 0xf) << 4 | param_3 & 0xf) << 4 | *(uint *)(param_1 + 0x6c) & 0xfffff000 |
         uVar1 & 0xf;
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xe1111fff | 0x1111000;
  FUN_00fa1d50(param_1 + 100,param_2);
  return;
}

// 00FD3D00  FUN_00fd3d00  size=213  [run]
/* WARNING: Removing unreachable block (ram,0x00fd3da6) */

undefined4 __fastcall FUN_00fd3d00(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
  if ((((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor"), iVar2 != 0)) &&
      (iVar2 = FUN_00f9e6d0(param_1 + 0x4c,"g_OutLineRate"), iVar2 != 0)) &&
     (((iVar2 = FUN_00f9e6d0(param_1 + 0x58,"g_BlendColor"), iVar2 != 0 &&
       (iVar2 = FUN_00f9e6d0(param_1 + 100,"g_TargetOffSet"), iVar2 != 0)) &&
      (iVar2 = FUN_00fa39a0(param_1 + 0x40,"g_Texture0"), iVar2 != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x48) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00FD3F90  FUN_00fd3f90  size=96  [run]
void __fastcall FUN_00fd3f90(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  return;
}

// 00FD3FF0  FUN_00fd3ff0  size=168  [run]
void __fastcall FUN_00fd3ff0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0x1111111;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0x1111111;
  return;
}

// 00FD40A0  FUN_00fd40a0  size=114  [run]
void __fastcall FUN_00fd40a0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  return;
}

// 00FD4120  FUN_00fd4120  size=81  [run]
void __fastcall FUN_00fd4120(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  return;
}

// 00FD4180  FUN_00fd4180  size=81  [run]
void __fastcall FUN_00fd4180(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  return;
}

// 00FD41E0  FUN_00fd41e0  size=81  [run]
void __fastcall FUN_00fd41e0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  return;
}

// 00FD4240  FUN_00fd4240  size=132  [run]
void __fastcall FUN_00fd4240(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  return;
}

// 00FD42D0  FUN_00fd42d0  size=114  [run]
void __fastcall FUN_00fd42d0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  return;
}

// 00FD4350  FUN_00fd4350  size=204  [run]
void __fastcall FUN_00fd4350(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0x1111111;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0x1111111;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1111111;
  return;
}

// 00FD4420  FUN_00fd4420  size=204  [run]
void __fastcall FUN_00fd4420(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0x1111111;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0x1111111;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0x1111111;
  return;
}

// 00FD44F0  FUN_00fd44f0  size=150  [run]
void __fastcall FUN_00fd44f0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0x1111111;
  return;
}

// 00FD4590  FUN_00fd4590  size=150  [run]
void __fastcall FUN_00fd4590(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0x1111111;
  return;
}

// 00FD4630  FUN_00fd4630  size=150  [run]
void __fastcall FUN_00fd4630(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  return;
}

// 00FD46D0  FUN_00fd46d0  size=62  [run]
void __fastcall FUN_00fd46d0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  return;
}

// 00FD4710  FUN_00fd4710  size=62  [run]
void __fastcall FUN_00fd4710(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  return;
}

// 00FD4750  FUN_00fd4750  size=62  [run]
void __fastcall FUN_00fd4750(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  return;
}

// 00FD4790  FUN_00fd4790  size=114  [run]
void __fastcall FUN_00fd4790(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  return;
}

// 00FD4810  FUN_00fd4810  size=114  [run]
void __fastcall FUN_00fd4810(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  return;
}

// 00FD4890  FUN_00fd4890  size=132  [run]
void __fastcall FUN_00fd4890(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  return;
}

// 00FD4920  FUN_00fd4920  size=53  [run]
void __fastcall FUN_00fd4920(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  return;
}

// 00FD4960  FUN_00fd4960  size=44  [run]
void __fastcall FUN_00fd4960(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = 0x1111111;
  return;
}

// 00FD4990  FUN_00fd4990  size=62  [run]
void __fastcall FUN_00fd4990(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  return;
}

// 00FD49D0  FUN_00fd49d0  size=114  [run]
void __fastcall FUN_00fd49d0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  return;
}

// 00FD4A50  FUN_00fd4a50  size=105  [run]
void __fastcall FUN_00fd4a50(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0x1111111;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  return;
}

// 00FD4AC0  FUN_00fd4ac0  size=72  [run]
void __fastcall FUN_00fd4ac0(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  return;
}

// 00FD4B10  FUN_00fd4b10  size=71  [run]
void __fastcall FUN_00fd4b10(int param_1)

{
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  return;
}

// 00FD4B60  FUN_00fd4b60  size=454  [run]
/* WARNING: Removing unreachable block (ram,0x00fd4b9a) */
/* WARNING: Removing unreachable block (ram,0x00fd4c0c) */
/* WARNING: Removing unreachable block (ram,0x00fd4c74) */
/* WARNING: Removing unreachable block (ram,0x00fd4ce8) */

undefined4 * __fastcall FUN_00fd4b60(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4574;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00FD4D60  FUN_00fd4d60  size=31  [run]
void __fastcall FUN_00fd4d60(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FD4D80  FUN_00fd4d80  size=273  [run]
/* WARNING: Removing unreachable block (ram,0x00fd4dba) */
/* WARNING: Removing unreachable block (ram,0x00fd4e2b) */

undefined4 * __fastcall FUN_00fd4d80(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f457c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  uVar1 = param_1[0xc];
  param_1[0xc] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xc] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  return param_1;
}

// 00FD4EE0  FUN_00fd4ee0  size=57  [run]
void __fastcall FUN_00fd4ee0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FD4F20  FUN_00fd4f20  size=945  [run]
/* WARNING: Removing unreachable block (ram,0x00fd4f5a) */
/* WARNING: Removing unreachable block (ram,0x00fd51f3) */
/* WARNING: Removing unreachable block (ram,0x00fd5115) */
/* WARNING: Removing unreachable block (ram,0x00fd5037) */
/* WARNING: Removing unreachable block (ram,0x00fd4fcb) */
/* WARNING: Removing unreachable block (ram,0x00fd50a9) */
/* WARNING: Removing unreachable block (ram,0x00fd5187) */
/* WARNING: Removing unreachable block (ram,0x00fd5265) */

undefined4 * __fastcall FUN_00fd4f20(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4584;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  uVar1 = param_1[0xc];
  param_1[0xc] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xc] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  return param_1;
}

// 00FD5320  FUN_00fd5320  size=58  [run]
void __fastcall FUN_00fd5320(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FD5360  FUN_00fd5360  size=246  [run]
/* WARNING: Removing unreachable block (ram,0x00fd539a) */
/* WARNING: Removing unreachable block (ram,0x00fd5407) */

undefined4 * __fastcall FUN_00fd5360(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f458c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  return param_1;
}

// 00FD5490  FUN_00fd5490  size=30  [run]
void __fastcall FUN_00fd5490(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00FD54B0  FUN_00fd54b0  size=454  [run]
/* WARNING: Removing unreachable block (ram,0x00fd54ea) */
/* WARNING: Removing unreachable block (ram,0x00fd555c) */
/* WARNING: Removing unreachable block (ram,0x00fd55c4) */
/* WARNING: Removing unreachable block (ram,0x00fd5638) */

undefined4 * __fastcall FUN_00fd54b0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4594;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00FD56B0  FUN_00fd56b0  size=31  [run]
void __fastcall FUN_00fd56b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FD56D0  FUN_00fd56d0  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fd570a) */
/* WARNING: Removing unreachable block (ram,0x00fd577c) */

undefined4 * __fastcall FUN_00fd56d0(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f459c;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FD57E0  FUN_00fd57e0  size=21  [run]
void __fastcall FUN_00fd57e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FD5800  FUN_00fd5800  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fd583a) */
/* WARNING: Removing unreachable block (ram,0x00fd58ac) */

undefined4 * __fastcall FUN_00fd5800(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f45a4;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FD5910  FUN_00fd5910  size=21  [run]
void __fastcall FUN_00fd5910(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FD5930  FUN_00fd5930  size=454  [run]
/* WARNING: Removing unreachable block (ram,0x00fd596a) */
/* WARNING: Removing unreachable block (ram,0x00fd59dc) */
/* WARNING: Removing unreachable block (ram,0x00fd5a44) */
/* WARNING: Removing unreachable block (ram,0x00fd5ab8) */

undefined4 * __fastcall FUN_00fd5930(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f45ac;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00FD5B30  FUN_00fd5b30  size=31  [run]
void __fastcall FUN_00fd5b30(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FD5B50  FUN_00fd5b50  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fd5b8a) */
/* WARNING: Removing unreachable block (ram,0x00fd5bfc) */

undefined4 * __fastcall FUN_00fd5b50(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f45b4;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FD5C60  FUN_00fd5c60  size=21  [run]
void __fastcall FUN_00fd5c60(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FD5C80  FUN_00fd5c80  size=678  [run]
/* WARNING: Removing unreachable block (ram,0x00fd5cba) */
/* WARNING: Removing unreachable block (ram,0x00fd5d2c) */
/* WARNING: Removing unreachable block (ram,0x00fd5e70) */
/* WARNING: Removing unreachable block (ram,0x00fd5d94) */
/* WARNING: Removing unreachable block (ram,0x00fd5e08) */
/* WARNING: Removing unreachable block (ram,0x00fd5ee1) */

undefined4 * __fastcall FUN_00fd5c80(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f45bc;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00FD5F90  FUN_00fd5f90  size=238  [run]
/* WARNING: Removing unreachable block (ram,0x00fd5fca) */
/* WARNING: Removing unreachable block (ram,0x00fd603c) */

undefined4 * __fastcall FUN_00fd5f90(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f45c4;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00FD60A0  FUN_00fd60a0  size=21  [run]
void __fastcall FUN_00fd60a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00FD60C0  FUN_00fd60c0  size=557  [run]
/* WARNING: Removing unreachable block (ram,0x00fd6220) */
/* WARNING: Removing unreachable block (ram,0x00fd6139) */
/* WARNING: Removing unreachable block (ram,0x00fd61ab) */
/* WARNING: Removing unreachable block (ram,0x00fd62a5) */

undefined4 * __fastcall FUN_00fd60c0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3fb4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 00FD62F0  FUN_00fd62f0  size=911  [run]
/* WARNING: Removing unreachable block (ram,0x00fd65b2) */
/* WARNING: Removing unreachable block (ram,0x00fd64aa) */
/* WARNING: Removing unreachable block (ram,0x00fd639c) */
/* WARNING: Removing unreachable block (ram,0x00fd642c) */
/* WARNING: Removing unreachable block (ram,0x00fd6534) */
/* WARNING: Removing unreachable block (ram,0x00fd663b) */

undefined4 * __fastcall FUN_00fd62f0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f3ff4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  param_1[0x2d] = 0;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2d] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2d] = param_1[0x2d] & 0x7fffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2d] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2d] = param_1[0x2d] & 0x7fffffff;
  return param_1;
}

// 00FD6680  FUN_00fd6680  size=605  [run]
/* WARNING: Removing unreachable block (ram,0x00fd680d) */
/* WARNING: Removing unreachable block (ram,0x00fd670b) */
/* WARNING: Removing unreachable block (ram,0x00fd6792) */
/* WARNING: Removing unreachable block (ram,0x00fd6895) */

undefined4 * __fastcall FUN_00fd6680(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4024;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  return param_1;
}

// 00FD68E0  FUN_00fd68e0  size=770  [run]
/* WARNING: Removing unreachable block (ram,0x00fd6b15) */
/* WARNING: Removing unreachable block (ram,0x00fd6a2e) */
/* WARNING: Removing unreachable block (ram,0x00fd6950) */
/* WARNING: Removing unreachable block (ram,0x00fd69c2) */
/* WARNING: Removing unreachable block (ram,0x00fd6aa0) */
/* WARNING: Removing unreachable block (ram,0x00fd6b9a) */

undefined4 * __fastcall FUN_00fd68e0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f402c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 00FD6BF0  FUN_00fd6bf0  size=770  [run]
/* WARNING: Removing unreachable block (ram,0x00fd6e25) */
/* WARNING: Removing unreachable block (ram,0x00fd6d3e) */
/* WARNING: Removing unreachable block (ram,0x00fd6c60) */
/* WARNING: Removing unreachable block (ram,0x00fd6cd2) */
/* WARNING: Removing unreachable block (ram,0x00fd6db0) */
/* WARNING: Removing unreachable block (ram,0x00fd6eaa) */

undefined4 * __fastcall FUN_00fd6bf0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4034;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 00FD6F00  FUN_00fd6f00  size=770  [run]
/* WARNING: Removing unreachable block (ram,0x00fd7135) */
/* WARNING: Removing unreachable block (ram,0x00fd704e) */
/* WARNING: Removing unreachable block (ram,0x00fd6f70) */
/* WARNING: Removing unreachable block (ram,0x00fd6fe2) */
/* WARNING: Removing unreachable block (ram,0x00fd70c0) */
/* WARNING: Removing unreachable block (ram,0x00fd71ba) */

undefined4 * __fastcall FUN_00fd6f00(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f403c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 00FD7210  FUN_00fd7210  size=619  [run]
/* WARNING: Removing unreachable block (ram,0x00fd73af) */
/* WARNING: Removing unreachable block (ram,0x00fd72aa) */
/* WARNING: Removing unreachable block (ram,0x00fd7334) */
/* WARNING: Removing unreachable block (ram,0x00fd7437) */

undefined4 * __fastcall FUN_00fd7210(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4044;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00FD7480  FUN_00fd7480  size=605  [run]
/* WARNING: Removing unreachable block (ram,0x00fd760d) */
/* WARNING: Removing unreachable block (ram,0x00fd750b) */
/* WARNING: Removing unreachable block (ram,0x00fd7592) */
/* WARNING: Removing unreachable block (ram,0x00fd7695) */

undefined4 * __fastcall FUN_00fd7480(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4078;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  return param_1;
}

// 00FD76E0  FUN_00fd76e0  size=947  [run]
/* WARNING: Removing unreachable block (ram,0x00fd79c6) */
/* WARNING: Removing unreachable block (ram,0x00fd78be) */
/* WARNING: Removing unreachable block (ram,0x00fd77b0) */
/* WARNING: Removing unreachable block (ram,0x00fd7840) */
/* WARNING: Removing unreachable block (ram,0x00fd7948) */
/* WARNING: Removing unreachable block (ram,0x00fd7a4f) */

undefined4 * __fastcall FUN_00fd76e0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4080;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2d] = 0;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2d] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x2d] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2d] = param_1[0x2d] & 0x7fffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2d] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2d] = param_1[0x2d] & 0x7fffffff;
  param_1[0x30] = 0;
  uVar1 = param_1[0x30];
  param_1[0x30] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x30] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x30] = param_1[0x30] & 0x7fffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0;
  uVar1 = param_1[0x30];
  param_1[0x30] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x30] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x30] = param_1[0x30] & 0x7fffffff;
  param_1[0x33] = 0;
  uVar1 = param_1[0x33];
  param_1[0x33] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x33] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0;
  uVar1 = param_1[0x33];
  param_1[0x33] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x33] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  return param_1;
}

// 00FD7AA0  FUN_00fd7aa0  size=947  [run]
/* WARNING: Removing unreachable block (ram,0x00fd7d86) */
/* WARNING: Removing unreachable block (ram,0x00fd7c7e) */
/* WARNING: Removing unreachable block (ram,0x00fd7b70) */
/* WARNING: Removing unreachable block (ram,0x00fd7c00) */
/* WARNING: Removing unreachable block (ram,0x00fd7d08) */
/* WARNING: Removing unreachable block (ram,0x00fd7e0f) */

undefined4 * __fastcall FUN_00fd7aa0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4088;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2d] = 0;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2d] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x2d] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2d] = param_1[0x2d] & 0x7fffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2d] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2d] = param_1[0x2d] & 0x7fffffff;
  param_1[0x30] = 0;
  uVar1 = param_1[0x30];
  param_1[0x30] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x30] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x30] = param_1[0x30] & 0x7fffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0;
  uVar1 = param_1[0x30];
  param_1[0x30] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x30] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x30] = param_1[0x30] & 0x7fffffff;
  param_1[0x33] = 0;
  uVar1 = param_1[0x33];
  param_1[0x33] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x33] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0;
  uVar1 = param_1[0x33];
  param_1[0x33] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x33] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x33] = param_1[0x33] & 0x7fffffff;
  return param_1;
}

// 00FD7E60  FUN_00fd7e60  size=647  [run]
/* WARNING: Removing unreachable block (ram,0x00fd801a) */
/* WARNING: Removing unreachable block (ram,0x00fd7f0c) */
/* WARNING: Removing unreachable block (ram,0x00fd7f9c) */
/* WARNING: Removing unreachable block (ram,0x00fd80a3) */

undefined4 * __fastcall FUN_00fd7e60(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4090;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  return param_1;
}

// 00FD80F0  FUN_00fd80f0  size=647  [run]
/* WARNING: Removing unreachable block (ram,0x00fd82aa) */
/* WARNING: Removing unreachable block (ram,0x00fd819c) */
/* WARNING: Removing unreachable block (ram,0x00fd822c) */
/* WARNING: Removing unreachable block (ram,0x00fd8333) */

undefined4 * __fastcall FUN_00fd80f0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4098;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0;
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x2a] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x2a] = param_1[0x2a] & 0x7fffffff;
  return param_1;
}

// 00FD8380  FUN_00fd8380  size=871  [run]
/* WARNING: Removing unreachable block (ram,0x00fd85ee) */
/* WARNING: Removing unreachable block (ram,0x00fd84e9) */
/* WARNING: Removing unreachable block (ram,0x00fd83f9) */
/* WARNING: Removing unreachable block (ram,0x00fd8471) */
/* WARNING: Removing unreachable block (ram,0x00fd8570) */
/* WARNING: Removing unreachable block (ram,0x00fd8678) */

undefined4 * __fastcall FUN_00fd8380(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f40a0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  return param_1;
}

// 00FD86F0  FUN_00fd86f0  size=284  [run]
/* WARNING: Removing unreachable block (ram,0x00fd8757) */
/* WARNING: Removing unreachable block (ram,0x00fd87ca) */

undefined4 * __fastcall FUN_00fd86f0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f40c4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  return param_1;
}

// 00FD8810  FUN_00fd8810  size=284  [run]
/* WARNING: Removing unreachable block (ram,0x00fd8877) */
/* WARNING: Removing unreachable block (ram,0x00fd88ea) */

undefined4 * __fastcall FUN_00fd8810(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f40d8;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  return param_1;
}

// 00FD8930  FUN_00fd8930  size=284  [run]
/* WARNING: Removing unreachable block (ram,0x00fd8997) */
/* WARNING: Removing unreachable block (ram,0x00fd8a0a) */

undefined4 * __fastcall FUN_00fd8930(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f40e0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  return param_1;
}

// 00FD8A50  FUN_00fd8a50  size=863  [run]
/* WARNING: Removing unreachable block (ram,0x00fd8cdf) */
/* WARNING: Removing unreachable block (ram,0x00fd8bdd) */
/* WARNING: Removing unreachable block (ram,0x00fd8adb) */
/* WARNING: Removing unreachable block (ram,0x00fd8b62) */
/* WARNING: Removing unreachable block (ram,0x00fd8c64) */
/* WARNING: Removing unreachable block (ram,0x00fd8d67) */

undefined4 * __fastcall FUN_00fd8a50(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f40e8;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00FD8DB0  FUN_00fd8db0  size=863  [run]
/* WARNING: Removing unreachable block (ram,0x00fd903f) */
/* WARNING: Removing unreachable block (ram,0x00fd8f3d) */
/* WARNING: Removing unreachable block (ram,0x00fd8e3b) */
/* WARNING: Removing unreachable block (ram,0x00fd8ec2) */
/* WARNING: Removing unreachable block (ram,0x00fd8fc4) */
/* WARNING: Removing unreachable block (ram,0x00fd90c7) */

undefined4 * __fastcall FUN_00fd8db0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f40f0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00FD9110  FUN_00fd9110  size=619  [run]
/* WARNING: Removing unreachable block (ram,0x00fd92af) */
/* WARNING: Removing unreachable block (ram,0x00fd91aa) */
/* WARNING: Removing unreachable block (ram,0x00fd9234) */
/* WARNING: Removing unreachable block (ram,0x00fd9337) */

undefined4 * __fastcall FUN_00fd9110(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f40f8;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00FD9380  FUN_00fd9380  size=275  [run]
/* WARNING: Removing unreachable block (ram,0x00fd93de) */
/* WARNING: Removing unreachable block (ram,0x00fd9451) */

undefined4 * __fastcall FUN_00fd9380(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4120;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  return param_1;
}

// 00FD94A0  FUN_00fd94a0  size=563  [run]
/* WARNING: Removing unreachable block (ram,0x00fd9600) */
/* WARNING: Removing unreachable block (ram,0x00fd968f) */

undefined4 * __fastcall FUN_00fd94a0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4138;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x30] = 0xffffffff;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0xffffffff;
  param_1[0x36] = 0xffffffff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0xffffffff;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3b] = 0xffffffff;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3d] = 0xffffffff;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  param_1[0x42] = 0xffffffff;
  param_1[0x45] = 0;
  uVar1 = param_1[0x45];
  param_1[0x45] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x45] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x45] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x45] = param_1[0x45] & 0x7fffffff;
  param_1[0x43] = 0xffffffff;
  param_1[0x44] = 0xffffffff;
  param_1[0x45] = 0;
  uVar1 = param_1[0x45];
  param_1[0x45] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x45] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x45] = param_1[0x45] & 0x7fffffff;
  return param_1;
}

// 00FD96E0  FUN_00fd96e0  size=284  [run]
/* WARNING: Removing unreachable block (ram,0x00fd9747) */
/* WARNING: Removing unreachable block (ram,0x00fd97ba) */

undefined4 * __fastcall FUN_00fd96e0(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4250;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  return param_1;
}

// 00FD9800  FUN_00fd9800  size=863  [run]
/* WARNING: Removing unreachable block (ram,0x00fd9a8f) */
/* WARNING: Removing unreachable block (ram,0x00fd998d) */
/* WARNING: Removing unreachable block (ram,0x00fd988b) */
/* WARNING: Removing unreachable block (ram,0x00fd9912) */
/* WARNING: Removing unreachable block (ram,0x00fd9a14) */
/* WARNING: Removing unreachable block (ram,0x00fd9b17) */

undefined4 * __fastcall FUN_00fd9800(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4264;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00FD9B60  FUN_00fd9b60  size=182  [run]
/* WARNING: Removing unreachable block (ram,0x00fd9be3) */

undefined4 * __fastcall FUN_00fd9b60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f426c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  puVar1 = param_1 + 0x19;
  local_8 = 3;
  do {
    puVar1[2] = 0x1000000;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0x1000000;
    puVar1[2] = 0x1111111;
    puVar1 = puVar1 + 3;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return param_1;
}

// 00FD9C20  FUN_00fd9c20  size=506  [run]
/* WARNING: Removing unreachable block (ram,0x00fd9d65) */
/* WARNING: Removing unreachable block (ram,0x00fd9c87) */
/* WARNING: Removing unreachable block (ram,0x00fd9cf9) */
/* WARNING: Removing unreachable block (ram,0x00fd9dd8) */

undefined4 * __fastcall FUN_00fd9c20(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f4284;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00FD9E20  FUN_00fd9e20  size=292  [run]
/* WARNING: Removing unreachable block (ram,0x00fd9e75) */
/* WARNING: Removing unreachable block (ram,0x00fd9ee7) */

undefined4 * __fastcall FUN_00fd9e20(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = &PTR_FUN_016f42c4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  return param_1;
}

// 00FD9F50  FUN_00fd9f50  size=67  [run]
undefined4 * __thiscall FUN_00fd9f50(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4574;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FD9FA0  FUN_00fd9fa0  size=91  [run]
undefined4 * __thiscall FUN_00fd9fa0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f457c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA000  FUN_00fda000  size=94  [run]
undefined4 * __thiscall FUN_00fda000(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4584;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA060  FUN_00fda060  size=64  [run]
undefined4 * __thiscall FUN_00fda060(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f458c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA0A0  FUN_00fda0a0  size=67  [run]
undefined4 * __thiscall FUN_00fda0a0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f4594;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA0F0  FUN_00fda0f0  size=55  [run]
undefined4 * __thiscall FUN_00fda0f0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f459c;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA130  FUN_00fda130  size=55  [run]
undefined4 * __thiscall FUN_00fda130(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f45a4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA170  FUN_00fda170  size=67  [run]
undefined4 * __thiscall FUN_00fda170(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f45ac;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA1C0  FUN_00fda1c0  size=55  [run]
undefined4 * __thiscall FUN_00fda1c0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f45b4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA200  FUN_00fda200  size=76  [run]
undefined4 * __thiscall FUN_00fda200(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f45bc;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA250  FUN_00fda250  size=55  [run]
undefined4 * __thiscall FUN_00fda250(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_016f45c4;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

