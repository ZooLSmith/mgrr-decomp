// src/unsorted/unit_00C71610.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C71610..00C71D70, 7 functions

#include "types.h"

// 00C71610  FUN_00c71610  size=121  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00c71610(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01d644b4 & 1) == 0) {
    _DAT_01d644b4 = _DAT_01d644b4 | 1;
    DAT_01d644b0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01d644b0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01d644b0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00c6cd20(param_1,"cover_dir",param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00C71690  FUN_00c71690  size=67  [run]
void __thiscall FUN_00c71690(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)(param_1 + 0x14));
  FUN_00c6eee0(&local_8,*(int *)(param_1 + 4),*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18,
               param_3,local_8,0);
  *param_2 = local_8;
  param_2[1] = local_4;
  return;
}

// 00C71730  FUN_00c71730  size=326  [run]
uint __thiscall FUN_00c71730(int *param_1,int *param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  
  iVar3 = param_3;
  if ((*(int *)(*param_1 + 0xc) == *param_2) || (param_1[3] == 8)) {
    return (uint)param_2 & 0xffffff00;
  }
  puVar6 = (ushort *)param_1[2];
  puVar1 = puVar6 + param_1[3];
  if (puVar6 != puVar1) {
    do {
      if ((uint)*puVar6 < *(uint *)(param_3 + 0x54)) {
        piVar5 = (int *)((uint)*puVar6 * 0x10 + *(int *)(param_3 + 0x4c));
      }
      else {
        piVar5 = (int *)0x0;
      }
      if (*piVar5 == *param_2) goto LAB_00c7186d;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  uVar4 = *(ushort *)(param_3 + 0x58);
  uVar2 = *(uint *)(param_3 + 0x54);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        uVar4 = 0;
      }
      if (*(int *)(*(int *)(param_3 + 0x4c) + (uint)uVar4 * 0x10) == -1) {
        *(ushort *)(param_3 + 0x58) = uVar4;
        param_3 = (uint)uVar4;
        goto LAB_00c717c8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  param_3 = 0xffff;
LAB_00c717c8:
  piVar5 = (int *)0xffff;
  uVar4 = (ushort)param_3;
  if (uVar4 != 0xffff) {
    puVar1 = (ushort *)(param_1[2] + param_1[3] * 2);
    puVar6 = (ushort *)FUN_00c6d7b0(param_1[2],puVar1,&param_3,(char)param_1[5],0);
    if ((puVar6 == puVar1) || (uVar4 < *puVar6)) {
      (**(code **)(param_1[1] + 0xc))(puVar6,&param_3);
    }
    *(short *)(*param_1 + 0x18) = (short)param_1[3];
    piVar5 = (int *)(param_3 & 0xffff);
    if ((piVar5 < *(int **)(iVar3 + 0x54)) &&
       (piVar5 = (int *)((int)piVar5 * 0x10 + *(int *)(iVar3 + 0x4c)), piVar5 != (int *)0x0)) {
      *piVar5 = *param_2;
      piVar5[3] = param_2[3];
      piVar5[1] = param_2[1];
      piVar5[2] = param_2[2];
    }
    return CONCAT31((int3)((uint)piVar5 >> 8),1);
  }
LAB_00c7186d:
  return (uint)piVar5 & 0xffffff00;
}

// 00C71880  FUN_00c71880  size=438  [run]
void __thiscall FUN_00c71880(undefined4 *param_1,int param_2)

{
  int *piVar1;
  ushort *puVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  ushort *local_c;
  int *local_4;
  
  local_c = (ushort *)param_1[2];
  if (local_c != local_c + param_1[3]) {
    do {
      if ((uint)*local_c < *(uint *)(param_2 + 0x54)) {
        local_4 = (int *)((uint)*local_c * 0x10 + *(int *)(param_2 + 0x4c));
      }
      else {
        local_4 = (int *)0x0;
      }
      piVar9 = *(int **)(param_2 + 0x30);
      piVar1 = piVar9 + *(int *)(param_2 + 0x34) * 6;
      iVar8 = ((int)piVar1 - (int)piVar9) / 0x18;
      while (iVar7 = iVar8, 0 < iVar7) {
        iVar8 = iVar7 / 2;
        if (*(int *)(piVar9[iVar8 * 6] + 0xc) < *local_4) {
          piVar9 = piVar9 + iVar8 * 6 + 6;
          iVar8 = iVar7 + (-1 - iVar8);
        }
      }
      if ((piVar9 != piVar1) && (*local_4 < *(int *)(*piVar9 + 0xc))) {
        piVar9 = piVar1;
      }
      if (((piVar9 == piVar1) ||
          ((*(uint *)(param_2 + 0x118) & 1 << ((byte)*(undefined2 *)(*piVar9 + 0x1a) & 0x1f)) == 0))
         || (pfVar3 = (float *)*piVar9, pfVar3 == (float *)0x0)) {
        uVar4 = param_1[3];
        iVar8 = param_1[2];
        puVar2 = (ushort *)(iVar8 + uVar4 * 2);
        if (((local_c != puVar2) && (iVar8 != 0)) &&
           ((uVar4 != 0 && ((uint)((int)local_c - iVar8 >> 1) < uVar4)))) {
          for (puVar10 = local_c; puVar10 != puVar2 + -1; puVar10 = puVar10 + 1) {
            *puVar10 = puVar10[1];
          }
          param_1[3] = param_1[3] + -1;
          puVar2 = local_c;
        }
      }
      else {
        pfVar5 = (float *)*param_1;
        fVar6 = 1.0;
        if ((*(byte *)(local_4 + 2) & 1) != 0) {
          fVar6 = 0.5;
        }
        uVar4 = local_4[2];
        if ((uVar4 >> 1 & 1) != 0) {
          fVar6 = fVar6 * 0.75;
        }
        if ((uVar4 >> 2 & 1) != 0) {
          fVar6 = fVar6 * 1.25;
        }
        if ((uVar4 >> 3 & 1) != 0) {
          fVar6 = fVar6 * 1.5;
        }
        local_4[3] = (int)(fVar6 * SQRT((pfVar5[2] - pfVar3[2]) * (pfVar5[2] - pfVar3[2]) +
                                        (pfVar5[1] - pfVar3[1]) * (pfVar5[1] - pfVar3[1]) +
                                        (*pfVar5 - *pfVar3) * (*pfVar5 - *pfVar3)));
        puVar2 = local_c + 1;
      }
      local_c = puVar2;
    } while (local_c != (ushort *)(param_1[2] + param_1[3] * 2));
  }
  return;
}

// 00C71A40  FUN_00c71a40  size=565  [run]
uint __thiscall FUN_00c71a40(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  byte local_d;
  int iStack_c;
  uint uStack_8;
  ushort *puStack_4;
  
  puVar8 = param_2;
  cVar3 = FUN_00c6ec80(param_2,&DAT_0164a424,*param_1 + 0xc);
  if (((cVar3 != '\0') && (cVar3 = FUN_00c6ef90(puVar8,"position",*param_1), cVar3 != '\0')) &&
     (cVar3 = FUN_00c6cd20(puVar8,"radius",*param_1 + 0x10), cVar3 != '\0')) {
    cVar3 = FUN_00c6cf40(puVar8,"flags",*param_1 + 0x14);
    local_d = 1;
    if (cVar3 != '\0') goto LAB_00c71ab4;
  }
  local_d = 0;
LAB_00c71ab4:
  bVar4 = FUN_00c6cff0(puVar8,"groupNo",*param_1 + 0x1c);
  bVar5 = FUN_00c6cff0(puVar8,"extendId",*param_1 + 0x1e);
  bVar5 = local_d & bVar4 & bVar5;
  cVar3 = (**(code **)*puVar8)();
  if (cVar3 == '\0') {
    param_2 = (undefined4 *)(uint)*(ushort *)(param_1 + 3);
    FUN_00c6d110(puVar8,&DAT_016a7b94,*param_1 + 0x1a);
    FUN_00c6d1a0(puVar8,&DAT_016a7b8c,&param_2);
    puVar10 = (ushort *)param_1[2];
    iVar6 = param_1[3];
    if (puVar10 != puVar10 + iVar6) {
      do {
        puStack_4 = (ushort *)(uint)*puVar10;
        uVar7 = FUN_00c6d080(puVar8,"value",&puStack_4);
        if ((char)uVar7 == '\0') {
          return uVar7 & 0xffffff00;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != (ushort *)(param_1[2] + param_1[3] * 2));
      return CONCAT31((int3)((uint)param_1[2] >> 8),bVar5);
    }
  }
  else {
    FUN_00c6cff0(puVar8,&DAT_016a7b94,*param_1 + 0x1a);
    FUN_00c6d080(puVar8,&DAT_016a7b8c,*param_1 + 0x18);
    if (param_1[2] != 0) {
      param_1[3] = 0;
    }
    uStack_8 = 0;
    iVar6 = *param_1;
    if (*(short *)(iVar6 + 0x18) != 0) {
      iStack_c = 0x20;
      do {
        FUN_00c6d080(puVar8,"value",iVar6 + iStack_c);
        puVar9 = (ushort *)(*param_1 + iStack_c);
        puVar10 = (ushort *)param_1[2];
        puStack_4 = puVar10 + param_1[3];
        iVar6 = (int)puStack_4 - (int)puVar10 >> 1;
        while (iVar2 = iVar6, 0 < iVar2) {
          iVar6 = iVar2 / 2;
          if (puVar10[iVar6] < *puVar9) {
            puVar10 = puVar10 + iVar6 + 1;
            iVar6 = iVar2 + (-1 - iVar6);
          }
        }
        if ((puVar10 == puStack_4) || (*puVar9 < *puVar10)) {
          (**(code **)(param_1[1] + 0xc))(puVar10,puVar9);
        }
        iVar6 = *param_1;
        iStack_c = iStack_c + 2;
        uStack_8 = uStack_8 + 1;
        puVar8 = param_2;
      } while (uStack_8 < *(ushort *)(iVar6 + 0x18));
    }
    if (*(short *)(*param_1 + 0x1a) == 0) {
      puVar1 = (uint *)(*param_1 + 0x14);
      *puVar1 = *puVar1 | 0x4000000;
    }
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),bVar5);
}

// 00C71C80  FUN_00c71c80  size=239  [run]
undefined4 __thiscall FUN_00c71c80(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint local_4;
  
  iVar4 = 0;
  if (param_1[2] == 0) {
    local_4 = 0;
  }
  else {
    local_4 = (uint)*(ushort *)(param_1[2] + 0xc);
  }
  FUN_00c6cff0(param_2,"bufferSize",&local_4);
  cVar2 = (**(code **)*param_2)();
  if (cVar2 == '\0') {
    iVar3 = param_1[2];
    if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0xc))) {
      do {
        if (*(int *)(*(int *)(iVar3 + 4) + iVar4 * 4) != 0) {
          FUN_00c71610(param_2,"extend",*(undefined4 *)(*(int *)(iVar3 + 4) + iVar4 * 4));
        }
        iVar3 = param_1[2];
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar3 + 0xc));
      return 1;
    }
  }
  else {
    FUN_00c6f400();
    FUN_00c6fab0((int)(short)local_4);
    iVar4 = 0;
    if (0 < (short)local_4) {
      do {
        FUN_00c71610(param_2,"extend",*param_1 + iVar4 * 4);
        iVar3 = param_1[2];
        if (*(int *)(iVar3 + 0xc) < *(int *)(iVar3 + 8)) {
          piVar1 = (int *)(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc) * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = *param_1 + iVar4 * 4;
          }
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (short)local_4);
    }
  }
  return 1;
}

// 00C71D70  FUN_00c71d70  size=741  [run]
undefined4 __thiscall FUN_00c71d70(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  int iStack_20;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  puVar2 = param_2;
  cVar3 = (**(code **)*param_2)();
  if (cVar3 == '\0') {
    param_2 = (undefined4 *)0x0;
    if (param_1[2] != 0) {
      param_2 = *(undefined4 **)(param_1[2] + 0xc);
      FUN_00c6cf40(puVar2,"hasParentSize",&param_2);
      piVar6 = *(int **)(param_1[2] + 4);
      if (piVar6 != piVar6 + *(int *)(param_1[2] + 0xc)) {
        do {
          piVar4 = (int *)*piVar6;
          iStack_40 = *piVar4;
          iStack_3c = piVar4[1];
          iStack_38 = piVar4[2];
          iStack_34 = piVar4[3];
          iStack_30 = piVar4[4];
          iStack_2c = piVar4[5];
          aiStack_28[0] = piVar4[6];
          FUN_00a7c940(piVar4 + 7);
          uStack_44 = *(undefined4 *)(iStack_40 + 0xc);
          FUN_00c6ec80(puVar2,&DAT_0164a424,&uStack_44);
          FUN_00c6ef90(puVar2,"localPos",&iStack_3c);
          FUN_00c6cf40(puVar2,"hashNo",&iStack_30);
          FUN_00c6d340(puVar2,"partsNo",&iStack_2c);
          FUN_00c6cf40(puVar2,"parentId",aiStack_28);
          piVar6 = piVar6 + 1;
        } while (piVar6 != (int *)(*(int *)(param_1[2] + 4) + *(int *)(param_1[2] + 0xc) * 4));
      }
      return 1;
    }
    FUN_00c6cf40(puVar2,"hasParentSize",&param_2);
    return 1;
  }
  piVar6 = param_1 + 4;
  *piVar6 = 0;
  if (param_1[3] != 0) {
    FUN_00dd4940(param_1[3]);
    param_1[3] = 0;
  }
  FUN_00c6f490();
  FUN_00c6cf40(puVar2,"hasParentSize",piVar6);
  iStack_50 = *piVar6;
  uVar5 = iStack_50 + *(int *)(*param_1 + 0x5c);
  param_1[4] = uVar5;
  if (uVar5 == 0) {
    param_1[3] = 0;
  }
  else {
    param_2 = (undefined4 *)
              FUN_00dd3580(-(uint)((int)((ulonglong)uVar5 * 0x20 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar5 * 0x20),param_1[1]);
    if (param_2 == (undefined4 *)0x0) {
      param_1[3] = 0;
    }
    else {
      FUN_00401040(param_2,0x20,uVar5,FUN_00c680f0);
      param_1[3] = (int)param_2;
    }
  }
  FUN_00c6fc00(param_1[4]);
  do {
    if (iStack_50 == 0) {
      return 1;
    }
    iStack_20 = 0;
    uStack_10 = 0;
    uStack_c = 0xffffffff;
    auStack_8[0] = 0;
    FUN_00a7c930();
    FUN_00c6ec80(puVar2,&DAT_0164a424,&iStack_54);
    FUN_00c6ef90(puVar2,"localPos",auStack_1c);
    FUN_00c6cf40(puVar2,"hashNo",&uStack_10);
    FUN_00c6d340(puVar2,"partsNo",&uStack_c);
    FUN_00c6cf40(puVar2,"parentId",auStack_8);
    iVar1 = *param_1;
    uStack_4c = CONCAT31(uStack_4c._1_3_,*(undefined1 *)(iVar1 + 0x40));
    iStack_48 = iStack_54;
    piVar6 = (int *)(*(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x34) * 0x18);
    piVar4 = (int *)FUN_00c6d990(*(int *)(iVar1 + 0x30),piVar6,&iStack_48,uStack_4c,0);
    if (piVar4 == piVar6) {
LAB_00c71f0b:
      iStack_20 = 0;
    }
    else {
      if (iStack_54 < *(int *)(*piVar4 + 0xc)) {
        piVar4 = piVar6;
      }
      if ((piVar4 == piVar6) ||
         ((*(uint *)(iVar1 + 0x118) & 1 << ((byte)*(undefined2 *)(*piVar4 + 0x1a) & 0x1f)) == 0))
      goto LAB_00c71f0b;
      iStack_20 = *piVar4;
    }
    if (iStack_20 != 0) {
      FUN_00c6dd40(&iStack_20);
    }
    iStack_50 = iStack_50 + -1;
  } while( true );
}

