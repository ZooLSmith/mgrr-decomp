// src/room/ra43.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6F230..00A7B570, 5 functions

#include "types.h"

// 00A6F230  cRa43::vf0C  size=5  [class]
void __fastcall cRa43::vf0C(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  WindActionImplement::WindActionImplement_2(&DAT_01b7bd48);
  piVar1 = (int *)FUN_00dd2380();
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xc47a0000;
  uStack_30 = 0x42c80000;
  uStack_2c = 0x3f800000;
  uStack_28 = 0x447a0000;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0xc3480000;
  (**(code **)(*piVar1 + 4))(&uStack_20,&uStack_30,&uStack_40,0x3f800000,0x3f800000);
  puVar2 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = ScenarioEnemySetCompletedSlot::vftable;
    puVar2[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x88) = puVar2;
  FUN_00d89ec0(0x17,puVar2);
  return;
}

// 00A71160  cRa43::vf04  size=39  [class]
void __fastcall cRa43::vf04(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  piVar1 = (int *)FUN_00dd2380();
                    /* WARNING: Could not recover jumptable at 0x00a71185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}

// 00A72B10  cRa43::vf08  size=88  [class]
void __fastcall cRa43::vf08(int *param_1)

{
  int iVar1;
  
  FUN_00d8a1d0(0x17,param_1[0x22]);
  FUN_00dd2390();
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    FUN_00a54c70();
    FUN_00dd4920(iVar1);
    param_1[0x20] = 0;
  }
  FUN_00a71970();
  (**(code **)(*param_1 + 0x18))();
  FUN_00dd7270();
  return;
}

// 00A77CB0  cRa43::vf00  size=28  [class]
void cRa43::vf00(void)

{
  FUN_00dd7240();
  FUN_00a74000(0x20);
  FUN_00a71970();
  return;
}

// 00A7B570  cRa43::vf14  size=62  [class]
undefined4 * __thiscall cRa43::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = cRoomAbstract::vftable;
  FUN_00dd7270();
  param_1[4] = lib::Array<cRoomAbstract::stRoomEspUnit*>::vftable;
  if (param_1[5] != 0) {
    param_1[6] = 0;
  }
  param_1[5] = 0;
  param_1[7] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

