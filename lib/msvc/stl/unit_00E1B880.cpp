// lib/msvc/stl/unit_00E1B880.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E1B880..00E1B880, 1 functions

#include "mgrr.h"

// 00E1B880  std::ios_base::ios_base  size=101  [run]
void __fastcall std::ios_base::ios_base(int *param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x18);
  *(undefined ***)(piVar1 + *(int *)(*param_1 + 4) + -0x60) =
       basic_stringstream<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  param_1[6] = (int)basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vftable;
  FUN_00e16db0();
  basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>();
  *(undefined ***)(piVar1 + *(int *)(*param_1 + 4) + -0x60) =
       basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)(piVar1 + *(int *)(param_1[4] + 4) + -0x50) =
       basic_ostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)(piVar1 + *(int *)(*param_1 + 4) + -0x60) =
       basic_istream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)piVar1 = vftable;
  _Ios_base_dtor(piVar1);
  return;
}

