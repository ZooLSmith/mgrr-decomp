// lib/havok/Source/Physics/Utilities/Constraint/Chain/hkpConstraintChainUtil.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01284880..01285050, 3 functions

#include "types.h"

// 01284880  FUN_01284880  size=921  [__FILE__]
int FUN_01284880(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  LPVOID pvVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined1 local_270 [512];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  
  pvVar14 = TlsGetValue(DAT_01f8fc4c);
  iVar15 = (**(code **)(**(int **)((int)pvVar14 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar15 + 4) = 0x40;
  iVar15 = hkpPoweredChainData::hkpPoweredChainData();
  local_20 = iVar15;
  pvVar14 = TlsGetValue(DAT_01f8fc4c);
  iVar16 = (**(code **)(**(int **)((int)pvVar14 + 0x2c) + 4))(0x48);
  *(undefined2 *)(iVar16 + 4) = 0x48;
  iVar17 = hkpAction::hkpAction_20(iVar15);
  iVar15 = *(int *)*param_1;
  iVar16 = *(int *)(iVar15 + 0x14);
  if ((1 < param_1[1]) &&
     ((iVar2 = ((int *)*param_1)[1], iVar16 == *(int *)(iVar2 + 0x14) ||
      (iVar16 == *(int *)(iVar2 + 0x18))))) {
    iVar16 = *(int *)(iVar15 + 0x18);
  }
  FUN_011a9740(iVar16);
  local_24 = 0;
  if (0 < param_1[1]) {
    do {
      iVar15 = FUN_012834c0(*(undefined4 *)(*param_1 + local_24 * 4),&local_50,&local_60);
      uVar13 = uStack_44;
      uVar12 = uStack_48;
      uVar11 = uStack_4c;
      uVar19 = local_50;
      if (iVar15 == 1) {
        hkErrStream::hkErrStream(local_270,0x200);
        FUN_01018d00("Not supported types of constraints used to build a chain!");
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xabbad88d,local_270,
                   "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpConstraintChainUtil.cpp"
                   ,0xb7);
LAB_01284b64:
        hkBaseObject::hkBaseObject_38();
        FUN_010060a0();
        FUN_010060a0();
        return 0;
      }
      piVar18 = (int *)(local_24 * 4 + *param_1);
      piVar1 = (int *)(*(int *)(iVar17 + 0x38) + -4 + *(int *)(iVar17 + 0x3c) * 4);
      if (*(int *)(*piVar18 + 0x14) != *piVar1) {
        local_50 = local_60;
        uStack_4c = uStack_5c;
        uStack_48 = uStack_58;
        uStack_44 = uStack_54;
        local_60 = uVar19;
        uStack_5c = uVar11;
        uStack_58 = uVar12;
        uStack_54 = uVar13;
        if (*(int *)(*piVar18 + 0x18) != *piVar1) {
          hkErrStream::hkErrStream(local_270,0x200);
          FUN_01018d00(
                      "Constraints are not ordered properly ! Two consecutive constraint share no common hkpEntity."
                      );
          (**(code **)(*DAT_01f8fc58 + 0xc))
                    (1,0xabbad88d,local_270,
                     "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpConstraintChainUtil.cpp"
                     ,0xc2);
          goto LAB_01284b64;
        }
      }
      iVar15 = *(int *)(*piVar18 + 0x18);
      fVar3 = *(float *)(iVar15 + 0x160);
      fVar4 = *(float *)(iVar15 + 0x164);
      fVar5 = *(float *)(iVar15 + 0x168);
      fVar6 = *(float *)(iVar15 + 0x16c);
      iVar15 = *(int *)(*piVar18 + 0x14);
      fVar7 = *(float *)(iVar15 + 0x160);
      fVar8 = *(float *)(iVar15 + 0x164);
      fVar9 = *(float *)(iVar15 + 0x168);
      fVar10 = *(float *)(iVar15 + 0x16c);
      local_70 = ((fVar4 * fVar9 - fVar5 * fVar8) + fVar10 * fVar3) - fVar6 * fVar7;
      fStack_6c = ((fVar5 * fVar7 - fVar3 * fVar9) + fVar10 * fVar4) - fVar6 * fVar8;
      fStack_68 = ((fVar3 * fVar8 - fVar4 * fVar7) + fVar10 * fVar5) - fVar6 * fVar9;
      fStack_64 = fVar3 * fVar7 + fVar5 * fVar9 + fVar4 * fVar8 + fVar6 * fVar10;
      FUN_012835e0(*(undefined4 *)(*piVar18 + 0xc),&local_1c,&local_18,&local_14);
      if (local_1c == (int *)0x0) {
        hkErrStream::hkErrStream(local_270,0x200);
        FUN_01018d00("No motors extracted from the original constraint.");
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xabba88d3,local_270,
                   "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpConstraintChainUtil.cpp"
                   ,0xcf);
        goto LAB_01284b64;
      }
      if (local_18 == (int *)0x0) {
        local_18 = local_1c;
      }
      if (local_14 == (int *)0x0) {
        local_14 = local_1c;
      }
      if (param_2 != '\0') {
        local_1c = (int *)(**(code **)(*local_1c + 0xc))();
        local_18 = (int *)(**(code **)(*local_18 + 0xc))();
        local_14 = (int *)(**(code **)(*local_14 + 0xc))();
      }
      FUN_011a80d0(&local_50,&local_60,&local_70,local_1c,local_18,local_14);
      if (param_2 != '\0') {
        FUN_010060a0();
        FUN_010060a0();
        FUN_010060a0();
      }
      local_28 = *(int *)(local_24 * 4 + *param_1);
      if (*(int *)(local_28 + 0x14) ==
          *(int *)(*(int *)(iVar17 + 0x38) + -4 + *(int *)(iVar17 + 0x3c) * 4)) {
        uVar19 = *(undefined4 *)(local_28 + 0x18);
      }
      else {
        *(undefined1 *)(*(int *)(local_20 + 0x18) + -4 + *(int *)(local_20 + 0x1c) * 0x50) = 1;
        uVar19 = *(undefined4 *)(*(int *)(local_24 * 4 + *param_1) + 0x14);
      }
      FUN_011a9740(uVar19);
      local_24 = local_24 + 1;
    } while (local_24 < param_1[1]);
  }
  FUN_010060a0();
  return iVar17;
}

// 01284E40  FUN_01284e40  size=172  [between]
void FUN_01284e40(int *param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = *(int *)(*param_1 + local_8 * 4);
      uVar2 = *(uint *)(iVar1 + 0x14);
      if ((uVar2 == param_2) || (*(uint *)(iVar1 + 0x18) == param_2)) {
        uVar3 = *(uint *)(iVar1 + 0x18);
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
        }
        *(uint *)(*param_3 + param_3[1] * 4) = uVar3 ^ uVar2 ^ param_2;
        param_3[1] = param_3[1] + 1;
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_4,4);
        }
        *(int *)(*param_4 + param_4[1] * 4) = iVar1;
        param_4[1] = param_4[1] + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1[1]);
  }
  return;
}

// 01285050  FUN_01285050  size=2187  [__FILE__]
undefined4 FUN_01285050(int *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  undefined1 **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_68c [512];
  undefined1 *local_48c;
  uint local_488;
  int local_484;
  undefined1 local_480 [512];
  undefined1 *local_280;
  uint local_27c [2];
  undefined1 local_274 [128];
  undefined1 *local_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined1 local_1e8 [132];
  undefined1 *local_164;
  undefined4 local_160;
  int local_15c;
  undefined1 local_158 [128];
  undefined1 *local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_cc [128];
  int local_4c;
  int local_44 [5];
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24 [8];
  
  if (param_2 == param_3) {
    hkErrStream::hkErrStream(local_68c,0x200);
    FUN_01018d00("Specify two different end bodies.");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabba3bb3,local_68c,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Utilities\\Constraint\\Chain\\hkpConstraintChainUtil.cpp"
               ,0x13b);
    hkBaseObject::hkBaseObject_38();
    return 1;
  }
  iVar6 = 0;
  local_24[5] = 0;
  local_24[6] = 0;
  local_24[7] = 0x80000000;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = -1;
  if (0 < param_1[1]) {
    do {
      iVar5 = *(int *)(*param_1 + iVar6 * 4);
      iVar3 = FUN_01010120(*(undefined4 *)(iVar5 + 0x14));
      if (local_24[4] < iVar3) {
        FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(iVar5 + 0x14),local_24[6]);
        uVar2 = *(undefined4 *)(iVar5 + 0x14);
        if (local_24[6] == (local_24[7] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_24 + 5,4);
        }
        *(undefined4 *)(local_24[5] + local_24[6] * 4) = uVar2;
        local_24[6] = local_24[6] + 1;
      }
      iVar3 = FUN_01010120(*(undefined4 *)(iVar5 + 0x18));
      if (local_24[4] < iVar3) {
        FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(iVar5 + 0x18),local_24[6]);
        uVar2 = *(undefined4 *)(iVar5 + 0x18);
        if (local_24[6] == (local_24[7] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_24 + 5,4);
        }
        *(undefined4 *)(local_24[5] + local_24[6] * 4) = uVar2;
        local_24[6] = local_24[6] + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[1]);
  }
  iVar6 = local_24[6];
  local_48c = local_480;
  local_488 = 0;
  local_484 = -0x7fffffe0;
  if (0x20 < local_24[6]) {
    uVar4 = local_24[6];
    if (local_24[6] < 0x40) {
      uVar4 = 0x40;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_48c,uVar4,0x10);
  }
  iVar5 = 0;
  if (0 < iVar6) {
    iVar3 = 0;
    do {
      *(undefined4 *)(local_48c + iVar3) = 0xffffffff;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar5 < iVar6);
  }
  local_280 = local_274;
  local_1f4 = local_1e8;
  local_27c[0] = 0;
  local_27c[1] = 0x80000020;
  local_1f0 = 0;
  local_1ec = 0x80000020;
  local_44[2] = 0xffffffff;
  local_44[3] = 0xffffffff;
  local_488 = iVar6;
  iVar6 = FUN_01010120(param_2);
  iVar6 = *(int *)(local_24[2] + 4 + iVar6 * 8);
  iVar5 = FUN_01010120(param_3);
  iVar5 = *(int *)(local_24[2] + 4 + iVar5 * 8);
  *(undefined4 *)(local_48c + iVar6 * 0x10) = 0;
  *(undefined4 *)(local_48c + iVar6 * 0x10 + 4) = 0xffffffff;
  *(undefined4 *)(local_48c + iVar6 * 0x10 + 8) = 0;
  *(undefined4 *)(local_48c + iVar6 * 0x10 + 0xc) = 0;
  *(undefined4 *)(local_48c + iVar5 * 0x10) = 1;
  *(undefined4 *)(local_48c + iVar5 * 0x10 + 4) = 0xffffffff;
  *(undefined4 *)(local_48c + iVar5 * 0x10 + 8) = 0;
  *(undefined4 *)(local_48c + iVar5 * 0x10 + 0xc) = 0;
  if (local_27c[0] == (local_27c[1] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_280,4);
  }
  *(int *)(local_280 + local_27c[0] * 4) = iVar6;
  local_27c[0] = local_27c[0] + 1;
  if (local_1f0 == (local_1ec & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_1f4,4);
  }
  *(int *)(local_1f4 + local_1f0 * 4) = iVar5;
  local_1f0 = local_1f0 + 1;
  local_d8 = local_cc;
  local_d0 = -0x7fffffe0;
  local_15c = -0x7fffffe0;
  local_2c = 0;
  param_3 = 0;
  local_d4 = 0;
  local_164 = local_158;
  local_160 = 0;
  local_28 = 0;
  do {
    local_44[param_3 + 2] = local_44[param_3 + 2] + 1;
    local_44[4] = 1 - param_3;
    local_4c = local_44[param_3 + 2];
    if ((int)local_27c[param_3 * 0x23] <= local_4c) {
      local_160 = 0;
      if (-1 < local_15c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_164,local_15c * 4);
      }
      local_164 = (undefined1 *)0x0;
      local_15c = 0x80000000;
      local_d4 = 0;
      if (-1 < local_d0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_d8,local_d0 * 4);
      }
      local_d8 = (undefined1 *)0x0;
      local_d0 = 0x80000000;
      iVar6 = 1;
      puVar7 = &local_160;
      do {
        puVar7[-0x24] = 0;
        if (-1 < (int)puVar7[-0x23]) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar7[-0x25],puVar7[-0x23] * 4);
        }
        iVar6 = iVar6 + -1;
        puVar7[-0x25] = 0;
        puVar7[-0x23] = 0x80000000;
        puVar7 = puVar7 + -0x23;
      } while (-1 < iVar6);
      local_488 = 0;
      if (-1 < local_484) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_48c,local_484 << 4);
      }
      local_48c = (undefined1 *)0x0;
      local_484 = 0x80000000;
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      local_24[6] = 0;
      if (-1 < local_24[7]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[5],local_24[7] * 4);
      }
      return 1;
    }
    local_30 = *(int *)((&local_280)[param_3 * 0x23] + local_4c * 4);
    ppuVar1 = &local_280 + param_3 * 0x23;
    local_d4 = 0;
    local_160 = 0;
    FUN_01284e40(param_1,*(undefined4 *)(local_24[5] + local_30 * 4),&local_d8,&local_164);
    param_2 = 0;
    if (0 < local_d4) {
      do {
        if (local_28 != 0) break;
        iVar6 = FUN_01010120(*(undefined4 *)(local_d8 + param_2 * 4));
        iVar5 = local_44[4];
        iVar6 = *(int *)(local_24[2] + 4 + iVar6 * 8);
        if (*(int *)(local_48c + iVar6 * 0x10) != param_3) {
          if (*(int *)(local_48c + iVar6 * 0x10) == local_44[4]) {
            local_24[param_3] = *(int *)(local_48c + local_30 * 0x10 + 0xc) + 1;
            iVar3 = *(int *)(local_48c + iVar6 * 0x10 + 0xc);
            local_44[param_3] = local_30;
            local_24[iVar5] = iVar3 + 1;
            local_44[iVar5] = iVar6;
            local_28 = 1;
            local_2c = *(undefined4 *)(local_164 + param_2 * 4);
            break;
          }
          if (local_27c[param_3 * 0x23] == (*(uint *)(local_274 + param_3 * 0x8c + -4) & 0x3fffffff)
             ) {
            FUN_0100a290(&PTR_vftable_018e9b94,ppuVar1,4);
          }
          *(int *)(*ppuVar1 + local_27c[param_3 * 0x23] * 4) = iVar6;
          local_27c[param_3 * 0x23] = local_27c[param_3 * 0x23] + 1;
          *(int *)(local_48c + iVar6 * 0x10) = param_3;
          *(undefined4 *)(local_48c + iVar6 * 0x10 + 4) = *(undefined4 *)(*ppuVar1 + local_4c * 4);
          *(undefined4 *)(local_48c + iVar6 * 0x10 + 8) = *(undefined4 *)(local_164 + param_2 * 4);
          *(int *)(local_48c + iVar6 * 0x10 + 0xc) = *(int *)(local_48c + local_30 * 0x10 + 0xc) + 1
          ;
        }
        param_2 = param_2 + 1;
      } while (param_2 < local_d4);
    }
    param_3 = local_44[4];
    if (local_28 != 0) {
      iVar6 = local_24[1] + local_24[0];
      param_4[1] = 0;
      if ((int)(param_4[2] & 0x3fffffffU) < iVar6) {
        iVar5 = (param_4[2] & 0x3fffffffU) * 2;
        if (iVar5 <= iVar6) {
          iVar5 = iVar6;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar5,4);
      }
      param_4[1] = iVar6;
      param_5[1] = 0;
      if ((int)(param_5[2] & 0x3fffffffU) < iVar6) {
        iVar5 = (param_5[2] & 0x3fffffffU) * 2;
        if (iVar5 <= iVar6) {
          iVar5 = iVar6;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar5,4);
      }
      param_5[1] = iVar6;
      iVar6 = local_24[0];
      while (iVar6 = iVar6 + -1, 0 < iVar6) {
        *(undefined4 *)(*param_4 + iVar6 * 4) = *(undefined4 *)(local_24[5] + local_44[0] * 4);
        *(undefined4 *)(*param_5 + -4 + iVar6 * 4) =
             *(undefined4 *)(local_48c + local_44[0] * 0x10 + 8);
        local_44[0] = *(int *)(local_48c + local_44[0] * 0x10 + 4);
      }
      *(undefined4 *)*param_4 = *(undefined4 *)(local_24[5] + local_44[0] * 4);
      local_24[0] = local_24[0] * 4;
      *(undefined4 *)(*param_5 + -4 + local_24[0]) = local_2c;
      if (0 < local_24[1]) {
        param_2 = local_24[1];
        do {
          *(undefined4 *)(local_24[0] + *param_4) = *(undefined4 *)(local_24[5] + local_44[1] * 4);
          *(undefined4 *)(local_24[0] + *param_5) =
               *(undefined4 *)(local_48c + local_44[1] * 0x10 + 8);
          local_44[1] = *(int *)(local_48c + local_44[1] * 0x10 + 4);
          local_24[0] = local_24[0] + 4;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      param_5[1] = param_5[1] + -1;
      local_160 = 0;
      if (-1 < local_15c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_164,local_15c * 4);
      }
      local_164 = (undefined1 *)0x0;
      local_15c = 0x80000000;
      local_d4 = 0;
      if (-1 < local_d0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_d8,local_d0 * 4);
      }
      local_d8 = (undefined1 *)0x0;
      local_d0 = 0x80000000;
      iVar6 = 1;
      puVar7 = &local_160;
      do {
        puVar7[-0x24] = 0;
        if (-1 < (int)puVar7[-0x23]) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar7[-0x25],puVar7[-0x23] * 4);
        }
        iVar6 = iVar6 + -1;
        puVar7[-0x25] = 0;
        puVar7[-0x23] = 0x80000000;
        puVar7 = puVar7 + -0x23;
      } while (-1 < iVar6);
      local_488 = 0;
      if (-1 < local_484) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_48c,local_484 << 4);
      }
      local_48c = (undefined1 *)0x0;
      local_484 = 0x80000000;
      FUN_01010310(&PTR_vftable_018e9b94);
      FUN_0100fd10();
      local_24[6] = 0;
      if (-1 < local_24[7]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[5],local_24[7] * 4);
      }
      return 0;
    }
  } while( true );
}

