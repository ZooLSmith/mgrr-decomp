// src/misc/cCollectionTitleItemParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098BCD0..0099D5B0, 5 functions

#include "types.h"

// 0098BCD0  cCollectionTitleItemParts::cCollectionTitleItemParts  size=59  [class]
undefined4 * __fastcall cCollectionTitleItemParts::cCollectionTitleItemParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = vftable;
  param_1[0xc] = 0;
  return param_1;
}

// 0098BD20  cCollectionTitleItemParts::cCollectionTitleItemParts_2  size=115  [class]
undefined4 * cCollectionTitleItemParts::cCollectionTitleItemParts_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    puVar1[0xc] = 0;
    *puVar1 = vftable;
    puVar1[10] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[3] = "cCollectionTitleItemParts";
    FUN_00d29ca0(0x60,5);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0098BDA0  cCollectionTitleItemParts::vf08  size=24  [class]
void __fastcall cCollectionTitleItemParts::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_00cb2600(0);
  return;
}

// 0099D580  cCollectionTitleItemParts::vf00  size=36  [class]
undefined4 * __thiscall cCollectionTitleItemParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0099D5B0  cCollectionTitleItemParts::vf14  size=126  [class]
void __fastcall cCollectionTitleItemParts::vf14(int param_1)

{
  float10 fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 local_18 [24];
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    fVar1 = (float10)FUN_00cad4d0(0);
    fVar2 = (float)(fVar1 * (float10)*(float *)(param_1 + 0x30));
    fVar1 = (float10)FUN_00cad4b0(fVar2);
    FUN_00cb2710((float)(fVar1 * (float10)*(float *)(param_1 + 0x2c)),fVar2,uVar3);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x20)) {
    FUN_0099a350(local_18,"honor_%03d",*(int *)(param_1 + 0x20));
    uVar3 = FUN_00e03ea0(local_18);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar3);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  }
  return;
}

