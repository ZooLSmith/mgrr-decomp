// lib/msvc/stl/unit_00E18D20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E18D20..00E18D20, 1 functions

#include "mgrr.h"

// 00E18D20  std::runtime_error::runtime_error_2  size=112  [run]
_Lockit * __thiscall std::runtime_error::runtime_error_2(_Lockit *param_1,char *param_2)

{
  undefined **local_c [3];
  
  _Lockit::_Lockit(param_1,0);
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = (_Lockit)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = (_Lockit)0x0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = (_Lockit)0x0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = (_Lockit)0x0;
  if (param_2 == (char *)0x0) {
    param_2 = "bad locale name";
    exception::exception((exception *)local_c,&param_2);
    local_c[0] = vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_01878fcc);
  }
  _Locinfo::_Locinfo_ctor((_Locinfo *)param_1,param_2);
  return param_1;
}

