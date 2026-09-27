// src/managers/effectlightmanager/EffectLightManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC6FA0..00EC70E0, 5 functions

#include "mgrr.h"

// 00EC6FA0  FUN_00ec6fa0  size=80  [callgraph]
void __fastcall FUN_00ec6fa0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  return;
}

// 00EC6FF0  FUN_00ec6ff0  size=57  [callgraph]
void __fastcall FUN_00ec6ff0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4d630();
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x3000), 0 < iVar1)) {
    do {
      (*(code *)(&PTR_cLightApplyScale_7_016d6e94)[*(int *)(param_1 + 0x2c)])(param_1);
      param_1 = param_1 + 0x60;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 00EC7030  FUN_00ec7030  size=56  [callgraph]
int __fastcall FUN_00ec7030(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x3000);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 0;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00EC7070  EffectLightManager::setEffectLight  size=109  [class]
undefined4 __thiscall EffectLightManager::setEffectLight(int param_1,void *param_2)

{
  LONG LVar1;
  
  if (0x7f < *(int *)(param_1 + 0x3000)) {
    FUN_00dd5650(&DAT_016d8c60);
    return 0;
  }
  LVar1 = InterlockedIncrement((LONG *)(param_1 + 0x3000));
  if (0x7f < LVar1 + -1) {
    FUN_00dd5650(&DAT_016d8cb0);
    return 0;
  }
  FID_conflict__memcpy((void *)((LVar1 + -1) * 0x60 + param_1),param_2,0x60);
  return 1;
}

// 00EC70E0  EffectLightManager::setEffectLight_2  size=89  [class]
undefined4 __fastcall EffectLightManager::setEffectLight_2(int param_1)

{
  LONG LVar1;
  undefined4 extraout_ECX;
  
  if (0x7f < *(int *)(param_1 + 0x3000)) {
    FUN_00dd5650(&DAT_016d8d00);
    return 0;
  }
  LVar1 = InterlockedIncrement((LONG *)(param_1 + 0x3000));
  if (0x7f < LVar1 + -1) {
    FUN_00dd5650(&DAT_016d8d50);
    return 0;
  }
  FUN_00ec6fa0();
  return extraout_ECX;
}

