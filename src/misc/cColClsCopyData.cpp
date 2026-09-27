// src/misc/cColClsCopyData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0096F0F0..00977C00, 162 functions

#include "types.h"

// 0096F0F0  FUN_0096f0f0  size=259  [callgraph]
void __thiscall FUN_0096f0f0(int param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short local_14 [10];
  
  *param_2 = 0;
  iVar3 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  if (0 < param_3) {
    do {
      bVar1 = false;
      uVar5 = 0;
      iVar4 = 0;
      uVar6 = 1;
      iVar2 = *(int *)(param_1 + 8) + iVar3;
      do {
        if (*(char *)(iVar2 + 4) == '\0') {
          uVar5 = uVar5 | uVar6;
        }
        else if (*(char *)(iVar2 + 4) == '\x01') {
          bVar1 = true;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 8;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      } while (iVar4 < 3);
      if (uVar5 == 0) {
        if (bVar1) {
          local_14[0] = local_14[0] + 1;
        }
        else {
          local_14[1] = local_14[1] + 1;
        }
      }
      else {
        if (uVar5 == 5) {
          bVar1 = !bVar1;
        }
        bVar1 = !bVar1;
        if (uVar5 == 3) {
LAB_0096f195:
          local_14[bVar1] = local_14[bVar1] + 2;
          local_14[!bVar1] = local_14[!bVar1] + 1;
        }
        else if (uVar5 == 5) {
          local_14[bVar1] = local_14[bVar1] + 1;
          local_14[!bVar1] = local_14[!bVar1] + 2;
        }
        else if (uVar5 == 6) goto LAB_0096f195;
        *param_2 = *param_2 + 1;
      }
      iVar3 = iVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *(int *)(param_4 + 4) = local_14[0] * 3;
  *(int *)(param_4 + 0xc) = local_14[1] * 3;
  return;
}

// 0096F200  FUN_0096f200  size=344  [callgraph]
undefined4 __thiscall FUN_0096f200(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  uVar1 = *param_1;
  uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 8) + param_3 * 6);
  if (uVar7 < uVar1) {
    FUN_00dd5650(&DAT_01651a04);
  }
  uVar7 = uVar7 - uVar1;
  if (0xfffe < (int)uVar7) {
    FUN_00dd5650(&DAT_01651a04);
  }
  uVar7 = (uint)*(byte *)(*(int *)(param_1 + 4) + (uVar7 & 0xffff));
  local_8 = 0;
  iVar6 = param_2 + uVar7 * 0x14;
  iVar4 = param_3 * 0x18;
  param_3 = param_3 * 6;
  do {
    uVar1 = *param_1;
    uVar2 = *(ushort *)(*(int *)(param_1 + 8) + param_3);
    if ((uint)uVar2 < (uint)uVar1) {
      FUN_00dd5650(&DAT_01651a04);
    }
    uVar5 = (uint)uVar2 - (uint)uVar1;
    if (0xfffe < (int)uVar5) {
      FUN_00dd5650(&DAT_01651a04);
    }
    iVar3 = *(int *)(param_1 + 6);
    if (3 < *(int *)(iVar6 + 0x10)) {
      return 0;
    }
    *(uint *)(iVar6 + *(int *)(iVar6 + 0x10) * 4) = uVar5 & 0xffff;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (*(char *)(iVar3 + 4 + iVar4) == '\0') {
      if (3 < *(int *)(iVar6 + 0x10)) {
        return 0;
      }
      *(uint *)(iVar6 + *(int *)(iVar6 + 0x10) * 4) = *(uint *)(iVar3 + iVar4) | 0x80000000;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      uVar7 = uVar7 - 1 & 1;
      iVar6 = param_2 + uVar7 * 0x14;
      if (3 < *(int *)(iVar6 + 0x10)) {
        return 0;
      }
      *(uint *)(iVar6 + *(int *)(iVar6 + 0x10) * 4) = *(uint *)(iVar3 + iVar4) | 0x80000000;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    }
    param_3 = param_3 + 2;
    local_8 = local_8 + 1;
    iVar4 = iVar4 + 8;
    if (2 < local_8) {
      return 1;
    }
  } while( true );
}

// 0096F360  FUN_0096f360  size=170  [callgraph]
undefined4 FUN_0096f360(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3[4];
  if (iVar1 == 3) {
    iVar3 = 3;
  }
  else if (iVar1 == 4) {
    iVar3 = 6;
  }
  else {
    iVar3 = 0;
  }
  iVar2 = *param_2;
  if (param_4 < iVar3 + iVar2) {
    return 0;
  }
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *param_3;
    *(undefined4 *)(param_1 + 4 + *param_2 * 4) = param_3[1];
    *(undefined4 *)(param_1 + 8 + *param_2 * 4) = param_3[2];
    *param_2 = *param_2 + 3;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *param_3;
    *(undefined4 *)(param_1 + 4 + *param_2 * 4) = param_3[1];
    *(undefined4 *)(param_1 + 8 + *param_2 * 4) = param_3[2];
    *(undefined4 *)(param_1 + 0xc + *param_2 * 4) = *param_3;
    *(undefined4 *)(param_1 + 0x10 + *param_2 * 4) = param_3[2];
    *(undefined4 *)(param_1 + 0x14 + *param_2 * 4) = param_3[3];
    *param_2 = *param_2 + 6;
    return 1;
  }
  return 1;
}

// 0096F410  FUN_0096f410  size=114  [callgraph]
undefined4 __fastcall FUN_0096f410(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [20];
  undefined1 local_14 [20];
  
  if (0 < *(int *)(param_1 + 4)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_0096f200(local_28,iVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_0096f360(*(undefined4 *)(param_1 + 0x14),param_1 + 0x24,local_28,
                           *(undefined4 *)(param_1 + 0x1c));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_0096f360(*(undefined4 *)(param_1 + 0x18),param_1 + 0x28,local_14,
                           *(undefined4 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return 1;
}

// 0096F490  FUN_0096f490  size=172  [callgraph]
void __thiscall FUN_0096f490(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  iVar3 = param_2;
  *(undefined4 *)(param_2 + 0x14) = 0;
  local_8 = 0;
  param_2 = param_3 * 4;
  do {
    iVar1 = *(int *)(param_2 + *param_1);
    iVar2 = param_1[4];
    iVar4 = 0;
    iVar6 = -1;
    if (0 < iVar2) {
      piVar7 = (int *)param_1[2];
      do {
        iVar6 = iVar4;
        if (*piVar7 == iVar1) break;
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
        iVar6 = -1;
      } while (iVar4 < iVar2);
    }
    iVar4 = *(int *)(iVar3 + 0x14);
    iVar5 = 0;
    if (0 < iVar4) {
      piVar7 = (int *)(iVar3 + 8);
      do {
        if (*piVar7 == iVar1) {
          iVar6 = iVar2 + iVar5;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < iVar4);
    }
    if (iVar6 == -1) {
      *(int *)(iVar3 + 8 + iVar4 * 4) = iVar1;
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      iVar6 = iVar2 + iVar4;
    }
    param_2 = param_2 + 4;
    *(short *)(iVar3 + local_8 * 2) = (short)iVar6;
    local_8 = local_8 + 1;
    if (2 < local_8) {
      return;
    }
  } while( true );
}

// 0096F550  FUN_0096f550  size=196  [callgraph]
void __thiscall FUN_0096f550(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int local_10;
  
  *(undefined4 *)(param_2 + 0x48) = 0;
  local_10 = *(int *)(param_2 + 0x3c) / 3;
  if (0 < local_10) {
    iVar8 = 0;
    do {
      iVar1 = param_1[3];
      iVar2 = param_1[2];
      uVar3 = *(uint *)(iVar2 + (uint)*(ushort *)(iVar8 + iVar1) * 4);
      if ((int)uVar3 < 0) {
        iVar4 = param_1[1];
      }
      else {
        iVar4 = *param_1;
      }
      uVar5 = *(uint *)(iVar2 + (uint)*(ushort *)(iVar8 + 2 + iVar1) * 4);
      if ((int)uVar5 < 0) {
        iVar6 = param_1[1];
      }
      else {
        iVar6 = *param_1;
      }
      uVar7 = *(uint *)(iVar2 + (uint)*(ushort *)(iVar8 + 4 + iVar1) * 4);
      if ((int)uVar7 < 0) {
        iVar1 = param_1[1];
      }
      else {
        iVar1 = *param_1;
      }
      fVar9 = (float10)FUN_00a05d20((uVar3 & 0xffff) * 0x10 + iVar4,(uVar5 & 0xffff) * 0x10 + iVar6,
                                    (uVar7 & 0xffff) * 0x10 + iVar1);
      iVar8 = iVar8 + 6;
      local_10 = local_10 + -1;
      *(float *)(param_2 + 0x48) = (float)(fVar9 + (float10)*(float *)(param_2 + 0x48));
    } while (local_10 != 0);
  }
  return;
}

// 0096F620  FUN_0096f620  size=126  [callgraph]
void __thiscall FUN_0096f620(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (((void *)*param_1 != (void *)0x0) && ((void *)param_1[2] != (void *)0x0)) {
    FID_conflict__memcpy((void *)param_1[2],(void *)*param_1,*(int *)(param_2 + 0x10) << 4);
    if (0 < *(int *)(iVar1 + 0x14)) {
      iVar2 = 0;
      do {
        param_2 = (uint)(ushort)((*(short *)(param_1[1] + iVar2 * 2) - *(short *)(iVar1 + 4)) +
                                *(short *)(iVar1 + 0x1c));
        FUN_00a1aca0(iVar2 * 2,&param_2,2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x14));
    }
    return;
  }
  FUN_00dd5650(&DAT_01651a24,*(undefined4 *)(param_2 + 0x10));
  return;
}

// 0096F6F0  FUN_0096f6f0  size=93  [callgraph]
void __thiscall FUN_0096f6f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_2 + 0x5c)) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 1;
      *(int *)(iVar2 + *(int *)(param_1 + 4)) = iVar3 + -1;
      *(int *)(*(int *)(param_1 + 4) + 4 + iVar2) = iVar1;
      *(int *)(*(int *)(param_1 + 4) + 8 + iVar2) = iVar3;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar2) = 0;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar1;
    } while (iVar1 < *(int *)(param_2 + 0x5c));
  }
  iVar3 = *(int *)(param_2 + 0x5c) + -1;
  **(int **)(param_1 + 4) = iVar3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 0x10) = 0;
  return;
}

// 0096F7C0  FUN_0096f7c0  size=140  [callgraph]
void __fastcall FUN_0096f7c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0096f410();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x24) = 0;
  return;
}

// 0096F870  FUN_0096f870  size=42  [callgraph]
void __fastcall FUN_0096f870(int param_1)

{
  FUN_00a19c00();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00a19be0();
  return;
}

// 0096F8A0  FUN_0096f8a0  size=87  [callgraph]
void __thiscall FUN_0096f8a0(int *param_1,int param_2)

{
  FUN_00a19c00();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_00a19be0();
  *param_1 = *(int *)(param_2 + 0x24);
  param_1[1] = (uint)*(ushort *)(param_2 + 0x44);
  param_1[2] = *(int *)(param_2 + 0x30);
  param_1[3] = *(int *)(param_2 + 0x34);
  param_1[4] = *(int *)(*param_1 + 0x2c);
  param_1[5] = *(int *)(*param_1 + 0x34);
  return;
}

// 0096F900  cColClsCopyData::setNewData  size=184  [class]
undefined4 __thiscall
cColClsCopyData::setNewData(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if ((param_1[2] == 0) || (param_1[3] == 0)) {
    FUN_00dd5650(&DAT_01651a40);
  }
  else {
    local_14 = *param_1;
    local_c = param_1[4];
    local_18 = local_14 + 0x10;
    local_4 = *(undefined4 *)(local_14 + 0x24);
    local_8 = param_1[5];
    local_10 = param_3;
    iVar1 = FUN_00976fb0(&local_28,&local_18);
    if (iVar1 != 0) {
      param_1[7] = local_20;
      param_1[8] = local_20 * 0x10 + local_28;
      iVar1 = FUN_00a19c30(local_24 + local_1c * 2,local_8 * 2,&DAT_01b7c060);
      if (iVar1 != 0) {
        param_1[6] = 1;
        return 1;
      }
    }
  }
  return 0;
}

// 0096FA80  FUN_0096fa80  size=99  [between]
void __fastcall FUN_0096fa80(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x34));
  }
  FUN_00a19c00();
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00a19be0();
  return;
}

// 0096FAF0  FUN_0096faf0  size=133  [between]
undefined4 __thiscall FUN_0096faf0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  FUN_0096fa80();
  lVar1 = (ulonglong)(uint)(param_2 * 2) * 4;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  *(int *)(param_1 + 0x30) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)param_3 * 2),param_4);
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x44) = param_3;
      *(int *)(param_1 + 0x40) = param_2;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      return 1;
    }
  }
  return 0;
}

// 0096FB80  FUN_0096fb80  size=191  [between]
undefined4 __thiscall FUN_0096fb80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    FUN_00dd5650(&DAT_01651ad0);
  }
  if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x3c)) {
    FUN_00dd5650(&DAT_01651a80);
  }
  local_4 = *(undefined4 *)(param_1 + 0x48);
  local_c = *(undefined4 *)(param_1 + 0x38);
  local_10 = param_3;
  local_14 = param_1 + 0x10;
  local_8 = *(int *)(param_1 + 0x3c);
  local_18 = param_1;
  iVar1 = FUN_00976fb0(&local_28,&local_18);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x50) = local_20;
    *(int *)(param_1 + 0x54) = local_20 * 0x10 + local_28;
    iVar1 = FUN_00a19c30(local_24 + local_1c * 2,local_8 * 2,&DAT_01b7c060);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      return 1;
    }
  }
  return 0;
}

// 0096FC80  FUN_0096fc80  size=119  [between]
void __fastcall FUN_0096fc80(int param_1)

{
  undefined4 *puVar1;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0xfff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xa4);
  local_4 = 2;
  do {
    puVar1[-0xc] = 0;
    *puVar1 = 0;
    FUN_00a19be0();
    puVar1 = puVar1 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

// 0096FD00  FUN_0096fd00  size=167  [between]
void __fastcall FUN_0096fd00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x58));
  }
  iVar1 = 2;
  do {
    FUN_00a19c00();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0xfff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xa4);
  local_4 = 2;
  do {
    puVar2[-0xc] = 0;
    *puVar2 = 0;
    FUN_00a19be0();
    puVar2 = puVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

// 0096FDB0  FUN_0096fdb0  size=144  [between]
undefined4 __thiscall FUN_0096fdb0(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_0096fd00();
  uVar1 = param_2 * 3 - 6;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),param_3);
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 2),param_3);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x68) = uVar1;
      *(uint *)(param_1 + 0x5c) = param_2;
      *(int *)(param_1 + 0x6c) = (int)uVar1 / 3;
      *(undefined4 *)(param_1 + 100) = 0;
      return 1;
    }
  }
  return 0;
}

// 0096FE80  FUN_0096fe80  size=230  [between]
bool __thiscall
FUN_0096fe80(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x70);
  local_18 = param_1 + 0x10;
  local_c = *(undefined4 *)(param_1 + 0x5c);
  local_8 = *(int *)(param_1 + 100);
  local_14 = param_1 + 0x20;
  local_10 = param_5;
  if (local_8 < 1) {
    return true;
  }
  iVar1 = FUN_00976fb0(&local_28,&local_18);
  if (iVar1 == 0) {
    return false;
  }
  *(int *)(param_1 + 0xa4 + (uint)(param_4 != 0) * 4) = local_20;
  *(int *)(param_1 + 0x74 + (uint)(param_4 != 0) * 4) = local_20 * 0x10 + local_28;
  iVar1 = FUN_00a19c30(local_24 + local_1c * 2,local_8 * 2,&DAT_01b7c060);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00977c00(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x30),
                       *(undefined2 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),param_3,
                       param_4);
  return iVar1 != 0;
}

// 00970040  FUN_00970040  size=53  [between]
undefined4 __thiscall FUN_00970040(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (1 < *(int *)(param_1 + 0x44)) {
    return 0;
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x44) * 0x10 + *(int *)(param_1 + 0x40));
  *puVar1 = param_2;
  puVar1[1] = *param_3;
  puVar1[2] = param_3[1];
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  return 1;
}

// 00970120  FUN_00970120  size=432  [between]
undefined4 __thiscall FUN_00970120(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  iVar4 = 0;
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  *param_2 = 0;
  param_2[2] = 0;
  if (0 < param_3) {
    do {
      D3DXVec4Transform(param_1[4] + iVar3,param_1[6] + iVar3,param_4);
      fVar5 = (float10)FUN_00d93b50(param_1[4] + iVar3);
      fVar2 = (float10)0;
      if ((float10)1e-05 < ABS(fVar5)) {
        if (fVar5 <= fVar2) {
          local_4 = local_4 + 1;
        }
        else {
          local_8 = local_8 + 1;
        }
        local_c = local_c + 1;
      }
      *(float *)(*param_1 + iVar4 * 4) = (float)fVar5;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 < param_3);
    if (0 < local_c) {
      if (local_4 < 1) {
        return 0;
      }
      if (local_8 < 1) {
        return 1;
      }
      iVar3 = 0;
      if (3 < param_3) {
        do {
          if ((float10)*(float *)(*param_1 + iVar3 * 4) <= fVar2) {
            *(undefined1 *)(param_1[1] + iVar3) = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *(undefined1 *)(param_1[1] + iVar3) = 0;
            *param_2 = *param_2 + 1;
          }
          puVar1 = (undefined1 *)(param_1[1] + 1 + iVar3);
          if ((float10)*(float *)(*param_1 + 4 + iVar3 * 4) <= fVar2) {
            *puVar1 = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *puVar1 = 0;
            *param_2 = *param_2 + 1;
          }
          puVar1 = (undefined1 *)(param_1[1] + 2 + iVar3);
          if ((float10)*(float *)(*param_1 + 8 + iVar3 * 4) <= fVar2) {
            *puVar1 = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *puVar1 = 0;
            *param_2 = *param_2 + 1;
          }
          puVar1 = (undefined1 *)(param_1[1] + 3 + iVar3);
          if ((float10)*(float *)(*param_1 + 0xc + iVar3 * 4) <= fVar2) {
            *puVar1 = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *puVar1 = 0;
            *param_2 = *param_2 + 1;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < param_3 + -3);
      }
      for (; iVar3 < param_3; iVar3 = iVar3 + 1) {
        if ((float10)*(float *)(*param_1 + iVar3 * 4) <= fVar2) {
          *(undefined1 *)(param_1[1] + iVar3) = 1;
          param_2[2] = param_2[2] + 1;
        }
        else {
          *(undefined1 *)(param_1[1] + iVar3) = 0;
          *param_2 = *param_2 + 1;
        }
      }
      return 2;
    }
  }
  return 3;
}

// 009702E0  FUN_009702e0  size=785  [between]
void __thiscall FUN_009702e0(int param_1,int *param_2,ushort param_3,int param_4,float *param_5)

{
  float *pfVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  ushort local_22 [4];
  undefined2 local_1a;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  ushort *local_8;
  int local_4;
  
  *param_2 = 0;
  local_4 = param_1;
  if (0 < param_4) {
    local_10 = 0;
    local_14 = 4;
    local_18 = param_4;
    do {
      iVar11 = local_14;
      iVar15 = *(int *)(local_4 + 0x14);
      local_8 = (ushort *)(uint)*(ushort *)(local_14 + -4 + iVar15);
      uVar12 = (uint)param_3;
      if (local_8 < uVar12) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = (ushort *)((int)local_8 - uVar12);
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = (ushort *)(uint)*(ushort *)(iVar11 + -2 + iVar15);
      if (local_8 < uVar12) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = (ushort *)((int)local_8 - uVar12);
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_22[0] = (ushort)local_8;
      local_8 = (ushort *)(uint)*(ushort *)(iVar11 + -2 + iVar15);
      if (local_8 < uVar12) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = (ushort *)((int)local_8 - uVar12);
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_22[1] = (short)local_8;
      local_8 = (ushort *)(uint)*(ushort *)(iVar11 + iVar15);
      if (local_8 < uVar12) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = (ushort *)((int)local_8 - uVar12);
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_22[2] = (short)local_8;
      local_8 = (ushort *)(uint)*(ushort *)(iVar11 + iVar15);
      if (local_8 < uVar12) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = (ushort *)((int)local_8 - uVar12);
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      uVar14 = (uint)*(ushort *)(iVar11 + -4 + iVar15);
      local_22[3] = (short)local_8;
      if (uVar14 < uVar12) {
        FUN_00dd5650(&DAT_01651a04);
      }
      iVar15 = uVar14 - uVar12;
      if (0xfffe < iVar15) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_c = local_10;
      local_8 = local_22;
      local_1a = (short)iVar15;
      local_10 = 3;
      do {
        uVar10 = local_8[-1];
        piVar13 = (int *)(*(int *)(local_4 + 8) + local_c);
        cVar9 = *(char *)((uint)uVar10 + *(int *)(local_4 + 4));
        uVar12 = (uint)*local_8;
        if (cVar9 == *(char *)(uVar12 + *(int *)(local_4 + 4))) {
          *(char *)(piVar13 + 1) = (cVar9 != '\0') + '\x01';
        }
        else {
          *(undefined1 *)(piVar13 + 1) = 0;
          *piVar13 = *param_2;
          iVar15 = *(int *)(local_4 + 0x10);
          pfVar1 = (float *)(iVar15 + (uint)uVar10 * 0x10);
          fVar3 = *(float *)(iVar15 + uVar12 * 0x10);
          fVar4 = *pfVar1;
          fVar5 = *(float *)(iVar15 + 4 + uVar12 * 0x10);
          fVar6 = pfVar1[1];
          fVar7 = *(float *)(iVar15 + 8 + uVar12 * 0x10);
          fVar8 = pfVar1[2];
          puVar2 = (ushort *)(*(int *)(local_4 + 0xc) + *param_2 * 8);
          puVar2[1] = *local_8;
          *puVar2 = uVar10;
          fVar3 = (fVar7 - fVar8) * param_5[2] +
                  (fVar5 - fVar6) * param_5[1] + *param_5 * (fVar3 - fVar4);
          fVar4 = ABS(fVar3);
          if (fVar4 < 1e-05 == (fVar4 == 1e-05)) {
            *(float *)(puVar2 + 2) =
                 (param_5[4] -
                 (pfVar1[2] * param_5[2] + *param_5 * *pfVar1 + pfVar1[1] * param_5[1])) / fVar3;
          }
          else {
            puVar2[2] = 0;
            puVar2[3] = 0;
          }
          if (0.0 <= *(float *)(puVar2 + 2)) {
            if (1.0 < *(float *)(puVar2 + 2)) {
              puVar2[2] = 0;
              puVar2[3] = 0x3f80;
            }
          }
          else {
            puVar2[2] = 0;
            puVar2[3] = 0;
          }
          *param_2 = *param_2 + 1;
        }
        local_c = local_c + 8;
        local_8 = local_8 + 2;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + -1;
      local_14 = local_14 + 6;
      local_10 = local_c;
    } while (local_18 != 0);
  }
  return;
}

// 00970600  FUN_00970600  size=100  [between]
void FUN_00970600(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00970120(param_1 + 100,*(undefined4 *)(param_1 + 0x3c),param_2,param_3);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + 0x40) / 3;
    FUN_009702e0(param_1 + 0x5c,*(undefined2 *)(param_1 + 0x44),iVar1,param_3);
    FUN_0096f0f0(param_1 + 0x60,iVar1,param_1 + 100);
  }
  return;
}

// 009707E0  FUN_009707e0  size=468  [between]
void __thiscall FUN_009707e0(int *param_1,float *param_2,undefined4 param_3)

{
  ushort *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int local_2c;
  int local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *param_2 = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  local_2c = 0;
  param_2[2] = 3.4028235e+38;
  param_2[3] = 1.0;
  param_2[4] = -3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  param_2[6] = -3.4028235e+38;
  param_2[7] = 1.0;
  if (0 < (int)param_2[0x17]) {
    local_28 = 0;
    do {
      iVar3 = param_1[2];
      uVar6 = (uint)*(ushort *)(iVar3 + 2 + local_2c * 8);
      fVar2 = *(float *)(iVar3 + 4 + local_2c * 8);
      puVar1 = (ushort *)(iVar3 + local_2c * 8);
      uVar4 = (uint)*puVar1;
      iVar3 = param_1[3];
      pfVar7 = (float *)(*param_1 + local_28);
      pfVar5 = (float *)(iVar3 + 0xc + uVar4 * 0x10);
      *pfVar7 = (*(float *)(iVar3 + uVar6 * 0x10) - *(float *)(iVar3 + uVar4 * 0x10)) * fVar2 +
                *(float *)(iVar3 + uVar4 * 0x10);
      pfVar7[1] = (*(float *)(iVar3 + 4 + uVar6 * 0x10) - *(float *)(iVar3 + 4 + uVar4 * 0x10)) *
                  fVar2 + *(float *)(iVar3 + 4 + uVar4 * 0x10);
      pfVar7[2] = (*(float *)(iVar3 + 8 + uVar6 * 0x10) - *(float *)(iVar3 + 8 + uVar4 * 0x10)) *
                  fVar2 + *(float *)(iVar3 + 8 + uVar4 * 0x10);
      pfVar7[3] = (*(float *)(iVar3 + 0xc + uVar6 * 0x10) - *pfVar5) * fVar2 + *pfVar5;
      fVar2 = *(float *)(puVar1 + 2);
      iVar3 = param_1[4];
      local_20 = (*(float *)(iVar3 + uVar6 * 0x10) - *(float *)(iVar3 + uVar4 * 0x10)) * fVar2 +
                 *(float *)(iVar3 + uVar4 * 0x10);
      local_1c = (*(float *)(iVar3 + 4 + uVar6 * 0x10) - *(float *)(iVar3 + 4 + uVar4 * 0x10)) *
                 fVar2 + *(float *)(iVar3 + 4 + uVar4 * 0x10);
      local_18 = (*(float *)(iVar3 + 8 + uVar6 * 0x10) - *(float *)(iVar3 + 8 + uVar4 * 0x10)) *
                 fVar2 + *(float *)(iVar3 + 8 + uVar4 * 0x10);
      pfVar5 = (float *)(iVar3 + 0xc + uVar4 * 0x10);
      local_14 = (*(float *)(iVar3 + 0xc + uVar6 * 0x10) - *pfVar5) * fVar2 + *pfVar5;
      D3DXVec4Transform(param_1[1] + local_28,&local_20,param_3);
      *(undefined4 *)(local_28 + 4 + param_1[1]) = 0;
      fVar2 = *param_2;
      pfVar5 = (float *)(param_1[1] + local_28);
      if (*pfVar5 < fVar2) {
        fVar2 = *pfVar5;
      }
      *param_2 = fVar2;
      fVar2 = param_2[1];
      if (pfVar5[1] < fVar2) {
        fVar2 = pfVar5[1];
      }
      param_2[1] = fVar2;
      fVar2 = param_2[2];
      if (pfVar5[2] < fVar2) {
        fVar2 = pfVar5[2];
      }
      param_2[2] = fVar2;
      fVar2 = *pfVar5;
      if (fVar2 < param_2[4]) {
        fVar2 = param_2[4];
      }
      param_2[4] = fVar2;
      fVar2 = pfVar5[1];
      if (fVar2 < param_2[5]) {
        fVar2 = param_2[5];
      }
      param_2[5] = fVar2;
      fVar2 = pfVar5[2];
      if (fVar2 < param_2[6]) {
        fVar2 = param_2[6];
      }
      param_2[6] = fVar2;
      local_2c = local_2c + 1;
      local_28 = local_28 + 0x10;
    } while (local_2c < (int)param_2[0x17]);
  }
  return;
}

// 009709C0  FUN_009709c0  size=211  [between]
void __thiscall FUN_009709c0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_10 [12];
  int local_4;
  
  iVar3 = (*(int *)(param_1 + 4) - *param_3) / 3;
  if (0x5555 < iVar3) {
    iVar3 = 0x5555;
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0 < iVar3) {
    local_1c = 0;
    do {
      FUN_0096f490(&local_18,*param_3 + local_1c);
      iVar2 = local_4;
      if (0xfffe < *(int *)(param_1 + 0x10) + local_4) break;
      FID_conflict__memcpy
                ((void *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 4),local_10,local_4 * 4
                );
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) * 2);
      *puVar1 = local_18;
      *(undefined2 *)(puVar1 + 1) = local_14;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 3;
      local_1c = local_1c + 3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x14);
  *param_3 = *param_3 + *(int *)(param_1 + 0x14);
  return;
}

// 00970AA0  FUN_00970aa0  size=316  [between]
void __thiscall FUN_00970aa0(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  
  param_2[4] = 3.4028235e+38;
  param_2[5] = 3.4028235e+38;
  iVar5 = 0;
  param_2[6] = 3.4028235e+38;
  param_2[7] = 1.0;
  *param_2 = -3.4028235e+38;
  param_2[1] = -3.4028235e+38;
  param_2[2] = -3.4028235e+38;
  param_2[3] = 1.0;
  if (0 < (int)param_2[0xe]) {
    do {
      uVar2 = *(uint *)(param_1[2] + iVar5 * 4);
      if ((int)uVar2 < 0) {
        iVar3 = param_1[1];
      }
      else {
        iVar3 = *param_1;
      }
      pfVar4 = (float *)((uVar2 & 0xffff) * 0x10 + iVar3);
      fVar1 = param_2[4];
      if (*pfVar4 < fVar1) {
        fVar1 = *pfVar4;
      }
      param_2[4] = fVar1;
      fVar1 = param_2[5];
      if (pfVar4[1] < fVar1) {
        fVar1 = pfVar4[1];
      }
      param_2[5] = fVar1;
      fVar1 = param_2[6];
      if (pfVar4[2] < fVar1) {
        fVar1 = pfVar4[2];
      }
      param_2[6] = fVar1;
      fVar1 = *pfVar4;
      if (fVar1 < *param_2) {
        fVar1 = *param_2;
      }
      *param_2 = fVar1;
      fVar1 = pfVar4[1];
      if (fVar1 < param_2[1]) {
        fVar1 = param_2[1];
      }
      param_2[1] = fVar1;
      fVar1 = pfVar4[2];
      if (fVar1 < param_2[2]) {
        fVar1 = param_2[2];
      }
      iVar5 = iVar5 + 1;
      param_2[2] = fVar1;
    } while (iVar5 < (int)param_2[0xe]);
  }
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_2[1] + param_3[1];
  param_2[2] = param_2[2] + param_3[2];
  param_2[3] = param_2[3] + param_3[3];
  param_2[4] = *param_3 + param_2[4];
  param_2[5] = param_2[5] + param_3[1];
  param_2[6] = param_2[6] + param_3[2];
  param_2[7] = param_2[7] + param_3[3];
  FUN_0096f550(param_2);
  return;
}

// 00970BE0  FUN_00970be0  size=146  [between]
void __thiscall FUN_00970be0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_2;
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    iVar7 = 0;
    do {
      uVar1 = *(uint *)(param_1[2] + iVar6 * 4);
      if ((int)uVar1 < 0) {
        iVar2 = param_1[1];
      }
      else {
        iVar2 = *param_1;
      }
      puVar4 = (undefined4 *)((uVar1 & 0xffff) * 0x10 + iVar2);
      puVar5 = (undefined4 *)(param_1[4] + iVar7);
      *puVar5 = *puVar4;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x10;
      puVar5[1] = puVar4[1];
      puVar5[2] = puVar4[2];
      puVar5[3] = puVar4[3];
      puVar5[3] = 0x3f800000;
    } while (iVar6 < *(int *)(param_2 + 0x38));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0x3c)) {
    do {
      param_2 = (uint)(ushort)(*(short *)(param_1[3] + iVar6 * 2) + *(short *)(iVar3 + 0x50));
      FUN_00a1aca0(iVar6 * 2,&param_2,2);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar3 + 0x3c));
  }
  return;
}

// 00970C80  FUN_00970c80  size=286  [between]
void __fastcall FUN_00970c80(undefined4 *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  
  pfVar2 = (float *)*param_1;
  *pfVar2 = 3.4028235e+38;
  iVar3 = param_1[2];
  pfVar2[1] = 3.4028235e+38;
  pfVar2[2] = 3.4028235e+38;
  piVar7 = (int *)param_1[1];
  pfVar2[3] = 1.0;
  iVar8 = 0;
  pfVar2[4] = -3.4028235e+38;
  pfVar2[5] = -3.4028235e+38;
  pfVar2[6] = -3.4028235e+38;
  pfVar2[7] = 1.0;
  fVar4 = 0.0;
  pfVar5 = (float *)(piVar7[(int)pfVar2[9] + -1] * 0x10 + iVar3);
  if (0 < (int)pfVar2[9]) {
    do {
      pfVar6 = (float *)(*piVar7 * 0x10 + iVar3);
      fVar4 = (*pfVar5 * *(float *)(*piVar7 * 0x10 + 8 + iVar3) - pfVar5[2] * *pfVar6) + fVar4;
      fVar1 = *pfVar2;
      if (*pfVar6 < fVar1) {
        fVar1 = *pfVar6;
      }
      *pfVar2 = fVar1;
      fVar1 = pfVar2[1];
      if (pfVar6[1] < fVar1) {
        fVar1 = pfVar6[1];
      }
      pfVar2[1] = fVar1;
      fVar1 = pfVar2[2];
      if (pfVar6[2] < fVar1) {
        fVar1 = pfVar6[2];
      }
      pfVar2[2] = fVar1;
      fVar1 = *pfVar6;
      if (fVar1 < pfVar2[4]) {
        fVar1 = pfVar2[4];
      }
      pfVar2[4] = fVar1;
      fVar1 = pfVar6[1];
      if (fVar1 < pfVar2[5]) {
        fVar1 = pfVar2[5];
      }
      pfVar2[5] = fVar1;
      fVar1 = pfVar6[2];
      if (fVar1 < pfVar2[6]) {
        fVar1 = pfVar2[6];
      }
      iVar8 = iVar8 + 1;
      pfVar2[6] = fVar1;
      piVar7 = piVar7 + 1;
      pfVar5 = pfVar6;
    } while (iVar8 < (int)pfVar2[9]);
    if (0.0 < fVar4) {
      pfVar2[10] = 1.4013e-45;
      return;
    }
  }
  pfVar2[10] = 0.0;
  return;
}

// 00970E30  FUN_00970e30  size=616  [between]
void __thiscall FUN_00970e30(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  int local_8;
  
  iVar4 = param_2;
  *(undefined4 *)(param_2 + 0x20) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x24) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x28) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x10) = 0xff7fffff;
  *(undefined4 *)(param_2 + 0x14) = 0xff7fffff;
  *(undefined4 *)(param_2 + 0x18) = 0xff7fffff;
  *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  local_8 = *(int *)(param_2 + 100) / 3;
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (0 < local_8) {
    param_2 = 0;
    do {
      puVar5 = (ushort *)(param_1[2] + param_2);
      iVar2 = param_1[1];
      iVar3 = *param_1;
      pfVar7 = (float *)(*(int *)(iVar2 + (uint)puVar5[2] * 4) * 0x10 + iVar3);
      pfVar6 = (float *)(*(int *)(iVar2 + (uint)puVar5[1] * 4) * 0x10 + iVar3);
      pfVar8 = (float *)(*(int *)(iVar2 + (uint)*puVar5 * 4) * 0x10 + iVar3);
      fVar9 = (float10)FUN_00a05d20(pfVar8,pfVar6,pfVar7);
      *(float *)(iVar4 + 0x70) = (float)(fVar9 + (float10)*(float *)(iVar4 + 0x70));
      fVar1 = *(float *)(iVar4 + 0x20);
      if (*pfVar8 < fVar1) {
        fVar1 = *pfVar8;
      }
      *(float *)(iVar4 + 0x20) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x24);
      if (pfVar8[1] < fVar1) {
        fVar1 = pfVar8[1];
      }
      *(float *)(iVar4 + 0x24) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x28);
      if (pfVar8[2] < fVar1) {
        fVar1 = pfVar8[2];
      }
      *(float *)(iVar4 + 0x28) = fVar1;
      fVar1 = *pfVar8;
      if (fVar1 < *(float *)(iVar4 + 0x10)) {
        fVar1 = *(float *)(iVar4 + 0x10);
      }
      *(float *)(iVar4 + 0x10) = fVar1;
      fVar1 = pfVar8[1];
      if (fVar1 < *(float *)(iVar4 + 0x14)) {
        fVar1 = *(float *)(iVar4 + 0x14);
      }
      *(float *)(iVar4 + 0x14) = fVar1;
      fVar1 = pfVar8[2];
      if (fVar1 < *(float *)(iVar4 + 0x18)) {
        fVar1 = *(float *)(iVar4 + 0x18);
      }
      *(float *)(iVar4 + 0x18) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x20);
      if (*pfVar6 < fVar1) {
        fVar1 = *pfVar6;
      }
      *(float *)(iVar4 + 0x20) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x24);
      if (pfVar6[1] < fVar1) {
        fVar1 = pfVar6[1];
      }
      *(float *)(iVar4 + 0x24) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x28);
      if (pfVar6[2] < fVar1) {
        fVar1 = pfVar6[2];
      }
      *(float *)(iVar4 + 0x28) = fVar1;
      fVar1 = *pfVar6;
      if (fVar1 < *(float *)(iVar4 + 0x10)) {
        fVar1 = *(float *)(iVar4 + 0x10);
      }
      *(float *)(iVar4 + 0x10) = fVar1;
      fVar1 = pfVar6[1];
      if (fVar1 < *(float *)(iVar4 + 0x14)) {
        fVar1 = *(float *)(iVar4 + 0x14);
      }
      *(float *)(iVar4 + 0x14) = fVar1;
      fVar1 = pfVar6[2];
      if (fVar1 < *(float *)(iVar4 + 0x18)) {
        fVar1 = *(float *)(iVar4 + 0x18);
      }
      *(float *)(iVar4 + 0x18) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x20);
      if (*pfVar7 < fVar1) {
        fVar1 = *pfVar7;
      }
      *(float *)(iVar4 + 0x20) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x24);
      if (pfVar7[1] < fVar1) {
        fVar1 = pfVar7[1];
      }
      *(float *)(iVar4 + 0x24) = fVar1;
      fVar1 = *(float *)(iVar4 + 0x28);
      if (pfVar7[2] < fVar1) {
        fVar1 = pfVar7[2];
      }
      *(float *)(iVar4 + 0x28) = fVar1;
      fVar1 = *pfVar7;
      if (fVar1 < *(float *)(iVar4 + 0x10)) {
        fVar1 = *(float *)(iVar4 + 0x10);
      }
      *(float *)(iVar4 + 0x10) = fVar1;
      fVar1 = pfVar7[1];
      if (fVar1 < *(float *)(iVar4 + 0x14)) {
        fVar1 = *(float *)(iVar4 + 0x14);
      }
      *(float *)(iVar4 + 0x14) = fVar1;
      fVar1 = pfVar7[2];
      if (fVar1 < *(float *)(iVar4 + 0x18)) {
        fVar1 = *(float *)(iVar4 + 0x18);
      }
      param_2 = param_2 + 6;
      *(float *)(iVar4 + 0x18) = fVar1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 009710A0  FUN_009710a0  size=119  [between]
void __thiscall FUN_009710a0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x5c)) {
    iVar2 = 0;
    do {
      iVar1 = param_1[3];
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)(*(int *)(param_1[1] + iVar4 * 4) * 0x10 + *param_1);
        *(undefined4 *)(iVar2 + iVar1) = *puVar3;
        *(undefined4 *)(iVar2 + 4 + iVar1) = puVar3[1];
        *(undefined4 *)(iVar2 + 8 + iVar1) = puVar3[2];
        *(undefined4 *)(iVar2 + 0xc + iVar1) = puVar3[3];
      }
      iVar1 = param_1[4];
      if (iVar1 != 0) {
        puVar3 = (undefined4 *)(*(int *)(param_1[1] + iVar4 * 4) * 0x10 + *param_1);
        *(undefined4 *)(iVar2 + iVar1) = *puVar3;
        *(undefined4 *)(iVar2 + 4 + iVar1) = puVar3[1];
        *(undefined4 *)(iVar2 + 8 + iVar1) = puVar3[2];
        *(undefined4 *)(iVar2 + 0xc + iVar1) = puVar3[3];
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar4 < *(int *)(param_2 + 0x5c));
  }
  return;
}

// 00971120  FUN_00971120  size=230  [between]
void __thiscall FUN_00971120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_10;
  short local_e;
  short local_c;
  uint local_8;
  uint local_4;
  
  iVar2 = *(int *)(param_2 + 100) / 3;
  local_8 = (uint)(**(int **)(param_1 + 0x14) == 0);
  local_4 = (uint)(**(int **)(param_1 + 0x18) == 0);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      if (local_8 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        local_10 = *(short *)(param_2 + 0xa4);
        local_c = *(short *)(iVar3 + iVar1) + local_10;
        local_e = *(short *)(iVar3 + 2 + iVar1) + local_10;
        local_10 = *(short *)(iVar3 + 4 + iVar1) + local_10;
        FUN_00a1aca0(iVar3,&local_10,6);
      }
      if (local_4 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        local_c = *(short *)(param_2 + 0xa8);
        local_10 = *(short *)(iVar3 + iVar1) + local_c;
        local_e = *(short *)(iVar3 + 2 + iVar1) + local_c;
        local_c = *(short *)(iVar3 + 4 + iVar1) + local_c;
        FUN_00a1aca0(iVar3,&local_10,6);
      }
      iVar3 = iVar3 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00971230  FUN_00971230  size=85  [between]
void __fastcall FUN_00971230(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

// 00971290  FUN_00971290  size=33  [between]
undefined4 __thiscall FUN_00971290(undefined4 param_1,byte param_2)

{
  FUN_00a1ac70();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009712C0  FUN_009712c0  size=158  [between]
bool __thiscall FUN_009712c0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 0x10),param_4);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00dd3580(param_2,param_4);
    *(int *)(param_1 + 0x48) = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 8 >> 0x20) != 0) |
                           (uint)((ulonglong)param_3 * 8),param_4);
      *(int *)(param_1 + 0x4c) = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 8 >> 0x20) != 0) |
                             (uint)((ulonglong)param_3 * 8),param_4);
        *(int *)(param_1 + 0x50) = iVar1;
        return iVar1 != 0;
      }
    }
  }
  return false;
}

// 00971360  FUN_00971360  size=217  [between]
void __thiscall FUN_00971360(int param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_00a1d5c0();
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x3c) * 4;
  iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar3);
  bVar2 = false;
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_01651b20);
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    return;
  }
  if ((((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x4c) == 0)) ||
      (*(int *)(param_1 + 0x50) == 0)) || (*(int *)(param_1 + 0x38) == 0)) {
    FUN_00dd5650(&DAT_01651b20);
  }
  else {
    FUN_00970600(param_1,*(undefined4 *)(param_1 + 0x2c),param_2 + 0xb0);
    bVar2 = true;
  }
  FUN_00dd4940(iVar4);
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}

// 00971440  FUN_00971440  size=67  [between]
void __thiscall FUN_00971440(int param_1,int param_2)

{
  if (0 < *(int *)(param_1 + 0x5c)) {
    FUN_009707e0(param_1,param_2 + 0x40);
  }
  return;
}

// 00971490  FUN_00971490  size=45  [between]
int __fastcall FUN_00971490(int param_1)

{
  FUN_00a1ac50();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00a19be0();
  return param_1;
}

// 009714C0  FUN_009714c0  size=178  [between]
void __thiscall FUN_009714c0(int *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  
  fVar1 = param_2[4];
  pfVar2 = (float *)*param_1;
  if (*pfVar2 < fVar1) {
    fVar1 = *pfVar2;
  }
  param_2[4] = fVar1;
  fVar1 = param_2[5];
  if (pfVar2[1] < fVar1) {
    fVar1 = pfVar2[1];
  }
  param_2[5] = fVar1;
  fVar1 = param_2[6];
  if (pfVar2[2] < fVar1) {
    fVar1 = pfVar2[2];
  }
  param_2[6] = fVar1;
  fVar1 = pfVar2[4];
  if (fVar1 < *param_2) {
    fVar1 = *param_2;
  }
  *param_2 = fVar1;
  fVar1 = pfVar2[5];
  if (fVar1 < param_2[1]) {
    fVar1 = param_2[1];
  }
  param_2[1] = fVar1;
  fVar1 = pfVar2[6];
  if (fVar1 < param_2[2]) {
    fVar1 = param_2[2];
  }
  param_2[0xf] = (float)((int)param_2[0xf] + 1);
  param_2[2] = fVar1;
  param_2[0x14] = (float)((int)param_2[0x14] + param_1[4]);
  param_2[0x15] = (float)((int)param_2[0x15] + param_1[5]);
  param_2[0x12] = *(float *)(*param_1 + 0x24) + param_2[0x12];
  return;
}

// 00971580  cColClsCopyData::setNewData_2  size=111  [class]
void __fastcall cColClsCopyData::setNewData_2(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
      if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
        FUN_0096f620(param_1);
        return;
      }
      FUN_00dd5650(&DAT_01651b50);
      return;
    }
    FUN_00dd5650(&DAT_01651a40);
  }
  return;
}

// 00971680  FUN_00971680  size=330  [callgraph]
void __fastcall FUN_00971680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_10 [12];
  int local_4;
  
  iVar2 = *(int *)(param_1 + 4);
  local_50 = 0;
  local_3c = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    local_48 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x10) + local_48;
      if (*(int *)(param_1 + 4) <= local_50) {
        return;
      }
      iVar3 = *(int *)(iVar5 + 0x30);
      iVar4 = *(int *)(iVar5 + 0x34);
      iVar8 = (iVar2 - local_50) / 3;
      if (0x5555 < iVar8) {
        iVar8 = 0x5555;
      }
      iVar7 = 0;
      local_44 = 0;
      iVar6 = 0;
      if (0 < iVar8) {
        local_4c = local_50;
        iVar6 = 0;
        do {
          FUN_0096f490(&local_18,local_4c);
          iVar1 = local_4 + iVar6;
          if (0xfffe < iVar1) break;
          FID_conflict__memcpy((void *)(iVar3 + iVar6 * 4),local_10,local_4 * 4);
          local_4c = local_4c + 3;
          *(undefined4 *)(iVar4 + iVar7 * 2) = local_18;
          *(undefined2 *)(iVar4 + 4 + iVar7 * 2) = local_14;
          local_44 = local_44 + 1;
          iVar7 = iVar7 + 3;
          iVar6 = iVar1;
        } while (local_44 < iVar8);
      }
      local_50 = local_50 + iVar7;
      local_48 = local_48 + 0x70;
      *(int *)(iVar5 + 0x38) = iVar6;
      *(int *)(iVar5 + 0x3c) = iVar7;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      local_3c = local_3c + 1;
    } while (local_3c < *(int *)(param_1 + 0x18));
  }
  return;
}

// 009717D0  FUN_009717d0  size=236  [callgraph]
undefined4 __thiscall FUN_009717d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x10) + iVar3;
      if (*(int *)(iVar4 + 0x40) < *(int *)(*(int *)(param_1 + 0x10) + 0x38 + iVar3)) {
        FUN_00dd5650(&DAT_01651ad0);
      }
      if (*(int *)(iVar4 + 0x44) < *(int *)(iVar4 + 0x3c)) {
        FUN_00dd5650(&DAT_01651a80);
      }
      local_4 = *(undefined4 *)(iVar4 + 0x48);
      local_c = *(undefined4 *)(iVar4 + 0x38);
      local_10 = param_3;
      local_14 = iVar4 + 0x10;
      local_8 = *(int *)(iVar4 + 0x3c);
      local_18 = iVar4;
      iVar1 = FUN_00976fb0(&local_28,&local_18);
      if (iVar1 == 0) {
        return 0;
      }
      *(int *)(iVar4 + 0x50) = local_20;
      *(int *)(iVar4 + 0x54) = local_20 * 0x10 + local_28;
      iVar1 = FUN_00a19c30(local_24 + local_1c * 2,local_8 * 2,&DAT_01b7c060);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar4 + 0x4c) = 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return 1;
}

// 009718C0  FUN_009718c0  size=41  [callgraph]
void __fastcall FUN_009718c0(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar1 = 0;
    do {
      FUN_00a19ce0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return;
}

// 009718F0  FUN_009718f0  size=68  [callgraph]
int __fastcall FUN_009718f0(int param_1)

{
  FUN_00a1ac50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00a19be0();
  return param_1;
}

// 00971940  FUN_00971940  size=51  [callgraph]
void __thiscall FUN_00971940(undefined4 param_1,undefined4 param_2)

{
  FUN_00970aa0(param_1,param_2);
  return;
}

// 00971A30  FUN_00971a30  size=64  [callgraph]
void __fastcall FUN_00971a30(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00970be0(param_1);
  }
  return;
}

// 00971B80  FUN_00971b80  size=37  [callgraph]
void __fastcall FUN_00971b80(undefined4 param_1)

{
  FUN_00970e30(param_1);
  return;
}

// 00971BB0  FUN_00971bb0  size=85  [callgraph]
void __fastcall FUN_00971bb0(int param_1)

{
  if (0 < *(int *)(param_1 + 100)) {
    FUN_009710a0(param_1);
    FUN_00971120(param_1);
  }
  return;
}

// 00971CB0  FUN_00971cb0  size=209  [callgraph]
void FUN_00971cb0(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_3 = param_3 * 0xc;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  fVar4 = *(float *)(&DAT_01651b88 + param_3) * param_2[0x10];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  *param_1 = *param_1 + param_2[4] * fVar4;
  param_1[1] = fVar1 * fVar4 + param_1[1];
  param_1[2] = fVar2 * fVar4 + param_1[2];
  param_1[3] = fVar3 * fVar4 + param_1[3];
  fVar4 = *(float *)(&DAT_01651b8c + param_3) * param_2[0x11];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  *param_1 = *param_1 + param_2[8] * fVar4;
  param_1[1] = fVar1 * fVar4 + param_1[1];
  param_1[2] = fVar2 * fVar4 + param_1[2];
  param_1[3] = fVar3 * fVar4 + param_1[3];
  fVar4 = *(float *)(&DAT_01651b90 + param_3) * param_2[0x12];
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  *param_1 = *param_1 + param_2[0xc] * fVar4;
  param_1[1] = fVar1 * fVar4 + param_1[1];
  param_1[2] = fVar2 * fVar4 + param_1[2];
  param_1[3] = fVar3 * fVar4 + param_1[3];
  return;
}

// 00971DC0  FUN_00971dc0  size=51  [callgraph]
void __fastcall FUN_00971dc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) != 0)) {
    FUN_00970c80(iVar1,*(int *)(iVar1 + 0x40) + *(int *)(iVar1 + 0x20) * 4,
                 *(undefined4 *)(iVar1 + 0x34));
  }
  return;
}

// 00971E00  FUN_00971e00  size=105  [callgraph]
void __thiscall FUN_00971e00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[8];
  if (iVar1 == 0) {
    if (*param_1 == -1) {
      *(undefined4 *)(param_2 + 0x30) = 1;
      return;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x50);
    if (iVar2 != 0) {
      *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
      *(float *)(param_2 + 0x48) = *(float *)(iVar2 + 0x70) + *(float *)(param_2 + 0x48);
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + *(int *)(iVar2 + 0x5c);
      *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + *(int *)(iVar2 + 100);
      if (1 < *(int *)(param_2 + 0x40)) {
        FUN_00dd5650(&DAT_01651a04);
      }
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(iVar1 + 0x50);
    }
  }
  return;
}

// 00971E70  FUN_00971e70  size=40  [callgraph]
void __fastcall FUN_00971e70(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0x50) != 0)) {
    iVar1 = 2;
    do {
      FUN_00a19ce0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 00971ED0  FUN_00971ed0  size=240  [callgraph]
undefined4 __thiscall FUN_00971ed0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  sVar1 = *(short *)(param_1 + 0x38);
  if (sVar1 == -1) {
    *(int *)(param_1 + 0x34) = param_3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    *(int *)(param_1 + 0x34) = sVar1 * 0x40 + *(int *)(param_3 + 0x50);
    iVar4 = FUN_00a06ec0((undefined4 *)(param_1 + 0x10),(int)sVar1);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 2;
  iVar4 = FUN_00dd3580(0x20,param_4);
  *(int *)(param_1 + 0x40) = iVar4;
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)FUN_00dd3500(0x24,param_4);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)(puVar5 + 5) = 0xfff;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[4] = 0;
      *puVar5 = 0xffffffff;
      puVar5[8] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
    *(undefined4 **)(param_1 + 0x3c) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      uVar2 = *(undefined2 *)(param_1 + 0x38);
      puVar5[4] = (int)*(short *)(*(int *)(param_1 + 0x30) + 0x50);
      *(undefined2 *)(puVar5 + 5) = uVar2;
      puVar5[1] = uVar3;
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return 0;
}

// 00971FC0  FUN_00971fc0  size=51  [callgraph]
void __fastcall FUN_00971fc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(param_1 + 0x3c);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != -1) && (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != 0)) {
    if (*(int *)(iVar2 + 4) == -1) {
      *(int *)(iVar2 + 4) = iVar1;
      return;
    }
    if (*(int *)(iVar2 + 4) != iVar1) {
      *(undefined4 *)(iVar2 + 4) = 2;
    }
  }
  return;
}

// 00972000  FUN_00972000  size=257  [callgraph]
void __thiscall FUN_00972000(int param_1,float *param_2,float *param_3,int param_4,int *param_5)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    iVar3 = *(int *)(param_1 + 0x30);
    iVar5 = 0;
    bVar2 = false;
    if (0 < *(int *)(iVar3 + 0x44)) {
      do {
        pfVar4 = (float *)((*(int *)(iVar3 + 0x40) + iVar5) * 0x80 + param_4);
        if ((pfVar4[0x15] != 0.0) && (pfVar4[0x16] != 0.0)) {
          fVar1 = *param_3;
          if (*pfVar4 < fVar1) {
            fVar1 = *pfVar4;
          }
          *param_3 = fVar1;
          fVar1 = param_3[1];
          if (pfVar4[1] < fVar1) {
            fVar1 = pfVar4[1];
          }
          param_3[1] = fVar1;
          fVar1 = param_3[2];
          if (pfVar4[2] < fVar1) {
            fVar1 = pfVar4[2];
          }
          param_3[2] = fVar1;
          fVar1 = pfVar4[4];
          if (fVar1 < *param_2) {
            fVar1 = *param_2;
          }
          *param_2 = fVar1;
          fVar1 = pfVar4[5];
          if (fVar1 < param_2[1]) {
            fVar1 = param_2[1];
          }
          param_2[1] = fVar1;
          fVar1 = pfVar4[6];
          if (fVar1 < param_2[2]) {
            fVar1 = param_2[2];
          }
          param_2[2] = fVar1;
          bVar2 = true;
        }
        iVar3 = *(int *)(param_1 + 0x30);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0x44));
      if ((bVar2) && (*param_5 == -1)) {
        *param_5 = (int)*(short *)(*(int *)(param_1 + 0x30) + 0x50);
      }
    }
  }
  return;
}

// 00972110  FUN_00972110  size=15  [callgraph]
void __fastcall FUN_00972110(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00971e00();
    return;
  }
  return;
}

// 00972120  FUN_00972120  size=47  [callgraph]
void __thiscall
FUN_00972120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  if ((*(int *)(param_1 + 0x20) == 2) && (**(int **)(param_1 + 0x3c) == 2)) {
    cCutJobList::entryObject(param_3,param_4,*(int **)(param_1 + 0x3c),param_5,param_6);
  }
  return;
}

// 00972150  FUN_00972150  size=361  [callgraph]
undefined4 __thiscall FUN_00972150(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  int local_4;
  
  fVar5 = 3.4028235e+38;
  iVar2 = param_1[2];
  iVar1 = iVar2 + param_2 * 0x1c;
  iVar3 = *param_1;
  pfVar11 = (float *)(*(int *)(iVar1 + 0x10 + param_3 * 4) * 0x10 + iVar3);
  iVar10 = -1;
  iVar9 = param_2 + 1;
  local_4 = -1;
  if (iVar9 < param_1[3]) {
    piVar12 = (int *)(iVar2 + iVar9 * 0x1c);
    do {
      if ((*piVar12 != param_2) && (piVar12[1] != param_2)) {
        iVar4 = piVar12[4];
        if ((piVar12[2] == -1) &&
           (fVar8 = *pfVar11 - *(float *)(iVar3 + iVar4 * 0x10),
           fVar7 = pfVar11[1] - *(float *)(iVar3 + 4 + iVar4 * 0x10),
           fVar6 = pfVar11[2] - *(float *)(iVar3 + 8 + iVar4 * 0x10),
           fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6, fVar6 <= fVar5)) {
          local_4 = 0;
          iVar10 = iVar9;
          fVar5 = fVar6;
        }
        iVar4 = piVar12[5];
        if ((piVar12[3] == -1) &&
           (fVar8 = *pfVar11 - *(float *)(iVar3 + iVar4 * 0x10),
           fVar7 = pfVar11[1] - *(float *)(iVar3 + 4 + iVar4 * 0x10),
           fVar6 = pfVar11[2] - *(float *)(iVar3 + 8 + iVar4 * 0x10),
           fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6, fVar6 <= fVar5)) {
          local_4 = 1;
          iVar10 = iVar9;
          fVar5 = fVar6;
        }
      }
      iVar9 = iVar9 + 1;
      piVar12 = piVar12 + 7;
    } while (iVar9 < param_1[3]);
    if ((iVar10 != -1) && (local_4 != -1)) {
      iVar2 = iVar2 + iVar10 * 0x1c;
      *(int *)(iVar1 + param_3 * 4) = iVar10;
      *(int *)(iVar1 + 8 + param_3 * 4) = local_4;
      *(int *)(iVar2 + 8 + local_4 * 4) = param_3;
      *(int *)(iVar2 + local_4 * 4) = param_2;
      return 1;
    }
  }
  return 0;
}

// 009722C0  FUN_009722c0  size=243  [callgraph]
void __fastcall FUN_009722c0(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar7 = 0;
  if (0 < param_1[1]) {
    iVar6 = 0;
    do {
      iVar5 = *param_1;
      fVar4 = *(float *)(iVar6 + iVar5) - *(float *)(iVar6 + 0x10 + iVar5);
      fVar3 = *(float *)(iVar6 + 4 + iVar5) - *(float *)(iVar6 + 0x14 + iVar5);
      fVar2 = *(float *)(iVar6 + 8 + iVar5) - *(float *)(iVar6 + 0x18 + iVar5);
      fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      if (fVar2 < 9.9999994e-11 == (fVar2 == 9.9999994e-11)) {
        puVar1 = (undefined4 *)(param_1[2] + param_1[3] * 0x1c);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1[4] = iVar7 * 2;
        puVar1[5] = iVar7 * 2 + 1;
        puVar1[6] = 0;
        param_1[3] = param_1[3] + 1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar7 < param_1[1]);
  }
  local_8 = 0;
  if (param_1[3] != 1 && -1 < param_1[3] + -1) {
    local_4 = 8;
    do {
      iVar6 = 0;
      iVar7 = local_4;
      do {
        if ((*(int *)(iVar7 + param_1[2]) == -1) &&
           (iVar5 = FUN_00972150(local_8,iVar6), iVar5 == 0)) {
          param_1[3] = 0;
          return;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 < 2);
      local_8 = local_8 + 1;
      local_4 = local_4 + 0x1c;
      if (param_1[3] + -1 <= local_8) {
        return;
      }
    } while( true );
  }
  return;
}

// 009723C0  FUN_009723c0  size=206  [callgraph]
void __thiscall FUN_009723c0(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *local_4;
  
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 8);
  iVar5 = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  local_4 = (float *)0x0;
  iVar4 = *(int *)(param_1 + 0x10) + param_4 * 0x1c;
  do {
    iVar1 = *(int *)(iVar4 + 0x10 + iVar5 * 4);
    pfVar6 = (float *)(iVar1 * 0x10 + *(int *)(param_1 + 0xc));
    if ((local_4 == (float *)0x0) ||
       (fVar2 = (*local_4 - *pfVar6) * (*local_4 - *pfVar6) +
                (local_4[1] - pfVar6[1]) * (local_4[1] - pfVar6[1]) +
                (local_4[2] - pfVar6[2]) * (local_4[2] - pfVar6[2]), fVar2 < 0.0 == (fVar2 == 0.0)))
    {
      *(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4) = iVar1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      local_4 = pfVar6;
    }
    *(undefined4 *)(iVar4 + 0x18) = 1;
    *param_3 = *param_3 + -1;
    if (*param_3 < 1) break;
    uVar3 = iVar5 - 1U & 1;
    iVar1 = *(int *)(iVar4 + uVar3 * 4);
    iVar5 = *(int *)(iVar4 + 8 + uVar3 * 4);
    iVar4 = *(int *)(param_1 + 0x10) + iVar1 * 0x1c;
  } while (*(int *)(*(int *)(param_1 + 0x10) + 0x18 + iVar1 * 0x1c) == 0);
  *(int *)(param_2 + 0x24) = *(int *)(param_1 + 8) - *(int *)(param_2 + 0x20);
  return;
}

// 009724B0  FUN_009724b0  size=151  [callgraph]
undefined4 __thiscall FUN_009724b0(int *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  fVar1 = -3.4028235e+38;
  iVar4 = 0;
  *param_2 = -1;
  if (0 < (int)param_3[0x17]) {
    iVar5 = 0;
    do {
      if (*(int *)(param_1[1] + 0xc + iVar5) == 0) {
        pfVar3 = (float *)(*(int *)(param_1[5] + *(int *)(param_1[1] + 8 + iVar5) * 4) * 0x10 +
                          *param_1);
        fVar2 = (*param_3 - *pfVar3) * (*param_3 - *pfVar3) +
                (param_3[1] - pfVar3[1]) * (param_3[1] - pfVar3[1]) +
                (param_3[2] - pfVar3[2]) * (param_3[2] - pfVar3[2]);
        if (fVar1 <= fVar2) {
          *param_2 = iVar4;
          fVar1 = fVar2;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < (int)param_3[0x17]);
    if (*param_2 != -1) {
      return 1;
    }
  }
  return 0;
}

// 00972550  FUN_00972550  size=344  [callgraph]
void FUN_00972550(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_4;
  fVar2 = *param_5;
  fVar3 = param_4[1];
  fVar4 = param_5[1];
  fVar5 = param_4[2];
  fVar6 = param_5[2];
  fVar7 = param_3[2];
  fVar8 = *param_3;
  fVar9 = *param_3;
  fVar10 = param_3[1];
  *param_1 = param_3[1] * (fVar5 - fVar6) - param_3[2] * (fVar3 - fVar4);
  param_1[1] = fVar7 * (fVar1 - fVar2) - fVar8 * (fVar5 - fVar6);
  param_1[2] = (fVar3 - fVar4) * fVar9 - fVar10 * (fVar1 - fVar2);
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(param_1,param_1);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
  }
  fVar1 = param_1[2] * param_5[2] + param_5[1] * param_1[1] + *param_1 * *param_5;
  *param_2 = fVar1;
  fVar2 = 1.0 / ((param_6[2] * param_1[2] + *param_1 * *param_6 + param_6[1] * param_1[1]) - fVar1);
  *param_2 = fVar1 * fVar2;
  *param_1 = *param_1 * fVar2;
  param_1[1] = param_1[1] * fVar2;
  param_1[2] = param_1[2] * fVar2;
  param_1[3] = fVar2 * param_1[3];
  return;
}

// 009726B0  FUN_009726b0  size=309  [callgraph]
undefined4 __thiscall FUN_009726b0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_20;
  int local_1c;
  float local_18;
  
  iVar1 = param_1[1];
  iVar5 = param_1[5];
  param_3 = param_3 * 0x10;
  local_1c = *(int *)(iVar5 + *(int *)(param_3 + 8 + iVar1) * 4);
  iVar7 = *(int *)(param_3 + iVar1) * 0x10 + iVar1;
  iVar6 = *(int *)(param_3 + 4 + iVar1) * 0x10;
  iVar4 = *param_1;
  iVar3 = *(int *)(iVar5 + *(int *)(iVar7 + 8) * 4) * 0x10 + iVar4;
  iVar5 = *(int *)(iVar5 + *(int *)(iVar6 + 8 + iVar1) * 4) * 0x10 + iVar4;
  iVar4 = local_1c * 0x10 + iVar4;
  fVar8 = (float10)FUN_00d8d400(iVar3,iVar4,iVar5);
  fVar8 = fVar8 * (float10)0.5;
  fVar2 = (float10)0;
  if (fVar2 < fVar8 == (fVar2 == fVar8)) {
    local_20 = (float)fVar2;
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(iVar7 + 8);
    local_1c = 0xbf800000;
    local_18 = (float)fVar2;
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + iVar1 + 8);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(iVar6 + iVar1 + 8);
    *(int *)(param_2 + 0x28) = iVar3;
    *(int *)(param_2 + 0x2c) = iVar4;
    *(int *)(param_2 + 0x30) = iVar5;
    FUN_00972550(param_2,param_2 + 0x20,&local_20,iVar5,iVar4,iVar3);
    FUN_00972550(param_2 + 0x10,param_2 + 0x24,&local_20,iVar3,iVar5,iVar4);
    return 1;
  }
  if (ABS(fVar8) < (float10)1e-05) {
    return 2;
  }
  return 0;
}

// 009727F0  FUN_009727f0  size=343  [callgraph]
undefined4 __thiscall FUN_009727f0(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  
  iVar1 = param_1[1];
  iVar2 = *(int *)(iVar1 + 4 + *(int *)(iVar1 + 4 + param_3 * 0x10) * 0x10);
joined_r0x00972818:
  do {
    if (iVar2 == *(int *)(iVar1 + param_3 * 0x10)) {
      return 1;
    }
    iVar6 = iVar2 * 0x10 + iVar1;
    iVar7 = 0;
    iVar2 = *(int *)(iVar6 + 4);
    fVar3 = *(float *)(iVar6 + 8);
    pfVar9 = param_2 + 0xd;
    do {
      if (*pfVar9 == fVar3) {
        if (iVar7 < 3) goto joined_r0x00972818;
        break;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar7 < 3);
    pfVar8 = (float *)(*(int *)(param_1[5] + (int)fVar3 * 4) * 0x10 + *param_1);
    iVar6 = 0;
    pfVar9 = param_2 + 10;
    do {
      pfVar4 = (float *)*pfVar9;
      fVar3 = (*pfVar4 - *pfVar8) * (*pfVar4 - *pfVar8) +
              (pfVar4[1] - pfVar8[1]) * (pfVar4[1] - pfVar8[1]) +
              (pfVar4[2] - pfVar8[2]) * (pfVar4[2] - pfVar8[2]);
      if (fVar3 < 9.9999994e-11 != (fVar3 == 9.9999994e-11)) {
        if (iVar6 < 3) goto joined_r0x00972818;
        break;
      }
      iVar6 = iVar6 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar6 < 3);
    fVar3 = (param_2[2] * pfVar8[2] + *param_2 * *pfVar8 + param_2[1] * pfVar8[1]) - param_2[8];
    if ((((-1e-05 <= fVar3) && (fVar3 <= 1.00001)) &&
        (fVar5 = (param_2[6] * pfVar8[2] + *pfVar8 * param_2[4] + param_2[5] * pfVar8[1]) -
                 param_2[9], -1e-05 <= fVar5)) && (-1e-05 <= (1.0 - fVar3) - fVar5)) {
      return 0;
    }
  } while( true );
}

// 009729A0  FUN_009729a0  size=110  [callgraph]
undefined4 FUN_009729a0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x28);
  do {
    iVar4 = iVar4 + 1;
    pfVar1 = (float *)*puVar5;
    pfVar2 = *(float **)(param_1 + 0x28 + (iVar4 % 3) * 4);
    fVar3 = (*pfVar2 - *pfVar1) * (*pfVar2 - *pfVar1) +
            (pfVar2[1] - pfVar1[1]) * (pfVar2[1] - pfVar1[1]) +
            (pfVar2[2] - pfVar1[2]) * (pfVar2[2] - pfVar1[2]);
    if (fVar3 < 9.9999994e-11 != (fVar3 == 9.9999994e-11)) {
      return 0;
    }
    puVar5 = puVar5 + 1;
  } while (iVar4 < 3);
  return 1;
}

// 00972A10  FUN_00972a10  size=472  [callgraph]
void __thiscall FUN_00972a10(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [52];
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  
  *(undefined4 *)(param_3 + 100) = 0;
  local_5c = 0;
  local_60 = 0;
  local_54 = 0;
  iVar2 = FUN_009724b0(&local_64,param_3);
  if (iVar2 != 0) {
    iVar2 = *param_2;
    local_58 = local_64;
    iVar3 = local_64;
    while (0 < iVar2) {
      iVar2 = FUN_009726b0(local_50,iVar3);
      if (iVar2 == 0) {
        local_5c = 0;
      }
      else if (iVar2 == 1) {
        local_5c = FUN_009727f0(local_50,iVar3);
      }
      else if (iVar2 == 2) {
        local_5c = -(uint)(local_54 != 0) & 2;
      }
      iVar2 = *(int *)(param_1 + 4);
      if (local_5c == 0) {
        iVar3 = *(int *)(iVar2 + 4 + iVar3 * 0x10);
        local_64 = iVar3;
        if (local_58 == iVar3) {
          if (local_60 == 1) {
            local_54 = 1;
            if (1 < *param_2) {
              local_54 = 1;
            }
          }
          else if (local_60 == 2) {
            return;
          }
          local_60 = local_60 + 1;
        }
      }
      else if (local_5c == 1) {
        iVar2 = FUN_009729a0(local_50);
        if (iVar2 != 0) {
          *(undefined2 *)(*(int *)(param_1 + 0x18) + *(int *)(param_3 + 100) * 2) = local_1c;
          *(undefined2 *)(*(int *)(param_1 + 0x18) + 2 + *(int *)(param_3 + 100) * 2) = local_18;
          *(undefined2 *)(*(int *)(param_1 + 0x18) + 4 + *(int *)(param_3 + 100) * 2) = local_14;
          *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 3;
        }
        iVar2 = *(int *)(param_1 + 4);
        iVar1 = *(int *)(iVar2 + 4 + iVar3 * 0x10);
        *(int *)(iVar2 + 4 + *(int *)(iVar2 + iVar3 * 0x10) * 0x10) = iVar1;
        *(undefined4 *)(iVar2 + iVar1 * 0x10) = *(undefined4 *)(iVar2 + iVar3 * 0x10);
        *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x10) = 1;
        *param_2 = *param_2 + -1;
        iVar2 = FUN_009724b0(&local_64,param_3);
        if (iVar2 == 0) {
          return;
        }
        local_60 = 0;
        local_58 = local_64;
        iVar3 = local_64;
      }
      else if (local_5c == 2) {
        iVar1 = *(int *)(iVar2 + 4 + iVar3 * 0x10);
        *(int *)(iVar2 + 4 + *(int *)(iVar2 + iVar3 * 0x10) * 0x10) = iVar1;
        *(undefined4 *)(iVar2 + iVar1 * 0x10) = *(undefined4 *)(iVar2 + iVar3 * 0x10);
        *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x10) = 1;
        *param_2 = *param_2 + -1;
        iVar2 = FUN_009724b0(&local_64,param_3);
        if (iVar2 == 0) {
          return;
        }
        local_60 = 0;
        local_58 = local_64;
        iVar3 = local_64;
      }
      iVar2 = *param_2;
    }
  }
  return;
}

// 00972BF0  FUN_00972bf0  size=95  [callgraph]
void __thiscall FUN_00972bf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc);
    if (0 < iVar2) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 8) + -4 + (iVar2 - iVar1) * 4);
        iVar2 = *(int *)(param_1 + 0xc);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  FUN_0096f6f0(param_2);
  FUN_00972a10(param_2 + 0x6c,param_2);
  return;
}

// 00972C50  FUN_00972c50  size=172  [callgraph]
void __fastcall FUN_00972c50(int *param_1)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00a0e000(&local_60,param_1[1],param_1[2]);
  *(undefined4 *)*param_1 = local_60;
  *(undefined4 *)(*param_1 + 4) = local_5c;
  *(undefined4 *)(*param_1 + 8) = local_58;
  *(undefined4 *)(*param_1 + 0x30) = local_20;
  *(undefined4 *)(*param_1 + 0x34) = local_1c;
  *(undefined4 *)(*param_1 + 0x38) = local_18;
  *(undefined4 *)(*param_1 + 0xc) = local_50;
  *(undefined4 *)(*param_1 + 0x10) = local_4c;
  *(undefined4 *)(*param_1 + 0x14) = local_48;
  *(undefined4 *)(*param_1 + 0x18) = local_40;
  *(undefined4 *)(*param_1 + 0x1c) = local_3c;
  *(undefined4 *)(*param_1 + 0x20) = local_38;
  *(undefined4 *)(*param_1 + 0x24) = local_30;
  *(undefined4 *)(*param_1 + 0x28) = local_2c;
  *(undefined4 *)(*param_1 + 0x2c) = local_28;
  return;
}

// 00972D00  FUN_00972d00  size=29  [callgraph]
void __fastcall FUN_00972d00(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00971680();
    FUN_00971680();
    return;
  }
  return;
}

// 00972D20  FUN_00972d20  size=121  [callgraph]
undefined4 __thiscall FUN_00972d20(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar2 = FUN_009717d0(param_2,param_4);
      return uVar2;
    }
  }
  else if (param_3 == 1) {
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar2 = FUN_009717d0(param_2,param_4);
      return uVar2;
    }
  }
  else if ((param_3 == 2) && (*(int *)(param_1 + 0x74) != 0)) {
    iVar1 = cColClsCopyData::setNewData(param_2,param_4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x20) = 2;
      return 1;
    }
  }
  return 0;
}

// 00972DA0  FUN_00972da0  size=98  [callgraph]
void __fastcall FUN_00972da0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x14)) {
      do {
        FUN_00a19ce0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x14));
    }
    iVar1 = *(int *)(param_1 + 0x78);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x34)) {
      do {
        FUN_00a19ce0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x34));
    }
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  FUN_00a19ce0();
  return;
}

// 00972E10  FUN_00972e10  size=248  [callgraph]
void __fastcall FUN_00972e10(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
  }
  if (param_1[4] != 0) {
    local_4 = 0;
    if (0 < param_1[6]) {
      local_8 = 0;
      do {
        iVar2 = param_1[4] + local_8;
        if (*(int *)(iVar2 + 0x30) != 0) {
          FUN_00dd4940(*(int *)(iVar2 + 0x30));
        }
        if (*(int *)(iVar2 + 0x34) != 0) {
          FUN_00dd4940(*(int *)(iVar2 + 0x34));
        }
        FUN_00a19c00();
        *(undefined4 *)(iVar2 + 0x48) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        *(undefined4 *)(iVar2 + 0x24) = 0;
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(undefined4 *)(iVar2 + 0x30) = 0;
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(undefined4 *)(iVar2 + 0x34) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
        *(undefined4 *)(iVar2 + 0x40) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        *(undefined4 *)(iVar2 + 0x50) = 0;
        *(undefined4 *)(iVar2 + 0x54) = 0;
        FUN_00a19be0();
        local_8 = local_8 + 0x70;
        local_4 = local_4 + 1;
      } while (local_4 < param_1[6]);
    }
    iVar2 = param_1[4];
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + -0x10);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_00a1ac70();
      }
      FUN_00dd4940(iVar2 + -0x10);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00972F10  FUN_00972f10  size=384  [callgraph]
undefined4 __thiscall FUN_00972f10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  uVar5 = (*(int *)(param_1 + 4) / 0xffff + 1) * (param_3 / 0xffff + 1);
  *(uint *)(param_1 + 0x18) = uVar5;
  if (0 < (int)uVar5) {
    uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x70 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x70);
    puVar1 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar4) | uVar4 + 0x10,param_4);
    if (puVar1 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar5;
      local_8 = uVar5 - 1;
      puVar2 = puVar1 + 4;
      if (-1 < local_8) {
        puVar1 = puVar1 + 0xd;
        do {
          FUN_00a1ac50();
          puVar1[9] = 0;
          puVar1[-1] = 0;
          *puVar1 = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[5] = 0;
          puVar1[4] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          FUN_00a19be0();
          puVar1 = puVar1 + 0x1c;
          local_8 = local_8 + -1;
        } while (-1 < local_8);
      }
    }
    *(uint **)(param_1 + 0x10) = puVar2;
    if (puVar2 != (uint *)0x0) {
      if (0xffff < param_3) {
        param_3 = 0xffff;
      }
      iVar3 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 8) = param_3;
      if (0xffff < iVar3) {
        iVar3 = 0xffff;
      }
      *(int *)(param_1 + 0xc) = iVar3;
      local_8 = 0;
      if (0 < *(int *)(param_1 + 0x18)) {
        param_3 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x10) + param_3;
          iVar3 = FUN_0096faf0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_4);
          if (iVar3 == 0) {
            return 0;
          }
          param_3 = param_3 + 0x70;
          *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(param_2 + 0x30);
          *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(param_2 + 0x3c);
          *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_2 + 0x54);
          local_8 = local_8 + 1;
          *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(param_2 + 0x5c);
        } while (local_8 < *(int *)(param_1 + 0x18));
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      return 1;
    }
  }
  return 0;
}

// 00973090  FUN_00973090  size=89  [callgraph]
void __thiscall FUN_00973090(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar1 = 0;
    do {
      FUN_00970aa0(*(int *)(param_1 + 0x10) + iVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x70;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return;
}

// 00973100  FUN_00973100  size=213  [callgraph]
void __thiscall FUN_00973100(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar3 = 0;
    do {
      fVar1 = param_2[4];
      fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x10 + iVar3);
      pfVar4 = (float *)(*(int *)(param_1 + 0x10) + iVar3);
      if (fVar2 < fVar1) {
        fVar1 = fVar2;
      }
      param_2[4] = fVar1;
      fVar1 = param_2[5];
      if (pfVar4[5] < fVar1) {
        fVar1 = pfVar4[5];
      }
      param_2[5] = fVar1;
      fVar1 = param_2[6];
      if (pfVar4[6] < fVar1) {
        fVar1 = pfVar4[6];
      }
      param_2[6] = fVar1;
      fVar1 = *pfVar4;
      if (fVar1 < *param_2) {
        fVar1 = *param_2;
      }
      *param_2 = fVar1;
      fVar1 = pfVar4[1];
      if (fVar1 < param_2[1]) {
        fVar1 = param_2[1];
      }
      param_2[1] = fVar1;
      fVar1 = pfVar4[2];
      if (fVar1 < param_2[2]) {
        fVar1 = param_2[2];
      }
      param_2[2] = fVar1;
      param_2[0x14] = (float)((int)param_2[0x14] + (int)pfVar4[0xe]);
      param_2[0x15] = (float)((int)param_2[0x15] + (int)pfVar4[0xf]);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x70;
      param_2[0x12] = pfVar4[0x12] + param_2[0x12];
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  param_2[0xf] = (float)((int)param_2[0xf] + *(int *)(param_1 + 0x14));
  return;
}

// 009731E0  FUN_009731e0  size=96  [callgraph]
void __fastcall FUN_009731e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x10) + iVar3;
      if (*(int *)(iVar1 + 0x4c) != 0) {
        FUN_00970be0(iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return;
}

// 009732B0  FUN_009732b0  size=56  [callgraph]
void __fastcall FUN_009732b0(int param_1)

{
  FUN_009722c0();
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 009732F0  FUN_009732f0  size=122  [callgraph]
undefined4 __fastcall FUN_009732f0(int param_1)

{
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x4c) < 1) && (*(int *)(param_1 + 0x48) != 0)) {
    FUN_00dd4940(*(int *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  local_8 = *(int *)(param_1 + 0x48);
  if (local_8 == 0) {
    return 0;
  }
  local_14 = *(undefined4 *)(param_1 + 0x40);
  local_c = *(undefined4 *)(param_1 + 0x30);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_10 = 0;
  local_18 = param_1;
  local_4 = local_1c;
  FUN_009723c0(param_1,&local_1c,0);
  *(undefined4 *)(param_1 + 0x44) = local_10;
  return 1;
}

// 00973370  FUN_00973370  size=307  [callgraph]
undefined4 __thiscall
FUN_00973370(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5
            )

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x24) < 3) {
    return 0;
  }
  iVar2 = FUN_00dd3500(0xb0,param_5);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar3 = 1;
    do {
      FUN_00a1ac50();
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    FUN_0096fc80();
  }
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_0096fdb0(*(undefined4 *)(param_1 + 0x24),param_5);
    if (iVar2 != 0) {
      *(int *)(*(int *)(param_1 + 0x50) + 0x3c) = param_1;
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x30) = param_2;
      *(undefined2 *)(*(int *)(param_1 + 0x50) + 0x34) = param_3;
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x38) = param_4;
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x4c) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x50) = *(undefined4 *)(param_1 + 0x34);
      *(int *)(*(int *)(param_1 + 0x50) + 0x54) = *(int *)(param_1 + 0x3c) * 2;
      *(int *)(*(int *)(param_1 + 0x50) + 0x40) =
           *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x20) * 4;
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x44) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x48) = *(undefined4 *)(param_1 + 0x24);
      pfVar1 = *(float **)(param_1 + 0x50);
      *pfVar1 = *(float *)(param_1 + 0x10) * 2.0;
      pfVar1[1] = *(float *)(param_1 + 0x14) * 2.0;
      pfVar1[2] = *(float *)(param_1 + 0x18) * 2.0;
      pfVar1[3] = *(float *)(param_1 + 0x1c) * 2.0;
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 != 0) {
      iVar3 = 1;
      do {
        FUN_00a1ac70();
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      FUN_00dd4920(iVar2);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return 0;
}

// 009734F0  FUN_009734f0  size=118  [callgraph]
void __fastcall FUN_009734f0(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00a1d5c0();
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x5c) * 0x10;
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  if (iVar3 != 0) {
    FUN_00972bf0(param_1);
    FUN_00dd4940(iVar3);
  }
  return;
}

// 00973570  FUN_00973570  size=428  [callgraph]
void __thiscall FUN_00973570(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int *piStack_60;
  float fStack_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar2 = (undefined4 *)*param_1;
  local_50 = puVar2[3];
  local_4c = puVar2[4];
  local_48 = puVar2[5];
  local_44 = 0;
  local_40 = puVar2[6];
  local_3c = puVar2[7];
  local_38 = puVar2[8];
  local_34 = 0;
  local_30 = puVar2[9];
  local_2c = puVar2[10];
  local_28 = puVar2[0xb];
  local_24 = 0;
  local_20 = *puVar2;
  local_1c = puVar2[1];
  local_18 = puVar2[2];
  local_14 = 0x3f800000;
  local_54 = param_1;
  D3DXMatrixMultiply(&local_50,&local_50,param_3 + 0x10);
  *param_2 = local_2c;
  pfVar4 = &fStack_58;
  iVar5 = 0x30;
  param_2[1] = local_28;
  pfVar6 = (float *)(param_2 + 6);
  param_2[2] = local_24;
  param_2[3] = 0x3f800000;
  do {
    pfVar1 = pfVar6 + -2;
    *pfVar1 = pfVar4[-1];
    pfVar6[-1] = *pfVar4;
    *pfVar6 = pfVar4[1];
    pfVar6[1] = 1.0;
    *(float *)(iVar5 + 0x10 + (int)param_2) =
         SQRT(*pfVar6 * *pfVar6 + *pfVar1 * *pfVar1 + pfVar6[-1] * pfVar6[-1]) *
         *(float *)(iVar5 + *piStack_60);
    fVar3 = *pfVar6 * *pfVar6 + *pfVar1 * *pfVar1 + pfVar6[-1] * pfVar6[-1];
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      pfVar6[-1] = 1.0;
      *pfVar6 = 0.0;
    }
    pfVar4 = pfVar4 + 4;
    iVar5 = iVar5 + 4;
    pfVar6 = pfVar6 + 4;
  } while (iVar5 < 0x3c);
  return;
}

// 00973720  FUN_00973720  size=835  [callgraph]
undefined4 FUN_00973720(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = *param_4 - *param_3;
  local_2c = param_4[1] - param_3[1];
  local_28 = param_4[2] - param_3[2];
  local_24 = param_4[3] - param_3[3];
  local_20 = *param_5 - *param_3;
  local_1c = param_5[1] - param_3[1];
  local_18 = param_5[2] - param_3[2];
  local_14 = param_5[3] - param_3[3];
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  fVar3 = SQRT(fVar1);
  fVar2 = SQRT(local_18 * local_18 + local_1c * local_1c + local_20 * local_20);
  if ((0.0 < fVar3) && (0.0 < fVar2)) {
    if (fVar1 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    else {
      FUN_00ddf460(&local_30,&local_30);
    }
    fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    fVar5 = local_1c * local_28 - local_18 * local_2c;
    fVar1 = local_18 * local_30 - local_20 * local_28;
    fVar6 = local_20 * local_2c - local_1c * local_30;
    fVar4 = (fVar6 * param_2[2] + fVar1 * param_2[1] + *param_2 * fVar5) -
            (param_3[2] * fVar6 + *param_3 * fVar5 + param_3[1] * fVar1);
    fVar5 = (*param_2 - fVar5 * fVar4) - *param_3;
    fVar1 = (param_2[1] - fVar1 * fVar4) - param_3[1];
    fVar6 = (param_2[2] - fVar4 * fVar6) - param_3[2];
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    fVar4 = fVar6 * local_28 + fVar5 * local_30 + fVar1 * local_2c;
    if (0.0 < fVar4) {
      if (fVar3 < fVar4 != (fVar3 == fVar4)) {
        fVar4 = fVar3;
      }
    }
    else {
      fVar4 = 0.0;
    }
    *param_1 = *param_1 + local_30 * fVar4;
    param_1[1] = param_1[1] + local_2c * fVar4;
    param_1[2] = local_28 * fVar4 + param_1[2];
    param_1[3] = fVar4 * local_24 + param_1[3];
    fVar1 = local_1c * fVar1 + local_20 * fVar5 + local_18 * fVar6;
    fVar3 = 0.0;
    if ((fVar1 < 0.0 == (fVar1 == 0.0)) && (fVar3 = fVar1, fVar2 < fVar1 != (fVar2 == fVar1))) {
      fVar3 = fVar2;
    }
    *param_1 = *param_1 + local_20 * fVar3;
    param_1[1] = param_1[1] + local_1c * fVar3;
    param_1[2] = local_18 * fVar3 + param_1[2];
    param_1[3] = local_14 * fVar3 + param_1[3];
    param_1[3] = 1.0;
    return 1;
  }
  return 0;
}

// 00973A70  FUN_00973a70  size=215  [callgraph]
undefined4 FUN_00973a70(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [140];
  
  iVar1 = 0;
  puVar3 = local_90;
  do {
    FUN_00971cb0(puVar3,param_1,iVar1);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 0x10;
  } while (iVar1 < 8);
  piVar2 = &DAT_01887c14;
  do {
    iVar1 = FUN_00973720(local_a0,param_2 + 0x80,local_90 + piVar2[-1] * 0x10,
                         local_90 + *piVar2 * 0x10,local_90 + piVar2[1] * 0x10,
                         local_90 + piVar2[2] * 0x10);
    if (iVar1 != 0) {
      D3DXVec4Transform(&local_b0,local_a0,param_2 + 0x40);
      if (fStack_a8 * fStack_a8 + local_b0 * local_b0 + fStack_ac * fStack_ac <=
          *(float *)(param_2 + 0xd0) * *(float *)(param_2 + 0xd0)) {
        return 1;
      }
    }
    piVar2 = piVar2 + 4;
  } while ((int)piVar2 < 0x1887c74);
  return 0;
}

// 00973B50  FUN_00973b50  size=169  [callgraph]
void FUN_00973b50(uint *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_64;
  undefined1 local_60 [92];
  
  *param_2 = 0;
  FUN_00973570(local_60,param_4);
  iVar1 = FUN_00d91dc0(&local_64,param_3 + 0xb0,local_60);
  if (iVar1 != 0) {
    *param_2 = 1;
    iVar1 = FUN_00d91d90(param_3 + 0x80,*(undefined4 *)(param_3 + 0xd0),local_60);
    if (iVar1 != 0) {
      iVar1 = FUN_00973a70(local_60,param_3);
      if (iVar1 != 0) {
        *param_1 = 2;
        return;
      }
    }
  }
  *param_1 = (uint)(local_64 != 0);
  return;
}

// 00973C00  FUN_00973c00  size=143  [callgraph]
undefined4 FUN_00973c00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_64;
  undefined1 local_60 [92];
  
  local_64 = 0;
  FUN_00973570(local_60,param_2);
  iVar1 = FUN_00d91dc0(&local_64,param_1 + 0xb0,local_60);
  if (iVar1 != 0) {
    iVar1 = FUN_00d91d90(param_1 + 0x80,*(undefined4 *)(param_1 + 0xd0),local_60);
    if (iVar1 != 0) {
      iVar1 = FUN_00973a70(local_60,param_1);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00973C90  FUN_00973c90  size=345  [callgraph]
undefined4 __thiscall FUN_00973c90(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  void *_Dst;
  int iVar4;
  
  iVar4 = 0;
  *param_1 = 3;
  if (0 < param_3) {
    piVar3 = (int *)(param_2 + 0x20);
    do {
      iVar1 = *piVar3;
      if (iVar1 == -1) goto LAB_00973dda;
      if (iVar1 != 3) {
        if (*param_1 == 3) {
          *param_1 = iVar1;
        }
        else if (*param_1 != iVar1) {
          *param_1 = 2;
        }
        param_1[6] = param_1[6] + piVar3[0xf];
        param_1[7] = param_1[7] + piVar3[0x10];
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x20;
    } while (iVar4 < param_3);
    if (*param_1 == 2) {
      if (0 < param_1[6]) {
        lVar2 = (ulonglong)(uint)param_1[6] * 0x10;
        iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_4);
        param_1[2] = iVar4;
        if (iVar4 != 0) {
          iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_1[6] * 0x10 >> 0x20) != 0) |
                               (uint)((ulonglong)(uint)param_1[6] * 0x10),param_4);
          param_1[3] = iVar4;
          if (iVar4 != 0) {
            piVar3 = (int *)(param_2 + 0x5c);
            iVar4 = 0;
            do {
              if (0 < *piVar3) {
                piVar3[-2] = param_1[2] + iVar4 * 0x10;
                piVar3[-1] = param_1[3] + iVar4 * 0x10;
                iVar4 = iVar4 + *piVar3;
              }
              piVar3 = piVar3 + 0x20;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
            _Dst = (void *)FUN_00dd3500(0x60,param_4);
            if (_Dst == (void *)0x0) {
              _Dst = (void *)0x0;
            }
            else {
              *(undefined4 *)((int)_Dst + 0x30) = 0;
              *(undefined4 *)((int)_Dst + 0x34) = 0;
              *(undefined4 *)((int)_Dst + 0x38) = 0;
              *(undefined4 *)((int)_Dst + 0x3c) = 0;
              *(undefined4 *)((int)_Dst + 0x40) = 0;
              *(undefined4 *)((int)_Dst + 0x44) = 0;
              *(undefined4 *)((int)_Dst + 0x48) = 0;
              *(undefined4 *)((int)_Dst + 0x4c) = 0;
              *(undefined4 *)((int)_Dst + 0x50) = 0;
              _memset(_Dst,0,0x30);
            }
            param_1[8] = (int)_Dst;
            if (_Dst != (void *)0x0) {
              return 1;
            }
          }
        }
LAB_00973dda:
        *param_1 = -1;
        return 0;
      }
    }
    else if (0 < param_3) {
      piVar3 = (int *)(param_2 + 0x20);
      do {
        *piVar3 = *param_1;
        piVar3 = piVar3 + 0x20;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return 1;
}

// 00973DF0  FUN_00973df0  size=51  [callgraph]
void __fastcall FUN_00973df0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x50), iVar1 != 0)) {
    FUN_00970e30(iVar1);
  }
  return;
}

// 00973E30  FUN_00973e30  size=22  [callgraph]
void __fastcall FUN_00973e30(int param_1)

{
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0x50) != 0)) {
    FUN_00971bb0();
    return;
  }
  return;
}

// 00973EE0  FUN_00973ee0  size=78  [callgraph]
undefined4 __thiscall FUN_00973ee0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 2) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x3c) != 0) &&
     (iVar1 = FUN_00973c90(*(int *)(*(int *)(param_1 + 0x30) + 0x40) * 0x80 + param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x44),param_3), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(param_1 + 0x3c);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return 0;
}

// 00973F30  FUN_00973f30  size=185  [callgraph]
void __fastcall FUN_00973f30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    local_64 = 0;
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x40) + local_64);
      puVar1 = (undefined4 *)*piVar2;
      FUN_00a0e000(&local_60,piVar2[1],piVar2[2]);
      *puVar1 = local_60;
      local_64 = local_64 + 0x10;
      iVar3 = iVar3 + 1;
      puVar1[1] = local_5c;
      puVar1[2] = local_58;
      puVar1[0xc] = local_20;
      puVar1[0xd] = local_1c;
      puVar1[0xe] = local_18;
      puVar1[3] = local_50;
      puVar1[4] = local_4c;
      puVar1[5] = local_48;
      puVar1[6] = local_40;
      puVar1[7] = local_3c;
      puVar1[8] = local_38;
      puVar1[9] = local_30;
      puVar1[10] = local_2c;
      puVar1[0xb] = local_28;
    } while (iVar3 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00973FF0  FUN_00973ff0  size=252  [callgraph]
void __fastcall FUN_00973ff0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x50));
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 != 0) {
    FUN_00a19c00();
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_00a19be0();
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 != 0) {
      FUN_00a1ac70();
      FUN_00dd4920(iVar1);
    }
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00972e10();
    FUN_00972e10();
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}

// 009740F0  FUN_009740f0  size=233  [callgraph]
undefined4 __thiscall
FUN_009740f0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  
  FUN_00973ff0();
  param_3 = *(int *)(param_2 + 0x20) * 0x50 + param_3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(int *)(param_1 + 0x24) = param_2;
  piVar1 = (int *)(param_4 + *(int *)(param_2 + 0x20) * 0x14);
  *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x28) * 0x10 + *piVar1;
  *(int *)(param_1 + 0x34) = piVar1[2] + *(int *)(param_2 + 0x30) * 2;
  *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x34);
  *(int *)(param_1 + 0x28) = param_3 + 0x10;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x34);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    puVar4 = *(ushort **)(param_1 + 0x34);
    do {
      iVar3 = (uint)*puVar4 - (uint)*(ushort *)(param_1 + 0x44);
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x3c) <= iVar3)) {
        FUN_00dd5650(&DAT_01651bec);
        FUN_00973ff0();
        return 0;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x20) == 2) {
    iVar2 = FUN_009712c0(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x34),param_5);
    if (iVar2 == 0) {
      FUN_00973ff0();
      return 0;
    }
  }
  return 1;
}

// 009741E0  FUN_009741e0  size=315  [callgraph]
void __thiscall FUN_009741e0(int param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *local_4;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    puVar3 = (undefined4 *)FUN_00dd3580();
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
    }
    *(undefined4 **)(param_1 + 0x78) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      local_4 = (uint *)(param_1 + 0x68);
      iVar5 = 0;
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x78);
        if ((int)*local_4 < 1) break;
        lVar2 = (ulonglong)*local_4 * 4;
        iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_2);
        *(int *)(iVar1 + iVar5) = iVar4;
        if (iVar4 == 0) break;
        local_4 = local_4 + 2;
        iVar5 = iVar5 + 0x20;
        if (0x3f < iVar5) {
          FUN_0096f7c0();
          return;
        }
      }
    }
  }
  else {
    iVar5 = FUN_00dd3500(0x40,param_2);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_00a1ac50();
      *(undefined4 *)(iVar5 + 4) = 0;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      FUN_00a19be0();
    }
    *(int *)(param_1 + 0x74) = iVar5;
    if (iVar5 != 0) {
      FUN_0096f8a0(param_1);
      return;
    }
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00972e10();
    FUN_00972e10();
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}

// 00974320  FUN_00974320  size=448  [callgraph]
void __thiscall FUN_00974320(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int *local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x20) == 2) || (*(int *)(param_1 + 0x78) != 0)) {
    if (*(int *)(param_1 + 0x78) != 0) {
      local_c = (int *)(param_1 + 100);
      local_8 = 0;
      while( true ) {
        iVar5 = *local_c + *(int *)(param_1 + 0x5c);
        iVar8 = *(int *)(param_1 + 0x78) + local_8;
        uVar6 = (*(int *)(iVar8 + 4) / 0xffff + 1) * (iVar5 / 0xffff + 1);
        *(uint *)(iVar8 + 0x18) = uVar6;
        if ((int)uVar6 < 1) break;
        uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x70 >> 0x20) != 0) |
                (uint)((ulonglong)uVar6 * 0x70);
        puVar1 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar4) | uVar4 + 0x10,param_2);
        if (puVar1 == (uint *)0x0) {
          puVar2 = (uint *)0x0;
        }
        else {
          *puVar1 = uVar6;
          puVar2 = puVar1 + 4;
          local_10 = uVar6 - 1;
          if (-1 < local_10) {
            puVar1 = puVar1 + 0xd;
            do {
              FUN_00a1ac50();
              puVar1[9] = 0;
              puVar1[-1] = 0;
              *puVar1 = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[5] = 0;
              puVar1[4] = 0;
              puVar1[6] = 0;
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[10] = 0;
              puVar1[0xb] = 0;
              puVar1[0xc] = 0;
              FUN_00a19be0();
              puVar1 = puVar1 + 0x1c;
              local_10 = local_10 + -1;
            } while (-1 < local_10);
          }
        }
        *(uint **)(iVar8 + 0x10) = puVar2;
        if (puVar2 == (uint *)0x0) break;
        if (0xffff < iVar5) {
          iVar5 = 0xffff;
        }
        iVar3 = *(int *)(iVar8 + 4);
        *(int *)(iVar8 + 8) = iVar5;
        if (0xffff < iVar3) {
          iVar3 = 0xffff;
        }
        iVar5 = 0;
        *(int *)(iVar8 + 0xc) = iVar3;
        if (0 < *(int *)(iVar8 + 0x18)) {
          local_10 = 0;
          do {
            iVar7 = *(int *)(iVar8 + 0x10) + local_10;
            iVar3 = FUN_0096faf0(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),param_2);
            if (iVar3 == 0) goto LAB_009744cf;
            local_10 = local_10 + 0x70;
            *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(param_1 + 0x30);
            *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
            *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(param_1 + 0x54);
            iVar5 = iVar5 + 1;
            *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(param_1 + 0x5c);
          } while (iVar5 < *(int *)(iVar8 + 0x18));
        }
        local_c = local_c + 2;
        local_8 = local_8 + 0x20;
        *(undefined4 *)(iVar8 + 0x14) = 0;
        if (0x3f < local_8) {
          return;
        }
      }
    }
LAB_009744cf:
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}

// 009744E0  FUN_009744e0  size=36  [callgraph]
void __fastcall FUN_009744e0(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00973090(*(undefined4 *)(param_1 + 0x28));
    FUN_00973090(*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

// 00974510  FUN_00974510  size=100  [callgraph]
void __thiscall FUN_00974510(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    if (param_4 == 0) {
      FUN_00973100(param_3);
      *param_2 = 0;
      return;
    }
    if (param_4 == 1) {
      FUN_00973100(param_3);
      *param_2 = 1;
      return;
    }
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_009714c0(param_3);
    *param_2 = 2;
  }
  return;
}

// 00974580  FUN_00974580  size=40  [callgraph]
void __fastcall FUN_00974580(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_009731e0();
    FUN_009731e0();
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    cColClsCopyData::setNewData_2();
    return;
  }
  return;
}

// 009745B0  FUN_009745b0  size=138  [callgraph]
void __fastcall FUN_009745b0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x40) != 0) {
    FUN_00dd4940(*(int *)((int)param_1 + 0x40));
  }
  if (*(int *)((int)param_1 + 0x48) != 0) {
    FUN_00dd4940(*(int *)((int)param_1 + 0x48));
  }
  if (*(int *)((int)param_1 + 0x50) != 0) {
    FUN_0096fd00();
    iVar1 = *(int *)((int)param_1 + 0x50);
    if (iVar1 != 0) {
      iVar2 = 1;
      do {
        FUN_00a1ac70();
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      FUN_00dd4920(iVar1);
    }
  }
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  _memset(param_1,0,0x30);
  return;
}

// 00974640  FUN_00974640  size=151  [callgraph]
undefined4 __thiscall
FUN_00974640(int param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_009745b0();
  if (0xfffe < param_3 / 2) {
    return 0;
  }
  lVar2 = (ulonglong)(uint)(param_3 / 2) * 4;
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_6);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 0x1c >> 0x20) != 0) |
                         (uint)((ulonglong)param_4 * 0x1c),param_6);
    *(int *)(param_1 + 0x48) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x30) = *param_2;
      uVar1 = param_2[1];
      *(uint *)(param_1 + 0x3c) = param_4;
      *(int *)(param_1 + 0x38) = param_3;
      *(undefined4 *)(param_1 + 0x34) = uVar1;
      return 1;
    }
  }
  return 0;
}

// 009746F0  FUN_009746f0  size=36  [callgraph]
void __fastcall FUN_009746f0(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_009745b0();
    FUN_00dd4920(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00974720  FUN_00974720  size=103  [callgraph]
void __fastcall FUN_00974720(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_00dd4940(param_1[2]);
  }
  if (param_1[3] != 0) {
    FUN_00dd4940(param_1[3]);
  }
  if (param_1[8] != 0) {
    FUN_009745b0();
    FUN_00dd4920(param_1[8]);
    param_1[8] = 0;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 5) = 0xfff;
  *param_1 = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 00974790  FUN_00974790  size=143  [callgraph]
void __thiscall FUN_00974790(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1[8] != 0) {
    iVar1 = FUN_00974640(param_1 + 2,param_1[6],param_1[7],param_2,param_3);
    if (iVar1 == 0) {
      if (param_1[8] != 0) {
        FUN_009745b0();
        FUN_00dd4920(param_1[8]);
        param_1[8] = 0;
      }
      *param_1 = 0xffffffff;
      return;
    }
    iVar1 = param_1[8];
    FUN_009722c0();
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  return;
}

// 00974820  FUN_00974820  size=58  [callgraph]
void __fastcall FUN_00974820(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[8] != 0) {
    iVar1 = FUN_009732f0();
    if (iVar1 == 0) {
      if (param_1[8] != 0) {
        FUN_009745b0();
        FUN_00dd4920(param_1[8]);
        param_1[8] = 0;
      }
      *param_1 = 0xffffffff;
    }
  }
  return;
}

// 00974860  FUN_00974860  size=56  [callgraph]
void __thiscall FUN_00974860(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_00973370(*(undefined4 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 4),param_2);
    if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0x50) != 0)) {
      FUN_009734f0();
    }
  }
  return;
}

// 009748A0  FUN_009748a0  size=87  [callgraph]
void __thiscall FUN_009748a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x38) != -1) {
    iVar1 = (int)*(short *)(param_1 + 0x38);
    iVar2 = *(int *)(param_2 + 0x360);
    if (*(int *)(param_2 + 0x360) == 0) {
      iVar2 = param_2;
    }
    if ((iVar1 < 0) || (*(short *)(iVar2 + 0x358) <= iVar1)) {
      param_2 = 0;
    }
    else {
      param_2 = iVar1 * 0xb0 + *(int *)(iVar2 + 0x350);
    }
  }
  if (param_2 != 0) {
    FUN_00973c00(param_3,param_2);
    return;
  }
  return;
}

// 00974900  FUN_00974900  size=131  [callgraph]
bool __thiscall FUN_00974900(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (**(int **)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 3;
    return false;
  }
  if (*(short *)(param_1 + 0x38) != -1) {
    iVar1 = (int)*(short *)(param_1 + 0x38);
    iVar2 = *(int *)(param_2 + 0x360);
    if (*(int *)(param_2 + 0x360) == 0) {
      iVar2 = param_2;
    }
    if ((iVar1 < 0) || (*(short *)(iVar2 + 0x358) <= iVar1)) {
      param_2 = 0;
    }
    else {
      param_2 = iVar1 * 0xb0 + *(int *)(iVar2 + 0x350);
    }
  }
  if (param_2 != 0) {
    FUN_00973b50((int *)(param_1 + 0x20),param_1 + 0x24,param_3,param_2);
    return *(int *)(param_1 + 0x20) == 2;
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return false;
}

// 009749A0  FUN_009749a0  size=30  [callgraph]
undefined4 __thiscall FUN_009749a0(undefined4 param_1,byte param_2)

{
  FUN_00974720();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009749C0  FUN_009749c0  size=18  [callgraph]
undefined4 __fastcall FUN_009749c0(int param_1)

{
  undefined4 uVar1;
  
  if (**(int **)(param_1 + 0x28) == 0) {
    return 0;
  }
  uVar1 = FUN_009748a0();
  return uVar1;
}

// 009749E0  FUN_009749e0  size=83  [callgraph]
void __fastcall FUN_009749e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    FUN_00974720();
    FUN_00dd4920(iVar1);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

// 00974A40  FUN_00974a40  size=94  [callgraph]
void __fastcall FUN_00974a40(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xf];
  if (iVar1 != 0) {
    FUN_00974720();
    FUN_00dd4920(iVar1);
  }
  if (param_1[0x10] != 0) {
    FUN_00dd4920(param_1[0x10]);
  }
  param_1[9] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}

// 00974AA0  FUN_00974aa0  size=64  [callgraph]
undefined4 __thiscall
FUN_00974aa0(int *param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  
  FUN_00974a40();
  *(undefined2 *)(param_1 + 0xe) = param_5;
  param_1[0xc] = param_2;
  param_1[10] = param_3 + *(int *)(param_2 + 0x3c) * 0xc;
  iVar1 = *(int *)(param_2 + 0x3c);
  *param_1 = param_2;
  param_1[0xb] = param_4 + iVar1 * 8;
  return 1;
}

// 00974AE0  FUN_00974ae0  size=16  [callgraph]
void __fastcall FUN_00974ae0(undefined4 *param_1)

{
  FUN_00974a40();
  *param_1 = 0;
  return;
}

// 00974BC0  FUN_00974bc0  size=427  [callgraph]
void __fastcall FUN_00974bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[4] != 0) {
    iVar2 = 0;
    if (0 < param_1[5]) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(iVar3 + 0x10 + param_1[4]);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar1 = *(int *)(iVar3 + 0xc + param_1[4]);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < param_1[5]);
    }
    FUN_00dd4940(param_1[4]);
  }
  if (param_1[6] != 0) {
    iVar2 = 0;
    if (0 < param_1[7]) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1[6] + 0x48 + iVar3);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar1 = *(int *)(param_1[6] + 0x50 + iVar3);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x80;
      } while (iVar2 < param_1[7]);
    }
    FUN_00dd4940(param_1[6]);
  }
  if (param_1[0xe] != 0) {
    iVar2 = 0;
    if (0 < param_1[0xf]) {
      do {
        FUN_00d8bc00(param_1[0xe] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[0xf]);
    }
    FUN_00dd4940(param_1[0xe]);
  }
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
  }
  if (param_1[2] != 0) {
    FUN_00dd4940(param_1[2]);
  }
  if (param_1[3] != 0) {
    FUN_00dd4940(param_1[3]);
  }
  if (param_1[10] != 0) {
    FUN_00dd4940(param_1[10]);
  }
  if (param_1[0xc] != 0) {
    FUN_00dd4940(param_1[0xc]);
  }
  if (param_1[8] != 0) {
    FUN_00dd4940(param_1[8]);
  }
  if (param_1[0x11] != 0) {
    FUN_00dd4940(param_1[0x11]);
  }
  if (param_1[0x12] != 0) {
    FUN_00dd4940(param_1[0x12]);
  }
  if (param_1[0x10] != 0) {
    FUN_00dd4940(param_1[0x10]);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}

// 00974D70  FUN_00974d70  size=212  [callgraph]
undefined4 __thiscall FUN_00974d70(int *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  if ((int)param_3 < 1) {
    return 1;
  }
  lVar1 = (ulonglong)(param_3 * 2) * 4;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_3 * 4),param_4);
    param_1[2] = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_3 * 4),param_4);
      param_1[3] = iVar2;
      if (iVar2 != 0) {
        _memset((void *)*param_1,0,param_3 << 3);
        _memset((void *)param_1[3],0,param_3 * 4);
        _memset(param_2,0,param_3 * 4);
        param_1[1] = param_3;
        return 1;
      }
    }
  }
  return 0;
}

// 00974E50  FUN_00974e50  size=226  [callgraph]
undefined4 __thiscall FUN_00974e50(int param_1,int param_2,size_t param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = param_2 * 2;
  pvVar2 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 0x18 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar1 * 0x18),param_4);
  iVar4 = 0;
  *(void **)(param_1 + 0x10) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  _memset(pvVar2,0,param_2 * 0x30);
  param_2 = 0;
  if (0 < (int)uVar1) {
    do {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar4);
      *puVar5 = 0xffffffff;
      puVar5[2] = 0xffffffff;
      iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar1 * 4),param_4);
      puVar5[4] = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
      if (0 < (int)param_3) {
        pvVar2 = (void *)FUN_00dd3580(param_3,param_4);
        puVar5[3] = pvVar2;
        if (pvVar2 == (void *)0x0) {
          return 0;
        }
        _memset(pvVar2,0,param_3);
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0x18;
    } while (param_2 < (int)uVar1);
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  return 1;
}

// 00974F40  FUN_00974f40  size=293  [callgraph]
undefined4 __thiscall FUN_00974f40(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lVar2 = (ulonglong)(uint)(param_3 * 2) * 0x20;
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_4);
  *(int *)(param_1 + 0x28) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  param_4 = 0;
  if (0 < param_3) {
    iVar3 = 0;
    do {
      iVar1 = *param_2;
      if (iVar1 == -1) {
        FUN_00dd5650(&DAT_01651c14);
        return 0;
      }
      switch(iVar1) {
      case 0:
      case 1:
      case 3:
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3);
        puVar4[1] = iVar1;
        *puVar4 = param_2;
        break;
      case 2:
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3);
        puVar4[1] = 0;
        *puVar4 = param_2;
        puVar4[3] = 0xffffffff;
        puVar4[2] = 0xffffffff;
        puVar4[5] = 0xffffffff;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4 = (undefined4 *)(iVar3 + 0x20 + *(int *)(param_1 + 0x28));
        puVar4[1] = 1;
        *puVar4 = param_2;
        puVar4[3] = 0xffffffff;
        puVar4[2] = 0xffffffff;
        puVar4[5] = 0xffffffff;
        puVar4[6] = 0;
        puVar4[7] = 0;
        goto LAB_00975021;
      default:
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3);
        puVar4[1] = 0xffffffff;
        *puVar4 = 0;
      }
      puVar4[3] = 0xffffffff;
      puVar4[2] = 0xffffffff;
      puVar4[5] = 0xffffffff;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4 = (undefined4 *)(iVar3 + 0x20 + *(int *)(param_1 + 0x28));
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[5] = 0xffffffff;
      puVar4[2] = 0xffffffff;
      puVar4[3] = 0xffffffff;
      *puVar4 = 0;
      puVar4[1] = 0xffffffff;
LAB_00975021:
      param_4 = param_4 + 1;
      param_2 = param_2 + 0x26;
      iVar3 = iVar3 + 0x40;
    } while (param_4 < param_3);
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return 1;
}

// 00975080  FUN_00975080  size=267  [callgraph]
undefined4 __thiscall FUN_00975080(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  
  lVar3 = (ulonglong)(uint)(param_3 * 2) * 0x14;
  iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,param_4);
  *(int *)(param_1 + 0x30) = iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  param_4 = 0;
  if (0 < param_3) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_2 + 0x20);
      if (iVar2 == -1) {
        FUN_00dd5650(&DAT_01651c34);
        return 0;
      }
      switch(iVar2) {
      case 0:
      case 1:
      case 3:
        piVar5 = (int *)(*(int *)(param_1 + 0x30) + iVar4);
        piVar5[1] = iVar2;
        *piVar5 = param_2;
        break;
      case 2:
        piVar5 = (int *)(*(int *)(param_1 + 0x30) + iVar4);
        piVar5[1] = 0;
        *piVar5 = param_2;
        piVar5[3] = -1;
        piVar5[2] = -1;
        piVar5[4] = 0;
        piVar5 = (int *)(iVar4 + 0x14 + *(int *)(param_1 + 0x30));
        piVar5[1] = 1;
        *piVar5 = param_2;
        piVar5[3] = -1;
        piVar5[2] = -1;
        piVar5[4] = 0;
        goto LAB_00975149;
      default:
        piVar5 = (int *)(*(int *)(param_1 + 0x30) + iVar4);
        piVar5[1] = -1;
        *piVar5 = 0;
      }
      piVar5[3] = -1;
      piVar5[2] = -1;
      piVar5[4] = 0;
      puVar1 = (undefined4 *)(iVar4 + 0x14 + *(int *)(param_1 + 0x30));
      puVar1[4] = 0;
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0xffffffff;
LAB_00975149:
      param_4 = param_4 + 1;
      param_2 = param_2 + 0x80;
      iVar4 = iVar4 + 0x28;
    } while (param_4 < param_3);
  }
  *(int *)(param_1 + 0x34) = param_3;
  return 1;
}

// 009751A0  FUN_009751a0  size=93  [callgraph]
undefined4 FUN_009751a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 == 0) {
    return 0;
  }
  do {
    iVar1 = *(int *)(iVar4 + 0x74);
    if (*(int *)(param_1 + 4) != 0) {
      iVar3 = *(int *)(param_1 + 4);
      do {
        iVar2 = *(int *)(iVar3 + 0x74);
        iVar3 = FUN_00d8d820(iVar4,iVar4 + 0x10,iVar3,iVar3 + 0x10);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = iVar2;
      } while (iVar2 != 0);
    }
    iVar4 = iVar1;
  } while (iVar1 != 0);
  return 0;
}

// 00975200  FUN_00975200  size=101  [callgraph]
undefined4 __thiscall FUN_00975200(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(*(int *)(param_1 + 0x10) + param_2 * 0x30);
  uVar1 = 0xffffffff;
  if (*piVar2 == -1) {
    if (*(char *)(param_3 + piVar2[9]) != '\0') {
      return 0;
    }
    if (piVar2[6] != -1) {
      return 0xffffffff;
    }
  }
  else if (piVar2[6] != -1) {
    if (*(char *)(param_3 + piVar2[3]) != '\0') {
      if (*(char *)(param_3 + piVar2[9]) != '\0') {
        return 0xffffffff;
      }
      if (*(char *)(param_3 + piVar2[3]) != '\0') {
        return 0;
      }
    }
    iVar3 = piVar2[9];
    goto LAB_00975255;
  }
  iVar3 = piVar2[3];
LAB_00975255:
  if (*(char *)(param_3 + iVar3) != '\0') {
    uVar1 = 1;
  }
  return uVar1;
}

// 00975270  FUN_00975270  size=192  [callgraph]
int FUN_00975270(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_2[7] == -1) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(param_1[3] + param_2[7]);
  }
  if (*param_2 == 0) {
LAB_009752fb:
    if ((*param_1 == *(int *)param_2[5]) &&
       (iVar1 = FUN_009751a0((int *)param_2[5],param_1), iVar1 != 0)) {
LAB_009752a9:
      return param_2[3];
    }
    if (*param_1 != *(int *)param_2[6]) {
      return -1;
    }
    iVar1 = FUN_009751a0((int *)param_2[6],param_1);
    bVar3 = iVar1 == 0;
  }
  else {
    if (param_2[2] != 0) {
LAB_009752e1:
      if (*param_1 == 3) {
        if (param_2[9] == -1) {
          return -1;
        }
        if (param_2[9] == 0) {
          return param_2[3];
        }
        goto LAB_009752ba;
      }
      goto LAB_009752fb;
    }
    if (param_2[1] == 0) {
      if (*(int *)param_2[5] != -1) goto LAB_009752a9;
      if (*(int *)param_2[6] != -1) goto LAB_009752ba;
    }
    if (cVar2 == '\0') goto LAB_009752e1;
    if (param_2[8] == -1) {
      return -1;
    }
    if (*(int *)param_2[5] != -1) goto LAB_009752a9;
    bVar3 = *(int *)param_2[6] == -1;
  }
  if (bVar3) {
    return -1;
  }
LAB_009752ba:
  return param_2[4];
}

// 009753E0  FUN_009753e0  size=214  [callgraph]
void FUN_009753e0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == -1) {
    iVar4 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = param_2;
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x74)) {
      iVar3 = 0;
      *(undefined4 *)(iVar4 + 0x3c) = param_2;
      if (0 < *(int *)(iVar4 + 0x4c)) {
        iVar2 = 0;
        do {
          for (iVar1 = *(int *)(iVar2 + *(int *)(iVar4 + 0x48)); iVar1 != 0;
              iVar1 = *(int *)(iVar1 + 0x1c)) {
            *(undefined4 *)(iVar1 + 0xc) = param_2;
            *param_3 = *param_3 + 1;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x18;
        } while (iVar3 < *(int *)(iVar4 + 0x4c));
      }
      for (iVar3 = *(int *)(iVar4 + 0x6c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x58)) {
        iVar2 = *(int *)(iVar3 + 0x34);
        *(undefined4 *)(iVar3 + 0x28) = param_2;
        for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
          *(undefined4 *)(iVar2 + 0xc) = param_2;
          *param_4 = *param_4 + 1;
        }
      }
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x10) + iVar4 * 4) != 0) {
          FUN_009753e0(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 4),param_2,param_3,param_4
                      );
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x14));
    }
  }
  return;
}

// 00975500  FUN_00975500  size=29  [callgraph]
void __thiscall FUN_00975500(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  *param_3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

// 00975570  FUN_00975570  size=367  [callgraph]
void __fastcall FUN_00975570(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x1c) + iVar3;
        if (*(char *)(iVar1 + 0x15) == '\0') {
          FUN_00a05d90(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < *(int *)(param_1 + 0x50));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      iVar3 = 0;
      do {
        FUN_00a05e40(*(int *)(param_1 + 0x20) + iVar3);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x50;
      } while (iVar2 < *(int *)(param_1 + 0x54));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      iVar3 = 0;
      do {
        FUN_00a05eb0(*(int *)(param_1 + 0x24) + iVar3);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *(int *)(param_1 + 0x58));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x34) + iVar3;
        if (*(char *)(iVar1 + 9) == '\0') {
          FUN_00a05fa0(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < *(int *)(param_1 + 0x44));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x34));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      iVar3 = 0;
      do {
        if (*(char *)(iVar3 + 0x45 + *(int *)(param_1 + 0x30)) == '\0') {
          FUN_00a05f30(iVar3 + *(int *)(param_1 + 0x30));
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x50;
      } while (iVar2 < *(int *)(param_1 + 0x44));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xc));
  }
  return;
}

// 009756E0  FUN_009756e0  size=142  [callgraph]
undefined4 __thiscall FUN_009756e0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x18;
  *(undefined2 *)(iVar1 + 0x14) = 1;
  *(undefined1 *)(iVar1 + 0x16) = 1;
  iVar3 = 0;
  do {
    iVar2 = (uint)*(byte *)(iVar3 + 0x5c + param_1) * param_3;
    if (0 < iVar2) {
      iVar2 = FUN_00dd3580(iVar2,*(undefined4 *)(param_1 + 0x68));
      *(int *)(iVar1 + iVar3 * 4) = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 2),*(undefined4 *)(param_1 + 0x68));
  *(int *)(iVar1 + 0xc) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x10) = param_4;
  *(int *)(iVar1 + 8) = param_3;
  return 1;
}

// 00975790  FUN_00975790  size=213  [callgraph]
undefined4 __thiscall FUN_00975790(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined1 *)((int)param_2 + 10) = 1;
  if (*(int *)(param_3 + 0xc) == 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x3c) * 4;
    pvVar3 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,
                                  *(undefined4 *)(param_1 + 0x68));
    *param_2 = (int)pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    _memset(pvVar3,0,*(int *)(param_1 + 0x3c) * 4);
  }
  else if (*(char *)(param_3 + 0x1a) == '\0') {
    *param_2 = *(int *)(param_3 + 0xc);
  }
  else {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x3c) * 4;
    pvVar3 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,
                                  *(undefined4 *)(param_1 + 0x68));
    *param_2 = (int)pvVar3;
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    FID_conflict__memcpy(pvVar3,*(void **)(param_3 + 0xc),*(int *)(param_1 + 0x3c) * 4);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
      *piVar1 = *piVar1 + *(int *)(*param_2 + iVar4 * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x3c));
  }
  param_2[1] = *(int *)(param_1 + 0x3c);
  return 1;
}

// 00975870  FUN_00975870  size=229  [callgraph]
undefined4 __thiscall FUN_00975870(int param_1,int param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 1;
  }
  if (*(int *)(param_3 + 8) == 0) {
    pvVar2 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar1 * 4),*(undefined4 *)(param_1 + 0x68));
    *(void **)(param_2 + 0x30) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      _memset(pvVar2,0,*(int *)(param_1 + 0x60) * 4);
      *(undefined2 *)(param_2 + 0x44) = 1;
      return 1;
    }
  }
  else {
    if (*(char *)(param_3 + 0x1a) == '\0') {
      *(int *)(param_2 + 0x30) = *(int *)(param_3 + 8);
      *(undefined2 *)(param_2 + 0x44) = 1;
      return 1;
    }
    pvVar2 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar1 * 4),*(undefined4 *)(param_1 + 0x68));
    *(void **)(param_2 + 0x30) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      FID_conflict__memcpy(pvVar2,*(void **)(param_3 + 8),*(int *)(param_1 + 0x60) * 4);
      *(undefined2 *)(param_2 + 0x44) = 1;
      return 1;
    }
  }
  return 0;
}

// 00975960  FUN_00975960  size=181  [callgraph]
undefined4 __thiscall FUN_00975960(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_3 + 0x24) * 4);
  iVar3 = *piVar1;
  if (iVar3 != -1) {
    *param_2 = iVar3;
    return 1;
  }
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x48) * 0x14);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4c) * 0x10 + *(int *)(param_1 + 0x2c));
  iVar3 = FUN_00a04940(puVar2,*(int *)(param_3 + 0x24));
  if (iVar3 == 0) {
    return 0;
  }
  *puVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_3 + 0x20) * 4);
  *puVar4 = *(undefined4 *)(param_1 + 0x48);
  puVar4[1] = *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_3 + 0x20) * 4);
  *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_3 + 0x2a);
  *(undefined2 *)((int)puVar4 + 10) = *(undefined2 *)(param_3 + 0x28);
  *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(param_3 + 0x2c);
  *(undefined1 *)((int)puVar4 + 0xd) = *(undefined1 *)(param_3 + 0x2d);
  *piVar1 = *(int *)(param_1 + 0x48);
  *param_2 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return 1;
}

// 00975A20  FUN_00975a20  size=192  [callgraph]
undefined4 __thiscall FUN_00975a20(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_2;
  if (*param_1 == 0) {
    return 0;
  }
  if (param_1[0x11] <= param_1[0x10]) {
    FUN_00dd5650(&DAT_01651c54);
    return 0;
  }
  iVar5 = FUN_00975960(&param_2,param_2);
  uVar3 = param_3;
  if (iVar5 == 0) {
    return 0;
  }
  if (param_1[0xd] != 0) {
    piVar1 = (int *)(param_1[0xd] + param_1[0x10] * 0xc);
    iVar5 = FUN_00a100a0(piVar1,param_3);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = 0;
    if (0 < param_1[0xf]) {
      do {
        piVar2 = (int *)(param_1[6] + iVar5 * 4);
        *piVar2 = *piVar2 + *(int *)(*piVar1 + iVar5 * 4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[0xf]);
    }
  }
  iVar6 = param_1[0x10] * 0x50 + param_1[0xc];
  iVar5 = FUN_00a07070(iVar6,uVar3);
  if (iVar5 == 0) {
    return 0;
  }
  uVar3 = *(undefined4 *)(param_1[2] + *(int *)(iVar4 + 0x20) * 4);
  *(int *)(iVar6 + 0x24) = param_2;
  *(undefined4 *)(iVar6 + 0x20) = uVar3;
  param_1[0x10] = param_1[0x10] + 1;
  return 1;
}

// 00975AE0  FUN_00975ae0  size=194  [callgraph]
undefined4 __thiscall FUN_00975ae0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_4[3] * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_4[3] * 2),*(undefined4 *)(param_1 + 0x68));
  *param_3 = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = param_2[1];
  iVar4 = 0;
  for (iVar3 = *param_4; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x1c)) {
    iVar2 = 0;
    if (0 < *(int *)(iVar3 + 0x18)) {
      do {
        sVar5 = *(short *)(iVar3 + 0x14) + (short)iVar2;
        *(short *)(*param_2 + iVar1 * 2) = sVar5;
        *(short *)(*param_3 + iVar4 * 2) = sVar5;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 1;
      } while (iVar2 < *(int *)(iVar3 + 0x18));
    }
  }
  iVar3 = 0;
  if (0 < param_4[5]) {
    do {
      sVar5 = (short)param_4[4] + (short)iVar3;
      *(short *)(*param_2 + iVar1 * 2) = sVar5;
      *(short *)(*param_3 + iVar4 * 2) = sVar5;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar3 < param_4[5]);
  }
  param_3[1] = iVar4;
  param_2[1] = iVar1;
  return 1;
}

// 00975BB0  FUN_00975bb0  size=157  [callgraph]
void __thiscall FUN_00975bb0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x58);
  if (0 < *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

// 00975C90  FUN_00975c90  size=161  [callgraph]
void __fastcall FUN_00975c90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 4) + iVar3;
        if (*(char *)(iVar1 + 0x11) == '\0') {
          FUN_00a05f60(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *(int *)(param_1 + 0x14));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x1c));
  }
  return;
}

// 00975D40  FUN_00975d40  size=265  [callgraph]
void __thiscall FUN_00975d40(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    local_8 = 0;
    local_c = 0;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xc) + local_8;
      iVar3 = *(int *)(param_1 + 4) + local_c;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 8);
      if (*(int *)(param_1 + 0x34) < *(int *)(iVar4 + 0x44) + *(int *)(iVar4 + 0x40)) {
        FUN_00dd5650(&DAT_01651c84);
        *(int *)(iVar4 + 0x44) = *(int *)(param_1 + 0x34) - *(int *)(iVar4 + 0x40);
      }
      if (*(char *)(iVar3 + 0x11) == '\0') {
        *(undefined4 *)(iVar3 + 4) = *puVar1;
        *(undefined4 *)(iVar3 + 0xc) = puVar1[1];
      }
      local_c = local_c + 0x14;
      local_8 = local_8 + 0x60;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 00976000  FUN_00976000  size=73  [callgraph]
void __fastcall FUN_00976000(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}

// 00976050  thunk_FUN_00974bc0  size=5  [callgraph]
void __fastcall thunk_FUN_00974bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[4] != 0) {
    iVar2 = 0;
    if (0 < param_1[5]) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(iVar3 + 0x10 + param_1[4]);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar1 = *(int *)(iVar3 + 0xc + param_1[4]);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar2 < param_1[5]);
    }
    FUN_00dd4940(param_1[4]);
  }
  if (param_1[6] != 0) {
    iVar2 = 0;
    if (0 < param_1[7]) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1[6] + 0x48 + iVar3);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar1 = *(int *)(param_1[6] + 0x50 + iVar3);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x80;
      } while (iVar2 < param_1[7]);
    }
    FUN_00dd4940(param_1[6]);
  }
  if (param_1[0xe] != 0) {
    iVar2 = 0;
    if (0 < param_1[0xf]) {
      do {
        FUN_00d8bc00(param_1[0xe] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[0xf]);
    }
    FUN_00dd4940(param_1[0xe]);
  }
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
  }
  if (param_1[2] != 0) {
    FUN_00dd4940(param_1[2]);
  }
  if (param_1[3] != 0) {
    FUN_00dd4940(param_1[3]);
  }
  if (param_1[10] != 0) {
    FUN_00dd4940(param_1[10]);
  }
  if (param_1[0xc] != 0) {
    FUN_00dd4940(param_1[0xc]);
  }
  if (param_1[8] != 0) {
    FUN_00dd4940(param_1[8]);
  }
  if (param_1[0x11] != 0) {
    FUN_00dd4940(param_1[0x11]);
  }
  if (param_1[0x12] != 0) {
    FUN_00dd4940(param_1[0x12]);
  }
  if (param_1[0x10] != 0) {
    FUN_00dd4940(param_1[0x10]);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}

// 00976060  FUN_00976060  size=408  [callgraph]
undefined4 __thiscall
FUN_00976060(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_14;
  int local_10;
  
  iVar5 = param_3;
  iVar2 = *(int *)(param_4 + 0x18);
  iVar3 = *(int *)(param_4 + 8);
  lVar4 = (ulonglong)*(uint *)(iVar3 + 0x10) * 0x18;
  _Dst = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4,param_5);
  *(void **)(param_3 + 0x48) = _Dst;
  if (_Dst == (void *)0x0) {
    return 0;
  }
  _memset(_Dst,0,*(int *)(iVar3 + 0x10) * 0x18);
  local_10 = 0;
  if (0 < *(int *)(iVar3 + 0x10)) {
    param_4 = 0;
    do {
      piVar8 = (int *)(*(int *)(iVar5 + 0x48) + param_4);
      piVar1 = (int *)(*(int *)(iVar3 + 0xc) + local_10 * 8);
      local_14 = 0;
      if (0 < piVar1[1]) {
        do {
          param_3 = 0;
          iVar7 = (uint)*(ushort *)(*piVar1 + local_14 * 2) << 6;
          do {
            iVar9 = param_1[10] + iVar7;
            if ((*(int *)(param_1[10] + iVar7) != 0) &&
               (*(int *)(iVar9 + 4) == *(int *)(iVar5 + 0x38))) {
              iVar6 = FUN_00980430(param_2,iVar5,piVar8);
              *(int *)(iVar9 + 8) = iVar6;
              if (iVar6 != -1) {
                iVar7 = *param_1;
                if (iVar7 != 0) {
                  if (*(int *)(iVar5 + 0x38) != 0) {
                    if (*(int *)(iVar5 + 0x38) != 1) goto LAB_00976188;
                    iVar7 = iVar7 + param_1[1] * 4;
                  }
                  if (iVar7 != 0) {
                    FUN_0097e0f0(iVar7,iVar6);
                  }
                }
LAB_00976188:
                *(int *)(iVar9 + 0x10) = param_1[7];
                *(int *)(iVar9 + 0x1c) = *piVar8;
                *piVar8 = iVar9;
                break;
              }
            }
            param_3 = param_3 + 1;
            iVar7 = iVar7 + 0x20;
          } while (param_3 < 2);
          local_14 = local_14 + 1;
        } while (local_14 < piVar1[1]);
      }
      if (iVar2 != 0) {
        FUN_0097d4a0(iVar5,piVar8);
      }
      *(int *)(iVar5 + 0x5c) = *(int *)(iVar5 + 0x5c) + piVar8[3];
      *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + piVar8[5];
      param_4 = param_4 + 0x18;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(iVar3 + 0x10));
  }
  *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(iVar3 + 0x10);
  return 1;
}

// 00976210  FUN_00976210  size=103  [callgraph]
undefined4 FUN_00976210(int param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_2 + 0xc) + 4);
  }
  uVar3 = *(int *)(*(int *)(param_2 + 8) + 0x10) * iVar2 + *(int *)(*(int *)(param_2 + 4) + 0x48);
  lVar1 = (ulonglong)uVar3 * 2;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_3);
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return 1;
}

// 00976290  FUN_00976290  size=122  [callgraph]
void __thiscall FUN_00976290(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_3 + 0x30);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x44)) {
    do {
      iVar2 = 0;
      piVar3 = (int *)(*(int *)(param_1 + 0x30) + (*(int *)(iVar1 + 0x40) + iVar4) * 0x28);
      do {
        if ((*piVar3 != 0) && (piVar3[1] == *(int *)(param_2 + 0x24))) {
          FUN_00974510(piVar3 + 2,param_2,*(undefined4 *)(param_2 + 0x24));
          piVar3[4] = *(int *)(param_2 + 0x34);
          *(int **)(param_2 + 0x34) = piVar3;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 5;
      } while (iVar2 < 2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x44));
  }
  FUN_00972110(param_2);
  return;
}

// 00976320  FUN_00976320  size=237  [callgraph]
undefined4 __thiscall FUN_00976320(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(param_3 + param_4 * 0xc);
  iVar4 = (int)(short)piVar2[2];
  if (iVar4 == -1) {
    return 0;
  }
  iVar3 = (int)*(short *)((int)piVar2 + 10);
  if ((*piVar2 == 0) || (*(int *)(param_3 + iVar4 * 0xc) == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  if ((*(int *)(*(int *)(param_1 + 0x10) + param_4 * 0x30) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x10) + 0x18 + param_4 * 0x30) == 1)) {
    param_2[1] = 1;
  }
  else {
    param_2[1] = 0;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar4 * 0x30);
  if ((*piVar2 == 0) && (piVar2[6] == 1)) {
    param_2[2] = 1;
  }
  else {
    param_2[2] = 0;
  }
  param_2[3] = iVar4 * 2;
  param_2[4] = iVar4 * 2 + 1;
  param_2[5] = piVar2;
  param_2[6] = piVar2 + 6;
  param_2[7] = iVar3;
  if (iVar3 != -1) {
    uVar1 = FUN_00975200(param_4,iVar3);
    param_2[8] = uVar1;
    uVar1 = FUN_00975200(iVar4,iVar3);
    param_2[9] = uVar1;
    return 1;
  }
  param_2[8] = 0xffffffff;
  param_2[9] = 0xffffffff;
  return 1;
}

// 00976410  FUN_00976410  size=185  [callgraph]
void __thiscall FUN_00976410(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_34;
  int local_30;
  undefined1 local_28 [40];
  
  iVar4 = *(int *)(param_1 + 0x14) / 2;
  local_30 = 0;
  if (0 < iVar4) {
    local_34 = 0;
    do {
      iVar2 = FUN_00976320(local_28,param_2,local_30);
      if (iVar2 != 0) {
        iVar5 = 2;
        iVar2 = local_34;
        do {
          piVar6 = (int *)(*(int *)(param_1 + 0x10) + iVar2);
          if ((*piVar6 != -1) && (iVar3 = FUN_00975270(piVar6,local_28), iVar3 != -1)) {
            iVar1 = *(int *)(param_1 + 0x10) + iVar3 * 0x18;
            *(int **)(*(int *)(iVar1 + 0x10) +
                     *(int *)(*(int *)(param_1 + 0x10) + 0x14 + iVar3 * 0x18) * 4) = piVar6;
            *(int *)(piVar6[4] + piVar6[5] * 4) = iVar1;
            *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
            piVar6[5] = piVar6[5] + 1;
          }
          iVar2 = iVar2 + 0x18;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_34 = local_34 + 0x30;
      local_30 = local_30 + 1;
    } while (local_30 < iVar4);
  }
  return;
}

// 009764D0  FUN_009764d0  size=362  [callgraph]
undefined4 __thiscall
FUN_009764d0(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  local_4 = param_1;
  FUN_00976410(param_2,param_3);
  uVar6 = 0;
  uVar5 = 0;
  param_3 = 0;
  while (iVar4 = 0, 0 < *(int *)(param_1 + 0x14)) {
    piVar2 = *(int **)(param_1 + 0x10);
    while ((*piVar2 == -1 || (piVar2[2] != -1))) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 6;
      if (*(int *)(param_1 + 0x14) <= iVar4) goto LAB_00976514;
    }
    param_2 = 0;
    local_4 = 0;
    FUN_009753e0(piVar2,uVar6,&param_2,&local_4);
    if ((int)uVar5 <= (int)param_2) {
      uVar5 = param_2;
    }
    if ((int)param_3 <= (int)local_4) {
      param_3 = local_4;
    }
    uVar6 = uVar6 + 1;
  }
LAB_00976514:
  if (0 < (int)uVar6) {
    iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar6 * 4),param_4);
    uVar1 = param_5;
    *(int *)(param_1 + 0x38) = iVar4;
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < (int)uVar6) {
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x38) + iVar4 * 4) = 0xffffffff;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar6);
      }
      *(uint *)(param_1 + 0x3c) = uVar6;
      uVar6 = *(uint *)(param_1 + 0x5c);
      if ((int)*(uint *)(param_1 + 0x5c) <= (int)*(uint *)(param_1 + 100)) {
        uVar6 = *(uint *)(param_1 + 100);
      }
      if ((int)uVar5 <= (int)param_3) {
        uVar5 = param_3;
      }
      uVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar6 * 4),param_5);
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      uVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar6 * 4),uVar1);
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar5 * 4),uVar1);
      *(int *)(param_1 + 0x48) = iVar4;
      if (((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x44) != 0)) && (iVar4 != 0)) {
        *(uint *)(param_1 + 0x4c) = uVar6;
        *(uint *)(param_1 + 0x50) = uVar6;
        *(uint *)(param_1 + 0x54) = uVar5;
        return 1;
      }
    }
  }
  return 0;
}

// 00976640  FUN_00976640  size=50  [callgraph]
undefined4 __thiscall FUN_00976640(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_8;
  
  iVar2 = param_3;
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 8 + *(int *)(param_3 + 0x34) * 0x1c);
  if (*(int *)(param_3 + 0x60) < 1) {
    return 1;
  }
  uStack_8 = 0;
  if (0 < *(int *)(param_3 + 0x4c)) {
    param_3 = 0;
    do {
      iVar5 = *(int *)(iVar2 + 0x48) + param_3;
      if (0 < *(int *)(iVar5 + 0x14)) {
        iVar4 = 0;
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_2 + 0x40);
        if (0 < *(int *)(iVar5 + 8)) {
          do {
            iVar3 = FUN_0097a2b0(param_2,*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38)
                                 ,*(undefined2 *)(iVar1 + 6));
            if (iVar3 == 0) {
              return 0;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar5 + 8));
        }
      }
      param_3 = param_3 + 0x18;
      uStack_8 = uStack_8 + 1;
    } while (uStack_8 < *(int *)(iVar2 + 0x4c));
  }
  return 1;
}

// 00976672  FUN_00976672  size=142  [callgraph]
undefined4 FUN_00976672(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  int iStack00000014;
  
  param_1 = in_EAX;
  iStack00000014 = in_EAX;
  if (in_EAX < *(int *)(unaff_EDI + 0x4c)) {
    do {
      iVar3 = *(int *)(unaff_EDI + 0x48) + iStack00000014;
      if (0 < *(int *)(iVar3 + 0x14)) {
        iVar2 = 0;
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_4 + 0x40);
        if (0 < *(int *)(iVar3 + 8)) {
          do {
            iVar1 = FUN_0097a2b0(param_4,*(undefined4 *)(unaff_EDI + 0x34),
                                 *(undefined4 *)(unaff_EDI + 0x38),*(undefined2 *)(param_2 + 6));
            if (iVar1 == 0) {
              return 0;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(iVar3 + 8));
        }
      }
      iStack00000014 = iStack00000014 + 0x18;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(unaff_EDI + 0x4c));
  }
  return 1;
}

// 00976700  FUN_00976700  size=270  [callgraph]
undefined4 __thiscall FUN_00976700(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_3 + 0x78);
  if ((int)uVar2 < 1) {
    return 1;
  }
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 4),param_4);
  *(int *)(param_2 + 0xc4) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  uVar8 = 0;
  if (0 < (int)uVar2) {
    param_4 = 0;
    do {
      if (*(int *)(param_3 + 0x7c) == 0) {
        uVar6 = 0;
      }
      else if (((int)uVar8 < 0) || (*(int *)(param_3 + 0x78) <= (int)uVar8)) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(param_3 + 0x7c) + uVar8 * 4);
      }
      puVar1 = (undefined4 *)(*(int *)(param_2 + 0xc4) + uVar8 * 4);
      piVar4 = (int *)(*(int *)(param_1 + 0x10) + param_4);
      if ((*piVar4 == -1) || (piVar4[6] == -1)) {
        *puVar1 = uVar6;
      }
      else {
        *puVar1 = 1;
      }
      iVar3 = *(int *)(param_2 + 0x88);
      iVar7 = 0;
      if (0 < iVar3) {
        puVar5 = (ushort *)(*(int *)(param_2 + 0x84) + 4);
        do {
          if (*puVar5 == uVar8) break;
          iVar7 = iVar7 + 1;
          puVar5 = puVar5 + 10;
        } while (iVar7 < iVar3);
      }
      if (iVar3 <= iVar7) {
        *puVar1 = 2;
      }
      param_4 = param_4 + 0x30;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar2);
  }
  *(uint *)(param_2 + 200) = uVar2;
  return 1;
}

// 00976810  FUN_00976810  size=182  [callgraph]
undefined4 __thiscall
FUN_00976810(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  
  FUN_00a04990(param_1 + 0x17);
  *param_1 = param_2;
  param_1[1] = *(int *)(param_2 + 0x3c);
  param_1[0x18] = *(int *)(param_2 + 0x84);
  param_1[2] = param_3;
  param_1[6] = param_4;
  param_1[0x1a] = param_5;
  *(char *)(param_1 + 0x19) = *(char *)(param_2 + 0xcc) + '\x01';
  if (param_2 == -0xe0) {
    param_1[0xf] = 0;
  }
  else {
    param_1[0xf] = *(int *)(param_2 + 0xe8);
  }
  uVar1 = FUN_00a049f0();
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar1 * 4),param_6);
  param_1[3] = iVar2;
  if (iVar2 != 0) {
    iVar2 = 0;
    if (0 < (int)uVar1) {
      do {
        *(undefined4 *)(param_1[3] + iVar2 * 4) = 0xffffffff;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
    param_1[4] = uVar1;
    return 1;
  }
  return 0;
}

// 009768F0  FUN_009768f0  size=527  [callgraph]
undefined4 __thiscall FUN_009768f0(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x40)) {
    FUN_00dd5650(&DAT_01651c54);
    return 0;
  }
  if ((*(int *)(param_1 + 0x34) != 0) &&
     (iVar3 = FUN_00975790(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x40) * 0xc,param_3),
     iVar3 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + param_3[4] * 4);
  if ((iVar3 < 0) || (*(int *)(param_1 + 0x50) <= iVar3)) {
    FUN_00dd5650(&DAT_01651ca8);
    return 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar3 * 0x18);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x40) * 0x50 + *(int *)(param_1 + 0x30));
  piVar2 = (int *)(*(int *)(param_1 + 0x14) + iVar3 * 8);
  *(undefined2 *)(puVar4 + 0x11) = 1;
  *(undefined1 *)((int)puVar4 + 0x46) = 1;
  if ((*piVar2 + param_3[7] <= piVar1[2]) && (param_3[8] + piVar2[1] <= piVar1[4])) {
    if (*(byte *)(param_1 + 0x5c) == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = (uint)*(byte *)(param_1 + 0x5c) * *piVar2 + *piVar1;
    }
    if (*(byte *)(param_1 + 0x5d) == 0) {
      param_2[1] = 0;
    }
    else {
      param_2[1] = (uint)*(byte *)(param_1 + 0x5d) * *piVar2 + piVar1[1];
    }
    param_2[3] = piVar1[3] + piVar2[1] * 2;
    param_2[2] = param_3[7];
    param_2[4] = param_3[8];
    piVar1 = (int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x48) * 0x14);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x4c) * 0x10 + *(int *)(param_1 + 0x2c));
    *piVar1 = iVar3;
    piVar1[1] = *piVar2;
    piVar1[2] = piVar2[1];
    piVar1[3] = param_3[7];
    piVar1[4] = param_3[8];
    *puVar5 = *(undefined4 *)(param_1 + 0x48);
    puVar5[1] = iVar3;
    *(undefined2 *)(puVar5 + 2) = *(undefined2 *)((int)param_3 + 0x16);
    *(undefined2 *)((int)puVar5 + 10) = *(undefined2 *)(param_3 + 5);
    *(undefined1 *)(puVar5 + 3) = *(undefined1 *)((int)param_3 + 0x19);
    *(undefined1 *)((int)puVar5 + 0xd) = *(undefined1 *)(param_3 + 6);
    puVar5 = (undefined4 *)*param_3;
    *puVar4 = *puVar5;
    puVar4[1] = puVar5[1];
    puVar4[2] = puVar5[2];
    puVar4[3] = puVar5[3];
    puVar5 = (undefined4 *)param_3[1];
    puVar4[4] = *puVar5;
    puVar4[5] = puVar5[1];
    puVar4[6] = puVar5[2];
    puVar4[7] = puVar5[3];
    puVar4[8] = iVar3;
    puVar4[9] = *(undefined4 *)(param_1 + 0x48);
    puVar4[0xd] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = param_3[7];
    puVar4[0x10] = param_3[8];
    *(undefined2 *)((int)puVar4 + 0x2a) = *(undefined2 *)((int)param_3 + 0x16);
    *(undefined2 *)(puVar4 + 10) = *(undefined2 *)(param_3 + 5);
    *(undefined1 *)(puVar4 + 0xb) = *(undefined1 *)((int)param_3 + 0x19);
    *(undefined1 *)((int)puVar4 + 0x2d) = *(undefined1 *)(param_3 + 6);
    iVar3 = FUN_00975870(puVar4,param_3);
    if (iVar3 != 0) {
      *piVar2 = *piVar2 + param_3[7];
      piVar2[1] = piVar2[1] + param_3[8];
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      return 1;
    }
  }
  return 0;
}

// 00976B00  FUN_00976b00  size=224  [callgraph]
undefined4 __thiscall FUN_00976b00(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  void *_Dst;
  int iVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  _Dst = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_3[0x15] * 2 >> 0x20) != 0) |
                              (uint)((ulonglong)(uint)param_3[0x15] * 2),
                              *(undefined4 *)(param_1 + 0x68));
  param_2[0x11] = _Dst;
  if (_Dst != (void *)0x0) {
    FID_conflict__memcpy(_Dst,(void *)param_3[0x14],param_3[0x15] * 2);
    param_2[0x12] = param_3[0x15];
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_3[0x17] * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)(uint)param_3[0x17] * 2),*(undefined4 *)(param_1 + 0x68))
    ;
    param_2[8] = iVar1;
    if (iVar1 != 0) {
      param_2[9] = 0;
      param_2[0x10] = *(undefined4 *)(*(int *)(param_4 + 4) + 0x40);
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      param_2[3] = param_3[3];
      param_2[4] = param_3[4];
      param_2[5] = param_3[5];
      param_2[6] = param_3[6];
      param_2[7] = param_3[7];
      return 1;
    }
  }
  return 0;
}

// 00976BE0  FUN_00976be0  size=139  [callgraph]
undefined4 __thiscall
FUN_00976be0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_5 + 8);
  iVar4 = *(int *)(param_3 + 0x4c);
  uVar2 = 0;
  if (0 < iVar4) {
    piVar3 = (int *)(*(int *)(param_3 + 0x48) + 0xc);
    do {
      if (0 < *piVar3) {
        uVar2 = uVar2 + 1;
      }
      piVar3 = piVar3 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (0 < (int)uVar2) {
      iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 8),*(undefined4 *)(param_1 + 0x68));
      param_2[3] = iVar4;
      if (iVar4 == 0) {
        return 0;
      }
      param_2[4] = 0;
    }
  }
  *param_2 = param_4;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar1 + 4);
  *(undefined2 *)((int)param_2 + 6) = *(undefined2 *)(iVar1 + 6);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(iVar1 + 8);
  return 1;
}

// 00976C70  FUN_00976c70  size=204  [callgraph]
undefined4 __thiscall FUN_00976c70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_2;
  param_3 = param_3 + *(int *)(param_2 + 0x34) * 0x1c;
  if (param_3 == 0) {
    return 0;
  }
  iVar5 = param_4 * 0x50 + *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x24) + param_4 * 0x14;
  iVar3 = FUN_00976b00(iVar5,param_2,param_3);
  if (iVar3 != 0) {
    iVar3 = FUN_00976be0(iVar1,param_2,param_4,param_3);
    if (iVar3 != 0) {
      iVar3 = 0;
      param_4 = 0;
      if (0 < *(int *)(param_2 + 0x4c)) {
        param_2 = 0;
        do {
          iVar4 = *(int *)(iVar2 + 0x48) + param_2;
          if (0 < *(int *)(iVar4 + 0xc)) {
            FUN_00975ae0(iVar5 + 0x20,*(int *)(iVar1 + 0xc) + iVar3 * 8,iVar4);
            iVar3 = iVar3 + 1;
          }
          param_2 = param_2 + 0x18;
          param_4 = param_4 + 1;
        } while (param_4 < *(int *)(iVar2 + 0x4c));
      }
      *(int *)(iVar1 + 0x10) = iVar3;
      return 1;
    }
  }
  return 0;
}

// 00976D40  FUN_00976d40  size=123  [callgraph]
void __thiscall FUN_00976d40(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((0 < *(int *)(param_1 + 0x3c)) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x3c))) {
    iVar1 = param_2 - (int)param_3;
    do {
      iVar2 = FUN_00a073c0(iVar3);
      if (*(int *)(*(int *)(param_1 + 0x18) + iVar3 * 4) < 1) {
        iVar2 = 2;
      }
      else if ((*(int *)(iVar1 + (int)param_3) < 1) ||
              (*(int *)(param_2 + (*(int *)(param_1 + 0x3c) + iVar3) * 4) < 1)) {
        if (iVar2 == 0) {
          *param_3 = *param_3 + 1;
        }
      }
      else {
        iVar2 = 1;
      }
      *(int *)(*(int *)(param_1 + 0x38) + iVar3 * 4) = iVar2;
      iVar3 = iVar3 + 1;
      param_3 = param_3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3c));
  }
  return;
}

// 00976DE0  FUN_00976de0  size=303  [callgraph]
undefined4 __thiscall FUN_00976de0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar4 = param_3 * 0x60;
  if (param_1[0xe] < *(int *)(*(int *)(*param_1 + 0xb0) + 0x44 + iVar4) + param_1[0xd]) {
    FUN_00dd5650(&DAT_01651cfc);
    return 0;
  }
  puVar6 = (undefined4 *)(param_1[2] + param_2 * 8);
  puVar7 = (undefined4 *)(param_2 * 0x60 + param_1[3]);
  iVar3 = param_2 * 0x14;
  _Dst = (void *)(param_1[0xd] * 0x40 + param_1[4]);
  iVar1 = FUN_00a070e0(param_1[1] + iVar3,param_3);
  if (iVar1 != 0) {
    *puVar6 = *(undefined4 *)(param_1[1] + 4 + iVar3);
    puVar6[1] = *(undefined4 *)(param_1[1] + 0xc + iVar3);
    iVar3 = *(int *)(*param_1 + 0xb0);
    iVar1 = *(int *)(*param_1 + 0xa8);
    iVar2 = *(int *)(iVar4 + 0x44 + iVar3);
    puVar6 = (undefined4 *)(iVar4 + iVar3);
    iVar4 = puVar6[0x10];
    puVar8 = puVar7;
    for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    FID_conflict__memcpy(_Dst,(void *)(iVar4 * 0x40 + iVar1),iVar2 << 6);
    if (0 < iVar2) {
      piVar5 = (int *)((int)_Dst + 0x20);
      do {
        *piVar5 = param_2;
        piVar5 = piVar5 + 0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    puVar7[0x10] = param_1[0xd];
    param_1[0xd] = param_1[0xd] + puVar7[0x11];
    if (param_1[0xd] <= param_1[0xe]) {
      return 1;
    }
    FUN_00dd5650(&DAT_01651cd0);
  }
  return 0;
}

// 00976F10  FUN_00976f10  size=159  [callgraph]
undefined4 __thiscall FUN_00976f10(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + param_2 * 0x14);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + param_2 * 8);
  *(undefined2 *)(piVar1 + 4) = 1;
  *(undefined1 *)((int)piVar1 + 0x12) = 1;
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 0x10 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 0x10),*(undefined4 *)(param_1 + 0x3c));
  *piVar1 = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)param_4 * 2),*(undefined4 *)(param_1 + 0x3c));
    piVar1[2] = iVar3;
    if (iVar3 != 0) {
      piVar1[3] = param_4;
      piVar1[1] = param_3;
      *puVar2 = 0;
      puVar2[1] = 0;
      return 1;
    }
  }
  return 0;
}

// 00976FB0  FUN_00976fb0  size=253  [callgraph]
undefined4 __thiscall FUN_00976fb0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x34) + 1) {
    FUN_00dd5650(&DAT_01651cfc);
    return 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 8) + param_3[2] * 8);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + param_3[2] * 0x14);
  puVar3 = (undefined4 *)param_3[1];
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x34) * 0x40 + *(int *)(param_1 + 0x10));
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  puVar4[2] = puVar3[2];
  puVar4[3] = puVar3[3];
  puVar3 = (undefined4 *)*param_3;
  puVar4[4] = *puVar3;
  puVar4[5] = puVar3[1];
  puVar4[6] = puVar3[2];
  puVar4[7] = puVar3[3];
  puVar4[8] = param_3[2];
  puVar4[10] = *piVar1;
  puVar4[0xb] = param_3[3];
  puVar4[0xc] = piVar1[1];
  puVar4[0xd] = param_3[4];
  puVar4[9] = param_3[5];
  *param_2 = *puVar2;
  param_2[1] = puVar2[2];
  if (((int)(param_3[3] + puVar4[10]) <= (int)puVar2[1]) &&
     ((int)(puVar4[0xc] + param_3[4]) <= (int)puVar2[3])) {
    param_2[2] = puVar4[10];
    param_2[3] = puVar4[0xc];
    *piVar1 = *piVar1 + param_3[3];
    piVar1[1] = piVar1[1] + param_3[4];
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    if (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x38)) {
      return 1;
    }
    FUN_00dd5650(&DAT_01651cd0);
  }
  return 0;
}

// 009770B0  FUN_009770b0  size=106  [callgraph]
void __thiscall FUN_009770b0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_4 + 0x30);
  iVar2 = param_2 * 0x60 + *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_3 + 0x48);
  *(undefined2 *)(iVar2 + 0x50) = *(undefined2 *)(iVar1 + 0x50);
  *(undefined2 *)(iVar2 + 0x52) = *(undefined2 *)(iVar1 + 0x52);
  *(undefined1 *)(iVar2 + 0x54) = *(undefined1 *)(iVar1 + 0x54);
  *(undefined4 *)(iVar2 + 0x40) = param_5;
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_3 + 0x3c);
  FUN_00970040(iVar2,*(int *)(param_1 + 4) + param_2 * 0x14);
  return;
}

// 00977120  FUN_00977120  size=301  [callgraph]
void __thiscall FUN_00977120(int param_1,int param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  
  piVar6 = (int *)(param_2 + 0xb8);
  iVar10 = *(int *)(param_2 + 0xbc);
  param_2 = 0;
  if (0 < iVar10) {
    psVar7 = (short *)(*piVar6 + 6);
    do {
      iVar4 = (int)*psVar7;
      iVar9 = 0;
      iVar5 = 0x7fffffff;
      if (iVar4 < 1) {
LAB_00977188:
        *(undefined2 *)(*(int *)(param_1 + 0x1c) + param_2 * 2) = 0xffff;
      }
      else {
        piVar6 = (int *)(param_3 + psVar7[-1] * 4);
        do {
          iVar3 = *piVar6;
          if (iVar3 != -1) {
            if (iVar3 < iVar5) {
              iVar5 = iVar3;
            }
            iVar9 = iVar9 + 1;
          }
          piVar6 = piVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar9 < 1) goto LAB_00977188;
        psVar1 = (short *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x2c) * 0xc);
        *psVar1 = psVar7[-3];
        psVar1[1] = psVar7[-2];
        iVar4 = 0;
        psVar1[2] = (short)iVar5;
        psVar1[3] = (short)iVar9;
        *(undefined1 *)(psVar1 + 4) = 0;
        if (0 < iVar9) {
          pcVar8 = (char *)(iVar5 * 0x60 + 0x54 + *(int *)(param_1 + 0xc));
          do {
            if ((*pcVar8 == '\0') || (*pcVar8 == '\x02')) {
              *(undefined1 *)(psVar1 + 4) = 1;
              break;
            }
            iVar4 = iVar4 + 1;
            pcVar8 = pcVar8 + 0x60;
          } while (iVar4 < iVar9);
        }
        *(undefined2 *)(*(int *)(param_1 + 0x1c) + param_2 * 2) = *(undefined2 *)(param_1 + 0x2c);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      param_2 = param_2 + 1;
      psVar7 = psVar7 + 6;
    } while (param_2 < iVar10);
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar5 = 0;
    do {
      sVar2 = *(short *)(*(int *)(param_1 + 0x18) + 2 + iVar5);
      if (sVar2 != -1) {
        *(undefined2 *)(*(int *)(param_1 + 0x18) + 2 + iVar5) =
             *(undefined2 *)(*(int *)(param_1 + 0x1c) + sVar2 * 2);
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar10 < *(int *)(param_1 + 0x2c));
  }
  return;
}

// 009772A0  FUN_009772a0  size=287  [callgraph]
undefined4 __thiscall
FUN_009772a0(int param_1,int param_2,float param_3,float param_4,float param_5,undefined4 param_6)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  pfVar3 = (float *)(*(int *)(param_1 + 0x1c) * 0x80 + *(int *)(param_1 + 0x18));
  pfVar3[4] = 3.4028235e+38;
  pfVar3[5] = 3.4028235e+38;
  pfVar3[6] = 3.4028235e+38;
  pfVar3[7] = 1.0;
  pfVar3[0xd] = param_3;
  *pfVar3 = -3.4028235e+38;
  pfVar3[1] = -3.4028235e+38;
  pfVar3[0xe] = param_4;
  pfVar3[2] = -3.4028235e+38;
  pfVar3[0xf] = -NAN;
  pfVar3[3] = 1.0;
  fVar1 = **(float **)(param_2 + 8);
  pfVar3[0x10] = param_5;
  pfVar3[0xc] = fVar1;
  iVar2 = FUN_00976210(pfVar3,param_2,param_6);
  if (iVar2 != 0) {
    if (param_4 == 1.4013e-45) {
      pfVar4 = (float *)(*(int *)(param_1 + 0x10) + 0x18 +
                        (uint)*(ushort *)(*(int *)(param_2 + 8) + 4) * 0x30);
    }
    else {
      pfVar4 = (float *)((uint)*(ushort *)(*(int *)(param_2 + 8) + 4) * 0x30 +
                        *(int *)(param_1 + 0x10));
    }
    iVar2 = FUN_00976060(pfVar4,pfVar3,param_2,param_6);
    if (iVar2 != 0) {
      if (0 < (int)pfVar3[0x17]) {
        pfVar3[8] = (*pfVar3 - pfVar3[4]) * 0.5 + pfVar3[4];
        pfVar3[9] = (pfVar3[1] - pfVar3[5]) * 0.5 + pfVar3[5];
        pfVar3[10] = (pfVar3[2] - pfVar3[6]) * 0.5 + pfVar3[6];
        pfVar3[0xb] = 1.0;
        if (pfVar4[1] != 0.0) {
          *(float **)((int)pfVar4[1] + 0x70) = pfVar3;
        }
        *pfVar4 = param_4;
        pfVar3[0x1c] = 0.0;
        pfVar3[0x1d] = pfVar4[1];
        pfVar4[1] = (float)pfVar3;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return 1;
    }
  }
  return 0;
}

// 009773C0  FUN_009773c0  size=219  [callgraph]
undefined4 __thiscall FUN_009773c0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar1 = (ulonglong)(uint)(param_3 * 2) * 0x80;
  _Dst = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  *(void **)(param_1 + 0x18) = _Dst;
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,param_3 << 8);
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    puVar3 = param_2;
    if (0 < param_3) {
      do {
        switch(*puVar3) {
        case 0:
          uVar6 = 0;
          uVar5 = 0;
          break;
        case 1:
          uVar6 = 0;
          goto LAB_0097744a;
        case 2:
          iVar2 = FUN_009772a0(puVar3,iVar4,0,1,param_4);
          if (iVar2 == 0) {
            return 0;
          }
          uVar6 = 1;
LAB_0097744a:
          uVar5 = 1;
          break;
        case 3:
          uVar6 = 0;
          uVar5 = 3;
          break;
        default:
          goto switchD_0097741b_default;
        }
        iVar2 = FUN_009772a0(puVar3,iVar4,uVar5,uVar6,param_4);
        if (iVar2 == 0) {
          return 0;
        }
switchD_0097741b_default:
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 7;
      } while (iVar4 < param_3);
    }
    if (*(int *)(param_1 + 0x1c) <= param_3 * 2) {
      *(undefined4 **)(param_1 + 0x58) = param_2;
      *(int *)(param_1 + 0x5c) = param_3;
      return 1;
    }
    FUN_00dd5650(&DAT_01651d30);
  }
  return 0;
}

// 009774B0  FUN_009774b0  size=478  [callgraph]
void __thiscall FUN_009774b0(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int local_34;
  float local_30;
  int local_2c;
  
  pfVar11 = (float *)(*(int *)(param_1 + 0x24) * 0x60 + *(int *)(param_1 + 0x20));
  pfVar11[4] = 3.4028235e+38;
  pfVar11[5] = 3.4028235e+38;
  pfVar11[6] = 3.4028235e+38;
  pfVar1 = pfVar11 + 4;
  pfVar11[7] = 1.0;
  *pfVar11 = -3.4028235e+38;
  pfVar11[1] = -3.4028235e+38;
  pfVar11[2] = -3.4028235e+38;
  pfVar11[3] = 1.0;
  iVar9 = *(int *)(*(int *)(param_2 + 0x30) + 0x3c);
  if (param_5 == 1.4013e-45) {
    local_2c = *(int *)(param_1 + 0x10) + 0x18 + iVar9 * 0x30;
  }
  else {
    local_2c = iVar9 * 0x30 + *(int *)(param_1 + 0x10);
  }
  pfVar11[9] = param_5;
  pfVar11[8] = param_3;
  pfVar11[10] = -NAN;
  pfVar11[0xb] = param_4;
  pfVar11[0xc] = 0.0;
  pfVar11[0x13] = *(float *)(*(int *)(param_2 + 0x30) + 0x44);
  FUN_00976290(pfVar11,param_2);
  local_34 = 0;
  fVar3 = (*pfVar11 - *pfVar1) * 0.5 + *pfVar1;
  fVar5 = (pfVar11[1] - pfVar11[5]) * 0.5 + pfVar11[5];
  fVar4 = (pfVar11[2] - pfVar11[6]) * 0.5 + pfVar11[6];
  local_30 = 3.4028235e+38;
  iVar9 = *(int *)(local_2c + 4);
  if (*(int *)(local_2c + 4) != 0) {
    do {
      iVar2 = *(int *)(iVar9 + 0x74);
      if (local_34 == 0) {
        iVar10 = FUN_00d8d820(iVar9,iVar9 + 0x10,pfVar11,pfVar1);
        if (iVar10 != 0) {
          fVar6 = *(float *)(iVar9 + 0x20) - fVar3;
          fVar8 = *(float *)(iVar9 + 0x24) - fVar5;
          fVar7 = *(float *)(iVar9 + 0x28) - fVar4;
          fVar6 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6;
LAB_0097764f:
          local_34 = iVar9;
          local_30 = fVar6;
        }
      }
      else {
        fVar6 = *(float *)(iVar9 + 0x20) - fVar3;
        fVar8 = *(float *)(iVar9 + 0x24) - fVar5;
        fVar7 = *(float *)(iVar9 + 0x28) - fVar4;
        fVar6 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
        if ((fVar6 <= local_30) &&
           (iVar10 = FUN_00d8d820(iVar9,iVar9 + 0x10,pfVar11,pfVar1), iVar10 != 0))
        goto LAB_0097764f;
      }
      iVar9 = iVar2;
    } while (iVar2 != 0);
    if (local_34 != 0) {
      pfVar11[0x16] = *(float *)(local_34 + 0x6c);
      *(float **)(local_34 + 0x6c) = pfVar11;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      return;
    }
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}

// 009776A0  FUN_009776a0  size=207  [callgraph]
undefined4 __thiscall FUN_009776a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = (ulonglong)(uint)(param_3 * 2) * 0x60;
  _Dst = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
  *(void **)(param_1 + 0x20) = _Dst;
  if (_Dst != (void *)0x0) {
    _memset(_Dst,0,param_3 * 0xc0);
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar2 = param_2;
    if (0 < param_3) {
      do {
        switch(*(undefined4 *)(iVar2 + 0x20)) {
        case 0:
          uVar5 = 0;
          uVar4 = 0;
          break;
        case 1:
          uVar5 = 1;
          uVar4 = 0;
          break;
        case 2:
          FUN_009774b0(iVar2,iVar3,1,0);
          uVar5 = 1;
          uVar4 = 1;
          break;
        case 3:
          uVar5 = 3;
          uVar4 = 0;
          break;
        default:
          goto switchD_00977700_default;
        }
        FUN_009774b0(iVar2,iVar3,uVar4,uVar5);
switchD_00977700_default:
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x50;
      } while (iVar3 < param_3);
    }
    if (*(int *)(param_1 + 0x24) <= param_3 * 2) {
      *(int *)(param_1 + 100) = param_3;
      *(int *)(param_1 + 0x60) = param_2;
      return 1;
    }
    FUN_00dd5650(&DAT_01651d5c);
  }
  return 0;
}

// 00977780  FUN_00977780  size=170  [callgraph]
bool __thiscall
FUN_00977780(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  iVar3 = FUN_00976f10(param_5,*(undefined4 *)(param_3 + 0x50),*(undefined4 *)(param_3 + 0x54));
  if (iVar3 == 0) {
    return false;
  }
  piVar2 = *(int **)(param_3 + 0x34);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      if (*(int *)(param_3 + 0x38) != 0) {
        FUN_0096fe80(param_2,param_4,*(undefined4 *)(param_3 + 0x24),param_5);
      }
      iVar3 = FUN_009770b0(param_5,param_3,
                           *(int *)(param_3 + 0x20) * 0x50 + *(int *)(param_1 + 0x60),uVar1);
      return iVar3 != 0;
    }
    if ((*piVar2 == 0) || (iVar3 = FUN_00972d20(param_2,piVar2[2],param_5), iVar3 == 0)) break;
    piVar2 = (int *)piVar2[4];
  }
  return false;
}

// 00977830  FUN_00977830  size=257  [callgraph]
undefined4 __thiscall FUN_00977830(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x18 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 0x18),param_3);
  *(void **)(param_1 + 0x1c) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    _memset(pvVar1,0,param_2 * 0x18);
    pvVar1 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x50 >> 0x20) != 0) |
                                  (uint)((ulonglong)param_2 * 0x50),param_3);
    *(void **)(param_1 + 0x20) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      _memset(pvVar1,0,param_2 * 0x50);
      pvVar1 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x14 >> 0x20) != 0) |
                                    (uint)((ulonglong)param_2 * 0x14),param_3);
      *(void **)(param_1 + 0x24) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        _memset(pvVar1,0,param_2 * 0x14);
        pvVar1 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                                      (uint)((ulonglong)param_2 * 8),param_4);
        *(void **)(param_1 + 0x14) = pvVar1;
        if (pvVar1 != (void *)0x0) {
          _memset(pvVar1,0,param_2 * 8);
          *(uint *)(param_1 + 0x50) = param_2;
          *(uint *)(param_1 + 0x54) = param_2;
          *(uint *)(param_1 + 0x58) = param_2;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00977940  FUN_00977940  size=280  [callgraph]
undefined4 __thiscall FUN_00977940(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x14 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 0x14),param_3);
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)param_2 * 0x10),param_3);
    *(int *)(param_1 + 0x2c) = iVar2;
    if (iVar2 != 0) {
      pvVar3 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x50 >> 0x20) != 0) |
                                    (uint)((ulonglong)param_2 * 0x50),param_3);
      *(void **)(param_1 + 0x30) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        _memset(pvVar3,0,param_2 * 0x50);
        if (*(int *)(param_1 + 0x3c) < 1) {
LAB_00977a35:
          *(uint *)(param_1 + 0x44) = param_2;
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          return 1;
        }
        pvVar3 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0xc >> 0x20) != 0) |
                                      (uint)((ulonglong)param_2 * 0xc),param_3);
        *(void **)(param_1 + 0x34) = pvVar3;
        if (pvVar3 != (void *)0x0) {
          _memset(pvVar3,0,param_2 * 0xc);
          lVar1 = (ulonglong)*(uint *)(param_1 + 0x3c) * 4;
          iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_3);
          *(int *)(param_1 + 0x38) = iVar2;
          if (iVar2 != 0) goto LAB_00977a35;
        }
      }
    }
  }
  return 0;
}

// 00977A60  FUN_00977a60  size=416  [callgraph]
undefined4 __thiscall
FUN_00977a60(int *param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
            undefined4 param_7)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_5 + 0xbc);
  pvVar2 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x14 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 0x14),param_6);
  param_1[1] = (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    _memset(pvVar2,0,param_2 * 0x14);
    pvVar2 = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                                  (uint)((ulonglong)param_2 * 8),param_7);
    param_1[2] = (int)pvVar2;
    if (pvVar2 != (void *)0x0) {
      _memset(pvVar2,0,param_2 * 8);
      iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x60 >> 0x20) != 0) |
                           (uint)((ulonglong)param_2 * 0x60),param_6);
      param_1[3] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 0x40 >> 0x20) != 0) |
                             (uint)((ulonglong)param_3 * 0x40),param_6);
        param_1[4] = iVar3;
        if (iVar3 != 0) {
          iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 0xc >> 0x20) != 0) |
                               (uint)((ulonglong)uVar1 * 0xc),param_6);
          param_1[6] = iVar3;
          if (iVar3 != 0) {
            iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                                 (uint)((ulonglong)uVar1 * 2),param_7);
            param_1[7] = iVar3;
            if (iVar3 != 0) {
              _memset((void *)param_1[6],0,uVar1 * 0xc);
              if (0 < (int)param_4) {
                iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 0x70 >> 0x20) != 0) |
                                     (uint)((ulonglong)param_4 * 0x70),param_6);
                param_1[8] = iVar3;
                if (iVar3 == 0) {
                  return 0;
                }
              }
              param_1[10] = param_4;
              param_1[9] = 0;
              param_1[0xd] = 0;
              param_1[0xb] = 0;
              param_1[5] = param_2;
              param_1[0xe] = param_3;
              param_1[0xc] = uVar1;
              param_1[0xf] = param_6;
              *param_1 = param_5;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00977C00  FUN_00977c00  size=456  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00977ca1) */

undefined4 __thiscall
FUN_00977c00(int param_1,float *param_2,float param_3,undefined2 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float unaff_ESI;
  float *pfVar4;
  float fStack_a4;
  undefined1 auStack_9c [4];
  float local_98;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [88];
  
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x28))) {
    pfVar4 = (float *)(*(int *)(param_1 + 0x24) * 0x70 + *(int *)(param_1 + 0x20));
    fVar2 = param_2[5];
    fVar3 = param_2[1];
    local_98 = (param_2[6] - param_2[2]) * 0.5;
    *pfVar4 = *param_2 + (param_2[4] - *param_2) * 0.5;
    pfVar4[1] = (fVar2 - fVar3) * 0.5 + param_2[1];
    pfVar4[2] = local_98 + param_2[2];
    pfVar4[3] = 1.0;
    D3DXVec4Transform(pfVar4,pfVar4,param_6);
    pfVar1 = pfVar4 + 4;
    if (param_7 == 0) {
      *pfVar1 = *(float *)(param_6 + 0xb0) * -1.0;
      pfVar4[5] = *(float *)(param_6 + 0xb4) * -1.0;
      pfVar4[6] = *(float *)(param_6 + 0xb8) * -1.0;
      fVar2 = *(float *)(param_6 + 0xbc) * -1.0;
    }
    else {
      *pfVar1 = *(float *)(param_6 + 0xb0);
      pfVar4[5] = *(float *)(param_6 + 0xb4);
      pfVar4[6] = *(float *)(param_6 + 0xb8);
      fVar2 = *(float *)(param_6 + 0xbc);
    }
    pfVar4[7] = fVar2;
    if (fStack_a4 < unaff_ESI) {
      fStack_a4 = unaff_ESI;
    }
    pfVar4[0x18] = fStack_a4;
    pfVar4[0x19] = param_3;
    *(undefined2 *)(pfVar4 + 0x1a) = param_4;
    FUN_00de2bc0(auStack_9c,&stack0xffffff54,pfVar1,&stack0xffffff54,0x3f800000,0x40490fdb);
    fStack_6c = *pfVar4;
    fStack_68 = pfVar4[1];
    fStack_64 = pfVar4[2];
    uStack_60 = 0x3f800000;
    D3DXMatrixInverse(auStack_5c,0,param_5);
    D3DXMatrixMultiply(pfVar4 + 8,&stack0xffffff58,&fStack_68);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    return 1;
  }
  return 0;
}

