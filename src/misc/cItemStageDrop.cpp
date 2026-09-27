// src/misc/cItemStageDrop.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094CDE0..009544C0, 7 functions

#include "mgrr.h"
#include "cItemStageDrop.h"

// 0094CDE0  cItemStageDrop::vf00  size=6  [class]
char * cItemStageDrop::vf00(void)

{
  return "cItemStageDrop";
}

// 0094CDF0  cItemStageDrop::vf10  size=6  [class]
char * cItemStageDrop::vf10(void)

{
  return "cItemBase";
}

// 00950090  cItemStageDrop::vf04  size=57  [class]
undefined4 * __thiscall cItemStageDrop::vf04(undefined4 *param_1,byte param_2)

{
  param_1[0x18] = 0;
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00952F10  cItemStageDrop::cItemStageDrop_2  size=221  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 cItemStageDrop::cItemStageDrop_2(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_9c;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = (int *)FUN_00dd3500(0x90,&DAT_01b7bd48);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    piVar3[0x14] = 0;
    piVar3[0x18] = 0;
    *piVar3 = (int)vftable;
    piVar3[0x15] = (int)&DAT_01b37438;
    piVar3[0x16] = _DAT_01b37448;
    iVar1 = _DAT_01b37444;
    piVar3[0x19] = -1;
    piVar3[0x1a] = -1;
    piVar3[0x17] = iVar1;
    piVar3[1] = 0x1100;
    iVar1 = *piVar3;
    piVar5 = param_1;
    piVar6 = piVar3 + 2;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar3[0x14] = iVar2;
    (**(code **)(iVar1 + 8))(param_1);
    return uStack_9c;
  }
  FUN_00a805f0();
  return 0;
}

// 00953290  cItemStageDrop::cItemStageDrop  size=175  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cItemStageDrop::cItemStageDrop(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = vftable;
  param_1[0x15] = &DAT_01b37438;
  param_1[1] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = _DAT_01b37448;
  uVar1 = _DAT_01b37444;
  param_1[0x19] = 0xffffffff;
  param_1[0x17] = uVar1;
  param_1[0x1a] = 0xffffffff;
  param_1[1] = 0x1100;
  *param_1 = cItemStageDropChip::vftable;
  param_1[0x30] = 0;
  param_1[0x31] = 10;
  param_1[0x2e] = lib::StaticArray<Entity*,10>::vftable;
  param_1[0x2f] = param_1 + 0x32;
  param_1[0x24] = 1;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f800000;
  if (param_1[0x2f] != 0) {
    param_1[0x30] = 0;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  return;
}

// 009544A0  FUN_009544a0  size=32  [callgraph]
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

// 009544C0  cItemStageDrop::vf1C  size=517  [class]
void __fastcall cItemStageDrop::vf1C(int param_1)

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

