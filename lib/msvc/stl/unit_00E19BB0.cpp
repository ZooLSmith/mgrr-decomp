// lib/msvc/stl/unit_00E19BB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E19BB0..00E19CB0, 5 functions

#include "mgrr.h"

// 00E19BB0  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>  size=127  [run]
undefined4
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  _Collvec _Var4;
  
  bVar3 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_00dd34e0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar2 = *(int *)(*param_2 + 0x18);
      bVar3 = true;
      if (iVar2 == 0) {
        iVar2 = *param_2 + 0x1c;
      }
      runtime_error::runtime_error_2(iVar2);
      puVar1[1] = 0;
      *puVar1 = vftable;
      _Var4 = __Getcoll();
      *(_Collvec *)(puVar1 + 2) = _Var4;
    }
    *param_1 = (int)puVar1;
    if (bVar3) {
      FUN_00e18d90();
    }
  }
  return 4;
}

// 00E19C60  std::numpunct<char>::vf04  size=4  [run]
undefined1 __fastcall std::numpunct<char>::vf04(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}

// 00E19C70  std::numpunct<char>::vf08  size=4  [run]
undefined1 __fastcall std::numpunct<char>::vf08(int param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}

// 00E19C80  std::locale::facet::facet  size=47  [run]
void __fastcall std::locale::facet::facet(undefined4 *param_1)

{
  *param_1 = numpunct<char>::vftable;
  FUN_00dd4940(param_1[2]);
  FUN_00dd4940(param_1[4]);
  FUN_00dd4940(param_1[5]);
  *param_1 = vftable;
  return;
}

// 00E19CB0  std::numpunct<char>::vf00  size=67  [run]
undefined4 * __thiscall std::numpunct<char>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00dd4940(param_1[2]);
  FUN_00dd4940(param_1[4]);
  FUN_00dd4940(param_1[5]);
  *param_1 = locale::facet::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

