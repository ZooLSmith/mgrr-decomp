// src/effect/cEspModel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DFAC0..00F12AB0, 3 functions

#include "mgrr.h"
#include "cEspModel.h"

// 009DFAC0  cEspModel::vf00  size=36  [class]
undefined4 * __thiscall cEspModel::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EE04A0  cEspModel::vf18  size=90  [class]
undefined4 __thiscall cEspModel::vf18(int param_1,int param_2)

{
  if ((((*(int *)(param_1 + 100) != param_2) &&
       ((*(int **)(param_1 + 0x420) == (int *)0x0 ||
        (**(int **)(param_1 + 0x420) != *(int *)(param_2 + 8))))) &&
      ((*(int **)(param_1 + 0x424) == (int *)0x0 ||
       (**(int **)(param_1 + 0x424) != *(int *)(param_2 + 8))))) &&
     (((*(int **)(param_1 + 0x458) == (int *)0x0 ||
       (**(int **)(param_1 + 0x458) != *(int *)(param_2 + 8))) &&
      ((*(int **)(param_1 + 0x450) == (int *)0x0 ||
       (**(int **)(param_1 + 0x450) != *(int *)(param_2 + 8))))))) {
    return 0;
  }
  return 1;
}

// 00F12AB0  cEspModel::cEspModel  size=156  [class]
undefined4 * __fastcall cEspModel::cEspModel(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  param_1[0x114] = 0;
  FUN_00a7c930();
  param_1[0x116] = 0;
  param_1[0x11a] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x121] = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x120] = 0;
  param_1[0x11f] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x129] = 0;
  param_1[0x127] = 0xff;
  *(undefined2 *)(param_1 + 0x128) = 0;
  return param_1;
}

