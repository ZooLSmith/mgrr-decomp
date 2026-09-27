// lib/msvc/stl/unit_00E18E00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E18E00..00E18E00, 1 functions

#include "types.h"

// 00E18E00  std::ctype<char>::ctype<char>  size=152  [run]
undefined4 std::ctype<char>::ctype<char>(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  _Ctypevec *p_Var2;
  int iVar3;
  bool bVar4;
  _Ctypevec local_34 [3];
  
  bVar4 = false;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar1 = (undefined4 *)FUN_00dd34e0(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      iVar3 = *(int *)(*param_2 + 0x18);
      bVar4 = true;
      if (iVar3 == 0) {
        iVar3 = *param_2 + 0x1c;
      }
      runtime_error::runtime_error_2(iVar3);
      puVar1[1] = 0;
      *puVar1 = vftable;
      p_Var2 = __Getctype(local_34);
      puVar1[2] = p_Var2->_Page;
      puVar1[3] = p_Var2->_Table;
      puVar1[4] = p_Var2->_Delfl;
      puVar1[5] = p_Var2->_LocaleName;
    }
    *param_1 = (int)puVar1;
    if (bVar4) {
      FUN_00e18d90();
    }
  }
  return 2;
}

