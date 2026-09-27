// src/unsorted/unit_00F6AF30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6AF30..00F6AF30, 1 functions

#include "mgrr.h"

// 00F6AF30  FUN_00f6af30  size=319  [run]
/* WARNING: Removing unreachable block (ram,0x00f6b03f) */

undefined4 __fastcall FUN_00f6af30(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
  if ((((iVar2 == 0) || (iVar2 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar2 == 0)) ||
      (iVar2 = FUN_00f9e6d0(param_1 + 0x1c,"g_ViewPos"), iVar2 == 0)) ||
     ((iVar2 = FUN_00f9e6d0(param_1 + 0x13,"g_Param00"), iVar2 == 0 ||
      (iVar2 = FUN_00f9e6d0(param_1 + 0x16,"g_Param01"), iVar2 == 0)))) {
    return 0;
  }
  iVar2 = FUN_00f9e6d0(param_1 + 0x1f,"g_ViewTexMtx");
  if (iVar2 == 0) {
    param_1[0x1f] = -1;
    param_1[0x20] = -1;
    param_1[0x21] = -1;
  }
  iVar2 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
  if (((iVar2 != 0) && (iVar2 = FUN_009e01e0(param_1 + 0x22,"g_BgTexture0",1,1,3), iVar2 != 0)) &&
     (iVar2 = FUN_009e01e0(param_1 + 0x25,"g_Texture1",2,2,1), iVar2 != 0)) {
    uVar1 = param_1[0x24];
    param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x24] = uVar1 & 0xe1fff000 | 0x1000101;
    (**(code **)(*param_1 + 0xc))();
    return 1;
  }
  return 0;
}

