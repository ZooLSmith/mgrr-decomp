// src/ui/cMenuKeyInfo.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00991140..009A29D0, 3 functions

#include "types.h"

// 00991140  cMenuKeyInfo::cMenuKeyInfo  size=119  [class]
undefined4 * __fastcall cMenuKeyInfo::cMenuKeyInfo(undefined4 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x43] = 0;
  param_1[0x1f] = 0;
  param_1[0x44] = 0;
  param_1[0x21] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *param_1 = vftable;
  param_1[0x22] = 1;
  _memset(param_1 + 3,0,0x50);
  return param_1;
}

// 009A2980  cMenuKeyInfo::vf00  size=69  [class]
undefined4 * __thiscall cMenuKeyInfo::vf00(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = vftable;
  piVar1 = param_1 + 3;
  iVar2 = 0x14;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A29D0  FUN_009a29d0  size=61  [callgraph]
int FUN_009a29d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x120,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cMenuKeyInfo::cMenuKeyInfo();
    if (iVar1 != 0) {
      uVar2 = FUN_00de4500("ui_menu_keyinfo.mkd");
      *(undefined4 *)(iVar1 + 4) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

