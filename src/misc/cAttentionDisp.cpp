// src/misc/cAttentionDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBC290..00CD5A90, 3 functions

#include "mgrr.h"
#include "cAttentionDisp.h"

// 00CBC290  cAttentionDisp::cAttentionDisp  size=268  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cAttentionDisp::cAttentionDisp(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  DAT_01dc4e60 = 0;
  DAT_01dc4e64 = 0;
  DAT_01dc1224 = 0;
  DAT_01dc4e68 = 0;
  DAT_01dc1238 = 0;
  DAT_01dc4e6c = 0;
  DAT_01dc124c = 0;
  DAT_01dc1260 = 0;
  param_1[2] = 0;
  DAT_01dc4e70 = 0;
  DAT_01dc4e74 = 0;
  DAT_01dc1228 = 0;
  DAT_01dc4e78 = 0;
  DAT_01dc123c = 0;
  DAT_01dc4e7c = 0;
  DAT_01dc1250 = 0;
  DAT_01dc1264 = 0;
  param_1[3] = 0;
  _DAT_01dc4e80 = 0;
  _DAT_01dc4e84 = 0;
  DAT_01dc122c = 0;
  _DAT_01dc4e88 = 0;
  _DAT_01dc1240 = 0;
  _DAT_01dc4e8c = 0;
  _DAT_01dc1254 = 0;
  _DAT_01dc1268 = 0;
  param_1[4] = 0;
  _DAT_01dc4e90 = 0;
  _DAT_01dc4e94 = 0;
  DAT_01dc1230 = 0;
  _DAT_01dc4e98 = 0;
  _DAT_01dc1244 = 0;
  _DAT_01dc4e9c = 0;
  _DAT_01dc1258 = 0;
  _DAT_01dc126c = 0;
  param_1[5] = 0;
  _DAT_01dc4ea0 = 0;
  _DAT_01dc4ea4 = 0;
  DAT_01dc1234 = 0;
  _DAT_01dc4ea8 = 0;
  _DAT_01dc1248 = 0;
  _DAT_01dc4eac = 0;
  _DAT_01dc125c = 0;
  _DAT_01dc1270 = 0;
  return;
}

// 00CD5A40  cAttentionDisp::vf00  size=69  [class]
int * __thiscall cAttentionDisp::vf00(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = (int)vftable;
  iVar2 = 5;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CD5A90  FUN_00cd5a90  size=29  [callgraph]
undefined4 FUN_00cd5a90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x18,&DAT_01b7be50);
  if (iVar1 != 0) {
    uVar2 = cAttentionDisp::cAttentionDisp();
    return uVar2;
  }
  return 0;
}

