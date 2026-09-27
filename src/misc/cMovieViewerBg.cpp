// src/misc/cMovieViewerBg.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00991F20..009A4650, 5 functions

#include "types.h"

// 00991F20  cMovieViewerBg::cMovieViewerBg  size=18  [class]
undefined4 * __fastcall cMovieViewerBg::cMovieViewerBg(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  return param_1;
}

// 00991F50  cMovieViewerBg::cMovieViewerBg_2  size=68  [class]
undefined4 * cMovieViewerBg::cMovieViewerBg_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x1c,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar1 = vftable;
    puVar1[3] = "cMovieViewerBg";
    FUN_00d29ca0(0x7a,0);
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00991FA0  cMovieViewerBg::vf08  size=21  [class]
void cMovieViewerBg::vf08(void)

{
  FUN_00cb2600(1);
  FUN_00cb2630(1);
  return;
}

// 00991FC0  cMovieViewerBg::vf14  size=1  [class]
void cMovieViewerBg::vf14(void)

{
  return;
}

// 009A4650  cMovieViewerBg::vf00  size=36  [class]
undefined4 * __thiscall cMovieViewerBg::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

