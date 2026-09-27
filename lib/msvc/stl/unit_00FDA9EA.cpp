// lib/msvc/stl/unit_00FDA9EA.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA9EA..00FDAA14, 2 functions

#include "mgrr.h"

// 00FDA9EA  std::locale::_Setgloballocale  size=42  [run]
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Setgloballocale(void *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::locale::_Setgloballocale(void *param_1)

{
  if (DAT_01f8edc5 == '\0') {
    DAT_01f8edc5 = '\x01';
    _Atexit(tidy_global);
  }
  DAT_01f8eda0 = param_1;
  return;
}

// 00FDAA14  std::locale::_Locimp::_Locimp_dtor  size=96  [run]
/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static void __cdecl std::locale::_Locimp::_Locimp_dtor(class std::locale::_Locimp *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::locale::_Locimp::_Locimp_dtor(_Locimp *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _Lockit local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0xfdaa20;
  _Lockit::_Lockit(local_14,0);
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 4) != 0) {
      puVar1 = (undefined4 *)FUN_00e134b0();
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  _free(*(void **)(param_1 + 8));
  local_8 = 0xffffffff;
  FUN_00fda874();
  return;
}

