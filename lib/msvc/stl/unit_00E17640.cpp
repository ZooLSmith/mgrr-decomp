// lib/msvc/stl/unit_00E17640.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E17640..00E176C0, 2 functions

#include "mgrr.h"

// 00E17640  std::bad_alloc::vf00  size=36  [run]
undefined4 * __thiscall std::bad_alloc::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  exception::~exception();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E176C0  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf00  size=31  [run]
undefined4 * __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = locale::facet::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

