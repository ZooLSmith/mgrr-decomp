// lib/msvc/stl/unit_00FDA287.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA287..00FDA557, 20 functions

#include "mgrr.h"

// 00FDA287  std::logic_error::logic_error  size=30  [run]
exception * __fastcall std::logic_error::logic_error(exception *param_1)

{
  exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA2AA  std::invalid_argument::invalid_argument  size=36  [run]
exception * __thiscall std::invalid_argument::invalid_argument(exception *param_1,char *param_2)

{
  exception::exception(param_1,&param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA2D3  std::length_error::length_error  size=36  [run]
exception * __thiscall std::length_error::length_error(exception *param_1,char *param_2)

{
  exception::exception(param_1,&param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA2FC  std::out_of_range::out_of_range  size=36  [run]
exception * __thiscall std::out_of_range::out_of_range(exception *param_1,char *param_2)

{
  exception::exception(param_1,&param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA325  std::overflow_error::overflow_error  size=36  [run]
exception * __thiscall std::overflow_error::overflow_error(exception *param_1,char *param_2)

{
  exception::exception(param_1,&param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA34E  std::invalid_argument::invalid_argument  size=47  [run]
void std::invalid_argument::invalid_argument(char *param_1)

{
  undefined **local_10 [3];
  
  exception::exception((exception *)local_10,&param_1);
  local_10[0] = vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_01879aa0);
}

// 00FDA37E  std::logic_error::logic_error  size=29  [run]
exception * __thiscall std::logic_error::logic_error(exception *param_1,exception *param_2)

{
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA39B  std::length_error::length_error  size=47  [run]
void std::length_error::length_error(char *param_1)

{
  undefined **local_10 [3];
  
  exception::exception((exception *)local_10,&param_1);
  local_10[0] = vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_01879af8);
}

// 00FDA3CB  std::length_error::length_error  size=29  [run]
exception * __thiscall std::length_error::length_error(exception *param_1,exception *param_2)

{
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA3E8  std::out_of_range::out_of_range  size=47  [run]
void std::out_of_range::out_of_range(char *param_1)

{
  undefined **local_10 [3];
  
  exception::exception((exception *)local_10,&param_1);
  local_10[0] = vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_01879b34);
}

// 00FDA418  std::out_of_range::out_of_range  size=29  [run]
exception * __thiscall std::out_of_range::out_of_range(exception *param_1,exception *param_2)

{
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA435  std::overflow_error::overflow_error  size=47  [run]
void std::overflow_error::overflow_error(char *param_1)

{
  undefined **local_10 [3];
  
  exception::exception((exception *)local_10,&param_1);
  local_10[0] = vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_01879b70);
}

// 00FDA465  std::runtime_error::runtime_error  size=47  [run]
void std::runtime_error::runtime_error(char *param_1)

{
  undefined **local_10 [3];
  
  exception::exception((exception *)local_10,&param_1);
  local_10[0] = vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_01878fcc);
}

// 00FDA495  std::logic_error::vf00  size=33  [run]
undefined4 __thiscall std::logic_error::vf00(undefined4 param_1,byte param_2)

{
  exception::~exception();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA4B6  std::invalid_argument::vf00  size=33  [run]
undefined4 __thiscall std::invalid_argument::vf00(undefined4 param_1,byte param_2)

{
  exception::~exception();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA4D7  std::length_error::vf00  size=33  [run]
undefined4 __thiscall std::length_error::vf00(undefined4 param_1,byte param_2)

{
  exception::~exception();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA4F8  std::out_of_range::vf00  size=33  [run]
undefined4 __thiscall std::out_of_range::vf00(undefined4 param_1,byte param_2)

{
  exception::~exception();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA519  std::overflow_error::vf00  size=33  [run]
undefined4 __thiscall std::overflow_error::vf00(undefined4 param_1,byte param_2)

{
  exception::~exception();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00FDA53A  std::invalid_argument::invalid_argument  size=29  [run]
exception * __thiscall
std::invalid_argument::invalid_argument(exception *param_1,exception *param_2)

{
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FDA557  std::overflow_error::overflow_error  size=29  [run]
exception * __thiscall std::overflow_error::overflow_error(exception *param_1,exception *param_2)

{
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

