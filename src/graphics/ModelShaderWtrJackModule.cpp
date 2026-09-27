// src/graphics/ModelShaderWtrJackModule.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F6920..00EF81C0, 4 functions

#include "mgrr.h"
#include "ModelShaderWtrJackModule.h"

// 009F6920  ModelShaderWtrJackModule::ModelShaderWtrJackModule  size=186  [class]
undefined4 * __fastcall ModelShaderWtrJackModule::ModelShaderWtrJackModule(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x124] = 0;
  FUN_00a7c930();
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined1 *)((int)param_1 + 0x4a2) = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  FUN_00a7c930();
  FUN_00a7c930();
  return param_1;
}

// 009F6A40  ModelShaderWtrJackModule::vf00  size=43  [class]
undefined4 __thiscall ModelShaderWtrJackModule::vf00(undefined4 param_1,byte param_2)

{
  Spline<float>::Spline<float>();
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF8170  ModelShaderWtrJackModule::vf18  size=72  [class]
bool __thiscall ModelShaderWtrJackModule::vf18(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 100) != param_2) &&
      ((*(int **)(param_1 + 0x420) == (int *)0x0 ||
       (**(int **)(param_1 + 0x420) != *(int *)(param_2 + 8))))) &&
     ((*(int **)(param_1 + 0x424) == (int *)0x0 ||
      (**(int **)(param_1 + 0x424) != *(int *)(param_2 + 8))))) {
    iVar1 = FUN_009dd7a0(param_2);
    return iVar1 != 0;
  }
  return true;
}

// 00EF81C0  ModelShaderWtrJackModule::vf0C  size=32  [class]
void __fastcall ModelShaderWtrJackModule::vf0C(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

