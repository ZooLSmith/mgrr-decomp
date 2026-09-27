// src/misc/cFixedList.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F3B50..00FC21C0, 53 functions

#include "mgrr.h"

// 008F3B50  cFixedList::insert  size=146  [class]
void __thiscall cFixedList::insert(int *param_1,int *param_2,int *param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  puVar1 = (undefined2 *)param_1[4];
  puVar4 = (undefined2 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = *(int *)(puVar1 + 2);
    iVar3 = *(int *)(puVar1 + 4);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined2 *)*param_1) {
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    *(int *)(puVar4 + 2) = iVar3;
    *(int *)(puVar4 + 4) = iVar2;
    if (iVar3 != 0) {
      *(undefined2 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined2 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00935110  cFixedList::insert_2  size=144  [class]
void __thiscall cFixedList::insert_2(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 0096B4F0  cFixedList::insert_3  size=144  [class]
void __thiscall cFixedList::insert_3(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 0096B580  FUN_0096b580  size=233  [callgraph]
void __thiscall
FUN_0096b580(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = local_44;
  if ((param_4 == 0) || (param_5 == 0)) {
    iVar1 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),param_3);
    if (iVar1 != 0) {
      param_4 = *(int *)(iVar1 + 0x30);
      param_5 = *(int *)(iVar1 + 0x34);
    }
  }
  local_18 = 0xffffffff;
  local_20 = param_4;
  local_1c = param_5;
  FUN_00962910(&local_30,param_2);
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),0x30);
  }
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0x30 + *(int *)(param_1 + 0x10));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[4] = local_30;
    puVar2[5] = local_2c;
    puVar2[6] = local_28;
    puVar2[7] = local_24;
    puVar2[8] = local_20;
    puVar2[9] = local_1c;
    puVar2[10] = local_18;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

// 0096B670  FUN_0096b670  size=623  [callgraph]
undefined4 __thiscall
FUN_0096b670(int param_1,float *param_2,float *param_3,float *param_4,float param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_4 = *param_3;
  param_4[1] = fVar1;
  param_4[2] = fVar2;
  param_4[3] = fVar3;
  if ((param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) +
      (*param_2 - *param_3) * (*param_2 - *param_3) <= param_5 * param_5) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_4 = *param_3;
    param_4[1] = fVar1;
    param_4[2] = fVar2;
    param_4[3] = fVar3;
    FUN_0096b580(param_3,0xffffffff,param_7,param_8);
    return 1;
  }
  iVar5 = FUN_00969fb0(param_2,1);
  if ((iVar5 != -1) && (iVar6 = FUN_00969fb0(param_3,1), iVar6 != -1)) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 8) == 0) {
      iVar7 = FUN_00dd29b0(0x6000,4,0,0);
      *(int *)(param_1 + 8) = iVar7;
      if (iVar7 == 0) {
        return 0;
      }
    }
    iVar7 = FUN_00969f80(iVar5,iVar6);
    if ((iVar7 != 0) && (-1 < iVar5)) {
      FUN_0096b580(param_3,iVar6,param_7,param_8);
      puVar11 = *(undefined4 **)(param_1 + 4);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      local_54 = 0;
      if (puVar11 != (undefined4 *)0x0) {
        FUN_00965060();
        do {
          pfVar8 = (float *)FUN_009653d0(local_50,*puVar11);
          *param_4 = *pfVar8;
          param_4[1] = pfVar8[1];
          param_4[2] = pfVar8[2];
          param_4[3] = pfVar8[3];
          if ((undefined4 *)puVar11[4] != (undefined4 *)0x0) {
            FUN_00966370(uVar4,*puVar11,*(undefined4 *)puVar11[4],1);
          }
          uVar12 = 0;
          uVar9 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),*puVar11);
          FUN_009679e0(param_4,uVar9,uVar12);
          if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0x10,0x30);
          }
          puVar10 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0x30 + *(int *)(param_1 + 0x10));
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = local_40;
            puVar10[4] = local_30;
            puVar10[5] = local_2c;
            puVar10[6] = local_28;
            puVar10[7] = local_24;
            puVar10[8] = local_20;
            puVar10[9] = local_1c;
            puVar10[10] = local_18;
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          puVar11 = (undefined4 *)puVar11[4];
        } while (puVar11 != (undefined4 *)0x0);
        local_54 = 1;
      }
      if (*(int *)(param_1 + 8) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 8),0);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      return local_54;
    }
  }
  return 0;
}

// 0096B8E0  FUN_0096b8e0  size=1003  [callgraph]
undefined4 __thiscall
FUN_0096b8e0(int param_1,float *param_2,float *param_3,float *param_4,float param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [2];
  float local_48;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_4 = *param_3;
  param_4[1] = fVar1;
  param_4[2] = fVar2;
  param_4[3] = fVar3;
  local_60 = *param_2;
  local_5c = param_2[1];
  local_58 = param_2[2];
  local_54 = param_2[3];
  local_70 = *param_3;
  local_6c = param_3[1];
  local_68 = param_3[2];
  local_64 = param_3[3];
  iVar5 = hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_3
                    (&local_60,&local_70,*(undefined4 *)(param_1 + 0x54),0x3fc00000);
  if (iVar5 == 0) {
    param_5 = param_5 * param_5;
    if (param_5 < (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) +
                  (*param_2 - *param_3) * (*param_2 - *param_3)) {
      iVar5 = FUN_00969fb0(param_2,1);
      if ((iVar5 != -1) && (iVar6 = FUN_00969fb0(param_3,1), iVar6 != -1)) {
        if (*(int *)(param_1 + 8) != 0) {
          FUN_00dd48d0(*(int *)(param_1 + 8),0);
          *(undefined4 *)(param_1 + 8) = 0;
        }
        if (*(int *)(param_1 + 8) == 0) {
          iVar7 = FUN_00dd29b0(0x6000,4,0,0);
          *(int *)(param_1 + 8) = iVar7;
          if (iVar7 == 0) {
            return 0;
          }
        }
        iVar7 = FUN_00969f80(iVar5,iVar6);
        if ((iVar7 != 0) && (-1 < iVar5)) {
          FUN_0096b580(param_3,iVar6,param_7,param_8);
          puVar11 = *(undefined4 **)(param_1 + 4);
          uVar4 = *(undefined4 *)(param_1 + 0x1c);
          if (puVar11 != (undefined4 *)0x0) {
            FUN_00965060();
            do {
              pfVar8 = (float *)FUN_009653d0(&local_60,*puVar11);
              *param_4 = *pfVar8;
              param_4[1] = pfVar8[1];
              param_4[2] = pfVar8[2];
              param_4[3] = pfVar8[3];
              if ((undefined4 *)puVar11[4] != (undefined4 *)0x0) {
                FUN_00966370(uVar4,*puVar11,*(undefined4 *)puVar11[4],1);
              }
              uVar12 = 0;
              uVar9 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),*puVar11);
              FUN_009679e0(param_4,uVar9,uVar12);
              if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),0x30);
              }
              puVar10 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0x30 + *(int *)(param_1 + 0x10));
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = local_40;
                puVar10[4] = local_30;
                puVar10[5] = local_2c;
                puVar10[6] = local_28;
                puVar10[7] = local_24;
                puVar10[8] = local_20;
                puVar10[9] = local_1c;
                puVar10[10] = local_18;
              }
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              puVar11 = (undefined4 *)puVar11[4];
            } while (puVar11 != (undefined4 *)0x0);
          }
          if (*(int *)(param_1 + 8) != 0) {
            FUN_00dd48d0(*(int *)(param_1 + 8),0);
            *(undefined4 *)(param_1 + 8) = 0;
          }
          if (*(int *)(param_1 + 0x14) < 1) {
            fVar1 = param_3[1];
            fVar2 = param_3[2];
            fVar3 = param_3[3];
            *param_4 = *param_3;
            param_4[1] = fVar1;
            param_4[2] = fVar2;
            param_4[3] = fVar3;
            return 1;
          }
          FUN_009650d0(local_50);
          fVar1 = (param_2[2] - local_48) * (param_2[2] - local_48) +
                  (*param_2 - local_50[0]) * (*param_2 - local_50[0]);
          if (fVar1 < param_5 != (fVar1 == param_5)) {
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          }
          local_78 = 0;
          do {
            if (1 < *(int *)(param_1 + 0x14)) {
              local_60 = *param_2;
              local_5c = param_2[1];
              local_58 = param_2[2];
              local_54 = param_2[3];
              FUN_009650d0(&local_70);
              iVar5 = hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_3
                                (&local_60,&local_70,*(undefined4 *)(param_1 + 0x54),0x3fc00000);
              if (iVar5 == 0) break;
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
            }
            local_78 = local_78 + 1;
          } while (local_78 < 2);
          pfVar8 = (float *)FUN_009650d0(&local_60);
          *param_4 = *pfVar8;
          param_4[1] = pfVar8[1];
          param_4[2] = pfVar8[2];
          param_4[3] = pfVar8[3];
        }
      }
      return 0;
    }
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_4 = *param_3;
    param_4[1] = fVar1;
    param_4[2] = fVar2;
    param_4[3] = fVar3;
    FUN_0096b580(param_3,0xffffffff,param_7,param_8);
  }
  return 1;
}

// 0096BCD0  FUN_0096bcd0  size=2071  [callgraph]
undefined4 __thiscall
FUN_0096bcd0(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  int unaff_EDI;
  float10 fVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *local_164;
  int local_160;
  int local_15c;
  undefined4 local_158;
  float local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar5 = param_3[1];
  piVar1 = (int *)(param_1 + 0x10);
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *param_4 = *param_3;
  param_4[1] = uVar5;
  param_4[2] = uVar8;
  param_4[3] = uVar9;
  iVar2 = FUN_00965a30(param_2,param_3,*(undefined4 *)(param_1 + 0x54),0x3ee66666);
  if (iVar2 == 3) {
    uVar5 = param_3[1];
    uVar8 = param_3[2];
    uVar9 = param_3[3];
    *param_4 = *param_3;
    param_4[1] = uVar5;
    param_4[2] = uVar8;
    param_4[3] = uVar9;
    FUN_0096b580(param_3,0xffffffff,param_7,param_8);
    return 1;
  }
  iVar2 = FUN_0096a220(param_2,1);
  if ((iVar2 != -1) && (local_15c = FUN_0096a220(param_3,1), local_15c != -1)) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = FUN_00dd29b0(0x6000,4,0,0);
      *(int *)(param_1 + 8) = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar3 = FUN_00969f80(iVar2,local_15c);
    if ((iVar3 != 0) && (-1 < iVar2)) {
      FUN_0096b580(param_3,local_15c,param_7,param_8);
      local_164 = *(undefined4 **)(param_1 + 4);
      local_160 = 0;
      if (local_164 != (undefined4 *)0x0) {
        FUN_00965060();
        do {
          puVar4 = (undefined4 *)FUN_009653d0(&local_b0,*local_164);
          *param_4 = *puVar4;
          param_4[1] = puVar4[1];
          param_4[2] = puVar4[2];
          param_4[3] = puVar4[3];
          if ((undefined4 *)local_164[4] != (undefined4 *)0x0) {
            FUN_00966370(*(undefined4 *)(param_1 + 0x1c),*local_164,*(undefined4 *)local_164[4],1);
          }
          uVar8 = 1;
          uVar5 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),*local_164);
          FUN_009679e0(param_4,uVar5,uVar8);
          if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x30);
          }
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0x30 + *piVar1);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = local_150;
            puVar4[4] = local_140;
            puVar4[5] = local_13c;
            puVar4[6] = local_138;
            puVar4[7] = local_134;
            puVar4[8] = local_130;
            puVar4[9] = local_12c;
            puVar4[10] = local_128;
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          uVar8 = 2;
          uVar5 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),*local_164);
          FUN_009679e0(param_4,uVar5,uVar8);
          if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x30);
          }
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0x30 + *piVar1);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = local_150;
            puVar4[4] = local_140;
            puVar4[5] = local_13c;
            puVar4[6] = local_138;
            puVar4[7] = local_134;
            puVar4[8] = local_130;
            puVar4[9] = local_12c;
            puVar4[10] = local_128;
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          local_164 = (undefined4 *)local_164[4];
        } while (local_164 != (undefined4 *)0x0);
        local_100 = *param_2;
        local_160 = *(int *)(param_1 + 0x14) + -1;
        local_fc = param_2[1];
        local_164 = (undefined4 *)0xffffffff;
        local_f8 = param_2[2];
        local_f4 = param_2[3];
        if (-1 < local_160) {
          iVar2 = local_160 * 0x30;
          do {
            iVar3 = *piVar1 + iVar2;
            local_d0 = *(float *)(iVar3 + 0x10);
            local_cc = *(float *)(iVar3 + 0x14);
            local_c8 = *(float *)(iVar3 + 0x18);
            local_c4 = *(float *)(iVar3 + 0x1c);
            FUN_009629c0(&local_d0,iVar3 + 0x10);
            local_e0 = local_d0;
            local_dc = local_cc;
            local_d8 = local_c8;
            local_d4 = local_c4;
            local_15c = ((int *)(*piVar1 + iVar2))[10];
            iVar3 = *(int *)(*piVar1 + iVar2);
            if (iVar3 == 1) {
              if (0 < local_160) {
                puVar4 = (undefined4 *)FUN_009650d0(local_60);
                local_a0 = *puVar4;
                local_9c = puVar4[1];
                local_98 = puVar4[2];
                local_94 = puVar4[3];
                local_b4 = *(undefined4 *)(iVar2 + -8 + *piVar1);
                thunk_FUN_00dde510(&local_154,&local_158,&local_a0,&local_e0);
                local_b0 = -local_154;
                local_ac = local_158;
                local_a8 = 0;
                local_118 = 0.0;
                local_11c = 0.0;
                local_120 = 0.0;
                local_124 = 0;
                local_12c = 0;
                local_130 = 0;
                local_134 = 0;
                local_138 = 0;
                local_140 = 0;
                local_144 = 0;
                local_148 = 0;
                local_14c = 0;
                local_114 = 0x3f800000;
                local_128 = 0x3f800000;
                local_13c = 0x3f800000;
                local_150 = 0x3f800000;
                thunk_FUN_00ddc1d0(local_50,&local_b0,5);
                D3DXMatrixMultiply(&local_150,local_50,&local_150);
                local_11c = 0.0;
                local_118 = 0.0;
                local_114 = 0;
                fVar6 = (float10)FUN_00965410(unaff_EBX,uStack_c0);
                local_11c = (float)ABS(fVar6 * (float10)0.5 - (float10)*(float *)(param_1 + 0x58));
                if (unaff_EDI == -1) {
                  local_114 = 0x3dcccccd;
                }
                D3DXVec3TransformNormal(&local_11c,&local_11c,&local_15c);
                fStack_110 = local_120 + fStack_110;
                fStack_10c = fStack_10c + local_11c;
                fStack_108 = local_118 + fStack_108;
                FUN_009628e0(&fStack_110);
                thunk_FUN_00dde510(&local_154,&local_158,&local_100,&local_e0);
                uVar9 = 0x3fc90fdb;
                pfVar7 = &local_e0;
                uVar5 = local_158;
                uVar8 = FUN_009650d0(local_70);
                iVar3 = FUN_00dde6c0(uVar8,pfVar7,uVar5,uVar9);
                if (iVar3 != 0) {
                  *(undefined4 *)(iVar2 + *piVar1) = 0x80000000;
                }
                local_100 = local_e0;
                local_164 = (undefined4 *)local_15c;
                local_fc = local_dc;
                local_f8 = local_d8;
                local_f4 = local_d4;
              }
            }
            else if (iVar3 == 2) {
              if (local_164 == (undefined4 *)0xffffffff) {
                local_80 = (local_100 - local_d0) * 0.3;
                local_7c = (local_fc - local_cc) * 0.3;
                local_78 = (local_f8 - local_c8) * 0.3;
                FUN_009628e0(&local_80);
              }
              else if (*(int *)(param_1 + 0x5c) != 0) {
                local_f0 = 0.0;
                local_ec = 0.0;
                local_e8 = 0.0;
                thunk_FUN_00dde510(&local_154,&local_158,&local_100,&local_e0);
                local_90 = -local_154;
                local_8c = local_158;
                local_88 = 0;
                local_118 = 0.0;
                local_11c = 0.0;
                local_120 = 0.0;
                local_124 = 0;
                local_12c = 0;
                local_130 = 0;
                local_134 = 0;
                local_138 = 0;
                local_140 = 0;
                local_144 = 0;
                local_148 = 0;
                local_14c = 0;
                local_114 = 0x3f800000;
                local_128 = 0x3f800000;
                local_13c = 0x3f800000;
                local_150 = 0x3f800000;
                thunk_FUN_00ddc1d0(local_50,&local_90,5);
                D3DXMatrixMultiply(&local_150,local_50,&local_150);
                fVar6 = (float10)FUN_00965410(unaff_EBX,unaff_EDI);
                local_fc = (float)-ABS(fVar6 * (float10)0.5 - (float10)*(float *)(param_1 + 0x58));
                D3DXVec3TransformNormal(&local_fc,&local_fc,&local_15c);
                local_f0 = local_120 + local_f0;
                local_ec = local_11c + local_ec;
                local_e8 = local_118 + local_e8;
                FUN_009628e0(&local_f0);
              }
            }
            local_160 = local_160 + -1;
            iVar2 = iVar2 + -0x30;
          } while (-1 < local_160);
        }
        if (0 < *(int *)(param_1 + 0x14)) {
          puVar4 = (undefined4 *)FUN_009650d0(local_70);
          *param_4 = *puVar4;
          param_4[1] = puVar4[1];
          param_4[2] = puVar4[2];
          param_4[3] = puVar4[3];
        }
        FUN_00968980(param_2,param_4,param_5);
        local_160 = 1;
      }
      if (*(int *)(param_1 + 8) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 8),0);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      return local_160;
    }
  }
  return 0;
}

// 0096C6D0  FUN_0096c6d0  size=148  [callgraph]
void __thiscall FUN_0096c6d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x138) <= param_2)) ||
      (*(int *)(*(int *)(param_1 + 0x130) + param_2 * 4) == 0)) ||
     ((param_3 != 0 ||
      ((*(uint *)(*(int *)(*(int *)(param_1 + 0x130) + param_2 * 4) + 0x84) & 0x80000000) != 0)))) {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x158);
    do {
      if (*piVar1 != 0) {
        FUN_0096a800(iVar2,param_2);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 7;
    } while (iVar2 < 0x10);
    if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x138))) {
      if (*(int *)(*(int *)(param_1 + 0x130) + param_2 * 4) != 0) {
        FUN_00dd4920(*(undefined4 *)(*(int *)(param_1 + 0x130) + param_2 * 4));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x130) + param_2 * 4) = 0;
    }
  }
  return;
}

// 0096C820  FUN_0096c820  size=399  [callgraph]
undefined4 __thiscall FUN_0096c820(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_ESI;
  int iVar8;
  undefined4 uVar9;
  
  uVar9 = *param_3;
  iVar2 = (**(code **)(*param_2 + 0x18))(uVar9,"IndexData");
  iVar3 = (**(code **)(*param_2 + 0x10))(iVar2);
  if (0 < iVar3) {
    piVar7 = (int *)(param_1 + 0x14c);
    iVar3 = 0;
    while( true ) {
      uVar4 = (**(code **)(*param_2 + 0x14))(iVar2,iVar3);
      iVar2 = (**(code **)(*param_2 + 0x10))(uVar4);
      if (0xf < iVar3) break;
      iVar6 = 0;
      if (iVar2 < 1) {
        piVar7[3] = 0;
LAB_0096c967:
        piVar7[2] = iVar6;
      }
      else {
        if ((piVar7 != (int *)0xc) && (*piVar7 < 1)) {
          iVar8 = 0;
          iVar5 = (**(code **)(*param_2 + 0x10))(uVar4);
          iVar6 = iVar2;
          iVar3 = unaff_ESI;
          if (0 < iVar5) {
            do {
              iVar2 = (**(code **)(*param_2 + 0x14))(uVar4,iVar8);
              if (0x7f < iVar8) {
                FUN_00dd5650(&DAT_01651798,unaff_ESI,0x80);
                piVar7[3] = 1;
                goto LAB_0096c967;
              }
              if (iVar2 != -1) {
                (**(code **)(*param_2 + 0x58))(iVar2,&stack0xfffffff0);
                if (*piVar7 < piVar7[-1]) {
                  puVar1 = (undefined4 *)(piVar7[-2] + *piVar7 * 4);
                  if (puVar1 != (undefined4 *)0x0) {
                    *puVar1 = 0xffffffff;
                  }
                  *piVar7 = *piVar7 + 1;
                }
              }
              iVar8 = iVar8 + 1;
              iVar2 = (**(code **)(*param_2 + 0x10))(uVar4);
            } while (iVar8 < iVar2);
          }
          piVar7[3] = 1;
          goto LAB_0096c967;
        }
        FUN_00dd5650(&DAT_016518e0);
      }
      iVar2 = iVar3 + 1;
      piVar7 = piVar7 + 7;
      iVar6 = (**(code **)(*param_2 + 0x10))(uVar9);
      iVar3 = iVar2;
      unaff_ESI = iVar2;
      if (iVar6 <= iVar2) {
        return 1;
      }
    }
    if (iVar2 != 0) {
      FUN_00dd5650(&DAT_01651890);
    }
  }
  return 1;
}

// 0096C9C0  FUN_0096c9c0  size=93  [callgraph]
void __thiscall FUN_0096c9c0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_00905ce0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0096CA40  FUN_0096ca40  size=691  [callgraph]
undefined4 __thiscall
FUN_0096ca40(int param_1,float *param_2,float *param_3,float *param_4,float param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 local_54;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_4 = *param_3;
  param_4[1] = fVar1;
  param_4[2] = fVar2;
  param_4[3] = fVar3;
  if (param_5 * param_5 <=
      (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]) +
      (*param_2 - *param_3) * (*param_2 - *param_3)) {
    iVar5 = FUN_00969fb0(param_2,1);
    if ((iVar5 != -1) && (iVar6 = FUN_00969fb0(param_3,1), iVar6 != -1)) {
      if (*(int *)(param_1 + 8) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 8),0);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      if (*(int *)(param_1 + 8) == 0) {
        iVar7 = FUN_00dd29b0(0x6000,4,0,0);
        *(int *)(param_1 + 8) = iVar7;
        if (iVar7 == 0) {
          return 0;
        }
      }
      iVar7 = FUN_00969f80(iVar5,iVar6);
      if ((iVar7 != 0) && (-1 < iVar5)) {
        FUN_0096b580(param_3,iVar6,param_7,param_8);
        puVar11 = *(undefined4 **)(param_1 + 4);
        uVar4 = *(undefined4 *)(param_1 + 0x1c);
        local_54 = 0;
        if (puVar11 != (undefined4 *)0x0) {
          FUN_00965060();
          do {
            pfVar8 = (float *)FUN_009653d0(local_50,*puVar11);
            *param_4 = *pfVar8;
            param_4[1] = pfVar8[1];
            param_4[2] = pfVar8[2];
            param_4[3] = pfVar8[3];
            if ((undefined4 *)puVar11[4] != (undefined4 *)0x0) {
              FUN_00966370(uVar4,*puVar11,*(undefined4 *)puVar11[4],1);
            }
            uVar12 = 0;
            uVar9 = FUN_00963da0(*(undefined4 *)(param_1 + 0x1c),*puVar11);
            FUN_009679e0(param_4,uVar9,uVar12);
            if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0x10,0x30);
            }
            puVar10 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0x30 + *(int *)(param_1 + 0x10));
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = local_40;
              puVar10[4] = local_30;
              puVar10[5] = local_2c;
              puVar10[6] = local_28;
              puVar10[7] = local_24;
              puVar10[8] = local_20;
              puVar10[9] = local_1c;
              puVar10[10] = local_18;
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            puVar11 = (undefined4 *)puVar11[4];
          } while (puVar11 != (undefined4 *)0x0);
          iVar5 = FUN_00967a40(param_2,param_4,param_5,0,1);
          if (iVar5 == 2) {
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
          else {
            local_54 = 1;
          }
        }
        if (*(int *)(param_1 + 8) != 0) {
          FUN_00dd48d0(*(int *)(param_1 + 8),0);
          *(undefined4 *)(param_1 + 8) = 0;
        }
        return local_54;
      }
    }
  }
  else {
    iVar5 = hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_3
                      (param_2,param_3,*(undefined4 *)(param_1 + 0x54),0x3ee66666);
    if (iVar5 != 0) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      *param_4 = *param_3;
      param_4[1] = fVar1;
      param_4[2] = fVar2;
      param_4[3] = fVar3;
      FUN_0096b580(param_3,0xffffffff,param_7,param_8);
      return 1;
    }
  }
  return 0;
}

// 0096CD00  FUN_0096cd00  size=753  [callgraph]
void __thiscall
FUN_0096cd00(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5,int param_6
            )

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined *local_c8;
  int local_c4;
  int local_c0;
  int *local_bc;
  uint local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 local_50 [76];
  
  if (*(int *)(param_3 + 4) != 0) {
    FUN_00969cc0();
  }
  if ((*(uint *)(param_1 + 0x50) < 0x10) &&
     (*(int *)(&DAT_01b37710 + *(uint *)(param_1 + 0x50) * 0x1c) != 0)) {
    local_c0 = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      local_c0 = FUN_009f8b40();
    }
    local_c4 = 0;
    if (*(uint *)(param_1 + 0x50) < 0x10) {
      local_c8 = &DAT_01b376f8 + *(uint *)(param_1 + 0x50) * 0x1c;
    }
    else {
      local_c8 = (undefined *)0x0;
    }
    local_bc = *(int **)(local_c8 + 4);
    if (local_bc != local_bc + *(int *)(local_c8 + 0xc)) {
      do {
        iVar2 = *local_bc;
        if ((((iVar2 == -1) || (DAT_01b376f0 <= iVar2)) || (iVar2 < 0)) ||
           (*(int *)(DAT_01b376e8 + iVar2 * 4) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(uint *)(DAT_01b376e8 + iVar2 * 4);
          uVar3 = ~-(uint)((*(uint *)(uVar3 + 0x84) & 0x40000000) != 0) & uVar3;
        }
        if (uVar3 == 0) {
LAB_0096cfc1:
          if (0x3f < local_c4) {
            return;
          }
        }
        else if ((param_6 != *(int *)(uVar3 + 0x70)) && (*(int *)(uVar3 + 0x74) == 0)) {
          pfVar1 = (float *)(uVar3 + 0x40);
          local_b8 = uVar3;
          iVar2 = FUN_00dde6c0(pfVar1,param_2,param_4,0x3fc90fdb);
          if (iVar2 != 0) {
            local_68 = 0.0;
            local_6c = 0.0;
            local_70 = 0.0;
            local_74 = 0;
            local_7c = 0;
            local_80 = 0;
            local_84 = 0;
            local_88 = 0;
            local_90 = 0;
            local_94 = 0;
            local_98 = 0;
            local_9c = 0;
            local_64 = 0x3f800000;
            local_78 = 0x3f800000;
            local_8c = 0x3f800000;
            local_a0 = 0x3f800000;
            thunk_FUN_00ddc1d0(local_50,uVar3 + 0x50,5);
            D3DXMatrixMultiply(&local_a0,local_50,&local_a0);
            D3DXVec3TransformNormal(&stack0xffffff14,&stack0xffffff14,&fStack_ac);
            fStack_e0 = *pfVar1 + fStack_e0 + local_70;
            fStack_dc = fStack_dc + local_6c + *(float *)(uVar3 + 0x44);
            fStack_d8 = fStack_d8 + local_68 + *(float *)(uVar3 + 0x48);
            fStack_d4 = *(float *)(uVar3 + 0x4c) + fStack_d4;
            thunk_FUN_00dde510(auStack_54,&uStack_b4,&fStack_e0,pfVar1);
            iVar2 = FUN_00dde6c0(param_2,pfVar1,uStack_b4,0x3fc90fdb);
            if (iVar2 == 0) {
              fStack_b0 = *pfVar1;
              uStack_a8 = *(undefined4 *)(uVar3 + 0x48);
              uStack_a4 = *(undefined4 *)(uVar3 + 0x4c);
              fStack_ac = *(float *)(uVar3 + 0x44) + param_5;
              iVar2 = FUN_0090dc50(0,0,0,param_2,&fStack_b0,local_c0 << 0x10 | 0x1e,
                                   "MapInfo_AreaList");
              if ((iVar2 != 0) && (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8))) {
                cFixedList::insert_3(auStack_58,param_3 + 0x18,&local_b8);
                local_c4 = local_c4 + 1;
              }
            }
            goto LAB_0096cfc1;
          }
        }
        local_bc = local_bc + 1;
      } while (local_bc != (int *)(*(int *)(local_c8 + 4) + *(int *)(local_c8 + 0xc) * 4));
    }
  }
  return;
}

// 0096D000  FUN_0096d000  size=302  [callgraph]
void __thiscall FUN_0096d000(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_4 [4];
  
  iVar4 = param_3;
  if (*(int *)(param_3 + 4) != 0) {
    FUN_00969cc0();
  }
  uVar3 = param_2;
  uVar1 = *(uint *)(param_1 + 0x50);
  if ((uVar1 < 0x10) && (*(int *)(&DAT_01b37710 + uVar1 * 0x1c) != 0)) {
    param_3 = 0;
    if (uVar1 < 0x10) {
      puVar5 = &DAT_01b376f8 + uVar1 * 0x1c;
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    piVar7 = *(int **)(puVar5 + 4);
    iVar6 = DAT_01b376e8;
    if (piVar7 != piVar7 + *(int *)(puVar5 + 0xc)) {
      do {
        iVar2 = *piVar7;
        if ((((iVar2 == -1) || (DAT_01b376f0 <= iVar2)) || (iVar2 < 0)) ||
           (*(int *)(iVar6 + iVar2 * 4) == 0)) {
          param_2 = 0;
        }
        else {
          param_2 = *(uint *)(iVar6 + iVar2 * 4);
          param_2 = ~-(uint)((*(uint *)(param_2 + 0x84) & 0x40000000) != 0) & param_2;
        }
        if (param_2 == 0) {
LAB_0096d105:
          if (0x3f < param_3) {
            return;
          }
        }
        else if ((param_4 != *(int *)(param_2 + 0x70)) &&
                ((*(uint *)(param_2 + 0x80 + (uVar3 >> 5) * 4) & 0x80000000U >> ((byte)uVar3 & 0x1f)
                 ) != 0)) {
          if (*(int *)(iVar4 + 0xc) < *(int *)(iVar4 + 8)) {
            cFixedList::insert_3(local_4,iVar4 + 0x18,&param_2);
            param_3 = param_3 + 1;
            iVar6 = DAT_01b376e8;
          }
          goto LAB_0096d105;
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != (int *)(*(int *)(puVar5 + 4) + *(int *)(puVar5 + 0xc) * 4));
    }
  }
  return;
}

// 00983550  cFixedList::insert_4  size=149  [class]
void __thiscall cFixedList::insert_4(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar2 = *(int *)(iVar1 + 0x40);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x40) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x3c) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      cTouchArea::cTouchArea_2(param_4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x3c);
    }
    *(int *)(iVar3 + 0x3c) = iVar2;
    *(int *)(iVar3 + 0x40) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x40) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x3c) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 009EE130  cFixedList::insert_5  size=144  [class]
void __thiscall cFixedList::insert_5(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A43FB0  cFixedList::insert_6  size=196  [class]
void __thiscall cFixedList::insert_6(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = param_1[4];
  iVar3 = *param_1;
  if (iVar2 != iVar3) {
    iVar3 = *(int *)(iVar2 + 0xd0);
    iVar1 = *(int *)(iVar2 + 0xd4);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xd4) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xd0) = iVar3;
    }
    param_1[4] = iVar1;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar2;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      FUN_0095ba60(param_4);
      puVar4 = (undefined4 *)(param_4 + 0x50);
      puVar5 = (undefined4 *)(iVar3 + 0x50);
      for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0xd0);
    }
    *(int *)(iVar3 + 0xd0) = iVar1;
    *(int *)(iVar3 + 0xd4) = iVar2;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xd4) = iVar3;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xd0) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A440A0  FUN_00a440a0  size=130  [between]
int * __thiscall FUN_00a440a0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0xd0);
  iVar2 = *(int *)(*param_3 + 0xd4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xd4) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xd0) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xd0);
  }
  *(int *)(*param_3 + 0xd0) = iVar2;
  *(int *)(*param_3 + 0xd4) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xd4) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xd0) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00A44140  FUN_00a44140  size=143  [between]
int * __thiscall FUN_00a44140(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0x1e00);
  iVar2 = *(int *)(*param_3 + 0x1e04);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x1e04) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x1e00) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  (**(code **)(*(int *)*param_3 + 4))(0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x1e00);
  }
  *(int *)(*param_3 + 0x1e00) = iVar2;
  *(int *)(*param_3 + 0x1e04) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x1e04) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x1e00) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00A441D0  FUN_00a441d0  size=65  [between]
void __fastcall FUN_00a441d0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A44220  FUN_00a44220  size=130  [between]
int * __thiscall FUN_00a44220(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0xa20);
  iVar2 = *(int *)(*param_3 + 0xa24);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xa24) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xa20) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xa20);
  }
  *(int *)(*param_3 + 0xa20) = iVar2;
  *(int *)(*param_3 + 0xa24) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xa24) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xa20) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00A442B0  FUN_00a442b0  size=65  [between]
void __fastcall FUN_00a442b0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A44300  FUN_00a44300  size=130  [between]
int * __thiscall FUN_00a44300(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0x84);
  iVar2 = *(int *)(*param_3 + 0x88);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x88) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x84) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x84);
  }
  *(int *)(*param_3 + 0x84) = iVar2;
  *(int *)(*param_3 + 0x88) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x88) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x84) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00A443A0  FUN_00a443a0  size=116  [between]
int * __thiscall FUN_00a443a0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0x48);
  iVar2 = *(int *)(*param_3 + 0x4c);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x4c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  (**(code **)(*(int *)*param_3 + 4))(0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x48);
  }
  *(int *)(*param_3 + 0x48) = iVar2;
  *(int *)(*param_3 + 0x4c) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x4c) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x48) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00A44430  FUN_00a44430  size=143  [between]
int * __thiscall FUN_00a44430(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0xd0);
  iVar2 = *(int *)(*param_3 + 0xd4);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xd4) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xd0) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *param_2 = iVar2;
  if (iVar1 == *param_3) {
    *(int *)(param_1 + 0x14) = iVar2;
  }
  (**(code **)(*(int *)*param_3 + 4))(0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xd0);
  }
  *(int *)(*param_3 + 0xd0) = iVar2;
  *(int *)(*param_3 + 0xd4) = iVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0xd4) = *param_3;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xd0) = *param_3;
  }
  *(int *)(param_1 + 0x10) = *param_3;
  return param_2;
}

// 00A444C0  cFixedList::insert_7  size=176  [class]
void __thiscall cFixedList::insert_7(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 0xa20);
    iVar2 = *(int *)(iVar1 + 0xa24);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xa24) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xa20) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      FUN_00a34930(param_4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xa20);
    }
    *(int *)(iVar3 + 0xa20) = iVar2;
    *(int *)(iVar3 + 0xa24) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xa24) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xa20) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A44570  cFixedList::insert_8  size=178  [class]
void __thiscall cFixedList::insert_8(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[4];
  puVar3 = (undefined4 *)*param_1;
  if (puVar4 != puVar3) {
    iVar2 = puVar4[0x21];
    iVar1 = puVar4[0x22];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x88) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x84) = iVar2;
    }
    param_1[4] = iVar1;
    param_1[3] = param_1[3] + 1;
    puVar3 = puVar4;
  }
  if (puVar3 != (undefined4 *)*param_1) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *param_4;
        param_4 = param_4 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x84);
    }
    puVar3[0x21] = iVar1;
    puVar3[0x22] = iVar2;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 0x88) = puVar3;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 0x84) = puVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar3;
    }
    *param_2 = (int)puVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A44630  cFixedList::insert_9  size=149  [class]
void __thiscall cFixedList::insert_9(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 0x48);
    iVar2 = *(int *)(iVar1 + 0x4c);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x4c) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x48) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      cShadowParam::cShadowParam(param_4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x48);
    }
    *(int *)(iVar3 + 0x48) = iVar2;
    *(int *)(iVar3 + 0x4c) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x4c) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x48) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A446D0  cFixedList::insert_10  size=176  [class]
void __thiscall cFixedList::insert_10(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 0xd0);
    iVar2 = *(int *)(iVar1 + 0xd4);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xd4) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xd0) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      sAirScatterParam::sAirScatterParam(param_4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0xd0);
    }
    *(int *)(iVar3 + 0xd0) = iVar2;
    *(int *)(iVar3 + 0xd4) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xd4) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xd0) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A46F40  cFixedList::insert_11  size=176  [class]
void __thiscall cFixedList::insert_11(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 0x1e00);
    iVar2 = *(int *)(iVar1 + 0x1e04);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x1e04) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x1e00) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      cLightApplyScale::cLightApplyScale_3(param_4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x1e00);
    }
    *(int *)(iVar3 + 0x1e00) = iVar2;
    *(int *)(iVar3 + 0x1e04) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x1e04) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x1e00) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A47460  FUN_00a47460  size=155  [callgraph]
void __thiscall FUN_00a47460(int param_1,undefined4 param_2)

{
  undefined1 local_48 [4];
  int local_44;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  cShadowParam::cShadowParam(param_2);
  local_24 = local_24 * 0.001953125;
  local_20 = local_20 * 0.001953125;
  local_1c = local_1c * 0.001953125;
  local_18 = local_18 * 0.001953125;
  if (*(int *)(param_1 + 0x360c) != 0) {
    local_44 = *(int *)(param_1 + 0x35e4) + 0xf000;
    cFixedList::insert_9(&param_2,param_1 + 0x1d4,local_48);
    return;
  }
  cFixedList::insert_9(&param_2,param_1 + 0x148,local_48);
  return;
}

// 00A47500  FUN_00a47500  size=117  [callgraph]
void __thiscall FUN_00a47500(int param_1,undefined4 param_2)

{
  undefined1 local_e4 [4];
  undefined1 local_e0 [4];
  int local_dc;
  
  sAirScatterParam::sAirScatterParam(param_2);
  if (*(int *)(param_1 + 0x360c) != 0) {
    local_dc = *(int *)(param_1 + 0x35e4) + 0xf000;
    cFixedList::insert_10(local_e4,param_1 + 0x1f0,local_e0);
    return;
  }
  cFixedList::insert_10(local_e4,param_1 + 0x164,local_e0);
  return;
}

// 00A50AC0  cFixedList::insert_12  size=150  [class]
void __thiscall cFixedList::insert_12(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[2];
    iVar3 = puVar1[3];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
      puVar4[1] = param_4[1];
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
    }
    puVar4[2] = iVar3;
    puVar4[3] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 0xc) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A50B60  cFixedList::insert_13  size=150  [class]
void __thiscall cFixedList::insert_13(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[2];
    iVar3 = puVar1[3];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
      puVar4[1] = param_4[1];
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
    }
    puVar4[2] = iVar3;
    puVar4[3] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 0xc) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A6A1A0  cFixedList::insert_14  size=144  [class]
void __thiscall cFixedList::insert_14(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00A816F0  cFixedList::insert_15  size=144  [class]
void __thiscall cFixedList::insert_15(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00AFFF60  cFixedList::insert_16  size=144  [class]
void __thiscall cFixedList::insert_16(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C567E0  cFixedList::insert_17  size=149  [class]
void __thiscall cFixedList::insert_17(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar2 = *(int *)(iVar1 + 0x40);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x40) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x3c) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      FUN_00c232e0(param_4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x3c);
    }
    *(int *)(iVar3 + 0x3c) = iVar2;
    *(int *)(iVar3 + 0x40) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x40) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x3c) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C56880  cFixedList::insert_18  size=157  [class]
void __thiscall cFixedList::insert_18(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[0x10];
    iVar3 = puVar1[0x11];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x44) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x40) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
      FUN_00c232e0(param_4 + 1);
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x40);
    }
    puVar4[0x10] = iVar3;
    puVar4[0x11] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 0x44) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 0x40) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C56920  cFixedList::insert_19  size=185  [class]
void __thiscall cFixedList::insert_19(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[6];
    iVar3 = puVar1[7];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x1c) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x18) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
      puVar4[1] = param_4[1];
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_4 + 2);
      puVar4[3] = param_4[3];
      FUN_00a7c940(param_4 + 4);
      puVar4[5] = param_4[5];
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 0x18);
    }
    puVar4[6] = iVar3;
    puVar4[7] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 0x1c) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 0x18) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C569E0  cFixedList::insert_20  size=149  [class]
void __thiscall cFixedList::insert_20(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      FUN_00a7c940(param_4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 4);
    }
    *(int *)(iVar3 + 4) = iVar2;
    *(int *)(iVar3 + 8) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C56A80  cFixedList::insert_21  size=144  [class]
void __thiscall cFixedList::insert_21(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C56B10  cFixedList::insert_22  size=157  [class]
void __thiscall cFixedList::insert_22(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar3 = *param_1;
  iVar1 = param_1[4];
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 0x40);
    iVar2 = *(int *)(iVar1 + 0x44);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x44) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x40) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  local_4 = iVar3;
  if (iVar3 != *param_1) {
    FUN_00c40490(&local_4,param_4);
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x40);
    }
    *(int *)(iVar3 + 0x40) = iVar2;
    *(int *)(iVar3 + 0x44) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x44) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x40) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C5DD70  cFixedList::insert_23  size=157  [class]
void __thiscall cFixedList::insert_23(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[4];
  iVar3 = *param_1;
  if (iVar1 != iVar3) {
    iVar3 = *(int *)(iVar1 + 8);
    iVar2 = *(int *)(iVar1 + 0xc);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xc) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    param_1[4] = iVar2;
    param_1[3] = param_1[3] + 1;
    iVar3 = iVar1;
  }
  if (iVar3 != *param_1) {
    if (iVar3 != 0) {
      FUN_00a7c940(param_4);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_4 + 4);
    }
    iVar1 = *param_3;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 8);
    }
    *(int *)(iVar3 + 8) = iVar2;
    *(int *)(iVar3 + 0xc) = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = iVar3;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = iVar3;
    }
    *param_2 = iVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C6ED60  cFixedList::insert_24  size=144  [class]
void __thiscall cFixedList::insert_24(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00C6EDF0  cFixedList::insert_25  size=144  [class]
void __thiscall cFixedList::insert_25(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00D0B650  cFixedList::insert_26  size=144  [class]
void __thiscall cFixedList::insert_26(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00D0B6E0  FUN_00d0b6e0  size=60  [between]
void __fastcall FUN_00d0b6e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

// 00D0B720  FUN_00d0b720  size=60  [between]
void __fastcall FUN_00d0b720(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

// 00D0B760  cFixedList::insert_27  size=144  [class]
void __thiscall cFixedList::insert_27(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00EC3A50  cFixedList::insert_28  size=144  [class]
void __thiscall cFixedList::insert_28(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00F454B0  cFixedList::insert_29  size=144  [class]
void __thiscall cFixedList::insert_29(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00FAA150  cFixedList::insert_30  size=151  [class]
void __thiscall cFixedList::insert_30(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[4];
  puVar3 = (undefined4 *)*param_1;
  if (puVar4 != puVar3) {
    iVar2 = puVar4[10];
    iVar1 = puVar4[0xb];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x2c) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x28) = iVar2;
    }
    param_1[4] = iVar1;
    param_1[3] = param_1[3] + 1;
    puVar3 = puVar4;
  }
  if (puVar3 != (undefined4 *)*param_1) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *param_4;
        param_4 = param_4 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x28);
    }
    puVar3[10] = iVar1;
    puVar3[0xb] = iVar2;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 0x2c) = puVar3;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 0x28) = puVar3;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar3;
    }
    *param_2 = (int)puVar3;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

// 00FC21C0  cFixedList::insert_31  size=145  [class]
void __thiscall cFixedList::insert_31(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)param_1[4];
  puVar4 = (undefined4 *)*param_1;
  if (puVar1 != puVar4) {
    iVar2 = puVar1[1];
    iVar3 = puVar1[2];
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    param_1[4] = iVar3;
    param_1[3] = param_1[3] + 1;
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined4 *)*param_1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_4;
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + 4);
    }
    puVar4[1] = iVar3;
    puVar4[2] = iVar2;
    if (iVar3 != 0) {
      *(undefined4 **)(iVar3 + 8) = puVar4;
    }
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 4) = puVar4;
    }
    if (param_1[5] == *param_3) {
      param_1[5] = (int)puVar4;
    }
    *param_2 = (int)puVar4;
    return;
  }
  FUN_00dd5650("cFixedList<tC>::insert  list max over!");
  *param_2 = *param_1;
  return;
}

