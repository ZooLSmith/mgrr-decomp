// lib/msvc/stl/unit_00E16FE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E16FE0..00E17130, 10 functions

#include "mgrr.h"

// 00E16FE0  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>  size=183  [run]
undefined4 * __fastcall
std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
          (undefined4 *param_1)

{
  undefined4 *puVar1;
  _Locimp *p_Var2;
  int iVar3;
  undefined4 *local_4;
  
  *param_1 = vftable;
  local_4 = param_1;
  _Mutex::_Mutex((_Mutex *)(param_1 + 1));
  puVar1 = (undefined4 *)FUN_00dd34e0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    p_Var2 = locale::_Init();
    *puVar1 = p_Var2;
    iVar3 = FUN_00fda9e4();
    _Lockit::_Lockit((_Lockit *)&local_4,0);
    if (*(int *)(iVar3 + 4) != -1) {
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    }
    FUN_00fda874();
  }
  param_1[0xe] = puVar1;
  param_1[4] = param_1 + 2;
  param_1[8] = param_1 + 6;
  param_1[9] = param_1 + 7;
  param_1[5] = param_1 + 3;
  param_1[0xc] = param_1 + 10;
  param_1[0xd] = param_1 + 0xb;
  param_1[3] = 0;
  *(undefined4 *)param_1[9] = 0;
  *(undefined4 *)param_1[0xd] = 0;
  *(undefined4 *)param_1[4] = 0;
  *(undefined4 *)param_1[8] = 0;
  *(undefined4 *)param_1[0xc] = 0;
  return param_1;
}

// 00E170B0  std::basic_streambuf<char,std::char_traits<char>_>::vf04  size=8  [run]
void std::basic_streambuf<char,std::char_traits<char>_>::vf04(void)

{
  FUN_00fdb1c2();
  return;
}

// 00E170C0  std::basic_streambuf<char,std::char_traits<char>_>::vf08  size=8  [run]
void std::basic_streambuf<char,std::char_traits<char>_>::vf08(void)

{
  FUN_00fdb1cb();
  return;
}

// 00E170D0  std::basic_streambuf<char,std::char_traits<char>_>::vf0C  size=6  [run]
undefined4 std::basic_streambuf<char,std::char_traits<char>_>::vf0C(void)

{
  return 0xffffffff;
}

// 00E170E0  std::basic_streambuf<char,std::char_traits<char>_>::vf10  size=6  [run]
undefined4 std::basic_streambuf<char,std::char_traits<char>_>::vf10(void)

{
  return 0xffffffff;
}

// 00E170F0  std::basic_streambuf<char,std::char_traits<char>_>::vf14  size=5  [run]
undefined8 std::basic_streambuf<char,std::char_traits<char>_>::vf14(void)

{
  return 0;
}

// 00E17100  std::basic_streambuf<char,std::char_traits<char>_>::vf18  size=4  [run]
undefined4 std::basic_streambuf<char,std::char_traits<char>_>::vf18(void)

{
  return 0xffffffff;
}

// 00E17110  std::basic_streambuf<char,std::char_traits<char>_>::vf30  size=5  [run]
undefined4 __fastcall std::basic_streambuf<char,std::char_traits<char>_>::vf30(undefined4 param_1)

{
  return param_1;
}

// 00E17120  std::basic_streambuf<char,std::char_traits<char>_>::vf34  size=3  [run]
undefined4 std::basic_streambuf<char,std::char_traits<char>_>::vf34(void)

{
  return 0;
}

// 00E17130  std::basic_streambuf<char,std::char_traits<char>_>::vf38  size=3  [run]
void std::basic_streambuf<char,std::char_traits<char>_>::vf38(void)

{
  return;
}

