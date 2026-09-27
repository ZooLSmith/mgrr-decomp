// src/misc/cCollectionIDItemParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098BA80..0099D400, 5 functions

#include "mgrr.h"
#include "cCollectionIDItemParts.h"

// 0098BA80  cCollectionIDItemParts::cCollectionIDItemParts  size=59  [class]
undefined4 * __fastcall cCollectionIDItemParts::cCollectionIDItemParts(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *param_1 = vftable;
  param_1[0xe] = 0;
  return param_1;
}

// 0098BAD0  cCollectionIDItemParts::cCollectionIDItemParts_2  size=115  [class]
undefined4 * cCollectionIDItemParts::cCollectionIDItemParts_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    puVar1[0xe] = 0;
    *puVar1 = vftable;
    puVar1[0xc] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    puVar1[3] = "cCollectionIDItemParts";
    FUN_00d29ca0(0x5e,5);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0098BB50  cCollectionIDItemParts::vf08  size=48  [class]
void __fastcall cCollectionIDItemParts::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  FUN_00cb2600(0);
  return;
}

// 0099D3D0  cCollectionIDItemParts::vf00  size=36  [class]
undefined4 * __thiscall cCollectionIDItemParts::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0099D400  cCollectionIDItemParts::vf14  size=195  [class]
void __fastcall cCollectionIDItemParts::vf14(int param_1)

{
  float10 fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 local_18 [24];
  
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    fVar1 = (float10)FUN_00cad4d0(0);
    fVar2 = (float)(fVar1 * (float10)*(float *)(param_1 + 0x38));
    fVar1 = (float10)FUN_00cad4b0(fVar2);
    FUN_00cb2710((float)(fVar1 * (float10)*(float *)(param_1 + 0x34)),fVar2,uVar3);
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    FUN_0099a350(local_18,"id_f_%03d",*(int *)(param_1 + 0x28));
    uVar3 = FUN_00e03ea0(local_18);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x1c),uVar3);
    uVar3 = FUN_00e03ea0(local_18);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x24),uVar3);
    FUN_0099a350(local_18,"id_b_%03d",*(undefined4 *)(param_1 + 0x28));
    uVar3 = FUN_00e03ea0(local_18);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x20),uVar3);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}

