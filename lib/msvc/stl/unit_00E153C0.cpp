// lib/msvc/stl/unit_00E153C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E153C0..00E153C0, 1 functions

#include "mgrr.h"

// 00E153C0  std::basic_ios<char,std::char_traits<char>_>::vf00  size=40  [run]
ios_base * __thiscall
std::basic_ios<char,std::char_traits<char>_>::vf00(ios_base *param_1,byte param_2)

{
  *(undefined ***)param_1 = ios_base::vftable;
  ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

