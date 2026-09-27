// src/managers/triggermanager/actions/TrgActResultSetDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C97190..00C97190, 1 functions

#include "mgrr.h"

// 00C97190  Trigger::Act::RESULTSETDISP  size=139  [__FILE__]
undefined4 __fastcall Trigger::Act::RESULTSETDISP(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 0xc);
    *(float *)(param_1 + 0xc) = fVar1;
    if (fVar1 == 0.0) {
      DAT_01dc1308 = 1;
      DAT_01dc1310 = 0;
    }
    iVar3 = *(int *)(iVar2 + 8);
    *(int *)(param_1 + 8) = iVar3;
    if ((iVar3 == 1) || (0.0 < *(float *)(param_1 + 0xc))) {
      FUN_00c950a0(&LAB_00c92d70,0,0,
                   "d:\\project\\prj_020\\p1\\common\\src\\managers\\triggermanager\\actions/TrgActResultSetDisp.cpp"
                   ,0x22);
    }
    if (*(int *)(iVar2 + 8) == 0) {
      DAT_01dc1310 = 1;
    }
    return 1;
  }
  FUN_00dd5650(&DAT_016b1434);
  return 0;
}

