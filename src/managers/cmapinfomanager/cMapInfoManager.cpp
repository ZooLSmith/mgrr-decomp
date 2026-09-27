// src/managers/cmapinfomanager/cMapInfoManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0096D700..0096D8E0, 2 functions

#include "types.h"

// 0096D700  cMapInfoManager::sortPathData  size=466  [class]
void __thiscall cMapInfoManager::sortPathData(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_14c;
  undefined4 local_100 [46];
  int local_48;
  uint local_38;
  
  iVar8 = *param_3;
  iVar6 = 0;
  local_14c = 0;
  if (iVar8 != param_3[1] * 0x130 + iVar8) {
    piVar3 = (int *)(iVar8 + 0xf8);
    do {
      iVar4 = *piVar3;
      if (iVar6 <= iVar4) {
        iVar6 = iVar4;
        local_14c = iVar4;
      }
      piVar1 = piVar3 + 0xe;
      piVar3 = piVar3 + 0x4c;
    } while (piVar1 != (int *)(param_3[1] * 0x130 + iVar8));
  }
  uVar7 = iVar6 + 1;
  lVar2 = (ulonglong)uVar7 * 0x130;
  iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,
                       *(undefined4 *)(param_1 + 0x324));
  iVar8 = iVar4;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    for (; -1 < iVar6; iVar6 = iVar6 + -1) {
      FUN_00401040(iVar8 + 0x38,0xc,0x10,&LAB_00964f00);
      FUN_00962e70();
      iVar8 = iVar8 + 0x130;
    }
  }
  param_1 = param_2 * 0x20 + param_1;
  *(int *)(param_1 + 0x28) = iVar4;
  *(uint *)(param_1 + 0x2c) = uVar7;
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_01651954);
    return;
  }
  iVar8 = 0;
  if (-1 < local_14c) {
    do {
      iVar6 = *param_3;
      if (iVar6 != param_3[1] * 0x130 + iVar6) {
        do {
          if (*(int *)(iVar6 + 0xf8) == iVar8) goto LAB_0096d86c;
          iVar6 = iVar6 + 0x130;
        } while (iVar6 != param_3[1] * 0x130 + *param_3);
      }
      iVar6 = 0xf;
      puVar5 = local_100;
      do {
        puVar5[-1] = 0x3fc00000;
        *(undefined2 *)(puVar5 + -2) = 0xffff;
        *(undefined2 *)((int)puVar5 + -6) = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 3;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      FUN_00962e70();
      local_38 = local_38 | 0x40000000;
      iVar6 = extraout_ECX;
      local_48 = iVar8;
LAB_0096d86c:
      FUN_00963a80(iVar6);
      iVar8 = iVar8 + 1;
    } while (iVar8 <= local_14c);
  }
  param_3[1] = 0;
  if (-1 < param_3[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_3,(param_3[2] & 0x3fffffffU) * 0x130);
  }
  *param_3 = 0;
  param_3[2] = -0x80000000;
  return;
}

// 0096D8E0  FUN_0096d8e0  size=768  [callgraph]
undefined4 FUN_0096d8e0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint unaff_EBX;
  uint unaff_ESI;
  int unaff_EDI;
  int iVar4;
  undefined4 local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 auStack_10c [40];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [56];
  
  iVar4 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0x80000000;
  local_164 = 0;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_3);
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(*param_2 + 0x14))(param_3,iVar4);
      if (iVar1 != -1) {
        iVar4 = 0xf;
        puVar2 = auStack_10c;
        do {
          puVar2[-1] = 0x3fc00000;
          *(undefined2 *)(puVar2 + -2) = 0xffff;
          *(undefined2 *)((int)puVar2 + -6) = 0;
          *puVar2 = 0;
          puVar2 = puVar2 + 3;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        FUN_00962e70();
        FUN_00962e70();
        iVar4 = (**(code **)(*param_2 + 0x18))(iVar1,"Position");
        if (iVar4 != -1) {
          local_174 = 0;
          local_170 = 0;
          local_16c = 0;
          (**(code **)(*param_2 + 0x44))(iVar4,&local_174);
          uStack_134 = local_174;
          uStack_130 = local_170;
          uStack_12c = local_16c;
          uStack_128 = local_168;
        }
        iVar4 = (**(code **)(*param_2 + 0x18))(iVar1,"EditNo");
        if (iVar4 != -1) {
          (**(code **)(*param_2 + 0x58))(iVar4,auStack_64);
        }
        iVar4 = (**(code **)(*param_2 + 0x18))(iVar1,"BranchNum");
        if (iVar4 != -1) {
          (**(code **)(*param_2 + 0x58))(iVar4,auStack_68);
        }
        uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"Branch");
        FUN_00963f20(&local_16c,param_2,uVar3);
        iVar4 = (**(code **)(*param_2 + 0x18))(iVar1,&DAT_016514a4);
        if (iVar4 != -1) {
          (**(code **)(*param_2 + 0x68))(iVar4,auStack_6c);
        }
        iVar1 = (**(code **)(*param_2 + 0x18))(iVar1,"PartsInfo");
        if (iVar1 != -1) {
          iVar4 = (**(code **)(*param_2 + 0x18))(iVar1,"ObjId");
          if (iVar4 != -1) {
            (**(code **)(*param_2 + 0x58))(iVar4,auStack_54);
          }
          iVar4 = (**(code **)(*param_2 + 0x18))(iVar1,"PartsNo");
          if (iVar4 != -1) {
            (**(code **)(*param_2 + 0x58))(iVar4,auStack_58);
          }
          iVar4 = (**(code **)(*param_2 + 0x18))(iVar1,"OffSetPos");
          if (iVar4 != -1) {
            local_174 = 0;
            local_170 = 0;
            local_16c = 0;
            (**(code **)(*param_2 + 0x44))(iVar4,&local_174);
            uStack_154 = local_174;
            uStack_150 = local_170;
            uStack_14c = local_16c;
            uStack_148 = local_168;
          }
          iVar1 = (**(code **)(*param_2 + 0x18))(iVar1,"ParentHash");
          if (iVar1 != -1) {
            (**(code **)(*param_2 + 0x68))(iVar1,auStack_3c);
          }
        }
        if (unaff_ESI == (unaff_EBX & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&stack0xfffffe80,0x130);
        }
        if (unaff_ESI * 0x130 + unaff_EDI != 0) {
          FUN_00964be0(&uStack_14c);
        }
        unaff_ESI = unaff_ESI + 1;
      }
      local_170 = local_170 + 1;
      iVar4 = (int)(short)local_170;
      iVar1 = (**(code **)(*param_2 + 0x10))(param_3);
    } while (iVar4 < iVar1);
  }
  cMapInfoManager::sortPathData(param_1,&stack0xfffffe88);
  local_174 = 0;
  if (-1 < (int)local_170) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(unaff_EBX,(local_170 & 0x3fffffff) * 0x130);
  }
  return 1;
}

