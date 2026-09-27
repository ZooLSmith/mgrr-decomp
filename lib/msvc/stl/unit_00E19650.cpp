// lib/msvc/stl/unit_00E19650.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E19650..00E19700, 3 functions

#include "mgrr.h"

// 00E19650  std::basic_iostream<char,std::char_traits<char>_>::vf00  size=85  [run]
ios_base * __thiscall
std::basic_iostream<char,std::char_traits<char>_>::vf00(ios_base *param_1,byte param_2)

{
  ios_base *piVar1;
  
  piVar1 = param_1 + -0x18;
  *(undefined ***)(param_1 + *(int *)(*(int *)piVar1 + 4) + -0x18) = vftable;
  *(undefined ***)(param_1 + *(int *)(*(int *)(param_1 + -8) + 4) + -8) =
       basic_ostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)(param_1 + *(int *)(*(int *)(param_1 + -0x18) + 4) + -0x18) =
       basic_istream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)param_1 = ios_base::vftable;
  ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(piVar1);
  }
  return piVar1;
}

// 00E196B0  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf00  size=43  [run]
undefined4 * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00e16db0();
  basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E19700  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>  size=70  [run]
undefined4 * __thiscall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::
basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  
  basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>();
  uVar1 = 0;
  *param_1 = vftable;
  if ((param_2 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_2 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  param_1[0x10] = uVar1;
  param_1[0xf] = 0;
  return param_1;
}

