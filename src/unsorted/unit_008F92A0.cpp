// src/unsorted/unit_008F92A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F92A0..008F9610, 3 functions

#include "mgrr.h"

// 008F92A0  FUN_008f92a0  size=776  [run]
void FUN_008f92a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int unaff_retaddr;
  undefined4 uVar8;
  
  FUN_004066f0();
  piVar3 = (int *)FUN_0092c060();
  iVar4 = (**(code **)(*piVar3 + 0x18))(param_2);
  if (iVar4 == 0) {
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    uVar8 = 0;
    uVar5 = FUN_010093a0(0);
    iVar4 = FUN_010d8fb0(uVar5,uVar8);
    if (*(int *)(iVar4 + 0x14) != 0) {
      iVar4 = FUN_010ce280(*(uint *)(unaff_retaddr + 0x78) & 0xfffffffe);
      if (iVar4 == 0) {
        FUN_00406760();
        return;
      }
      iVar4 = FUN_010cd530("hkAttr");
      if (iVar4 != 0) {
        iVar6 = FUN_010cc7b0("MainAttrValue");
        pvVar2 = ThreadLocalStoragePointer;
        iVar4 = _tls_index;
        if (iVar6 != 0) {
          uVar1 = **(uint **)(iVar6 + 8);
          FUN_004066f0();
          puVar7 = (uint *)(-(uint)(*(uint *)(unaff_retaddr + 0xc) != 0) &
                           *(uint *)(unaff_retaddr + 0xc));
          *puVar7 = *puVar7 | 0x200;
          puVar7[0xb] = uVar1;
          if (DAT_01885d68 != 1) {
            piVar3 = (int *)(*(int *)((int)pvVar2 + iVar4 * 4) + 4);
            *piVar3 = *piVar3 + -1;
            if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        iVar6 = FUN_010cc7b0("FlagValue");
        if (iVar6 != 0) {
          uVar1 = **(uint **)(iVar6 + 8);
          FUN_004066f0();
          puVar7 = (uint *)(-(uint)(*(uint *)(unaff_retaddr + 0xc) != 0) &
                           *(uint *)(unaff_retaddr + 0xc));
          *puVar7 = *puVar7 | 0x400;
          puVar7[0xc] = uVar1;
          if (DAT_01885d68 != 1) {
            piVar3 = (int *)(*(int *)((int)pvVar2 + iVar4 * 4) + 4);
            *piVar3 = *piVar3 + -1;
            if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        iVar6 = FUN_010cc7b0("VersusFilter");
        if (iVar6 != 0) {
          FUN_004066f0();
          uVar1 = *(uint *)(unaff_retaddr + 0xc);
          if (uVar1 != 0) {
            puVar7 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
            *puVar7 = *puVar7 | 1;
            puVar7[2] = puVar7[2] | 0x40;
          }
          if (DAT_01885d68 != 1) {
            piVar3 = (int *)(*(int *)((int)pvVar2 + iVar4 * 4) + 4);
            *piVar3 = *piVar3 + -1;
            if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          uVar1 = **(uint **)(iVar6 + 8);
          FUN_004066f0();
          puVar7 = (uint *)(-(uint)(*(uint *)(unaff_retaddr + 0xc) != 0) &
                           *(uint *)(unaff_retaddr + 0xc));
          *puVar7 = *puVar7 | 4;
          puVar7[4] = uVar1;
          if (DAT_01885d68 != 1) {
            piVar3 = (int *)(*(int *)((int)pvVar2 + iVar4 * 4) + 4);
            *piVar3 = *piVar3 + -1;
            if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
        iVar6 = FUN_010cc7b0("EmMovePass");
        if ((iVar6 != 0) && (**(int **)(iVar6 + 8) == 0)) {
          FUN_004066f0();
          uVar1 = *(uint *)(unaff_retaddr + 0xc);
          if (uVar1 != 0) {
            puVar7 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
            *puVar7 = *puVar7 | 0x400;
            puVar7[0xc] = puVar7[0xc] | 0x80;
          }
          if (DAT_01885d68 != 1) {
            piVar3 = (int *)(*(int *)((int)pvVar2 + iVar4 * 4) + 4);
            *piVar3 = *piVar3 + -1;
            if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
        }
      }
      FUN_00406760();
      return;
    }
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar3 = (int *)(iVar4 + 4);
  *piVar3 = *piVar3 + -1;
  if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
    return;
  }
  return;
}

// 008F95B0  FUN_008f95b0  size=96  [run]
void FUN_008f95b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    FUN_008f8c00(param_1,param_2);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 008F9610  FUN_008f9610  size=69  [run]
void FUN_008f9610(undefined4 param_1,uint param_2,int param_3)

{
  uint local_4;
  
  FUN_008f8c50(param_1,&local_4);
  if (param_3 != 0) {
    FUN_008f95b0(param_1,local_4 | param_2);
    return;
  }
  FUN_008f95b0(param_1,local_4 & ~param_2);
  return;
}

