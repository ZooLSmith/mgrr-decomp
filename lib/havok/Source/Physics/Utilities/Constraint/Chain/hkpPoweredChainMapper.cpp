// lib/havok/Source/Physics/Utilities/Constraint/Chain/hkpPoweredChainMapper.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0127AAD0..0127AAD0, 1 functions

#include "types.h"

// 0127AAD0  hkpPoweredChainMapper::hkpPoweredChainMapper  size=1974  [__FILE__]
undefined4 *
hkpPoweredChainMapper::hkpPoweredChainMapper(undefined8 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 local_260 [512];
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  puVar7 = (undefined4 *)(**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x2c);
  puVar7[1] = 0x1002c;
  *puVar7 = vftable;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0x80000000;
  puVar7[7] = 0x80000000;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[10] = 0x80000000;
  puVar7[8] = 0;
  puVar7[9] = 0;
  local_2c = 0x80000000;
  local_14 = 0x80000000;
  piVar4 = (int *)((ulonglong)param_1 >> 0x20);
  uVar2 = piVar4[1];
  local_34 = 0;
  local_30 = 0;
  local_1c = 0;
  local_18 = 0;
  local_60 = puVar7;
  if (0 < (int)uVar2) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,((int)uVar2 < 0) - 1 & uVar2,4);
  }
  local_18 = uVar2;
  FUN_01015ea0(local_1c,0,uVar2 * 4);
  iVar12 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = -1;
  if (0 < piVar4[1]) {
    do {
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*piVar4 + iVar12 * 4),iVar12);
      iVar12 = iVar12 + 1;
    } while (iVar12 < piVar4[1]);
  }
  local_38 = piVar4[1];
  if ((int)(puVar7[4] & 0x3fffffff) < local_38) {
    iVar12 = (puVar7[4] & 0x3fffffff) * 2;
    iVar8 = local_38;
    if (local_38 < iVar12) {
      iVar8 = iVar12;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,puVar7 + 2,iVar8,0xc);
  }
  iVar12 = local_38 - puVar7[3];
  puVar11 = (undefined4 *)(puVar7[2] + puVar7[3] * 0xc);
  if (0 < iVar12) {
    do {
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = 0xffffffff;
        puVar11[1] = 0;
        puVar11[2] = 0;
      }
      puVar11 = puVar11 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  puVar7[3] = local_38;
  FUN_01015ea0(puVar7[2],0,local_38 * 0xc);
  local_38 = 0;
  if (0 < param_2[1]) {
    do {
      puVar11 = (undefined4 *)(*param_2 + local_38 * 8);
      local_28 = 0;
      local_24 = 0;
      local_20 = 0x80000000;
      local_10 = 0;
      local_c = 0;
      local_8 = 0x80000000;
      iVar12 = FUN_01285050(piVar4,*puVar11,puVar11[1],&local_28,&local_10);
      if (iVar12 == 1) {
        hkErrStream::hkErrStream(local_260,0x200);
        FUN_01018d00("Cannot find a chain of constraints linking one of the entity pairs.");
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xabbaaa88,local_260,
                   "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpPoweredChainMapper.cpp"
                   ,0x44);
        hkBaseObject::hkBaseObject_38();
        FUN_010060a0();
joined_r0x0127afd8:
        local_c = 0;
        if ((local_8 & 0x80000000) == 0) {
          local_c = 0;
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
        }
        local_10 = 0;
        local_8 = 0x80000000;
        local_24 = 0;
        if ((local_20 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
        }
        local_28 = 0;
        local_20 = 0x80000000;
        FUN_01010310(&PTR_vftable_018e9b94);
        FUN_0100fd10();
        local_18 = 0;
        if ((local_14 & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 4);
        }
LAB_0127b077:
        local_14 = 0x80000000;
        local_1c = 0;
        local_30 = 0;
        if ((local_2c & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,(local_2c & 0x3fffffff) * 0xc);
        }
        return (undefined4 *)0x0;
      }
      local_3c = FUN_01284880(&local_10,param_1._1_4_);
      if (local_3c == 0) {
        hkErrStream::hkErrStream(local_260,0x200);
        FUN_01018d00("Failed to build a chain.");
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xabbaddaa,local_260,
                   "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpPoweredChainMapper.cpp"
                   ,0x4e);
        hkBaseObject::hkBaseObject_38();
        FUN_010060a0();
        goto joined_r0x0127afd8;
      }
      if (puVar7[9] == (puVar7[10] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,puVar7 + 8,4);
      }
      *(int *)(puVar7[8] + puVar7[9] * 4) = local_3c;
      puVar7[9] = puVar7[9] + 1;
      local_4c = 0;
      if (0 < local_c) {
        do {
          iVar12 = FUN_01010120(*(undefined4 *)(local_10 + local_4c * 4));
          if (local_40 < iVar12) {
            hkErrStream::hkErrStream(local_260,0x200);
            FUN_01018d00("Internal error.");
            (**(code **)(*DAT_01f8fc58 + 0xc))
                      (1,0xabba99dd,local_260,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpPoweredChainMapper.cpp"
                       ,0x5d);
            hkBaseObject::hkBaseObject_38();
            FUN_010060a0();
            FUN_010060a0();
            goto joined_r0x0127afd8;
          }
          iVar12 = *(int *)(local_48 + 4 + iVar12 * 8);
          local_5c = (undefined4 *)(puVar7[2] + iVar12 * 0xc);
          if (local_30 == (local_2c & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_34,0xc);
          }
          puVar11 = (undefined4 *)(local_34 + local_30 * 0xc);
          puVar11[2] = iVar12;
          piVar1 = (int *)(local_1c + iVar12 * 4);
          *piVar1 = *piVar1 + 1;
          local_30 = local_30 + 1;
          iVar8 = (**(code **)(**(int **)(local_3c + 0xc) + 0x2c))();
          iVar12 = local_4c;
          puVar5 = local_5c;
          if (iVar8 != 0x66) {
            hkErrStream::hkErrStream(local_260,0x200);
            FUN_01018d00("Internal error; invalid chain type.");
            (**(code **)(*DAT_01f8fc58 + 0xc))
                      (1,0xabba9d6d,local_260,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpPoweredChainMapper.cpp"
                       ,0x6c);
            hkBaseObject::hkBaseObject_38();
            FUN_010060a0();
            FUN_010060a0();
            local_c = 0;
            if ((local_8 & 0x80000000) == 0) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
            }
            local_10 = 0;
            local_8 = 0x80000000;
            local_24 = 0;
            if ((local_20 & 0x80000000) == 0) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
            }
            local_28 = 0;
            local_20 = 0x80000000;
            FUN_01010310(&PTR_vftable_018e9b94);
            FUN_0100fd10();
            local_18 = 0;
            if ((local_14 & 0x80000000) == 0) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 4);
            }
            goto LAB_0127b077;
          }
          *puVar11 = *(undefined4 *)(local_3c + 0xc);
          puVar11[1] = local_4c;
          if (((char)param_1 != '\0') && (local_5c[2] == 0)) {
            uVar9 = FUN_01283270(*(undefined4 *)(local_10 + local_4c * 4));
            puVar5[2] = uVar9;
          }
          local_4c = iVar12 + 1;
        } while (local_4c < local_c);
      }
      local_c = 0;
      if ((local_8 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
      }
      local_10 = 0;
      local_8 = 0x80000000;
      local_24 = 0;
      if ((local_20 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
      }
      local_38 = local_38 + 1;
      local_28 = 0;
      local_20 = 0x80000000;
    } while (local_38 < param_2[1]);
  }
  iVar8 = 0;
  iVar12 = 0;
  if (0 < (int)puVar7[3]) {
    iVar10 = 0;
    do {
      *(int *)(iVar10 + puVar7[2]) = iVar8;
      iVar8 = iVar8 + *(int *)(local_1c + iVar12 * 4);
      *(undefined4 *)(puVar7[2] + 4 + iVar10) = 0;
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0xc;
    } while (iVar12 < (int)puVar7[3]);
  }
  if ((int)(puVar7[7] & 0x3fffffff) < iVar8) {
    iVar12 = (puVar7[7] & 0x3fffffff) * 2;
    if (iVar12 <= iVar8) {
      iVar12 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,puVar7 + 5,iVar12,8);
  }
  puVar7[6] = iVar8;
  iVar12 = 0;
  if (0 < (int)local_30) {
    param_2 = (int *)0x0;
    do {
      puVar11 = (undefined4 *)((int)param_2 + local_34);
      iVar8 = puVar7[5];
      piVar1 = (int *)(puVar7[2] + puVar11[2] * 0xc);
      iVar10 = piVar1[1];
      iVar3 = *piVar1;
      iVar12 = iVar12 + 1;
      *(undefined4 *)(iVar8 + (iVar10 + iVar3) * 8) = *puVar11;
      *(undefined4 *)(iVar8 + 4 + (iVar10 + iVar3) * 8) = puVar11[1];
      piVar1[1] = piVar1[1] + 1;
      param_2 = (int *)((int)param_2 + 0xc);
      puVar7 = local_60;
    } while (iVar12 < (int)local_30);
  }
  iVar12 = 0;
  if ((param_3 != (int *)0x0) && (0 < (int)puVar7[3])) {
    param_2 = (int *)0x0;
    do {
      if (*(int *)((int)param_2 + 4 + puVar7[2]) == 0) {
        local_5c = (undefined4 *)(*piVar4 + iVar12 * 4);
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
        }
        *(undefined4 *)(*param_3 + param_3[1] * 4) = *local_5c;
        param_3[1] = param_3[1] + 1;
      }
      param_2 = (int *)((int)param_2 + 0xc);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)puVar7[3]);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_18 = 0;
  if (-1 < (int)local_14) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 4);
  }
  local_1c = 0;
  local_14 = 0x80000000;
  local_30 = 0;
  if (-1 < (int)local_2c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,(local_2c & 0x3fffffff) * 0xc);
  }
  return puVar7;
}

