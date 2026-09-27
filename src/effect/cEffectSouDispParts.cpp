// src/effect/cEffectSouDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDE480..00D2DE20, 5 functions

#include "mgrr.h"
#include "cEffectSouDispParts.h"

// 00CDE480  cEffectSouDispParts::vf00  size=63  [class]
undefined4 * __thiscall cEffectSouDispParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CECE50  cEffectSouDispParts::vf08  size=33  [class]
void __fastcall cEffectSouDispParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CECE80  cEffectSouDispParts::vf14  size=122  [class]
void __fastcall cEffectSouDispParts::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    fVar1 = *(float *)(param_1 + 0x20) + 1.0;
    *(float *)(param_1 + 0x20) = fVar1;
    if (5.0 < fVar1) {
      if (*(int *)(param_1 + 0x28) != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(2);
        }
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(0);
        }
        *(undefined4 *)(param_1 + 0x1c) = 2;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x1c) == 1) && (*(int *)(param_1 + 0x18) != 0)) {
    iVar2 = FUN_00cdf400(2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1c) = 2;
      return;
    }
  }
  return;
}

// 00D2DDB0  cEffectSouDispParts::cEffectSouDispParts  size=99  [class]
undefined4 * cEffectSouDispParts::cEffectSouDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x2c,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[8] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[7] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[3] = "cEffectSouDispParts";
    puVar1[2] = 4;
    uVar2 = FUN_00d29960(0x19);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D2DE20  FUN_00d2de20  size=123  [callgraph]
void __fastcall FUN_00d2de20(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_01dc08c8 != 0) && (*(int *)(param_1 + 4) == 0)) {
    uVar1 = cEffectSouDispParts::cEffectSouDispParts();
    *(undefined4 *)(param_1 + 4) = uVar1;
    DAT_01dc08c4 = 1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(*(int *)(param_1 + 4) + 0x24) = DAT_01dc08c8;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x28) = DAT_01dc08cc;
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    if (*(int *)(*(int *)(param_1 + 4) + 0x1c) == 2) {
      DAT_01dc08c4 = 0;
      DAT_01dc08c8 = 0;
      DAT_01dc08cc = 0;
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 4))(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  return;
}

