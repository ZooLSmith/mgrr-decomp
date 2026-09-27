// lib/msvc/stl/unit_00E1EC40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E1EC40..00E1EE60, 5 functions

#include "mgrr.h"

// 00E1EC40  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf1C  size=125  [run]
void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf1C
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7)

{
  char *_Format;
  int iVar1;
  undefined1 local_4c [8];
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_4c;
  _Format = (char *)FUN_00e17760(param_1,local_4c,&DAT_016cc4fc,*(undefined4 *)(param_5 + 0x14),
                                 param_7);
  iVar1 = _sprintf_s(local_44,0x40,_Format);
  FUN_00e1d530(param_1,param_2,param_3,param_4,param_5,param_6,local_44,iVar1);
  __security_check_cookie(local_4 ^ (uint)local_4c);
  return;
}

// 00E1ECC0  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf18  size=125  [run]
void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf18
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7)

{
  char *_Format;
  int iVar1;
  undefined1 local_4c [8];
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_4c;
  _Format = (char *)FUN_00e17760(param_1,local_4c,&DAT_016cc500,*(undefined4 *)(param_5 + 0x14),
                                 param_7);
  iVar1 = _sprintf_s(local_44,0x40,_Format);
  FUN_00e1d530(param_1,param_2,param_3,param_4,param_5,param_6,local_44,iVar1);
  __security_check_cookie(local_4 ^ (uint)local_4c);
  return;
}

// 00E1ED40  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf14  size=133  [run]
void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf14
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *_Format;
  int iVar1;
  undefined1 local_4c [8];
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_4c;
  _Format = (char *)FUN_00e17760(param_1,local_4c,&DAT_016cc504,*(undefined4 *)(param_5 + 0x14),
                                 param_7,param_8);
  iVar1 = _sprintf_s(local_44,0x40,_Format);
  FUN_00e1d530(param_1,param_2,param_3,param_4,param_5,param_6,local_44,iVar1);
  __security_check_cookie(local_4 ^ (uint)local_4c);
  return;
}

// 00E1EDD0  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf10  size=133  [run]
void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf10
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *_Format;
  int iVar1;
  undefined1 local_4c [8];
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_4c;
  _Format = (char *)FUN_00e17760(param_1,local_4c,&DAT_016cc508,*(undefined4 *)(param_5 + 0x14),
                                 param_7,param_8);
  iVar1 = _sprintf_s(local_44,0x40,_Format);
  FUN_00e1d530(param_1,param_2,param_3,param_4,param_5,param_6,local_44,iVar1);
  __security_check_cookie(local_4 ^ (uint)local_4c);
  return;
}

// 00E1EE60  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf04  size=103  [run]
void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf04
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_44;
  iVar1 = _sprintf_s(local_44,0x40,"%p",param_7);
  FUN_00e1d530(param_1,param_2,param_3,param_4,param_5,param_6,local_44,iVar1);
  __security_check_cookie(local_4 ^ (uint)local_44);
  return;
}

