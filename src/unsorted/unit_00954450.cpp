// src/unsorted/unit_00954450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00954450..009544C0, 3 functions

#include "mgrr.h"

// 00954450  FUN_00954450  size=74  [run]
int FUN_00954450(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = cItemPossessionBase::cItemPossessionBase(param_1,&local_20);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  return iVar1;
}

// 009544A0  FUN_009544a0  size=32  [run]
undefined4 FUN_009544a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xf0,&DAT_01b7bd48);
  if (iVar1 != 0) {
    uVar2 = cItemStageDrop::cItemStageDrop();
    return uVar2;
  }
  return 0;
}

// 009544C0  FUN_009544c0  size=517  [run]
void __fastcall FUN_009544c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)PTR_DAT_01886ea4;
  do {
    if (piVar3 == (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4)) {
LAB_009544f2:
      FUN_00953e30(*(int *)(param_1 + 0x10));
LAB_009544fb:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      FUN_00e5e050("core_se_sys_item_get",0);
      if (((*(int *)(param_1 + 0x10) == 0x2a5686e6) && (DAT_018b9174 == 0x220)) &&
         ((*(int *)(param_1 + 0x68) == 0 &&
          ((iVar2 = FUN_00c81c60(0x57), iVar2 == 0 &&
           (iVar2 = FUN_00d4f120("P220_SEWER_4",0), iVar2 == 0)))))) {
        FUN_00c81b30(0x57);
        FUN_0093b4a0("P220_DANBO",0,0);
      }
      if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
        FUN_0094e3e0(*(undefined4 *)(param_1 + 0x68));
      }
      if (*(int *)(param_1 + 0x50) != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
      uVar4 = *(undefined4 *)(param_1 + 0x10);
LAB_009546a5:
      FUN_0094f090(uVar4);
      if (*(int *)(param_1 + 0x68) != -1) {
        FUN_0094e550(*(int *)(param_1 + 0x68));
      }
      return;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1[4] == *(int *)(param_1 + 0x10)) {
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x2c))();
        if (iVar2 == 0) {
          (**(code **)(*piVar1 + 0x18))(1);
          goto LAB_009544fb;
        }
        iVar2 = FUN_00a4a350(DAT_018b9174);
        if (iVar2 != 0) {
          return;
        }
        if ((((*(int *)(param_1 + 0x10) == 0x2a5686e6) && (DAT_018b9174 == 0x220)) &&
            (*(int *)(param_1 + 0x68) == 0)) &&
           ((iVar2 = FUN_00c81c60(0x57), iVar2 == 0 &&
            (iVar2 = FUN_00d4f120("P220_SEWER_4",0), iVar2 == 0)))) {
          FUN_00c81b30(0x57);
          FUN_0093b4a0("P220_DANBO",0,0);
        }
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
        uVar4 = FUN_0094aa20(*(undefined4 *)(param_1 + 0x10),1);
        FUN_00cbac80(0xffffffff,uVar4);
        FUN_00e5e050("core_se_sys_item_get",0);
        if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
          FUN_0094e3e0(*(undefined4 *)(param_1 + 0x68));
        }
        if (*(int *)(param_1 + 0x50) != 0) {
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x20))();
        }
        piVar3 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar3 + 0x3c))(*(undefined4 *)(param_1 + 0x1c));
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        goto LAB_009546a5;
      }
      goto LAB_009544f2;
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

