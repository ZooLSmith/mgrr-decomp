// lib/msvc/stl/unit_00E0AB40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E0AB40..00E0BF80, 15 functions

#include "types.h"

// 00E0AB40  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_13  size=338  [run]
void std::basic_ostream<char,std::char_traits<char>_>::
     basic_ostream<char,std::char_traits<char>_>_13(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  cVar1 = *param_2;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  FUN_00e1c8c0(cVar1);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0ACA0  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_5  size=335  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_5
               (undefined4 param_1,short *param_2)

{
  short sVar1;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  sVar1 = *param_2;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  if (sVar1 == 0) {
    sVar1 = 0;
  }
  FUN_00e1c8c0(sVar1);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0ADF0  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>  size=327  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
               (undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  FUN_00e1caa0(*param_2);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0AF40  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_14  size=331  [run]
void std::basic_ostream<char,std::char_traits<char>_>::
     basic_ostream<char,std::char_traits<char>_>_14(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  FUN_00e1cc80(*param_2,param_2[1]);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0B090  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_9  size=338  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_9
               (undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  if (*param_2 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*param_2;
  }
  FUN_00e1c8c0(iVar1);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0B1F0  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_2  size=338  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_2
               (undefined4 param_1,short *param_2)

{
  int iVar1;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  if (*param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*param_2;
  }
  FUN_00e1c8c0(iVar1);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0B350  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_10  size=327  [run]
void std::basic_ostream<char,std::char_traits<char>_>::
     basic_ostream<char,std::char_traits<char>_>_10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  FUN_00e1c8c0(*param_2);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0B4A0  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_6  size=357  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_6
               (undefined4 param_1,float *param_2)

{
  float local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_20 [5];
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0.0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_cc = 0.0;
  local_74 = 0;
  local_70 = 0;
  if (*param_2 != 0.0) {
    local_cc = *param_2;
  }
  FUN_00e1ce60(local_cc);
  FUN_00e1ff40(local_20);
  FUN_00e1e780(local_20);
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(local_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0B610  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_11  size=351  [run]
void std::basic_ostream<char,std::char_traits<char>_>::
     basic_ostream<char,std::char_traits<char>_>_11(undefined4 param_1,double *param_2)

{
  double dVar1;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  uint local_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0();
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  dVar1 = 0.0;
  local_74 = 0;
  local_70 = 0;
  if (*param_2 != 0.0) {
    dVar1 = *param_2;
  }
  FUN_00e1d040(dVar1);
  FUN_00e1ff40();
  FUN_00e1e780();
  if ((0xf < local_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)();
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0B770  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_3  size=360  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_3
               (undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 auStack_20 [5];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  uVar3 = param_2[1];
  puVar2 = &DAT_01663284;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  uVar1 = FUN_00e1ce60(*param_2);
  FUN_00e1d920(uVar1,puVar2,uVar3);
  FUN_00e1ce60(uVar3);
  FUN_00e1ff40(auStack_20);
  FUN_00e1e780(auStack_20);
  if ((0xf < uStack_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(auStack_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0B8E0  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_8  size=388  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_8
               (undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 auStack_20 [5];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  uVar5 = param_2[2];
  puVar4 = &DAT_01663284;
  uVar2 = param_2[1];
  puVar3 = &DAT_01663284;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  uVar1 = FUN_00e1ce60(*param_2);
  FUN_00e1d920(uVar1,puVar3,uVar2,puVar4,uVar5);
  uVar2 = FUN_00e1ce60(uVar2);
  FUN_00e1d920(uVar2);
  FUN_00e1ce60(uVar5);
  FUN_00e1ff40(auStack_20);
  FUN_00e1e780(auStack_20);
  if ((0xf < uStack_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(auStack_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0BA70  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_4  size=422  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_4
               (undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 auStack_20 [5];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  uVar7 = param_2[3];
  puVar6 = &DAT_01663284;
  uVar3 = param_2[2];
  puVar5 = &DAT_01663284;
  uVar2 = param_2[1];
  puVar4 = &DAT_01663284;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  uVar1 = FUN_00e1ce60(*param_2);
  FUN_00e1d920(uVar1,puVar4,uVar2,puVar5,uVar3,puVar6,uVar7);
  uVar2 = FUN_00e1ce60(uVar2);
  FUN_00e1d920(uVar2);
  uVar3 = FUN_00e1ce60(uVar3);
  FUN_00e1d920(uVar3);
  FUN_00e1ce60(uVar7);
  FUN_00e1ff40(auStack_20);
  FUN_00e1e780(auStack_20);
  if ((0xf < uStack_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(auStack_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0BC20  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_7  size=422  [run]
void std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_7
               (undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 auStack_20 [5];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  uVar7 = param_2[3];
  puVar6 = &DAT_01663284;
  uVar3 = param_2[2];
  puVar5 = &DAT_01663284;
  uVar2 = param_2[1];
  puVar4 = &DAT_01663284;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  uVar1 = FUN_00e1ce60(*param_2);
  FUN_00e1d920(uVar1,puVar4,uVar2,puVar5,uVar3,puVar6,uVar7);
  uVar2 = FUN_00e1ce60(uVar2);
  FUN_00e1d920(uVar2);
  uVar3 = FUN_00e1ce60(uVar3);
  FUN_00e1d920(uVar3);
  FUN_00e1ce60(uVar7);
  FUN_00e1ff40(auStack_20);
  FUN_00e1e780(auStack_20);
  if ((0xf < uStack_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(auStack_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0BDD0  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_12  size=422  [run]
void std::basic_ostream<char,std::char_traits<char>_>::
     basic_ostream<char,std::char_traits<char>_>_12(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 auStack_20 [5];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  uVar7 = param_2[3];
  puVar6 = &DAT_01663284;
  uVar3 = param_2[2];
  puVar5 = &DAT_01663284;
  uVar2 = param_2[1];
  puVar4 = &DAT_01663284;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  uVar1 = FUN_00e1ce60(*param_2);
  FUN_00e1d920(uVar1,puVar4,uVar2,puVar5,uVar3,puVar6,uVar7);
  uVar2 = FUN_00e1ce60(uVar2);
  FUN_00e1d920(uVar2);
  uVar3 = FUN_00e1ce60(uVar3);
  FUN_00e1d920(uVar3);
  FUN_00e1ce60(uVar7);
  FUN_00e1ff40(auStack_20);
  FUN_00e1e780(auStack_20);
  if ((0xf < uStack_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(auStack_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

// 00E0BF80  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>_15  size=414  [run]
void std::basic_ostream<char,std::char_traits<char>_>::
     basic_ostream<char,std::char_traits<char>_>_15(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 local_cc;
  undefined **local_c8 [21];
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_68;
  uint local_5c;
  undefined ***local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 auStack_20 [5];
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_cc;
  local_cc = 0;
  local_c8[0] = (undefined **)&DAT_016cc564;
  local_c8[4] = (undefined **)&DAT_016cc55c;
  local_68 = basic_istream<char,std::char_traits<char>_>::vftable;
  local_c8[2] = (undefined **)0x0;
  local_c8[3] = (undefined **)0x0;
  FUN_00e16ac0();
  local_30 = local_c8 + 6;
  local_2c = 0;
  local_28 = FUN_00e1abb0(0x20);
  if (local_30 == (undefined ***)0x0) {
    ios_base::failure::failure(local_5c | 4,0);
  }
  *(undefined ***)((int)local_c8 + *(int *)((int)local_c8[4] + 4) + 0x10) = vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)local_c8 + (int)local_c8[0][1]) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  uVar3 = (uint)*param_2;
  uVar4 = (uint)param_2[1];
  uVar1 = (uint)param_2[2];
  puVar7 = &DAT_01663284;
  puVar6 = &DAT_01663284;
  puVar5 = &DAT_01663284;
  local_c8[6] = basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  local_74 = 0;
  local_70 = 0;
  uVar2 = FUN_00e1c8c0(param_2[3]);
  FUN_00e1d920(uVar2,puVar5,uVar1,puVar6,uVar4,puVar7,uVar3);
  uVar2 = FUN_00e1c8c0(uVar1);
  FUN_00e1d920(uVar2);
  uVar2 = FUN_00e1c8c0(uVar4);
  FUN_00e1d920(uVar2);
  FUN_00e1c8c0(uVar3);
  FUN_00e1ff40(auStack_20);
  FUN_00e1e780(auStack_20);
  if ((0xf < uStack_c) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(auStack_20[0]);
  }
  ios_base::ios_base();
  __security_check_cookie(local_4 ^ (uint)&local_cc);
  return;
}

