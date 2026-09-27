// src/unsorted/unit_00FDAAD4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDAAD4..00FDAAD4, 1 functions

#include "mgrr.h"

// 00FDAAD4  FUN_00fdaad4  size=78  [run]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00fdaad4(void)

{
  _Fac_node *this;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0xfdaae0;
  std::_Lockit::_Lockit(local_14,0);
  local_8 = 0;
  while (this = DAT_01f8ed9c, DAT_01f8ed9c != (_Fac_node *)0x0) {
    DAT_01f8ed9c = *(_Fac_node **)DAT_01f8ed9c;
    std::_Fac_node::~_Fac_node(this);
    FUN_00dd4920(this);
  }
  local_8 = 0xffffffff;
  FUN_00fda874();
  return;
}

