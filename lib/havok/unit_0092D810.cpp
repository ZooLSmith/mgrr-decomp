// lib/havok/unit_0092D810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092D810..0092D910, 2 functions

#include "types.h"

// 0092D810  HkDataManagerImplement::vf04  size=242  [run]
void __fastcall HkDataManagerImplement::vf04(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_00dd72e0();
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x74) + 4);
  if (puVar6 != puVar6 + *(int *)(*(int *)(param_1 + 0x74) + 8) * 0x23) {
    do {
      FUN_0092d710(*puVar6,puVar6[1],puVar6 + 0x13);
      iVar2 = *(int *)(param_1 + 0x74);
      uVar3 = *(uint *)(iVar2 + 8);
      iVar5 = *(int *)(iVar2 + 4);
      puVar7 = (undefined4 *)(uVar3 * 0x8c + iVar5);
      if ((((puVar6 != puVar7) && (iVar5 != 0)) && (uVar3 != 0)) &&
         ((uint)(((int)puVar6 - iVar5) / 0x8c) < uVar3)) {
        puVar4 = puVar6;
        while (puVar4 != puVar7 + -0x23) {
          puVar1 = puVar4 + 0x23;
          puVar8 = puVar1;
          puVar9 = puVar4;
          for (iVar5 = 0x23; puVar4 = puVar1, iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
        puVar7 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x74) + 8) * 0x8c +
                       *(int *)(*(int *)(param_1 + 0x74) + 4)));
  }
  FUN_00dd7320();
  return;
}

// 0092D910  HkDataManagerImplement::vf0C  size=380  [run]
undefined4 __fastcall HkDataManagerImplement::vf0C(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  byte local_d8 [4];
  int local_d4;
  undefined1 local_cc;
  undefined1 local_cb [63];
  int local_8c;
  int local_88;
  undefined4 local_84;
  char local_80 [128];
  
  uVar9 = 0;
  bVar2 = false;
  iVar4 = FUN_00c1d6c0();
  if (((iVar4 != 0) || (iVar4 = FUN_00c1d6d0(), iVar4 != 0)) || (DAT_01be8e44 < 2)) {
    bVar2 = true;
  }
  uVar3 = DAT_018b9174;
  if (((DAT_018b9144 == 0) || (DAT_018b9144 == 9)) && (bVar2)) {
    bVar2 = false;
  }
  local_d4 = param_1 + 0x78;
  FUN_00dd72e0();
  uVar5 = FUN_00de3590();
  if (uVar5 != 0) {
    do {
      iVar4 = FUN_00de3c20(local_d8,uVar9);
      if (iVar4 != 0) {
        pbVar8 = &DAT_0164d61c;
        pbVar6 = local_d8;
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0092d9d5:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0092d9da;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0092d9d5;
          pbVar6 = pbVar6 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0092d9da:
        if (((iVar4 == 0) && (iVar4 = FUN_00de3cf0(uVar9), iVar4 != 0)) &&
           (iVar7 = FUN_00de3ee0(uVar9), iVar7 != 0)) {
          local_cc = 0;
          _memset(local_cb,0,0x3f);
          if ((*(int *)(param_1 + 0x74) == 0) || (!bVar2)) {
            FUN_0092d710(iVar4,iVar7,&local_cc);
          }
          else {
            local_84 = uVar3;
            local_8c = iVar4;
            local_88 = iVar7;
            _strcpy_s(local_80,0x40,&DAT_018b917c);
            (**(code **)(**(int **)(param_1 + 0x74) + 8))(&local_8c);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  FUN_00dd7320();
  return 1;
}

